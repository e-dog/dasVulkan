#!/usr/bin/python3

# This file was part of volk library, before it was bit by a radioactive basilisk
# and mutated into Daslang bindings.

# volk Copyright (c) 2018-2024 Arseny Kapoulkine
# Daslang bindings (c) 2024-2025 Aleksei Volynskov
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.


from collections import OrderedDict
import re
import sys, os
import urllib
import xml.etree.ElementTree as etree
from xml.dom import minidom
from functools import cmp_to_key
import urllib.request

cmdversions = {
  "vkCmdSetDiscardRectangleEnableEXT": 2,
  "vkCmdSetDiscardRectangleModeEXT": 2,
  "vkCmdSetExclusiveScissorEnableNV": 2
}

skiptypes = {
  'VkAccelerationStructureInstanceKHR', # bitfields
  'VkAccelerationStructureSRTMotionInstanceNV', # bitfields
  'VkAccelerationStructureMatrixMotionInstanceNV', # bitfields
}

def parse_xml(path):
  file = urllib.request.urlopen(path) if path.startswith("http") else open(path, 'r')
  with file:
    tree = etree.parse(file)
    return tree

def patch_file(path, blocks):
  result = []
  block = None

  with open(path, 'r') as file:
    for line in file.readlines():
      if block:
        if line == block:
          result.append(line)
          block = None
      else:
        result.append(line)
        # C comment marker
        if line.strip().startswith('/* VOLK_GENERATE_'):
          block = line
          result.append(blocks[line.strip()[17:-3]])
        # Shell/CMake comment marker
        elif line.strip().startswith('# VOLK_GENERATE_'):
          block = line
          result.append(blocks[line.strip()[16:]])

  with open(path, 'w', newline='\n') as file:
    for line in result:
      file.write(line)

def is_descendant_type(types, name, base):
  if name == base:
    return True
  type = types.get(name)
  if not type:
    return False
  parents = type.get('parent')
  if not parents:
    return False
  return any([is_descendant_type(types, parent, base) for parent in parents.split(',')])

def defined(key):
  return 'defined(' + key + ')'

def cdepends(key):
  return re.sub(r'[a-zA-Z0-9_]+', lambda m: defined(m.group(0)), key).replace(',', ' || ').replace('+', ' && ')

def regroup(some_groups):
  some_to_groups = OrderedDict()

  for (group, cmdnames) in some_groups.items():
    for name in cmdnames:
      some_to_groups.setdefault(name, []).append(group)

  for (group, cmdnames) in some_groups.items():
    some_groups[group] = [name for name in cmdnames if len(some_to_groups[name]) == 1]

  for (name, groups) in some_to_groups.items():
    if len(groups) == 1:
      continue
    key = ' || '.join(['(' + g + ')' for g in groups])
    some_groups.setdefault(key, []).append(name)

def patch_files(blocks):
  files = [
    'dasVulkan.cpp',
    'dasVulkan.h',
    'dasVulkanBuiltin.cpp',
    'dasVulkanAnnotations.cpp',
    'dasVulkanEnums.cpp',
    'dasVulkanFunctions.cpp',
    ]
  for fn in files:
    patch_file(fn, blocks)


