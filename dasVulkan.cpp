#include "dasVulkan.h"

namespace das {

int vk_api_version_variant(uint32_t v) { return VK_API_VERSION_VARIANT(v); }
int vk_api_version_major(uint32_t v) { return VK_API_VERSION_MAJOR(v); }
int vk_api_version_minor(uint32_t v) { return VK_API_VERSION_MINOR(v); }
int vk_api_version_patch(uint32_t v) { return VK_API_VERSION_PATCH(v); }
uint32_t vk_make_api_version(int v, int mj, int mn, int p) { return VK_MAKE_API_VERSION(v, mj, mn, p); }

static VkBool32 VKAPI_PTR messenger_callback(
  VkDebugUtilsMessageSeverityFlagBitsEXT           severity,
  VkDebugUtilsMessageTypeFlagsEXT                  messageTypes,
  const VkDebugUtilsMessengerCallbackDataEXT*      data,
  void*                                            pUserData)
{
  int level = LogLevel::debug;
  if (severity & VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT)
    level = LogLevel::error;
  else if (severity & VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT)
    level = LogLevel::warning;
  else if (severity & VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT)
    level = LogLevel::info;

  string s = "VK ";
  if (data->pMessageIdName) s += data->pMessageIdName;
  s += ": ";
  if (data->pMessage) s += data->pMessage;
  s += "\n";

  das::logger(level, getLogMarker(level), s.c_str(), (Context*)pUserData, nullptr);
  return VK_FALSE;
}

void vk_set_debug_messenger_callback(VkDebugUtilsMessengerCreateInfoEXT &info, Context *context)
{
  info.pUserData = context;
  info.pfnUserCallback = messenger_callback;
}

Module_dasVulkan::Module_dasVulkan() : Module("vulkan")
{
  das::ModuleLibrary lib(this);

#ifdef VK_KHR_win32_surface
  addAnnotation(make_smart<DummyTypeAnnotation>("HMONITOR", "HMONITOR", sizeof(HMONITOR), alignof(HMONITOR)));
  addAnnotation(make_smart<DummyTypeAnnotation>("HINSTANCE", "HINSTANCE", sizeof(HINSTANCE), alignof(HINSTANCE)));
  addAnnotation(make_smart<DummyTypeAnnotation>("HWND", "HWND", sizeof(HWND), alignof(HWND)));
#endif

#if defined(VK_KHR_external_fence_win32)
  addAnnotation(make_smart<DummyTypeAnnotation>("SECURITY_ATTRIBUTES", "SECURITY_ATTRIBUTES", 1, 1));
#endif

  bindAnnotations(lib);
  bindEnums(lib);
  bindFunctions(lib);

  addExtern<DAS_BIND_FUN(volkGetInstanceVersion)>(*this, lib, "volkGetInstanceVersion", SideEffects::accessExternal, "volkGetInstanceVersion");
  addExtern<DAS_BIND_FUN(volkLoadInstance)>(*this, lib, "volkLoadInstance", SideEffects::modifyExternal, "volkLoadInstance");
  addExtern<DAS_BIND_FUN(volkLoadInstanceOnly)>(*this, lib, "volkLoadInstanceOnly", SideEffects::modifyExternal, "volkLoadInstanceOnly");
  addExtern<DAS_BIND_FUN(volkLoadDevice)>(*this, lib, "volkLoadDevice", SideEffects::modifyExternal, "volkLoadDevice");
  addExtern<DAS_BIND_FUN(volkGetLoadedInstance)>(*this, lib, "volkGetLoadedInstance", SideEffects::accessExternal, "volkGetLoadedInstance");
  addExtern<DAS_BIND_FUN(volkGetLoadedDevice)>(*this, lib, "volkGetLoadedDevice", SideEffects::accessExternal, "volkGetLoadedDevice");
  addExtern<DAS_BIND_FUN(vk_api_version_variant)>(*this, lib, "vk_api_version_variant", SideEffects::none, "vk_api_version_variant");
  addExtern<DAS_BIND_FUN(vk_api_version_major)>(*this, lib, "vk_api_version_major", SideEffects::none, "vk_api_version_major");
  addExtern<DAS_BIND_FUN(vk_api_version_minor)>(*this, lib, "vk_api_version_minor", SideEffects::none, "vk_api_version_minor");
  addExtern<DAS_BIND_FUN(vk_api_version_patch)>(*this, lib, "vk_api_version_patch", SideEffects::none, "vk_api_version_patch");
  addExtern<DAS_BIND_FUN(vk_make_api_version)>(*this, lib, "vk_make_api_version", SideEffects::none, "vk_make_api_version");
  addExtern<DAS_BIND_FUN(vk_set_debug_messenger_callback)>(*this, lib, "vk_set_debug_messenger_callback", SideEffects::modifyArgumentAndExternal, "vk_set_debug_messenger_callback");
  addConstant<uint32_t>(*this, "VK_API_VERSION_1_0", VK_API_VERSION_1_0);
  addConstant<uint32_t>(*this, "VK_API_VERSION_1_1", VK_API_VERSION_1_1);
  addConstant<uint32_t>(*this, "VK_API_VERSION_1_2", VK_API_VERSION_1_2);
  addConstant<uint32_t>(*this, "VK_API_VERSION_1_3", VK_API_VERSION_1_3);

addConstant<uint32_t>(*this, "VK_HEADER_VERSION",
/* VOLK_GENERATE_VERSION */
303
/* VOLK_GENERATE_VERSION */
);

  compileBuiltin();

  verifyAotReady();
}

ModuleAotType Module_dasVulkan::aotRequire(TextWriter &tw) const
{
  tw << "#include <volk/volk.h>\n";
  return das::ModuleAotType::cpp;
}

}
REGISTER_MODULE_IN_NAMESPACE(Module_dasVulkan, das);