if __name__ == "__main__":
  # specpath = "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/main/xml/vk.xml"
  specpath = "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/c7a3955e47d223c6a37fb29e2061c973eec98d0a/xml/vk.xml" # 303

  if len(sys.argv) > 1:
    specpath = sys.argv[1]

  blocks = {}

  das_keywords = ('type', 'module', 'range')

  block_keys = ('BIND_FUNC', 'WRAP_FUNC', 'TYPE_FACTORY', 'DECL_ENUM', 'DECL_ANN', 'BIND_ANN', 'BIND_ENUM', 'DAS_TYPEDEF', 'DAS_GLOBAL')

  for key in block_keys:
    blocks[key] = ''

  if specpath == "--clean":
    blocks['VERSION'] = ''
    patch_files(blocks)
    sys.exit()

  spec = parse_xml(specpath)

  version = spec.find('types/type[name="VK_HEADER_VERSION"]')
  blocks['VERSION'] = version.find('name').tail.strip() + '\n'
  blocks['VERSION_DEFINE'] = '#define VOLK_HEADER_VERSION ' + version.find('name').tail.strip() + '\n'

  print(version.find('name').tail.strip())

  command_groups = OrderedDict()
  type_groups = OrderedDict()
  enum_groups = OrderedDict()
  instance_commands = set()

  for feature in spec.findall('feature'):
    api = feature.get('api')
    if 'vulkan' not in api.split(','):
      for t in feature.findall('require/type'):
        skiptypes.add(t.get('name'))
      continue
    key = defined(feature.get('name'))
    cmdrefs = feature.findall('require/command')
    command_groups[key] = [cmdref.get('name') for cmdref in cmdrefs]
    type_groups[key] = [t.get('name') for t in feature.findall('require/type')]
    enum_groups[key] = [(e.get('extends'), e.get('name')) for e in feature.findall('require/enum')]

  sortedExt = sorted(spec.findall('extensions/extension'), key=lambda ext: ext.get('name'))
  for ext in sortedExt:
    supported = ext.get('supported')
    if 'vulkan' not in supported.split(','):
      for t in ext.findall('require/type'):
        skiptypes.add(t.get('name'))
      continue
    name = ext.get('name')
    type = ext.get('type')
    for req in ext.findall('require'):
      key = defined(name)
      if req.get('feature'): # old-style XML depends specification
        for i in req.get('feature').split(','):
          key += ' && ' + defined(i)
      if req.get('extension'): # old-style XML depends specification
        for i in req.get('extension').split(','):
          key += ' && ' + defined(i)
      if req.get('depends'): # new-style XML depends specification
        dep = cdepends(req.get('depends'))
        key += ' && ' + ('(' + dep + ')' if '||' in dep else dep)
      cmdrefs = req.findall('command')
      for cmdref in cmdrefs:
        ver = cmdversions.get(cmdref.get('name'))
        if ver:
          command_groups.setdefault(key + ' && ' + name.upper() + '_SPEC_VERSION >= ' + str(ver), []).append(cmdref.get('name'))
        else:
          command_groups.setdefault(key, []).append(cmdref.get('name'))
      if type == 'instance':
        for cmdref in cmdrefs:
          instance_commands.add(cmdref.get('name'))

      for t in req.findall('type'):
        type_groups.setdefault(key, []).append(t.get('name'))

      for e in req.findall('enum'):
        enum_groups.setdefault(key, []).append((e.get('extends'), e.get('name')))

  regroup(command_groups)
  regroup(type_groups)
  regroup(enum_groups)

  commands = {}

  for cmd in spec.findall('commands/command'):
    if not cmd.get('alias'):
      name = cmd.findtext('proto/name')
      commands[name] = cmd

  for cmd in spec.findall('commands/command'):
    if cmd.get('alias'):
      name = cmd.get('name')
      commands[name] = commands[cmd.get('alias')]

  # get and sort types
  types = {}

  for type in spec.findall('types/type'):
    name = type.findtext('name')
    if not name:
      name = type.get('name')
    if name:
      if name in skiptypes: continue
      types[name] = type
    else:
      print('!!!', minidom.parseString(etree.tostring(type)).toprettyxml())

  types = list(types.items())
  types.sort(key=lambda x: x[0])

  i = len(types)-1
  while i>=0:
    ti = types[i][1]
    for j in range(i+1, len(types)):
      nj = types[j][0]
      if any([m.find('type').text == nj for m in ti.findall('member')]):
        types.insert(i, types.pop(j))
        i += 1
    i -= 1

  types = OrderedDict(types)

  type_to_groups = {}
  for (group, names) in type_groups.items():
    for name in names:
      type_to_groups.setdefault(name, []).append(group)

  ungrouped_types = list(sorted(list(set(types.keys())-set(type_to_groups.keys()))))
  # print(skiptypes)
  type_groups[''] = ungrouped_types
  type_groups.move_to_end('', last=False)
  # for (n, t) in ungrouped_types.items():
  #   print(n, minidom.parseString(etree.tostring(t)).toprettyxml())

  def commonPrefix(enum, names):
    prefix = os.path.commonprefix(names)
    if prefix not in names: return prefix

    if enum.endswith('FlagBits'): enum = enum[:-8]

    prefix = ''
    for i in range(len(enum)):
      if enum[i].isupper() and i > 0:
        prefix += '_'
      prefix += enum[i].upper()

    prefix = os.path.commonprefix(names+[prefix])

    if prefix not in names: return prefix

    if prefix[:3] != 'VK_': return ''
    prefix = 'VK_'
    if prefix not in names: return prefix

    return ''

  def shortName(prefix, name):
    assert(name[:len(prefix)] == prefix)
    n = name[len(prefix):]
    if n == '': print(prefix)
    if n[0].isdigit(): n = '_'+n
    return n

  for (group, vnames) in enum_groups.items():
    first = True
    for (en, vn) in vnames:
      if en: continue
      for e in spec.findall(f"enums[@type='constants']/enum[@name='{vn}']"):
        if first:
          first = False
          blocks['DAS_GLOBAL'] += f'#if {group}\n'
          blocks['BIND_ENUM'] += f'#if {group}\n'
        if e.get('alias'):
          blocks['DAS_GLOBAL'] += f'"let {vn}={e.get("alias")}\\n"\n'
        else:
          blocks['BIND_ENUM'] += f'  addConstant<{e.get("type")}>(*this,"{vn}",{vn});\n'
    if not first:
      blocks['DAS_GLOBAL'] += f'#endif /* {group} */\n'
      blocks['BIND_ENUM'] += f'#endif /* {group} */\n'

  for (group, typenames) in type_groups.items():
    ifdef = ('#if ' + group + '\n') if group != '' else ''

    for key in block_keys:
      blocks[key] += ifdef

    for name in sorted(typenames):
      if name not in types: continue
      if name in skiptypes: continue
      typ = types[name]
      if typ.get('alias'): continue

      # if not typ.get('category'):
      #   print(name, minidom.parseString(etree.tostring(typ)).toprettyxml())

      if typ.get('category') == 'enum':
        enum = spec.find(f"enums[@name='{name}']")
        if enum == None: continue
        names = [e.get('name') for e in enum.findall('./enum') if not e.get('protect') and not e.get('deprecated')]
        if not names: continue
        # bitmasks and enums
        is64 = (enum.get('bitwidth') == '64')
        if not is64:
          blocks['TYPE_FACTORY'] += f'DAS_BIND_ENUM_CAST({name})\n'
          blocks['TYPE_FACTORY'] += f'DAS_BASE_BIND_ENUM_FACTORY({name}, "{name}")\n'
        blocks['DECL_ENUM'] += f'class Enumeration{name}:public das::Enumeration{{public:\n'
        blocks['DECL_ENUM'] += f'Enumeration{name}():das::Enumeration("{name}") {{\n'
        blocks['DECL_ENUM'] += f'  external=true; cppName="{name}";\n'
        if is64:
          blocks['DECL_ENUM'] += f'  baseType=das::tUInt64;\n'
        else:
          blocks['DECL_ENUM'] += f'  baseType=(das::Type)das::ToBasicType<das::underlying_type<{name}>::type>::type;\n'

        for (egrp, vnames) in enum_groups.items():
          for (en, vn) in vnames:
            if en != name: continue
            names.append(vn)
        prefix = commonPrefix(name, names)

        for e in enum.findall('./enum'):
          if e.get('protect') or e.get('deprecated'): continue
          vn = e.get('name')
          blocks['DECL_ENUM'] += f'  addI("{shortName(prefix, vn)}", int64_t({vn}), das::LineInfo());\n'
        for (egrp, vnames) in enum_groups.items():
          first = True
          for (en, vn) in vnames:
            if en != name: continue
            if first:
              first = False
              blocks['DECL_ENUM'] += f'#if {egrp}\n'
            blocks['DECL_ENUM'] += f'  addI("{shortName(prefix, vn)}", int64_t({vn}), das::LineInfo());\n'
          if not first:
            blocks['DECL_ENUM'] += f'#endif /* {egrp} */\n'
        blocks['DECL_ENUM'] += '} };\n'
        blocks['BIND_ENUM'] += f'addEnumeration(make_smart<Enumeration{name}>());\n'
        if enum.get('type') == 'bitmask':
          if is64:
            blocks['DAS_GLOBAL'] += f'"def {name}(v:uint64) {{ return unsafe(reinterpret<{name}> v); }}\\n"\n'
            blocks['DAS_GLOBAL'] += f'"def operator |(a,b:{name}) {{ return {name}(uint64(a)|uint64(b)); }} \\n"\n'
            blocks['DAS_GLOBAL'] += f'"def operator &(a,b:{name}) {{ return {name}(uint64(a)&uint64(b)); }}\\n"\n'
            blocks['DAS_GLOBAL'] += f'"def operator &&(a,b:{name}) {{ return (uint64(a)&uint64(b))!=0ul; }}\\n"\n'
          else:
            blocks['BIND_ENUM'] += f'addEnumFlagOps<{name}>(*this,lib,"{name}");\n'
            blocks['BIND_ENUM'] += f'addExtern<bool(*)(uint32_t,{name}),das_operator_enum_AND_AND<{name}>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<{name}>::invoke");\n'
      elif typ.get('category') == 'handle':
        blocks['TYPE_FACTORY'] += f'MAKE_TYPE_FACTORY({name}_T, {name}_T)\n'
        blocks['BIND_ANN'] += f'addAnnotation(make_smart<DummyTypeAnnotation>("{name}_T", "{name}_T", 1, 1));\n'
        blocks['DAS_TYPEDEF'] += f'"typedef {name} = {name}_T?\\n"\n'
      elif not typ.get('category') and typ.get('requires', '').startswith('vk_video/'):
        blocks['TYPE_FACTORY'] += f'MAKE_TYPE_FACTORY({name}, {name})\n'
        blocks['BIND_ANN'] += f'addAnnotation(make_smart<DummyTypeAnnotation>("{name}", "{name}", sizeof({name}), alignof({name})));\n'

    if group:
      for key in block_keys:
        if blocks[key].endswith(ifdef):
          blocks[key] = blocks[key][:-len(ifdef)]
        else:
          blocks[key] += '#endif /* ' + group + ' */\n'

  # structs
  lastGroup = None
  str_block_keys = ('TYPE_FACTORY', 'DECL_ENUM', 'DECL_ANN', 'BIND_ANN', 'DAS_GLOBAL', 'WRAP_FUNC')

  for (name, typ) in types.items():
    if name in skiptypes: continue
    if typ.get('alias'): continue
    if typ.get('category') == 'struct' or typ.get('category') == 'union':
      for (group, typenames) in type_groups.items():
        if name not in typenames: continue

        if group != lastGroup:
          if lastGroup:
            for key in str_block_keys:
              blocks[key] += f'#endif /* {lastGroup} */\n'

          lastGroup = group
          if group:
            for key in str_block_keys:
              blocks[key] += f'#if {group}\n'

        blocks['TYPE_FACTORY'] += f'MAKE_TYPE_FACTORY({name}, {name})\n'
        blocks['DECL_ANN'] += f'struct {name}Annotation : ManagedStructureAnnotation<{name}> {{\n'
        blocks['DECL_ANN'] += f'  {name}Annotation(ModuleLibrary &lib):ManagedStructureAnnotation("{name}", lib) {{\n'
        for m in typ.findall('member'):
          if m.find('type').text in skiptypes: continue
          if m.get('api', 'vulkan') != 'vulkan': continue
          fn = m.find('name').text
          dfn = fn
          if dfn in das_keywords: dfn = '_'+dfn
          blocks['DECL_ANN'] += f'    addFieldEx("{dfn}", "{fn}", offsetof(ManagedType, {fn}), das::makeFieldType<decltype(das::declval<ManagedType>().{fn})>(*mlib));\n'
        blocks['DECL_ANN'] += f'  }}\n  virtual bool isLocal() const override {{ return true; }}\n}};\n'
        blocks['BIND_ANN'] += f'addAnnotation(make_smart<{name}Annotation>(lib));\n'
        # blocks['BIND_ANN'] += f'makeCtor(addExtern<DAS_BIND_FUN(CTOR_{name}), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "{name}", SideEffects::none, "CTOR_{name}"));\n'
        # blocks['WRAP_FUNC'] += f'{name} CTOR_{name}() {{ {name} s; memset(&s, 0, sizeof(s));'
        # m = typ.find('./member[1]')
        # if m != None and m.get('values') and m.find('name').text == 'sType':
        #   blocks['WRAP_FUNC'] += f' s.sType = {m.get("values")};'
        # blocks['WRAP_FUNC'] += f' return s; }}\n'

        m = typ.find('./member[1]')
        if m != None and m.get('values') and m.find('name').text == 'sType':
          blocks['DAS_GLOBAL'] += f'"def {name}() {{ var self: {name};"\n'
          blocks['DAS_GLOBAL'] += f'" self.sType = VkStructureType.{m.get("values")[18:]};"\n'
          blocks['DAS_GLOBAL'] += f'" return <- self; }}\\n"\n'
          blocks['DAS_GLOBAL'] += f'"def struct_type(t: {name} explicit) {{ return VkStructureType.{m.get("values")[18:]}; }}\\n"\n'

  if lastGroup:
    for key in str_block_keys:
      blocks[key] += f'#endif /* {lastGroup} */\n'

  # commands
  for (group, cmdnames) in command_groups.items():
    ifdef = '#if ' + group + '\n'

    for key in block_keys:
      blocks[key] += ifdef

    for name in sorted(cmdnames):
      cmd = commands[name]
      type = cmd.findtext('param[1]/type')

      if name == 'vkGetInstanceProcAddr':
        type = ''
      if name == 'vkGetDeviceProcAddr':
        type = 'VkInstance'

      rtype = cmd.findtext('proto/type')
      if rtype == 'VkBool32': rtype = 'bool'
      params = [p for p in cmd.findall('./param') if p.get('api', 'vulkan')=='vulkan']

      def canBeRef(p):
        return (p.get('optional', 'false').startswith('false') and p.get('len')==None
          and p.find('type').text!='void'
          and p.find('type').tail.strip()=='*' and not p.find('name').tail)

      def genParam(p):
        if canBeRef(p):
          return p.tail+p.findtext('type')+'& '+p.findtext('name')
        return ''.join(p.itertext())

      def genArg(p):
        return ('&' if canBeRef(p) else '') + p.findtext('name', '')

      blocks['WRAP_FUNC'] += f'{rtype} WRAP_{name}('+', '.join([genParam(p) for p in params])+')'
      blocks['WRAP_FUNC'] += f' {{ {"" if rtype=="void" else "return "}{name}('+', '.join([genArg(p) for p in params])+'); }\n'

      # if rtype != 'void' and rtype != 'VkResult':
      #   print(''.join(cmd.find('proto').itertext()))
      blocks['BIND_FUNC'] += f'addExtern<DAS_BIND_FUN(WRAP_{name})>(*this, lib, "{name}", SideEffects::worstDefault, "WRAP_{name}")\n'
      blocks['BIND_FUNC'] += f'  ->args({{'+', '.join(['"'+p.findtext('name', '')+'"' for p in params])+'});\n'

      # if name == 'vkCreateSharedSwapchainsKHR':
      #   print(minidom.parseString(etree.tostring(cmd)).toprettyxml())
      # print(''.join(cmd.find('proto').itertext())+'('+', '.join([''.join(p.itertext()) for p in cmd.iter('param')])+')')

    for key in block_keys:
      if blocks[key].endswith(ifdef):
        blocks[key] = blocks[key][:-len(ifdef)]
      else:
        blocks[key] += '#endif /* ' + group + ' */\n'

  # print(set([t.get('category', '?') for t in types.values()]))

  patch_files(blocks)
