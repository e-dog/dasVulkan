#include "dasVulkan.h"

namespace das {

/* VOLK_GENERATE_DECL_ENUM */
#if defined(VK_VERSION_1_0)
class EnumerationVkAccessFlagBits:public das::Enumeration{public:
EnumerationVkAccessFlagBits():das::Enumeration("VkAccessFlagBits") {
  external=true; cppName="VkAccessFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAccessFlagBits>::type>::type;
  addI("INDIRECT_COMMAND_READ_BIT", int64_t(VK_ACCESS_INDIRECT_COMMAND_READ_BIT), das::LineInfo());
  addI("INDEX_READ_BIT", int64_t(VK_ACCESS_INDEX_READ_BIT), das::LineInfo());
  addI("VERTEX_ATTRIBUTE_READ_BIT", int64_t(VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT), das::LineInfo());
  addI("UNIFORM_READ_BIT", int64_t(VK_ACCESS_UNIFORM_READ_BIT), das::LineInfo());
  addI("INPUT_ATTACHMENT_READ_BIT", int64_t(VK_ACCESS_INPUT_ATTACHMENT_READ_BIT), das::LineInfo());
  addI("SHADER_READ_BIT", int64_t(VK_ACCESS_SHADER_READ_BIT), das::LineInfo());
  addI("SHADER_WRITE_BIT", int64_t(VK_ACCESS_SHADER_WRITE_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_READ_BIT", int64_t(VK_ACCESS_COLOR_ATTACHMENT_READ_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_WRITE_BIT", int64_t(VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_READ_BIT", int64_t(VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_WRITE_BIT", int64_t(VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT), das::LineInfo());
  addI("TRANSFER_READ_BIT", int64_t(VK_ACCESS_TRANSFER_READ_BIT), das::LineInfo());
  addI("TRANSFER_WRITE_BIT", int64_t(VK_ACCESS_TRANSFER_WRITE_BIT), das::LineInfo());
  addI("HOST_READ_BIT", int64_t(VK_ACCESS_HOST_READ_BIT), das::LineInfo());
  addI("HOST_WRITE_BIT", int64_t(VK_ACCESS_HOST_WRITE_BIT), das::LineInfo());
  addI("MEMORY_READ_BIT", int64_t(VK_ACCESS_MEMORY_READ_BIT), das::LineInfo());
  addI("MEMORY_WRITE_BIT", int64_t(VK_ACCESS_MEMORY_WRITE_BIT), das::LineInfo());
#if defined(VK_VERSION_1_3)
  addI("NONE", int64_t(VK_ACCESS_NONE), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_blend_operation_advanced)
  addI("COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT", int64_t(VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_EXT_conditional_rendering)
  addI("CONDITIONAL_RENDERING_READ_BIT_EXT", int64_t(VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_EXT_device_generated_commands)
  addI("COMMAND_PREPROCESS_READ_BIT_EXT", int64_t(VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_EXT), das::LineInfo());
  addI("COMMAND_PREPROCESS_WRITE_BIT_EXT", int64_t(VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_fragment_density_map)
  addI("FRAGMENT_DENSITY_MAP_READ_BIT_EXT", int64_t(VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_EXT_transform_feedback)
  addI("TRANSFORM_FEEDBACK_WRITE_BIT_EXT", int64_t(VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT), das::LineInfo());
  addI("TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT", int64_t(VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT), das::LineInfo());
  addI("TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT", int64_t(VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_READ_BIT_KHR", int64_t(VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_WRITE_BIT_KHR", int64_t(VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR", int64_t(VK_ACCESS_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_synchronization2)
  addI("NONE_KHR", int64_t(VK_ACCESS_NONE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) */
#if defined(VK_NV_device_generated_commands)
  addI("COMMAND_PREPROCESS_READ_BIT_NV", int64_t(VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV), das::LineInfo());
  addI("COMMAND_PREPROCESS_WRITE_BIT_NV", int64_t(VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_ray_tracing)
  addI("ACCELERATION_STRUCTURE_READ_BIT_NV", int64_t(VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_WRITE_BIT_NV", int64_t(VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_shading_rate_image)
  addI("SHADING_RATE_IMAGE_READ_BIT_NV", int64_t(VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_shading_rate_image) */
} };
class EnumerationVkAttachmentDescriptionFlagBits:public das::Enumeration{public:
EnumerationVkAttachmentDescriptionFlagBits():das::Enumeration("VkAttachmentDescriptionFlagBits") {
  external=true; cppName="VkAttachmentDescriptionFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAttachmentDescriptionFlagBits>::type>::type;
  addI("_MAY_ALIAS_BIT", int64_t(VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT), das::LineInfo());
} };
class EnumerationVkAttachmentLoadOp:public das::Enumeration{public:
EnumerationVkAttachmentLoadOp():das::Enumeration("VkAttachmentLoadOp") {
  external=true; cppName="VkAttachmentLoadOp";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAttachmentLoadOp>::type>::type;
  addI("LOAD", int64_t(VK_ATTACHMENT_LOAD_OP_LOAD), das::LineInfo());
  addI("CLEAR", int64_t(VK_ATTACHMENT_LOAD_OP_CLEAR), das::LineInfo());
  addI("DONT_CARE", int64_t(VK_ATTACHMENT_LOAD_OP_DONT_CARE), das::LineInfo());
#if defined(VK_VERSION_1_4)
  addI("NONE", int64_t(VK_ATTACHMENT_LOAD_OP_NONE), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_load_store_op_none)
  addI("NONE_EXT", int64_t(VK_ATTACHMENT_LOAD_OP_NONE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_load_store_op_none) */
#if defined(VK_KHR_load_store_op_none)
  addI("NONE_KHR", int64_t(VK_ATTACHMENT_LOAD_OP_NONE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_load_store_op_none) */
} };
class EnumerationVkAttachmentStoreOp:public das::Enumeration{public:
EnumerationVkAttachmentStoreOp():das::Enumeration("VkAttachmentStoreOp") {
  external=true; cppName="VkAttachmentStoreOp";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAttachmentStoreOp>::type>::type;
  addI("STORE", int64_t(VK_ATTACHMENT_STORE_OP_STORE), das::LineInfo());
  addI("DONT_CARE", int64_t(VK_ATTACHMENT_STORE_OP_DONT_CARE), das::LineInfo());
#if defined(VK_VERSION_1_3)
  addI("NONE", int64_t(VK_ATTACHMENT_STORE_OP_NONE), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_load_store_op_none)
  addI("NONE_EXT", int64_t(VK_ATTACHMENT_STORE_OP_NONE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_load_store_op_none) */
#if defined(VK_QCOM_render_pass_store_ops)
  addI("NONE_QCOM", int64_t(VK_ATTACHMENT_STORE_OP_NONE_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_render_pass_store_ops) */
#if (defined(VK_KHR_dynamic_rendering)) || (defined(VK_KHR_load_store_op_none))
  addI("NONE_KHR", int64_t(VK_ATTACHMENT_STORE_OP_NONE_KHR), das::LineInfo());
#endif /* (defined(VK_KHR_dynamic_rendering)) || (defined(VK_KHR_load_store_op_none)) */
} };
class EnumerationVkBlendFactor:public das::Enumeration{public:
EnumerationVkBlendFactor():das::Enumeration("VkBlendFactor") {
  external=true; cppName="VkBlendFactor";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBlendFactor>::type>::type;
  addI("ZERO", int64_t(VK_BLEND_FACTOR_ZERO), das::LineInfo());
  addI("ONE", int64_t(VK_BLEND_FACTOR_ONE), das::LineInfo());
  addI("SRC_COLOR", int64_t(VK_BLEND_FACTOR_SRC_COLOR), das::LineInfo());
  addI("ONE_MINUS_SRC_COLOR", int64_t(VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR), das::LineInfo());
  addI("DST_COLOR", int64_t(VK_BLEND_FACTOR_DST_COLOR), das::LineInfo());
  addI("ONE_MINUS_DST_COLOR", int64_t(VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR), das::LineInfo());
  addI("SRC_ALPHA", int64_t(VK_BLEND_FACTOR_SRC_ALPHA), das::LineInfo());
  addI("ONE_MINUS_SRC_ALPHA", int64_t(VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA), das::LineInfo());
  addI("DST_ALPHA", int64_t(VK_BLEND_FACTOR_DST_ALPHA), das::LineInfo());
  addI("ONE_MINUS_DST_ALPHA", int64_t(VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA), das::LineInfo());
  addI("CONSTANT_COLOR", int64_t(VK_BLEND_FACTOR_CONSTANT_COLOR), das::LineInfo());
  addI("ONE_MINUS_CONSTANT_COLOR", int64_t(VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR), das::LineInfo());
  addI("CONSTANT_ALPHA", int64_t(VK_BLEND_FACTOR_CONSTANT_ALPHA), das::LineInfo());
  addI("ONE_MINUS_CONSTANT_ALPHA", int64_t(VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA), das::LineInfo());
  addI("SRC_ALPHA_SATURATE", int64_t(VK_BLEND_FACTOR_SRC_ALPHA_SATURATE), das::LineInfo());
  addI("SRC1_COLOR", int64_t(VK_BLEND_FACTOR_SRC1_COLOR), das::LineInfo());
  addI("ONE_MINUS_SRC1_COLOR", int64_t(VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR), das::LineInfo());
  addI("SRC1_ALPHA", int64_t(VK_BLEND_FACTOR_SRC1_ALPHA), das::LineInfo());
  addI("ONE_MINUS_SRC1_ALPHA", int64_t(VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA), das::LineInfo());
} };
class EnumerationVkBlendOp:public das::Enumeration{public:
EnumerationVkBlendOp():das::Enumeration("VkBlendOp") {
  external=true; cppName="VkBlendOp";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBlendOp>::type>::type;
  addI("ADD", int64_t(VK_BLEND_OP_ADD), das::LineInfo());
  addI("SUBTRACT", int64_t(VK_BLEND_OP_SUBTRACT), das::LineInfo());
  addI("REVERSE_SUBTRACT", int64_t(VK_BLEND_OP_REVERSE_SUBTRACT), das::LineInfo());
  addI("MIN", int64_t(VK_BLEND_OP_MIN), das::LineInfo());
  addI("MAX", int64_t(VK_BLEND_OP_MAX), das::LineInfo());
#if defined(VK_EXT_blend_operation_advanced)
  addI("ZERO_EXT", int64_t(VK_BLEND_OP_ZERO_EXT), das::LineInfo());
  addI("SRC_EXT", int64_t(VK_BLEND_OP_SRC_EXT), das::LineInfo());
  addI("DST_EXT", int64_t(VK_BLEND_OP_DST_EXT), das::LineInfo());
  addI("SRC_OVER_EXT", int64_t(VK_BLEND_OP_SRC_OVER_EXT), das::LineInfo());
  addI("DST_OVER_EXT", int64_t(VK_BLEND_OP_DST_OVER_EXT), das::LineInfo());
  addI("SRC_IN_EXT", int64_t(VK_BLEND_OP_SRC_IN_EXT), das::LineInfo());
  addI("DST_IN_EXT", int64_t(VK_BLEND_OP_DST_IN_EXT), das::LineInfo());
  addI("SRC_OUT_EXT", int64_t(VK_BLEND_OP_SRC_OUT_EXT), das::LineInfo());
  addI("DST_OUT_EXT", int64_t(VK_BLEND_OP_DST_OUT_EXT), das::LineInfo());
  addI("SRC_ATOP_EXT", int64_t(VK_BLEND_OP_SRC_ATOP_EXT), das::LineInfo());
  addI("DST_ATOP_EXT", int64_t(VK_BLEND_OP_DST_ATOP_EXT), das::LineInfo());
  addI("XOR_EXT", int64_t(VK_BLEND_OP_XOR_EXT), das::LineInfo());
  addI("MULTIPLY_EXT", int64_t(VK_BLEND_OP_MULTIPLY_EXT), das::LineInfo());
  addI("SCREEN_EXT", int64_t(VK_BLEND_OP_SCREEN_EXT), das::LineInfo());
  addI("OVERLAY_EXT", int64_t(VK_BLEND_OP_OVERLAY_EXT), das::LineInfo());
  addI("DARKEN_EXT", int64_t(VK_BLEND_OP_DARKEN_EXT), das::LineInfo());
  addI("LIGHTEN_EXT", int64_t(VK_BLEND_OP_LIGHTEN_EXT), das::LineInfo());
  addI("COLORDODGE_EXT", int64_t(VK_BLEND_OP_COLORDODGE_EXT), das::LineInfo());
  addI("COLORBURN_EXT", int64_t(VK_BLEND_OP_COLORBURN_EXT), das::LineInfo());
  addI("HARDLIGHT_EXT", int64_t(VK_BLEND_OP_HARDLIGHT_EXT), das::LineInfo());
  addI("SOFTLIGHT_EXT", int64_t(VK_BLEND_OP_SOFTLIGHT_EXT), das::LineInfo());
  addI("DIFFERENCE_EXT", int64_t(VK_BLEND_OP_DIFFERENCE_EXT), das::LineInfo());
  addI("EXCLUSION_EXT", int64_t(VK_BLEND_OP_EXCLUSION_EXT), das::LineInfo());
  addI("INVERT_EXT", int64_t(VK_BLEND_OP_INVERT_EXT), das::LineInfo());
  addI("INVERT_RGB_EXT", int64_t(VK_BLEND_OP_INVERT_RGB_EXT), das::LineInfo());
  addI("LINEARDODGE_EXT", int64_t(VK_BLEND_OP_LINEARDODGE_EXT), das::LineInfo());
  addI("LINEARBURN_EXT", int64_t(VK_BLEND_OP_LINEARBURN_EXT), das::LineInfo());
  addI("VIVIDLIGHT_EXT", int64_t(VK_BLEND_OP_VIVIDLIGHT_EXT), das::LineInfo());
  addI("LINEARLIGHT_EXT", int64_t(VK_BLEND_OP_LINEARLIGHT_EXT), das::LineInfo());
  addI("PINLIGHT_EXT", int64_t(VK_BLEND_OP_PINLIGHT_EXT), das::LineInfo());
  addI("HARDMIX_EXT", int64_t(VK_BLEND_OP_HARDMIX_EXT), das::LineInfo());
  addI("HSL_HUE_EXT", int64_t(VK_BLEND_OP_HSL_HUE_EXT), das::LineInfo());
  addI("HSL_SATURATION_EXT", int64_t(VK_BLEND_OP_HSL_SATURATION_EXT), das::LineInfo());
  addI("HSL_COLOR_EXT", int64_t(VK_BLEND_OP_HSL_COLOR_EXT), das::LineInfo());
  addI("HSL_LUMINOSITY_EXT", int64_t(VK_BLEND_OP_HSL_LUMINOSITY_EXT), das::LineInfo());
  addI("PLUS_EXT", int64_t(VK_BLEND_OP_PLUS_EXT), das::LineInfo());
  addI("PLUS_CLAMPED_EXT", int64_t(VK_BLEND_OP_PLUS_CLAMPED_EXT), das::LineInfo());
  addI("PLUS_CLAMPED_ALPHA_EXT", int64_t(VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT), das::LineInfo());
  addI("PLUS_DARKER_EXT", int64_t(VK_BLEND_OP_PLUS_DARKER_EXT), das::LineInfo());
  addI("MINUS_EXT", int64_t(VK_BLEND_OP_MINUS_EXT), das::LineInfo());
  addI("MINUS_CLAMPED_EXT", int64_t(VK_BLEND_OP_MINUS_CLAMPED_EXT), das::LineInfo());
  addI("CONTRAST_EXT", int64_t(VK_BLEND_OP_CONTRAST_EXT), das::LineInfo());
  addI("INVERT_OVG_EXT", int64_t(VK_BLEND_OP_INVERT_OVG_EXT), das::LineInfo());
  addI("RED_EXT", int64_t(VK_BLEND_OP_RED_EXT), das::LineInfo());
  addI("GREEN_EXT", int64_t(VK_BLEND_OP_GREEN_EXT), das::LineInfo());
  addI("BLUE_EXT", int64_t(VK_BLEND_OP_BLUE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_blend_operation_advanced) */
} };
class EnumerationVkBorderColor:public das::Enumeration{public:
EnumerationVkBorderColor():das::Enumeration("VkBorderColor") {
  external=true; cppName="VkBorderColor";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBorderColor>::type>::type;
  addI("FLOAT_TRANSPARENT_BLACK", int64_t(VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK), das::LineInfo());
  addI("INT_TRANSPARENT_BLACK", int64_t(VK_BORDER_COLOR_INT_TRANSPARENT_BLACK), das::LineInfo());
  addI("FLOAT_OPAQUE_BLACK", int64_t(VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK), das::LineInfo());
  addI("INT_OPAQUE_BLACK", int64_t(VK_BORDER_COLOR_INT_OPAQUE_BLACK), das::LineInfo());
  addI("FLOAT_OPAQUE_WHITE", int64_t(VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE), das::LineInfo());
  addI("INT_OPAQUE_WHITE", int64_t(VK_BORDER_COLOR_INT_OPAQUE_WHITE), das::LineInfo());
#if defined(VK_EXT_custom_border_color)
  addI("FLOAT_CUSTOM_EXT", int64_t(VK_BORDER_COLOR_FLOAT_CUSTOM_EXT), das::LineInfo());
  addI("INT_CUSTOM_EXT", int64_t(VK_BORDER_COLOR_INT_CUSTOM_EXT), das::LineInfo());
#endif /* defined(VK_EXT_custom_border_color) */
} };
class EnumerationVkBufferCreateFlagBits:public das::Enumeration{public:
EnumerationVkBufferCreateFlagBits():das::Enumeration("VkBufferCreateFlagBits") {
  external=true; cppName="VkBufferCreateFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBufferCreateFlagBits>::type>::type;
  addI("SPARSE_BINDING_BIT", int64_t(VK_BUFFER_CREATE_SPARSE_BINDING_BIT), das::LineInfo());
  addI("SPARSE_RESIDENCY_BIT", int64_t(VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT), das::LineInfo());
  addI("SPARSE_ALIASED_BIT", int64_t(VK_BUFFER_CREATE_SPARSE_ALIASED_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("PROTECTED_BIT", int64_t(VK_BUFFER_CREATE_PROTECTED_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
  addI("DEVICE_ADDRESS_CAPTURE_REPLAY_BIT", int64_t(VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_buffer_device_address)
  addI("DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT", int64_t(VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_buffer_device_address) */
#if defined(VK_EXT_descriptor_buffer)
  addI("DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT", int64_t(VK_BUFFER_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_KHR_buffer_device_address)
  addI("DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR", int64_t(VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_buffer_device_address) */
#if defined(VK_KHR_video_maintenance1)
  addI("VIDEO_PROFILE_INDEPENDENT_BIT_KHR", int64_t(VK_BUFFER_CREATE_VIDEO_PROFILE_INDEPENDENT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_maintenance1) */
} };
class EnumerationVkBufferUsageFlagBits:public das::Enumeration{public:
EnumerationVkBufferUsageFlagBits():das::Enumeration("VkBufferUsageFlagBits") {
  external=true; cppName="VkBufferUsageFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBufferUsageFlagBits>::type>::type;
  addI("TRANSFER_SRC_BIT", int64_t(VK_BUFFER_USAGE_TRANSFER_SRC_BIT), das::LineInfo());
  addI("TRANSFER_DST_BIT", int64_t(VK_BUFFER_USAGE_TRANSFER_DST_BIT), das::LineInfo());
  addI("UNIFORM_TEXEL_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT), das::LineInfo());
  addI("UNIFORM_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT), das::LineInfo());
  addI("STORAGE_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_STORAGE_BUFFER_BIT), das::LineInfo());
  addI("INDEX_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_INDEX_BUFFER_BIT), das::LineInfo());
  addI("VERTEX_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_VERTEX_BUFFER_BIT), das::LineInfo());
  addI("INDIRECT_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT), das::LineInfo());
#if defined(VK_VERSION_1_2)
  addI("SHADER_DEVICE_ADDRESS_BIT", int64_t(VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_AMDX_shader_enqueue)
  addI("EXECUTION_GRAPH_SCRATCH_BIT_AMDX", int64_t(VK_BUFFER_USAGE_EXECUTION_GRAPH_SCRATCH_BIT_AMDX), das::LineInfo());
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_EXT_buffer_device_address)
  addI("SHADER_DEVICE_ADDRESS_BIT_EXT", int64_t(VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_buffer_device_address) */
#if defined(VK_EXT_conditional_rendering)
  addI("CONDITIONAL_RENDERING_BIT_EXT", int64_t(VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_EXT_descriptor_buffer)
  addI("SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT), das::LineInfo());
  addI("RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT), das::LineInfo());
  addI("PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_EXT_opacity_micromap)
  addI("MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT", int64_t(VK_BUFFER_USAGE_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT), das::LineInfo());
  addI("MICROMAP_STORAGE_BIT_EXT", int64_t(VK_BUFFER_USAGE_MICROMAP_STORAGE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_transform_feedback)
  addI("TRANSFORM_FEEDBACK_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT), das::LineInfo());
  addI("TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR", int64_t(VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_STORAGE_BIT_KHR", int64_t(VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_buffer_device_address)
  addI("SHADER_DEVICE_ADDRESS_BIT_KHR", int64_t(VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_buffer_device_address) */
#if defined(VK_KHR_ray_tracing_pipeline)
  addI("SHADER_BINDING_TABLE_BIT_KHR", int64_t(VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_video_decode_queue)
  addI("VIDEO_DECODE_SRC_BIT_KHR", int64_t(VK_BUFFER_USAGE_VIDEO_DECODE_SRC_BIT_KHR), das::LineInfo());
  addI("VIDEO_DECODE_DST_BIT_KHR", int64_t(VK_BUFFER_USAGE_VIDEO_DECODE_DST_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_DST_BIT_KHR", int64_t(VK_BUFFER_USAGE_VIDEO_ENCODE_DST_BIT_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_SRC_BIT_KHR", int64_t(VK_BUFFER_USAGE_VIDEO_ENCODE_SRC_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_NV_ray_tracing)
  addI("RAY_TRACING_BIT_NV", int64_t(VK_BUFFER_USAGE_RAY_TRACING_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkColorComponentFlagBits:public das::Enumeration{public:
EnumerationVkColorComponentFlagBits():das::Enumeration("VkColorComponentFlagBits") {
  external=true; cppName="VkColorComponentFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkColorComponentFlagBits>::type>::type;
  addI("R_BIT", int64_t(VK_COLOR_COMPONENT_R_BIT), das::LineInfo());
  addI("G_BIT", int64_t(VK_COLOR_COMPONENT_G_BIT), das::LineInfo());
  addI("B_BIT", int64_t(VK_COLOR_COMPONENT_B_BIT), das::LineInfo());
  addI("A_BIT", int64_t(VK_COLOR_COMPONENT_A_BIT), das::LineInfo());
} };
class EnumerationVkCommandBufferLevel:public das::Enumeration{public:
EnumerationVkCommandBufferLevel():das::Enumeration("VkCommandBufferLevel") {
  external=true; cppName="VkCommandBufferLevel";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCommandBufferLevel>::type>::type;
  addI("PRIMARY", int64_t(VK_COMMAND_BUFFER_LEVEL_PRIMARY), das::LineInfo());
  addI("SECONDARY", int64_t(VK_COMMAND_BUFFER_LEVEL_SECONDARY), das::LineInfo());
} };
class EnumerationVkCommandBufferResetFlagBits:public das::Enumeration{public:
EnumerationVkCommandBufferResetFlagBits():das::Enumeration("VkCommandBufferResetFlagBits") {
  external=true; cppName="VkCommandBufferResetFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCommandBufferResetFlagBits>::type>::type;
  addI("_RELEASE_RESOURCES_BIT", int64_t(VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT), das::LineInfo());
} };
class EnumerationVkCommandBufferUsageFlagBits:public das::Enumeration{public:
EnumerationVkCommandBufferUsageFlagBits():das::Enumeration("VkCommandBufferUsageFlagBits") {
  external=true; cppName="VkCommandBufferUsageFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCommandBufferUsageFlagBits>::type>::type;
  addI("ONE_TIME_SUBMIT_BIT", int64_t(VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT), das::LineInfo());
  addI("RENDER_PASS_CONTINUE_BIT", int64_t(VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT), das::LineInfo());
  addI("SIMULTANEOUS_USE_BIT", int64_t(VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT), das::LineInfo());
} };
class EnumerationVkCommandPoolCreateFlagBits:public das::Enumeration{public:
EnumerationVkCommandPoolCreateFlagBits():das::Enumeration("VkCommandPoolCreateFlagBits") {
  external=true; cppName="VkCommandPoolCreateFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCommandPoolCreateFlagBits>::type>::type;
  addI("TRANSIENT_BIT", int64_t(VK_COMMAND_POOL_CREATE_TRANSIENT_BIT), das::LineInfo());
  addI("RESET_COMMAND_BUFFER_BIT", int64_t(VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("PROTECTED_BIT", int64_t(VK_COMMAND_POOL_CREATE_PROTECTED_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
} };
class EnumerationVkCommandPoolResetFlagBits:public das::Enumeration{public:
EnumerationVkCommandPoolResetFlagBits():das::Enumeration("VkCommandPoolResetFlagBits") {
  external=true; cppName="VkCommandPoolResetFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCommandPoolResetFlagBits>::type>::type;
  addI("_RELEASE_RESOURCES_BIT", int64_t(VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT), das::LineInfo());
} };
class EnumerationVkCompareOp:public das::Enumeration{public:
EnumerationVkCompareOp():das::Enumeration("VkCompareOp") {
  external=true; cppName="VkCompareOp";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCompareOp>::type>::type;
  addI("NEVER", int64_t(VK_COMPARE_OP_NEVER), das::LineInfo());
  addI("LESS", int64_t(VK_COMPARE_OP_LESS), das::LineInfo());
  addI("EQUAL", int64_t(VK_COMPARE_OP_EQUAL), das::LineInfo());
  addI("LESS_OR_EQUAL", int64_t(VK_COMPARE_OP_LESS_OR_EQUAL), das::LineInfo());
  addI("GREATER", int64_t(VK_COMPARE_OP_GREATER), das::LineInfo());
  addI("NOT_EQUAL", int64_t(VK_COMPARE_OP_NOT_EQUAL), das::LineInfo());
  addI("GREATER_OR_EQUAL", int64_t(VK_COMPARE_OP_GREATER_OR_EQUAL), das::LineInfo());
  addI("ALWAYS", int64_t(VK_COMPARE_OP_ALWAYS), das::LineInfo());
} };
class EnumerationVkComponentSwizzle:public das::Enumeration{public:
EnumerationVkComponentSwizzle():das::Enumeration("VkComponentSwizzle") {
  external=true; cppName="VkComponentSwizzle";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkComponentSwizzle>::type>::type;
  addI("IDENTITY", int64_t(VK_COMPONENT_SWIZZLE_IDENTITY), das::LineInfo());
  addI("ZERO", int64_t(VK_COMPONENT_SWIZZLE_ZERO), das::LineInfo());
  addI("ONE", int64_t(VK_COMPONENT_SWIZZLE_ONE), das::LineInfo());
  addI("R", int64_t(VK_COMPONENT_SWIZZLE_R), das::LineInfo());
  addI("G", int64_t(VK_COMPONENT_SWIZZLE_G), das::LineInfo());
  addI("B", int64_t(VK_COMPONENT_SWIZZLE_B), das::LineInfo());
  addI("A", int64_t(VK_COMPONENT_SWIZZLE_A), das::LineInfo());
} };
class EnumerationVkCullModeFlagBits:public das::Enumeration{public:
EnumerationVkCullModeFlagBits():das::Enumeration("VkCullModeFlagBits") {
  external=true; cppName="VkCullModeFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCullModeFlagBits>::type>::type;
  addI("NONE", int64_t(VK_CULL_MODE_NONE), das::LineInfo());
  addI("FRONT_BIT", int64_t(VK_CULL_MODE_FRONT_BIT), das::LineInfo());
  addI("BACK_BIT", int64_t(VK_CULL_MODE_BACK_BIT), das::LineInfo());
  addI("FRONT_AND_BACK", int64_t(VK_CULL_MODE_FRONT_AND_BACK), das::LineInfo());
} };
class EnumerationVkDependencyFlagBits:public das::Enumeration{public:
EnumerationVkDependencyFlagBits():das::Enumeration("VkDependencyFlagBits") {
  external=true; cppName="VkDependencyFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDependencyFlagBits>::type>::type;
  addI("BY_REGION_BIT", int64_t(VK_DEPENDENCY_BY_REGION_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("DEVICE_GROUP_BIT", int64_t(VK_DEPENDENCY_DEVICE_GROUP_BIT), das::LineInfo());
  addI("VIEW_LOCAL_BIT", int64_t(VK_DEPENDENCY_VIEW_LOCAL_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_attachment_feedback_loop_layout)
  addI("FEEDBACK_LOOP_BIT_EXT", int64_t(VK_DEPENDENCY_FEEDBACK_LOOP_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_attachment_feedback_loop_layout) */
#if defined(VK_KHR_device_group)
  addI("DEVICE_GROUP_BIT_KHR", int64_t(VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_device_group) */
#if defined(VK_KHR_multiview)
  addI("VIEW_LOCAL_BIT_KHR", int64_t(VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_multiview) */
} };
class EnumerationVkDescriptorPoolCreateFlagBits:public das::Enumeration{public:
EnumerationVkDescriptorPoolCreateFlagBits():das::Enumeration("VkDescriptorPoolCreateFlagBits") {
  external=true; cppName="VkDescriptorPoolCreateFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDescriptorPoolCreateFlagBits>::type>::type;
  addI("FREE_DESCRIPTOR_SET_BIT", int64_t(VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT), das::LineInfo());
#if defined(VK_VERSION_1_2)
  addI("UPDATE_AFTER_BIND_BIT", int64_t(VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_descriptor_indexing)
  addI("UPDATE_AFTER_BIND_BIT_EXT", int64_t(VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_indexing) */
#if defined(VK_EXT_mutable_descriptor_type)
  addI("HOST_ONLY_BIT_EXT", int64_t(VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_mutable_descriptor_type) */
#if defined(VK_NV_descriptor_pool_overallocation)
  addI("ALLOW_OVERALLOCATION_SETS_BIT_NV", int64_t(VK_DESCRIPTOR_POOL_CREATE_ALLOW_OVERALLOCATION_SETS_BIT_NV), das::LineInfo());
  addI("ALLOW_OVERALLOCATION_POOLS_BIT_NV", int64_t(VK_DESCRIPTOR_POOL_CREATE_ALLOW_OVERALLOCATION_POOLS_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_descriptor_pool_overallocation) */
#if defined(VK_VALVE_mutable_descriptor_type)
  addI("HOST_ONLY_BIT_VALVE", int64_t(VK_DESCRIPTOR_POOL_CREATE_HOST_ONLY_BIT_VALVE), das::LineInfo());
#endif /* defined(VK_VALVE_mutable_descriptor_type) */
} };
class EnumerationVkDescriptorType:public das::Enumeration{public:
EnumerationVkDescriptorType():das::Enumeration("VkDescriptorType") {
  external=true; cppName="VkDescriptorType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDescriptorType>::type>::type;
  addI("SAMPLER", int64_t(VK_DESCRIPTOR_TYPE_SAMPLER), das::LineInfo());
  addI("COMBINED_IMAGE_SAMPLER", int64_t(VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER), das::LineInfo());
  addI("SAMPLED_IMAGE", int64_t(VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE), das::LineInfo());
  addI("STORAGE_IMAGE", int64_t(VK_DESCRIPTOR_TYPE_STORAGE_IMAGE), das::LineInfo());
  addI("UNIFORM_TEXEL_BUFFER", int64_t(VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER", int64_t(VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER), das::LineInfo());
  addI("UNIFORM_BUFFER", int64_t(VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER), das::LineInfo());
  addI("STORAGE_BUFFER", int64_t(VK_DESCRIPTOR_TYPE_STORAGE_BUFFER), das::LineInfo());
  addI("UNIFORM_BUFFER_DYNAMIC", int64_t(VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC), das::LineInfo());
  addI("STORAGE_BUFFER_DYNAMIC", int64_t(VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC), das::LineInfo());
  addI("INPUT_ATTACHMENT", int64_t(VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT), das::LineInfo());
#if defined(VK_VERSION_1_3)
  addI("INLINE_UNIFORM_BLOCK", int64_t(VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_inline_uniform_block)
  addI("INLINE_UNIFORM_BLOCK_EXT", int64_t(VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT), das::LineInfo());
#endif /* defined(VK_EXT_inline_uniform_block) */
#if defined(VK_EXT_mutable_descriptor_type)
  addI("MUTABLE_EXT", int64_t(VK_DESCRIPTOR_TYPE_MUTABLE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_mutable_descriptor_type) */
#if defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_KHR", int64_t(VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_ray_tracing)
  addI("ACCELERATION_STRUCTURE_NV", int64_t(VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_QCOM_image_processing)
  addI("SAMPLE_WEIGHT_IMAGE_QCOM", int64_t(VK_DESCRIPTOR_TYPE_SAMPLE_WEIGHT_IMAGE_QCOM), das::LineInfo());
  addI("BLOCK_MATCH_IMAGE_QCOM", int64_t(VK_DESCRIPTOR_TYPE_BLOCK_MATCH_IMAGE_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_image_processing) */
#if defined(VK_VALVE_mutable_descriptor_type)
  addI("MUTABLE_VALVE", int64_t(VK_DESCRIPTOR_TYPE_MUTABLE_VALVE), das::LineInfo());
#endif /* defined(VK_VALVE_mutable_descriptor_type) */
} };
class EnumerationVkDynamicState:public das::Enumeration{public:
EnumerationVkDynamicState():das::Enumeration("VkDynamicState") {
  external=true; cppName="VkDynamicState";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDynamicState>::type>::type;
  addI("VIEWPORT", int64_t(VK_DYNAMIC_STATE_VIEWPORT), das::LineInfo());
  addI("SCISSOR", int64_t(VK_DYNAMIC_STATE_SCISSOR), das::LineInfo());
  addI("LINE_WIDTH", int64_t(VK_DYNAMIC_STATE_LINE_WIDTH), das::LineInfo());
  addI("DEPTH_BIAS", int64_t(VK_DYNAMIC_STATE_DEPTH_BIAS), das::LineInfo());
  addI("BLEND_CONSTANTS", int64_t(VK_DYNAMIC_STATE_BLEND_CONSTANTS), das::LineInfo());
  addI("DEPTH_BOUNDS", int64_t(VK_DYNAMIC_STATE_DEPTH_BOUNDS), das::LineInfo());
  addI("STENCIL_COMPARE_MASK", int64_t(VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK), das::LineInfo());
  addI("STENCIL_WRITE_MASK", int64_t(VK_DYNAMIC_STATE_STENCIL_WRITE_MASK), das::LineInfo());
  addI("STENCIL_REFERENCE", int64_t(VK_DYNAMIC_STATE_STENCIL_REFERENCE), das::LineInfo());
#if defined(VK_VERSION_1_3)
  addI("CULL_MODE", int64_t(VK_DYNAMIC_STATE_CULL_MODE), das::LineInfo());
  addI("FRONT_FACE", int64_t(VK_DYNAMIC_STATE_FRONT_FACE), das::LineInfo());
  addI("PRIMITIVE_TOPOLOGY", int64_t(VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY), das::LineInfo());
  addI("VIEWPORT_WITH_COUNT", int64_t(VK_DYNAMIC_STATE_VIEWPORT_WITH_COUNT), das::LineInfo());
  addI("SCISSOR_WITH_COUNT", int64_t(VK_DYNAMIC_STATE_SCISSOR_WITH_COUNT), das::LineInfo());
  addI("VERTEX_INPUT_BINDING_STRIDE", int64_t(VK_DYNAMIC_STATE_VERTEX_INPUT_BINDING_STRIDE), das::LineInfo());
  addI("DEPTH_TEST_ENABLE", int64_t(VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE), das::LineInfo());
  addI("DEPTH_WRITE_ENABLE", int64_t(VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE), das::LineInfo());
  addI("DEPTH_COMPARE_OP", int64_t(VK_DYNAMIC_STATE_DEPTH_COMPARE_OP), das::LineInfo());
  addI("DEPTH_BOUNDS_TEST_ENABLE", int64_t(VK_DYNAMIC_STATE_DEPTH_BOUNDS_TEST_ENABLE), das::LineInfo());
  addI("STENCIL_TEST_ENABLE", int64_t(VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE), das::LineInfo());
  addI("STENCIL_OP", int64_t(VK_DYNAMIC_STATE_STENCIL_OP), das::LineInfo());
  addI("RASTERIZER_DISCARD_ENABLE", int64_t(VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE), das::LineInfo());
  addI("DEPTH_BIAS_ENABLE", int64_t(VK_DYNAMIC_STATE_DEPTH_BIAS_ENABLE), das::LineInfo());
  addI("PRIMITIVE_RESTART_ENABLE", int64_t(VK_DYNAMIC_STATE_PRIMITIVE_RESTART_ENABLE), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
  addI("LINE_STIPPLE", int64_t(VK_DYNAMIC_STATE_LINE_STIPPLE), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_attachment_feedback_loop_dynamic_state)
  addI("ATTACHMENT_FEEDBACK_LOOP_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_ATTACHMENT_FEEDBACK_LOOP_ENABLE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_attachment_feedback_loop_dynamic_state) */
#if defined(VK_EXT_color_write_enable)
  addI("COLOR_WRITE_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_COLOR_WRITE_ENABLE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_color_write_enable) */
#if defined(VK_EXT_depth_clamp_control)
  addI("DEPTH_CLAMP_RANGE_EXT", int64_t(VK_DYNAMIC_STATE_DEPTH_CLAMP_RANGE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_discard_rectangles)
  addI("DISCARD_RECTANGLE_EXT", int64_t(VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT), das::LineInfo());
  addI("DISCARD_RECTANGLE_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_DISCARD_RECTANGLE_ENABLE_EXT), das::LineInfo());
  addI("DISCARD_RECTANGLE_MODE_EXT", int64_t(VK_DYNAMIC_STATE_DISCARD_RECTANGLE_MODE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_discard_rectangles) */
#if defined(VK_EXT_extended_dynamic_state)
  addI("CULL_MODE_EXT", int64_t(VK_DYNAMIC_STATE_CULL_MODE_EXT), das::LineInfo());
  addI("FRONT_FACE_EXT", int64_t(VK_DYNAMIC_STATE_FRONT_FACE_EXT), das::LineInfo());
  addI("PRIMITIVE_TOPOLOGY_EXT", int64_t(VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY_EXT), das::LineInfo());
  addI("VIEWPORT_WITH_COUNT_EXT", int64_t(VK_DYNAMIC_STATE_VIEWPORT_WITH_COUNT_EXT), das::LineInfo());
  addI("SCISSOR_WITH_COUNT_EXT", int64_t(VK_DYNAMIC_STATE_SCISSOR_WITH_COUNT_EXT), das::LineInfo());
  addI("VERTEX_INPUT_BINDING_STRIDE_EXT", int64_t(VK_DYNAMIC_STATE_VERTEX_INPUT_BINDING_STRIDE_EXT), das::LineInfo());
  addI("DEPTH_TEST_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE_EXT), das::LineInfo());
  addI("DEPTH_WRITE_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE_EXT), das::LineInfo());
  addI("DEPTH_COMPARE_OP_EXT", int64_t(VK_DYNAMIC_STATE_DEPTH_COMPARE_OP_EXT), das::LineInfo());
  addI("DEPTH_BOUNDS_TEST_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_DEPTH_BOUNDS_TEST_ENABLE_EXT), das::LineInfo());
  addI("STENCIL_TEST_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE_EXT), das::LineInfo());
  addI("STENCIL_OP_EXT", int64_t(VK_DYNAMIC_STATE_STENCIL_OP_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state) */
#if defined(VK_EXT_extended_dynamic_state2)
  addI("PATCH_CONTROL_POINTS_EXT", int64_t(VK_DYNAMIC_STATE_PATCH_CONTROL_POINTS_EXT), das::LineInfo());
  addI("RASTERIZER_DISCARD_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT), das::LineInfo());
  addI("DEPTH_BIAS_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_DEPTH_BIAS_ENABLE_EXT), das::LineInfo());
  addI("LOGIC_OP_EXT", int64_t(VK_DYNAMIC_STATE_LOGIC_OP_EXT), das::LineInfo());
  addI("PRIMITIVE_RESTART_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_PRIMITIVE_RESTART_ENABLE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state2) */
#if defined(VK_EXT_extended_dynamic_state3)
  addI("DEPTH_CLAMP_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_DEPTH_CLAMP_ENABLE_EXT), das::LineInfo());
  addI("POLYGON_MODE_EXT", int64_t(VK_DYNAMIC_STATE_POLYGON_MODE_EXT), das::LineInfo());
  addI("RASTERIZATION_SAMPLES_EXT", int64_t(VK_DYNAMIC_STATE_RASTERIZATION_SAMPLES_EXT), das::LineInfo());
  addI("SAMPLE_MASK_EXT", int64_t(VK_DYNAMIC_STATE_SAMPLE_MASK_EXT), das::LineInfo());
  addI("ALPHA_TO_COVERAGE_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_ALPHA_TO_COVERAGE_ENABLE_EXT), das::LineInfo());
  addI("ALPHA_TO_ONE_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_ALPHA_TO_ONE_ENABLE_EXT), das::LineInfo());
  addI("LOGIC_OP_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_LOGIC_OP_ENABLE_EXT), das::LineInfo());
  addI("COLOR_BLEND_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_COLOR_BLEND_ENABLE_EXT), das::LineInfo());
  addI("COLOR_BLEND_EQUATION_EXT", int64_t(VK_DYNAMIC_STATE_COLOR_BLEND_EQUATION_EXT), das::LineInfo());
  addI("COLOR_WRITE_MASK_EXT", int64_t(VK_DYNAMIC_STATE_COLOR_WRITE_MASK_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) */
#if defined(VK_EXT_extended_dynamic_state3) && (defined(VK_KHR_maintenance2) || defined(VK_VERSION_1_1))
  addI("TESSELLATION_DOMAIN_ORIGIN_EXT", int64_t(VK_DYNAMIC_STATE_TESSELLATION_DOMAIN_ORIGIN_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && (defined(VK_KHR_maintenance2) || defined(VK_VERSION_1_1)) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_transform_feedback)
  addI("RASTERIZATION_STREAM_EXT", int64_t(VK_DYNAMIC_STATE_RASTERIZATION_STREAM_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_transform_feedback) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_conservative_rasterization)
  addI("CONSERVATIVE_RASTERIZATION_MODE_EXT", int64_t(VK_DYNAMIC_STATE_CONSERVATIVE_RASTERIZATION_MODE_EXT), das::LineInfo());
  addI("EXTRA_PRIMITIVE_OVERESTIMATION_SIZE_EXT", int64_t(VK_DYNAMIC_STATE_EXTRA_PRIMITIVE_OVERESTIMATION_SIZE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_conservative_rasterization) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_depth_clip_enable)
  addI("DEPTH_CLIP_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_DEPTH_CLIP_ENABLE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_depth_clip_enable) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_sample_locations)
  addI("SAMPLE_LOCATIONS_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_ENABLE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_sample_locations) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_blend_operation_advanced)
  addI("COLOR_BLEND_ADVANCED_EXT", int64_t(VK_DYNAMIC_STATE_COLOR_BLEND_ADVANCED_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_provoking_vertex)
  addI("PROVOKING_VERTEX_MODE_EXT", int64_t(VK_DYNAMIC_STATE_PROVOKING_VERTEX_MODE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_provoking_vertex) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_line_rasterization)
  addI("LINE_RASTERIZATION_MODE_EXT", int64_t(VK_DYNAMIC_STATE_LINE_RASTERIZATION_MODE_EXT), das::LineInfo());
  addI("LINE_STIPPLE_ENABLE_EXT", int64_t(VK_DYNAMIC_STATE_LINE_STIPPLE_ENABLE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_line_rasterization) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_depth_clip_control)
  addI("DEPTH_CLIP_NEGATIVE_ONE_TO_ONE_EXT", int64_t(VK_DYNAMIC_STATE_DEPTH_CLIP_NEGATIVE_ONE_TO_ONE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_EXT_depth_clip_control) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_clip_space_w_scaling)
  addI("VIEWPORT_W_SCALING_ENABLE_NV", int64_t(VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_ENABLE_NV), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_clip_space_w_scaling) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_viewport_swizzle)
  addI("VIEWPORT_SWIZZLE_NV", int64_t(VK_DYNAMIC_STATE_VIEWPORT_SWIZZLE_NV), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_viewport_swizzle) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_fragment_coverage_to_color)
  addI("COVERAGE_TO_COLOR_ENABLE_NV", int64_t(VK_DYNAMIC_STATE_COVERAGE_TO_COLOR_ENABLE_NV), das::LineInfo());
  addI("COVERAGE_TO_COLOR_LOCATION_NV", int64_t(VK_DYNAMIC_STATE_COVERAGE_TO_COLOR_LOCATION_NV), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_fragment_coverage_to_color) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_framebuffer_mixed_samples)
  addI("COVERAGE_MODULATION_MODE_NV", int64_t(VK_DYNAMIC_STATE_COVERAGE_MODULATION_MODE_NV), das::LineInfo());
  addI("COVERAGE_MODULATION_TABLE_ENABLE_NV", int64_t(VK_DYNAMIC_STATE_COVERAGE_MODULATION_TABLE_ENABLE_NV), das::LineInfo());
  addI("COVERAGE_MODULATION_TABLE_NV", int64_t(VK_DYNAMIC_STATE_COVERAGE_MODULATION_TABLE_NV), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_framebuffer_mixed_samples) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_shading_rate_image)
  addI("SHADING_RATE_IMAGE_ENABLE_NV", int64_t(VK_DYNAMIC_STATE_SHADING_RATE_IMAGE_ENABLE_NV), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_shading_rate_image) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_representative_fragment_test)
  addI("REPRESENTATIVE_FRAGMENT_TEST_ENABLE_NV", int64_t(VK_DYNAMIC_STATE_REPRESENTATIVE_FRAGMENT_TEST_ENABLE_NV), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_representative_fragment_test) */
#if defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_coverage_reduction_mode)
  addI("COVERAGE_REDUCTION_MODE_NV", int64_t(VK_DYNAMIC_STATE_COVERAGE_REDUCTION_MODE_NV), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) && defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_EXT_line_rasterization)
  addI("LINE_STIPPLE_EXT", int64_t(VK_DYNAMIC_STATE_LINE_STIPPLE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_line_rasterization) */
#if defined(VK_EXT_sample_locations)
  addI("SAMPLE_LOCATIONS_EXT", int64_t(VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT), das::LineInfo());
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_EXT_vertex_input_dynamic_state)
  addI("VERTEX_INPUT_EXT", int64_t(VK_DYNAMIC_STATE_VERTEX_INPUT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_vertex_input_dynamic_state) */
#if defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_KHR", int64_t(VK_DYNAMIC_STATE_FRAGMENT_SHADING_RATE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_line_rasterization)
  addI("LINE_STIPPLE_KHR", int64_t(VK_DYNAMIC_STATE_LINE_STIPPLE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_line_rasterization) */
#if defined(VK_KHR_ray_tracing_pipeline)
  addI("RAY_TRACING_PIPELINE_STACK_SIZE_KHR", int64_t(VK_DYNAMIC_STATE_RAY_TRACING_PIPELINE_STACK_SIZE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_NV_clip_space_w_scaling)
  addI("VIEWPORT_W_SCALING_NV", int64_t(VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV), das::LineInfo());
#endif /* defined(VK_NV_clip_space_w_scaling) */
#if defined(VK_NV_scissor_exclusive)
  addI("EXCLUSIVE_SCISSOR_ENABLE_NV", int64_t(VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_ENABLE_NV), das::LineInfo());
  addI("EXCLUSIVE_SCISSOR_NV", int64_t(VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV), das::LineInfo());
#endif /* defined(VK_NV_scissor_exclusive) */
#if defined(VK_NV_shading_rate_image)
  addI("VIEWPORT_SHADING_RATE_PALETTE_NV", int64_t(VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV), das::LineInfo());
  addI("VIEWPORT_COARSE_SAMPLE_ORDER_NV", int64_t(VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV), das::LineInfo());
#endif /* defined(VK_NV_shading_rate_image) */
} };
class EnumerationVkFenceCreateFlagBits:public das::Enumeration{public:
EnumerationVkFenceCreateFlagBits():das::Enumeration("VkFenceCreateFlagBits") {
  external=true; cppName="VkFenceCreateFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFenceCreateFlagBits>::type>::type;
  addI("_SIGNALED_BIT", int64_t(VK_FENCE_CREATE_SIGNALED_BIT), das::LineInfo());
} };
class EnumerationVkFilter:public das::Enumeration{public:
EnumerationVkFilter():das::Enumeration("VkFilter") {
  external=true; cppName="VkFilter";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFilter>::type>::type;
  addI("NEAREST", int64_t(VK_FILTER_NEAREST), das::LineInfo());
  addI("LINEAR", int64_t(VK_FILTER_LINEAR), das::LineInfo());
#if defined(VK_EXT_filter_cubic)
  addI("CUBIC_EXT", int64_t(VK_FILTER_CUBIC_EXT), das::LineInfo());
#endif /* defined(VK_EXT_filter_cubic) */
#if defined(VK_IMG_filter_cubic)
  addI("CUBIC_IMG", int64_t(VK_FILTER_CUBIC_IMG), das::LineInfo());
#endif /* defined(VK_IMG_filter_cubic) */
} };
class EnumerationVkFormat:public das::Enumeration{public:
EnumerationVkFormat():das::Enumeration("VkFormat") {
  external=true; cppName="VkFormat";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFormat>::type>::type;
  addI("UNDEFINED", int64_t(VK_FORMAT_UNDEFINED), das::LineInfo());
  addI("R4G4_UNORM_PACK8", int64_t(VK_FORMAT_R4G4_UNORM_PACK8), das::LineInfo());
  addI("R4G4B4A4_UNORM_PACK16", int64_t(VK_FORMAT_R4G4B4A4_UNORM_PACK16), das::LineInfo());
  addI("B4G4R4A4_UNORM_PACK16", int64_t(VK_FORMAT_B4G4R4A4_UNORM_PACK16), das::LineInfo());
  addI("R5G6B5_UNORM_PACK16", int64_t(VK_FORMAT_R5G6B5_UNORM_PACK16), das::LineInfo());
  addI("B5G6R5_UNORM_PACK16", int64_t(VK_FORMAT_B5G6R5_UNORM_PACK16), das::LineInfo());
  addI("R5G5B5A1_UNORM_PACK16", int64_t(VK_FORMAT_R5G5B5A1_UNORM_PACK16), das::LineInfo());
  addI("B5G5R5A1_UNORM_PACK16", int64_t(VK_FORMAT_B5G5R5A1_UNORM_PACK16), das::LineInfo());
  addI("A1R5G5B5_UNORM_PACK16", int64_t(VK_FORMAT_A1R5G5B5_UNORM_PACK16), das::LineInfo());
  addI("R8_UNORM", int64_t(VK_FORMAT_R8_UNORM), das::LineInfo());
  addI("R8_SNORM", int64_t(VK_FORMAT_R8_SNORM), das::LineInfo());
  addI("R8_USCALED", int64_t(VK_FORMAT_R8_USCALED), das::LineInfo());
  addI("R8_SSCALED", int64_t(VK_FORMAT_R8_SSCALED), das::LineInfo());
  addI("R8_UINT", int64_t(VK_FORMAT_R8_UINT), das::LineInfo());
  addI("R8_SINT", int64_t(VK_FORMAT_R8_SINT), das::LineInfo());
  addI("R8_SRGB", int64_t(VK_FORMAT_R8_SRGB), das::LineInfo());
  addI("R8G8_UNORM", int64_t(VK_FORMAT_R8G8_UNORM), das::LineInfo());
  addI("R8G8_SNORM", int64_t(VK_FORMAT_R8G8_SNORM), das::LineInfo());
  addI("R8G8_USCALED", int64_t(VK_FORMAT_R8G8_USCALED), das::LineInfo());
  addI("R8G8_SSCALED", int64_t(VK_FORMAT_R8G8_SSCALED), das::LineInfo());
  addI("R8G8_UINT", int64_t(VK_FORMAT_R8G8_UINT), das::LineInfo());
  addI("R8G8_SINT", int64_t(VK_FORMAT_R8G8_SINT), das::LineInfo());
  addI("R8G8_SRGB", int64_t(VK_FORMAT_R8G8_SRGB), das::LineInfo());
  addI("R8G8B8_UNORM", int64_t(VK_FORMAT_R8G8B8_UNORM), das::LineInfo());
  addI("R8G8B8_SNORM", int64_t(VK_FORMAT_R8G8B8_SNORM), das::LineInfo());
  addI("R8G8B8_USCALED", int64_t(VK_FORMAT_R8G8B8_USCALED), das::LineInfo());
  addI("R8G8B8_SSCALED", int64_t(VK_FORMAT_R8G8B8_SSCALED), das::LineInfo());
  addI("R8G8B8_UINT", int64_t(VK_FORMAT_R8G8B8_UINT), das::LineInfo());
  addI("R8G8B8_SINT", int64_t(VK_FORMAT_R8G8B8_SINT), das::LineInfo());
  addI("R8G8B8_SRGB", int64_t(VK_FORMAT_R8G8B8_SRGB), das::LineInfo());
  addI("B8G8R8_UNORM", int64_t(VK_FORMAT_B8G8R8_UNORM), das::LineInfo());
  addI("B8G8R8_SNORM", int64_t(VK_FORMAT_B8G8R8_SNORM), das::LineInfo());
  addI("B8G8R8_USCALED", int64_t(VK_FORMAT_B8G8R8_USCALED), das::LineInfo());
  addI("B8G8R8_SSCALED", int64_t(VK_FORMAT_B8G8R8_SSCALED), das::LineInfo());
  addI("B8G8R8_UINT", int64_t(VK_FORMAT_B8G8R8_UINT), das::LineInfo());
  addI("B8G8R8_SINT", int64_t(VK_FORMAT_B8G8R8_SINT), das::LineInfo());
  addI("B8G8R8_SRGB", int64_t(VK_FORMAT_B8G8R8_SRGB), das::LineInfo());
  addI("R8G8B8A8_UNORM", int64_t(VK_FORMAT_R8G8B8A8_UNORM), das::LineInfo());
  addI("R8G8B8A8_SNORM", int64_t(VK_FORMAT_R8G8B8A8_SNORM), das::LineInfo());
  addI("R8G8B8A8_USCALED", int64_t(VK_FORMAT_R8G8B8A8_USCALED), das::LineInfo());
  addI("R8G8B8A8_SSCALED", int64_t(VK_FORMAT_R8G8B8A8_SSCALED), das::LineInfo());
  addI("R8G8B8A8_UINT", int64_t(VK_FORMAT_R8G8B8A8_UINT), das::LineInfo());
  addI("R8G8B8A8_SINT", int64_t(VK_FORMAT_R8G8B8A8_SINT), das::LineInfo());
  addI("R8G8B8A8_SRGB", int64_t(VK_FORMAT_R8G8B8A8_SRGB), das::LineInfo());
  addI("B8G8R8A8_UNORM", int64_t(VK_FORMAT_B8G8R8A8_UNORM), das::LineInfo());
  addI("B8G8R8A8_SNORM", int64_t(VK_FORMAT_B8G8R8A8_SNORM), das::LineInfo());
  addI("B8G8R8A8_USCALED", int64_t(VK_FORMAT_B8G8R8A8_USCALED), das::LineInfo());
  addI("B8G8R8A8_SSCALED", int64_t(VK_FORMAT_B8G8R8A8_SSCALED), das::LineInfo());
  addI("B8G8R8A8_UINT", int64_t(VK_FORMAT_B8G8R8A8_UINT), das::LineInfo());
  addI("B8G8R8A8_SINT", int64_t(VK_FORMAT_B8G8R8A8_SINT), das::LineInfo());
  addI("B8G8R8A8_SRGB", int64_t(VK_FORMAT_B8G8R8A8_SRGB), das::LineInfo());
  addI("A8B8G8R8_UNORM_PACK32", int64_t(VK_FORMAT_A8B8G8R8_UNORM_PACK32), das::LineInfo());
  addI("A8B8G8R8_SNORM_PACK32", int64_t(VK_FORMAT_A8B8G8R8_SNORM_PACK32), das::LineInfo());
  addI("A8B8G8R8_USCALED_PACK32", int64_t(VK_FORMAT_A8B8G8R8_USCALED_PACK32), das::LineInfo());
  addI("A8B8G8R8_SSCALED_PACK32", int64_t(VK_FORMAT_A8B8G8R8_SSCALED_PACK32), das::LineInfo());
  addI("A8B8G8R8_UINT_PACK32", int64_t(VK_FORMAT_A8B8G8R8_UINT_PACK32), das::LineInfo());
  addI("A8B8G8R8_SINT_PACK32", int64_t(VK_FORMAT_A8B8G8R8_SINT_PACK32), das::LineInfo());
  addI("A8B8G8R8_SRGB_PACK32", int64_t(VK_FORMAT_A8B8G8R8_SRGB_PACK32), das::LineInfo());
  addI("A2R10G10B10_UNORM_PACK32", int64_t(VK_FORMAT_A2R10G10B10_UNORM_PACK32), das::LineInfo());
  addI("A2R10G10B10_SNORM_PACK32", int64_t(VK_FORMAT_A2R10G10B10_SNORM_PACK32), das::LineInfo());
  addI("A2R10G10B10_USCALED_PACK32", int64_t(VK_FORMAT_A2R10G10B10_USCALED_PACK32), das::LineInfo());
  addI("A2R10G10B10_SSCALED_PACK32", int64_t(VK_FORMAT_A2R10G10B10_SSCALED_PACK32), das::LineInfo());
  addI("A2R10G10B10_UINT_PACK32", int64_t(VK_FORMAT_A2R10G10B10_UINT_PACK32), das::LineInfo());
  addI("A2R10G10B10_SINT_PACK32", int64_t(VK_FORMAT_A2R10G10B10_SINT_PACK32), das::LineInfo());
  addI("A2B10G10R10_UNORM_PACK32", int64_t(VK_FORMAT_A2B10G10R10_UNORM_PACK32), das::LineInfo());
  addI("A2B10G10R10_SNORM_PACK32", int64_t(VK_FORMAT_A2B10G10R10_SNORM_PACK32), das::LineInfo());
  addI("A2B10G10R10_USCALED_PACK32", int64_t(VK_FORMAT_A2B10G10R10_USCALED_PACK32), das::LineInfo());
  addI("A2B10G10R10_SSCALED_PACK32", int64_t(VK_FORMAT_A2B10G10R10_SSCALED_PACK32), das::LineInfo());
  addI("A2B10G10R10_UINT_PACK32", int64_t(VK_FORMAT_A2B10G10R10_UINT_PACK32), das::LineInfo());
  addI("A2B10G10R10_SINT_PACK32", int64_t(VK_FORMAT_A2B10G10R10_SINT_PACK32), das::LineInfo());
  addI("R16_UNORM", int64_t(VK_FORMAT_R16_UNORM), das::LineInfo());
  addI("R16_SNORM", int64_t(VK_FORMAT_R16_SNORM), das::LineInfo());
  addI("R16_USCALED", int64_t(VK_FORMAT_R16_USCALED), das::LineInfo());
  addI("R16_SSCALED", int64_t(VK_FORMAT_R16_SSCALED), das::LineInfo());
  addI("R16_UINT", int64_t(VK_FORMAT_R16_UINT), das::LineInfo());
  addI("R16_SINT", int64_t(VK_FORMAT_R16_SINT), das::LineInfo());
  addI("R16_SFLOAT", int64_t(VK_FORMAT_R16_SFLOAT), das::LineInfo());
  addI("R16G16_UNORM", int64_t(VK_FORMAT_R16G16_UNORM), das::LineInfo());
  addI("R16G16_SNORM", int64_t(VK_FORMAT_R16G16_SNORM), das::LineInfo());
  addI("R16G16_USCALED", int64_t(VK_FORMAT_R16G16_USCALED), das::LineInfo());
  addI("R16G16_SSCALED", int64_t(VK_FORMAT_R16G16_SSCALED), das::LineInfo());
  addI("R16G16_UINT", int64_t(VK_FORMAT_R16G16_UINT), das::LineInfo());
  addI("R16G16_SINT", int64_t(VK_FORMAT_R16G16_SINT), das::LineInfo());
  addI("R16G16_SFLOAT", int64_t(VK_FORMAT_R16G16_SFLOAT), das::LineInfo());
  addI("R16G16B16_UNORM", int64_t(VK_FORMAT_R16G16B16_UNORM), das::LineInfo());
  addI("R16G16B16_SNORM", int64_t(VK_FORMAT_R16G16B16_SNORM), das::LineInfo());
  addI("R16G16B16_USCALED", int64_t(VK_FORMAT_R16G16B16_USCALED), das::LineInfo());
  addI("R16G16B16_SSCALED", int64_t(VK_FORMAT_R16G16B16_SSCALED), das::LineInfo());
  addI("R16G16B16_UINT", int64_t(VK_FORMAT_R16G16B16_UINT), das::LineInfo());
  addI("R16G16B16_SINT", int64_t(VK_FORMAT_R16G16B16_SINT), das::LineInfo());
  addI("R16G16B16_SFLOAT", int64_t(VK_FORMAT_R16G16B16_SFLOAT), das::LineInfo());
  addI("R16G16B16A16_UNORM", int64_t(VK_FORMAT_R16G16B16A16_UNORM), das::LineInfo());
  addI("R16G16B16A16_SNORM", int64_t(VK_FORMAT_R16G16B16A16_SNORM), das::LineInfo());
  addI("R16G16B16A16_USCALED", int64_t(VK_FORMAT_R16G16B16A16_USCALED), das::LineInfo());
  addI("R16G16B16A16_SSCALED", int64_t(VK_FORMAT_R16G16B16A16_SSCALED), das::LineInfo());
  addI("R16G16B16A16_UINT", int64_t(VK_FORMAT_R16G16B16A16_UINT), das::LineInfo());
  addI("R16G16B16A16_SINT", int64_t(VK_FORMAT_R16G16B16A16_SINT), das::LineInfo());
  addI("R16G16B16A16_SFLOAT", int64_t(VK_FORMAT_R16G16B16A16_SFLOAT), das::LineInfo());
  addI("R32_UINT", int64_t(VK_FORMAT_R32_UINT), das::LineInfo());
  addI("R32_SINT", int64_t(VK_FORMAT_R32_SINT), das::LineInfo());
  addI("R32_SFLOAT", int64_t(VK_FORMAT_R32_SFLOAT), das::LineInfo());
  addI("R32G32_UINT", int64_t(VK_FORMAT_R32G32_UINT), das::LineInfo());
  addI("R32G32_SINT", int64_t(VK_FORMAT_R32G32_SINT), das::LineInfo());
  addI("R32G32_SFLOAT", int64_t(VK_FORMAT_R32G32_SFLOAT), das::LineInfo());
  addI("R32G32B32_UINT", int64_t(VK_FORMAT_R32G32B32_UINT), das::LineInfo());
  addI("R32G32B32_SINT", int64_t(VK_FORMAT_R32G32B32_SINT), das::LineInfo());
  addI("R32G32B32_SFLOAT", int64_t(VK_FORMAT_R32G32B32_SFLOAT), das::LineInfo());
  addI("R32G32B32A32_UINT", int64_t(VK_FORMAT_R32G32B32A32_UINT), das::LineInfo());
  addI("R32G32B32A32_SINT", int64_t(VK_FORMAT_R32G32B32A32_SINT), das::LineInfo());
  addI("R32G32B32A32_SFLOAT", int64_t(VK_FORMAT_R32G32B32A32_SFLOAT), das::LineInfo());
  addI("R64_UINT", int64_t(VK_FORMAT_R64_UINT), das::LineInfo());
  addI("R64_SINT", int64_t(VK_FORMAT_R64_SINT), das::LineInfo());
  addI("R64_SFLOAT", int64_t(VK_FORMAT_R64_SFLOAT), das::LineInfo());
  addI("R64G64_UINT", int64_t(VK_FORMAT_R64G64_UINT), das::LineInfo());
  addI("R64G64_SINT", int64_t(VK_FORMAT_R64G64_SINT), das::LineInfo());
  addI("R64G64_SFLOAT", int64_t(VK_FORMAT_R64G64_SFLOAT), das::LineInfo());
  addI("R64G64B64_UINT", int64_t(VK_FORMAT_R64G64B64_UINT), das::LineInfo());
  addI("R64G64B64_SINT", int64_t(VK_FORMAT_R64G64B64_SINT), das::LineInfo());
  addI("R64G64B64_SFLOAT", int64_t(VK_FORMAT_R64G64B64_SFLOAT), das::LineInfo());
  addI("R64G64B64A64_UINT", int64_t(VK_FORMAT_R64G64B64A64_UINT), das::LineInfo());
  addI("R64G64B64A64_SINT", int64_t(VK_FORMAT_R64G64B64A64_SINT), das::LineInfo());
  addI("R64G64B64A64_SFLOAT", int64_t(VK_FORMAT_R64G64B64A64_SFLOAT), das::LineInfo());
  addI("B10G11R11_UFLOAT_PACK32", int64_t(VK_FORMAT_B10G11R11_UFLOAT_PACK32), das::LineInfo());
  addI("E5B9G9R9_UFLOAT_PACK32", int64_t(VK_FORMAT_E5B9G9R9_UFLOAT_PACK32), das::LineInfo());
  addI("D16_UNORM", int64_t(VK_FORMAT_D16_UNORM), das::LineInfo());
  addI("X8_D24_UNORM_PACK32", int64_t(VK_FORMAT_X8_D24_UNORM_PACK32), das::LineInfo());
  addI("D32_SFLOAT", int64_t(VK_FORMAT_D32_SFLOAT), das::LineInfo());
  addI("S8_UINT", int64_t(VK_FORMAT_S8_UINT), das::LineInfo());
  addI("D16_UNORM_S8_UINT", int64_t(VK_FORMAT_D16_UNORM_S8_UINT), das::LineInfo());
  addI("D24_UNORM_S8_UINT", int64_t(VK_FORMAT_D24_UNORM_S8_UINT), das::LineInfo());
  addI("D32_SFLOAT_S8_UINT", int64_t(VK_FORMAT_D32_SFLOAT_S8_UINT), das::LineInfo());
  addI("BC1_RGB_UNORM_BLOCK", int64_t(VK_FORMAT_BC1_RGB_UNORM_BLOCK), das::LineInfo());
  addI("BC1_RGB_SRGB_BLOCK", int64_t(VK_FORMAT_BC1_RGB_SRGB_BLOCK), das::LineInfo());
  addI("BC1_RGBA_UNORM_BLOCK", int64_t(VK_FORMAT_BC1_RGBA_UNORM_BLOCK), das::LineInfo());
  addI("BC1_RGBA_SRGB_BLOCK", int64_t(VK_FORMAT_BC1_RGBA_SRGB_BLOCK), das::LineInfo());
  addI("BC2_UNORM_BLOCK", int64_t(VK_FORMAT_BC2_UNORM_BLOCK), das::LineInfo());
  addI("BC2_SRGB_BLOCK", int64_t(VK_FORMAT_BC2_SRGB_BLOCK), das::LineInfo());
  addI("BC3_UNORM_BLOCK", int64_t(VK_FORMAT_BC3_UNORM_BLOCK), das::LineInfo());
  addI("BC3_SRGB_BLOCK", int64_t(VK_FORMAT_BC3_SRGB_BLOCK), das::LineInfo());
  addI("BC4_UNORM_BLOCK", int64_t(VK_FORMAT_BC4_UNORM_BLOCK), das::LineInfo());
  addI("BC4_SNORM_BLOCK", int64_t(VK_FORMAT_BC4_SNORM_BLOCK), das::LineInfo());
  addI("BC5_UNORM_BLOCK", int64_t(VK_FORMAT_BC5_UNORM_BLOCK), das::LineInfo());
  addI("BC5_SNORM_BLOCK", int64_t(VK_FORMAT_BC5_SNORM_BLOCK), das::LineInfo());
  addI("BC6H_UFLOAT_BLOCK", int64_t(VK_FORMAT_BC6H_UFLOAT_BLOCK), das::LineInfo());
  addI("BC6H_SFLOAT_BLOCK", int64_t(VK_FORMAT_BC6H_SFLOAT_BLOCK), das::LineInfo());
  addI("BC7_UNORM_BLOCK", int64_t(VK_FORMAT_BC7_UNORM_BLOCK), das::LineInfo());
  addI("BC7_SRGB_BLOCK", int64_t(VK_FORMAT_BC7_SRGB_BLOCK), das::LineInfo());
  addI("ETC2_R8G8B8_UNORM_BLOCK", int64_t(VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK), das::LineInfo());
  addI("ETC2_R8G8B8_SRGB_BLOCK", int64_t(VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK), das::LineInfo());
  addI("ETC2_R8G8B8A1_UNORM_BLOCK", int64_t(VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK), das::LineInfo());
  addI("ETC2_R8G8B8A1_SRGB_BLOCK", int64_t(VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK), das::LineInfo());
  addI("ETC2_R8G8B8A8_UNORM_BLOCK", int64_t(VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK), das::LineInfo());
  addI("ETC2_R8G8B8A8_SRGB_BLOCK", int64_t(VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK), das::LineInfo());
  addI("EAC_R11_UNORM_BLOCK", int64_t(VK_FORMAT_EAC_R11_UNORM_BLOCK), das::LineInfo());
  addI("EAC_R11_SNORM_BLOCK", int64_t(VK_FORMAT_EAC_R11_SNORM_BLOCK), das::LineInfo());
  addI("EAC_R11G11_UNORM_BLOCK", int64_t(VK_FORMAT_EAC_R11G11_UNORM_BLOCK), das::LineInfo());
  addI("EAC_R11G11_SNORM_BLOCK", int64_t(VK_FORMAT_EAC_R11G11_SNORM_BLOCK), das::LineInfo());
  addI("ASTC_4x4_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_4x4_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_4x4_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_4x4_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_5x4_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_5x4_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_5x4_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_5x4_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_5x5_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_5x5_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_5x5_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_5x5_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_6x5_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_6x5_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_6x5_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_6x5_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_6x6_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_6x6_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_6x6_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_6x6_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_8x5_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_8x5_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_8x5_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_8x5_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_8x6_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_8x6_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_8x6_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_8x6_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_8x8_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_8x8_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_8x8_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_8x8_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_10x5_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_10x5_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_10x5_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_10x5_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_10x6_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_10x6_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_10x6_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_10x6_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_10x8_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_10x8_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_10x8_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_10x8_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_10x10_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_10x10_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_10x10_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_10x10_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_12x10_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_12x10_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_12x10_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_12x10_SRGB_BLOCK), das::LineInfo());
  addI("ASTC_12x12_UNORM_BLOCK", int64_t(VK_FORMAT_ASTC_12x12_UNORM_BLOCK), das::LineInfo());
  addI("ASTC_12x12_SRGB_BLOCK", int64_t(VK_FORMAT_ASTC_12x12_SRGB_BLOCK), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("G8B8G8R8_422_UNORM", int64_t(VK_FORMAT_G8B8G8R8_422_UNORM), das::LineInfo());
  addI("B8G8R8G8_422_UNORM", int64_t(VK_FORMAT_B8G8R8G8_422_UNORM), das::LineInfo());
  addI("G8_B8_R8_3PLANE_420_UNORM", int64_t(VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM), das::LineInfo());
  addI("G8_B8R8_2PLANE_420_UNORM", int64_t(VK_FORMAT_G8_B8R8_2PLANE_420_UNORM), das::LineInfo());
  addI("G8_B8_R8_3PLANE_422_UNORM", int64_t(VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM), das::LineInfo());
  addI("G8_B8R8_2PLANE_422_UNORM", int64_t(VK_FORMAT_G8_B8R8_2PLANE_422_UNORM), das::LineInfo());
  addI("G8_B8_R8_3PLANE_444_UNORM", int64_t(VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM), das::LineInfo());
  addI("R10X6_UNORM_PACK16", int64_t(VK_FORMAT_R10X6_UNORM_PACK16), das::LineInfo());
  addI("R10X6G10X6_UNORM_2PACK16", int64_t(VK_FORMAT_R10X6G10X6_UNORM_2PACK16), das::LineInfo());
  addI("R10X6G10X6B10X6A10X6_UNORM_4PACK16", int64_t(VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16), das::LineInfo());
  addI("G10X6B10X6G10X6R10X6_422_UNORM_4PACK16", int64_t(VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16), das::LineInfo());
  addI("B10X6G10X6R10X6G10X6_422_UNORM_4PACK16", int64_t(VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16), das::LineInfo());
  addI("G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16", int64_t(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16), das::LineInfo());
  addI("G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16", int64_t(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16), das::LineInfo());
  addI("G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16", int64_t(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16), das::LineInfo());
  addI("G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16", int64_t(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16), das::LineInfo());
  addI("G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16", int64_t(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16), das::LineInfo());
  addI("R12X4_UNORM_PACK16", int64_t(VK_FORMAT_R12X4_UNORM_PACK16), das::LineInfo());
  addI("R12X4G12X4_UNORM_2PACK16", int64_t(VK_FORMAT_R12X4G12X4_UNORM_2PACK16), das::LineInfo());
  addI("R12X4G12X4B12X4A12X4_UNORM_4PACK16", int64_t(VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16), das::LineInfo());
  addI("G12X4B12X4G12X4R12X4_422_UNORM_4PACK16", int64_t(VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16), das::LineInfo());
  addI("B12X4G12X4R12X4G12X4_422_UNORM_4PACK16", int64_t(VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16), das::LineInfo());
  addI("G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16", int64_t(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16), das::LineInfo());
  addI("G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16", int64_t(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16), das::LineInfo());
  addI("G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16", int64_t(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16), das::LineInfo());
  addI("G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16", int64_t(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16), das::LineInfo());
  addI("G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16", int64_t(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16), das::LineInfo());
  addI("G16B16G16R16_422_UNORM", int64_t(VK_FORMAT_G16B16G16R16_422_UNORM), das::LineInfo());
  addI("B16G16R16G16_422_UNORM", int64_t(VK_FORMAT_B16G16R16G16_422_UNORM), das::LineInfo());
  addI("G16_B16_R16_3PLANE_420_UNORM", int64_t(VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM), das::LineInfo());
  addI("G16_B16R16_2PLANE_420_UNORM", int64_t(VK_FORMAT_G16_B16R16_2PLANE_420_UNORM), das::LineInfo());
  addI("G16_B16_R16_3PLANE_422_UNORM", int64_t(VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM), das::LineInfo());
  addI("G16_B16R16_2PLANE_422_UNORM", int64_t(VK_FORMAT_G16_B16R16_2PLANE_422_UNORM), das::LineInfo());
  addI("G16_B16_R16_3PLANE_444_UNORM", int64_t(VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
  addI("G8_B8R8_2PLANE_444_UNORM", int64_t(VK_FORMAT_G8_B8R8_2PLANE_444_UNORM), das::LineInfo());
  addI("G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16", int64_t(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16), das::LineInfo());
  addI("G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16", int64_t(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16), das::LineInfo());
  addI("G16_B16R16_2PLANE_444_UNORM", int64_t(VK_FORMAT_G16_B16R16_2PLANE_444_UNORM), das::LineInfo());
  addI("A4R4G4B4_UNORM_PACK16", int64_t(VK_FORMAT_A4R4G4B4_UNORM_PACK16), das::LineInfo());
  addI("A4B4G4R4_UNORM_PACK16", int64_t(VK_FORMAT_A4B4G4R4_UNORM_PACK16), das::LineInfo());
  addI("ASTC_4x4_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_5x4_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_5x5_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_6x5_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_6x6_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_8x5_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_8x6_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_8x8_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_10x5_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_10x6_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_10x8_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_10x10_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_12x10_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK), das::LineInfo());
  addI("ASTC_12x12_SFLOAT_BLOCK", int64_t(VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
  addI("A1B5G5R5_UNORM_PACK16", int64_t(VK_FORMAT_A1B5G5R5_UNORM_PACK16), das::LineInfo());
  addI("A8_UNORM", int64_t(VK_FORMAT_A8_UNORM), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_4444_formats)
  addI("A4R4G4B4_UNORM_PACK16_EXT", int64_t(VK_FORMAT_A4R4G4B4_UNORM_PACK16_EXT), das::LineInfo());
  addI("A4B4G4R4_UNORM_PACK16_EXT", int64_t(VK_FORMAT_A4B4G4R4_UNORM_PACK16_EXT), das::LineInfo());
#endif /* defined(VK_EXT_4444_formats) */
#if defined(VK_EXT_texture_compression_astc_hdr)
  addI("ASTC_4x4_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_5x4_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_5x5_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_6x5_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_6x6_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_8x5_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_8x6_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_8x8_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_10x5_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_10x6_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_10x8_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_10x10_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_12x10_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT), das::LineInfo());
  addI("ASTC_12x12_SFLOAT_BLOCK_EXT", int64_t(VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT), das::LineInfo());
#endif /* defined(VK_EXT_texture_compression_astc_hdr) */
#if defined(VK_EXT_ycbcr_2plane_444_formats)
  addI("G8_B8R8_2PLANE_444_UNORM_EXT", int64_t(VK_FORMAT_G8_B8R8_2PLANE_444_UNORM_EXT), das::LineInfo());
  addI("G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16_EXT", int64_t(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16_EXT), das::LineInfo());
  addI("G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16_EXT", int64_t(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16_EXT), das::LineInfo());
  addI("G16_B16R16_2PLANE_444_UNORM_EXT", int64_t(VK_FORMAT_G16_B16R16_2PLANE_444_UNORM_EXT), das::LineInfo());
#endif /* defined(VK_EXT_ycbcr_2plane_444_formats) */
#if defined(VK_IMG_format_pvrtc)
  addI("PVRTC1_2BPP_UNORM_BLOCK_IMG", int64_t(VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG), das::LineInfo());
  addI("PVRTC1_4BPP_UNORM_BLOCK_IMG", int64_t(VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG), das::LineInfo());
  addI("PVRTC2_2BPP_UNORM_BLOCK_IMG", int64_t(VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG), das::LineInfo());
  addI("PVRTC2_4BPP_UNORM_BLOCK_IMG", int64_t(VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG), das::LineInfo());
  addI("PVRTC1_2BPP_SRGB_BLOCK_IMG", int64_t(VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG), das::LineInfo());
  addI("PVRTC1_4BPP_SRGB_BLOCK_IMG", int64_t(VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG), das::LineInfo());
  addI("PVRTC2_2BPP_SRGB_BLOCK_IMG", int64_t(VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG), das::LineInfo());
  addI("PVRTC2_4BPP_SRGB_BLOCK_IMG", int64_t(VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG), das::LineInfo());
#endif /* defined(VK_IMG_format_pvrtc) */
#if defined(VK_KHR_maintenance5)
  addI("A1B5G5R5_UNORM_PACK16_KHR", int64_t(VK_FORMAT_A1B5G5R5_UNORM_PACK16_KHR), das::LineInfo());
  addI("A8_UNORM_KHR", int64_t(VK_FORMAT_A8_UNORM_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) */
#if defined(VK_KHR_sampler_ycbcr_conversion)
  addI("G8B8G8R8_422_UNORM_KHR", int64_t(VK_FORMAT_G8B8G8R8_422_UNORM_KHR), das::LineInfo());
  addI("B8G8R8G8_422_UNORM_KHR", int64_t(VK_FORMAT_B8G8R8G8_422_UNORM_KHR), das::LineInfo());
  addI("G8_B8_R8_3PLANE_420_UNORM_KHR", int64_t(VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR), das::LineInfo());
  addI("G8_B8R8_2PLANE_420_UNORM_KHR", int64_t(VK_FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR), das::LineInfo());
  addI("G8_B8_R8_3PLANE_422_UNORM_KHR", int64_t(VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR), das::LineInfo());
  addI("G8_B8R8_2PLANE_422_UNORM_KHR", int64_t(VK_FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR), das::LineInfo());
  addI("G8_B8_R8_3PLANE_444_UNORM_KHR", int64_t(VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR), das::LineInfo());
  addI("R10X6_UNORM_PACK16_KHR", int64_t(VK_FORMAT_R10X6_UNORM_PACK16_KHR), das::LineInfo());
  addI("R10X6G10X6_UNORM_2PACK16_KHR", int64_t(VK_FORMAT_R10X6G10X6_UNORM_2PACK16_KHR), das::LineInfo());
  addI("R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR", int64_t(VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR), das::LineInfo());
  addI("G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR", int64_t(VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR), das::LineInfo());
  addI("B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR", int64_t(VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR), das::LineInfo());
  addI("G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR), das::LineInfo());
  addI("G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR), das::LineInfo());
  addI("G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR), das::LineInfo());
  addI("G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR), das::LineInfo());
  addI("G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR), das::LineInfo());
  addI("R12X4_UNORM_PACK16_KHR", int64_t(VK_FORMAT_R12X4_UNORM_PACK16_KHR), das::LineInfo());
  addI("R12X4G12X4_UNORM_2PACK16_KHR", int64_t(VK_FORMAT_R12X4G12X4_UNORM_2PACK16_KHR), das::LineInfo());
  addI("R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR", int64_t(VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR), das::LineInfo());
  addI("G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR", int64_t(VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR), das::LineInfo());
  addI("B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR", int64_t(VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR), das::LineInfo());
  addI("G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR), das::LineInfo());
  addI("G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR), das::LineInfo());
  addI("G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR), das::LineInfo());
  addI("G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR), das::LineInfo());
  addI("G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR", int64_t(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR), das::LineInfo());
  addI("G16B16G16R16_422_UNORM_KHR", int64_t(VK_FORMAT_G16B16G16R16_422_UNORM_KHR), das::LineInfo());
  addI("B16G16R16G16_422_UNORM_KHR", int64_t(VK_FORMAT_B16G16R16G16_422_UNORM_KHR), das::LineInfo());
  addI("G16_B16_R16_3PLANE_420_UNORM_KHR", int64_t(VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR), das::LineInfo());
  addI("G16_B16R16_2PLANE_420_UNORM_KHR", int64_t(VK_FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR), das::LineInfo());
  addI("G16_B16_R16_3PLANE_422_UNORM_KHR", int64_t(VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR), das::LineInfo());
  addI("G16_B16R16_2PLANE_422_UNORM_KHR", int64_t(VK_FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR), das::LineInfo());
  addI("G16_B16_R16_3PLANE_444_UNORM_KHR", int64_t(VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
#if defined(VK_NV_optical_flow)
  addI("R16G16_SFIXED5_NV", int64_t(VK_FORMAT_R16G16_SFIXED5_NV), das::LineInfo());
  addI("R16G16_S10_5_NV", int64_t(VK_FORMAT_R16G16_S10_5_NV), das::LineInfo());
#endif /* defined(VK_NV_optical_flow) */
} };
class EnumerationVkFormatFeatureFlagBits:public das::Enumeration{public:
EnumerationVkFormatFeatureFlagBits():das::Enumeration("VkFormatFeatureFlagBits") {
  external=true; cppName="VkFormatFeatureFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFormatFeatureFlagBits>::type>::type;
  addI("SAMPLED_IMAGE_BIT", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT), das::LineInfo());
  addI("STORAGE_IMAGE_BIT", int64_t(VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT), das::LineInfo());
  addI("STORAGE_IMAGE_ATOMIC_BIT", int64_t(VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT), das::LineInfo());
  addI("UNIFORM_TEXEL_BUFFER_BIT", int64_t(VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER_BIT", int64_t(VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER_ATOMIC_BIT", int64_t(VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT), das::LineInfo());
  addI("VERTEX_BUFFER_BIT", int64_t(VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_BIT", int64_t(VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_BLEND_BIT", int64_t(VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_BIT", int64_t(VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT), das::LineInfo());
  addI("BLIT_SRC_BIT", int64_t(VK_FORMAT_FEATURE_BLIT_SRC_BIT), das::LineInfo());
  addI("BLIT_DST_BIT", int64_t(VK_FORMAT_FEATURE_BLIT_DST_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_FILTER_LINEAR_BIT", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("TRANSFER_SRC_BIT", int64_t(VK_FORMAT_FEATURE_TRANSFER_SRC_BIT), das::LineInfo());
  addI("TRANSFER_DST_BIT", int64_t(VK_FORMAT_FEATURE_TRANSFER_DST_BIT), das::LineInfo());
  addI("MIDPOINT_CHROMA_SAMPLES_BIT", int64_t(VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT), das::LineInfo());
  addI("DISJOINT_BIT", int64_t(VK_FORMAT_FEATURE_DISJOINT_BIT), das::LineInfo());
  addI("COSITED_CHROMA_SAMPLES_BIT", int64_t(VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
  addI("SAMPLED_IMAGE_FILTER_MINMAX_BIT", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_filter_cubic)
  addI("SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_filter_cubic) */
#if defined(VK_EXT_fragment_density_map)
  addI("FRAGMENT_DENSITY_MAP_BIT_EXT", int64_t(VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_EXT_sampler_filter_minmax)
  addI("SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_sampler_filter_minmax) */
#if defined(VK_IMG_filter_cubic)
  addI("SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG), das::LineInfo());
#endif /* defined(VK_IMG_filter_cubic) */
#if defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR", int64_t(VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_maintenance1)
  addI("TRANSFER_SRC_BIT_KHR", int64_t(VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR), das::LineInfo());
  addI("TRANSFER_DST_BIT_KHR", int64_t(VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance1) */
#if defined(VK_KHR_sampler_ycbcr_conversion)
  addI("MIDPOINT_CHROMA_SAMPLES_BIT_KHR", int64_t(VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR", int64_t(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR), das::LineInfo());
  addI("DISJOINT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_DISJOINT_BIT_KHR), das::LineInfo());
  addI("COSITED_CHROMA_SAMPLES_BIT_KHR", int64_t(VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
#if defined(VK_KHR_video_decode_queue)
  addI("VIDEO_DECODE_OUTPUT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_VIDEO_DECODE_OUTPUT_BIT_KHR), das::LineInfo());
  addI("VIDEO_DECODE_DPB_BIT_KHR", int64_t(VK_FORMAT_FEATURE_VIDEO_DECODE_DPB_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_INPUT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_VIDEO_ENCODE_INPUT_BIT_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_DPB_BIT_KHR", int64_t(VK_FORMAT_FEATURE_VIDEO_ENCODE_DPB_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
} };
class EnumerationVkFrontFace:public das::Enumeration{public:
EnumerationVkFrontFace():das::Enumeration("VkFrontFace") {
  external=true; cppName="VkFrontFace";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFrontFace>::type>::type;
  addI("OUNTER_CLOCKWISE", int64_t(VK_FRONT_FACE_COUNTER_CLOCKWISE), das::LineInfo());
  addI("LOCKWISE", int64_t(VK_FRONT_FACE_CLOCKWISE), das::LineInfo());
} };
class EnumerationVkImageAspectFlagBits:public das::Enumeration{public:
EnumerationVkImageAspectFlagBits():das::Enumeration("VkImageAspectFlagBits") {
  external=true; cppName="VkImageAspectFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageAspectFlagBits>::type>::type;
  addI("COLOR_BIT", int64_t(VK_IMAGE_ASPECT_COLOR_BIT), das::LineInfo());
  addI("DEPTH_BIT", int64_t(VK_IMAGE_ASPECT_DEPTH_BIT), das::LineInfo());
  addI("STENCIL_BIT", int64_t(VK_IMAGE_ASPECT_STENCIL_BIT), das::LineInfo());
  addI("METADATA_BIT", int64_t(VK_IMAGE_ASPECT_METADATA_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("PLANE_0_BIT", int64_t(VK_IMAGE_ASPECT_PLANE_0_BIT), das::LineInfo());
  addI("PLANE_1_BIT", int64_t(VK_IMAGE_ASPECT_PLANE_1_BIT), das::LineInfo());
  addI("PLANE_2_BIT", int64_t(VK_IMAGE_ASPECT_PLANE_2_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
  addI("NONE", int64_t(VK_IMAGE_ASPECT_NONE), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_image_drm_format_modifier)
  addI("MEMORY_PLANE_0_BIT_EXT", int64_t(VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT), das::LineInfo());
  addI("MEMORY_PLANE_1_BIT_EXT", int64_t(VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT), das::LineInfo());
  addI("MEMORY_PLANE_2_BIT_EXT", int64_t(VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT), das::LineInfo());
  addI("MEMORY_PLANE_3_BIT_EXT", int64_t(VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_KHR_maintenance4)
  addI("NONE_KHR", int64_t(VK_IMAGE_ASPECT_NONE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance4) */
#if defined(VK_KHR_sampler_ycbcr_conversion)
  addI("PLANE_0_BIT_KHR", int64_t(VK_IMAGE_ASPECT_PLANE_0_BIT_KHR), das::LineInfo());
  addI("PLANE_1_BIT_KHR", int64_t(VK_IMAGE_ASPECT_PLANE_1_BIT_KHR), das::LineInfo());
  addI("PLANE_2_BIT_KHR", int64_t(VK_IMAGE_ASPECT_PLANE_2_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
} };
class EnumerationVkImageCreateFlagBits:public das::Enumeration{public:
EnumerationVkImageCreateFlagBits():das::Enumeration("VkImageCreateFlagBits") {
  external=true; cppName="VkImageCreateFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageCreateFlagBits>::type>::type;
  addI("SPARSE_BINDING_BIT", int64_t(VK_IMAGE_CREATE_SPARSE_BINDING_BIT), das::LineInfo());
  addI("SPARSE_RESIDENCY_BIT", int64_t(VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT), das::LineInfo());
  addI("SPARSE_ALIASED_BIT", int64_t(VK_IMAGE_CREATE_SPARSE_ALIASED_BIT), das::LineInfo());
  addI("MUTABLE_FORMAT_BIT", int64_t(VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT), das::LineInfo());
  addI("CUBE_COMPATIBLE_BIT", int64_t(VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("ALIAS_BIT", int64_t(VK_IMAGE_CREATE_ALIAS_BIT), das::LineInfo());
  addI("SPLIT_INSTANCE_BIND_REGIONS_BIT", int64_t(VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT), das::LineInfo());
  addI("_2D_ARRAY_COMPATIBLE_BIT", int64_t(VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT), das::LineInfo());
  addI("BLOCK_TEXEL_VIEW_COMPATIBLE_BIT", int64_t(VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT), das::LineInfo());
  addI("EXTENDED_USAGE_BIT", int64_t(VK_IMAGE_CREATE_EXTENDED_USAGE_BIT), das::LineInfo());
  addI("PROTECTED_BIT", int64_t(VK_IMAGE_CREATE_PROTECTED_BIT), das::LineInfo());
  addI("DISJOINT_BIT", int64_t(VK_IMAGE_CREATE_DISJOINT_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_descriptor_buffer)
  addI("DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT", int64_t(VK_IMAGE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_EXT_fragment_density_map)
  addI("SUBSAMPLED_BIT_EXT", int64_t(VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_EXT_image_2d_view_of_3d)
  addI("_2D_VIEW_COMPATIBLE_BIT_EXT", int64_t(VK_IMAGE_CREATE_2D_VIEW_COMPATIBLE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_2d_view_of_3d) */
#if defined(VK_EXT_multisampled_render_to_single_sampled)
  addI("MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_BIT_EXT", int64_t(VK_IMAGE_CREATE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_multisampled_render_to_single_sampled) */
#if defined(VK_EXT_sample_locations)
  addI("SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT", int64_t(VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_KHR_bind_memory2)
  addI("ALIAS_BIT_KHR", int64_t(VK_IMAGE_CREATE_ALIAS_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_bind_memory2) */
#if defined(VK_KHR_device_group) && defined(VK_KHR_bind_memory2)
  addI("SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR", int64_t(VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_device_group) && defined(VK_KHR_bind_memory2) */
#if defined(VK_KHR_maintenance1)
  addI("_2D_ARRAY_COMPATIBLE_BIT_KHR", int64_t(VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance1) */
#if defined(VK_KHR_maintenance2)
  addI("BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR", int64_t(VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR), das::LineInfo());
  addI("EXTENDED_USAGE_BIT_KHR", int64_t(VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance2) */
#if defined(VK_KHR_sampler_ycbcr_conversion)
  addI("DISJOINT_BIT_KHR", int64_t(VK_IMAGE_CREATE_DISJOINT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
#if defined(VK_KHR_video_maintenance1)
  addI("VIDEO_PROFILE_INDEPENDENT_BIT_KHR", int64_t(VK_IMAGE_CREATE_VIDEO_PROFILE_INDEPENDENT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_maintenance1) */
#if defined(VK_NV_corner_sampled_image)
  addI("CORNER_SAMPLED_BIT_NV", int64_t(VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_corner_sampled_image) */
#if defined(VK_QCOM_fragment_density_map_offset)
  addI("FRAGMENT_DENSITY_MAP_OFFSET_BIT_QCOM", int64_t(VK_IMAGE_CREATE_FRAGMENT_DENSITY_MAP_OFFSET_BIT_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_fragment_density_map_offset) */
} };
class EnumerationVkImageLayout:public das::Enumeration{public:
EnumerationVkImageLayout():das::Enumeration("VkImageLayout") {
  external=true; cppName="VkImageLayout";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageLayout>::type>::type;
  addI("UNDEFINED", int64_t(VK_IMAGE_LAYOUT_UNDEFINED), das::LineInfo());
  addI("GENERAL", int64_t(VK_IMAGE_LAYOUT_GENERAL), das::LineInfo());
  addI("COLOR_ATTACHMENT_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL), das::LineInfo());
  addI("DEPTH_STENCIL_READ_ONLY_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL), das::LineInfo());
  addI("SHADER_READ_ONLY_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL), das::LineInfo());
  addI("TRANSFER_SRC_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL), das::LineInfo());
  addI("TRANSFER_DST_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL), das::LineInfo());
  addI("PREINITIALIZED", int64_t(VK_IMAGE_LAYOUT_PREINITIALIZED), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL), das::LineInfo());
  addI("DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
  addI("DEPTH_ATTACHMENT_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL), das::LineInfo());
  addI("DEPTH_READ_ONLY_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL), das::LineInfo());
  addI("STENCIL_ATTACHMENT_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL), das::LineInfo());
  addI("STENCIL_READ_ONLY_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL), das::LineInfo());
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_3)
  addI("READ_ONLY_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL), das::LineInfo());
  addI("ATTACHMENT_OPTIMAL", int64_t(VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
  addI("RENDERING_LOCAL_READ", int64_t(VK_IMAGE_LAYOUT_RENDERING_LOCAL_READ), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_attachment_feedback_loop_layout)
  addI("ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT", int64_t(VK_IMAGE_LAYOUT_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT), das::LineInfo());
#endif /* defined(VK_EXT_attachment_feedback_loop_layout) */
#if defined(VK_EXT_fragment_density_map)
  addI("FRAGMENT_DENSITY_MAP_OPTIMAL_EXT", int64_t(VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_KHR_dynamic_rendering_local_read)
  addI("RENDERING_LOCAL_READ_KHR", int64_t(VK_IMAGE_LAYOUT_RENDERING_LOCAL_READ_KHR), das::LineInfo());
#endif /* defined(VK_KHR_dynamic_rendering_local_read) */
#if defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR", int64_t(VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_maintenance2)
  addI("DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR", int64_t(VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR), das::LineInfo());
  addI("DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR", int64_t(VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance2) */
#if defined(VK_KHR_separate_depth_stencil_layouts)
  addI("DEPTH_ATTACHMENT_OPTIMAL_KHR", int64_t(VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL_KHR), das::LineInfo());
  addI("DEPTH_READ_ONLY_OPTIMAL_KHR", int64_t(VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL_KHR), das::LineInfo());
  addI("STENCIL_ATTACHMENT_OPTIMAL_KHR", int64_t(VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL_KHR), das::LineInfo());
  addI("STENCIL_READ_ONLY_OPTIMAL_KHR", int64_t(VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL_KHR), das::LineInfo());
#endif /* defined(VK_KHR_separate_depth_stencil_layouts) */
#if defined(VK_KHR_shared_presentable_image)
  addI("SHARED_PRESENT_KHR", int64_t(VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shared_presentable_image) */
#if defined(VK_KHR_swapchain)
  addI("PRESENT_SRC_KHR", int64_t(VK_IMAGE_LAYOUT_PRESENT_SRC_KHR), das::LineInfo());
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_KHR_synchronization2)
  addI("READ_ONLY_OPTIMAL_KHR", int64_t(VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL_KHR), das::LineInfo());
  addI("ATTACHMENT_OPTIMAL_KHR", int64_t(VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) */
#if defined(VK_KHR_video_decode_queue)
  addI("VIDEO_DECODE_DST_KHR", int64_t(VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR), das::LineInfo());
  addI("VIDEO_DECODE_SRC_KHR", int64_t(VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR), das::LineInfo());
  addI("VIDEO_DECODE_DPB_KHR", int64_t(VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_quantization_map)
  addI("VIDEO_ENCODE_QUANTIZATION_MAP_KHR", int64_t(VK_IMAGE_LAYOUT_VIDEO_ENCODE_QUANTIZATION_MAP_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_DST_KHR", int64_t(VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_SRC_KHR", int64_t(VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_DPB_KHR", int64_t(VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_NV_shading_rate_image)
  addI("SHADING_RATE_OPTIMAL_NV", int64_t(VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV), das::LineInfo());
#endif /* defined(VK_NV_shading_rate_image) */
} };
class EnumerationVkImageTiling:public das::Enumeration{public:
EnumerationVkImageTiling():das::Enumeration("VkImageTiling") {
  external=true; cppName="VkImageTiling";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageTiling>::type>::type;
  addI("OPTIMAL", int64_t(VK_IMAGE_TILING_OPTIMAL), das::LineInfo());
  addI("LINEAR", int64_t(VK_IMAGE_TILING_LINEAR), das::LineInfo());
#if defined(VK_EXT_image_drm_format_modifier)
  addI("DRM_FORMAT_MODIFIER_EXT", int64_t(VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_drm_format_modifier) */
} };
class EnumerationVkImageType:public das::Enumeration{public:
EnumerationVkImageType():das::Enumeration("VkImageType") {
  external=true; cppName="VkImageType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageType>::type>::type;
  addI("_1D", int64_t(VK_IMAGE_TYPE_1D), das::LineInfo());
  addI("_2D", int64_t(VK_IMAGE_TYPE_2D), das::LineInfo());
  addI("_3D", int64_t(VK_IMAGE_TYPE_3D), das::LineInfo());
} };
class EnumerationVkImageUsageFlagBits:public das::Enumeration{public:
EnumerationVkImageUsageFlagBits():das::Enumeration("VkImageUsageFlagBits") {
  external=true; cppName="VkImageUsageFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageUsageFlagBits>::type>::type;
  addI("TRANSFER_SRC_BIT", int64_t(VK_IMAGE_USAGE_TRANSFER_SRC_BIT), das::LineInfo());
  addI("TRANSFER_DST_BIT", int64_t(VK_IMAGE_USAGE_TRANSFER_DST_BIT), das::LineInfo());
  addI("SAMPLED_BIT", int64_t(VK_IMAGE_USAGE_SAMPLED_BIT), das::LineInfo());
  addI("STORAGE_BIT", int64_t(VK_IMAGE_USAGE_STORAGE_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_BIT", int64_t(VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_BIT", int64_t(VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT), das::LineInfo());
  addI("TRANSIENT_ATTACHMENT_BIT", int64_t(VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT), das::LineInfo());
  addI("INPUT_ATTACHMENT_BIT", int64_t(VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT), das::LineInfo());
#if defined(VK_VERSION_1_4)
  addI("HOST_TRANSFER_BIT", int64_t(VK_IMAGE_USAGE_HOST_TRANSFER_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_attachment_feedback_loop_layout)
  addI("ATTACHMENT_FEEDBACK_LOOP_BIT_EXT", int64_t(VK_IMAGE_USAGE_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_attachment_feedback_loop_layout) */
#if defined(VK_EXT_fragment_density_map)
  addI("FRAGMENT_DENSITY_MAP_BIT_EXT", int64_t(VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_EXT_host_image_copy)
  addI("HOST_TRANSFER_BIT_EXT", int64_t(VK_IMAGE_USAGE_HOST_TRANSFER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_host_image_copy) */
#if defined(VK_HUAWEI_invocation_mask)
  addI("INVOCATION_MASK_BIT_HUAWEI", int64_t(VK_IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_invocation_mask) */
#if defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR", int64_t(VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_video_decode_queue)
  addI("VIDEO_DECODE_DST_BIT_KHR", int64_t(VK_IMAGE_USAGE_VIDEO_DECODE_DST_BIT_KHR), das::LineInfo());
  addI("VIDEO_DECODE_SRC_BIT_KHR", int64_t(VK_IMAGE_USAGE_VIDEO_DECODE_SRC_BIT_KHR), das::LineInfo());
  addI("VIDEO_DECODE_DPB_BIT_KHR", int64_t(VK_IMAGE_USAGE_VIDEO_DECODE_DPB_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_quantization_map)
  addI("VIDEO_ENCODE_QUANTIZATION_DELTA_MAP_BIT_KHR", int64_t(VK_IMAGE_USAGE_VIDEO_ENCODE_QUANTIZATION_DELTA_MAP_BIT_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_EMPHASIS_MAP_BIT_KHR", int64_t(VK_IMAGE_USAGE_VIDEO_ENCODE_EMPHASIS_MAP_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_DST_BIT_KHR", int64_t(VK_IMAGE_USAGE_VIDEO_ENCODE_DST_BIT_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_SRC_BIT_KHR", int64_t(VK_IMAGE_USAGE_VIDEO_ENCODE_SRC_BIT_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_DPB_BIT_KHR", int64_t(VK_IMAGE_USAGE_VIDEO_ENCODE_DPB_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_NV_shading_rate_image)
  addI("SHADING_RATE_IMAGE_BIT_NV", int64_t(VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_QCOM_image_processing)
  addI("SAMPLE_WEIGHT_BIT_QCOM", int64_t(VK_IMAGE_USAGE_SAMPLE_WEIGHT_BIT_QCOM), das::LineInfo());
  addI("SAMPLE_BLOCK_MATCH_BIT_QCOM", int64_t(VK_IMAGE_USAGE_SAMPLE_BLOCK_MATCH_BIT_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_image_processing) */
} };
class EnumerationVkImageViewType:public das::Enumeration{public:
EnumerationVkImageViewType():das::Enumeration("VkImageViewType") {
  external=true; cppName="VkImageViewType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageViewType>::type>::type;
  addI("_1D", int64_t(VK_IMAGE_VIEW_TYPE_1D), das::LineInfo());
  addI("_2D", int64_t(VK_IMAGE_VIEW_TYPE_2D), das::LineInfo());
  addI("_3D", int64_t(VK_IMAGE_VIEW_TYPE_3D), das::LineInfo());
  addI("CUBE", int64_t(VK_IMAGE_VIEW_TYPE_CUBE), das::LineInfo());
  addI("_1D_ARRAY", int64_t(VK_IMAGE_VIEW_TYPE_1D_ARRAY), das::LineInfo());
  addI("_2D_ARRAY", int64_t(VK_IMAGE_VIEW_TYPE_2D_ARRAY), das::LineInfo());
  addI("CUBE_ARRAY", int64_t(VK_IMAGE_VIEW_TYPE_CUBE_ARRAY), das::LineInfo());
} };
class EnumerationVkIndexType:public das::Enumeration{public:
EnumerationVkIndexType():das::Enumeration("VkIndexType") {
  external=true; cppName="VkIndexType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkIndexType>::type>::type;
  addI("UINT16", int64_t(VK_INDEX_TYPE_UINT16), das::LineInfo());
  addI("UINT32", int64_t(VK_INDEX_TYPE_UINT32), das::LineInfo());
#if defined(VK_VERSION_1_4)
  addI("UINT8", int64_t(VK_INDEX_TYPE_UINT8), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_index_type_uint8)
  addI("UINT8_EXT", int64_t(VK_INDEX_TYPE_UINT8_EXT), das::LineInfo());
#endif /* defined(VK_EXT_index_type_uint8) */
#if defined(VK_KHR_acceleration_structure)
  addI("NONE_KHR", int64_t(VK_INDEX_TYPE_NONE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_index_type_uint8)
  addI("UINT8_KHR", int64_t(VK_INDEX_TYPE_UINT8_KHR), das::LineInfo());
#endif /* defined(VK_KHR_index_type_uint8) */
#if defined(VK_NV_ray_tracing)
  addI("NONE_NV", int64_t(VK_INDEX_TYPE_NONE_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkInternalAllocationType:public das::Enumeration{public:
EnumerationVkInternalAllocationType():das::Enumeration("VkInternalAllocationType") {
  external=true; cppName="VkInternalAllocationType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkInternalAllocationType>::type>::type;
  addI("_EXECUTABLE", int64_t(VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE), das::LineInfo());
} };
class EnumerationVkLogicOp:public das::Enumeration{public:
EnumerationVkLogicOp():das::Enumeration("VkLogicOp") {
  external=true; cppName="VkLogicOp";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkLogicOp>::type>::type;
  addI("CLEAR", int64_t(VK_LOGIC_OP_CLEAR), das::LineInfo());
  addI("AND", int64_t(VK_LOGIC_OP_AND), das::LineInfo());
  addI("AND_REVERSE", int64_t(VK_LOGIC_OP_AND_REVERSE), das::LineInfo());
  addI("COPY", int64_t(VK_LOGIC_OP_COPY), das::LineInfo());
  addI("AND_INVERTED", int64_t(VK_LOGIC_OP_AND_INVERTED), das::LineInfo());
  addI("NO_OP", int64_t(VK_LOGIC_OP_NO_OP), das::LineInfo());
  addI("XOR", int64_t(VK_LOGIC_OP_XOR), das::LineInfo());
  addI("OR", int64_t(VK_LOGIC_OP_OR), das::LineInfo());
  addI("NOR", int64_t(VK_LOGIC_OP_NOR), das::LineInfo());
  addI("EQUIVALENT", int64_t(VK_LOGIC_OP_EQUIVALENT), das::LineInfo());
  addI("INVERT", int64_t(VK_LOGIC_OP_INVERT), das::LineInfo());
  addI("OR_REVERSE", int64_t(VK_LOGIC_OP_OR_REVERSE), das::LineInfo());
  addI("COPY_INVERTED", int64_t(VK_LOGIC_OP_COPY_INVERTED), das::LineInfo());
  addI("OR_INVERTED", int64_t(VK_LOGIC_OP_OR_INVERTED), das::LineInfo());
  addI("NAND", int64_t(VK_LOGIC_OP_NAND), das::LineInfo());
  addI("SET", int64_t(VK_LOGIC_OP_SET), das::LineInfo());
} };
class EnumerationVkMemoryHeapFlagBits:public das::Enumeration{public:
EnumerationVkMemoryHeapFlagBits():das::Enumeration("VkMemoryHeapFlagBits") {
  external=true; cppName="VkMemoryHeapFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkMemoryHeapFlagBits>::type>::type;
  addI("DEVICE_LOCAL_BIT", int64_t(VK_MEMORY_HEAP_DEVICE_LOCAL_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("MULTI_INSTANCE_BIT", int64_t(VK_MEMORY_HEAP_MULTI_INSTANCE_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_device_group_creation)
  addI("MULTI_INSTANCE_BIT_KHR", int64_t(VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_device_group_creation) */
} };
class EnumerationVkMemoryPropertyFlagBits:public das::Enumeration{public:
EnumerationVkMemoryPropertyFlagBits():das::Enumeration("VkMemoryPropertyFlagBits") {
  external=true; cppName="VkMemoryPropertyFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkMemoryPropertyFlagBits>::type>::type;
  addI("DEVICE_LOCAL_BIT", int64_t(VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT), das::LineInfo());
  addI("HOST_VISIBLE_BIT", int64_t(VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT), das::LineInfo());
  addI("HOST_COHERENT_BIT", int64_t(VK_MEMORY_PROPERTY_HOST_COHERENT_BIT), das::LineInfo());
  addI("HOST_CACHED_BIT", int64_t(VK_MEMORY_PROPERTY_HOST_CACHED_BIT), das::LineInfo());
  addI("LAZILY_ALLOCATED_BIT", int64_t(VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("PROTECTED_BIT", int64_t(VK_MEMORY_PROPERTY_PROTECTED_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_AMD_device_coherent_memory)
  addI("DEVICE_COHERENT_BIT_AMD", int64_t(VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD), das::LineInfo());
  addI("DEVICE_UNCACHED_BIT_AMD", int64_t(VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD), das::LineInfo());
#endif /* defined(VK_AMD_device_coherent_memory) */
#if defined(VK_NV_external_memory_rdma)
  addI("RDMA_CAPABLE_BIT_NV", int64_t(VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_external_memory_rdma) */
} };
class EnumerationVkObjectType:public das::Enumeration{public:
EnumerationVkObjectType():das::Enumeration("VkObjectType") {
  external=true; cppName="VkObjectType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkObjectType>::type>::type;
  addI("UNKNOWN", int64_t(VK_OBJECT_TYPE_UNKNOWN), das::LineInfo());
  addI("INSTANCE", int64_t(VK_OBJECT_TYPE_INSTANCE), das::LineInfo());
  addI("PHYSICAL_DEVICE", int64_t(VK_OBJECT_TYPE_PHYSICAL_DEVICE), das::LineInfo());
  addI("DEVICE", int64_t(VK_OBJECT_TYPE_DEVICE), das::LineInfo());
  addI("QUEUE", int64_t(VK_OBJECT_TYPE_QUEUE), das::LineInfo());
  addI("SEMAPHORE", int64_t(VK_OBJECT_TYPE_SEMAPHORE), das::LineInfo());
  addI("COMMAND_BUFFER", int64_t(VK_OBJECT_TYPE_COMMAND_BUFFER), das::LineInfo());
  addI("FENCE", int64_t(VK_OBJECT_TYPE_FENCE), das::LineInfo());
  addI("DEVICE_MEMORY", int64_t(VK_OBJECT_TYPE_DEVICE_MEMORY), das::LineInfo());
  addI("BUFFER", int64_t(VK_OBJECT_TYPE_BUFFER), das::LineInfo());
  addI("IMAGE", int64_t(VK_OBJECT_TYPE_IMAGE), das::LineInfo());
  addI("EVENT", int64_t(VK_OBJECT_TYPE_EVENT), das::LineInfo());
  addI("QUERY_POOL", int64_t(VK_OBJECT_TYPE_QUERY_POOL), das::LineInfo());
  addI("BUFFER_VIEW", int64_t(VK_OBJECT_TYPE_BUFFER_VIEW), das::LineInfo());
  addI("IMAGE_VIEW", int64_t(VK_OBJECT_TYPE_IMAGE_VIEW), das::LineInfo());
  addI("SHADER_MODULE", int64_t(VK_OBJECT_TYPE_SHADER_MODULE), das::LineInfo());
  addI("PIPELINE_CACHE", int64_t(VK_OBJECT_TYPE_PIPELINE_CACHE), das::LineInfo());
  addI("PIPELINE_LAYOUT", int64_t(VK_OBJECT_TYPE_PIPELINE_LAYOUT), das::LineInfo());
  addI("RENDER_PASS", int64_t(VK_OBJECT_TYPE_RENDER_PASS), das::LineInfo());
  addI("PIPELINE", int64_t(VK_OBJECT_TYPE_PIPELINE), das::LineInfo());
  addI("DESCRIPTOR_SET_LAYOUT", int64_t(VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT), das::LineInfo());
  addI("SAMPLER", int64_t(VK_OBJECT_TYPE_SAMPLER), das::LineInfo());
  addI("DESCRIPTOR_POOL", int64_t(VK_OBJECT_TYPE_DESCRIPTOR_POOL), das::LineInfo());
  addI("DESCRIPTOR_SET", int64_t(VK_OBJECT_TYPE_DESCRIPTOR_SET), das::LineInfo());
  addI("FRAMEBUFFER", int64_t(VK_OBJECT_TYPE_FRAMEBUFFER), das::LineInfo());
  addI("COMMAND_POOL", int64_t(VK_OBJECT_TYPE_COMMAND_POOL), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("SAMPLER_YCBCR_CONVERSION", int64_t(VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION), das::LineInfo());
  addI("DESCRIPTOR_UPDATE_TEMPLATE", int64_t(VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
  addI("PRIVATE_DATA_SLOT", int64_t(VK_OBJECT_TYPE_PRIVATE_DATA_SLOT), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_debug_report)
  addI("DEBUG_REPORT_CALLBACK_EXT", int64_t(VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT), das::LineInfo());
#endif /* defined(VK_EXT_debug_report) */
#if defined(VK_EXT_debug_utils)
  addI("DEBUG_UTILS_MESSENGER_EXT", int64_t(VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT), das::LineInfo());
#endif /* defined(VK_EXT_debug_utils) */
#if defined(VK_EXT_device_generated_commands)
  addI("INDIRECT_COMMANDS_LAYOUT_EXT", int64_t(VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_EXT), das::LineInfo());
  addI("INDIRECT_EXECUTION_SET_EXT", int64_t(VK_OBJECT_TYPE_INDIRECT_EXECUTION_SET_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_opacity_micromap)
  addI("MICROMAP_EXT", int64_t(VK_OBJECT_TYPE_MICROMAP_EXT), das::LineInfo());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_private_data)
  addI("PRIVATE_DATA_SLOT_EXT", int64_t(VK_OBJECT_TYPE_PRIVATE_DATA_SLOT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_private_data) */
#if defined(VK_EXT_shader_object)
  addI("SHADER_EXT", int64_t(VK_OBJECT_TYPE_SHADER_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_EXT_validation_cache)
  addI("VALIDATION_CACHE_EXT", int64_t(VK_OBJECT_TYPE_VALIDATION_CACHE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_FUCHSIA_buffer_collection)
  addI("BUFFER_COLLECTION_FUCHSIA", int64_t(VK_OBJECT_TYPE_BUFFER_COLLECTION_FUCHSIA), das::LineInfo());
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_INTEL_performance_query)
  addI("PERFORMANCE_CONFIGURATION_INTEL", int64_t(VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL), das::LineInfo());
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_KHR", int64_t(VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_deferred_host_operations)
  addI("DEFERRED_OPERATION_KHR", int64_t(VK_OBJECT_TYPE_DEFERRED_OPERATION_KHR), das::LineInfo());
#endif /* defined(VK_KHR_deferred_host_operations) */
#if defined(VK_KHR_descriptor_update_template)
  addI("DESCRIPTOR_UPDATE_TEMPLATE_KHR", int64_t(VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_descriptor_update_template) */
#if defined(VK_KHR_display)
  addI("DISPLAY_KHR", int64_t(VK_OBJECT_TYPE_DISPLAY_KHR), das::LineInfo());
  addI("DISPLAY_MODE_KHR", int64_t(VK_OBJECT_TYPE_DISPLAY_MODE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_pipeline_binary)
  addI("PIPELINE_BINARY_KHR", int64_t(VK_OBJECT_TYPE_PIPELINE_BINARY_KHR), das::LineInfo());
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_KHR_sampler_ycbcr_conversion)
  addI("SAMPLER_YCBCR_CONVERSION_KHR", int64_t(VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
#if defined(VK_KHR_surface)
  addI("SURFACE_KHR", int64_t(VK_OBJECT_TYPE_SURFACE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_swapchain)
  addI("SWAPCHAIN_KHR", int64_t(VK_OBJECT_TYPE_SWAPCHAIN_KHR), das::LineInfo());
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_KHR_video_queue)
  addI("VIDEO_SESSION_KHR", int64_t(VK_OBJECT_TYPE_VIDEO_SESSION_KHR), das::LineInfo());
  addI("VIDEO_SESSION_PARAMETERS_KHR", int64_t(VK_OBJECT_TYPE_VIDEO_SESSION_PARAMETERS_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_NVX_binary_import)
  addI("CU_MODULE_NVX", int64_t(VK_OBJECT_TYPE_CU_MODULE_NVX), das::LineInfo());
  addI("CU_FUNCTION_NVX", int64_t(VK_OBJECT_TYPE_CU_FUNCTION_NVX), das::LineInfo());
#endif /* defined(VK_NVX_binary_import) */
#if defined(VK_NV_cuda_kernel_launch)
  addI("CUDA_MODULE_NV", int64_t(VK_OBJECT_TYPE_CUDA_MODULE_NV), das::LineInfo());
  addI("CUDA_FUNCTION_NV", int64_t(VK_OBJECT_TYPE_CUDA_FUNCTION_NV), das::LineInfo());
#endif /* defined(VK_NV_cuda_kernel_launch) */
#if defined(VK_NV_device_generated_commands)
  addI("INDIRECT_COMMANDS_LAYOUT_NV", int64_t(VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NV), das::LineInfo());
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_optical_flow)
  addI("OPTICAL_FLOW_SESSION_NV", int64_t(VK_OBJECT_TYPE_OPTICAL_FLOW_SESSION_NV), das::LineInfo());
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_NV_ray_tracing)
  addI("ACCELERATION_STRUCTURE_NV", int64_t(VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkPhysicalDeviceType:public das::Enumeration{public:
EnumerationVkPhysicalDeviceType():das::Enumeration("VkPhysicalDeviceType") {
  external=true; cppName="VkPhysicalDeviceType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPhysicalDeviceType>::type>::type;
  addI("OTHER", int64_t(VK_PHYSICAL_DEVICE_TYPE_OTHER), das::LineInfo());
  addI("INTEGRATED_GPU", int64_t(VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU), das::LineInfo());
  addI("DISCRETE_GPU", int64_t(VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU), das::LineInfo());
  addI("VIRTUAL_GPU", int64_t(VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU), das::LineInfo());
  addI("CPU", int64_t(VK_PHYSICAL_DEVICE_TYPE_CPU), das::LineInfo());
} };
class EnumerationVkPipelineBindPoint:public das::Enumeration{public:
EnumerationVkPipelineBindPoint():das::Enumeration("VkPipelineBindPoint") {
  external=true; cppName="VkPipelineBindPoint";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPipelineBindPoint>::type>::type;
  addI("GRAPHICS", int64_t(VK_PIPELINE_BIND_POINT_GRAPHICS), das::LineInfo());
  addI("COMPUTE", int64_t(VK_PIPELINE_BIND_POINT_COMPUTE), das::LineInfo());
#if defined(VK_AMDX_shader_enqueue)
  addI("EXECUTION_GRAPH_AMDX", int64_t(VK_PIPELINE_BIND_POINT_EXECUTION_GRAPH_AMDX), das::LineInfo());
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_HUAWEI_subpass_shading)
  addI("SUBPASS_SHADING_HUAWEI", int64_t(VK_PIPELINE_BIND_POINT_SUBPASS_SHADING_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_subpass_shading) */
#if defined(VK_KHR_ray_tracing_pipeline)
  addI("RAY_TRACING_KHR", int64_t(VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_NV_ray_tracing)
  addI("RAY_TRACING_NV", int64_t(VK_PIPELINE_BIND_POINT_RAY_TRACING_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkPipelineCacheHeaderVersion:public das::Enumeration{public:
EnumerationVkPipelineCacheHeaderVersion():das::Enumeration("VkPipelineCacheHeaderVersion") {
  external=true; cppName="VkPipelineCacheHeaderVersion";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPipelineCacheHeaderVersion>::type>::type;
  addI("_ONE", int64_t(VK_PIPELINE_CACHE_HEADER_VERSION_ONE), das::LineInfo());
} };
class EnumerationVkPipelineCreateFlagBits:public das::Enumeration{public:
EnumerationVkPipelineCreateFlagBits():das::Enumeration("VkPipelineCreateFlagBits") {
  external=true; cppName="VkPipelineCreateFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPipelineCreateFlagBits>::type>::type;
  addI("CREATE_DISABLE_OPTIMIZATION_BIT", int64_t(VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT), das::LineInfo());
  addI("CREATE_ALLOW_DERIVATIVES_BIT", int64_t(VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT), das::LineInfo());
  addI("CREATE_DERIVATIVE_BIT", int64_t(VK_PIPELINE_CREATE_DERIVATIVE_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT", int64_t(VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT), das::LineInfo());
  addI("CREATE_DISPATCH_BASE_BIT", int64_t(VK_PIPELINE_CREATE_DISPATCH_BASE_BIT), das::LineInfo());
  addI("CREATE_DISPATCH_BASE", int64_t(VK_PIPELINE_CREATE_DISPATCH_BASE), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
  addI("CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT", int64_t(VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT), das::LineInfo());
  addI("CREATE_EARLY_RETURN_ON_FAILURE_BIT", int64_t(VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
  addI("CREATE_NO_PROTECTED_ACCESS_BIT", int64_t(VK_PIPELINE_CREATE_NO_PROTECTED_ACCESS_BIT), das::LineInfo());
  addI("CREATE_PROTECTED_ACCESS_ONLY_BIT", int64_t(VK_PIPELINE_CREATE_PROTECTED_ACCESS_ONLY_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_attachment_feedback_loop_layout)
  addI("CREATE_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT", int64_t(VK_PIPELINE_CREATE_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT), das::LineInfo());
  addI("CREATE_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT", int64_t(VK_PIPELINE_CREATE_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_attachment_feedback_loop_layout) */
#if defined(VK_EXT_descriptor_buffer)
  addI("CREATE_DESCRIPTOR_BUFFER_BIT_EXT", int64_t(VK_PIPELINE_CREATE_DESCRIPTOR_BUFFER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_EXT_fragment_density_map) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
  addI("CREATE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT", int64_t(VK_PIPELINE_CREATE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT), das::LineInfo());
  addI("RASTERIZATION_STATE_CREATE_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT", int64_t(VK_PIPELINE_RASTERIZATION_STATE_CREATE_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_EXT_graphics_pipeline_library)
  addI("CREATE_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT", int64_t(VK_PIPELINE_CREATE_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT), das::LineInfo());
  addI("CREATE_LINK_TIME_OPTIMIZATION_BIT_EXT", int64_t(VK_PIPELINE_CREATE_LINK_TIME_OPTIMIZATION_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_graphics_pipeline_library) */
#if defined(VK_EXT_opacity_micromap)
  addI("CREATE_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_pipeline_creation_cache_control)
  addI("CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_EXT", int64_t(VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_EXT), das::LineInfo());
  addI("CREATE_EARLY_RETURN_ON_FAILURE_BIT_EXT", int64_t(VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_creation_cache_control) */
#if defined(VK_EXT_pipeline_protected_access)
  addI("CREATE_NO_PROTECTED_ACCESS_BIT_EXT", int64_t(VK_PIPELINE_CREATE_NO_PROTECTED_ACCESS_BIT_EXT), das::LineInfo());
  addI("CREATE_PROTECTED_ACCESS_ONLY_BIT_EXT", int64_t(VK_PIPELINE_CREATE_PROTECTED_ACCESS_ONLY_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_protected_access) */
#if defined(VK_KHR_device_group)
  addI("CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR", int64_t(VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR), das::LineInfo());
  addI("CREATE_DISPATCH_BASE_KHR", int64_t(VK_PIPELINE_CREATE_DISPATCH_BASE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_device_group) */
#if defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
  addI("CREATE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR", int64_t(VK_PIPELINE_CREATE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR), das::LineInfo());
  addI("RASTERIZATION_STATE_CREATE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR", int64_t(VK_PIPELINE_RASTERIZATION_STATE_CREATE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_KHR_pipeline_executable_properties)
  addI("CREATE_CAPTURE_STATISTICS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR), das::LineInfo());
  addI("CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_KHR_pipeline_library)
  addI("CREATE_LIBRARY_BIT_KHR", int64_t(VK_PIPELINE_CREATE_LIBRARY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_pipeline_library) */
#if defined(VK_KHR_ray_tracing_pipeline)
  addI("CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR), das::LineInfo());
  addI("CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR), das::LineInfo());
  addI("CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR), das::LineInfo());
  addI("CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR), das::LineInfo());
  addI("CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR), das::LineInfo());
  addI("CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR), das::LineInfo());
  addI("CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_NV_device_generated_commands)
  addI("CREATE_INDIRECT_BINDABLE_BIT_NV", int64_t(VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_displacement_micromap)
  addI("CREATE_RAY_TRACING_DISPLACEMENT_MICROMAP_BIT_NV", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_DISPLACEMENT_MICROMAP_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_displacement_micromap) */
#if defined(VK_NV_ray_tracing)
  addI("CREATE_DEFER_COMPILE_BIT_NV", int64_t(VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_ray_tracing_motion_blur)
  addI("CREATE_RAY_TRACING_ALLOW_MOTION_BIT_NV", int64_t(VK_PIPELINE_CREATE_RAY_TRACING_ALLOW_MOTION_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
} };
class EnumerationVkPipelineStageFlagBits:public das::Enumeration{public:
EnumerationVkPipelineStageFlagBits():das::Enumeration("VkPipelineStageFlagBits") {
  external=true; cppName="VkPipelineStageFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPipelineStageFlagBits>::type>::type;
  addI("TOP_OF_PIPE_BIT", int64_t(VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT), das::LineInfo());
  addI("DRAW_INDIRECT_BIT", int64_t(VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT), das::LineInfo());
  addI("VERTEX_INPUT_BIT", int64_t(VK_PIPELINE_STAGE_VERTEX_INPUT_BIT), das::LineInfo());
  addI("VERTEX_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_VERTEX_SHADER_BIT), das::LineInfo());
  addI("TESSELLATION_CONTROL_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT), das::LineInfo());
  addI("TESSELLATION_EVALUATION_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT), das::LineInfo());
  addI("GEOMETRY_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT), das::LineInfo());
  addI("FRAGMENT_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT), das::LineInfo());
  addI("EARLY_FRAGMENT_TESTS_BIT", int64_t(VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT), das::LineInfo());
  addI("LATE_FRAGMENT_TESTS_BIT", int64_t(VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_OUTPUT_BIT", int64_t(VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT), das::LineInfo());
  addI("COMPUTE_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT), das::LineInfo());
  addI("TRANSFER_BIT", int64_t(VK_PIPELINE_STAGE_TRANSFER_BIT), das::LineInfo());
  addI("BOTTOM_OF_PIPE_BIT", int64_t(VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT), das::LineInfo());
  addI("HOST_BIT", int64_t(VK_PIPELINE_STAGE_HOST_BIT), das::LineInfo());
  addI("ALL_GRAPHICS_BIT", int64_t(VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT), das::LineInfo());
  addI("ALL_COMMANDS_BIT", int64_t(VK_PIPELINE_STAGE_ALL_COMMANDS_BIT), das::LineInfo());
#if defined(VK_VERSION_1_3)
  addI("NONE", int64_t(VK_PIPELINE_STAGE_NONE), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_conditional_rendering)
  addI("CONDITIONAL_RENDERING_BIT_EXT", int64_t(VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_EXT_device_generated_commands)
  addI("COMMAND_PREPROCESS_BIT_EXT", int64_t(VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_fragment_density_map)
  addI("FRAGMENT_DENSITY_PROCESS_BIT_EXT", int64_t(VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_EXT_mesh_shader)
  addI("TASK_SHADER_BIT_EXT", int64_t(VK_PIPELINE_STAGE_TASK_SHADER_BIT_EXT), das::LineInfo());
  addI("MESH_SHADER_BIT_EXT", int64_t(VK_PIPELINE_STAGE_MESH_SHADER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_EXT_transform_feedback)
  addI("TRANSFORM_FEEDBACK_BIT_EXT", int64_t(VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_BUILD_BIT_KHR", int64_t(VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR", int64_t(VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_ray_tracing_pipeline)
  addI("RAY_TRACING_SHADER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_synchronization2)
  addI("NONE_KHR", int64_t(VK_PIPELINE_STAGE_NONE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) */
#if defined(VK_NV_device_generated_commands)
  addI("COMMAND_PREPROCESS_BIT_NV", int64_t(VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_mesh_shader)
  addI("TASK_SHADER_BIT_NV", int64_t(VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV), das::LineInfo());
  addI("MESH_SHADER_BIT_NV", int64_t(VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_mesh_shader) */
#if defined(VK_NV_ray_tracing)
  addI("RAY_TRACING_SHADER_BIT_NV", int64_t(VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_BUILD_BIT_NV", int64_t(VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_shading_rate_image)
  addI("SHADING_RATE_IMAGE_BIT_NV", int64_t(VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_shading_rate_image) */
} };
class EnumerationVkPolygonMode:public das::Enumeration{public:
EnumerationVkPolygonMode():das::Enumeration("VkPolygonMode") {
  external=true; cppName="VkPolygonMode";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPolygonMode>::type>::type;
  addI("FILL", int64_t(VK_POLYGON_MODE_FILL), das::LineInfo());
  addI("LINE", int64_t(VK_POLYGON_MODE_LINE), das::LineInfo());
  addI("POINT", int64_t(VK_POLYGON_MODE_POINT), das::LineInfo());
#if defined(VK_NV_fill_rectangle)
  addI("FILL_RECTANGLE_NV", int64_t(VK_POLYGON_MODE_FILL_RECTANGLE_NV), das::LineInfo());
#endif /* defined(VK_NV_fill_rectangle) */
} };
class EnumerationVkPrimitiveTopology:public das::Enumeration{public:
EnumerationVkPrimitiveTopology():das::Enumeration("VkPrimitiveTopology") {
  external=true; cppName="VkPrimitiveTopology";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPrimitiveTopology>::type>::type;
  addI("POINT_LIST", int64_t(VK_PRIMITIVE_TOPOLOGY_POINT_LIST), das::LineInfo());
  addI("LINE_LIST", int64_t(VK_PRIMITIVE_TOPOLOGY_LINE_LIST), das::LineInfo());
  addI("LINE_STRIP", int64_t(VK_PRIMITIVE_TOPOLOGY_LINE_STRIP), das::LineInfo());
  addI("TRIANGLE_LIST", int64_t(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST), das::LineInfo());
  addI("TRIANGLE_STRIP", int64_t(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP), das::LineInfo());
  addI("TRIANGLE_FAN", int64_t(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN), das::LineInfo());
  addI("LINE_LIST_WITH_ADJACENCY", int64_t(VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY), das::LineInfo());
  addI("LINE_STRIP_WITH_ADJACENCY", int64_t(VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY), das::LineInfo());
  addI("TRIANGLE_LIST_WITH_ADJACENCY", int64_t(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY), das::LineInfo());
  addI("TRIANGLE_STRIP_WITH_ADJACENCY", int64_t(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY), das::LineInfo());
  addI("PATCH_LIST", int64_t(VK_PRIMITIVE_TOPOLOGY_PATCH_LIST), das::LineInfo());
} };
class EnumerationVkQueryControlFlagBits:public das::Enumeration{public:
EnumerationVkQueryControlFlagBits():das::Enumeration("VkQueryControlFlagBits") {
  external=true; cppName="VkQueryControlFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkQueryControlFlagBits>::type>::type;
  addI("_PRECISE_BIT", int64_t(VK_QUERY_CONTROL_PRECISE_BIT), das::LineInfo());
} };
class EnumerationVkQueryPipelineStatisticFlagBits:public das::Enumeration{public:
EnumerationVkQueryPipelineStatisticFlagBits():das::Enumeration("VkQueryPipelineStatisticFlagBits") {
  external=true; cppName="VkQueryPipelineStatisticFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkQueryPipelineStatisticFlagBits>::type>::type;
  addI("INPUT_ASSEMBLY_VERTICES_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT), das::LineInfo());
  addI("INPUT_ASSEMBLY_PRIMITIVES_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT), das::LineInfo());
  addI("VERTEX_SHADER_INVOCATIONS_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT), das::LineInfo());
  addI("GEOMETRY_SHADER_INVOCATIONS_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT), das::LineInfo());
  addI("GEOMETRY_SHADER_PRIMITIVES_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT), das::LineInfo());
  addI("CLIPPING_INVOCATIONS_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT), das::LineInfo());
  addI("CLIPPING_PRIMITIVES_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT), das::LineInfo());
  addI("FRAGMENT_SHADER_INVOCATIONS_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT), das::LineInfo());
  addI("TESSELLATION_CONTROL_SHADER_PATCHES_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT), das::LineInfo());
  addI("TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT), das::LineInfo());
  addI("COMPUTE_SHADER_INVOCATIONS_BIT", int64_t(VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT), das::LineInfo());
#if defined(VK_EXT_mesh_shader)
  addI("TASK_SHADER_INVOCATIONS_BIT_EXT", int64_t(VK_QUERY_PIPELINE_STATISTIC_TASK_SHADER_INVOCATIONS_BIT_EXT), das::LineInfo());
  addI("MESH_SHADER_INVOCATIONS_BIT_EXT", int64_t(VK_QUERY_PIPELINE_STATISTIC_MESH_SHADER_INVOCATIONS_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_HUAWEI_cluster_culling_shader)
  addI("CLUSTER_CULLING_SHADER_INVOCATIONS_BIT_HUAWEI", int64_t(VK_QUERY_PIPELINE_STATISTIC_CLUSTER_CULLING_SHADER_INVOCATIONS_BIT_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_cluster_culling_shader) */
} };
class EnumerationVkQueryResultFlagBits:public das::Enumeration{public:
EnumerationVkQueryResultFlagBits():das::Enumeration("VkQueryResultFlagBits") {
  external=true; cppName="VkQueryResultFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkQueryResultFlagBits>::type>::type;
  addI("_64_BIT", int64_t(VK_QUERY_RESULT_64_BIT), das::LineInfo());
  addI("WAIT_BIT", int64_t(VK_QUERY_RESULT_WAIT_BIT), das::LineInfo());
  addI("WITH_AVAILABILITY_BIT", int64_t(VK_QUERY_RESULT_WITH_AVAILABILITY_BIT), das::LineInfo());
  addI("PARTIAL_BIT", int64_t(VK_QUERY_RESULT_PARTIAL_BIT), das::LineInfo());
#if defined(VK_KHR_video_queue)
  addI("WITH_STATUS_BIT_KHR", int64_t(VK_QUERY_RESULT_WITH_STATUS_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_queue) */
} };
class EnumerationVkQueryType:public das::Enumeration{public:
EnumerationVkQueryType():das::Enumeration("VkQueryType") {
  external=true; cppName="VkQueryType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkQueryType>::type>::type;
  addI("OCCLUSION", int64_t(VK_QUERY_TYPE_OCCLUSION), das::LineInfo());
  addI("PIPELINE_STATISTICS", int64_t(VK_QUERY_TYPE_PIPELINE_STATISTICS), das::LineInfo());
  addI("TIMESTAMP", int64_t(VK_QUERY_TYPE_TIMESTAMP), das::LineInfo());
#if defined(VK_EXT_mesh_shader)
  addI("MESH_PRIMITIVES_GENERATED_EXT", int64_t(VK_QUERY_TYPE_MESH_PRIMITIVES_GENERATED_EXT), das::LineInfo());
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_EXT_opacity_micromap)
  addI("MICROMAP_SERIALIZATION_SIZE_EXT", int64_t(VK_QUERY_TYPE_MICROMAP_SERIALIZATION_SIZE_EXT), das::LineInfo());
  addI("MICROMAP_COMPACTED_SIZE_EXT", int64_t(VK_QUERY_TYPE_MICROMAP_COMPACTED_SIZE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_primitives_generated_query)
  addI("PRIMITIVES_GENERATED_EXT", int64_t(VK_QUERY_TYPE_PRIMITIVES_GENERATED_EXT), das::LineInfo());
#endif /* defined(VK_EXT_primitives_generated_query) */
#if defined(VK_EXT_transform_feedback)
  addI("TRANSFORM_FEEDBACK_STREAM_EXT", int64_t(VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT), das::LineInfo());
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_INTEL_performance_query)
  addI("PERFORMANCE_QUERY_INTEL", int64_t(VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL), das::LineInfo());
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR", int64_t(VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR", int64_t(VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_performance_query)
  addI("PERFORMANCE_QUERY_KHR", int64_t(VK_QUERY_TYPE_PERFORMANCE_QUERY_KHR), das::LineInfo());
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_KHR_ray_tracing_maintenance1)
  addI("ACCELERATION_STRUCTURE_SERIALIZATION_BOTTOM_LEVEL_POINTERS_KHR", int64_t(VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_BOTTOM_LEVEL_POINTERS_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_SIZE_KHR", int64_t(VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SIZE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_maintenance1) */
#if defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_FEEDBACK_KHR", int64_t(VK_QUERY_TYPE_VIDEO_ENCODE_FEEDBACK_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_queue)
  addI("RESULT_STATUS_ONLY_KHR", int64_t(VK_QUERY_TYPE_RESULT_STATUS_ONLY_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_NV_ray_tracing)
  addI("ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV", int64_t(VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkQueueFlagBits:public das::Enumeration{public:
EnumerationVkQueueFlagBits():das::Enumeration("VkQueueFlagBits") {
  external=true; cppName="VkQueueFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkQueueFlagBits>::type>::type;
  addI("GRAPHICS_BIT", int64_t(VK_QUEUE_GRAPHICS_BIT), das::LineInfo());
  addI("COMPUTE_BIT", int64_t(VK_QUEUE_COMPUTE_BIT), das::LineInfo());
  addI("TRANSFER_BIT", int64_t(VK_QUEUE_TRANSFER_BIT), das::LineInfo());
  addI("SPARSE_BINDING_BIT", int64_t(VK_QUEUE_SPARSE_BINDING_BIT), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("PROTECTED_BIT", int64_t(VK_QUEUE_PROTECTED_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_video_decode_queue)
  addI("VIDEO_DECODE_BIT_KHR", int64_t(VK_QUEUE_VIDEO_DECODE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_BIT_KHR", int64_t(VK_QUEUE_VIDEO_ENCODE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_NV_optical_flow)
  addI("OPTICAL_FLOW_BIT_NV", int64_t(VK_QUEUE_OPTICAL_FLOW_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_optical_flow) */
} };
class EnumerationVkResult:public das::Enumeration{public:
EnumerationVkResult():das::Enumeration("VkResult") {
  external=true; cppName="VkResult";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkResult>::type>::type;
  addI("SUCCESS", int64_t(VK_SUCCESS), das::LineInfo());
  addI("NOT_READY", int64_t(VK_NOT_READY), das::LineInfo());
  addI("TIMEOUT", int64_t(VK_TIMEOUT), das::LineInfo());
  addI("EVENT_SET", int64_t(VK_EVENT_SET), das::LineInfo());
  addI("EVENT_RESET", int64_t(VK_EVENT_RESET), das::LineInfo());
  addI("INCOMPLETE", int64_t(VK_INCOMPLETE), das::LineInfo());
  addI("ERROR_OUT_OF_HOST_MEMORY", int64_t(VK_ERROR_OUT_OF_HOST_MEMORY), das::LineInfo());
  addI("ERROR_OUT_OF_DEVICE_MEMORY", int64_t(VK_ERROR_OUT_OF_DEVICE_MEMORY), das::LineInfo());
  addI("ERROR_INITIALIZATION_FAILED", int64_t(VK_ERROR_INITIALIZATION_FAILED), das::LineInfo());
  addI("ERROR_DEVICE_LOST", int64_t(VK_ERROR_DEVICE_LOST), das::LineInfo());
  addI("ERROR_MEMORY_MAP_FAILED", int64_t(VK_ERROR_MEMORY_MAP_FAILED), das::LineInfo());
  addI("ERROR_LAYER_NOT_PRESENT", int64_t(VK_ERROR_LAYER_NOT_PRESENT), das::LineInfo());
  addI("ERROR_EXTENSION_NOT_PRESENT", int64_t(VK_ERROR_EXTENSION_NOT_PRESENT), das::LineInfo());
  addI("ERROR_FEATURE_NOT_PRESENT", int64_t(VK_ERROR_FEATURE_NOT_PRESENT), das::LineInfo());
  addI("ERROR_INCOMPATIBLE_DRIVER", int64_t(VK_ERROR_INCOMPATIBLE_DRIVER), das::LineInfo());
  addI("ERROR_TOO_MANY_OBJECTS", int64_t(VK_ERROR_TOO_MANY_OBJECTS), das::LineInfo());
  addI("ERROR_FORMAT_NOT_SUPPORTED", int64_t(VK_ERROR_FORMAT_NOT_SUPPORTED), das::LineInfo());
  addI("ERROR_FRAGMENTED_POOL", int64_t(VK_ERROR_FRAGMENTED_POOL), das::LineInfo());
  addI("ERROR_UNKNOWN", int64_t(VK_ERROR_UNKNOWN), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("ERROR_OUT_OF_POOL_MEMORY", int64_t(VK_ERROR_OUT_OF_POOL_MEMORY), das::LineInfo());
  addI("ERROR_INVALID_EXTERNAL_HANDLE", int64_t(VK_ERROR_INVALID_EXTERNAL_HANDLE), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
  addI("ERROR_FRAGMENTATION", int64_t(VK_ERROR_FRAGMENTATION), das::LineInfo());
  addI("ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS", int64_t(VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS), das::LineInfo());
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_3)
  addI("PIPELINE_COMPILE_REQUIRED", int64_t(VK_PIPELINE_COMPILE_REQUIRED), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
  addI("ERROR_NOT_PERMITTED", int64_t(VK_ERROR_NOT_PERMITTED), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_buffer_device_address)
  addI("ERROR_INVALID_DEVICE_ADDRESS_EXT", int64_t(VK_ERROR_INVALID_DEVICE_ADDRESS_EXT), das::LineInfo());
#endif /* defined(VK_EXT_buffer_device_address) */
#if defined(VK_EXT_descriptor_indexing)
  addI("ERROR_FRAGMENTATION_EXT", int64_t(VK_ERROR_FRAGMENTATION_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_indexing) */
#if defined(VK_EXT_full_screen_exclusive)
  addI("ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT", int64_t(VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT), das::LineInfo());
#endif /* defined(VK_EXT_full_screen_exclusive) */
#if defined(VK_EXT_global_priority)
  addI("ERROR_NOT_PERMITTED_EXT", int64_t(VK_ERROR_NOT_PERMITTED_EXT), das::LineInfo());
#endif /* defined(VK_EXT_global_priority) */
#if defined(VK_EXT_image_compression_control)
  addI("ERROR_COMPRESSION_EXHAUSTED_EXT", int64_t(VK_ERROR_COMPRESSION_EXHAUSTED_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_compression_control) */
#if defined(VK_EXT_image_drm_format_modifier)
  addI("ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT", int64_t(VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_EXT_pipeline_creation_cache_control)
  addI("PIPELINE_COMPILE_REQUIRED_EXT", int64_t(VK_PIPELINE_COMPILE_REQUIRED_EXT), das::LineInfo());
  addI("ERROR_PIPELINE_COMPILE_REQUIRED_EXT", int64_t(VK_ERROR_PIPELINE_COMPILE_REQUIRED_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_creation_cache_control) */
#if defined(VK_EXT_shader_object)
  addI("INCOMPATIBLE_SHADER_BINARY_EXT", int64_t(VK_INCOMPATIBLE_SHADER_BINARY_EXT), das::LineInfo());
  addI("ERROR_INCOMPATIBLE_SHADER_BINARY_EXT", int64_t(VK_ERROR_INCOMPATIBLE_SHADER_BINARY_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_KHR_buffer_device_address)
  addI("ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR", int64_t(VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR), das::LineInfo());
#endif /* defined(VK_KHR_buffer_device_address) */
#if defined(VK_KHR_deferred_host_operations)
  addI("THREAD_IDLE_KHR", int64_t(VK_THREAD_IDLE_KHR), das::LineInfo());
  addI("THREAD_DONE_KHR", int64_t(VK_THREAD_DONE_KHR), das::LineInfo());
  addI("OPERATION_DEFERRED_KHR", int64_t(VK_OPERATION_DEFERRED_KHR), das::LineInfo());
  addI("OPERATION_NOT_DEFERRED_KHR", int64_t(VK_OPERATION_NOT_DEFERRED_KHR), das::LineInfo());
#endif /* defined(VK_KHR_deferred_host_operations) */
#if defined(VK_KHR_display_swapchain)
  addI("ERROR_INCOMPATIBLE_DISPLAY_KHR", int64_t(VK_ERROR_INCOMPATIBLE_DISPLAY_KHR), das::LineInfo());
#endif /* defined(VK_KHR_display_swapchain) */
#if defined(VK_KHR_external_memory)
  addI("ERROR_INVALID_EXTERNAL_HANDLE_KHR", int64_t(VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_memory) */
#if defined(VK_KHR_global_priority)
  addI("ERROR_NOT_PERMITTED_KHR", int64_t(VK_ERROR_NOT_PERMITTED_KHR), das::LineInfo());
#endif /* defined(VK_KHR_global_priority) */
#if defined(VK_KHR_maintenance1)
  addI("ERROR_OUT_OF_POOL_MEMORY_KHR", int64_t(VK_ERROR_OUT_OF_POOL_MEMORY_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance1) */
#if defined(VK_KHR_pipeline_binary)
  addI("PIPELINE_BINARY_MISSING_KHR", int64_t(VK_PIPELINE_BINARY_MISSING_KHR), das::LineInfo());
  addI("ERROR_NOT_ENOUGH_SPACE_KHR", int64_t(VK_ERROR_NOT_ENOUGH_SPACE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_KHR_surface)
  addI("ERROR_SURFACE_LOST_KHR", int64_t(VK_ERROR_SURFACE_LOST_KHR), das::LineInfo());
  addI("ERROR_NATIVE_WINDOW_IN_USE_KHR", int64_t(VK_ERROR_NATIVE_WINDOW_IN_USE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_swapchain)
  addI("SUBOPTIMAL_KHR", int64_t(VK_SUBOPTIMAL_KHR), das::LineInfo());
  addI("ERROR_OUT_OF_DATE_KHR", int64_t(VK_ERROR_OUT_OF_DATE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_KHR_video_encode_queue)
  addI("ERROR_INVALID_VIDEO_STD_PARAMETERS_KHR", int64_t(VK_ERROR_INVALID_VIDEO_STD_PARAMETERS_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_queue)
  addI("ERROR_IMAGE_USAGE_NOT_SUPPORTED_KHR", int64_t(VK_ERROR_IMAGE_USAGE_NOT_SUPPORTED_KHR), das::LineInfo());
  addI("ERROR_VIDEO_PICTURE_LAYOUT_NOT_SUPPORTED_KHR", int64_t(VK_ERROR_VIDEO_PICTURE_LAYOUT_NOT_SUPPORTED_KHR), das::LineInfo());
  addI("ERROR_VIDEO_PROFILE_OPERATION_NOT_SUPPORTED_KHR", int64_t(VK_ERROR_VIDEO_PROFILE_OPERATION_NOT_SUPPORTED_KHR), das::LineInfo());
  addI("ERROR_VIDEO_PROFILE_FORMAT_NOT_SUPPORTED_KHR", int64_t(VK_ERROR_VIDEO_PROFILE_FORMAT_NOT_SUPPORTED_KHR), das::LineInfo());
  addI("ERROR_VIDEO_PROFILE_CODEC_NOT_SUPPORTED_KHR", int64_t(VK_ERROR_VIDEO_PROFILE_CODEC_NOT_SUPPORTED_KHR), das::LineInfo());
  addI("ERROR_VIDEO_STD_VERSION_NOT_SUPPORTED_KHR", int64_t(VK_ERROR_VIDEO_STD_VERSION_NOT_SUPPORTED_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_NV_glsl_shader)
  addI("ERROR_INVALID_SHADER_NV", int64_t(VK_ERROR_INVALID_SHADER_NV), das::LineInfo());
#endif /* defined(VK_NV_glsl_shader) */
#if (defined(VK_EXT_debug_report)) || (defined(VK_EXT_debug_report))
  addI("ERROR_VALIDATION_FAILED_EXT", int64_t(VK_ERROR_VALIDATION_FAILED_EXT), das::LineInfo());
#endif /* (defined(VK_EXT_debug_report)) || (defined(VK_EXT_debug_report)) */
} };
class EnumerationVkSampleCountFlagBits:public das::Enumeration{public:
EnumerationVkSampleCountFlagBits():das::Enumeration("VkSampleCountFlagBits") {
  external=true; cppName="VkSampleCountFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSampleCountFlagBits>::type>::type;
  addI("_1_BIT", int64_t(VK_SAMPLE_COUNT_1_BIT), das::LineInfo());
  addI("_2_BIT", int64_t(VK_SAMPLE_COUNT_2_BIT), das::LineInfo());
  addI("_4_BIT", int64_t(VK_SAMPLE_COUNT_4_BIT), das::LineInfo());
  addI("_8_BIT", int64_t(VK_SAMPLE_COUNT_8_BIT), das::LineInfo());
  addI("_16_BIT", int64_t(VK_SAMPLE_COUNT_16_BIT), das::LineInfo());
  addI("_32_BIT", int64_t(VK_SAMPLE_COUNT_32_BIT), das::LineInfo());
  addI("_64_BIT", int64_t(VK_SAMPLE_COUNT_64_BIT), das::LineInfo());
} };
class EnumerationVkSamplerAddressMode:public das::Enumeration{public:
EnumerationVkSamplerAddressMode():das::Enumeration("VkSamplerAddressMode") {
  external=true; cppName="VkSamplerAddressMode";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSamplerAddressMode>::type>::type;
  addI("REPEAT", int64_t(VK_SAMPLER_ADDRESS_MODE_REPEAT), das::LineInfo());
  addI("MIRRORED_REPEAT", int64_t(VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT), das::LineInfo());
  addI("CLAMP_TO_EDGE", int64_t(VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE), das::LineInfo());
  addI("CLAMP_TO_BORDER", int64_t(VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER), das::LineInfo());
#if defined(VK_KHR_sampler_mirror_clamp_to_edge)
  addI("MIRROR_CLAMP_TO_EDGE_KHR", int64_t(VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_mirror_clamp_to_edge) */
#if (defined(VK_VERSION_1_2)) || (defined(VK_KHR_sampler_mirror_clamp_to_edge))
  addI("MIRROR_CLAMP_TO_EDGE", int64_t(VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE), das::LineInfo());
#endif /* (defined(VK_VERSION_1_2)) || (defined(VK_KHR_sampler_mirror_clamp_to_edge)) */
} };
class EnumerationVkSamplerMipmapMode:public das::Enumeration{public:
EnumerationVkSamplerMipmapMode():das::Enumeration("VkSamplerMipmapMode") {
  external=true; cppName="VkSamplerMipmapMode";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSamplerMipmapMode>::type>::type;
  addI("NEAREST", int64_t(VK_SAMPLER_MIPMAP_MODE_NEAREST), das::LineInfo());
  addI("LINEAR", int64_t(VK_SAMPLER_MIPMAP_MODE_LINEAR), das::LineInfo());
} };
class EnumerationVkShaderStageFlagBits:public das::Enumeration{public:
EnumerationVkShaderStageFlagBits():das::Enumeration("VkShaderStageFlagBits") {
  external=true; cppName="VkShaderStageFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkShaderStageFlagBits>::type>::type;
  addI("VERTEX_BIT", int64_t(VK_SHADER_STAGE_VERTEX_BIT), das::LineInfo());
  addI("TESSELLATION_CONTROL_BIT", int64_t(VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT), das::LineInfo());
  addI("TESSELLATION_EVALUATION_BIT", int64_t(VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT), das::LineInfo());
  addI("GEOMETRY_BIT", int64_t(VK_SHADER_STAGE_GEOMETRY_BIT), das::LineInfo());
  addI("FRAGMENT_BIT", int64_t(VK_SHADER_STAGE_FRAGMENT_BIT), das::LineInfo());
  addI("COMPUTE_BIT", int64_t(VK_SHADER_STAGE_COMPUTE_BIT), das::LineInfo());
  addI("ALL_GRAPHICS", int64_t(VK_SHADER_STAGE_ALL_GRAPHICS), das::LineInfo());
  addI("ALL", int64_t(VK_SHADER_STAGE_ALL), das::LineInfo());
#if defined(VK_EXT_mesh_shader)
  addI("TASK_BIT_EXT", int64_t(VK_SHADER_STAGE_TASK_BIT_EXT), das::LineInfo());
  addI("MESH_BIT_EXT", int64_t(VK_SHADER_STAGE_MESH_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_HUAWEI_cluster_culling_shader)
  addI("CLUSTER_CULLING_BIT_HUAWEI", int64_t(VK_SHADER_STAGE_CLUSTER_CULLING_BIT_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_cluster_culling_shader) */
#if defined(VK_HUAWEI_subpass_shading)
  addI("SUBPASS_SHADING_BIT_HUAWEI", int64_t(VK_SHADER_STAGE_SUBPASS_SHADING_BIT_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_subpass_shading) */
#if defined(VK_KHR_ray_tracing_pipeline)
  addI("RAYGEN_BIT_KHR", int64_t(VK_SHADER_STAGE_RAYGEN_BIT_KHR), das::LineInfo());
  addI("ANY_HIT_BIT_KHR", int64_t(VK_SHADER_STAGE_ANY_HIT_BIT_KHR), das::LineInfo());
  addI("CLOSEST_HIT_BIT_KHR", int64_t(VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR), das::LineInfo());
  addI("MISS_BIT_KHR", int64_t(VK_SHADER_STAGE_MISS_BIT_KHR), das::LineInfo());
  addI("INTERSECTION_BIT_KHR", int64_t(VK_SHADER_STAGE_INTERSECTION_BIT_KHR), das::LineInfo());
  addI("CALLABLE_BIT_KHR", int64_t(VK_SHADER_STAGE_CALLABLE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_NV_mesh_shader)
  addI("TASK_BIT_NV", int64_t(VK_SHADER_STAGE_TASK_BIT_NV), das::LineInfo());
  addI("MESH_BIT_NV", int64_t(VK_SHADER_STAGE_MESH_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_mesh_shader) */
#if defined(VK_NV_ray_tracing)
  addI("RAYGEN_BIT_NV", int64_t(VK_SHADER_STAGE_RAYGEN_BIT_NV), das::LineInfo());
  addI("ANY_HIT_BIT_NV", int64_t(VK_SHADER_STAGE_ANY_HIT_BIT_NV), das::LineInfo());
  addI("CLOSEST_HIT_BIT_NV", int64_t(VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV), das::LineInfo());
  addI("MISS_BIT_NV", int64_t(VK_SHADER_STAGE_MISS_BIT_NV), das::LineInfo());
  addI("INTERSECTION_BIT_NV", int64_t(VK_SHADER_STAGE_INTERSECTION_BIT_NV), das::LineInfo());
  addI("CALLABLE_BIT_NV", int64_t(VK_SHADER_STAGE_CALLABLE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkSharingMode:public das::Enumeration{public:
EnumerationVkSharingMode():das::Enumeration("VkSharingMode") {
  external=true; cppName="VkSharingMode";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSharingMode>::type>::type;
  addI("EXCLUSIVE", int64_t(VK_SHARING_MODE_EXCLUSIVE), das::LineInfo());
  addI("CONCURRENT", int64_t(VK_SHARING_MODE_CONCURRENT), das::LineInfo());
} };
class EnumerationVkSparseImageFormatFlagBits:public das::Enumeration{public:
EnumerationVkSparseImageFormatFlagBits():das::Enumeration("VkSparseImageFormatFlagBits") {
  external=true; cppName="VkSparseImageFormatFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSparseImageFormatFlagBits>::type>::type;
  addI("SINGLE_MIPTAIL_BIT", int64_t(VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT), das::LineInfo());
  addI("ALIGNED_MIP_SIZE_BIT", int64_t(VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT), das::LineInfo());
  addI("NONSTANDARD_BLOCK_SIZE_BIT", int64_t(VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT), das::LineInfo());
} };
class EnumerationVkSparseMemoryBindFlagBits:public das::Enumeration{public:
EnumerationVkSparseMemoryBindFlagBits():das::Enumeration("VkSparseMemoryBindFlagBits") {
  external=true; cppName="VkSparseMemoryBindFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSparseMemoryBindFlagBits>::type>::type;
  addI("_METADATA_BIT", int64_t(VK_SPARSE_MEMORY_BIND_METADATA_BIT), das::LineInfo());
} };
class EnumerationVkStencilFaceFlagBits:public das::Enumeration{public:
EnumerationVkStencilFaceFlagBits():das::Enumeration("VkStencilFaceFlagBits") {
  external=true; cppName="VkStencilFaceFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkStencilFaceFlagBits>::type>::type;
  addI("FRONT_BIT", int64_t(VK_STENCIL_FACE_FRONT_BIT), das::LineInfo());
  addI("BACK_BIT", int64_t(VK_STENCIL_FACE_BACK_BIT), das::LineInfo());
  addI("FRONT_AND_BACK", int64_t(VK_STENCIL_FACE_FRONT_AND_BACK), das::LineInfo());
} };
class EnumerationVkStencilOp:public das::Enumeration{public:
EnumerationVkStencilOp():das::Enumeration("VkStencilOp") {
  external=true; cppName="VkStencilOp";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkStencilOp>::type>::type;
  addI("KEEP", int64_t(VK_STENCIL_OP_KEEP), das::LineInfo());
  addI("ZERO", int64_t(VK_STENCIL_OP_ZERO), das::LineInfo());
  addI("REPLACE", int64_t(VK_STENCIL_OP_REPLACE), das::LineInfo());
  addI("INCREMENT_AND_CLAMP", int64_t(VK_STENCIL_OP_INCREMENT_AND_CLAMP), das::LineInfo());
  addI("DECREMENT_AND_CLAMP", int64_t(VK_STENCIL_OP_DECREMENT_AND_CLAMP), das::LineInfo());
  addI("INVERT", int64_t(VK_STENCIL_OP_INVERT), das::LineInfo());
  addI("INCREMENT_AND_WRAP", int64_t(VK_STENCIL_OP_INCREMENT_AND_WRAP), das::LineInfo());
  addI("DECREMENT_AND_WRAP", int64_t(VK_STENCIL_OP_DECREMENT_AND_WRAP), das::LineInfo());
} };
class EnumerationVkStructureType:public das::Enumeration{public:
EnumerationVkStructureType():das::Enumeration("VkStructureType") {
  external=true; cppName="VkStructureType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkStructureType>::type>::type;
  addI("APPLICATION_INFO", int64_t(VK_STRUCTURE_TYPE_APPLICATION_INFO), das::LineInfo());
  addI("INSTANCE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO), das::LineInfo());
  addI("DEVICE_QUEUE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO), das::LineInfo());
  addI("DEVICE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO), das::LineInfo());
  addI("SUBMIT_INFO", int64_t(VK_STRUCTURE_TYPE_SUBMIT_INFO), das::LineInfo());
  addI("MEMORY_ALLOCATE_INFO", int64_t(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO), das::LineInfo());
  addI("MAPPED_MEMORY_RANGE", int64_t(VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE), das::LineInfo());
  addI("BIND_SPARSE_INFO", int64_t(VK_STRUCTURE_TYPE_BIND_SPARSE_INFO), das::LineInfo());
  addI("FENCE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_FENCE_CREATE_INFO), das::LineInfo());
  addI("SEMAPHORE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO), das::LineInfo());
  addI("EVENT_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_EVENT_CREATE_INFO), das::LineInfo());
  addI("QUERY_POOL_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO), das::LineInfo());
  addI("BUFFER_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO), das::LineInfo());
  addI("BUFFER_VIEW_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO), das::LineInfo());
  addI("IMAGE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO), das::LineInfo());
  addI("IMAGE_VIEW_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO), das::LineInfo());
  addI("SHADER_MODULE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_CACHE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_SHADER_STAGE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_TESSELLATION_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_VIEWPORT_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_RASTERIZATION_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_MULTISAMPLE_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_COLOR_BLEND_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_DYNAMIC_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO), das::LineInfo());
  addI("GRAPHICS_PIPELINE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO), das::LineInfo());
  addI("COMPUTE_PIPELINE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_LAYOUT_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO), das::LineInfo());
  addI("SAMPLER_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO), das::LineInfo());
  addI("DESCRIPTOR_SET_LAYOUT_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO), das::LineInfo());
  addI("DESCRIPTOR_POOL_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO), das::LineInfo());
  addI("DESCRIPTOR_SET_ALLOCATE_INFO", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO), das::LineInfo());
  addI("WRITE_DESCRIPTOR_SET", int64_t(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET), das::LineInfo());
  addI("COPY_DESCRIPTOR_SET", int64_t(VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET), das::LineInfo());
  addI("FRAMEBUFFER_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO), das::LineInfo());
  addI("RENDER_PASS_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO), das::LineInfo());
  addI("COMMAND_POOL_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO), das::LineInfo());
  addI("COMMAND_BUFFER_ALLOCATE_INFO", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO), das::LineInfo());
  addI("COMMAND_BUFFER_INHERITANCE_INFO", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO), das::LineInfo());
  addI("COMMAND_BUFFER_BEGIN_INFO", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO), das::LineInfo());
  addI("RENDER_PASS_BEGIN_INFO", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO), das::LineInfo());
  addI("BUFFER_MEMORY_BARRIER", int64_t(VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER), das::LineInfo());
  addI("IMAGE_MEMORY_BARRIER", int64_t(VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER), das::LineInfo());
  addI("MEMORY_BARRIER", int64_t(VK_STRUCTURE_TYPE_MEMORY_BARRIER), das::LineInfo());
  addI("LOADER_INSTANCE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO), das::LineInfo());
  addI("LOADER_DEVICE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO), das::LineInfo());
#if defined(VK_VERSION_1_1)
  addI("PHYSICAL_DEVICE_SUBGROUP_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES), das::LineInfo());
  addI("BIND_BUFFER_MEMORY_INFO", int64_t(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO), das::LineInfo());
  addI("BIND_IMAGE_MEMORY_INFO", int64_t(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES), das::LineInfo());
  addI("MEMORY_DEDICATED_REQUIREMENTS", int64_t(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS), das::LineInfo());
  addI("MEMORY_DEDICATED_ALLOCATE_INFO", int64_t(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO), das::LineInfo());
  addI("MEMORY_ALLOCATE_FLAGS_INFO", int64_t(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO), das::LineInfo());
  addI("DEVICE_GROUP_RENDER_PASS_BEGIN_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO), das::LineInfo());
  addI("DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO), das::LineInfo());
  addI("DEVICE_GROUP_SUBMIT_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO), das::LineInfo());
  addI("DEVICE_GROUP_BIND_SPARSE_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO), das::LineInfo());
  addI("BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO", int64_t(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO), das::LineInfo());
  addI("BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO", int64_t(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_GROUP_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES), das::LineInfo());
  addI("DEVICE_GROUP_DEVICE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO), das::LineInfo());
  addI("BUFFER_MEMORY_REQUIREMENTS_INFO_2", int64_t(VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2), das::LineInfo());
  addI("IMAGE_MEMORY_REQUIREMENTS_INFO_2", int64_t(VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2), das::LineInfo());
  addI("IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2", int64_t(VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2), das::LineInfo());
  addI("MEMORY_REQUIREMENTS_2", int64_t(VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2), das::LineInfo());
  addI("SPARSE_IMAGE_MEMORY_REQUIREMENTS_2", int64_t(VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2), das::LineInfo());
  addI("PHYSICAL_DEVICE_FEATURES_2", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2), das::LineInfo());
  addI("PHYSICAL_DEVICE_PROPERTIES_2", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2), das::LineInfo());
  addI("FORMAT_PROPERTIES_2", int64_t(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2), das::LineInfo());
  addI("IMAGE_FORMAT_PROPERTIES_2", int64_t(VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2), das::LineInfo());
  addI("PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2), das::LineInfo());
  addI("QUEUE_FAMILY_PROPERTIES_2", int64_t(VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2), das::LineInfo());
  addI("PHYSICAL_DEVICE_MEMORY_PROPERTIES_2", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2), das::LineInfo());
  addI("SPARSE_IMAGE_FORMAT_PROPERTIES_2", int64_t(VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2), das::LineInfo());
  addI("PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2), das::LineInfo());
  addI("PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES), das::LineInfo());
  addI("RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO), das::LineInfo());
  addI("IMAGE_VIEW_USAGE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO), das::LineInfo());
  addI("PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO), das::LineInfo());
  addI("RENDER_PASS_MULTIVIEW_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_MULTIVIEW_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES), das::LineInfo());
  addI("PROTECTED_SUBMIT_INFO", int64_t(VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES), das::LineInfo());
  addI("DEVICE_QUEUE_INFO_2", int64_t(VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2), das::LineInfo());
  addI("SAMPLER_YCBCR_CONVERSION_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO), das::LineInfo());
  addI("SAMPLER_YCBCR_CONVERSION_INFO", int64_t(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO), das::LineInfo());
  addI("BIND_IMAGE_PLANE_MEMORY_INFO", int64_t(VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO), das::LineInfo());
  addI("IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO", int64_t(VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES), das::LineInfo());
  addI("SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES), das::LineInfo());
  addI("DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO), das::LineInfo());
  addI("EXTERNAL_IMAGE_FORMAT_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO), das::LineInfo());
  addI("EXTERNAL_BUFFER_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_ID_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES), das::LineInfo());
  addI("EXTERNAL_MEMORY_BUFFER_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO), das::LineInfo());
  addI("EXTERNAL_MEMORY_IMAGE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO), das::LineInfo());
  addI("EXPORT_MEMORY_ALLOCATE_INFO", int64_t(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO), das::LineInfo());
  addI("EXTERNAL_FENCE_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES), das::LineInfo());
  addI("EXPORT_FENCE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO), das::LineInfo());
  addI("EXPORT_SEMAPHORE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO), das::LineInfo());
  addI("EXTERNAL_SEMAPHORE_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES), das::LineInfo());
  addI("DESCRIPTOR_SET_LAYOUT_SUPPORT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES), das::LineInfo());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
  addI("PHYSICAL_DEVICE_VULKAN_1_1_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_VULKAN_1_2_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES), das::LineInfo());
  addI("IMAGE_FORMAT_LIST_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO), das::LineInfo());
  addI("ATTACHMENT_DESCRIPTION_2", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2), das::LineInfo());
  addI("ATTACHMENT_REFERENCE_2", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2), das::LineInfo());
  addI("SUBPASS_DESCRIPTION_2", int64_t(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2), das::LineInfo());
  addI("SUBPASS_DEPENDENCY_2", int64_t(VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2), das::LineInfo());
  addI("RENDER_PASS_CREATE_INFO_2", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2), das::LineInfo());
  addI("SUBPASS_BEGIN_INFO", int64_t(VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO), das::LineInfo());
  addI("SUBPASS_END_INFO", int64_t(VK_STRUCTURE_TYPE_SUBPASS_END_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_DRIVER_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES), das::LineInfo());
  addI("DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES), das::LineInfo());
  addI("DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO), das::LineInfo());
  addI("DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT), das::LineInfo());
  addI("PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES), das::LineInfo());
  addI("SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE", int64_t(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE), das::LineInfo());
  addI("PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES), das::LineInfo());
  addI("IMAGE_STENCIL_USAGE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES), das::LineInfo());
  addI("SAMPLER_REDUCTION_MODE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES), das::LineInfo());
  addI("FRAMEBUFFER_ATTACHMENTS_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO), das::LineInfo());
  addI("FRAMEBUFFER_ATTACHMENT_IMAGE_INFO", int64_t(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO), das::LineInfo());
  addI("RENDER_PASS_ATTACHMENT_BEGIN_INFO", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES), das::LineInfo());
  addI("ATTACHMENT_REFERENCE_STENCIL_LAYOUT", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT), das::LineInfo());
  addI("ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT), das::LineInfo());
  addI("PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES), das::LineInfo());
  addI("SEMAPHORE_TYPE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO), das::LineInfo());
  addI("TIMELINE_SEMAPHORE_SUBMIT_INFO", int64_t(VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO), das::LineInfo());
  addI("SEMAPHORE_WAIT_INFO", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO), das::LineInfo());
  addI("SEMAPHORE_SIGNAL_INFO", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES), das::LineInfo());
  addI("BUFFER_DEVICE_ADDRESS_INFO", int64_t(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO), das::LineInfo());
  addI("BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO), das::LineInfo());
  addI("MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO", int64_t(VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO), das::LineInfo());
  addI("DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO), das::LineInfo());
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_3)
  addI("PHYSICAL_DEVICE_VULKAN_1_3_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES), das::LineInfo());
  addI("PIPELINE_CREATION_FEEDBACK_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_TOOL_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES), das::LineInfo());
  addI("DEVICE_PRIVATE_DATA_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO), das::LineInfo());
  addI("PRIVATE_DATA_SLOT_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES), das::LineInfo());
  addI("MEMORY_BARRIER_2", int64_t(VK_STRUCTURE_TYPE_MEMORY_BARRIER_2), das::LineInfo());
  addI("BUFFER_MEMORY_BARRIER_2", int64_t(VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2), das::LineInfo());
  addI("IMAGE_MEMORY_BARRIER_2", int64_t(VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2), das::LineInfo());
  addI("DEPENDENCY_INFO", int64_t(VK_STRUCTURE_TYPE_DEPENDENCY_INFO), das::LineInfo());
  addI("SUBMIT_INFO_2", int64_t(VK_STRUCTURE_TYPE_SUBMIT_INFO_2), das::LineInfo());
  addI("SEMAPHORE_SUBMIT_INFO", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO), das::LineInfo());
  addI("COMMAND_BUFFER_SUBMIT_INFO", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES), das::LineInfo());
  addI("COPY_BUFFER_INFO_2", int64_t(VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2), das::LineInfo());
  addI("COPY_IMAGE_INFO_2", int64_t(VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2), das::LineInfo());
  addI("COPY_BUFFER_TO_IMAGE_INFO_2", int64_t(VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2), das::LineInfo());
  addI("COPY_IMAGE_TO_BUFFER_INFO_2", int64_t(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2), das::LineInfo());
  addI("BLIT_IMAGE_INFO_2", int64_t(VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2), das::LineInfo());
  addI("RESOLVE_IMAGE_INFO_2", int64_t(VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2), das::LineInfo());
  addI("BUFFER_COPY_2", int64_t(VK_STRUCTURE_TYPE_BUFFER_COPY_2), das::LineInfo());
  addI("IMAGE_COPY_2", int64_t(VK_STRUCTURE_TYPE_IMAGE_COPY_2), das::LineInfo());
  addI("IMAGE_BLIT_2", int64_t(VK_STRUCTURE_TYPE_IMAGE_BLIT_2), das::LineInfo());
  addI("BUFFER_IMAGE_COPY_2", int64_t(VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2), das::LineInfo());
  addI("IMAGE_RESOLVE_2", int64_t(VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2), das::LineInfo());
  addI("PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES), das::LineInfo());
  addI("PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES), das::LineInfo());
  addI("WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK", int64_t(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK), das::LineInfo());
  addI("DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES), das::LineInfo());
  addI("RENDERING_INFO", int64_t(VK_STRUCTURE_TYPE_RENDERING_INFO), das::LineInfo());
  addI("RENDERING_ATTACHMENT_INFO", int64_t(VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO), das::LineInfo());
  addI("PIPELINE_RENDERING_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES), das::LineInfo());
  addI("COMMAND_BUFFER_INHERITANCE_RENDERING_INFO", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES), das::LineInfo());
  addI("FORMAT_PROPERTIES_3", int64_t(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES), das::LineInfo());
  addI("DEVICE_BUFFER_MEMORY_REQUIREMENTS", int64_t(VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS), das::LineInfo());
  addI("DEVICE_IMAGE_MEMORY_REQUIREMENTS", int64_t(VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
  addI("PHYSICAL_DEVICE_VULKAN_1_4_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES), das::LineInfo());
  addI("DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES), das::LineInfo());
  addI("QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES), das::LineInfo());
  addI("PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES), das::LineInfo());
  addI("PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES), das::LineInfo());
  addI("MEMORY_MAP_INFO", int64_t(VK_STRUCTURE_TYPE_MEMORY_MAP_INFO), das::LineInfo());
  addI("MEMORY_UNMAP_INFO", int64_t(VK_STRUCTURE_TYPE_MEMORY_UNMAP_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES), das::LineInfo());
  addI("RENDERING_AREA_INFO", int64_t(VK_STRUCTURE_TYPE_RENDERING_AREA_INFO), das::LineInfo());
  addI("DEVICE_IMAGE_SUBRESOURCE_INFO", int64_t(VK_STRUCTURE_TYPE_DEVICE_IMAGE_SUBRESOURCE_INFO), das::LineInfo());
  addI("SUBRESOURCE_LAYOUT_2", int64_t(VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2), das::LineInfo());
  addI("IMAGE_SUBRESOURCE_2", int64_t(VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2), das::LineInfo());
  addI("PIPELINE_CREATE_FLAGS_2_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO), das::LineInfo());
  addI("BUFFER_USAGE_FLAGS_2_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES), das::LineInfo());
  addI("RENDERING_ATTACHMENT_LOCATION_INFO", int64_t(VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO), das::LineInfo());
  addI("RENDERING_INPUT_ATTACHMENT_INDEX_INFO", int64_t(VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES), das::LineInfo());
  addI("BIND_MEMORY_STATUS", int64_t(VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS), das::LineInfo());
  addI("BIND_DESCRIPTOR_SETS_INFO", int64_t(VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_SETS_INFO), das::LineInfo());
  addI("PUSH_CONSTANTS_INFO", int64_t(VK_STRUCTURE_TYPE_PUSH_CONSTANTS_INFO), das::LineInfo());
  addI("PUSH_DESCRIPTOR_SET_INFO", int64_t(VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_INFO), das::LineInfo());
  addI("PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO", int64_t(VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES), das::LineInfo());
  addI("PIPELINE_ROBUSTNESS_CREATE_INFO", int64_t(VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO), das::LineInfo());
  addI("PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES), das::LineInfo());
  addI("PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES), das::LineInfo());
  addI("PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES), das::LineInfo());
  addI("MEMORY_TO_IMAGE_COPY", int64_t(VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY), das::LineInfo());
  addI("IMAGE_TO_MEMORY_COPY", int64_t(VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY), das::LineInfo());
  addI("COPY_IMAGE_TO_MEMORY_INFO", int64_t(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO), das::LineInfo());
  addI("COPY_MEMORY_TO_IMAGE_INFO", int64_t(VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO), das::LineInfo());
  addI("HOST_IMAGE_LAYOUT_TRANSITION_INFO", int64_t(VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO), das::LineInfo());
  addI("COPY_IMAGE_TO_IMAGE_INFO", int64_t(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO), das::LineInfo());
  addI("SUBRESOURCE_HOST_MEMCPY_SIZE", int64_t(VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE), das::LineInfo());
  addI("HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY", int64_t(VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_AMDX_shader_enqueue)
  addI("PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX), das::LineInfo());
  addI("EXECUTION_GRAPH_PIPELINE_SCRATCH_SIZE_AMDX", int64_t(VK_STRUCTURE_TYPE_EXECUTION_GRAPH_PIPELINE_SCRATCH_SIZE_AMDX), das::LineInfo());
  addI("EXECUTION_GRAPH_PIPELINE_CREATE_INFO_AMDX", int64_t(VK_STRUCTURE_TYPE_EXECUTION_GRAPH_PIPELINE_CREATE_INFO_AMDX), das::LineInfo());
  addI("PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX", int64_t(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX), das::LineInfo());
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_AMD_anti_lag)
  addI("PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD), das::LineInfo());
  addI("ANTI_LAG_DATA_AMD", int64_t(VK_STRUCTURE_TYPE_ANTI_LAG_DATA_AMD), das::LineInfo());
  addI("ANTI_LAG_PRESENTATION_INFO_AMD", int64_t(VK_STRUCTURE_TYPE_ANTI_LAG_PRESENTATION_INFO_AMD), das::LineInfo());
#endif /* defined(VK_AMD_anti_lag) */
#if defined(VK_AMD_device_coherent_memory)
  addI("PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD), das::LineInfo());
#endif /* defined(VK_AMD_device_coherent_memory) */
#if defined(VK_AMD_display_native_hdr)
  addI("DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD", int64_t(VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD), das::LineInfo());
  addI("SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD", int64_t(VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD), das::LineInfo());
#endif /* defined(VK_AMD_display_native_hdr) */
#if defined(VK_AMD_memory_overallocation_behavior)
  addI("DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD", int64_t(VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD), das::LineInfo());
#endif /* defined(VK_AMD_memory_overallocation_behavior) */
#if defined(VK_AMD_mixed_attachment_samples) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
  addI("ATTACHMENT_SAMPLE_COUNT_INFO_AMD", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD), das::LineInfo());
#endif /* defined(VK_AMD_mixed_attachment_samples) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_AMD_pipeline_compiler_control)
  addI("PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD", int64_t(VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD), das::LineInfo());
#endif /* defined(VK_AMD_pipeline_compiler_control) */
#if defined(VK_AMD_rasterization_order)
  addI("PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD), das::LineInfo());
#endif /* defined(VK_AMD_rasterization_order) */
#if defined(VK_AMD_shader_core_properties)
  addI("PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD), das::LineInfo());
#endif /* defined(VK_AMD_shader_core_properties) */
#if defined(VK_AMD_shader_core_properties2)
  addI("PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD), das::LineInfo());
#endif /* defined(VK_AMD_shader_core_properties2) */
#if defined(VK_AMD_shader_early_and_late_fragment_tests)
  addI("PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD), das::LineInfo());
#endif /* defined(VK_AMD_shader_early_and_late_fragment_tests) */
#if defined(VK_AMD_texture_gather_bias_lod)
  addI("TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD", int64_t(VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD), das::LineInfo());
#endif /* defined(VK_AMD_texture_gather_bias_lod) */
#if defined(VK_ANDROID_external_format_resolve)
  addI("PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID), das::LineInfo());
  addI("ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID", int64_t(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID), das::LineInfo());
#endif /* defined(VK_ANDROID_external_format_resolve) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
  addI("ANDROID_HARDWARE_BUFFER_USAGE_ANDROID", int64_t(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID), das::LineInfo());
  addI("ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID", int64_t(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID), das::LineInfo());
  addI("ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID", int64_t(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID), das::LineInfo());
  addI("IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID", int64_t(VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID), das::LineInfo());
  addI("MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID", int64_t(VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID), das::LineInfo());
  addI("EXTERNAL_FORMAT_ANDROID", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID), das::LineInfo());
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
  addI("ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID", int64_t(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID), das::LineInfo());
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_ARM_rasterization_order_attachment_access)
  addI("PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_ARM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_ARM), das::LineInfo());
#endif /* defined(VK_ARM_rasterization_order_attachment_access) */
#if defined(VK_ARM_render_pass_striped)
  addI("PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM), das::LineInfo());
  addI("PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM), das::LineInfo());
  addI("RENDER_PASS_STRIPE_BEGIN_INFO_ARM", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_BEGIN_INFO_ARM), das::LineInfo());
  addI("RENDER_PASS_STRIPE_INFO_ARM", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_INFO_ARM), das::LineInfo());
  addI("RENDER_PASS_STRIPE_SUBMIT_INFO_ARM", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM), das::LineInfo());
#endif /* defined(VK_ARM_render_pass_striped) */
#if defined(VK_ARM_scheduling_controls)
  addI("DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM", int64_t(VK_STRUCTURE_TYPE_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM), das::LineInfo());
  addI("PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM), das::LineInfo());
  addI("PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM), das::LineInfo());
#endif /* defined(VK_ARM_scheduling_controls) */
#if defined(VK_ARM_shader_core_builtins)
  addI("PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM), das::LineInfo());
#endif /* defined(VK_ARM_shader_core_builtins) */
#if defined(VK_ARM_shader_core_properties)
  addI("PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM), das::LineInfo());
#endif /* defined(VK_ARM_shader_core_properties) */
#if defined(VK_EXT_4444_formats)
  addI("PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_4444_formats) */
#if defined(VK_EXT_astc_decode_mode)
  addI("IMAGE_VIEW_ASTC_DECODE_MODE_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_astc_decode_mode) */
#if defined(VK_EXT_attachment_feedback_loop_dynamic_state)
  addI("PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_attachment_feedback_loop_dynamic_state) */
#if defined(VK_EXT_attachment_feedback_loop_layout)
  addI("PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_attachment_feedback_loop_layout) */
#if defined(VK_EXT_blend_operation_advanced)
  addI("PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT), das::LineInfo());
  addI("PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_EXT_border_color_swizzle)
  addI("PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT), das::LineInfo());
  addI("SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_border_color_swizzle) */
#if defined(VK_EXT_buffer_device_address)
  addI("PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT), das::LineInfo());
  addI("BUFFER_DEVICE_ADDRESS_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT), das::LineInfo());
  addI("BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_buffer_device_address) */
#if defined(VK_EXT_calibrated_timestamps)
  addI("CALIBRATED_TIMESTAMP_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_calibrated_timestamps) */
#if defined(VK_EXT_color_write_enable)
  addI("PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT), das::LineInfo());
  addI("PIPELINE_COLOR_WRITE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_color_write_enable) */
#if defined(VK_EXT_conditional_rendering)
  addI("COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT), das::LineInfo());
  addI("CONDITIONAL_RENDERING_BEGIN_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_EXT_conservative_rasterization)
  addI("PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT), das::LineInfo());
  addI("PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_conservative_rasterization) */
#if defined(VK_EXT_custom_border_color)
  addI("SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_custom_border_color) */
#if defined(VK_EXT_debug_marker)
  addI("DEBUG_MARKER_OBJECT_NAME_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT), das::LineInfo());
  addI("DEBUG_MARKER_OBJECT_TAG_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT), das::LineInfo());
  addI("DEBUG_MARKER_MARKER_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_debug_marker) */
#if defined(VK_EXT_debug_report)
  addI("DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT), das::LineInfo());
  addI("DEBUG_REPORT_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_debug_report) */
#if defined(VK_EXT_debug_utils)
  addI("DEBUG_UTILS_OBJECT_NAME_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT), das::LineInfo());
  addI("DEBUG_UTILS_OBJECT_TAG_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT), das::LineInfo());
  addI("DEBUG_UTILS_LABEL_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT), das::LineInfo());
  addI("DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT), das::LineInfo());
  addI("DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_debug_utils) */
#if defined(VK_EXT_depth_bias_control)
  addI("PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT), das::LineInfo());
  addI("DEPTH_BIAS_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEPTH_BIAS_INFO_EXT), das::LineInfo());
  addI("DEPTH_BIAS_REPRESENTATION_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_depth_bias_control) */
#if defined(VK_EXT_depth_clamp_control)
  addI("PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT), das::LineInfo());
  addI("PIPELINE_VIEWPORT_DEPTH_CLAMP_CONTROL_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLAMP_CONTROL_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_depth_clamp_zero_one)
  addI("PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_depth_clamp_zero_one) */
#if defined(VK_EXT_depth_clip_control)
  addI("PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT), das::LineInfo());
  addI("PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_depth_clip_control) */
#if defined(VK_EXT_depth_clip_enable)
  addI("PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT), das::LineInfo());
  addI("PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_depth_clip_enable) */
#if defined(VK_EXT_descriptor_buffer)
  addI("PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT), das::LineInfo());
  addI("DESCRIPTOR_ADDRESS_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT), das::LineInfo());
  addI("DESCRIPTOR_GET_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT), das::LineInfo());
  addI("BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), das::LineInfo());
  addI("IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), das::LineInfo());
  addI("IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), das::LineInfo());
  addI("SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), das::LineInfo());
  addI("OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT), das::LineInfo());
  addI("DESCRIPTOR_BUFFER_BINDING_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT), das::LineInfo());
  addI("DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_EXT_descriptor_buffer) && (defined(VK_KHR_acceleration_structure) || defined(VK_NV_ray_tracing))
  addI("ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_buffer) && (defined(VK_KHR_acceleration_structure) || defined(VK_NV_ray_tracing)) */
#if defined(VK_EXT_descriptor_indexing)
  addI("DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT), das::LineInfo());
  addI("DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT), das::LineInfo());
  addI("DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_indexing) */
#if defined(VK_EXT_device_address_binding_report)
  addI("PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT), das::LineInfo());
  addI("DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT", int64_t(VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_address_binding_report) */
#if defined(VK_EXT_device_fault)
  addI("PHYSICAL_DEVICE_FAULT_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT), das::LineInfo());
  addI("DEVICE_FAULT_COUNTS_EXT", int64_t(VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT), das::LineInfo());
  addI("DEVICE_FAULT_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_fault) */
#if defined(VK_EXT_device_generated_commands)
  addI("PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_EXT), das::LineInfo());
  addI("GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_EXT), das::LineInfo());
  addI("INDIRECT_EXECUTION_SET_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_CREATE_INFO_EXT), das::LineInfo());
  addI("GENERATED_COMMANDS_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_EXT), das::LineInfo());
  addI("INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_EXT), das::LineInfo());
  addI("INDIRECT_COMMANDS_LAYOUT_TOKEN_EXT", int64_t(VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_EXT), das::LineInfo());
  addI("WRITE_INDIRECT_EXECUTION_SET_PIPELINE_EXT", int64_t(VK_STRUCTURE_TYPE_WRITE_INDIRECT_EXECUTION_SET_PIPELINE_EXT), das::LineInfo());
  addI("WRITE_INDIRECT_EXECUTION_SET_SHADER_EXT", int64_t(VK_STRUCTURE_TYPE_WRITE_INDIRECT_EXECUTION_SET_SHADER_EXT), das::LineInfo());
  addI("INDIRECT_EXECUTION_SET_PIPELINE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_PIPELINE_INFO_EXT), das::LineInfo());
  addI("INDIRECT_EXECUTION_SET_SHADER_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_SHADER_INFO_EXT), das::LineInfo());
  addI("INDIRECT_EXECUTION_SET_SHADER_LAYOUT_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_INDIRECT_EXECUTION_SET_SHADER_LAYOUT_INFO_EXT), das::LineInfo());
  addI("GENERATED_COMMANDS_PIPELINE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_GENERATED_COMMANDS_PIPELINE_INFO_EXT), das::LineInfo());
  addI("GENERATED_COMMANDS_SHADER_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_GENERATED_COMMANDS_SHADER_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_device_memory_report)
  addI("PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT), das::LineInfo());
  addI("DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT), das::LineInfo());
  addI("DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT", int64_t(VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_memory_report) */
#if defined(VK_EXT_directfb_surface)
  addI("DIRECTFB_SURFACE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_directfb_surface) */
#if defined(VK_EXT_discard_rectangles)
  addI("PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT), das::LineInfo());
  addI("PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_discard_rectangles) */
#if defined(VK_EXT_display_control)
  addI("DISPLAY_POWER_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT), das::LineInfo());
  addI("DEVICE_EVENT_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT), das::LineInfo());
  addI("DISPLAY_EVENT_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT), das::LineInfo());
  addI("SWAPCHAIN_COUNTER_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_EXT_display_surface_counter)
  addI("SURFACE_CAPABILITIES_2_EXT", int64_t(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT), das::LineInfo());
  addI("SURFACE_CAPABILITIES2_EXT", int64_t(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT), das::LineInfo());
#endif /* defined(VK_EXT_display_surface_counter) */
#if defined(VK_EXT_dynamic_rendering_unused_attachments)
  addI("PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_dynamic_rendering_unused_attachments) */
#if defined(VK_EXT_extended_dynamic_state)
  addI("PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state) */
#if defined(VK_EXT_extended_dynamic_state2)
  addI("PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state2) */
#if defined(VK_EXT_extended_dynamic_state3)
  addI("PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_extended_dynamic_state3) */
#if defined(VK_EXT_external_memory_acquire_unmodified)
  addI("EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT), das::LineInfo());
#endif /* defined(VK_EXT_external_memory_acquire_unmodified) */
#if defined(VK_EXT_external_memory_host)
  addI("IMPORT_MEMORY_HOST_POINTER_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT), das::LineInfo());
  addI("MEMORY_HOST_POINTER_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_external_memory_host) */
#if defined(VK_EXT_filter_cubic)
  addI("PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT), das::LineInfo());
  addI("FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_filter_cubic) */
#if defined(VK_EXT_fragment_density_map)
  addI("PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT), das::LineInfo());
  addI("RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_EXT_fragment_density_map) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
  addI("RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_EXT_fragment_density_map2)
  addI("PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map2) */
#if defined(VK_EXT_fragment_shader_interlock)
  addI("PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_shader_interlock) */
#if defined(VK_EXT_frame_boundary)
  addI("PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT), das::LineInfo());
  addI("FRAME_BOUNDARY_EXT", int64_t(VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT), das::LineInfo());
#endif /* defined(VK_EXT_frame_boundary) */
#if defined(VK_EXT_full_screen_exclusive)
  addI("SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT), das::LineInfo());
  addI("SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT", int64_t(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_full_screen_exclusive) */
#if defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_win32_surface)
  addI("SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_win32_surface) */
#if defined(VK_EXT_global_priority)
  addI("DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_global_priority) */
#if defined(VK_EXT_global_priority_query)
  addI("PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_EXT), das::LineInfo());
  addI("QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_global_priority_query) */
#if defined(VK_EXT_graphics_pipeline_library)
  addI("PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT), das::LineInfo());
  addI("GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_graphics_pipeline_library) */
#if defined(VK_EXT_hdr_metadata)
  addI("HDR_METADATA_EXT", int64_t(VK_STRUCTURE_TYPE_HDR_METADATA_EXT), das::LineInfo());
#endif /* defined(VK_EXT_hdr_metadata) */
#if defined(VK_EXT_headless_surface)
  addI("HEADLESS_SURFACE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_headless_surface) */
#if defined(VK_EXT_host_image_copy)
  addI("PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT), das::LineInfo());
  addI("MEMORY_TO_IMAGE_COPY_EXT", int64_t(VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY_EXT), das::LineInfo());
  addI("IMAGE_TO_MEMORY_COPY_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY_EXT), das::LineInfo());
  addI("COPY_IMAGE_TO_MEMORY_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO_EXT), das::LineInfo());
  addI("COPY_MEMORY_TO_IMAGE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO_EXT), das::LineInfo());
  addI("HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT), das::LineInfo());
  addI("COPY_IMAGE_TO_IMAGE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO_EXT), das::LineInfo());
  addI("SUBRESOURCE_HOST_MEMCPY_SIZE_EXT", int64_t(VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT), das::LineInfo());
  addI("HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT", int64_t(VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT), das::LineInfo());
#endif /* defined(VK_EXT_host_image_copy) */
#if defined(VK_EXT_host_query_reset)
  addI("PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_host_query_reset) */
#if defined(VK_EXT_image_2d_view_of_3d)
  addI("PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_2d_view_of_3d) */
#if defined(VK_EXT_image_compression_control)
  addI("PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT), das::LineInfo());
  addI("IMAGE_COMPRESSION_CONTROL_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT), das::LineInfo());
  addI("SUBRESOURCE_LAYOUT_2_EXT", int64_t(VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_EXT), das::LineInfo());
  addI("IMAGE_SUBRESOURCE_2_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_EXT), das::LineInfo());
  addI("IMAGE_COMPRESSION_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_compression_control) */
#if defined(VK_EXT_image_compression_control_swapchain)
  addI("PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_compression_control_swapchain) */
#if defined(VK_EXT_image_drm_format_modifier)
  addI("DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT", int64_t(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT), das::LineInfo());
  addI("IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT), das::LineInfo());
  addI("IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT), das::LineInfo());
  addI("IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_EXT_image_drm_format_modifier) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
  addI("DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT", int64_t(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_drm_format_modifier) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_EXT_image_robustness)
  addI("PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_robustness) */
#if defined(VK_EXT_image_sliced_view_of_3d)
  addI("PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT), das::LineInfo());
  addI("IMAGE_VIEW_SLICED_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_sliced_view_of_3d) */
#if defined(VK_EXT_image_view_min_lod)
  addI("PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT), das::LineInfo());
  addI("IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_image_view_min_lod) */
#if defined(VK_EXT_index_type_uint8)
  addI("PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_index_type_uint8) */
#if defined(VK_EXT_inline_uniform_block)
  addI("PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT), das::LineInfo());
  addI("WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT", int64_t(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT), das::LineInfo());
  addI("DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_inline_uniform_block) */
#if defined(VK_EXT_layer_settings)
  addI("LAYER_SETTINGS_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_LAYER_SETTINGS_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_layer_settings) */
#if defined(VK_EXT_legacy_dithering)
  addI("PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_legacy_dithering) */
#if defined(VK_EXT_legacy_vertex_attributes)
  addI("PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_legacy_vertex_attributes) */
#if defined(VK_EXT_line_rasterization)
  addI("PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT), das::LineInfo());
  addI("PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_line_rasterization) */
#if defined(VK_EXT_map_memory_placed)
  addI("PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT), das::LineInfo());
  addI("MEMORY_MAP_PLACED_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_MEMORY_MAP_PLACED_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_map_memory_placed) */
#if defined(VK_EXT_memory_budget)
  addI("PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_memory_budget) */
#if defined(VK_EXT_memory_priority)
  addI("PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT), das::LineInfo());
  addI("MEMORY_PRIORITY_ALLOCATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_memory_priority) */
#if defined(VK_EXT_mesh_shader)
  addI("PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_EXT_metal_objects)
  addI("EXPORT_METAL_OBJECT_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT), das::LineInfo());
  addI("EXPORT_METAL_OBJECTS_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECTS_INFO_EXT), das::LineInfo());
  addI("EXPORT_METAL_DEVICE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT), das::LineInfo());
  addI("EXPORT_METAL_COMMAND_QUEUE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT), das::LineInfo());
  addI("EXPORT_METAL_BUFFER_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT), das::LineInfo());
  addI("IMPORT_METAL_BUFFER_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT), das::LineInfo());
  addI("EXPORT_METAL_TEXTURE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT), das::LineInfo());
  addI("IMPORT_METAL_TEXTURE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT), das::LineInfo());
  addI("EXPORT_METAL_IO_SURFACE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT), das::LineInfo());
  addI("IMPORT_METAL_IO_SURFACE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT), das::LineInfo());
  addI("EXPORT_METAL_SHARED_EVENT_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT), das::LineInfo());
  addI("IMPORT_METAL_SHARED_EVENT_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_metal_objects) */
#if defined(VK_EXT_metal_surface)
  addI("METAL_SURFACE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_metal_surface) */
#if defined(VK_EXT_multi_draw)
  addI("PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_multi_draw) */
#if defined(VK_EXT_multisampled_render_to_single_sampled)
  addI("PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT), das::LineInfo());
  addI("SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT", int64_t(VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT), das::LineInfo());
  addI("MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_multisampled_render_to_single_sampled) */
#if defined(VK_EXT_mutable_descriptor_type)
  addI("PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT), das::LineInfo());
  addI("MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_mutable_descriptor_type) */
#if defined(VK_EXT_nested_command_buffer)
  addI("PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_nested_command_buffer) */
#if defined(VK_EXT_non_seamless_cube_map)
  addI("PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_non_seamless_cube_map) */
#if defined(VK_EXT_opacity_micromap)
  addI("MICROMAP_BUILD_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_MICROMAP_BUILD_INFO_EXT), das::LineInfo());
  addI("MICROMAP_VERSION_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT), das::LineInfo());
  addI("COPY_MICROMAP_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT), das::LineInfo());
  addI("COPY_MICROMAP_TO_MEMORY_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT), das::LineInfo());
  addI("COPY_MEMORY_TO_MICROMAP_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT), das::LineInfo());
  addI("MICROMAP_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT), das::LineInfo());
  addI("MICROMAP_BUILD_SIZES_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT), das::LineInfo());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_pageable_device_local_memory)
  addI("PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pageable_device_local_memory) */
#if defined(VK_EXT_pci_bus_info)
  addI("PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pci_bus_info) */
#if defined(VK_EXT_physical_device_drm)
  addI("PHYSICAL_DEVICE_DRM_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_physical_device_drm) */
#if defined(VK_EXT_pipeline_creation_cache_control)
  addI("PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_creation_cache_control) */
#if defined(VK_EXT_pipeline_creation_feedback)
  addI("PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_creation_feedback) */
#if defined(VK_EXT_pipeline_library_group_handles)
  addI("PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_library_group_handles) */
#if defined(VK_EXT_pipeline_properties)
  addI("PIPELINE_PROPERTIES_IDENTIFIER_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_PROPERTIES_IDENTIFIER_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT), das::LineInfo());
  addI("PIPELINE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_properties) */
#if defined(VK_EXT_pipeline_protected_access)
  addI("PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_protected_access) */
#if defined(VK_EXT_pipeline_robustness)
  addI("PIPELINE_ROBUSTNESS_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_robustness) */
#if defined(VK_EXT_present_mode_fifo_latest_ready)
  addI("PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_present_mode_fifo_latest_ready) */
#if defined(VK_EXT_primitive_topology_list_restart)
  addI("PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_primitive_topology_list_restart) */
#if defined(VK_EXT_primitives_generated_query)
  addI("PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_primitives_generated_query) */
#if defined(VK_EXT_private_data)
  addI("PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT), das::LineInfo());
  addI("DEVICE_PRIVATE_DATA_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT), das::LineInfo());
  addI("PRIVATE_DATA_SLOT_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_private_data) */
#if defined(VK_EXT_provoking_vertex)
  addI("PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT), das::LineInfo());
  addI("PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_provoking_vertex) */
#if defined(VK_EXT_rasterization_order_attachment_access)
  addI("PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_rasterization_order_attachment_access) */
#if defined(VK_EXT_rgba10x6_formats)
  addI("PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_rgba10x6_formats) */
#if defined(VK_EXT_robustness2)
  addI("PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_robustness2) */
#if defined(VK_EXT_sample_locations)
  addI("SAMPLE_LOCATIONS_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT), das::LineInfo());
  addI("RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT), das::LineInfo());
  addI("PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT), das::LineInfo());
  addI("MULTISAMPLE_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_EXT_sampler_filter_minmax)
  addI("PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT), das::LineInfo());
  addI("SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_sampler_filter_minmax) */
#if defined(VK_EXT_scalar_block_layout)
  addI("PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_scalar_block_layout) */
#if defined(VK_EXT_separate_stencil_usage)
  addI("IMAGE_STENCIL_USAGE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_separate_stencil_usage) */
#if defined(VK_EXT_shader_atomic_float)
  addI("PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_atomic_float) */
#if defined(VK_EXT_shader_atomic_float2)
  addI("PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_atomic_float2) */
#if defined(VK_EXT_shader_demote_to_helper_invocation)
  addI("PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_demote_to_helper_invocation) */
#if defined(VK_EXT_shader_image_atomic_int64)
  addI("PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_image_atomic_int64) */
#if defined(VK_EXT_shader_module_identifier)
  addI("PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT), das::LineInfo());
  addI("PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT), das::LineInfo());
  addI("SHADER_MODULE_IDENTIFIER_EXT", int64_t(VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_module_identifier) */
#if defined(VK_EXT_shader_object)
  addI("PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT), das::LineInfo());
  addI("SHADER_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SHADER_CREATE_INFO_EXT), das::LineInfo());
  addI("SHADER_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SHADER_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_EXT_shader_replicated_composites)
  addI("PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_replicated_composites) */
#if defined(VK_EXT_shader_tile_image)
  addI("PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_tile_image) */
#if defined(VK_EXT_subgroup_size_control)
  addI("PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT), das::LineInfo());
  addI("PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_subgroup_size_control) */
#if defined(VK_EXT_subpass_merge_feedback)
  addI("PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT), das::LineInfo());
  addI("RENDER_PASS_CREATION_CONTROL_EXT", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT), das::LineInfo());
  addI("RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT), das::LineInfo());
  addI("RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_subpass_merge_feedback) */
#if defined(VK_EXT_surface_maintenance1)
  addI("SURFACE_PRESENT_MODE_EXT", int64_t(VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT), das::LineInfo());
  addI("SURFACE_PRESENT_SCALING_CAPABILITIES_EXT", int64_t(VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT), das::LineInfo());
  addI("SURFACE_PRESENT_MODE_COMPATIBILITY_EXT", int64_t(VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT), das::LineInfo());
#endif /* defined(VK_EXT_surface_maintenance1) */
#if defined(VK_EXT_swapchain_maintenance1)
  addI("PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT), das::LineInfo());
  addI("SWAPCHAIN_PRESENT_FENCE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT), das::LineInfo());
  addI("SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT), das::LineInfo());
  addI("SWAPCHAIN_PRESENT_MODE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT), das::LineInfo());
  addI("SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT), das::LineInfo());
  addI("RELEASE_SWAPCHAIN_IMAGES_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_swapchain_maintenance1) */
#if defined(VK_EXT_texel_buffer_alignment)
  addI("PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_texel_buffer_alignment) */
#if defined(VK_EXT_texture_compression_astc_hdr)
  addI("PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_texture_compression_astc_hdr) */
#if defined(VK_EXT_tooling_info)
  addI("PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_tooling_info) */
#if defined(VK_EXT_transform_feedback)
  addI("PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT), das::LineInfo());
  addI("PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_EXT_validation_cache)
  addI("VALIDATION_CACHE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT), das::LineInfo());
  addI("SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT), das::LineInfo());
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_EXT_validation_features)
  addI("VALIDATION_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_validation_features) */
#if defined(VK_EXT_validation_flags)
  addI("VALIDATION_FLAGS_EXT", int64_t(VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT), das::LineInfo());
#endif /* defined(VK_EXT_validation_flags) */
#if defined(VK_EXT_vertex_attribute_divisor)
  addI("PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT), das::LineInfo());
  addI("PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_vertex_attribute_divisor) */
#if defined(VK_EXT_vertex_attribute_robustness)
  addI("PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_vertex_attribute_robustness) */
#if defined(VK_EXT_vertex_input_dynamic_state)
  addI("PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_vertex_input_dynamic_state) */
#if defined(VK_EXT_ycbcr_2plane_444_formats)
  addI("PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_ycbcr_2plane_444_formats) */
#if defined(VK_EXT_ycbcr_image_arrays)
  addI("PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT), das::LineInfo());
#endif /* defined(VK_EXT_ycbcr_image_arrays) */
#if defined(VK_FUCHSIA_buffer_collection)
  addI("BUFFER_COLLECTION_CREATE_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CREATE_INFO_FUCHSIA), das::LineInfo());
  addI("IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA), das::LineInfo());
  addI("BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA), das::LineInfo());
  addI("BUFFER_COLLECTION_PROPERTIES_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_PROPERTIES_FUCHSIA), das::LineInfo());
  addI("BUFFER_CONSTRAINTS_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_BUFFER_CONSTRAINTS_INFO_FUCHSIA), das::LineInfo());
  addI("BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA), das::LineInfo());
  addI("IMAGE_CONSTRAINTS_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_IMAGE_CONSTRAINTS_INFO_FUCHSIA), das::LineInfo());
  addI("IMAGE_FORMAT_CONSTRAINTS_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_IMAGE_FORMAT_CONSTRAINTS_INFO_FUCHSIA), das::LineInfo());
  addI("SYSMEM_COLOR_SPACE_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_SYSMEM_COLOR_SPACE_FUCHSIA), das::LineInfo());
  addI("BUFFER_COLLECTION_CONSTRAINTS_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_BUFFER_COLLECTION_CONSTRAINTS_INFO_FUCHSIA), das::LineInfo());
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_FUCHSIA_external_memory)
  addI("IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA), das::LineInfo());
  addI("MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA), das::LineInfo());
  addI("MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA), das::LineInfo());
#endif /* defined(VK_FUCHSIA_external_memory) */
#if defined(VK_FUCHSIA_external_semaphore)
  addI("IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA), das::LineInfo());
  addI("SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA), das::LineInfo());
#endif /* defined(VK_FUCHSIA_external_semaphore) */
#if defined(VK_FUCHSIA_imagepipe_surface)
  addI("IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA", int64_t(VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA), das::LineInfo());
#endif /* defined(VK_FUCHSIA_imagepipe_surface) */
#if defined(VK_GGP_frame_token)
  addI("PRESENT_FRAME_TOKEN_GGP", int64_t(VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP), das::LineInfo());
#endif /* defined(VK_GGP_frame_token) */
#if defined(VK_GGP_stream_descriptor_surface)
  addI("STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP", int64_t(VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP), das::LineInfo());
#endif /* defined(VK_GGP_stream_descriptor_surface) */
#if defined(VK_GOOGLE_display_timing)
  addI("PRESENT_TIMES_INFO_GOOGLE", int64_t(VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE), das::LineInfo());
#endif /* defined(VK_GOOGLE_display_timing) */
#if defined(VK_HUAWEI_cluster_culling_shader)
  addI("PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI), das::LineInfo());
  addI("PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI), das::LineInfo());
  addI("PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_cluster_culling_shader) */
#if defined(VK_HUAWEI_hdr_vivid)
  addI("PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI), das::LineInfo());
  addI("HDR_VIVID_DYNAMIC_METADATA_HUAWEI", int64_t(VK_STRUCTURE_TYPE_HDR_VIVID_DYNAMIC_METADATA_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_hdr_vivid) */
#if defined(VK_HUAWEI_invocation_mask)
  addI("PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_invocation_mask) */
#if defined(VK_HUAWEI_subpass_shading)
  addI("SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI", int64_t(VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI), das::LineInfo());
  addI("PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI), das::LineInfo());
  addI("PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_subpass_shading) */
#if defined(VK_IMG_relaxed_line_rasterization)
  addI("PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG), das::LineInfo());
#endif /* defined(VK_IMG_relaxed_line_rasterization) */
#if defined(VK_INTEL_performance_query)
  addI("QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL", int64_t(VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL), das::LineInfo());
  addI("QUERY_POOL_CREATE_INFO_INTEL", int64_t(VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL), das::LineInfo());
  addI("INITIALIZE_PERFORMANCE_API_INFO_INTEL", int64_t(VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL), das::LineInfo());
  addI("PERFORMANCE_MARKER_INFO_INTEL", int64_t(VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL), das::LineInfo());
  addI("PERFORMANCE_STREAM_MARKER_INFO_INTEL", int64_t(VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL), das::LineInfo());
  addI("PERFORMANCE_OVERRIDE_INFO_INTEL", int64_t(VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL), das::LineInfo());
  addI("PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL", int64_t(VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL), das::LineInfo());
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_INTEL_shader_integer_functions2)
  addI("PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL), das::LineInfo());
#endif /* defined(VK_INTEL_shader_integer_functions2) */
#if defined(VK_KHR_16bit_storage)
  addI("PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_16bit_storage) */
#if defined(VK_KHR_8bit_storage)
  addI("PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_8bit_storage) */
#if defined(VK_KHR_acceleration_structure)
  addI("WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR", int64_t(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_GEOMETRY_KHR", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_VERSION_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR), das::LineInfo());
  addI("COPY_ACCELERATION_STRUCTURE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR), das::LineInfo());
  addI("COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR), das::LineInfo());
  addI("COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_android_surface)
  addI("ANDROID_SURFACE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_android_surface) */
#if defined(VK_KHR_bind_memory2)
  addI("BIND_BUFFER_MEMORY_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHR), das::LineInfo());
  addI("BIND_IMAGE_MEMORY_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_bind_memory2) */
#if defined(VK_KHR_buffer_device_address)
  addI("PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_KHR), das::LineInfo());
  addI("BUFFER_DEVICE_ADDRESS_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_KHR), das::LineInfo());
  addI("BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO_KHR), das::LineInfo());
  addI("MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO_KHR), das::LineInfo());
  addI("DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_buffer_device_address) */
#if defined(VK_KHR_calibrated_timestamps)
  addI("CALIBRATED_TIMESTAMP_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_calibrated_timestamps) */
#if defined(VK_KHR_compute_shader_derivatives)
  addI("PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_compute_shader_derivatives) */
#if defined(VK_KHR_cooperative_matrix)
  addI("PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR), das::LineInfo());
  addI("COOPERATIVE_MATRIX_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_cooperative_matrix) */
#if defined(VK_KHR_copy_commands2)
  addI("COPY_BUFFER_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2_KHR), das::LineInfo());
  addI("COPY_IMAGE_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2_KHR), das::LineInfo());
  addI("COPY_BUFFER_TO_IMAGE_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2_KHR), das::LineInfo());
  addI("COPY_IMAGE_TO_BUFFER_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2_KHR), das::LineInfo());
  addI("BLIT_IMAGE_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2_KHR), das::LineInfo());
  addI("RESOLVE_IMAGE_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2_KHR), das::LineInfo());
  addI("BUFFER_COPY_2_KHR", int64_t(VK_STRUCTURE_TYPE_BUFFER_COPY_2_KHR), das::LineInfo());
  addI("IMAGE_COPY_2_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_COPY_2_KHR), das::LineInfo());
  addI("IMAGE_BLIT_2_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_BLIT_2_KHR), das::LineInfo());
  addI("BUFFER_IMAGE_COPY_2_KHR", int64_t(VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2_KHR), das::LineInfo());
  addI("IMAGE_RESOLVE_2_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2_KHR), das::LineInfo());
#endif /* defined(VK_KHR_copy_commands2) */
#if defined(VK_KHR_create_renderpass2)
  addI("ATTACHMENT_DESCRIPTION_2_KHR", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR), das::LineInfo());
  addI("ATTACHMENT_REFERENCE_2_KHR", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR), das::LineInfo());
  addI("SUBPASS_DESCRIPTION_2_KHR", int64_t(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR), das::LineInfo());
  addI("SUBPASS_DEPENDENCY_2_KHR", int64_t(VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR), das::LineInfo());
  addI("RENDER_PASS_CREATE_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR), das::LineInfo());
  addI("SUBPASS_BEGIN_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR), das::LineInfo());
  addI("SUBPASS_END_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_create_renderpass2) */
#if defined(VK_KHR_dedicated_allocation)
  addI("MEMORY_DEDICATED_REQUIREMENTS_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR), das::LineInfo());
  addI("MEMORY_DEDICATED_ALLOCATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_dedicated_allocation) */
#if defined(VK_KHR_depth_stencil_resolve)
  addI("PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR), das::LineInfo());
  addI("SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR", int64_t(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_depth_stencil_resolve) */
#if defined(VK_KHR_descriptor_update_template)
  addI("DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_descriptor_update_template) */
#if defined(VK_KHR_device_group)
  addI("MEMORY_ALLOCATE_FLAGS_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHR), das::LineInfo());
  addI("DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR), das::LineInfo());
  addI("DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR), das::LineInfo());
  addI("DEVICE_GROUP_SUBMIT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHR), das::LineInfo());
  addI("DEVICE_GROUP_BIND_SPARSE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_device_group) */
#if defined(VK_KHR_device_group) && defined(VK_KHR_bind_memory2)
  addI("BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR), das::LineInfo());
  addI("BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_device_group) && defined(VK_KHR_bind_memory2) */
#if defined(VK_KHR_device_group_creation)
  addI("PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR), das::LineInfo());
  addI("DEVICE_GROUP_DEVICE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_device_group_creation) */
#if defined(VK_KHR_display)
  addI("DISPLAY_MODE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR), das::LineInfo());
  addI("DISPLAY_SURFACE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_display_swapchain)
  addI("DISPLAY_PRESENT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_display_swapchain) */
#if defined(VK_KHR_driver_properties)
  addI("PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_driver_properties) */
#if defined(VK_KHR_dynamic_rendering)
  addI("RENDERING_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RENDERING_INFO_KHR), das::LineInfo());
  addI("RENDERING_ATTACHMENT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO_KHR), das::LineInfo());
  addI("PIPELINE_RENDERING_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES_KHR), das::LineInfo());
  addI("COMMAND_BUFFER_INHERITANCE_RENDERING_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_dynamic_rendering) */
#if defined(VK_KHR_dynamic_rendering_local_read)
  addI("PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR), das::LineInfo());
  addI("RENDERING_ATTACHMENT_LOCATION_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO_KHR), das::LineInfo());
  addI("RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_dynamic_rendering_local_read) */
#if defined(VK_KHR_external_fence)
  addI("EXPORT_FENCE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_fence) */
#if defined(VK_KHR_external_fence_capabilities)
  addI("PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR), das::LineInfo());
  addI("EXTERNAL_FENCE_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_fence_capabilities) */
#if defined(VK_KHR_external_fence_fd)
  addI("IMPORT_FENCE_FD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR), das::LineInfo());
  addI("FENCE_GET_FD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_fence_fd) */
#if defined(VK_KHR_external_fence_win32)
  addI("IMPORT_FENCE_WIN32_HANDLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR), das::LineInfo());
  addI("EXPORT_FENCE_WIN32_HANDLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR), das::LineInfo());
  addI("FENCE_GET_WIN32_HANDLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_fence_win32) */
#if defined(VK_KHR_external_memory)
  addI("EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR), das::LineInfo());
  addI("EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR), das::LineInfo());
  addI("EXPORT_MEMORY_ALLOCATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_memory) */
#if defined(VK_KHR_external_memory_capabilities)
  addI("PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR), das::LineInfo());
  addI("EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR), das::LineInfo());
  addI("EXTERNAL_BUFFER_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_memory_capabilities) */
#if defined(VK_KHR_external_memory_fd)
  addI("IMPORT_MEMORY_FD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR), das::LineInfo());
  addI("MEMORY_FD_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR), das::LineInfo());
  addI("MEMORY_GET_FD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_memory_fd) */
#if defined(VK_KHR_external_memory_win32)
  addI("IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR), das::LineInfo());
  addI("EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR), das::LineInfo());
  addI("MEMORY_WIN32_HANDLE_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR), das::LineInfo());
  addI("MEMORY_GET_WIN32_HANDLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_KHR_external_semaphore)
  addI("EXPORT_SEMAPHORE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_semaphore) */
#if defined(VK_KHR_external_semaphore_capabilities)
  addI("PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR), das::LineInfo());
  addI("EXTERNAL_SEMAPHORE_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_semaphore_capabilities) */
#if defined(VK_KHR_external_semaphore_fd)
  addI("IMPORT_SEMAPHORE_FD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR), das::LineInfo());
  addI("SEMAPHORE_GET_FD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_semaphore_fd) */
#if defined(VK_KHR_external_semaphore_win32)
  addI("IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR), das::LineInfo());
  addI("EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR), das::LineInfo());
  addI("D3D12_FENCE_SUBMIT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR), das::LineInfo());
  addI("SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_KHR_format_feature_flags2)
  addI("FORMAT_PROPERTIES_3_KHR", int64_t(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3_KHR), das::LineInfo());
#endif /* defined(VK_KHR_format_feature_flags2) */
#if defined(VK_KHR_fragment_shader_barycentric)
  addI("PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shader_barycentric) */
#if defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR), das::LineInfo());
  addI("PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_get_display_properties2)
  addI("DISPLAY_PROPERTIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR), das::LineInfo());
  addI("DISPLAY_PLANE_PROPERTIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR), das::LineInfo());
  addI("DISPLAY_MODE_PROPERTIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR), das::LineInfo());
  addI("DISPLAY_PLANE_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR), das::LineInfo());
  addI("DISPLAY_PLANE_CAPABILITIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR), das::LineInfo());
#endif /* defined(VK_KHR_get_display_properties2) */
#if defined(VK_KHR_get_memory_requirements2)
  addI("BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR), das::LineInfo());
  addI("IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR), das::LineInfo());
  addI("IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR), das::LineInfo());
  addI("MEMORY_REQUIREMENTS_2_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR), das::LineInfo());
  addI("SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR", int64_t(VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR), das::LineInfo());
#endif /* defined(VK_KHR_get_memory_requirements2) */
#if defined(VK_KHR_get_physical_device_properties2)
  addI("PHYSICAL_DEVICE_FEATURES_2_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_PROPERTIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR), das::LineInfo());
  addI("FORMAT_PROPERTIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR), das::LineInfo());
  addI("IMAGE_FORMAT_PROPERTIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR), das::LineInfo());
  addI("QUEUE_FAMILY_PROPERTIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR), das::LineInfo());
  addI("SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR), das::LineInfo());
#endif /* defined(VK_KHR_get_physical_device_properties2) */
#if defined(VK_KHR_get_surface_capabilities2)
  addI("PHYSICAL_DEVICE_SURFACE_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR), das::LineInfo());
  addI("SURFACE_CAPABILITIES_2_KHR", int64_t(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR), das::LineInfo());
  addI("SURFACE_FORMAT_2_KHR", int64_t(VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR), das::LineInfo());
#endif /* defined(VK_KHR_get_surface_capabilities2) */
#if defined(VK_KHR_global_priority)
  addI("DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR), das::LineInfo());
  addI("QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_global_priority) */
#if defined(VK_KHR_image_format_list)
  addI("IMAGE_FORMAT_LIST_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_image_format_list) */
#if defined(VK_KHR_imageless_framebuffer)
  addI("PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR), das::LineInfo());
  addI("FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR), das::LineInfo());
  addI("FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR), das::LineInfo());
  addI("RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_imageless_framebuffer) */
#if defined(VK_KHR_incremental_present)
  addI("PRESENT_REGIONS_KHR", int64_t(VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR), das::LineInfo());
#endif /* defined(VK_KHR_incremental_present) */
#if defined(VK_KHR_index_type_uint8)
  addI("PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_index_type_uint8) */
#if defined(VK_KHR_line_rasterization)
  addI("PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR), das::LineInfo());
  addI("PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_line_rasterization) */
#if defined(VK_KHR_maintenance2)
  addI("PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR), das::LineInfo());
  addI("RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO_KHR), das::LineInfo());
  addI("IMAGE_VIEW_USAGE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO_KHR), das::LineInfo());
  addI("PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance2) */
#if defined(VK_KHR_maintenance3)
  addI("PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR), das::LineInfo());
  addI("DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance3) */
#if defined(VK_KHR_maintenance4)
  addI("PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES_KHR), das::LineInfo());
  addI("DEVICE_BUFFER_MEMORY_REQUIREMENTS_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS_KHR), das::LineInfo());
  addI("DEVICE_IMAGE_MEMORY_REQUIREMENTS_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance4) */
#if defined(VK_KHR_maintenance5)
  addI("PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR), das::LineInfo());
  addI("RENDERING_AREA_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RENDERING_AREA_INFO_KHR), das::LineInfo());
  addI("DEVICE_IMAGE_SUBRESOURCE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_IMAGE_SUBRESOURCE_INFO_KHR), das::LineInfo());
  addI("SUBRESOURCE_LAYOUT_2_KHR", int64_t(VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_KHR), das::LineInfo());
  addI("IMAGE_SUBRESOURCE_2_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_KHR), das::LineInfo());
  addI("PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR), das::LineInfo());
  addI("BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) */
#if defined(VK_KHR_maintenance6)
  addI("PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR), das::LineInfo());
  addI("BIND_MEMORY_STATUS_KHR", int64_t(VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS_KHR), das::LineInfo());
  addI("BIND_DESCRIPTOR_SETS_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_SETS_INFO_KHR), das::LineInfo());
  addI("PUSH_CONSTANTS_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PUSH_CONSTANTS_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance6) */
#if defined(VK_KHR_maintenance6) && defined(VK_KHR_push_descriptor)
  addI("PUSH_DESCRIPTOR_SET_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_INFO_KHR), das::LineInfo());
  addI("PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance6) && defined(VK_KHR_push_descriptor) */
#if defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer)
  addI("SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT), das::LineInfo());
  addI("BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT", int64_t(VK_STRUCTURE_TYPE_BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer) */
#if defined(VK_KHR_maintenance7)
  addI("PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance7) */
#if defined(VK_KHR_map_memory2)
  addI("MEMORY_MAP_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_MAP_INFO_KHR), das::LineInfo());
  addI("MEMORY_UNMAP_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_UNMAP_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_map_memory2) */
#if defined(VK_KHR_multiview)
  addI("RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_multiview) */
#if defined(VK_KHR_performance_query)
  addI("PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR), das::LineInfo());
  addI("QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR), das::LineInfo());
  addI("PERFORMANCE_QUERY_SUBMIT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR), das::LineInfo());
  addI("ACQUIRE_PROFILING_LOCK_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR), das::LineInfo());
  addI("PERFORMANCE_COUNTER_KHR", int64_t(VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR), das::LineInfo());
  addI("PERFORMANCE_COUNTER_DESCRIPTION_KHR", int64_t(VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR), das::LineInfo());
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_KHR_performance_query) && defined(VKSC_VERSION_1_0)
  addI("PERFORMANCE_QUERY_RESERVATION_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_RESERVATION_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_performance_query) && defined(VKSC_VERSION_1_0) */
#if defined(VK_KHR_pipeline_binary)
  addI("PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR), das::LineInfo());
  addI("PIPELINE_BINARY_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_BINARY_CREATE_INFO_KHR), das::LineInfo());
  addI("PIPELINE_BINARY_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_BINARY_INFO_KHR), das::LineInfo());
  addI("PIPELINE_BINARY_KEY_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_BINARY_KEY_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_PIPELINE_BINARY_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_PROPERTIES_KHR), das::LineInfo());
  addI("RELEASE_CAPTURED_PIPELINE_DATA_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RELEASE_CAPTURED_PIPELINE_DATA_INFO_KHR), das::LineInfo());
  addI("PIPELINE_BINARY_DATA_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_BINARY_DATA_INFO_KHR), das::LineInfo());
  addI("PIPELINE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_CREATE_INFO_KHR), das::LineInfo());
  addI("DEVICE_PIPELINE_BINARY_INTERNAL_CACHE_CONTROL_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_PIPELINE_BINARY_INTERNAL_CACHE_CONTROL_KHR), das::LineInfo());
  addI("PIPELINE_BINARY_HANDLES_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_BINARY_HANDLES_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_KHR_pipeline_executable_properties)
  addI("PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR), das::LineInfo());
  addI("PIPELINE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR), das::LineInfo());
  addI("PIPELINE_EXECUTABLE_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR), das::LineInfo());
  addI("PIPELINE_EXECUTABLE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR), das::LineInfo());
  addI("PIPELINE_EXECUTABLE_STATISTIC_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR), das::LineInfo());
  addI("PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR), das::LineInfo());
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_KHR_pipeline_library)
  addI("PIPELINE_LIBRARY_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_pipeline_library) */
#if defined(VK_KHR_portability_subset)
  addI("PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_portability_subset) */
#if defined(VK_KHR_present_id)
  addI("PRESENT_ID_KHR", int64_t(VK_STRUCTURE_TYPE_PRESENT_ID_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_present_id) */
#if defined(VK_KHR_present_wait)
  addI("PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_present_wait) */
#if defined(VK_KHR_push_descriptor)
  addI("PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_push_descriptor) */
#if defined(VK_KHR_ray_query)
  addI("PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_query) */
#if defined(VK_KHR_ray_tracing_maintenance1)
  addI("PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_maintenance1) */
#if defined(VK_KHR_ray_tracing_pipeline)
  addI("PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR), das::LineInfo());
  addI("RAY_TRACING_PIPELINE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR), das::LineInfo());
  addI("RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR), das::LineInfo());
  addI("RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_ray_tracing_position_fetch)
  addI("PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_position_fetch) */
#if defined(VK_KHR_sampler_ycbcr_conversion)
  addI("SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR), das::LineInfo());
  addI("SAMPLER_YCBCR_CONVERSION_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO_KHR), das::LineInfo());
  addI("BIND_IMAGE_PLANE_MEMORY_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO_KHR), das::LineInfo());
  addI("IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES_KHR), das::LineInfo());
  addI("SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
#if defined(VK_KHR_separate_depth_stencil_layouts)
  addI("PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES_KHR), das::LineInfo());
  addI("ATTACHMENT_REFERENCE_STENCIL_LAYOUT_KHR", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT_KHR), das::LineInfo());
  addI("ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT_KHR", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_separate_depth_stencil_layouts) */
#if defined(VK_KHR_shader_atomic_int64)
  addI("PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_atomic_int64) */
#if defined(VK_KHR_shader_clock)
  addI("PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_clock) */
#if defined(VK_KHR_shader_expect_assume)
  addI("PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_expect_assume) */
#if defined(VK_KHR_shader_float16_int8)
  addI("PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_float16_int8) */
#if defined(VK_KHR_shader_float_controls)
  addI("PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_float_controls) */
#if defined(VK_KHR_shader_float_controls2)
  addI("PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_float_controls2) */
#if defined(VK_KHR_shader_integer_dot_product)
  addI("PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_integer_dot_product) */
#if defined(VK_KHR_shader_maximal_reconvergence)
  addI("PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_maximal_reconvergence) */
#if defined(VK_KHR_shader_quad_control)
  addI("PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_quad_control) */
#if defined(VK_KHR_shader_relaxed_extended_instruction)
  addI("PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_relaxed_extended_instruction) */
#if defined(VK_KHR_shader_subgroup_extended_types)
  addI("PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_subgroup_extended_types) */
#if defined(VK_KHR_shader_subgroup_rotate)
  addI("PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_subgroup_rotate) */
#if defined(VK_KHR_shader_subgroup_uniform_control_flow)
  addI("PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_subgroup_uniform_control_flow) */
#if defined(VK_KHR_shader_terminate_invocation)
  addI("PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_terminate_invocation) */
#if defined(VK_KHR_shared_presentable_image)
  addI("SHARED_PRESENT_SURFACE_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shared_presentable_image) */
#if defined(VK_KHR_surface_protected_capabilities)
  addI("SURFACE_PROTECTED_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_surface_protected_capabilities) */
#if defined(VK_KHR_swapchain)
  addI("SWAPCHAIN_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR), das::LineInfo());
  addI("PRESENT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PRESENT_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_KHR_synchronization2)
  addI("MEMORY_BARRIER_2_KHR", int64_t(VK_STRUCTURE_TYPE_MEMORY_BARRIER_2_KHR), das::LineInfo());
  addI("BUFFER_MEMORY_BARRIER_2_KHR", int64_t(VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2_KHR), das::LineInfo());
  addI("IMAGE_MEMORY_BARRIER_2_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2_KHR), das::LineInfo());
  addI("DEPENDENCY_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEPENDENCY_INFO_KHR), das::LineInfo());
  addI("SUBMIT_INFO_2_KHR", int64_t(VK_STRUCTURE_TYPE_SUBMIT_INFO_2_KHR), das::LineInfo());
  addI("SEMAPHORE_SUBMIT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO_KHR), das::LineInfo());
  addI("COMMAND_BUFFER_SUBMIT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) */
#if defined(VK_KHR_timeline_semaphore)
  addI("PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR), das::LineInfo());
  addI("SEMAPHORE_TYPE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR), das::LineInfo());
  addI("TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO_KHR), das::LineInfo());
  addI("SEMAPHORE_WAIT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR), das::LineInfo());
  addI("SEMAPHORE_SIGNAL_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_timeline_semaphore) */
#if defined(VK_KHR_uniform_buffer_standard_layout)
  addI("PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_uniform_buffer_standard_layout) */
#if defined(VK_KHR_variable_pointers)
  addI("PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_variable_pointers) */
#if defined(VK_KHR_vertex_attribute_divisor)
  addI("PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR), das::LineInfo());
  addI("PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_vertex_attribute_divisor) */
#if defined(VK_KHR_video_decode_av1)
  addI("VIDEO_DECODE_AV1_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_DECODE_AV1_PICTURE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PICTURE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_AV1_PROFILE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PROFILE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_av1) */
#if defined(VK_KHR_video_decode_h264)
  addI("VIDEO_DECODE_H264_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H264_PICTURE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H264_PROFILE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_h264) */
#if defined(VK_KHR_video_decode_h265)
  addI("VIDEO_DECODE_H265_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H265_PROFILE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H265_PICTURE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_h265) */
#if defined(VK_KHR_video_decode_queue)
  addI("VIDEO_DECODE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR), das::LineInfo());
  addI("VIDEO_DECODE_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_DECODE_USAGE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_av1)
  addI("VIDEO_ENCODE_AV1_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_AV1_PICTURE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PICTURE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_AV1_DPB_SLOT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_DPB_SLOT_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_AV1_PROFILE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PROFILE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_AV1_RATE_CONTROL_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_RATE_CONTROL_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_AV1_RATE_CONTROL_LAYER_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_RATE_CONTROL_LAYER_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_AV1_QUALITY_LEVEL_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_QUALITY_LEVEL_PROPERTIES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_AV1_SESSION_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_SESSION_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_AV1_GOP_REMAINING_FRAME_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_GOP_REMAINING_FRAME_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_h264)
  addI("VIDEO_ENCODE_H264_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_PICTURE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_PROFILE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_h265)
  addI("VIDEO_ENCODE_H265_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_PICTURE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_PROFILE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_quantization_map)
  addI("VIDEO_ENCODE_QUANTIZATION_MAP_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_FORMAT_QUANTIZATION_MAP_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_FORMAT_QUANTIZATION_MAP_PROPERTIES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_QUANTIZATION_MAP_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_QUANTIZATION_MAP_SESSION_PARAMETERS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_SESSION_PARAMETERS_CREATE_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h264)
  addI("VIDEO_ENCODE_H264_QUANTIZATION_MAP_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUANTIZATION_MAP_CAPABILITIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265)
  addI("VIDEO_ENCODE_H265_QUANTIZATION_MAP_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUANTIZATION_MAP_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_FORMAT_H265_QUANTIZATION_MAP_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_FORMAT_H265_QUANTIZATION_MAP_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1)
  addI("VIDEO_ENCODE_AV1_QUANTIZATION_MAP_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_QUANTIZATION_MAP_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_FORMAT_AV1_QUANTIZATION_MAP_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_FORMAT_AV1_QUANTIZATION_MAP_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_RATE_CONTROL_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_USAGE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR), das::LineInfo());
  addI("QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_maintenance1)
  addI("PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR), das::LineInfo());
  addI("VIDEO_INLINE_QUERY_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_INLINE_QUERY_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_maintenance1) */
#if defined(VK_KHR_video_queue)
  addI("VIDEO_PROFILE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR), das::LineInfo());
  addI("VIDEO_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR), das::LineInfo());
  addI("VIDEO_PICTURE_RESOURCE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_INFO_KHR), das::LineInfo());
  addI("VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR), das::LineInfo());
  addI("BIND_VIDEO_SESSION_MEMORY_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BIND_VIDEO_SESSION_MEMORY_INFO_KHR), das::LineInfo());
  addI("VIDEO_SESSION_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR), das::LineInfo());
  addI("VIDEO_BEGIN_CODING_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR), das::LineInfo());
  addI("VIDEO_END_CODING_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR), das::LineInfo());
  addI("VIDEO_CODING_CONTROL_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR), das::LineInfo());
  addI("VIDEO_REFERENCE_SLOT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_INFO_KHR), das::LineInfo());
  addI("QUEUE_FAMILY_VIDEO_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR), das::LineInfo());
  addI("VIDEO_PROFILE_LIST_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR), das::LineInfo());
  addI("PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR), das::LineInfo());
  addI("VIDEO_FORMAT_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR), das::LineInfo());
  addI("QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_vulkan_memory_model)
  addI("PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_vulkan_memory_model) */
#if defined(VK_KHR_wayland_surface)
  addI("WAYLAND_SURFACE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_wayland_surface) */
#if defined(VK_KHR_win32_keyed_mutex)
  addI("WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_win32_keyed_mutex) */
#if defined(VK_KHR_win32_surface)
  addI("WIN32_SURFACE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_win32_surface) */
#if defined(VK_KHR_workgroup_memory_explicit_layout)
  addI("PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_workgroup_memory_explicit_layout) */
#if defined(VK_KHR_xcb_surface)
  addI("XCB_SURFACE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_xcb_surface) */
#if defined(VK_KHR_xlib_surface)
  addI("XLIB_SURFACE_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR), das::LineInfo());
#endif /* defined(VK_KHR_xlib_surface) */
#if defined(VK_KHR_zero_initialize_workgroup_memory)
  addI("PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES_KHR), das::LineInfo());
#endif /* defined(VK_KHR_zero_initialize_workgroup_memory) */
#if defined(VK_LUNARG_direct_driver_loading)
  addI("DIRECT_DRIVER_LOADING_INFO_LUNARG", int64_t(VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_INFO_LUNARG), das::LineInfo());
  addI("DIRECT_DRIVER_LOADING_LIST_LUNARG", int64_t(VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG), das::LineInfo());
#endif /* defined(VK_LUNARG_direct_driver_loading) */
#if defined(VK_MESA_image_alignment_control)
  addI("PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA), das::LineInfo());
  addI("PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA), das::LineInfo());
  addI("IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA", int64_t(VK_STRUCTURE_TYPE_IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA), das::LineInfo());
#endif /* defined(VK_MESA_image_alignment_control) */
#if defined(VK_MSFT_layered_driver)
  addI("PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT), das::LineInfo());
#endif /* defined(VK_MSFT_layered_driver) */
#if defined(VK_MVK_ios_surface)
  addI("IOS_SURFACE_CREATE_INFO_MVK", int64_t(VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK), das::LineInfo());
#endif /* defined(VK_MVK_ios_surface) */
#if defined(VK_MVK_macos_surface)
  addI("MACOS_SURFACE_CREATE_INFO_MVK", int64_t(VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK), das::LineInfo());
#endif /* defined(VK_MVK_macos_surface) */
#if defined(VK_NN_vi_surface)
  addI("VI_SURFACE_CREATE_INFO_NN", int64_t(VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN), das::LineInfo());
#endif /* defined(VK_NN_vi_surface) */
#if defined(VK_NVX_binary_import)
  addI("CU_MODULE_CREATE_INFO_NVX", int64_t(VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX), das::LineInfo());
  addI("CU_FUNCTION_CREATE_INFO_NVX", int64_t(VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX), das::LineInfo());
  addI("CU_LAUNCH_INFO_NVX", int64_t(VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX), das::LineInfo());
  addI("CU_MODULE_TEXTURING_MODE_CREATE_INFO_NVX", int64_t(VK_STRUCTURE_TYPE_CU_MODULE_TEXTURING_MODE_CREATE_INFO_NVX), das::LineInfo());
#endif /* defined(VK_NVX_binary_import) */
#if defined(VK_NVX_image_view_handle)
  addI("IMAGE_VIEW_HANDLE_INFO_NVX", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX), das::LineInfo());
  addI("IMAGE_VIEW_ADDRESS_PROPERTIES_NVX", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX), das::LineInfo());
#endif /* defined(VK_NVX_image_view_handle) */
#if defined(VK_NVX_multiview_per_view_attributes)
  addI("PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX), das::LineInfo());
#endif /* defined(VK_NVX_multiview_per_view_attributes) */
#if defined(VK_NVX_multiview_per_view_attributes) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
  addI("MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX", int64_t(VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX), das::LineInfo());
#endif /* defined(VK_NVX_multiview_per_view_attributes) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_NV_clip_space_w_scaling)
  addI("PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_clip_space_w_scaling) */
#if defined(VK_NV_command_buffer_inheritance)
  addI("PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_command_buffer_inheritance) */
#if defined(VK_NV_compute_shader_derivatives)
  addI("PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_compute_shader_derivatives) */
#if defined(VK_NV_cooperative_matrix)
  addI("PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV), das::LineInfo());
  addI("COOPERATIVE_MATRIX_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_cooperative_matrix) */
#if defined(VK_NV_cooperative_matrix2)
  addI("PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV), das::LineInfo());
  addI("COOPERATIVE_MATRIX_FLEXIBLE_DIMENSIONS_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_FLEXIBLE_DIMENSIONS_PROPERTIES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_cooperative_matrix2) */
#if defined(VK_NV_copy_memory_indirect)
  addI("PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_copy_memory_indirect) */
#if defined(VK_NV_corner_sampled_image)
  addI("PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_corner_sampled_image) */
#if defined(VK_NV_coverage_reduction_mode)
  addI("PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV), das::LineInfo());
  addI("PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV), das::LineInfo());
  addI("FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV", int64_t(VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV), das::LineInfo());
#endif /* defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_NV_cuda_kernel_launch)
  addI("CUDA_MODULE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_CUDA_MODULE_CREATE_INFO_NV), das::LineInfo());
  addI("CUDA_FUNCTION_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_CUDA_FUNCTION_CREATE_INFO_NV), das::LineInfo());
  addI("CUDA_LAUNCH_INFO_NV", int64_t(VK_STRUCTURE_TYPE_CUDA_LAUNCH_INFO_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_cuda_kernel_launch) */
#if defined(VK_NV_dedicated_allocation)
  addI("DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV), das::LineInfo());
  addI("DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV), das::LineInfo());
  addI("DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_dedicated_allocation) */
#if defined(VK_NV_dedicated_allocation_image_aliasing)
  addI("PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_dedicated_allocation_image_aliasing) */
#if defined(VK_NV_descriptor_pool_overallocation)
  addI("PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_descriptor_pool_overallocation) */
#if defined(VK_NV_device_diagnostic_checkpoints)
  addI("CHECKPOINT_DATA_NV", int64_t(VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV), das::LineInfo());
  addI("QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_device_diagnostic_checkpoints) */
#if defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2))
  addI("QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV", int64_t(VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV), das::LineInfo());
  addI("CHECKPOINT_DATA_2_NV", int64_t(VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV), das::LineInfo());
#endif /* defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2)) */
#if defined(VK_NV_device_diagnostics_config)
  addI("PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV), das::LineInfo());
  addI("DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_device_diagnostics_config) */
#if defined(VK_NV_device_generated_commands)
  addI("PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV), das::LineInfo());
  addI("GRAPHICS_SHADER_GROUP_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV), das::LineInfo());
  addI("GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV), das::LineInfo());
  addI("INDIRECT_COMMANDS_LAYOUT_TOKEN_NV", int64_t(VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV), das::LineInfo());
  addI("INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV), das::LineInfo());
  addI("GENERATED_COMMANDS_INFO_NV", int64_t(VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV), das::LineInfo());
  addI("GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV", int64_t(VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_device_generated_commands_compute)
  addI("PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV), das::LineInfo());
  addI("COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV", int64_t(VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV), das::LineInfo());
  addI("PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_device_generated_commands_compute) */
#if defined(VK_NV_displacement_micromap)
  addI("PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV), das::LineInfo());
#endif /* defined(VK_NV_displacement_micromap) */
#if defined(VK_NV_display_stereo)
  addI("DISPLAY_SURFACE_STEREO_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_DISPLAY_SURFACE_STEREO_CREATE_INFO_NV), das::LineInfo());
  addI("DISPLAY_MODE_STEREO_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_DISPLAY_MODE_STEREO_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_display_stereo) */
#if defined(VK_NV_extended_sparse_address_space)
  addI("PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_extended_sparse_address_space) */
#if defined(VK_NV_external_memory)
  addI("EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV), das::LineInfo());
  addI("EXPORT_MEMORY_ALLOCATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_external_memory) */
#if defined(VK_NV_external_memory_rdma)
  addI("MEMORY_GET_REMOTE_ADDRESS_INFO_NV", int64_t(VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_external_memory_rdma) */
#if defined(VK_NV_external_memory_win32)
  addI("IMPORT_MEMORY_WIN32_HANDLE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV), das::LineInfo());
  addI("EXPORT_MEMORY_WIN32_HANDLE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_external_memory_win32) */
#if defined(VK_NV_fragment_coverage_to_color)
  addI("PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_fragment_coverage_to_color) */
#if defined(VK_NV_fragment_shader_barycentric)
  addI("PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_fragment_shader_barycentric) */
#if defined(VK_NV_fragment_shading_rate_enums)
  addI("PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV), das::LineInfo());
  addI("PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_fragment_shading_rate_enums) */
#if defined(VK_NV_framebuffer_mixed_samples)
  addI("PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_framebuffer_mixed_samples) */
#if defined(VK_NV_framebuffer_mixed_samples) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
  addI("ATTACHMENT_SAMPLE_COUNT_INFO_NV", int64_t(VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_framebuffer_mixed_samples) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_NV_inherited_viewport_scissor)
  addI("PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV), das::LineInfo());
  addI("COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_inherited_viewport_scissor) */
#if defined(VK_NV_linear_color_attachment)
  addI("PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_linear_color_attachment) */
#if defined(VK_NV_low_latency)
  addI("QUERY_LOW_LATENCY_SUPPORT_NV", int64_t(VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV), das::LineInfo());
#endif /* defined(VK_NV_low_latency) */
#if defined(VK_NV_low_latency2)
  addI("LATENCY_SLEEP_MODE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_LATENCY_SLEEP_MODE_INFO_NV), das::LineInfo());
  addI("LATENCY_SLEEP_INFO_NV", int64_t(VK_STRUCTURE_TYPE_LATENCY_SLEEP_INFO_NV), das::LineInfo());
  addI("SET_LATENCY_MARKER_INFO_NV", int64_t(VK_STRUCTURE_TYPE_SET_LATENCY_MARKER_INFO_NV), das::LineInfo());
  addI("GET_LATENCY_MARKER_INFO_NV", int64_t(VK_STRUCTURE_TYPE_GET_LATENCY_MARKER_INFO_NV), das::LineInfo());
  addI("LATENCY_TIMINGS_FRAME_REPORT_NV", int64_t(VK_STRUCTURE_TYPE_LATENCY_TIMINGS_FRAME_REPORT_NV), das::LineInfo());
  addI("LATENCY_SUBMISSION_PRESENT_ID_NV", int64_t(VK_STRUCTURE_TYPE_LATENCY_SUBMISSION_PRESENT_ID_NV), das::LineInfo());
  addI("OUT_OF_BAND_QUEUE_TYPE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_OUT_OF_BAND_QUEUE_TYPE_INFO_NV), das::LineInfo());
  addI("SWAPCHAIN_LATENCY_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_SWAPCHAIN_LATENCY_CREATE_INFO_NV), das::LineInfo());
  addI("LATENCY_SURFACE_CAPABILITIES_NV", int64_t(VK_STRUCTURE_TYPE_LATENCY_SURFACE_CAPABILITIES_NV), das::LineInfo());
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_NV_memory_decompression)
  addI("PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_memory_decompression) */
#if defined(VK_NV_mesh_shader)
  addI("PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_mesh_shader) */
#if defined(VK_NV_optical_flow)
  addI("PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV), das::LineInfo());
  addI("OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV", int64_t(VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV), das::LineInfo());
  addI("OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV), das::LineInfo());
  addI("OPTICAL_FLOW_SESSION_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_INFO_NV), das::LineInfo());
  addI("OPTICAL_FLOW_EXECUTE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_OPTICAL_FLOW_EXECUTE_INFO_NV), das::LineInfo());
  addI("OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV", int64_t(VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_NV_per_stage_descriptor_set)
  addI("PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_per_stage_descriptor_set) */
#if defined(VK_NV_present_barrier)
  addI("PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV), das::LineInfo());
  addI("SURFACE_CAPABILITIES_PRESENT_BARRIER_NV", int64_t(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV), das::LineInfo());
  addI("SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_present_barrier) */
#if defined(VK_NV_raw_access_chains)
  addI("PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_raw_access_chains) */
#if defined(VK_NV_ray_tracing)
  addI("RAY_TRACING_PIPELINE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV), das::LineInfo());
  addI("GEOMETRY_NV", int64_t(VK_STRUCTURE_TYPE_GEOMETRY_NV), das::LineInfo());
  addI("GEOMETRY_TRIANGLES_NV", int64_t(VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV), das::LineInfo());
  addI("GEOMETRY_AABB_NV", int64_t(VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV), das::LineInfo());
  addI("BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV", int64_t(VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV), das::LineInfo());
  addI("WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV", int64_t(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV), das::LineInfo());
  addI("RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_ray_tracing_invocation_reorder)
  addI("PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing_invocation_reorder) */
#if defined(VK_NV_ray_tracing_motion_blur)
  addI("ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_MOTION_INFO_NV", int64_t(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_NV_ray_tracing_validation)
  addI("PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing_validation) */
#if defined(VK_NV_representative_fragment_test)
  addI("PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV), das::LineInfo());
  addI("PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_representative_fragment_test) */
#if defined(VK_NV_scissor_exclusive)
  addI("PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_scissor_exclusive) */
#if defined(VK_NV_shader_atomic_float16_vector)
  addI("PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_shader_atomic_float16_vector) */
#if defined(VK_NV_shader_image_footprint)
  addI("PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV), das::LineInfo());
#endif /* defined(VK_NV_shader_image_footprint) */
#if defined(VK_NV_shader_sm_builtins)
  addI("PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV), das::LineInfo());
#endif /* defined(VK_NV_shader_sm_builtins) */
#if defined(VK_NV_shading_rate_image)
  addI("PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV), das::LineInfo());
  addI("PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV), das::LineInfo());
  addI("PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_NV_viewport_swizzle)
  addI("PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_viewport_swizzle) */
#if defined(VK_NV_win32_keyed_mutex)
  addI("WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV", int64_t(VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV), das::LineInfo());
#endif /* defined(VK_NV_win32_keyed_mutex) */
#if defined(VK_QCOM_filter_cubic_clamp)
  addI("PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_filter_cubic_clamp) */
#if defined(VK_QCOM_filter_cubic_weights)
  addI("SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM), das::LineInfo());
  addI("PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM), das::LineInfo());
  addI("BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_filter_cubic_weights) */
#if defined(VK_QCOM_fragment_density_map_offset)
  addI("PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM), das::LineInfo());
  addI("PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM), das::LineInfo());
  addI("SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_fragment_density_map_offset) */
#if defined(VK_QCOM_image_processing)
  addI("PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM), das::LineInfo());
  addI("PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM), das::LineInfo());
  addI("IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_image_processing) */
#if defined(VK_QCOM_image_processing2)
  addI("PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM), das::LineInfo());
  addI("PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM), das::LineInfo());
  addI("SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_image_processing2) */
#if defined(VK_QCOM_multiview_per_view_render_areas)
  addI("PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM), das::LineInfo());
  addI("MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_multiview_per_view_render_areas) */
#if defined(VK_QCOM_multiview_per_view_viewports)
  addI("PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_multiview_per_view_viewports) */
#if defined(VK_QCOM_render_pass_transform)
  addI("COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM), das::LineInfo());
  addI("RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_render_pass_transform) */
#if defined(VK_QCOM_rotated_copy_commands)
  addI("COPY_COMMAND_TRANSFORM_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_rotated_copy_commands) */
#if defined(VK_QCOM_tile_properties)
  addI("PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM), das::LineInfo());
  addI("TILE_PROPERTIES_QCOM", int64_t(VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_tile_properties) */
#if defined(VK_QCOM_ycbcr_degamma)
  addI("PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM), das::LineInfo());
  addI("SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM", int64_t(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_ycbcr_degamma) */
#if defined(VK_QNX_external_memory_screen_buffer)
  addI("SCREEN_BUFFER_PROPERTIES_QNX", int64_t(VK_STRUCTURE_TYPE_SCREEN_BUFFER_PROPERTIES_QNX), das::LineInfo());
  addI("SCREEN_BUFFER_FORMAT_PROPERTIES_QNX", int64_t(VK_STRUCTURE_TYPE_SCREEN_BUFFER_FORMAT_PROPERTIES_QNX), das::LineInfo());
  addI("IMPORT_SCREEN_BUFFER_INFO_QNX", int64_t(VK_STRUCTURE_TYPE_IMPORT_SCREEN_BUFFER_INFO_QNX), das::LineInfo());
  addI("EXTERNAL_FORMAT_QNX", int64_t(VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX), das::LineInfo());
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
#if defined(VK_QNX_screen_surface)
  addI("SCREEN_SURFACE_CREATE_INFO_QNX", int64_t(VK_STRUCTURE_TYPE_SCREEN_SURFACE_CREATE_INFO_QNX), das::LineInfo());
#endif /* defined(VK_QNX_screen_surface) */
#if defined(VK_SEC_amigo_profiling)
  addI("PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC), das::LineInfo());
  addI("AMIGO_PROFILING_SUBMIT_INFO_SEC", int64_t(VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC), das::LineInfo());
#endif /* defined(VK_SEC_amigo_profiling) */
#if defined(VK_VALVE_descriptor_set_host_mapping)
  addI("PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE), das::LineInfo());
  addI("DESCRIPTOR_SET_BINDING_REFERENCE_VALVE", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE), das::LineInfo());
  addI("DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE", int64_t(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE), das::LineInfo());
#endif /* defined(VK_VALVE_descriptor_set_host_mapping) */
#if defined(VK_VALVE_mutable_descriptor_type)
  addI("PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_VALVE", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_VALVE), das::LineInfo());
  addI("MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_VALVE", int64_t(VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_VALVE), das::LineInfo());
#endif /* defined(VK_VALVE_mutable_descriptor_type) */
#if (defined(VK_EXT_shader_object)) || (defined(VK_EXT_vertex_input_dynamic_state))
  addI("VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT", int64_t(VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT), das::LineInfo());
  addI("VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT", int64_t(VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT), das::LineInfo());
#endif /* (defined(VK_EXT_shader_object)) || (defined(VK_EXT_vertex_input_dynamic_state)) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
  addI("DEVICE_GROUP_PRESENT_CAPABILITIES_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR), das::LineInfo());
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
  addI("IMAGE_SWAPCHAIN_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR), das::LineInfo());
  addI("BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR), das::LineInfo());
  addI("ACQUIRE_NEXT_IMAGE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR), das::LineInfo());
  addI("DEVICE_GROUP_PRESENT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR), das::LineInfo());
  addI("DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR), das::LineInfo());
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if (defined(VK_KHR_external_fence_capabilities)) || (defined(VK_KHR_external_memory_capabilities)) || (defined(VK_KHR_external_semaphore_capabilities))
  addI("PHYSICAL_DEVICE_ID_PROPERTIES_KHR", int64_t(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHR), das::LineInfo());
#endif /* (defined(VK_KHR_external_fence_capabilities)) || (defined(VK_KHR_external_memory_capabilities)) || (defined(VK_KHR_external_semaphore_capabilities)) */
#if (defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))) || (defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)))
  addI("RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR", int64_t(VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR), das::LineInfo());
#endif /* (defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))) || (defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))) */
} };
class EnumerationVkSubpassContents:public das::Enumeration{public:
EnumerationVkSubpassContents():das::Enumeration("VkSubpassContents") {
  external=true; cppName="VkSubpassContents";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSubpassContents>::type>::type;
  addI("INLINE", int64_t(VK_SUBPASS_CONTENTS_INLINE), das::LineInfo());
  addI("SECONDARY_COMMAND_BUFFERS", int64_t(VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS), das::LineInfo());
#if defined(VK_EXT_nested_command_buffer)
  addI("INLINE_AND_SECONDARY_COMMAND_BUFFERS_EXT", int64_t(VK_SUBPASS_CONTENTS_INLINE_AND_SECONDARY_COMMAND_BUFFERS_EXT), das::LineInfo());
#endif /* defined(VK_EXT_nested_command_buffer) */
#if defined(VK_KHR_maintenance7)
  addI("INLINE_AND_SECONDARY_COMMAND_BUFFERS_KHR", int64_t(VK_SUBPASS_CONTENTS_INLINE_AND_SECONDARY_COMMAND_BUFFERS_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance7) */
} };
class EnumerationVkSystemAllocationScope:public das::Enumeration{public:
EnumerationVkSystemAllocationScope():das::Enumeration("VkSystemAllocationScope") {
  external=true; cppName="VkSystemAllocationScope";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSystemAllocationScope>::type>::type;
  addI("COMMAND", int64_t(VK_SYSTEM_ALLOCATION_SCOPE_COMMAND), das::LineInfo());
  addI("OBJECT", int64_t(VK_SYSTEM_ALLOCATION_SCOPE_OBJECT), das::LineInfo());
  addI("CACHE", int64_t(VK_SYSTEM_ALLOCATION_SCOPE_CACHE), das::LineInfo());
  addI("DEVICE", int64_t(VK_SYSTEM_ALLOCATION_SCOPE_DEVICE), das::LineInfo());
  addI("INSTANCE", int64_t(VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE), das::LineInfo());
} };
class EnumerationVkVendorId:public das::Enumeration{public:
EnumerationVkVendorId():das::Enumeration("VkVendorId") {
  external=true; cppName="VkVendorId";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVendorId>::type>::type;
  addI("KHRONOS", int64_t(VK_VENDOR_ID_KHRONOS), das::LineInfo());
  addI("VIV", int64_t(VK_VENDOR_ID_VIV), das::LineInfo());
  addI("VSI", int64_t(VK_VENDOR_ID_VSI), das::LineInfo());
  addI("KAZAN", int64_t(VK_VENDOR_ID_KAZAN), das::LineInfo());
  addI("CODEPLAY", int64_t(VK_VENDOR_ID_CODEPLAY), das::LineInfo());
  addI("MESA", int64_t(VK_VENDOR_ID_MESA), das::LineInfo());
  addI("POCL", int64_t(VK_VENDOR_ID_POCL), das::LineInfo());
  addI("MOBILEYE", int64_t(VK_VENDOR_ID_MOBILEYE), das::LineInfo());
} };
class EnumerationVkVertexInputRate:public das::Enumeration{public:
EnumerationVkVertexInputRate():das::Enumeration("VkVertexInputRate") {
  external=true; cppName="VkVertexInputRate";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVertexInputRate>::type>::type;
  addI("VERTEX", int64_t(VK_VERTEX_INPUT_RATE_VERTEX), das::LineInfo());
  addI("INSTANCE", int64_t(VK_VERTEX_INPUT_RATE_INSTANCE), das::LineInfo());
} };
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
class EnumerationVkChromaLocation:public das::Enumeration{public:
EnumerationVkChromaLocation():das::Enumeration("VkChromaLocation") {
  external=true; cppName="VkChromaLocation";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkChromaLocation>::type>::type;
  addI("COSITED_EVEN", int64_t(VK_CHROMA_LOCATION_COSITED_EVEN), das::LineInfo());
  addI("MIDPOINT", int64_t(VK_CHROMA_LOCATION_MIDPOINT), das::LineInfo());
#if defined(VK_KHR_sampler_ycbcr_conversion)
  addI("COSITED_EVEN_KHR", int64_t(VK_CHROMA_LOCATION_COSITED_EVEN_KHR), das::LineInfo());
  addI("MIDPOINT_KHR", int64_t(VK_CHROMA_LOCATION_MIDPOINT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
} };
class EnumerationVkDescriptorUpdateTemplateType:public das::Enumeration{public:
EnumerationVkDescriptorUpdateTemplateType():das::Enumeration("VkDescriptorUpdateTemplateType") {
  external=true; cppName="VkDescriptorUpdateTemplateType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDescriptorUpdateTemplateType>::type>::type;
  addI("DESCRIPTOR_SET", int64_t(VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET), das::LineInfo());
#if defined(VK_VERSION_1_4)
  addI("PUSH_DESCRIPTORS", int64_t(VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_KHR_descriptor_update_template)
  addI("DESCRIPTOR_SET_KHR", int64_t(VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR), das::LineInfo());
#endif /* defined(VK_KHR_descriptor_update_template) */
#if (defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor)) || (defined(VK_KHR_push_descriptor) && (defined(VK_VERSION_1_1) || defined(VK_KHR_descriptor_update_template)))
  addI("PUSH_DESCRIPTORS_KHR", int64_t(VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR), das::LineInfo());
#endif /* (defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor)) || (defined(VK_KHR_push_descriptor) && (defined(VK_VERSION_1_1) || defined(VK_KHR_descriptor_update_template))) */
} };
class EnumerationVkExternalFenceFeatureFlagBits:public das::Enumeration{public:
EnumerationVkExternalFenceFeatureFlagBits():das::Enumeration("VkExternalFenceFeatureFlagBits") {
  external=true; cppName="VkExternalFenceFeatureFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkExternalFenceFeatureFlagBits>::type>::type;
  addI("EXPORTABLE_BIT", int64_t(VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT), das::LineInfo());
  addI("IMPORTABLE_BIT", int64_t(VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT), das::LineInfo());
#if defined(VK_KHR_external_fence_capabilities)
  addI("EXPORTABLE_BIT_KHR", int64_t(VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR), das::LineInfo());
  addI("IMPORTABLE_BIT_KHR", int64_t(VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_fence_capabilities) */
} };
class EnumerationVkExternalFenceHandleTypeFlagBits:public das::Enumeration{public:
EnumerationVkExternalFenceHandleTypeFlagBits():das::Enumeration("VkExternalFenceHandleTypeFlagBits") {
  external=true; cppName="VkExternalFenceHandleTypeFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>::type;
  addI("OPAQUE_FD_BIT", int64_t(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT), das::LineInfo());
  addI("OPAQUE_WIN32_BIT", int64_t(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT), das::LineInfo());
  addI("OPAQUE_WIN32_KMT_BIT", int64_t(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT), das::LineInfo());
  addI("SYNC_FD_BIT", int64_t(VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT), das::LineInfo());
#if defined(VK_KHR_external_fence_capabilities)
  addI("OPAQUE_FD_BIT_KHR", int64_t(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR), das::LineInfo());
  addI("OPAQUE_WIN32_BIT_KHR", int64_t(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR), das::LineInfo());
  addI("OPAQUE_WIN32_KMT_BIT_KHR", int64_t(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR), das::LineInfo());
  addI("SYNC_FD_BIT_KHR", int64_t(VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_fence_capabilities) */
} };
class EnumerationVkExternalMemoryFeatureFlagBits:public das::Enumeration{public:
EnumerationVkExternalMemoryFeatureFlagBits():das::Enumeration("VkExternalMemoryFeatureFlagBits") {
  external=true; cppName="VkExternalMemoryFeatureFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkExternalMemoryFeatureFlagBits>::type>::type;
  addI("DEDICATED_ONLY_BIT", int64_t(VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT), das::LineInfo());
  addI("EXPORTABLE_BIT", int64_t(VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT), das::LineInfo());
  addI("IMPORTABLE_BIT", int64_t(VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT), das::LineInfo());
#if defined(VK_KHR_external_memory_capabilities)
  addI("DEDICATED_ONLY_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR), das::LineInfo());
  addI("EXPORTABLE_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR), das::LineInfo());
  addI("IMPORTABLE_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_memory_capabilities) */
} };
class EnumerationVkExternalMemoryHandleTypeFlagBits:public das::Enumeration{public:
EnumerationVkExternalMemoryHandleTypeFlagBits():das::Enumeration("VkExternalMemoryHandleTypeFlagBits") {
  external=true; cppName="VkExternalMemoryHandleTypeFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>::type;
  addI("OPAQUE_FD_BIT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT), das::LineInfo());
  addI("OPAQUE_WIN32_BIT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT), das::LineInfo());
  addI("OPAQUE_WIN32_KMT_BIT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT), das::LineInfo());
  addI("D3D11_TEXTURE_BIT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT), das::LineInfo());
  addI("D3D11_TEXTURE_KMT_BIT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT), das::LineInfo());
  addI("D3D12_HEAP_BIT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT), das::LineInfo());
  addI("D3D12_RESOURCE_BIT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT), das::LineInfo());
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
  addI("ANDROID_HARDWARE_BUFFER_BIT_ANDROID", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID), das::LineInfo());
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_EXT_external_memory_dma_buf)
  addI("DMA_BUF_BIT_EXT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_external_memory_dma_buf) */
#if defined(VK_EXT_external_memory_host)
  addI("HOST_ALLOCATION_BIT_EXT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT), das::LineInfo());
  addI("HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_external_memory_host) */
#if defined(VK_FUCHSIA_external_memory)
  addI("ZIRCON_VMO_BIT_FUCHSIA", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_ZIRCON_VMO_BIT_FUCHSIA), das::LineInfo());
#endif /* defined(VK_FUCHSIA_external_memory) */
#if defined(VK_KHR_external_memory_capabilities)
  addI("OPAQUE_FD_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR), das::LineInfo());
  addI("OPAQUE_WIN32_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR), das::LineInfo());
  addI("OPAQUE_WIN32_KMT_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR), das::LineInfo());
  addI("D3D11_TEXTURE_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR), das::LineInfo());
  addI("D3D11_TEXTURE_KMT_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR), das::LineInfo());
  addI("D3D12_HEAP_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR), das::LineInfo());
  addI("D3D12_RESOURCE_BIT_KHR", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_memory_capabilities) */
#if defined(VK_NV_external_memory_rdma)
  addI("RDMA_ADDRESS_BIT_NV", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_RDMA_ADDRESS_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_external_memory_rdma) */
#if defined(VK_QNX_external_memory_screen_buffer)
  addI("SCREEN_BUFFER_BIT_QNX", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_SCREEN_BUFFER_BIT_QNX), das::LineInfo());
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
} };
class EnumerationVkExternalSemaphoreFeatureFlagBits:public das::Enumeration{public:
EnumerationVkExternalSemaphoreFeatureFlagBits():das::Enumeration("VkExternalSemaphoreFeatureFlagBits") {
  external=true; cppName="VkExternalSemaphoreFeatureFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>::type;
  addI("EXPORTABLE_BIT", int64_t(VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT), das::LineInfo());
  addI("IMPORTABLE_BIT", int64_t(VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT), das::LineInfo());
#if defined(VK_KHR_external_semaphore_capabilities)
  addI("EXPORTABLE_BIT_KHR", int64_t(VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR), das::LineInfo());
  addI("IMPORTABLE_BIT_KHR", int64_t(VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_semaphore_capabilities) */
} };
class EnumerationVkExternalSemaphoreHandleTypeFlagBits:public das::Enumeration{public:
EnumerationVkExternalSemaphoreHandleTypeFlagBits():das::Enumeration("VkExternalSemaphoreHandleTypeFlagBits") {
  external=true; cppName="VkExternalSemaphoreHandleTypeFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>::type;
  addI("OPAQUE_FD_BIT", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT), das::LineInfo());
  addI("OPAQUE_WIN32_BIT", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT), das::LineInfo());
  addI("OPAQUE_WIN32_KMT_BIT", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT), das::LineInfo());
  addI("D3D12_FENCE_BIT", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT), das::LineInfo());
  addI("D3D11_FENCE_BIT", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D11_FENCE_BIT), das::LineInfo());
  addI("SYNC_FD_BIT", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT), das::LineInfo());
#if defined(VK_FUCHSIA_external_semaphore)
  addI("ZIRCON_EVENT_BIT_FUCHSIA", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_ZIRCON_EVENT_BIT_FUCHSIA), das::LineInfo());
#endif /* defined(VK_FUCHSIA_external_semaphore) */
#if defined(VK_KHR_external_semaphore_capabilities)
  addI("OPAQUE_FD_BIT_KHR", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR), das::LineInfo());
  addI("OPAQUE_WIN32_BIT_KHR", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR), das::LineInfo());
  addI("OPAQUE_WIN32_KMT_BIT_KHR", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR), das::LineInfo());
  addI("D3D12_FENCE_BIT_KHR", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR), das::LineInfo());
  addI("SYNC_FD_BIT_KHR", int64_t(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_semaphore_capabilities) */
} };
class EnumerationVkFenceImportFlagBits:public das::Enumeration{public:
EnumerationVkFenceImportFlagBits():das::Enumeration("VkFenceImportFlagBits") {
  external=true; cppName="VkFenceImportFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFenceImportFlagBits>::type>::type;
  addI("_TEMPORARY_BIT", int64_t(VK_FENCE_IMPORT_TEMPORARY_BIT), das::LineInfo());
#if defined(VK_KHR_external_fence)
  addI("_TEMPORARY_BIT_KHR", int64_t(VK_FENCE_IMPORT_TEMPORARY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_fence) */
} };
class EnumerationVkMemoryAllocateFlagBits:public das::Enumeration{public:
EnumerationVkMemoryAllocateFlagBits():das::Enumeration("VkMemoryAllocateFlagBits") {
  external=true; cppName="VkMemoryAllocateFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkMemoryAllocateFlagBits>::type>::type;
  addI("MASK_BIT", int64_t(VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT), das::LineInfo());
#if defined(VK_VERSION_1_2)
  addI("ADDRESS_BIT", int64_t(VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT), das::LineInfo());
  addI("ADDRESS_CAPTURE_REPLAY_BIT", int64_t(VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_KHR_buffer_device_address)
  addI("ADDRESS_BIT_KHR", int64_t(VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT_KHR), das::LineInfo());
  addI("ADDRESS_CAPTURE_REPLAY_BIT_KHR", int64_t(VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_buffer_device_address) */
#if defined(VK_KHR_device_group)
  addI("MASK_BIT_KHR", int64_t(VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_device_group) */
} };
class EnumerationVkPeerMemoryFeatureFlagBits:public das::Enumeration{public:
EnumerationVkPeerMemoryFeatureFlagBits():das::Enumeration("VkPeerMemoryFeatureFlagBits") {
  external=true; cppName="VkPeerMemoryFeatureFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPeerMemoryFeatureFlagBits>::type>::type;
  addI("COPY_SRC_BIT", int64_t(VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT), das::LineInfo());
  addI("COPY_DST_BIT", int64_t(VK_PEER_MEMORY_FEATURE_COPY_DST_BIT), das::LineInfo());
  addI("GENERIC_SRC_BIT", int64_t(VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT), das::LineInfo());
  addI("GENERIC_DST_BIT", int64_t(VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT), das::LineInfo());
#if defined(VK_KHR_device_group)
  addI("COPY_SRC_BIT_KHR", int64_t(VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR), das::LineInfo());
  addI("COPY_DST_BIT_KHR", int64_t(VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR), das::LineInfo());
  addI("GENERIC_SRC_BIT_KHR", int64_t(VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR), das::LineInfo());
  addI("GENERIC_DST_BIT_KHR", int64_t(VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_device_group) */
} };
class EnumerationVkPointClippingBehavior:public das::Enumeration{public:
EnumerationVkPointClippingBehavior():das::Enumeration("VkPointClippingBehavior") {
  external=true; cppName="VkPointClippingBehavior";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPointClippingBehavior>::type>::type;
  addI("ALL_CLIP_PLANES", int64_t(VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES), das::LineInfo());
  addI("USER_CLIP_PLANES_ONLY", int64_t(VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY), das::LineInfo());
#if defined(VK_KHR_maintenance2)
  addI("ALL_CLIP_PLANES_KHR", int64_t(VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR), das::LineInfo());
  addI("USER_CLIP_PLANES_ONLY_KHR", int64_t(VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance2) */
} };
class EnumerationVkSamplerYcbcrModelConversion:public das::Enumeration{public:
EnumerationVkSamplerYcbcrModelConversion():das::Enumeration("VkSamplerYcbcrModelConversion") {
  external=true; cppName="VkSamplerYcbcrModelConversion";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSamplerYcbcrModelConversion>::type>::type;
  addI("RGB_IDENTITY", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY), das::LineInfo());
  addI("YCBCR_IDENTITY", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY), das::LineInfo());
  addI("YCBCR_709", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709), das::LineInfo());
  addI("YCBCR_601", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601), das::LineInfo());
  addI("YCBCR_2020", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020), das::LineInfo());
#if defined(VK_KHR_sampler_ycbcr_conversion)
  addI("RGB_IDENTITY_KHR", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR), das::LineInfo());
  addI("YCBCR_IDENTITY_KHR", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR), das::LineInfo());
  addI("YCBCR_709_KHR", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR), das::LineInfo());
  addI("YCBCR_601_KHR", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR), das::LineInfo());
  addI("YCBCR_2020_KHR", int64_t(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
} };
class EnumerationVkSamplerYcbcrRange:public das::Enumeration{public:
EnumerationVkSamplerYcbcrRange():das::Enumeration("VkSamplerYcbcrRange") {
  external=true; cppName="VkSamplerYcbcrRange";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSamplerYcbcrRange>::type>::type;
  addI("FULL", int64_t(VK_SAMPLER_YCBCR_RANGE_ITU_FULL), das::LineInfo());
  addI("NARROW", int64_t(VK_SAMPLER_YCBCR_RANGE_ITU_NARROW), das::LineInfo());
#if defined(VK_KHR_sampler_ycbcr_conversion)
  addI("FULL_KHR", int64_t(VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR), das::LineInfo());
  addI("NARROW_KHR", int64_t(VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
} };
class EnumerationVkSemaphoreImportFlagBits:public das::Enumeration{public:
EnumerationVkSemaphoreImportFlagBits():das::Enumeration("VkSemaphoreImportFlagBits") {
  external=true; cppName="VkSemaphoreImportFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSemaphoreImportFlagBits>::type>::type;
  addI("_TEMPORARY_BIT", int64_t(VK_SEMAPHORE_IMPORT_TEMPORARY_BIT), das::LineInfo());
#if defined(VK_KHR_external_semaphore)
  addI("_TEMPORARY_BIT_KHR", int64_t(VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_external_semaphore) */
} };
class EnumerationVkSubgroupFeatureFlagBits:public das::Enumeration{public:
EnumerationVkSubgroupFeatureFlagBits():das::Enumeration("VkSubgroupFeatureFlagBits") {
  external=true; cppName="VkSubgroupFeatureFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSubgroupFeatureFlagBits>::type>::type;
  addI("BASIC_BIT", int64_t(VK_SUBGROUP_FEATURE_BASIC_BIT), das::LineInfo());
  addI("VOTE_BIT", int64_t(VK_SUBGROUP_FEATURE_VOTE_BIT), das::LineInfo());
  addI("ARITHMETIC_BIT", int64_t(VK_SUBGROUP_FEATURE_ARITHMETIC_BIT), das::LineInfo());
  addI("BALLOT_BIT", int64_t(VK_SUBGROUP_FEATURE_BALLOT_BIT), das::LineInfo());
  addI("SHUFFLE_BIT", int64_t(VK_SUBGROUP_FEATURE_SHUFFLE_BIT), das::LineInfo());
  addI("SHUFFLE_RELATIVE_BIT", int64_t(VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT), das::LineInfo());
  addI("CLUSTERED_BIT", int64_t(VK_SUBGROUP_FEATURE_CLUSTERED_BIT), das::LineInfo());
  addI("QUAD_BIT", int64_t(VK_SUBGROUP_FEATURE_QUAD_BIT), das::LineInfo());
#if defined(VK_VERSION_1_4)
  addI("ROTATE_BIT", int64_t(VK_SUBGROUP_FEATURE_ROTATE_BIT), das::LineInfo());
  addI("ROTATE_CLUSTERED_BIT", int64_t(VK_SUBGROUP_FEATURE_ROTATE_CLUSTERED_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_KHR_shader_subgroup_rotate)
  addI("ROTATE_BIT_KHR", int64_t(VK_SUBGROUP_FEATURE_ROTATE_BIT_KHR), das::LineInfo());
  addI("ROTATE_CLUSTERED_BIT_KHR", int64_t(VK_SUBGROUP_FEATURE_ROTATE_CLUSTERED_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_subgroup_rotate) */
#if defined(VK_NV_shader_subgroup_partitioned)
  addI("PARTITIONED_BIT_NV", int64_t(VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_shader_subgroup_partitioned) */
} };
class EnumerationVkTessellationDomainOrigin:public das::Enumeration{public:
EnumerationVkTessellationDomainOrigin():das::Enumeration("VkTessellationDomainOrigin") {
  external=true; cppName="VkTessellationDomainOrigin";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkTessellationDomainOrigin>::type>::type;
  addI("UPPER_LEFT", int64_t(VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT), das::LineInfo());
  addI("LOWER_LEFT", int64_t(VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT), das::LineInfo());
#if defined(VK_KHR_maintenance2)
  addI("UPPER_LEFT_KHR", int64_t(VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR), das::LineInfo());
  addI("LOWER_LEFT_KHR", int64_t(VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance2) */
} };
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
class EnumerationVkDescriptorBindingFlagBits:public das::Enumeration{public:
EnumerationVkDescriptorBindingFlagBits():das::Enumeration("VkDescriptorBindingFlagBits") {
  external=true; cppName="VkDescriptorBindingFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDescriptorBindingFlagBits>::type>::type;
  addI("UPDATE_AFTER_BIND_BIT", int64_t(VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT), das::LineInfo());
  addI("UPDATE_UNUSED_WHILE_PENDING_BIT", int64_t(VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT), das::LineInfo());
  addI("PARTIALLY_BOUND_BIT", int64_t(VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT), das::LineInfo());
  addI("VARIABLE_DESCRIPTOR_COUNT_BIT", int64_t(VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT), das::LineInfo());
#if defined(VK_EXT_descriptor_indexing)
  addI("UPDATE_AFTER_BIND_BIT_EXT", int64_t(VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT), das::LineInfo());
  addI("UPDATE_UNUSED_WHILE_PENDING_BIT_EXT", int64_t(VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT), das::LineInfo());
  addI("PARTIALLY_BOUND_BIT_EXT", int64_t(VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT), das::LineInfo());
  addI("VARIABLE_DESCRIPTOR_COUNT_BIT_EXT", int64_t(VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_indexing) */
} };
class EnumerationVkDriverId:public das::Enumeration{public:
EnumerationVkDriverId():das::Enumeration("VkDriverId") {
  external=true; cppName="VkDriverId";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDriverId>::type>::type;
  addI("AMD_PROPRIETARY", int64_t(VK_DRIVER_ID_AMD_PROPRIETARY), das::LineInfo());
  addI("AMD_OPEN_SOURCE", int64_t(VK_DRIVER_ID_AMD_OPEN_SOURCE), das::LineInfo());
  addI("MESA_RADV", int64_t(VK_DRIVER_ID_MESA_RADV), das::LineInfo());
  addI("NVIDIA_PROPRIETARY", int64_t(VK_DRIVER_ID_NVIDIA_PROPRIETARY), das::LineInfo());
  addI("INTEL_PROPRIETARY_WINDOWS", int64_t(VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS), das::LineInfo());
  addI("INTEL_OPEN_SOURCE_MESA", int64_t(VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA), das::LineInfo());
  addI("IMAGINATION_PROPRIETARY", int64_t(VK_DRIVER_ID_IMAGINATION_PROPRIETARY), das::LineInfo());
  addI("QUALCOMM_PROPRIETARY", int64_t(VK_DRIVER_ID_QUALCOMM_PROPRIETARY), das::LineInfo());
  addI("ARM_PROPRIETARY", int64_t(VK_DRIVER_ID_ARM_PROPRIETARY), das::LineInfo());
  addI("GOOGLE_SWIFTSHADER", int64_t(VK_DRIVER_ID_GOOGLE_SWIFTSHADER), das::LineInfo());
  addI("GGP_PROPRIETARY", int64_t(VK_DRIVER_ID_GGP_PROPRIETARY), das::LineInfo());
  addI("BROADCOM_PROPRIETARY", int64_t(VK_DRIVER_ID_BROADCOM_PROPRIETARY), das::LineInfo());
  addI("MESA_LLVMPIPE", int64_t(VK_DRIVER_ID_MESA_LLVMPIPE), das::LineInfo());
  addI("MOLTENVK", int64_t(VK_DRIVER_ID_MOLTENVK), das::LineInfo());
  addI("COREAVI_PROPRIETARY", int64_t(VK_DRIVER_ID_COREAVI_PROPRIETARY), das::LineInfo());
  addI("JUICE_PROPRIETARY", int64_t(VK_DRIVER_ID_JUICE_PROPRIETARY), das::LineInfo());
  addI("VERISILICON_PROPRIETARY", int64_t(VK_DRIVER_ID_VERISILICON_PROPRIETARY), das::LineInfo());
  addI("MESA_TURNIP", int64_t(VK_DRIVER_ID_MESA_TURNIP), das::LineInfo());
  addI("MESA_V3DV", int64_t(VK_DRIVER_ID_MESA_V3DV), das::LineInfo());
  addI("MESA_PANVK", int64_t(VK_DRIVER_ID_MESA_PANVK), das::LineInfo());
  addI("SAMSUNG_PROPRIETARY", int64_t(VK_DRIVER_ID_SAMSUNG_PROPRIETARY), das::LineInfo());
  addI("MESA_VENUS", int64_t(VK_DRIVER_ID_MESA_VENUS), das::LineInfo());
  addI("MESA_DOZEN", int64_t(VK_DRIVER_ID_MESA_DOZEN), das::LineInfo());
  addI("MESA_NVK", int64_t(VK_DRIVER_ID_MESA_NVK), das::LineInfo());
  addI("IMAGINATION_OPEN_SOURCE_MESA", int64_t(VK_DRIVER_ID_IMAGINATION_OPEN_SOURCE_MESA), das::LineInfo());
  addI("MESA_HONEYKRISP", int64_t(VK_DRIVER_ID_MESA_HONEYKRISP), das::LineInfo());
  addI("RESERVED_27", int64_t(VK_DRIVER_ID_RESERVED_27), das::LineInfo());
#if defined(VK_KHR_driver_properties)
  addI("AMD_PROPRIETARY_KHR", int64_t(VK_DRIVER_ID_AMD_PROPRIETARY_KHR), das::LineInfo());
  addI("AMD_OPEN_SOURCE_KHR", int64_t(VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR), das::LineInfo());
  addI("MESA_RADV_KHR", int64_t(VK_DRIVER_ID_MESA_RADV_KHR), das::LineInfo());
  addI("NVIDIA_PROPRIETARY_KHR", int64_t(VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR), das::LineInfo());
  addI("INTEL_PROPRIETARY_WINDOWS_KHR", int64_t(VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR), das::LineInfo());
  addI("INTEL_OPEN_SOURCE_MESA_KHR", int64_t(VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR), das::LineInfo());
  addI("IMAGINATION_PROPRIETARY_KHR", int64_t(VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR), das::LineInfo());
  addI("QUALCOMM_PROPRIETARY_KHR", int64_t(VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR), das::LineInfo());
  addI("ARM_PROPRIETARY_KHR", int64_t(VK_DRIVER_ID_ARM_PROPRIETARY_KHR), das::LineInfo());
  addI("GOOGLE_SWIFTSHADER_KHR", int64_t(VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR), das::LineInfo());
  addI("GGP_PROPRIETARY_KHR", int64_t(VK_DRIVER_ID_GGP_PROPRIETARY_KHR), das::LineInfo());
  addI("BROADCOM_PROPRIETARY_KHR", int64_t(VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR), das::LineInfo());
#endif /* defined(VK_KHR_driver_properties) */
} };
class EnumerationVkResolveModeFlagBits:public das::Enumeration{public:
EnumerationVkResolveModeFlagBits():das::Enumeration("VkResolveModeFlagBits") {
  external=true; cppName="VkResolveModeFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkResolveModeFlagBits>::type>::type;
  addI("NONE", int64_t(VK_RESOLVE_MODE_NONE), das::LineInfo());
  addI("SAMPLE_ZERO_BIT", int64_t(VK_RESOLVE_MODE_SAMPLE_ZERO_BIT), das::LineInfo());
  addI("AVERAGE_BIT", int64_t(VK_RESOLVE_MODE_AVERAGE_BIT), das::LineInfo());
  addI("MIN_BIT", int64_t(VK_RESOLVE_MODE_MIN_BIT), das::LineInfo());
  addI("MAX_BIT", int64_t(VK_RESOLVE_MODE_MAX_BIT), das::LineInfo());
#if defined(VK_ANDROID_external_format_resolve) && (defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3))
  addI("EXTERNAL_FORMAT_DOWNSAMPLE_ANDROID", int64_t(VK_RESOLVE_MODE_EXTERNAL_FORMAT_DOWNSAMPLE_ANDROID), das::LineInfo());
#endif /* defined(VK_ANDROID_external_format_resolve) && (defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3)) */
#if defined(VK_KHR_depth_stencil_resolve)
  addI("NONE_KHR", int64_t(VK_RESOLVE_MODE_NONE_KHR), das::LineInfo());
  addI("SAMPLE_ZERO_BIT_KHR", int64_t(VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR), das::LineInfo());
  addI("AVERAGE_BIT_KHR", int64_t(VK_RESOLVE_MODE_AVERAGE_BIT_KHR), das::LineInfo());
  addI("MIN_BIT_KHR", int64_t(VK_RESOLVE_MODE_MIN_BIT_KHR), das::LineInfo());
  addI("MAX_BIT_KHR", int64_t(VK_RESOLVE_MODE_MAX_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_depth_stencil_resolve) */
} };
class EnumerationVkSamplerReductionMode:public das::Enumeration{public:
EnumerationVkSamplerReductionMode():das::Enumeration("VkSamplerReductionMode") {
  external=true; cppName="VkSamplerReductionMode";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSamplerReductionMode>::type>::type;
  addI("WEIGHTED_AVERAGE", int64_t(VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE), das::LineInfo());
  addI("MIN", int64_t(VK_SAMPLER_REDUCTION_MODE_MIN), das::LineInfo());
  addI("MAX", int64_t(VK_SAMPLER_REDUCTION_MODE_MAX), das::LineInfo());
#if defined(VK_EXT_sampler_filter_minmax)
  addI("WEIGHTED_AVERAGE_EXT", int64_t(VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT), das::LineInfo());
  addI("MIN_EXT", int64_t(VK_SAMPLER_REDUCTION_MODE_MIN_EXT), das::LineInfo());
  addI("MAX_EXT", int64_t(VK_SAMPLER_REDUCTION_MODE_MAX_EXT), das::LineInfo());
#endif /* defined(VK_EXT_sampler_filter_minmax) */
#if defined(VK_QCOM_filter_cubic_clamp)
  addI("WEIGHTED_AVERAGE_RANGECLAMP_QCOM", int64_t(VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_RANGECLAMP_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_filter_cubic_clamp) */
} };
class EnumerationVkSemaphoreType:public das::Enumeration{public:
EnumerationVkSemaphoreType():das::Enumeration("VkSemaphoreType") {
  external=true; cppName="VkSemaphoreType";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSemaphoreType>::type>::type;
  addI("BINARY", int64_t(VK_SEMAPHORE_TYPE_BINARY), das::LineInfo());
  addI("TIMELINE", int64_t(VK_SEMAPHORE_TYPE_TIMELINE), das::LineInfo());
#if defined(VK_KHR_timeline_semaphore)
  addI("BINARY_KHR", int64_t(VK_SEMAPHORE_TYPE_BINARY_KHR), das::LineInfo());
  addI("TIMELINE_KHR", int64_t(VK_SEMAPHORE_TYPE_TIMELINE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_timeline_semaphore) */
} };
class EnumerationVkSemaphoreWaitFlagBits:public das::Enumeration{public:
EnumerationVkSemaphoreWaitFlagBits():das::Enumeration("VkSemaphoreWaitFlagBits") {
  external=true; cppName="VkSemaphoreWaitFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSemaphoreWaitFlagBits>::type>::type;
  addI("_ANY_BIT", int64_t(VK_SEMAPHORE_WAIT_ANY_BIT), das::LineInfo());
#if defined(VK_KHR_timeline_semaphore)
  addI("_ANY_BIT_KHR", int64_t(VK_SEMAPHORE_WAIT_ANY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_timeline_semaphore) */
} };
class EnumerationVkShaderFloatControlsIndependence:public das::Enumeration{public:
EnumerationVkShaderFloatControlsIndependence():das::Enumeration("VkShaderFloatControlsIndependence") {
  external=true; cppName="VkShaderFloatControlsIndependence";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkShaderFloatControlsIndependence>::type>::type;
  addI("_32_BIT_ONLY", int64_t(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY), das::LineInfo());
  addI("ALL", int64_t(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL), das::LineInfo());
  addI("NONE", int64_t(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE), das::LineInfo());
#if defined(VK_KHR_shader_float_controls)
  addI("_32_BIT_ONLY_KHR", int64_t(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR), das::LineInfo());
  addI("ALL_KHR", int64_t(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR), das::LineInfo());
  addI("NONE_KHR", int64_t(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shader_float_controls) */
} };
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_3)
class EnumerationVkAccessFlagBits2:public das::Enumeration{public:
EnumerationVkAccessFlagBits2():das::Enumeration("VkAccessFlagBits2") {
  external=true; cppName="VkAccessFlagBits2";
  baseType=das::tUInt64;
  addI("NONE", int64_t(VK_ACCESS_2_NONE), das::LineInfo());
  addI("INDIRECT_COMMAND_READ_BIT", int64_t(VK_ACCESS_2_INDIRECT_COMMAND_READ_BIT), das::LineInfo());
  addI("INDEX_READ_BIT", int64_t(VK_ACCESS_2_INDEX_READ_BIT), das::LineInfo());
  addI("VERTEX_ATTRIBUTE_READ_BIT", int64_t(VK_ACCESS_2_VERTEX_ATTRIBUTE_READ_BIT), das::LineInfo());
  addI("UNIFORM_READ_BIT", int64_t(VK_ACCESS_2_UNIFORM_READ_BIT), das::LineInfo());
  addI("INPUT_ATTACHMENT_READ_BIT", int64_t(VK_ACCESS_2_INPUT_ATTACHMENT_READ_BIT), das::LineInfo());
  addI("SHADER_READ_BIT", int64_t(VK_ACCESS_2_SHADER_READ_BIT), das::LineInfo());
  addI("SHADER_WRITE_BIT", int64_t(VK_ACCESS_2_SHADER_WRITE_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_READ_BIT", int64_t(VK_ACCESS_2_COLOR_ATTACHMENT_READ_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_WRITE_BIT", int64_t(VK_ACCESS_2_COLOR_ATTACHMENT_WRITE_BIT), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_READ_BIT", int64_t(VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_READ_BIT), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_WRITE_BIT", int64_t(VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT), das::LineInfo());
  addI("TRANSFER_READ_BIT", int64_t(VK_ACCESS_2_TRANSFER_READ_BIT), das::LineInfo());
  addI("TRANSFER_WRITE_BIT", int64_t(VK_ACCESS_2_TRANSFER_WRITE_BIT), das::LineInfo());
  addI("HOST_READ_BIT", int64_t(VK_ACCESS_2_HOST_READ_BIT), das::LineInfo());
  addI("HOST_WRITE_BIT", int64_t(VK_ACCESS_2_HOST_WRITE_BIT), das::LineInfo());
  addI("MEMORY_READ_BIT", int64_t(VK_ACCESS_2_MEMORY_READ_BIT), das::LineInfo());
  addI("MEMORY_WRITE_BIT", int64_t(VK_ACCESS_2_MEMORY_WRITE_BIT), das::LineInfo());
  addI("SHADER_SAMPLED_READ_BIT", int64_t(VK_ACCESS_2_SHADER_SAMPLED_READ_BIT), das::LineInfo());
  addI("SHADER_STORAGE_READ_BIT", int64_t(VK_ACCESS_2_SHADER_STORAGE_READ_BIT), das::LineInfo());
  addI("SHADER_STORAGE_WRITE_BIT", int64_t(VK_ACCESS_2_SHADER_STORAGE_WRITE_BIT), das::LineInfo());
#if defined(VK_EXT_descriptor_buffer)
  addI("DESCRIPTOR_BUFFER_READ_BIT_EXT", int64_t(VK_ACCESS_2_DESCRIPTOR_BUFFER_READ_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_EXT_opacity_micromap)
  addI("MICROMAP_READ_BIT_EXT", int64_t(VK_ACCESS_2_MICROMAP_READ_BIT_EXT), das::LineInfo());
  addI("MICROMAP_WRITE_BIT_EXT", int64_t(VK_ACCESS_2_MICROMAP_WRITE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_HUAWEI_invocation_mask)
  addI("INVOCATION_MASK_READ_BIT_HUAWEI", int64_t(VK_ACCESS_2_INVOCATION_MASK_READ_BIT_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_invocation_mask) */
#if defined(VK_KHR_ray_tracing_maintenance1) && ((defined(VK_KHR_synchronization2) || defined(VK_VERSION_1_3)) && defined(VK_KHR_ray_tracing_pipeline))
  addI("SHADER_BINDING_TABLE_READ_BIT_KHR", int64_t(VK_ACCESS_2_SHADER_BINDING_TABLE_READ_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_maintenance1) && ((defined(VK_KHR_synchronization2) || defined(VK_VERSION_1_3)) && defined(VK_KHR_ray_tracing_pipeline)) */
#if defined(VK_KHR_synchronization2)
  addI("NONE_KHR", int64_t(VK_ACCESS_2_NONE_KHR), das::LineInfo());
  addI("INDIRECT_COMMAND_READ_BIT_KHR", int64_t(VK_ACCESS_2_INDIRECT_COMMAND_READ_BIT_KHR), das::LineInfo());
  addI("INDEX_READ_BIT_KHR", int64_t(VK_ACCESS_2_INDEX_READ_BIT_KHR), das::LineInfo());
  addI("VERTEX_ATTRIBUTE_READ_BIT_KHR", int64_t(VK_ACCESS_2_VERTEX_ATTRIBUTE_READ_BIT_KHR), das::LineInfo());
  addI("UNIFORM_READ_BIT_KHR", int64_t(VK_ACCESS_2_UNIFORM_READ_BIT_KHR), das::LineInfo());
  addI("INPUT_ATTACHMENT_READ_BIT_KHR", int64_t(VK_ACCESS_2_INPUT_ATTACHMENT_READ_BIT_KHR), das::LineInfo());
  addI("SHADER_READ_BIT_KHR", int64_t(VK_ACCESS_2_SHADER_READ_BIT_KHR), das::LineInfo());
  addI("SHADER_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_SHADER_WRITE_BIT_KHR), das::LineInfo());
  addI("COLOR_ATTACHMENT_READ_BIT_KHR", int64_t(VK_ACCESS_2_COLOR_ATTACHMENT_READ_BIT_KHR), das::LineInfo());
  addI("COLOR_ATTACHMENT_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_COLOR_ATTACHMENT_WRITE_BIT_KHR), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_READ_BIT_KHR", int64_t(VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_READ_BIT_KHR), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT_KHR), das::LineInfo());
  addI("TRANSFER_READ_BIT_KHR", int64_t(VK_ACCESS_2_TRANSFER_READ_BIT_KHR), das::LineInfo());
  addI("TRANSFER_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_TRANSFER_WRITE_BIT_KHR), das::LineInfo());
  addI("HOST_READ_BIT_KHR", int64_t(VK_ACCESS_2_HOST_READ_BIT_KHR), das::LineInfo());
  addI("HOST_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_HOST_WRITE_BIT_KHR), das::LineInfo());
  addI("MEMORY_READ_BIT_KHR", int64_t(VK_ACCESS_2_MEMORY_READ_BIT_KHR), das::LineInfo());
  addI("MEMORY_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_MEMORY_WRITE_BIT_KHR), das::LineInfo());
  addI("SHADER_SAMPLED_READ_BIT_KHR", int64_t(VK_ACCESS_2_SHADER_SAMPLED_READ_BIT_KHR), das::LineInfo());
  addI("SHADER_STORAGE_READ_BIT_KHR", int64_t(VK_ACCESS_2_SHADER_STORAGE_READ_BIT_KHR), das::LineInfo());
  addI("SHADER_STORAGE_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_SHADER_STORAGE_WRITE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_transform_feedback)
  addI("TRANSFORM_FEEDBACK_WRITE_BIT_EXT", int64_t(VK_ACCESS_2_TRANSFORM_FEEDBACK_WRITE_BIT_EXT), das::LineInfo());
  addI("TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT", int64_t(VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT), das::LineInfo());
  addI("TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT", int64_t(VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_transform_feedback) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_conditional_rendering)
  addI("CONDITIONAL_RENDERING_READ_BIT_EXT", int64_t(VK_ACCESS_2_CONDITIONAL_RENDERING_READ_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_conditional_rendering) */
#if defined(VK_KHR_synchronization2) && defined(VK_NV_device_generated_commands)
  addI("COMMAND_PREPROCESS_READ_BIT_NV", int64_t(VK_ACCESS_2_COMMAND_PREPROCESS_READ_BIT_NV), das::LineInfo());
  addI("COMMAND_PREPROCESS_WRITE_BIT_NV", int64_t(VK_ACCESS_2_COMMAND_PREPROCESS_WRITE_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_NV_device_generated_commands) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_device_generated_commands)
  addI("COMMAND_PREPROCESS_READ_BIT_EXT", int64_t(VK_ACCESS_2_COMMAND_PREPROCESS_READ_BIT_EXT), das::LineInfo());
  addI("COMMAND_PREPROCESS_WRITE_BIT_EXT", int64_t(VK_ACCESS_2_COMMAND_PREPROCESS_WRITE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_device_generated_commands) */
#if defined(VK_KHR_synchronization2) && defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR", int64_t(VK_ACCESS_2_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_synchronization2) && defined(VK_NV_shading_rate_image)
  addI("SHADING_RATE_IMAGE_READ_BIT_NV", int64_t(VK_ACCESS_2_SHADING_RATE_IMAGE_READ_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_NV_shading_rate_image) */
#if defined(VK_KHR_synchronization2) && defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_READ_BIT_KHR", int64_t(VK_ACCESS_2_ACCELERATION_STRUCTURE_READ_BIT_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_ACCELERATION_STRUCTURE_WRITE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_synchronization2) && defined(VK_NV_ray_tracing)
  addI("ACCELERATION_STRUCTURE_READ_BIT_NV", int64_t(VK_ACCESS_2_ACCELERATION_STRUCTURE_READ_BIT_NV), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_WRITE_BIT_NV", int64_t(VK_ACCESS_2_ACCELERATION_STRUCTURE_WRITE_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_NV_ray_tracing) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_fragment_density_map)
  addI("FRAGMENT_DENSITY_MAP_READ_BIT_EXT", int64_t(VK_ACCESS_2_FRAGMENT_DENSITY_MAP_READ_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_fragment_density_map) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_blend_operation_advanced)
  addI("COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT", int64_t(VK_ACCESS_2_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_KHR_video_decode_queue)
  addI("VIDEO_DECODE_READ_BIT_KHR", int64_t(VK_ACCESS_2_VIDEO_DECODE_READ_BIT_KHR), das::LineInfo());
  addI("VIDEO_DECODE_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_VIDEO_DECODE_WRITE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_READ_BIT_KHR", int64_t(VK_ACCESS_2_VIDEO_ENCODE_READ_BIT_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_WRITE_BIT_KHR", int64_t(VK_ACCESS_2_VIDEO_ENCODE_WRITE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_NV_optical_flow)
  addI("OPTICAL_FLOW_READ_BIT_NV", int64_t(VK_ACCESS_2_OPTICAL_FLOW_READ_BIT_NV), das::LineInfo());
  addI("OPTICAL_FLOW_WRITE_BIT_NV", int64_t(VK_ACCESS_2_OPTICAL_FLOW_WRITE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_optical_flow) */
} };
class EnumerationVkFormatFeatureFlagBits2:public das::Enumeration{public:
EnumerationVkFormatFeatureFlagBits2():das::Enumeration("VkFormatFeatureFlagBits2") {
  external=true; cppName="VkFormatFeatureFlagBits2";
  baseType=das::tUInt64;
  addI("SAMPLED_IMAGE_BIT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_BIT), das::LineInfo());
  addI("STORAGE_IMAGE_BIT", int64_t(VK_FORMAT_FEATURE_2_STORAGE_IMAGE_BIT), das::LineInfo());
  addI("STORAGE_IMAGE_ATOMIC_BIT", int64_t(VK_FORMAT_FEATURE_2_STORAGE_IMAGE_ATOMIC_BIT), das::LineInfo());
  addI("UNIFORM_TEXEL_BUFFER_BIT", int64_t(VK_FORMAT_FEATURE_2_UNIFORM_TEXEL_BUFFER_BIT), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER_BIT", int64_t(VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_BIT), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER_ATOMIC_BIT", int64_t(VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_ATOMIC_BIT), das::LineInfo());
  addI("VERTEX_BUFFER_BIT", int64_t(VK_FORMAT_FEATURE_2_VERTEX_BUFFER_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_BIT", int64_t(VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_BLEND_BIT", int64_t(VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BLEND_BIT), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_BIT", int64_t(VK_FORMAT_FEATURE_2_DEPTH_STENCIL_ATTACHMENT_BIT), das::LineInfo());
  addI("BLIT_SRC_BIT", int64_t(VK_FORMAT_FEATURE_2_BLIT_SRC_BIT), das::LineInfo());
  addI("BLIT_DST_BIT", int64_t(VK_FORMAT_FEATURE_2_BLIT_DST_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_FILTER_LINEAR_BIT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_LINEAR_BIT), das::LineInfo());
  addI("TRANSFER_SRC_BIT", int64_t(VK_FORMAT_FEATURE_2_TRANSFER_SRC_BIT), das::LineInfo());
  addI("TRANSFER_DST_BIT", int64_t(VK_FORMAT_FEATURE_2_TRANSFER_DST_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_FILTER_MINMAX_BIT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_MINMAX_BIT), das::LineInfo());
  addI("MIDPOINT_CHROMA_SAMPLES_BIT", int64_t(VK_FORMAT_FEATURE_2_MIDPOINT_CHROMA_SAMPLES_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT), das::LineInfo());
  addI("DISJOINT_BIT", int64_t(VK_FORMAT_FEATURE_2_DISJOINT_BIT), das::LineInfo());
  addI("COSITED_CHROMA_SAMPLES_BIT", int64_t(VK_FORMAT_FEATURE_2_COSITED_CHROMA_SAMPLES_BIT), das::LineInfo());
  addI("STORAGE_READ_WITHOUT_FORMAT_BIT", int64_t(VK_FORMAT_FEATURE_2_STORAGE_READ_WITHOUT_FORMAT_BIT), das::LineInfo());
  addI("STORAGE_WRITE_WITHOUT_FORMAT_BIT", int64_t(VK_FORMAT_FEATURE_2_STORAGE_WRITE_WITHOUT_FORMAT_BIT), das::LineInfo());
  addI("SAMPLED_IMAGE_DEPTH_COMPARISON_BIT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT), das::LineInfo());
#if defined(VK_VERSION_1_3)
  addI("SAMPLED_IMAGE_FILTER_CUBIC_BIT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_CUBIC_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
  addI("HOST_IMAGE_TRANSFER_BIT", int64_t(VK_FORMAT_FEATURE_2_HOST_IMAGE_TRANSFER_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_fragment_density_map) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
  addI("FRAGMENT_DENSITY_MAP_BIT_EXT", int64_t(VK_FORMAT_FEATURE_2_FRAGMENT_DENSITY_MAP_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_fragment_density_map) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_EXT_host_image_copy)
  addI("HOST_IMAGE_TRANSFER_BIT_EXT", int64_t(VK_FORMAT_FEATURE_2_HOST_IMAGE_TRANSFER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_host_image_copy) */
#if defined(VK_KHR_acceleration_structure) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
  addI("ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_KHR_format_feature_flags2)
  addI("SAMPLED_IMAGE_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_BIT_KHR), das::LineInfo());
  addI("STORAGE_IMAGE_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_STORAGE_IMAGE_BIT_KHR), das::LineInfo());
  addI("STORAGE_IMAGE_ATOMIC_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_STORAGE_IMAGE_ATOMIC_BIT_KHR), das::LineInfo());
  addI("UNIFORM_TEXEL_BUFFER_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_UNIFORM_TEXEL_BUFFER_BIT_KHR), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_BIT_KHR), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER_ATOMIC_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_ATOMIC_BIT_KHR), das::LineInfo());
  addI("VERTEX_BUFFER_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_VERTEX_BUFFER_BIT_KHR), das::LineInfo());
  addI("COLOR_ATTACHMENT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BIT_KHR), das::LineInfo());
  addI("COLOR_ATTACHMENT_BLEND_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BLEND_BIT_KHR), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_DEPTH_STENCIL_ATTACHMENT_BIT_KHR), das::LineInfo());
  addI("BLIT_SRC_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_BLIT_SRC_BIT_KHR), das::LineInfo());
  addI("BLIT_DST_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_BLIT_DST_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_FILTER_LINEAR_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_LINEAR_BIT_KHR), das::LineInfo());
  addI("TRANSFER_SRC_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_TRANSFER_SRC_BIT_KHR), das::LineInfo());
  addI("TRANSFER_DST_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_TRANSFER_DST_BIT_KHR), das::LineInfo());
  addI("MIDPOINT_CHROMA_SAMPLES_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_MIDPOINT_CHROMA_SAMPLES_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR), das::LineInfo());
  addI("DISJOINT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_DISJOINT_BIT_KHR), das::LineInfo());
  addI("COSITED_CHROMA_SAMPLES_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_COSITED_CHROMA_SAMPLES_BIT_KHR), das::LineInfo());
  addI("STORAGE_READ_WITHOUT_FORMAT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_STORAGE_READ_WITHOUT_FORMAT_BIT_KHR), das::LineInfo());
  addI("STORAGE_WRITE_WITHOUT_FORMAT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_STORAGE_WRITE_WITHOUT_FORMAT_BIT_KHR), das::LineInfo());
  addI("SAMPLED_IMAGE_DEPTH_COMPARISON_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_format_feature_flags2) */
#if defined(VK_KHR_format_feature_flags2) && (defined(VK_VERSION_1_2) || defined(VK_EXT_sampler_filter_minmax))
  addI("SAMPLED_IMAGE_FILTER_MINMAX_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_MINMAX_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_format_feature_flags2) && (defined(VK_VERSION_1_2) || defined(VK_EXT_sampler_filter_minmax)) */
#if defined(VK_KHR_format_feature_flags2) && (defined(VK_EXT_filter_cubic) || defined(VK_IMG_filter_cubic))
  addI("SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT", int64_t(VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_format_feature_flags2) && (defined(VK_EXT_filter_cubic) || defined(VK_IMG_filter_cubic)) */
#if defined(VK_KHR_fragment_shading_rate) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_fragment_shading_rate) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_KHR_video_decode_queue) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
  addI("VIDEO_DECODE_OUTPUT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_VIDEO_DECODE_OUTPUT_BIT_KHR), das::LineInfo());
  addI("VIDEO_DECODE_DPB_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_VIDEO_DECODE_DPB_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_queue) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_KHR_video_encode_quantization_map)
  addI("VIDEO_ENCODE_QUANTIZATION_DELTA_MAP_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_VIDEO_ENCODE_QUANTIZATION_DELTA_MAP_BIT_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_EMPHASIS_MAP_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_VIDEO_ENCODE_EMPHASIS_MAP_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_encode_queue) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
  addI("VIDEO_ENCODE_INPUT_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_VIDEO_ENCODE_INPUT_BIT_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_DPB_BIT_KHR", int64_t(VK_FORMAT_FEATURE_2_VIDEO_ENCODE_DPB_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_NV_linear_color_attachment) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
  addI("LINEAR_COLOR_ATTACHMENT_BIT_NV", int64_t(VK_FORMAT_FEATURE_2_LINEAR_COLOR_ATTACHMENT_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_linear_color_attachment) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_NV_optical_flow)
  addI("OPTICAL_FLOW_IMAGE_BIT_NV", int64_t(VK_FORMAT_FEATURE_2_OPTICAL_FLOW_IMAGE_BIT_NV), das::LineInfo());
  addI("OPTICAL_FLOW_VECTOR_BIT_NV", int64_t(VK_FORMAT_FEATURE_2_OPTICAL_FLOW_VECTOR_BIT_NV), das::LineInfo());
  addI("OPTICAL_FLOW_COST_BIT_NV", int64_t(VK_FORMAT_FEATURE_2_OPTICAL_FLOW_COST_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_QCOM_image_processing) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
  addI("WEIGHT_IMAGE_BIT_QCOM", int64_t(VK_FORMAT_FEATURE_2_WEIGHT_IMAGE_BIT_QCOM), das::LineInfo());
  addI("WEIGHT_SAMPLED_IMAGE_BIT_QCOM", int64_t(VK_FORMAT_FEATURE_2_WEIGHT_SAMPLED_IMAGE_BIT_QCOM), das::LineInfo());
  addI("BLOCK_MATCHING_BIT_QCOM", int64_t(VK_FORMAT_FEATURE_2_BLOCK_MATCHING_BIT_QCOM), das::LineInfo());
  addI("BOX_FILTER_SAMPLED_BIT_QCOM", int64_t(VK_FORMAT_FEATURE_2_BOX_FILTER_SAMPLED_BIT_QCOM), das::LineInfo());
#endif /* defined(VK_QCOM_image_processing) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
} };
class EnumerationVkPipelineCreationFeedbackFlagBits:public das::Enumeration{public:
EnumerationVkPipelineCreationFeedbackFlagBits():das::Enumeration("VkPipelineCreationFeedbackFlagBits") {
  external=true; cppName="VkPipelineCreationFeedbackFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPipelineCreationFeedbackFlagBits>::type>::type;
  addI("VALID_BIT", int64_t(VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT), das::LineInfo());
  addI("APPLICATION_PIPELINE_CACHE_HIT_BIT", int64_t(VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT), das::LineInfo());
  addI("BASE_PIPELINE_ACCELERATION_BIT", int64_t(VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT), das::LineInfo());
#if defined(VK_EXT_pipeline_creation_feedback)
  addI("VALID_BIT_EXT", int64_t(VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT), das::LineInfo());
  addI("APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT", int64_t(VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT), das::LineInfo());
  addI("BASE_PIPELINE_ACCELERATION_BIT_EXT", int64_t(VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_creation_feedback) */
} };
class EnumerationVkPipelineStageFlagBits2:public das::Enumeration{public:
EnumerationVkPipelineStageFlagBits2():das::Enumeration("VkPipelineStageFlagBits2") {
  external=true; cppName="VkPipelineStageFlagBits2";
  baseType=das::tUInt64;
  addI("NONE", int64_t(VK_PIPELINE_STAGE_2_NONE), das::LineInfo());
  addI("TOP_OF_PIPE_BIT", int64_t(VK_PIPELINE_STAGE_2_TOP_OF_PIPE_BIT), das::LineInfo());
  addI("DRAW_INDIRECT_BIT", int64_t(VK_PIPELINE_STAGE_2_DRAW_INDIRECT_BIT), das::LineInfo());
  addI("VERTEX_INPUT_BIT", int64_t(VK_PIPELINE_STAGE_2_VERTEX_INPUT_BIT), das::LineInfo());
  addI("VERTEX_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_2_VERTEX_SHADER_BIT), das::LineInfo());
  addI("TESSELLATION_CONTROL_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_2_TESSELLATION_CONTROL_SHADER_BIT), das::LineInfo());
  addI("TESSELLATION_EVALUATION_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_2_TESSELLATION_EVALUATION_SHADER_BIT), das::LineInfo());
  addI("GEOMETRY_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_2_GEOMETRY_SHADER_BIT), das::LineInfo());
  addI("FRAGMENT_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_2_FRAGMENT_SHADER_BIT), das::LineInfo());
  addI("EARLY_FRAGMENT_TESTS_BIT", int64_t(VK_PIPELINE_STAGE_2_EARLY_FRAGMENT_TESTS_BIT), das::LineInfo());
  addI("LATE_FRAGMENT_TESTS_BIT", int64_t(VK_PIPELINE_STAGE_2_LATE_FRAGMENT_TESTS_BIT), das::LineInfo());
  addI("COLOR_ATTACHMENT_OUTPUT_BIT", int64_t(VK_PIPELINE_STAGE_2_COLOR_ATTACHMENT_OUTPUT_BIT), das::LineInfo());
  addI("COMPUTE_SHADER_BIT", int64_t(VK_PIPELINE_STAGE_2_COMPUTE_SHADER_BIT), das::LineInfo());
  addI("ALL_TRANSFER_BIT", int64_t(VK_PIPELINE_STAGE_2_ALL_TRANSFER_BIT), das::LineInfo());
  addI("TRANSFER_BIT", int64_t(VK_PIPELINE_STAGE_2_TRANSFER_BIT), das::LineInfo());
  addI("BOTTOM_OF_PIPE_BIT", int64_t(VK_PIPELINE_STAGE_2_BOTTOM_OF_PIPE_BIT), das::LineInfo());
  addI("HOST_BIT", int64_t(VK_PIPELINE_STAGE_2_HOST_BIT), das::LineInfo());
  addI("ALL_GRAPHICS_BIT", int64_t(VK_PIPELINE_STAGE_2_ALL_GRAPHICS_BIT), das::LineInfo());
  addI("ALL_COMMANDS_BIT", int64_t(VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT), das::LineInfo());
  addI("COPY_BIT", int64_t(VK_PIPELINE_STAGE_2_COPY_BIT), das::LineInfo());
  addI("RESOLVE_BIT", int64_t(VK_PIPELINE_STAGE_2_RESOLVE_BIT), das::LineInfo());
  addI("BLIT_BIT", int64_t(VK_PIPELINE_STAGE_2_BLIT_BIT), das::LineInfo());
  addI("CLEAR_BIT", int64_t(VK_PIPELINE_STAGE_2_CLEAR_BIT), das::LineInfo());
  addI("INDEX_INPUT_BIT", int64_t(VK_PIPELINE_STAGE_2_INDEX_INPUT_BIT), das::LineInfo());
  addI("VERTEX_ATTRIBUTE_INPUT_BIT", int64_t(VK_PIPELINE_STAGE_2_VERTEX_ATTRIBUTE_INPUT_BIT), das::LineInfo());
  addI("PRE_RASTERIZATION_SHADERS_BIT", int64_t(VK_PIPELINE_STAGE_2_PRE_RASTERIZATION_SHADERS_BIT), das::LineInfo());
#if defined(VK_EXT_opacity_micromap)
  addI("MICROMAP_BUILD_BIT_EXT", int64_t(VK_PIPELINE_STAGE_2_MICROMAP_BUILD_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_HUAWEI_cluster_culling_shader)
  addI("CLUSTER_CULLING_SHADER_BIT_HUAWEI", int64_t(VK_PIPELINE_STAGE_2_CLUSTER_CULLING_SHADER_BIT_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_cluster_culling_shader) */
#if defined(VK_HUAWEI_invocation_mask)
  addI("INVOCATION_MASK_BIT_HUAWEI", int64_t(VK_PIPELINE_STAGE_2_INVOCATION_MASK_BIT_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_invocation_mask) */
#if defined(VK_HUAWEI_subpass_shading)
  addI("SUBPASS_SHADER_BIT_HUAWEI", int64_t(VK_PIPELINE_STAGE_2_SUBPASS_SHADER_BIT_HUAWEI), das::LineInfo());
  addI("SUBPASS_SHADING_BIT_HUAWEI", int64_t(VK_PIPELINE_STAGE_2_SUBPASS_SHADING_BIT_HUAWEI), das::LineInfo());
#endif /* defined(VK_HUAWEI_subpass_shading) */
#if defined(VK_KHR_ray_tracing_maintenance1) && (defined(VK_KHR_synchronization2) || defined(VK_VERSION_1_3))
  addI("ACCELERATION_STRUCTURE_COPY_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_COPY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_maintenance1) && (defined(VK_KHR_synchronization2) || defined(VK_VERSION_1_3)) */
#if defined(VK_KHR_synchronization2)
  addI("NONE_KHR", int64_t(VK_PIPELINE_STAGE_2_NONE_KHR), das::LineInfo());
  addI("TOP_OF_PIPE_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_TOP_OF_PIPE_BIT_KHR), das::LineInfo());
  addI("DRAW_INDIRECT_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_DRAW_INDIRECT_BIT_KHR), das::LineInfo());
  addI("VERTEX_INPUT_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_VERTEX_INPUT_BIT_KHR), das::LineInfo());
  addI("VERTEX_SHADER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_VERTEX_SHADER_BIT_KHR), das::LineInfo());
  addI("TESSELLATION_CONTROL_SHADER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_TESSELLATION_CONTROL_SHADER_BIT_KHR), das::LineInfo());
  addI("TESSELLATION_EVALUATION_SHADER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_TESSELLATION_EVALUATION_SHADER_BIT_KHR), das::LineInfo());
  addI("GEOMETRY_SHADER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_GEOMETRY_SHADER_BIT_KHR), das::LineInfo());
  addI("FRAGMENT_SHADER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_FRAGMENT_SHADER_BIT_KHR), das::LineInfo());
  addI("EARLY_FRAGMENT_TESTS_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_EARLY_FRAGMENT_TESTS_BIT_KHR), das::LineInfo());
  addI("LATE_FRAGMENT_TESTS_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_LATE_FRAGMENT_TESTS_BIT_KHR), das::LineInfo());
  addI("COLOR_ATTACHMENT_OUTPUT_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_COLOR_ATTACHMENT_OUTPUT_BIT_KHR), das::LineInfo());
  addI("COMPUTE_SHADER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_COMPUTE_SHADER_BIT_KHR), das::LineInfo());
  addI("ALL_TRANSFER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_ALL_TRANSFER_BIT_KHR), das::LineInfo());
  addI("TRANSFER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_TRANSFER_BIT_KHR), das::LineInfo());
  addI("BOTTOM_OF_PIPE_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_BOTTOM_OF_PIPE_BIT_KHR), das::LineInfo());
  addI("HOST_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_HOST_BIT_KHR), das::LineInfo());
  addI("ALL_GRAPHICS_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_ALL_GRAPHICS_BIT_KHR), das::LineInfo());
  addI("ALL_COMMANDS_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT_KHR), das::LineInfo());
  addI("COPY_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_COPY_BIT_KHR), das::LineInfo());
  addI("RESOLVE_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_RESOLVE_BIT_KHR), das::LineInfo());
  addI("BLIT_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_BLIT_BIT_KHR), das::LineInfo());
  addI("CLEAR_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_CLEAR_BIT_KHR), das::LineInfo());
  addI("INDEX_INPUT_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_INDEX_INPUT_BIT_KHR), das::LineInfo());
  addI("VERTEX_ATTRIBUTE_INPUT_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_VERTEX_ATTRIBUTE_INPUT_BIT_KHR), das::LineInfo());
  addI("PRE_RASTERIZATION_SHADERS_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_PRE_RASTERIZATION_SHADERS_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_transform_feedback)
  addI("TRANSFORM_FEEDBACK_BIT_EXT", int64_t(VK_PIPELINE_STAGE_2_TRANSFORM_FEEDBACK_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_transform_feedback) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_conditional_rendering)
  addI("CONDITIONAL_RENDERING_BIT_EXT", int64_t(VK_PIPELINE_STAGE_2_CONDITIONAL_RENDERING_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_conditional_rendering) */
#if defined(VK_KHR_synchronization2) && defined(VK_NV_device_generated_commands)
  addI("COMMAND_PREPROCESS_BIT_NV", int64_t(VK_PIPELINE_STAGE_2_COMMAND_PREPROCESS_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_NV_device_generated_commands) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_device_generated_commands)
  addI("COMMAND_PREPROCESS_BIT_EXT", int64_t(VK_PIPELINE_STAGE_2_COMMAND_PREPROCESS_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_device_generated_commands) */
#if defined(VK_KHR_synchronization2) && defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_synchronization2) && defined(VK_NV_shading_rate_image)
  addI("SHADING_RATE_IMAGE_BIT_NV", int64_t(VK_PIPELINE_STAGE_2_SHADING_RATE_IMAGE_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_NV_shading_rate_image) */
#if defined(VK_KHR_synchronization2) && defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_BUILD_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_synchronization2) && defined(VK_KHR_ray_tracing_pipeline)
  addI("RAY_TRACING_SHADER_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_synchronization2) && defined(VK_NV_ray_tracing)
  addI("RAY_TRACING_SHADER_BIT_NV", int64_t(VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_NV), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_BUILD_BIT_NV", int64_t(VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_NV_ray_tracing) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_fragment_density_map)
  addI("FRAGMENT_DENSITY_PROCESS_BIT_EXT", int64_t(VK_PIPELINE_STAGE_2_FRAGMENT_DENSITY_PROCESS_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_fragment_density_map) */
#if defined(VK_KHR_synchronization2) && defined(VK_NV_mesh_shader)
  addI("TASK_SHADER_BIT_NV", int64_t(VK_PIPELINE_STAGE_2_TASK_SHADER_BIT_NV), das::LineInfo());
  addI("MESH_SHADER_BIT_NV", int64_t(VK_PIPELINE_STAGE_2_MESH_SHADER_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_NV_mesh_shader) */
#if defined(VK_KHR_synchronization2) && defined(VK_EXT_mesh_shader)
  addI("TASK_SHADER_BIT_EXT", int64_t(VK_PIPELINE_STAGE_2_TASK_SHADER_BIT_EXT), das::LineInfo());
  addI("MESH_SHADER_BIT_EXT", int64_t(VK_PIPELINE_STAGE_2_MESH_SHADER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) && defined(VK_EXT_mesh_shader) */
#if defined(VK_KHR_video_decode_queue)
  addI("VIDEO_DECODE_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_VIDEO_DECODE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_BIT_KHR", int64_t(VK_PIPELINE_STAGE_2_VIDEO_ENCODE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_NV_optical_flow)
  addI("OPTICAL_FLOW_BIT_NV", int64_t(VK_PIPELINE_STAGE_2_OPTICAL_FLOW_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_optical_flow) */
} };
class EnumerationVkRenderingFlagBits:public das::Enumeration{public:
EnumerationVkRenderingFlagBits():das::Enumeration("VkRenderingFlagBits") {
  external=true; cppName="VkRenderingFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkRenderingFlagBits>::type>::type;
  addI("CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT", int64_t(VK_RENDERING_CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT), das::LineInfo());
  addI("SUSPENDING_BIT", int64_t(VK_RENDERING_SUSPENDING_BIT), das::LineInfo());
  addI("RESUMING_BIT", int64_t(VK_RENDERING_RESUMING_BIT), das::LineInfo());
#if defined(VK_EXT_legacy_dithering) && ((defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3)) && (defined(VK_KHR_maintenance5) || defined(VK_VERSION_1_4)))
  addI("ENABLE_LEGACY_DITHERING_BIT_EXT", int64_t(VK_RENDERING_ENABLE_LEGACY_DITHERING_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_legacy_dithering) && ((defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3)) && (defined(VK_KHR_maintenance5) || defined(VK_VERSION_1_4))) */
#if defined(VK_EXT_nested_command_buffer)
  addI("CONTENTS_INLINE_BIT_EXT", int64_t(VK_RENDERING_CONTENTS_INLINE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_nested_command_buffer) */
#if defined(VK_KHR_dynamic_rendering)
  addI("CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT_KHR", int64_t(VK_RENDERING_CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT_KHR), das::LineInfo());
  addI("SUSPENDING_BIT_KHR", int64_t(VK_RENDERING_SUSPENDING_BIT_KHR), das::LineInfo());
  addI("RESUMING_BIT_KHR", int64_t(VK_RENDERING_RESUMING_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_dynamic_rendering) */
#if defined(VK_KHR_maintenance7)
  addI("CONTENTS_INLINE_BIT_KHR", int64_t(VK_RENDERING_CONTENTS_INLINE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance7) */
} };
class EnumerationVkSubmitFlagBits:public das::Enumeration{public:
EnumerationVkSubmitFlagBits():das::Enumeration("VkSubmitFlagBits") {
  external=true; cppName="VkSubmitFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSubmitFlagBits>::type>::type;
  addI("_PROTECTED_BIT", int64_t(VK_SUBMIT_PROTECTED_BIT), das::LineInfo());
#if defined(VK_KHR_synchronization2)
  addI("_PROTECTED_BIT_KHR", int64_t(VK_SUBMIT_PROTECTED_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_synchronization2) */
} };
class EnumerationVkToolPurposeFlagBits:public das::Enumeration{public:
EnumerationVkToolPurposeFlagBits():das::Enumeration("VkToolPurposeFlagBits") {
  external=true; cppName="VkToolPurposeFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkToolPurposeFlagBits>::type>::type;
  addI("VALIDATION_BIT", int64_t(VK_TOOL_PURPOSE_VALIDATION_BIT), das::LineInfo());
  addI("PROFILING_BIT", int64_t(VK_TOOL_PURPOSE_PROFILING_BIT), das::LineInfo());
  addI("TRACING_BIT", int64_t(VK_TOOL_PURPOSE_TRACING_BIT), das::LineInfo());
  addI("ADDITIONAL_FEATURES_BIT", int64_t(VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT), das::LineInfo());
  addI("MODIFYING_FEATURES_BIT", int64_t(VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT), das::LineInfo());
#if defined(VK_EXT_tooling_info)
  addI("VALIDATION_BIT_EXT", int64_t(VK_TOOL_PURPOSE_VALIDATION_BIT_EXT), das::LineInfo());
  addI("PROFILING_BIT_EXT", int64_t(VK_TOOL_PURPOSE_PROFILING_BIT_EXT), das::LineInfo());
  addI("TRACING_BIT_EXT", int64_t(VK_TOOL_PURPOSE_TRACING_BIT_EXT), das::LineInfo());
  addI("ADDITIONAL_FEATURES_BIT_EXT", int64_t(VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT_EXT), das::LineInfo());
  addI("MODIFYING_FEATURES_BIT_EXT", int64_t(VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_tooling_info) */
#if (defined(VK_EXT_tooling_info) && defined(VK_EXT_debug_report)) || (defined(VK_EXT_tooling_info) && defined(VK_EXT_debug_utils))
  addI("DEBUG_REPORTING_BIT_EXT", int64_t(VK_TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT), das::LineInfo());
#endif /* (defined(VK_EXT_tooling_info) && defined(VK_EXT_debug_report)) || (defined(VK_EXT_tooling_info) && defined(VK_EXT_debug_utils)) */
#if (defined(VK_EXT_tooling_info) && defined(VK_EXT_debug_marker)) || (defined(VK_EXT_tooling_info) && defined(VK_EXT_debug_utils))
  addI("DEBUG_MARKERS_BIT_EXT", int64_t(VK_TOOL_PURPOSE_DEBUG_MARKERS_BIT_EXT), das::LineInfo());
#endif /* (defined(VK_EXT_tooling_info) && defined(VK_EXT_debug_marker)) || (defined(VK_EXT_tooling_info) && defined(VK_EXT_debug_utils)) */
} };
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
class EnumerationVkBufferUsageFlagBits2:public das::Enumeration{public:
EnumerationVkBufferUsageFlagBits2():das::Enumeration("VkBufferUsageFlagBits2") {
  external=true; cppName="VkBufferUsageFlagBits2";
  baseType=das::tUInt64;
  addI("TRANSFER_SRC_BIT", int64_t(VK_BUFFER_USAGE_2_TRANSFER_SRC_BIT), das::LineInfo());
  addI("TRANSFER_DST_BIT", int64_t(VK_BUFFER_USAGE_2_TRANSFER_DST_BIT), das::LineInfo());
  addI("UNIFORM_TEXEL_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_2_UNIFORM_TEXEL_BUFFER_BIT), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_2_STORAGE_TEXEL_BUFFER_BIT), das::LineInfo());
  addI("UNIFORM_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_2_UNIFORM_BUFFER_BIT), das::LineInfo());
  addI("STORAGE_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_2_STORAGE_BUFFER_BIT), das::LineInfo());
  addI("INDEX_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_2_INDEX_BUFFER_BIT), das::LineInfo());
  addI("VERTEX_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_2_VERTEX_BUFFER_BIT), das::LineInfo());
  addI("INDIRECT_BUFFER_BIT", int64_t(VK_BUFFER_USAGE_2_INDIRECT_BUFFER_BIT), das::LineInfo());
#if defined(VK_VERSION_1_4)
  addI("SHADER_DEVICE_ADDRESS_BIT", int64_t(VK_BUFFER_USAGE_2_SHADER_DEVICE_ADDRESS_BIT), das::LineInfo());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_AMDX_shader_enqueue) && (defined(VK_KHR_maintenance5) || defined(VK_VERSION_1_4))
  addI("EXECUTION_GRAPH_SCRATCH_BIT_AMDX", int64_t(VK_BUFFER_USAGE_2_EXECUTION_GRAPH_SCRATCH_BIT_AMDX), das::LineInfo());
#endif /* defined(VK_AMDX_shader_enqueue) && (defined(VK_KHR_maintenance5) || defined(VK_VERSION_1_4)) */
#if defined(VK_EXT_device_generated_commands)
  addI("PREPROCESS_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_2_PREPROCESS_BUFFER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_KHR_maintenance5)
  addI("TRANSFER_SRC_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_TRANSFER_SRC_BIT_KHR), das::LineInfo());
  addI("TRANSFER_DST_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_TRANSFER_DST_BIT_KHR), das::LineInfo());
  addI("UNIFORM_TEXEL_BUFFER_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_UNIFORM_TEXEL_BUFFER_BIT_KHR), das::LineInfo());
  addI("STORAGE_TEXEL_BUFFER_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_STORAGE_TEXEL_BUFFER_BIT_KHR), das::LineInfo());
  addI("UNIFORM_BUFFER_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_UNIFORM_BUFFER_BIT_KHR), das::LineInfo());
  addI("STORAGE_BUFFER_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_STORAGE_BUFFER_BIT_KHR), das::LineInfo());
  addI("INDEX_BUFFER_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_INDEX_BUFFER_BIT_KHR), das::LineInfo());
  addI("VERTEX_BUFFER_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_VERTEX_BUFFER_BIT_KHR), das::LineInfo());
  addI("INDIRECT_BUFFER_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_INDIRECT_BUFFER_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) */
#if defined(VK_KHR_maintenance5) && defined(VK_NV_ray_tracing)
  addI("RAY_TRACING_BIT_NV", int64_t(VK_BUFFER_USAGE_2_RAY_TRACING_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_NV_ray_tracing) */
#if defined(VK_KHR_maintenance5) && defined(VK_KHR_ray_tracing_pipeline)
  addI("SHADER_BINDING_TABLE_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_SHADER_BINDING_TABLE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_maintenance5) && defined(VK_EXT_opacity_micromap)
  addI("MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT", int64_t(VK_BUFFER_USAGE_2_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT), das::LineInfo());
  addI("MICROMAP_STORAGE_BIT_EXT", int64_t(VK_BUFFER_USAGE_2_MICROMAP_STORAGE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_EXT_opacity_micromap) */
#if defined(VK_KHR_maintenance5) && defined(VK_EXT_descriptor_buffer)
  addI("SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_2_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT), das::LineInfo());
  addI("RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_2_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT), das::LineInfo());
  addI("PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_2_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_EXT_descriptor_buffer) */
#if defined(VK_KHR_maintenance5) && defined(VK_EXT_conditional_rendering)
  addI("CONDITIONAL_RENDERING_BIT_EXT", int64_t(VK_BUFFER_USAGE_2_CONDITIONAL_RENDERING_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_EXT_conditional_rendering) */
#if defined(VK_KHR_maintenance5) && defined(VK_EXT_transform_feedback)
  addI("TRANSFORM_FEEDBACK_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_2_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT), das::LineInfo());
  addI("TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT", int64_t(VK_BUFFER_USAGE_2_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_EXT_transform_feedback) */
#if defined(VK_KHR_maintenance5) && defined(VK_KHR_video_decode_queue)
  addI("VIDEO_DECODE_SRC_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_VIDEO_DECODE_SRC_BIT_KHR), das::LineInfo());
  addI("VIDEO_DECODE_DST_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_VIDEO_DECODE_DST_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_maintenance5) && defined(VK_KHR_video_encode_queue)
  addI("VIDEO_ENCODE_DST_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_VIDEO_ENCODE_DST_BIT_KHR), das::LineInfo());
  addI("VIDEO_ENCODE_SRC_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_VIDEO_ENCODE_SRC_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_maintenance5) && (defined(VK_VERSION_1_2) || defined(VK_KHR_buffer_device_address) || defined(VK_EXT_buffer_device_address))
  addI("SHADER_DEVICE_ADDRESS_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_SHADER_DEVICE_ADDRESS_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && (defined(VK_VERSION_1_2) || defined(VK_KHR_buffer_device_address) || defined(VK_EXT_buffer_device_address)) */
#if defined(VK_KHR_maintenance5) && defined(VK_KHR_acceleration_structure)
  addI("ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR), das::LineInfo());
  addI("ACCELERATION_STRUCTURE_STORAGE_BIT_KHR", int64_t(VK_BUFFER_USAGE_2_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_KHR_acceleration_structure) */
} };
class EnumerationVkHostImageCopyFlagBits:public das::Enumeration{public:
EnumerationVkHostImageCopyFlagBits():das::Enumeration("VkHostImageCopyFlagBits") {
  external=true; cppName="VkHostImageCopyFlagBits";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkHostImageCopyFlagBits>::type>::type;
  addI("_MEMCPY", int64_t(VK_HOST_IMAGE_COPY_MEMCPY), das::LineInfo());
#if defined(VK_EXT_host_image_copy)
  addI("_MEMCPY_EXT", int64_t(VK_HOST_IMAGE_COPY_MEMCPY_EXT), das::LineInfo());
#endif /* defined(VK_EXT_host_image_copy) */
} };
class EnumerationVkLineRasterizationMode:public das::Enumeration{public:
EnumerationVkLineRasterizationMode():das::Enumeration("VkLineRasterizationMode") {
  external=true; cppName="VkLineRasterizationMode";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkLineRasterizationMode>::type>::type;
  addI("DEFAULT", int64_t(VK_LINE_RASTERIZATION_MODE_DEFAULT), das::LineInfo());
  addI("RECTANGULAR", int64_t(VK_LINE_RASTERIZATION_MODE_RECTANGULAR), das::LineInfo());
  addI("BRESENHAM", int64_t(VK_LINE_RASTERIZATION_MODE_BRESENHAM), das::LineInfo());
  addI("RECTANGULAR_SMOOTH", int64_t(VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH), das::LineInfo());
#if defined(VK_EXT_line_rasterization)
  addI("DEFAULT_EXT", int64_t(VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT), das::LineInfo());
  addI("RECTANGULAR_EXT", int64_t(VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT), das::LineInfo());
  addI("BRESENHAM_EXT", int64_t(VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT), das::LineInfo());
  addI("RECTANGULAR_SMOOTH_EXT", int64_t(VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT), das::LineInfo());
#endif /* defined(VK_EXT_line_rasterization) */
#if defined(VK_KHR_line_rasterization)
  addI("DEFAULT_KHR", int64_t(VK_LINE_RASTERIZATION_MODE_DEFAULT_KHR), das::LineInfo());
  addI("RECTANGULAR_KHR", int64_t(VK_LINE_RASTERIZATION_MODE_RECTANGULAR_KHR), das::LineInfo());
  addI("BRESENHAM_KHR", int64_t(VK_LINE_RASTERIZATION_MODE_BRESENHAM_KHR), das::LineInfo());
  addI("RECTANGULAR_SMOOTH_KHR", int64_t(VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_KHR), das::LineInfo());
#endif /* defined(VK_KHR_line_rasterization) */
} };
class EnumerationVkPipelineCreateFlagBits2:public das::Enumeration{public:
EnumerationVkPipelineCreateFlagBits2():das::Enumeration("VkPipelineCreateFlagBits2") {
  external=true; cppName="VkPipelineCreateFlagBits2";
  baseType=das::tUInt64;
  addI("DISABLE_OPTIMIZATION_BIT", int64_t(VK_PIPELINE_CREATE_2_DISABLE_OPTIMIZATION_BIT), das::LineInfo());
  addI("ALLOW_DERIVATIVES_BIT", int64_t(VK_PIPELINE_CREATE_2_ALLOW_DERIVATIVES_BIT), das::LineInfo());
  addI("DERIVATIVE_BIT", int64_t(VK_PIPELINE_CREATE_2_DERIVATIVE_BIT), das::LineInfo());
  addI("VIEW_INDEX_FROM_DEVICE_INDEX_BIT", int64_t(VK_PIPELINE_CREATE_2_VIEW_INDEX_FROM_DEVICE_INDEX_BIT), das::LineInfo());
  addI("DISPATCH_BASE_BIT", int64_t(VK_PIPELINE_CREATE_2_DISPATCH_BASE_BIT), das::LineInfo());
  addI("FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT", int64_t(VK_PIPELINE_CREATE_2_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT), das::LineInfo());
  addI("EARLY_RETURN_ON_FAILURE_BIT", int64_t(VK_PIPELINE_CREATE_2_EARLY_RETURN_ON_FAILURE_BIT), das::LineInfo());
  addI("NO_PROTECTED_ACCESS_BIT", int64_t(VK_PIPELINE_CREATE_2_NO_PROTECTED_ACCESS_BIT), das::LineInfo());
  addI("PROTECTED_ACCESS_ONLY_BIT", int64_t(VK_PIPELINE_CREATE_2_PROTECTED_ACCESS_ONLY_BIT), das::LineInfo());
#if defined(VK_AMDX_shader_enqueue) && (defined(VK_KHR_maintenance5) || defined(VK_VERSION_1_4))
  addI("EXECUTION_GRAPH_BIT_AMDX", int64_t(VK_PIPELINE_CREATE_2_EXECUTION_GRAPH_BIT_AMDX), das::LineInfo());
#endif /* defined(VK_AMDX_shader_enqueue) && (defined(VK_KHR_maintenance5) || defined(VK_VERSION_1_4)) */
#if defined(VK_EXT_device_generated_commands)
  addI("INDIRECT_BINDABLE_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_INDIRECT_BINDABLE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_legacy_dithering) && ((defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3)) && (defined(VK_KHR_maintenance5) || defined(VK_VERSION_1_4)))
  addI("ENABLE_LEGACY_DITHERING_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_ENABLE_LEGACY_DITHERING_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_legacy_dithering) && ((defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3)) && (defined(VK_KHR_maintenance5) || defined(VK_VERSION_1_4))) */
#if defined(VK_KHR_maintenance5)
  addI("DISABLE_OPTIMIZATION_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_DISABLE_OPTIMIZATION_BIT_KHR), das::LineInfo());
  addI("ALLOW_DERIVATIVES_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_ALLOW_DERIVATIVES_BIT_KHR), das::LineInfo());
  addI("DERIVATIVE_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_DERIVATIVE_BIT_KHR), das::LineInfo());
  addI("VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR), das::LineInfo());
  addI("DISPATCH_BASE_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_DISPATCH_BASE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) */
#if defined(VK_KHR_maintenance5) && defined(VK_NV_ray_tracing)
  addI("DEFER_COMPILE_BIT_NV", int64_t(VK_PIPELINE_CREATE_2_DEFER_COMPILE_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_NV_ray_tracing) */
#if defined(VK_KHR_maintenance5) && defined(VK_KHR_pipeline_executable_properties)
  addI("CAPTURE_STATISTICS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_CAPTURE_STATISTICS_BIT_KHR), das::LineInfo());
  addI("CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_KHR_maintenance5) && (defined(VK_VERSION_1_3) || defined(VK_EXT_pipeline_creation_cache_control))
  addI("FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_KHR), das::LineInfo());
  addI("EARLY_RETURN_ON_FAILURE_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_EARLY_RETURN_ON_FAILURE_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && (defined(VK_VERSION_1_3) || defined(VK_EXT_pipeline_creation_cache_control)) */
#if defined(VK_KHR_maintenance5) && defined(VK_EXT_graphics_pipeline_library)
  addI("LINK_TIME_OPTIMIZATION_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_LINK_TIME_OPTIMIZATION_BIT_EXT), das::LineInfo());
  addI("RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_EXT_graphics_pipeline_library) */
#if defined(VK_KHR_maintenance5) && defined(VK_KHR_pipeline_library)
  addI("LIBRARY_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_LIBRARY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_KHR_pipeline_library) */
#if defined(VK_KHR_maintenance5) && defined(VK_KHR_ray_tracing_pipeline)
  addI("RAY_TRACING_SKIP_TRIANGLES_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR), das::LineInfo());
  addI("RAY_TRACING_SKIP_AABBS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_SKIP_AABBS_BIT_KHR), das::LineInfo());
  addI("RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR), das::LineInfo());
  addI("RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR), das::LineInfo());
  addI("RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR), das::LineInfo());
  addI("RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR), das::LineInfo());
  addI("RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_maintenance5) && defined(VK_NV_device_generated_commands)
  addI("INDIRECT_BINDABLE_BIT_NV", int64_t(VK_PIPELINE_CREATE_2_INDIRECT_BINDABLE_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_NV_device_generated_commands) */
#if defined(VK_KHR_maintenance5) && defined(VK_NV_ray_tracing_motion_blur)
  addI("RAY_TRACING_ALLOW_MOTION_BIT_NV", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_ALLOW_MOTION_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_KHR_maintenance5) && ((defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3)) && defined(VK_KHR_fragment_shading_rate))
  addI("RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && ((defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3)) && defined(VK_KHR_fragment_shading_rate)) */
#if defined(VK_KHR_maintenance5) && ((defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3)) && defined(VK_EXT_fragment_density_map))
  addI("RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && ((defined(VK_KHR_dynamic_rendering) || defined(VK_VERSION_1_3)) && defined(VK_EXT_fragment_density_map)) */
#if defined(VK_KHR_maintenance5) && defined(VK_EXT_opacity_micromap)
  addI("RAY_TRACING_OPACITY_MICROMAP_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_EXT_opacity_micromap) */
#if defined(VK_KHR_maintenance5) && defined(VK_EXT_attachment_feedback_loop_layout)
  addI("COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT), das::LineInfo());
  addI("DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_EXT_attachment_feedback_loop_layout) */
#if defined(VK_KHR_maintenance5) && (defined(VK_VERSION_1_4) || defined(VK_EXT_pipeline_protected_access))
  addI("NO_PROTECTED_ACCESS_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_NO_PROTECTED_ACCESS_BIT_EXT), das::LineInfo());
  addI("PROTECTED_ACCESS_ONLY_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_PROTECTED_ACCESS_ONLY_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && (defined(VK_VERSION_1_4) || defined(VK_EXT_pipeline_protected_access)) */
#if defined(VK_KHR_maintenance5) && defined(VK_NV_displacement_micromap)
  addI("RAY_TRACING_DISPLACEMENT_MICROMAP_BIT_NV", int64_t(VK_PIPELINE_CREATE_2_RAY_TRACING_DISPLACEMENT_MICROMAP_BIT_NV), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_NV_displacement_micromap) */
#if defined(VK_KHR_maintenance5) && defined(VK_EXT_descriptor_buffer)
  addI("DESCRIPTOR_BUFFER_BIT_EXT", int64_t(VK_PIPELINE_CREATE_2_DESCRIPTOR_BUFFER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_KHR_maintenance5) && defined(VK_EXT_descriptor_buffer) */
#if defined(VK_KHR_pipeline_binary)
  addI("CAPTURE_DATA_BIT_KHR", int64_t(VK_PIPELINE_CREATE_2_CAPTURE_DATA_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_pipeline_binary) */
} };
class EnumerationVkPipelineRobustnessBufferBehavior:public das::Enumeration{public:
EnumerationVkPipelineRobustnessBufferBehavior():das::Enumeration("VkPipelineRobustnessBufferBehavior") {
  external=true; cppName="VkPipelineRobustnessBufferBehavior";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPipelineRobustnessBufferBehavior>::type>::type;
  addI("DEVICE_DEFAULT", int64_t(VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DEVICE_DEFAULT), das::LineInfo());
  addI("DISABLED", int64_t(VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DISABLED), das::LineInfo());
  addI("ROBUST_BUFFER_ACCESS", int64_t(VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS), das::LineInfo());
  addI("ROBUST_BUFFER_ACCESS_2", int64_t(VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_2), das::LineInfo());
#if defined(VK_EXT_pipeline_robustness)
  addI("DEVICE_DEFAULT_EXT", int64_t(VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DEVICE_DEFAULT_EXT), das::LineInfo());
  addI("DISABLED_EXT", int64_t(VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DISABLED_EXT), das::LineInfo());
  addI("ROBUST_BUFFER_ACCESS_EXT", int64_t(VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_EXT), das::LineInfo());
  addI("ROBUST_BUFFER_ACCESS_2_EXT", int64_t(VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_2_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_robustness) */
} };
class EnumerationVkPipelineRobustnessImageBehavior:public das::Enumeration{public:
EnumerationVkPipelineRobustnessImageBehavior():das::Enumeration("VkPipelineRobustnessImageBehavior") {
  external=true; cppName="VkPipelineRobustnessImageBehavior";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPipelineRobustnessImageBehavior>::type>::type;
  addI("DEVICE_DEFAULT", int64_t(VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DEVICE_DEFAULT), das::LineInfo());
  addI("DISABLED", int64_t(VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DISABLED), das::LineInfo());
  addI("ROBUST_IMAGE_ACCESS", int64_t(VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS), das::LineInfo());
  addI("ROBUST_IMAGE_ACCESS_2", int64_t(VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_2), das::LineInfo());
#if defined(VK_EXT_pipeline_robustness)
  addI("DEVICE_DEFAULT_EXT", int64_t(VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DEVICE_DEFAULT_EXT), das::LineInfo());
  addI("DISABLED_EXT", int64_t(VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DISABLED_EXT), das::LineInfo());
  addI("ROBUST_IMAGE_ACCESS_EXT", int64_t(VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_EXT), das::LineInfo());
  addI("ROBUST_IMAGE_ACCESS_2_EXT", int64_t(VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_2_EXT), das::LineInfo());
#endif /* defined(VK_EXT_pipeline_robustness) */
} };
class EnumerationVkQueueGlobalPriority:public das::Enumeration{public:
EnumerationVkQueueGlobalPriority():das::Enumeration("VkQueueGlobalPriority") {
  external=true; cppName="VkQueueGlobalPriority";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkQueueGlobalPriority>::type>::type;
  addI("LOW", int64_t(VK_QUEUE_GLOBAL_PRIORITY_LOW), das::LineInfo());
  addI("MEDIUM", int64_t(VK_QUEUE_GLOBAL_PRIORITY_MEDIUM), das::LineInfo());
  addI("HIGH", int64_t(VK_QUEUE_GLOBAL_PRIORITY_HIGH), das::LineInfo());
  addI("REALTIME", int64_t(VK_QUEUE_GLOBAL_PRIORITY_REALTIME), das::LineInfo());
#if defined(VK_EXT_global_priority)
  addI("LOW_EXT", int64_t(VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT), das::LineInfo());
  addI("MEDIUM_EXT", int64_t(VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT), das::LineInfo());
  addI("HIGH_EXT", int64_t(VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT), das::LineInfo());
  addI("REALTIME_EXT", int64_t(VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT), das::LineInfo());
#endif /* defined(VK_EXT_global_priority) */
#if defined(VK_KHR_global_priority)
  addI("LOW_KHR", int64_t(VK_QUEUE_GLOBAL_PRIORITY_LOW_KHR), das::LineInfo());
  addI("MEDIUM_KHR", int64_t(VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_KHR), das::LineInfo());
  addI("HIGH_KHR", int64_t(VK_QUEUE_GLOBAL_PRIORITY_HIGH_KHR), das::LineInfo());
  addI("REALTIME_KHR", int64_t(VK_QUEUE_GLOBAL_PRIORITY_REALTIME_KHR), das::LineInfo());
#endif /* defined(VK_KHR_global_priority) */
} };
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_AMD_anti_lag)
class EnumerationVkAntiLagModeAMD:public das::Enumeration{public:
EnumerationVkAntiLagModeAMD():das::Enumeration("VkAntiLagModeAMD") {
  external=true; cppName="VkAntiLagModeAMD";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAntiLagModeAMD>::type>::type;
  addI("DRIVER_CONTROL_AMD", int64_t(VK_ANTI_LAG_MODE_DRIVER_CONTROL_AMD), das::LineInfo());
  addI("ON_AMD", int64_t(VK_ANTI_LAG_MODE_ON_AMD), das::LineInfo());
  addI("OFF_AMD", int64_t(VK_ANTI_LAG_MODE_OFF_AMD), das::LineInfo());
} };
class EnumerationVkAntiLagStageAMD:public das::Enumeration{public:
EnumerationVkAntiLagStageAMD():das::Enumeration("VkAntiLagStageAMD") {
  external=true; cppName="VkAntiLagStageAMD";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAntiLagStageAMD>::type>::type;
  addI("INPUT_AMD", int64_t(VK_ANTI_LAG_STAGE_INPUT_AMD), das::LineInfo());
  addI("PRESENT_AMD", int64_t(VK_ANTI_LAG_STAGE_PRESENT_AMD), das::LineInfo());
} };
#endif /* defined(VK_AMD_anti_lag) */
#if defined(VK_AMD_memory_overallocation_behavior)
class EnumerationVkMemoryOverallocationBehaviorAMD:public das::Enumeration{public:
EnumerationVkMemoryOverallocationBehaviorAMD():das::Enumeration("VkMemoryOverallocationBehaviorAMD") {
  external=true; cppName="VkMemoryOverallocationBehaviorAMD";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkMemoryOverallocationBehaviorAMD>::type>::type;
  addI("DEFAULT_AMD", int64_t(VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD), das::LineInfo());
  addI("ALLOWED_AMD", int64_t(VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD), das::LineInfo());
  addI("DISALLOWED_AMD", int64_t(VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD), das::LineInfo());
} };
#endif /* defined(VK_AMD_memory_overallocation_behavior) */
#if defined(VK_AMD_rasterization_order)
class EnumerationVkRasterizationOrderAMD:public das::Enumeration{public:
EnumerationVkRasterizationOrderAMD():das::Enumeration("VkRasterizationOrderAMD") {
  external=true; cppName="VkRasterizationOrderAMD";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkRasterizationOrderAMD>::type>::type;
  addI("STRICT_AMD", int64_t(VK_RASTERIZATION_ORDER_STRICT_AMD), das::LineInfo());
  addI("RELAXED_AMD", int64_t(VK_RASTERIZATION_ORDER_RELAXED_AMD), das::LineInfo());
} };
#endif /* defined(VK_AMD_rasterization_order) */
#if defined(VK_AMD_shader_info)
class EnumerationVkShaderInfoTypeAMD:public das::Enumeration{public:
EnumerationVkShaderInfoTypeAMD():das::Enumeration("VkShaderInfoTypeAMD") {
  external=true; cppName="VkShaderInfoTypeAMD";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkShaderInfoTypeAMD>::type>::type;
  addI("STATISTICS_AMD", int64_t(VK_SHADER_INFO_TYPE_STATISTICS_AMD), das::LineInfo());
  addI("BINARY_AMD", int64_t(VK_SHADER_INFO_TYPE_BINARY_AMD), das::LineInfo());
  addI("DISASSEMBLY_AMD", int64_t(VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD), das::LineInfo());
} };
#endif /* defined(VK_AMD_shader_info) */
#if defined(VK_ARM_scheduling_controls)
class EnumerationVkPhysicalDeviceSchedulingControlsFlagBitsARM:public das::Enumeration{public:
EnumerationVkPhysicalDeviceSchedulingControlsFlagBitsARM():das::Enumeration("VkPhysicalDeviceSchedulingControlsFlagBitsARM") {
  external=true; cppName="VkPhysicalDeviceSchedulingControlsFlagBitsARM";
  baseType=das::tUInt64;
  addI("SHADER_CORE_COUNT_ARM", int64_t(VK_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_SHADER_CORE_COUNT_ARM), das::LineInfo());
} };
#endif /* defined(VK_ARM_scheduling_controls) */
#if defined(VK_EXT_blend_operation_advanced)
class EnumerationVkBlendOverlapEXT:public das::Enumeration{public:
EnumerationVkBlendOverlapEXT():das::Enumeration("VkBlendOverlapEXT") {
  external=true; cppName="VkBlendOverlapEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBlendOverlapEXT>::type>::type;
  addI("UNCORRELATED_EXT", int64_t(VK_BLEND_OVERLAP_UNCORRELATED_EXT), das::LineInfo());
  addI("DISJOINT_EXT", int64_t(VK_BLEND_OVERLAP_DISJOINT_EXT), das::LineInfo());
  addI("CONJOINT_EXT", int64_t(VK_BLEND_OVERLAP_CONJOINT_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_EXT_conditional_rendering)
class EnumerationVkConditionalRenderingFlagBitsEXT:public das::Enumeration{public:
EnumerationVkConditionalRenderingFlagBitsEXT():das::Enumeration("VkConditionalRenderingFlagBitsEXT") {
  external=true; cppName="VkConditionalRenderingFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>::type;
  addI("INVERTED_BIT_EXT", int64_t(VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_EXT_conservative_rasterization)
class EnumerationVkConservativeRasterizationModeEXT:public das::Enumeration{public:
EnumerationVkConservativeRasterizationModeEXT():das::Enumeration("VkConservativeRasterizationModeEXT") {
  external=true; cppName="VkConservativeRasterizationModeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkConservativeRasterizationModeEXT>::type>::type;
  addI("DISABLED_EXT", int64_t(VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT), das::LineInfo());
  addI("OVERESTIMATE_EXT", int64_t(VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT), das::LineInfo());
  addI("UNDERESTIMATE_EXT", int64_t(VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_conservative_rasterization) */
#if defined(VK_EXT_debug_report)
class EnumerationVkDebugReportFlagBitsEXT:public das::Enumeration{public:
EnumerationVkDebugReportFlagBitsEXT():das::Enumeration("VkDebugReportFlagBitsEXT") {
  external=true; cppName="VkDebugReportFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDebugReportFlagBitsEXT>::type>::type;
  addI("INFORMATION_BIT_EXT", int64_t(VK_DEBUG_REPORT_INFORMATION_BIT_EXT), das::LineInfo());
  addI("WARNING_BIT_EXT", int64_t(VK_DEBUG_REPORT_WARNING_BIT_EXT), das::LineInfo());
  addI("PERFORMANCE_WARNING_BIT_EXT", int64_t(VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT), das::LineInfo());
  addI("ERROR_BIT_EXT", int64_t(VK_DEBUG_REPORT_ERROR_BIT_EXT), das::LineInfo());
  addI("DEBUG_BIT_EXT", int64_t(VK_DEBUG_REPORT_DEBUG_BIT_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_debug_report) */
#if defined(VK_EXT_debug_utils)
class EnumerationVkDebugUtilsMessageSeverityFlagBitsEXT:public das::Enumeration{public:
EnumerationVkDebugUtilsMessageSeverityFlagBitsEXT():das::Enumeration("VkDebugUtilsMessageSeverityFlagBitsEXT") {
  external=true; cppName="VkDebugUtilsMessageSeverityFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>::type;
  addI("VERBOSE_BIT_EXT", int64_t(VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT), das::LineInfo());
  addI("INFO_BIT_EXT", int64_t(VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT), das::LineInfo());
  addI("WARNING_BIT_EXT", int64_t(VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT), das::LineInfo());
  addI("ERROR_BIT_EXT", int64_t(VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT), das::LineInfo());
} };
class EnumerationVkDebugUtilsMessageTypeFlagBitsEXT:public das::Enumeration{public:
EnumerationVkDebugUtilsMessageTypeFlagBitsEXT():das::Enumeration("VkDebugUtilsMessageTypeFlagBitsEXT") {
  external=true; cppName="VkDebugUtilsMessageTypeFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>::type;
  addI("GENERAL_BIT_EXT", int64_t(VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT), das::LineInfo());
  addI("VALIDATION_BIT_EXT", int64_t(VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT), das::LineInfo());
  addI("PERFORMANCE_BIT_EXT", int64_t(VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT), das::LineInfo());
#if defined(VK_EXT_device_address_binding_report)
  addI("DEVICE_ADDRESS_BINDING_BIT_EXT", int64_t(VK_DEBUG_UTILS_MESSAGE_TYPE_DEVICE_ADDRESS_BINDING_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_address_binding_report) */
} };
#endif /* defined(VK_EXT_debug_utils) */
#if defined(VK_EXT_depth_bias_control)
class EnumerationVkDepthBiasRepresentationEXT:public das::Enumeration{public:
EnumerationVkDepthBiasRepresentationEXT():das::Enumeration("VkDepthBiasRepresentationEXT") {
  external=true; cppName="VkDepthBiasRepresentationEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDepthBiasRepresentationEXT>::type>::type;
  addI("LEAST_REPRESENTABLE_VALUE_FORMAT_EXT", int64_t(VK_DEPTH_BIAS_REPRESENTATION_LEAST_REPRESENTABLE_VALUE_FORMAT_EXT), das::LineInfo());
  addI("LEAST_REPRESENTABLE_VALUE_FORCE_UNORM_EXT", int64_t(VK_DEPTH_BIAS_REPRESENTATION_LEAST_REPRESENTABLE_VALUE_FORCE_UNORM_EXT), das::LineInfo());
  addI("FLOAT_EXT", int64_t(VK_DEPTH_BIAS_REPRESENTATION_FLOAT_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_depth_bias_control) */
#if defined(VK_EXT_depth_clamp_control)
class EnumerationVkDepthClampModeEXT:public das::Enumeration{public:
EnumerationVkDepthClampModeEXT():das::Enumeration("VkDepthClampModeEXT") {
  external=true; cppName="VkDepthClampModeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDepthClampModeEXT>::type>::type;
  addI("VIEWPORT_RANGE_EXT", int64_t(VK_DEPTH_CLAMP_MODE_VIEWPORT_RANGE_EXT), das::LineInfo());
  addI("USER_DEFINED_RANGE_EXT", int64_t(VK_DEPTH_CLAMP_MODE_USER_DEFINED_RANGE_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_device_address_binding_report)
class EnumerationVkDeviceAddressBindingFlagBitsEXT:public das::Enumeration{public:
EnumerationVkDeviceAddressBindingFlagBitsEXT():das::Enumeration("VkDeviceAddressBindingFlagBitsEXT") {
  external=true; cppName="VkDeviceAddressBindingFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDeviceAddressBindingFlagBitsEXT>::type>::type;
  addI("INTERNAL_OBJECT_BIT_EXT", int64_t(VK_DEVICE_ADDRESS_BINDING_INTERNAL_OBJECT_BIT_EXT), das::LineInfo());
} };
class EnumerationVkDeviceAddressBindingTypeEXT:public das::Enumeration{public:
EnumerationVkDeviceAddressBindingTypeEXT():das::Enumeration("VkDeviceAddressBindingTypeEXT") {
  external=true; cppName="VkDeviceAddressBindingTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDeviceAddressBindingTypeEXT>::type>::type;
  addI("BIND_EXT", int64_t(VK_DEVICE_ADDRESS_BINDING_TYPE_BIND_EXT), das::LineInfo());
  addI("UNBIND_EXT", int64_t(VK_DEVICE_ADDRESS_BINDING_TYPE_UNBIND_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_device_address_binding_report) */
#if defined(VK_EXT_device_fault)
class EnumerationVkDeviceFaultAddressTypeEXT:public das::Enumeration{public:
EnumerationVkDeviceFaultAddressTypeEXT():das::Enumeration("VkDeviceFaultAddressTypeEXT") {
  external=true; cppName="VkDeviceFaultAddressTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDeviceFaultAddressTypeEXT>::type>::type;
  addI("NONE_EXT", int64_t(VK_DEVICE_FAULT_ADDRESS_TYPE_NONE_EXT), das::LineInfo());
  addI("READ_INVALID_EXT", int64_t(VK_DEVICE_FAULT_ADDRESS_TYPE_READ_INVALID_EXT), das::LineInfo());
  addI("WRITE_INVALID_EXT", int64_t(VK_DEVICE_FAULT_ADDRESS_TYPE_WRITE_INVALID_EXT), das::LineInfo());
  addI("EXECUTE_INVALID_EXT", int64_t(VK_DEVICE_FAULT_ADDRESS_TYPE_EXECUTE_INVALID_EXT), das::LineInfo());
  addI("INSTRUCTION_POINTER_UNKNOWN_EXT", int64_t(VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_UNKNOWN_EXT), das::LineInfo());
  addI("INSTRUCTION_POINTER_INVALID_EXT", int64_t(VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_INVALID_EXT), das::LineInfo());
  addI("INSTRUCTION_POINTER_FAULT_EXT", int64_t(VK_DEVICE_FAULT_ADDRESS_TYPE_INSTRUCTION_POINTER_FAULT_EXT), das::LineInfo());
} };
class EnumerationVkDeviceFaultVendorBinaryHeaderVersionEXT:public das::Enumeration{public:
EnumerationVkDeviceFaultVendorBinaryHeaderVersionEXT():das::Enumeration("VkDeviceFaultVendorBinaryHeaderVersionEXT") {
  external=true; cppName="VkDeviceFaultVendorBinaryHeaderVersionEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDeviceFaultVendorBinaryHeaderVersionEXT>::type>::type;
  addI("ONE_EXT", int64_t(VK_DEVICE_FAULT_VENDOR_BINARY_HEADER_VERSION_ONE_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_device_fault) */
#if defined(VK_EXT_device_generated_commands)
class EnumerationVkIndirectCommandsInputModeFlagBitsEXT:public das::Enumeration{public:
EnumerationVkIndirectCommandsInputModeFlagBitsEXT():das::Enumeration("VkIndirectCommandsInputModeFlagBitsEXT") {
  external=true; cppName="VkIndirectCommandsInputModeFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkIndirectCommandsInputModeFlagBitsEXT>::type>::type;
  addI("VULKAN_INDEX_BUFFER_EXT", int64_t(VK_INDIRECT_COMMANDS_INPUT_MODE_VULKAN_INDEX_BUFFER_EXT), das::LineInfo());
  addI("DXGI_INDEX_BUFFER_EXT", int64_t(VK_INDIRECT_COMMANDS_INPUT_MODE_DXGI_INDEX_BUFFER_EXT), das::LineInfo());
} };
class EnumerationVkIndirectCommandsLayoutUsageFlagBitsEXT:public das::Enumeration{public:
EnumerationVkIndirectCommandsLayoutUsageFlagBitsEXT():das::Enumeration("VkIndirectCommandsLayoutUsageFlagBitsEXT") {
  external=true; cppName="VkIndirectCommandsLayoutUsageFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsEXT>::type>::type;
  addI("EXPLICIT_PREPROCESS_BIT_EXT", int64_t(VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_EXT), das::LineInfo());
  addI("UNORDERED_SEQUENCES_BIT_EXT", int64_t(VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_EXT), das::LineInfo());
} };
class EnumerationVkIndirectCommandsTokenTypeEXT:public das::Enumeration{public:
EnumerationVkIndirectCommandsTokenTypeEXT():das::Enumeration("VkIndirectCommandsTokenTypeEXT") {
  external=true; cppName="VkIndirectCommandsTokenTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkIndirectCommandsTokenTypeEXT>::type>::type;
  addI("EXECUTION_SET_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_EXECUTION_SET_EXT), das::LineInfo());
  addI("PUSH_CONSTANT_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_EXT), das::LineInfo());
  addI("SEQUENCE_INDEX_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_SEQUENCE_INDEX_EXT), das::LineInfo());
  addI("INDEX_BUFFER_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_EXT), das::LineInfo());
  addI("VERTEX_BUFFER_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_EXT), das::LineInfo());
  addI("DRAW_INDEXED_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_EXT), das::LineInfo());
  addI("DRAW_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_EXT), das::LineInfo());
  addI("DRAW_INDEXED_COUNT_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_COUNT_EXT), das::LineInfo());
  addI("DRAW_COUNT_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_COUNT_EXT), das::LineInfo());
  addI("DISPATCH_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_EXT), das::LineInfo());
#if defined(VK_EXT_mesh_shader) && defined(VK_EXT_device_generated_commands)
  addI("DRAW_MESH_TASKS_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_EXT), das::LineInfo());
  addI("DRAW_MESH_TASKS_COUNT_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_COUNT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_mesh_shader) && defined(VK_EXT_device_generated_commands) */
#if defined(VK_KHR_ray_tracing_maintenance1) && defined(VK_EXT_device_generated_commands)
  addI("TRACE_RAYS2_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_TRACE_RAYS2_EXT), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_maintenance1) && defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_mesh_shader) && defined(VK_EXT_device_generated_commands)
  addI("DRAW_MESH_TASKS_NV_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_NV_EXT), das::LineInfo());
  addI("DRAW_MESH_TASKS_COUNT_NV_EXT", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_COUNT_NV_EXT), das::LineInfo());
#endif /* defined(VK_NV_mesh_shader) && defined(VK_EXT_device_generated_commands) */
} };
class EnumerationVkIndirectExecutionSetInfoTypeEXT:public das::Enumeration{public:
EnumerationVkIndirectExecutionSetInfoTypeEXT():das::Enumeration("VkIndirectExecutionSetInfoTypeEXT") {
  external=true; cppName="VkIndirectExecutionSetInfoTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkIndirectExecutionSetInfoTypeEXT>::type>::type;
  addI("PIPELINES_EXT", int64_t(VK_INDIRECT_EXECUTION_SET_INFO_TYPE_PIPELINES_EXT), das::LineInfo());
  addI("SHADER_OBJECTS_EXT", int64_t(VK_INDIRECT_EXECUTION_SET_INFO_TYPE_SHADER_OBJECTS_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_device_memory_report)
class EnumerationVkDeviceMemoryReportEventTypeEXT:public das::Enumeration{public:
EnumerationVkDeviceMemoryReportEventTypeEXT():das::Enumeration("VkDeviceMemoryReportEventTypeEXT") {
  external=true; cppName="VkDeviceMemoryReportEventTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDeviceMemoryReportEventTypeEXT>::type>::type;
  addI("ALLOCATE_EXT", int64_t(VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATE_EXT), das::LineInfo());
  addI("FREE_EXT", int64_t(VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_FREE_EXT), das::LineInfo());
  addI("IMPORT_EXT", int64_t(VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_IMPORT_EXT), das::LineInfo());
  addI("UNIMPORT_EXT", int64_t(VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_UNIMPORT_EXT), das::LineInfo());
  addI("ALLOCATION_FAILED_EXT", int64_t(VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATION_FAILED_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_device_memory_report) */
#if defined(VK_EXT_discard_rectangles)
class EnumerationVkDiscardRectangleModeEXT:public das::Enumeration{public:
EnumerationVkDiscardRectangleModeEXT():das::Enumeration("VkDiscardRectangleModeEXT") {
  external=true; cppName="VkDiscardRectangleModeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDiscardRectangleModeEXT>::type>::type;
  addI("INCLUSIVE_EXT", int64_t(VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT), das::LineInfo());
  addI("EXCLUSIVE_EXT", int64_t(VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_discard_rectangles) */
#if defined(VK_EXT_display_control)
class EnumerationVkDeviceEventTypeEXT:public das::Enumeration{public:
EnumerationVkDeviceEventTypeEXT():das::Enumeration("VkDeviceEventTypeEXT") {
  external=true; cppName="VkDeviceEventTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDeviceEventTypeEXT>::type>::type;
  addI("DISPLAY_HOTPLUG_EXT", int64_t(VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT), das::LineInfo());
} };
class EnumerationVkDisplayEventTypeEXT:public das::Enumeration{public:
EnumerationVkDisplayEventTypeEXT():das::Enumeration("VkDisplayEventTypeEXT") {
  external=true; cppName="VkDisplayEventTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDisplayEventTypeEXT>::type>::type;
  addI("FIRST_PIXEL_OUT_EXT", int64_t(VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT), das::LineInfo());
} };
class EnumerationVkDisplayPowerStateEXT:public das::Enumeration{public:
EnumerationVkDisplayPowerStateEXT():das::Enumeration("VkDisplayPowerStateEXT") {
  external=true; cppName="VkDisplayPowerStateEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDisplayPowerStateEXT>::type>::type;
  addI("OFF_EXT", int64_t(VK_DISPLAY_POWER_STATE_OFF_EXT), das::LineInfo());
  addI("SUSPEND_EXT", int64_t(VK_DISPLAY_POWER_STATE_SUSPEND_EXT), das::LineInfo());
  addI("ON_EXT", int64_t(VK_DISPLAY_POWER_STATE_ON_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_EXT_display_surface_counter)
class EnumerationVkSurfaceCounterFlagBitsEXT:public das::Enumeration{public:
EnumerationVkSurfaceCounterFlagBitsEXT():das::Enumeration("VkSurfaceCounterFlagBitsEXT") {
  external=true; cppName="VkSurfaceCounterFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>::type;
  addI("VBLANK_BIT_EXT", int64_t(VK_SURFACE_COUNTER_VBLANK_BIT_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_display_surface_counter) */
#if defined(VK_EXT_frame_boundary)
class EnumerationVkFrameBoundaryFlagBitsEXT:public das::Enumeration{public:
EnumerationVkFrameBoundaryFlagBitsEXT():das::Enumeration("VkFrameBoundaryFlagBitsEXT") {
  external=true; cppName="VkFrameBoundaryFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFrameBoundaryFlagBitsEXT>::type>::type;
  addI("RAME_END_BIT_EXT", int64_t(VK_FRAME_BOUNDARY_FRAME_END_BIT_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_frame_boundary) */
#if defined(VK_EXT_full_screen_exclusive)
class EnumerationVkFullScreenExclusiveEXT:public das::Enumeration{public:
EnumerationVkFullScreenExclusiveEXT():das::Enumeration("VkFullScreenExclusiveEXT") {
  external=true; cppName="VkFullScreenExclusiveEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFullScreenExclusiveEXT>::type>::type;
  addI("DEFAULT_EXT", int64_t(VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT), das::LineInfo());
  addI("ALLOWED_EXT", int64_t(VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT), das::LineInfo());
  addI("DISALLOWED_EXT", int64_t(VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT), das::LineInfo());
  addI("APPLICATION_CONTROLLED_EXT", int64_t(VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_full_screen_exclusive) */
#if defined(VK_EXT_graphics_pipeline_library)
class EnumerationVkGraphicsPipelineLibraryFlagBitsEXT:public das::Enumeration{public:
EnumerationVkGraphicsPipelineLibraryFlagBitsEXT():das::Enumeration("VkGraphicsPipelineLibraryFlagBitsEXT") {
  external=true; cppName="VkGraphicsPipelineLibraryFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkGraphicsPipelineLibraryFlagBitsEXT>::type>::type;
  addI("VERTEX_INPUT_INTERFACE_BIT_EXT", int64_t(VK_GRAPHICS_PIPELINE_LIBRARY_VERTEX_INPUT_INTERFACE_BIT_EXT), das::LineInfo());
  addI("PRE_RASTERIZATION_SHADERS_BIT_EXT", int64_t(VK_GRAPHICS_PIPELINE_LIBRARY_PRE_RASTERIZATION_SHADERS_BIT_EXT), das::LineInfo());
  addI("FRAGMENT_SHADER_BIT_EXT", int64_t(VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_SHADER_BIT_EXT), das::LineInfo());
  addI("FRAGMENT_OUTPUT_INTERFACE_BIT_EXT", int64_t(VK_GRAPHICS_PIPELINE_LIBRARY_FRAGMENT_OUTPUT_INTERFACE_BIT_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_graphics_pipeline_library) */
#if defined(VK_EXT_image_compression_control)
class EnumerationVkImageCompressionFixedRateFlagBitsEXT:public das::Enumeration{public:
EnumerationVkImageCompressionFixedRateFlagBitsEXT():das::Enumeration("VkImageCompressionFixedRateFlagBitsEXT") {
  external=true; cppName="VkImageCompressionFixedRateFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageCompressionFixedRateFlagBitsEXT>::type>::type;
  addI("NONE_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_NONE_EXT), das::LineInfo());
  addI("_1BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_1BPC_BIT_EXT), das::LineInfo());
  addI("_2BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_2BPC_BIT_EXT), das::LineInfo());
  addI("_3BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_3BPC_BIT_EXT), das::LineInfo());
  addI("_4BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_4BPC_BIT_EXT), das::LineInfo());
  addI("_5BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_5BPC_BIT_EXT), das::LineInfo());
  addI("_6BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_6BPC_BIT_EXT), das::LineInfo());
  addI("_7BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_7BPC_BIT_EXT), das::LineInfo());
  addI("_8BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_8BPC_BIT_EXT), das::LineInfo());
  addI("_9BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_9BPC_BIT_EXT), das::LineInfo());
  addI("_10BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_10BPC_BIT_EXT), das::LineInfo());
  addI("_11BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_11BPC_BIT_EXT), das::LineInfo());
  addI("_12BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_12BPC_BIT_EXT), das::LineInfo());
  addI("_13BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_13BPC_BIT_EXT), das::LineInfo());
  addI("_14BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_14BPC_BIT_EXT), das::LineInfo());
  addI("_15BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_15BPC_BIT_EXT), das::LineInfo());
  addI("_16BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_16BPC_BIT_EXT), das::LineInfo());
  addI("_17BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_17BPC_BIT_EXT), das::LineInfo());
  addI("_18BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_18BPC_BIT_EXT), das::LineInfo());
  addI("_19BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_19BPC_BIT_EXT), das::LineInfo());
  addI("_20BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_20BPC_BIT_EXT), das::LineInfo());
  addI("_21BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_21BPC_BIT_EXT), das::LineInfo());
  addI("_22BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_22BPC_BIT_EXT), das::LineInfo());
  addI("_23BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_23BPC_BIT_EXT), das::LineInfo());
  addI("_24BPC_BIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_24BPC_BIT_EXT), das::LineInfo());
} };
class EnumerationVkImageCompressionFlagBitsEXT:public das::Enumeration{public:
EnumerationVkImageCompressionFlagBitsEXT():das::Enumeration("VkImageCompressionFlagBitsEXT") {
  external=true; cppName="VkImageCompressionFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageCompressionFlagBitsEXT>::type>::type;
  addI("DEFAULT_EXT", int64_t(VK_IMAGE_COMPRESSION_DEFAULT_EXT), das::LineInfo());
  addI("FIXED_RATE_DEFAULT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_DEFAULT_EXT), das::LineInfo());
  addI("FIXED_RATE_EXPLICIT_EXT", int64_t(VK_IMAGE_COMPRESSION_FIXED_RATE_EXPLICIT_EXT), das::LineInfo());
  addI("DISABLED_EXT", int64_t(VK_IMAGE_COMPRESSION_DISABLED_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_image_compression_control) */
#if defined(VK_EXT_layer_settings)
class EnumerationVkLayerSettingTypeEXT:public das::Enumeration{public:
EnumerationVkLayerSettingTypeEXT():das::Enumeration("VkLayerSettingTypeEXT") {
  external=true; cppName="VkLayerSettingTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkLayerSettingTypeEXT>::type>::type;
  addI("BOOL32_EXT", int64_t(VK_LAYER_SETTING_TYPE_BOOL32_EXT), das::LineInfo());
  addI("INT32_EXT", int64_t(VK_LAYER_SETTING_TYPE_INT32_EXT), das::LineInfo());
  addI("INT64_EXT", int64_t(VK_LAYER_SETTING_TYPE_INT64_EXT), das::LineInfo());
  addI("UINT32_EXT", int64_t(VK_LAYER_SETTING_TYPE_UINT32_EXT), das::LineInfo());
  addI("UINT64_EXT", int64_t(VK_LAYER_SETTING_TYPE_UINT64_EXT), das::LineInfo());
  addI("FLOAT32_EXT", int64_t(VK_LAYER_SETTING_TYPE_FLOAT32_EXT), das::LineInfo());
  addI("FLOAT64_EXT", int64_t(VK_LAYER_SETTING_TYPE_FLOAT64_EXT), das::LineInfo());
  addI("STRING_EXT", int64_t(VK_LAYER_SETTING_TYPE_STRING_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_layer_settings) */
#if defined(VK_EXT_metal_objects)
class EnumerationVkExportMetalObjectTypeFlagBitsEXT:public das::Enumeration{public:
EnumerationVkExportMetalObjectTypeFlagBitsEXT():das::Enumeration("VkExportMetalObjectTypeFlagBitsEXT") {
  external=true; cppName="VkExportMetalObjectTypeFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkExportMetalObjectTypeFlagBitsEXT>::type>::type;
  addI("DEVICE_BIT_EXT", int64_t(VK_EXPORT_METAL_OBJECT_TYPE_METAL_DEVICE_BIT_EXT), das::LineInfo());
  addI("COMMAND_QUEUE_BIT_EXT", int64_t(VK_EXPORT_METAL_OBJECT_TYPE_METAL_COMMAND_QUEUE_BIT_EXT), das::LineInfo());
  addI("BUFFER_BIT_EXT", int64_t(VK_EXPORT_METAL_OBJECT_TYPE_METAL_BUFFER_BIT_EXT), das::LineInfo());
  addI("TEXTURE_BIT_EXT", int64_t(VK_EXPORT_METAL_OBJECT_TYPE_METAL_TEXTURE_BIT_EXT), das::LineInfo());
  addI("IOSURFACE_BIT_EXT", int64_t(VK_EXPORT_METAL_OBJECT_TYPE_METAL_IOSURFACE_BIT_EXT), das::LineInfo());
  addI("SHARED_EVENT_BIT_EXT", int64_t(VK_EXPORT_METAL_OBJECT_TYPE_METAL_SHARED_EVENT_BIT_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_metal_objects) */
#if defined(VK_EXT_opacity_micromap)
class EnumerationVkBuildMicromapFlagBitsEXT:public das::Enumeration{public:
EnumerationVkBuildMicromapFlagBitsEXT():das::Enumeration("VkBuildMicromapFlagBitsEXT") {
  external=true; cppName="VkBuildMicromapFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBuildMicromapFlagBitsEXT>::type>::type;
  addI("PREFER_FAST_TRACE_BIT_EXT", int64_t(VK_BUILD_MICROMAP_PREFER_FAST_TRACE_BIT_EXT), das::LineInfo());
  addI("PREFER_FAST_BUILD_BIT_EXT", int64_t(VK_BUILD_MICROMAP_PREFER_FAST_BUILD_BIT_EXT), das::LineInfo());
  addI("ALLOW_COMPACTION_BIT_EXT", int64_t(VK_BUILD_MICROMAP_ALLOW_COMPACTION_BIT_EXT), das::LineInfo());
} };
class EnumerationVkBuildMicromapModeEXT:public das::Enumeration{public:
EnumerationVkBuildMicromapModeEXT():das::Enumeration("VkBuildMicromapModeEXT") {
  external=true; cppName="VkBuildMicromapModeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBuildMicromapModeEXT>::type>::type;
  addI("BUILD_EXT", int64_t(VK_BUILD_MICROMAP_MODE_BUILD_EXT), das::LineInfo());
} };
class EnumerationVkCopyMicromapModeEXT:public das::Enumeration{public:
EnumerationVkCopyMicromapModeEXT():das::Enumeration("VkCopyMicromapModeEXT") {
  external=true; cppName="VkCopyMicromapModeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCopyMicromapModeEXT>::type>::type;
  addI("CLONE_EXT", int64_t(VK_COPY_MICROMAP_MODE_CLONE_EXT), das::LineInfo());
  addI("SERIALIZE_EXT", int64_t(VK_COPY_MICROMAP_MODE_SERIALIZE_EXT), das::LineInfo());
  addI("DESERIALIZE_EXT", int64_t(VK_COPY_MICROMAP_MODE_DESERIALIZE_EXT), das::LineInfo());
  addI("COMPACT_EXT", int64_t(VK_COPY_MICROMAP_MODE_COMPACT_EXT), das::LineInfo());
} };
class EnumerationVkMicromapCreateFlagBitsEXT:public das::Enumeration{public:
EnumerationVkMicromapCreateFlagBitsEXT():das::Enumeration("VkMicromapCreateFlagBitsEXT") {
  external=true; cppName="VkMicromapCreateFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkMicromapCreateFlagBitsEXT>::type>::type;
  addI("DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT", int64_t(VK_MICROMAP_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT), das::LineInfo());
} };
class EnumerationVkMicromapTypeEXT:public das::Enumeration{public:
EnumerationVkMicromapTypeEXT():das::Enumeration("VkMicromapTypeEXT") {
  external=true; cppName="VkMicromapTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkMicromapTypeEXT>::type>::type;
  addI("OPACITY_MICROMAP_EXT", int64_t(VK_MICROMAP_TYPE_OPACITY_MICROMAP_EXT), das::LineInfo());
#if defined(VK_NV_displacement_micromap)
  addI("DISPLACEMENT_MICROMAP_NV", int64_t(VK_MICROMAP_TYPE_DISPLACEMENT_MICROMAP_NV), das::LineInfo());
#endif /* defined(VK_NV_displacement_micromap) */
} };
class EnumerationVkOpacityMicromapFormatEXT:public das::Enumeration{public:
EnumerationVkOpacityMicromapFormatEXT():das::Enumeration("VkOpacityMicromapFormatEXT") {
  external=true; cppName="VkOpacityMicromapFormatEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkOpacityMicromapFormatEXT>::type>::type;
  addI("_2_STATE_EXT", int64_t(VK_OPACITY_MICROMAP_FORMAT_2_STATE_EXT), das::LineInfo());
  addI("_4_STATE_EXT", int64_t(VK_OPACITY_MICROMAP_FORMAT_4_STATE_EXT), das::LineInfo());
} };
class EnumerationVkOpacityMicromapSpecialIndexEXT:public das::Enumeration{public:
EnumerationVkOpacityMicromapSpecialIndexEXT():das::Enumeration("VkOpacityMicromapSpecialIndexEXT") {
  external=true; cppName="VkOpacityMicromapSpecialIndexEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkOpacityMicromapSpecialIndexEXT>::type>::type;
  addI("TRANSPARENT_EXT", int64_t(VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_TRANSPARENT_EXT), das::LineInfo());
  addI("OPAQUE_EXT", int64_t(VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_OPAQUE_EXT), das::LineInfo());
  addI("UNKNOWN_TRANSPARENT_EXT", int64_t(VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_UNKNOWN_TRANSPARENT_EXT), das::LineInfo());
  addI("UNKNOWN_OPAQUE_EXT", int64_t(VK_OPACITY_MICROMAP_SPECIAL_INDEX_FULLY_UNKNOWN_OPAQUE_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_provoking_vertex)
class EnumerationVkProvokingVertexModeEXT:public das::Enumeration{public:
EnumerationVkProvokingVertexModeEXT():das::Enumeration("VkProvokingVertexModeEXT") {
  external=true; cppName="VkProvokingVertexModeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkProvokingVertexModeEXT>::type>::type;
  addI("FIRST_VERTEX_EXT", int64_t(VK_PROVOKING_VERTEX_MODE_FIRST_VERTEX_EXT), das::LineInfo());
  addI("LAST_VERTEX_EXT", int64_t(VK_PROVOKING_VERTEX_MODE_LAST_VERTEX_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_provoking_vertex) */
#if defined(VK_EXT_shader_object)
class EnumerationVkShaderCodeTypeEXT:public das::Enumeration{public:
EnumerationVkShaderCodeTypeEXT():das::Enumeration("VkShaderCodeTypeEXT") {
  external=true; cppName="VkShaderCodeTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkShaderCodeTypeEXT>::type>::type;
  addI("BINARY_EXT", int64_t(VK_SHADER_CODE_TYPE_BINARY_EXT), das::LineInfo());
  addI("SPIRV_EXT", int64_t(VK_SHADER_CODE_TYPE_SPIRV_EXT), das::LineInfo());
} };
class EnumerationVkShaderCreateFlagBitsEXT:public das::Enumeration{public:
EnumerationVkShaderCreateFlagBitsEXT():das::Enumeration("VkShaderCreateFlagBitsEXT") {
  external=true; cppName="VkShaderCreateFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkShaderCreateFlagBitsEXT>::type>::type;
  addI("LINK_STAGE_BIT_EXT", int64_t(VK_SHADER_CREATE_LINK_STAGE_BIT_EXT), das::LineInfo());
#if defined(VK_EXT_device_generated_commands)
  addI("INDIRECT_BINDABLE_BIT_EXT", int64_t(VK_SHADER_CREATE_INDIRECT_BINDABLE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_shader_object) && (defined(VK_EXT_subgroup_size_control) || defined(VK_VERSION_1_3))
  addI("ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT", int64_t(VK_SHADER_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT), das::LineInfo());
  addI("REQUIRE_FULL_SUBGROUPS_BIT_EXT", int64_t(VK_SHADER_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_object) && (defined(VK_EXT_subgroup_size_control) || defined(VK_VERSION_1_3)) */
#if defined(VK_EXT_shader_object) && (defined(VK_EXT_mesh_shader) || defined(VK_NV_mesh_shader))
  addI("NO_TASK_SHADER_BIT_EXT", int64_t(VK_SHADER_CREATE_NO_TASK_SHADER_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_object) && (defined(VK_EXT_mesh_shader) || defined(VK_NV_mesh_shader)) */
#if defined(VK_EXT_shader_object) && (defined(VK_KHR_device_group) || defined(VK_VERSION_1_1))
  addI("DISPATCH_BASE_BIT_EXT", int64_t(VK_SHADER_CREATE_DISPATCH_BASE_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_object) && (defined(VK_KHR_device_group) || defined(VK_VERSION_1_1)) */
#if defined(VK_EXT_shader_object) && defined(VK_KHR_fragment_shading_rate)
  addI("FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_EXT", int64_t(VK_SHADER_CREATE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_object) && defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_EXT_shader_object) && defined(VK_EXT_fragment_density_map)
  addI("FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT", int64_t(VK_SHADER_CREATE_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_shader_object) && defined(VK_EXT_fragment_density_map) */
} };
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_EXT_subpass_merge_feedback)
class EnumerationVkSubpassMergeStatusEXT:public das::Enumeration{public:
EnumerationVkSubpassMergeStatusEXT():das::Enumeration("VkSubpassMergeStatusEXT") {
  external=true; cppName="VkSubpassMergeStatusEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSubpassMergeStatusEXT>::type>::type;
  addI("MERGED_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_MERGED_EXT), das::LineInfo());
  addI("DISALLOWED_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_DISALLOWED_EXT), das::LineInfo());
  addI("NOT_MERGED_SIDE_EFFECTS_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SIDE_EFFECTS_EXT), das::LineInfo());
  addI("NOT_MERGED_SAMPLES_MISMATCH_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SAMPLES_MISMATCH_EXT), das::LineInfo());
  addI("NOT_MERGED_VIEWS_MISMATCH_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_VIEWS_MISMATCH_EXT), das::LineInfo());
  addI("NOT_MERGED_ALIASING_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_ALIASING_EXT), das::LineInfo());
  addI("NOT_MERGED_DEPENDENCIES_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_DEPENDENCIES_EXT), das::LineInfo());
  addI("NOT_MERGED_INCOMPATIBLE_INPUT_ATTACHMENT_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_INCOMPATIBLE_INPUT_ATTACHMENT_EXT), das::LineInfo());
  addI("NOT_MERGED_TOO_MANY_ATTACHMENTS_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_TOO_MANY_ATTACHMENTS_EXT), das::LineInfo());
  addI("NOT_MERGED_INSUFFICIENT_STORAGE_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_INSUFFICIENT_STORAGE_EXT), das::LineInfo());
  addI("NOT_MERGED_DEPTH_STENCIL_COUNT_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_DEPTH_STENCIL_COUNT_EXT), das::LineInfo());
  addI("NOT_MERGED_RESOLVE_ATTACHMENT_REUSE_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_RESOLVE_ATTACHMENT_REUSE_EXT), das::LineInfo());
  addI("NOT_MERGED_SINGLE_SUBPASS_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_SINGLE_SUBPASS_EXT), das::LineInfo());
  addI("NOT_MERGED_UNSPECIFIED_EXT", int64_t(VK_SUBPASS_MERGE_STATUS_NOT_MERGED_UNSPECIFIED_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_subpass_merge_feedback) */
#if defined(VK_EXT_surface_maintenance1)
class EnumerationVkPresentGravityFlagBitsEXT:public das::Enumeration{public:
EnumerationVkPresentGravityFlagBitsEXT():das::Enumeration("VkPresentGravityFlagBitsEXT") {
  external=true; cppName="VkPresentGravityFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPresentGravityFlagBitsEXT>::type>::type;
  addI("MIN_BIT_EXT", int64_t(VK_PRESENT_GRAVITY_MIN_BIT_EXT), das::LineInfo());
  addI("MAX_BIT_EXT", int64_t(VK_PRESENT_GRAVITY_MAX_BIT_EXT), das::LineInfo());
  addI("CENTERED_BIT_EXT", int64_t(VK_PRESENT_GRAVITY_CENTERED_BIT_EXT), das::LineInfo());
} };
class EnumerationVkPresentScalingFlagBitsEXT:public das::Enumeration{public:
EnumerationVkPresentScalingFlagBitsEXT():das::Enumeration("VkPresentScalingFlagBitsEXT") {
  external=true; cppName="VkPresentScalingFlagBitsEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPresentScalingFlagBitsEXT>::type>::type;
  addI("ONE_TO_ONE_BIT_EXT", int64_t(VK_PRESENT_SCALING_ONE_TO_ONE_BIT_EXT), das::LineInfo());
  addI("ASPECT_RATIO_STRETCH_BIT_EXT", int64_t(VK_PRESENT_SCALING_ASPECT_RATIO_STRETCH_BIT_EXT), das::LineInfo());
  addI("STRETCH_BIT_EXT", int64_t(VK_PRESENT_SCALING_STRETCH_BIT_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_surface_maintenance1) */
#if defined(VK_EXT_validation_cache)
class EnumerationVkValidationCacheHeaderVersionEXT:public das::Enumeration{public:
EnumerationVkValidationCacheHeaderVersionEXT():das::Enumeration("VkValidationCacheHeaderVersionEXT") {
  external=true; cppName="VkValidationCacheHeaderVersionEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkValidationCacheHeaderVersionEXT>::type>::type;
  addI("ONE_EXT", int64_t(VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_EXT_validation_features)
class EnumerationVkValidationFeatureDisableEXT:public das::Enumeration{public:
EnumerationVkValidationFeatureDisableEXT():das::Enumeration("VkValidationFeatureDisableEXT") {
  external=true; cppName="VkValidationFeatureDisableEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkValidationFeatureDisableEXT>::type>::type;
  addI("ALL_EXT", int64_t(VK_VALIDATION_FEATURE_DISABLE_ALL_EXT), das::LineInfo());
  addI("SHADERS_EXT", int64_t(VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT), das::LineInfo());
  addI("THREAD_SAFETY_EXT", int64_t(VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT), das::LineInfo());
  addI("API_PARAMETERS_EXT", int64_t(VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT), das::LineInfo());
  addI("OBJECT_LIFETIMES_EXT", int64_t(VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT), das::LineInfo());
  addI("CORE_CHECKS_EXT", int64_t(VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT), das::LineInfo());
  addI("UNIQUE_HANDLES_EXT", int64_t(VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT), das::LineInfo());
  addI("SHADER_VALIDATION_CACHE_EXT", int64_t(VK_VALIDATION_FEATURE_DISABLE_SHADER_VALIDATION_CACHE_EXT), das::LineInfo());
} };
class EnumerationVkValidationFeatureEnableEXT:public das::Enumeration{public:
EnumerationVkValidationFeatureEnableEXT():das::Enumeration("VkValidationFeatureEnableEXT") {
  external=true; cppName="VkValidationFeatureEnableEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkValidationFeatureEnableEXT>::type>::type;
  addI("GPU_ASSISTED_EXT", int64_t(VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT), das::LineInfo());
  addI("GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT", int64_t(VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT), das::LineInfo());
  addI("BEST_PRACTICES_EXT", int64_t(VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT), das::LineInfo());
  addI("DEBUG_PRINTF_EXT", int64_t(VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT), das::LineInfo());
  addI("SYNCHRONIZATION_VALIDATION_EXT", int64_t(VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_validation_features) */
#if defined(VK_EXT_validation_flags)
class EnumerationVkValidationCheckEXT:public das::Enumeration{public:
EnumerationVkValidationCheckEXT():das::Enumeration("VkValidationCheckEXT") {
  external=true; cppName="VkValidationCheckEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkValidationCheckEXT>::type>::type;
  addI("ALL_EXT", int64_t(VK_VALIDATION_CHECK_ALL_EXT), das::LineInfo());
  addI("SHADERS_EXT", int64_t(VK_VALIDATION_CHECK_SHADERS_EXT), das::LineInfo());
} };
#endif /* defined(VK_EXT_validation_flags) */
#if defined(VK_FUCHSIA_buffer_collection)
class EnumerationVkImageConstraintsInfoFlagBitsFUCHSIA:public das::Enumeration{public:
EnumerationVkImageConstraintsInfoFlagBitsFUCHSIA():das::Enumeration("VkImageConstraintsInfoFlagBitsFUCHSIA") {
  external=true; cppName="VkImageConstraintsInfoFlagBitsFUCHSIA";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkImageConstraintsInfoFlagBitsFUCHSIA>::type>::type;
  addI("CPU_READ_RARELY_FUCHSIA", int64_t(VK_IMAGE_CONSTRAINTS_INFO_CPU_READ_RARELY_FUCHSIA), das::LineInfo());
  addI("CPU_READ_OFTEN_FUCHSIA", int64_t(VK_IMAGE_CONSTRAINTS_INFO_CPU_READ_OFTEN_FUCHSIA), das::LineInfo());
  addI("CPU_WRITE_RARELY_FUCHSIA", int64_t(VK_IMAGE_CONSTRAINTS_INFO_CPU_WRITE_RARELY_FUCHSIA), das::LineInfo());
  addI("CPU_WRITE_OFTEN_FUCHSIA", int64_t(VK_IMAGE_CONSTRAINTS_INFO_CPU_WRITE_OFTEN_FUCHSIA), das::LineInfo());
  addI("PROTECTED_OPTIONAL_FUCHSIA", int64_t(VK_IMAGE_CONSTRAINTS_INFO_PROTECTED_OPTIONAL_FUCHSIA), das::LineInfo());
} };
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_INTEL_performance_query)
class EnumerationVkPerformanceConfigurationTypeINTEL:public das::Enumeration{public:
EnumerationVkPerformanceConfigurationTypeINTEL():das::Enumeration("VkPerformanceConfigurationTypeINTEL") {
  external=true; cppName="VkPerformanceConfigurationTypeINTEL";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPerformanceConfigurationTypeINTEL>::type>::type;
  addI("COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL", int64_t(VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL), das::LineInfo());
} };
class EnumerationVkPerformanceOverrideTypeINTEL:public das::Enumeration{public:
EnumerationVkPerformanceOverrideTypeINTEL():das::Enumeration("VkPerformanceOverrideTypeINTEL") {
  external=true; cppName="VkPerformanceOverrideTypeINTEL";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPerformanceOverrideTypeINTEL>::type>::type;
  addI("NULL_HARDWARE_INTEL", int64_t(VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL), das::LineInfo());
  addI("FLUSH_GPU_CACHES_INTEL", int64_t(VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL), das::LineInfo());
} };
class EnumerationVkPerformanceParameterTypeINTEL:public das::Enumeration{public:
EnumerationVkPerformanceParameterTypeINTEL():das::Enumeration("VkPerformanceParameterTypeINTEL") {
  external=true; cppName="VkPerformanceParameterTypeINTEL";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPerformanceParameterTypeINTEL>::type>::type;
  addI("HW_COUNTERS_SUPPORTED_INTEL", int64_t(VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL), das::LineInfo());
  addI("STREAM_MARKER_VALID_BITS_INTEL", int64_t(VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL), das::LineInfo());
} };
class EnumerationVkPerformanceValueTypeINTEL:public das::Enumeration{public:
EnumerationVkPerformanceValueTypeINTEL():das::Enumeration("VkPerformanceValueTypeINTEL") {
  external=true; cppName="VkPerformanceValueTypeINTEL";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPerformanceValueTypeINTEL>::type>::type;
  addI("UINT32_INTEL", int64_t(VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL), das::LineInfo());
  addI("UINT64_INTEL", int64_t(VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL), das::LineInfo());
  addI("FLOAT_INTEL", int64_t(VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL), das::LineInfo());
  addI("BOOL_INTEL", int64_t(VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL), das::LineInfo());
  addI("STRING_INTEL", int64_t(VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL), das::LineInfo());
} };
class EnumerationVkQueryPoolSamplingModeINTEL:public das::Enumeration{public:
EnumerationVkQueryPoolSamplingModeINTEL():das::Enumeration("VkQueryPoolSamplingModeINTEL") {
  external=true; cppName="VkQueryPoolSamplingModeINTEL";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkQueryPoolSamplingModeINTEL>::type>::type;
  addI("MANUAL_INTEL", int64_t(VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL), das::LineInfo());
} };
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_acceleration_structure)
class EnumerationVkAccelerationStructureBuildTypeKHR:public das::Enumeration{public:
EnumerationVkAccelerationStructureBuildTypeKHR():das::Enumeration("VkAccelerationStructureBuildTypeKHR") {
  external=true; cppName="VkAccelerationStructureBuildTypeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAccelerationStructureBuildTypeKHR>::type>::type;
  addI("HOST_KHR", int64_t(VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_KHR), das::LineInfo());
  addI("DEVICE_KHR", int64_t(VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR), das::LineInfo());
  addI("HOST_OR_DEVICE_KHR", int64_t(VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_OR_DEVICE_KHR), das::LineInfo());
} };
class EnumerationVkAccelerationStructureCompatibilityKHR:public das::Enumeration{public:
EnumerationVkAccelerationStructureCompatibilityKHR():das::Enumeration("VkAccelerationStructureCompatibilityKHR") {
  external=true; cppName="VkAccelerationStructureCompatibilityKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAccelerationStructureCompatibilityKHR>::type>::type;
  addI("COMPATIBLE_KHR", int64_t(VK_ACCELERATION_STRUCTURE_COMPATIBILITY_COMPATIBLE_KHR), das::LineInfo());
  addI("INCOMPATIBLE_KHR", int64_t(VK_ACCELERATION_STRUCTURE_COMPATIBILITY_INCOMPATIBLE_KHR), das::LineInfo());
} };
class EnumerationVkAccelerationStructureCreateFlagBitsKHR:public das::Enumeration{public:
EnumerationVkAccelerationStructureCreateFlagBitsKHR():das::Enumeration("VkAccelerationStructureCreateFlagBitsKHR") {
  external=true; cppName="VkAccelerationStructureCreateFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAccelerationStructureCreateFlagBitsKHR>::type>::type;
  addI("DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR", int64_t(VK_ACCELERATION_STRUCTURE_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR), das::LineInfo());
#if defined(VK_EXT_descriptor_buffer)
  addI("DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT", int64_t(VK_ACCELERATION_STRUCTURE_CREATE_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT), das::LineInfo());
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_NV_ray_tracing_motion_blur)
  addI("MOTION_BIT_NV", int64_t(VK_ACCELERATION_STRUCTURE_CREATE_MOTION_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
} };
class EnumerationVkAccelerationStructureTypeKHR:public das::Enumeration{public:
EnumerationVkAccelerationStructureTypeKHR():das::Enumeration("VkAccelerationStructureTypeKHR") {
  external=true; cppName="VkAccelerationStructureTypeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAccelerationStructureTypeKHR>::type>::type;
  addI("TOP_LEVEL_KHR", int64_t(VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR), das::LineInfo());
  addI("BOTTOM_LEVEL_KHR", int64_t(VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR), das::LineInfo());
  addI("GENERIC_KHR", int64_t(VK_ACCELERATION_STRUCTURE_TYPE_GENERIC_KHR), das::LineInfo());
#if defined(VK_NV_ray_tracing)
  addI("TOP_LEVEL_NV", int64_t(VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV), das::LineInfo());
  addI("BOTTOM_LEVEL_NV", int64_t(VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkBuildAccelerationStructureFlagBitsKHR:public das::Enumeration{public:
EnumerationVkBuildAccelerationStructureFlagBitsKHR():das::Enumeration("VkBuildAccelerationStructureFlagBitsKHR") {
  external=true; cppName="VkBuildAccelerationStructureFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBuildAccelerationStructureFlagBitsKHR>::type>::type;
  addI("ALLOW_UPDATE_BIT_KHR", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR), das::LineInfo());
  addI("ALLOW_COMPACTION_BIT_KHR", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR), das::LineInfo());
  addI("PREFER_FAST_TRACE_BIT_KHR", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR), das::LineInfo());
  addI("PREFER_FAST_BUILD_BIT_KHR", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR), das::LineInfo());
  addI("LOW_MEMORY_BIT_KHR", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR), das::LineInfo());
#if defined(VK_EXT_opacity_micromap)
  addI("ALLOW_OPACITY_MICROMAP_UPDATE_EXT", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_UPDATE_EXT), das::LineInfo());
  addI("ALLOW_DISABLE_OPACITY_MICROMAPS_EXT", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DISABLE_OPACITY_MICROMAPS_EXT), das::LineInfo());
  addI("ALLOW_OPACITY_MICROMAP_DATA_UPDATE_EXT", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_OPACITY_MICROMAP_DATA_UPDATE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_KHR_ray_tracing_position_fetch)
  addI("ALLOW_DATA_ACCESS_KHR", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DATA_ACCESS_KHR), das::LineInfo());
#endif /* defined(VK_KHR_ray_tracing_position_fetch) */
#if defined(VK_NV_displacement_micromap)
  addI("ALLOW_DISPLACEMENT_MICROMAP_UPDATE_NV", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_DISPLACEMENT_MICROMAP_UPDATE_NV), das::LineInfo());
#endif /* defined(VK_NV_displacement_micromap) */
#if defined(VK_NV_ray_tracing)
  addI("ALLOW_UPDATE_BIT_NV", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV), das::LineInfo());
  addI("ALLOW_COMPACTION_BIT_NV", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV), das::LineInfo());
  addI("PREFER_FAST_TRACE_BIT_NV", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV), das::LineInfo());
  addI("PREFER_FAST_BUILD_BIT_NV", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV), das::LineInfo());
  addI("LOW_MEMORY_BIT_NV", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_ray_tracing_motion_blur)
  addI("MOTION_BIT_NV", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_MOTION_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
} };
class EnumerationVkBuildAccelerationStructureModeKHR:public das::Enumeration{public:
EnumerationVkBuildAccelerationStructureModeKHR():das::Enumeration("VkBuildAccelerationStructureModeKHR") {
  external=true; cppName="VkBuildAccelerationStructureModeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBuildAccelerationStructureModeKHR>::type>::type;
  addI("BUILD_KHR", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR), das::LineInfo());
  addI("UPDATE_KHR", int64_t(VK_BUILD_ACCELERATION_STRUCTURE_MODE_UPDATE_KHR), das::LineInfo());
} };
class EnumerationVkCopyAccelerationStructureModeKHR:public das::Enumeration{public:
EnumerationVkCopyAccelerationStructureModeKHR():das::Enumeration("VkCopyAccelerationStructureModeKHR") {
  external=true; cppName="VkCopyAccelerationStructureModeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCopyAccelerationStructureModeKHR>::type>::type;
  addI("CLONE_KHR", int64_t(VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_KHR), das::LineInfo());
  addI("COMPACT_KHR", int64_t(VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_KHR), das::LineInfo());
#if defined(VK_KHR_acceleration_structure)
  addI("SERIALIZE_KHR", int64_t(VK_COPY_ACCELERATION_STRUCTURE_MODE_SERIALIZE_KHR), das::LineInfo());
  addI("DESERIALIZE_KHR", int64_t(VK_COPY_ACCELERATION_STRUCTURE_MODE_DESERIALIZE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_ray_tracing)
  addI("CLONE_NV", int64_t(VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV), das::LineInfo());
  addI("COMPACT_NV", int64_t(VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkGeometryFlagBitsKHR:public das::Enumeration{public:
EnumerationVkGeometryFlagBitsKHR():das::Enumeration("VkGeometryFlagBitsKHR") {
  external=true; cppName="VkGeometryFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkGeometryFlagBitsKHR>::type>::type;
  addI("OPAQUE_BIT_KHR", int64_t(VK_GEOMETRY_OPAQUE_BIT_KHR), das::LineInfo());
  addI("NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR", int64_t(VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR), das::LineInfo());
#if defined(VK_NV_ray_tracing)
  addI("OPAQUE_BIT_NV", int64_t(VK_GEOMETRY_OPAQUE_BIT_NV), das::LineInfo());
  addI("NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV", int64_t(VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkGeometryInstanceFlagBitsKHR:public das::Enumeration{public:
EnumerationVkGeometryInstanceFlagBitsKHR():das::Enumeration("VkGeometryInstanceFlagBitsKHR") {
  external=true; cppName="VkGeometryInstanceFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkGeometryInstanceFlagBitsKHR>::type>::type;
  addI("TRIANGLE_FACING_CULL_DISABLE_BIT_KHR", int64_t(VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR), das::LineInfo());
  addI("TRIANGLE_FLIP_FACING_BIT_KHR", int64_t(VK_GEOMETRY_INSTANCE_TRIANGLE_FLIP_FACING_BIT_KHR), das::LineInfo());
  addI("FORCE_OPAQUE_BIT_KHR", int64_t(VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR), das::LineInfo());
  addI("FORCE_NO_OPAQUE_BIT_KHR", int64_t(VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR), das::LineInfo());
  addI("TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_KHR", int64_t(VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_KHR), das::LineInfo());
#if defined(VK_EXT_opacity_micromap)
  addI("FORCE_OPACITY_MICROMAP_2_STATE_EXT", int64_t(VK_GEOMETRY_INSTANCE_FORCE_OPACITY_MICROMAP_2_STATE_EXT), das::LineInfo());
  addI("DISABLE_OPACITY_MICROMAPS_EXT", int64_t(VK_GEOMETRY_INSTANCE_DISABLE_OPACITY_MICROMAPS_EXT), das::LineInfo());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_NV_ray_tracing)
  addI("TRIANGLE_CULL_DISABLE_BIT_NV", int64_t(VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV), das::LineInfo());
  addI("TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV", int64_t(VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV), das::LineInfo());
  addI("FORCE_OPAQUE_BIT_NV", int64_t(VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV), das::LineInfo());
  addI("FORCE_NO_OPAQUE_BIT_NV", int64_t(VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkGeometryTypeKHR:public das::Enumeration{public:
EnumerationVkGeometryTypeKHR():das::Enumeration("VkGeometryTypeKHR") {
  external=true; cppName="VkGeometryTypeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkGeometryTypeKHR>::type>::type;
  addI("TRIANGLES_KHR", int64_t(VK_GEOMETRY_TYPE_TRIANGLES_KHR), das::LineInfo());
  addI("AABBS_KHR", int64_t(VK_GEOMETRY_TYPE_AABBS_KHR), das::LineInfo());
  addI("INSTANCES_KHR", int64_t(VK_GEOMETRY_TYPE_INSTANCES_KHR), das::LineInfo());
#if defined(VK_NV_ray_tracing)
  addI("TRIANGLES_NV", int64_t(VK_GEOMETRY_TYPE_TRIANGLES_NV), das::LineInfo());
  addI("AABBS_NV", int64_t(VK_GEOMETRY_TYPE_AABBS_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_calibrated_timestamps)
class EnumerationVkTimeDomainKHR:public das::Enumeration{public:
EnumerationVkTimeDomainKHR():das::Enumeration("VkTimeDomainKHR") {
  external=true; cppName="VkTimeDomainKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkTimeDomainKHR>::type>::type;
  addI("DEVICE_KHR", int64_t(VK_TIME_DOMAIN_DEVICE_KHR), das::LineInfo());
  addI("CLOCK_MONOTONIC_KHR", int64_t(VK_TIME_DOMAIN_CLOCK_MONOTONIC_KHR), das::LineInfo());
  addI("CLOCK_MONOTONIC_RAW_KHR", int64_t(VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_KHR), das::LineInfo());
  addI("QUERY_PERFORMANCE_COUNTER_KHR", int64_t(VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_KHR), das::LineInfo());
#if defined(VK_EXT_calibrated_timestamps)
  addI("DEVICE_EXT", int64_t(VK_TIME_DOMAIN_DEVICE_EXT), das::LineInfo());
  addI("CLOCK_MONOTONIC_EXT", int64_t(VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT), das::LineInfo());
  addI("CLOCK_MONOTONIC_RAW_EXT", int64_t(VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT), das::LineInfo());
  addI("QUERY_PERFORMANCE_COUNTER_EXT", int64_t(VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT), das::LineInfo());
#endif /* defined(VK_EXT_calibrated_timestamps) */
} };
#endif /* defined(VK_KHR_calibrated_timestamps) */
#if defined(VK_KHR_cooperative_matrix)
class EnumerationVkComponentTypeKHR:public das::Enumeration{public:
EnumerationVkComponentTypeKHR():das::Enumeration("VkComponentTypeKHR") {
  external=true; cppName="VkComponentTypeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkComponentTypeKHR>::type>::type;
  addI("FLOAT16_KHR", int64_t(VK_COMPONENT_TYPE_FLOAT16_KHR), das::LineInfo());
  addI("FLOAT32_KHR", int64_t(VK_COMPONENT_TYPE_FLOAT32_KHR), das::LineInfo());
  addI("FLOAT64_KHR", int64_t(VK_COMPONENT_TYPE_FLOAT64_KHR), das::LineInfo());
  addI("SINT8_KHR", int64_t(VK_COMPONENT_TYPE_SINT8_KHR), das::LineInfo());
  addI("SINT16_KHR", int64_t(VK_COMPONENT_TYPE_SINT16_KHR), das::LineInfo());
  addI("SINT32_KHR", int64_t(VK_COMPONENT_TYPE_SINT32_KHR), das::LineInfo());
  addI("SINT64_KHR", int64_t(VK_COMPONENT_TYPE_SINT64_KHR), das::LineInfo());
  addI("UINT8_KHR", int64_t(VK_COMPONENT_TYPE_UINT8_KHR), das::LineInfo());
  addI("UINT16_KHR", int64_t(VK_COMPONENT_TYPE_UINT16_KHR), das::LineInfo());
  addI("UINT32_KHR", int64_t(VK_COMPONENT_TYPE_UINT32_KHR), das::LineInfo());
  addI("UINT64_KHR", int64_t(VK_COMPONENT_TYPE_UINT64_KHR), das::LineInfo());
#if defined(VK_NV_cooperative_matrix)
  addI("FLOAT16_NV", int64_t(VK_COMPONENT_TYPE_FLOAT16_NV), das::LineInfo());
  addI("FLOAT32_NV", int64_t(VK_COMPONENT_TYPE_FLOAT32_NV), das::LineInfo());
  addI("FLOAT64_NV", int64_t(VK_COMPONENT_TYPE_FLOAT64_NV), das::LineInfo());
  addI("SINT8_NV", int64_t(VK_COMPONENT_TYPE_SINT8_NV), das::LineInfo());
  addI("SINT16_NV", int64_t(VK_COMPONENT_TYPE_SINT16_NV), das::LineInfo());
  addI("SINT32_NV", int64_t(VK_COMPONENT_TYPE_SINT32_NV), das::LineInfo());
  addI("SINT64_NV", int64_t(VK_COMPONENT_TYPE_SINT64_NV), das::LineInfo());
  addI("UINT8_NV", int64_t(VK_COMPONENT_TYPE_UINT8_NV), das::LineInfo());
  addI("UINT16_NV", int64_t(VK_COMPONENT_TYPE_UINT16_NV), das::LineInfo());
  addI("UINT32_NV", int64_t(VK_COMPONENT_TYPE_UINT32_NV), das::LineInfo());
  addI("UINT64_NV", int64_t(VK_COMPONENT_TYPE_UINT64_NV), das::LineInfo());
#endif /* defined(VK_NV_cooperative_matrix) */
} };
class EnumerationVkScopeKHR:public das::Enumeration{public:
EnumerationVkScopeKHR():das::Enumeration("VkScopeKHR") {
  external=true; cppName="VkScopeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkScopeKHR>::type>::type;
  addI("DEVICE_KHR", int64_t(VK_SCOPE_DEVICE_KHR), das::LineInfo());
  addI("WORKGROUP_KHR", int64_t(VK_SCOPE_WORKGROUP_KHR), das::LineInfo());
  addI("SUBGROUP_KHR", int64_t(VK_SCOPE_SUBGROUP_KHR), das::LineInfo());
  addI("QUEUE_FAMILY_KHR", int64_t(VK_SCOPE_QUEUE_FAMILY_KHR), das::LineInfo());
#if defined(VK_NV_cooperative_matrix)
  addI("DEVICE_NV", int64_t(VK_SCOPE_DEVICE_NV), das::LineInfo());
  addI("WORKGROUP_NV", int64_t(VK_SCOPE_WORKGROUP_NV), das::LineInfo());
  addI("SUBGROUP_NV", int64_t(VK_SCOPE_SUBGROUP_NV), das::LineInfo());
  addI("QUEUE_FAMILY_NV", int64_t(VK_SCOPE_QUEUE_FAMILY_NV), das::LineInfo());
#endif /* defined(VK_NV_cooperative_matrix) */
} };
#endif /* defined(VK_KHR_cooperative_matrix) */
#if defined(VK_KHR_display)
class EnumerationVkDisplayPlaneAlphaFlagBitsKHR:public das::Enumeration{public:
EnumerationVkDisplayPlaneAlphaFlagBitsKHR():das::Enumeration("VkDisplayPlaneAlphaFlagBitsKHR") {
  external=true; cppName="VkDisplayPlaneAlphaFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>::type;
  addI("OPAQUE_BIT_KHR", int64_t(VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR), das::LineInfo());
  addI("GLOBAL_BIT_KHR", int64_t(VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR), das::LineInfo());
  addI("PER_PIXEL_BIT_KHR", int64_t(VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR), das::LineInfo());
  addI("PER_PIXEL_PREMULTIPLIED_BIT_KHR", int64_t(VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_fragment_shading_rate)
class EnumerationVkFragmentShadingRateCombinerOpKHR:public das::Enumeration{public:
EnumerationVkFragmentShadingRateCombinerOpKHR():das::Enumeration("VkFragmentShadingRateCombinerOpKHR") {
  external=true; cppName="VkFragmentShadingRateCombinerOpKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFragmentShadingRateCombinerOpKHR>::type>::type;
  addI("KEEP_KHR", int64_t(VK_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_KHR), das::LineInfo());
  addI("REPLACE_KHR", int64_t(VK_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_KHR), das::LineInfo());
  addI("MIN_KHR", int64_t(VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_KHR), das::LineInfo());
  addI("MAX_KHR", int64_t(VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_KHR), das::LineInfo());
  addI("MUL_KHR", int64_t(VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_maintenance7)
class EnumerationVkPhysicalDeviceLayeredApiKHR:public das::Enumeration{public:
EnumerationVkPhysicalDeviceLayeredApiKHR():das::Enumeration("VkPhysicalDeviceLayeredApiKHR") {
  external=true; cppName="VkPhysicalDeviceLayeredApiKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPhysicalDeviceLayeredApiKHR>::type>::type;
  addI("VULKAN_KHR", int64_t(VK_PHYSICAL_DEVICE_LAYERED_API_VULKAN_KHR), das::LineInfo());
  addI("D3D12_KHR", int64_t(VK_PHYSICAL_DEVICE_LAYERED_API_D3D12_KHR), das::LineInfo());
  addI("METAL_KHR", int64_t(VK_PHYSICAL_DEVICE_LAYERED_API_METAL_KHR), das::LineInfo());
  addI("OPENGL_KHR", int64_t(VK_PHYSICAL_DEVICE_LAYERED_API_OPENGL_KHR), das::LineInfo());
  addI("OPENGLES_KHR", int64_t(VK_PHYSICAL_DEVICE_LAYERED_API_OPENGLES_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_maintenance7) */
#if defined(VK_KHR_performance_query)
class EnumerationVkPerformanceCounterDescriptionFlagBitsKHR:public das::Enumeration{public:
EnumerationVkPerformanceCounterDescriptionFlagBitsKHR():das::Enumeration("VkPerformanceCounterDescriptionFlagBitsKHR") {
  external=true; cppName="VkPerformanceCounterDescriptionFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPerformanceCounterDescriptionFlagBitsKHR>::type>::type;
  addI("PERFORMANCE_IMPACTING_BIT_KHR", int64_t(VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR), das::LineInfo());
  addI("CONCURRENTLY_IMPACTED_BIT_KHR", int64_t(VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR), das::LineInfo());
} };
class EnumerationVkPerformanceCounterScopeKHR:public das::Enumeration{public:
EnumerationVkPerformanceCounterScopeKHR():das::Enumeration("VkPerformanceCounterScopeKHR") {
  external=true; cppName="VkPerformanceCounterScopeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPerformanceCounterScopeKHR>::type>::type;
  addI("COMMAND_BUFFER_KHR", int64_t(VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR), das::LineInfo());
  addI("RENDER_PASS_KHR", int64_t(VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR), das::LineInfo());
  addI("COMMAND_KHR", int64_t(VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR), das::LineInfo());
} };
class EnumerationVkPerformanceCounterStorageKHR:public das::Enumeration{public:
EnumerationVkPerformanceCounterStorageKHR():das::Enumeration("VkPerformanceCounterStorageKHR") {
  external=true; cppName="VkPerformanceCounterStorageKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPerformanceCounterStorageKHR>::type>::type;
  addI("INT32_KHR", int64_t(VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR), das::LineInfo());
  addI("INT64_KHR", int64_t(VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR), das::LineInfo());
  addI("UINT32_KHR", int64_t(VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR), das::LineInfo());
  addI("UINT64_KHR", int64_t(VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR), das::LineInfo());
  addI("FLOAT32_KHR", int64_t(VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR), das::LineInfo());
  addI("FLOAT64_KHR", int64_t(VK_PERFORMANCE_COUNTER_STORAGE_FLOAT64_KHR), das::LineInfo());
} };
class EnumerationVkPerformanceCounterUnitKHR:public das::Enumeration{public:
EnumerationVkPerformanceCounterUnitKHR():das::Enumeration("VkPerformanceCounterUnitKHR") {
  external=true; cppName="VkPerformanceCounterUnitKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPerformanceCounterUnitKHR>::type>::type;
  addI("GENERIC_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR), das::LineInfo());
  addI("PERCENTAGE_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR), das::LineInfo());
  addI("NANOSECONDS_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR), das::LineInfo());
  addI("BYTES_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR), das::LineInfo());
  addI("BYTES_PER_SECOND_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR), das::LineInfo());
  addI("KELVIN_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR), das::LineInfo());
  addI("WATTS_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR), das::LineInfo());
  addI("VOLTS_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR), das::LineInfo());
  addI("AMPS_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR), das::LineInfo());
  addI("HERTZ_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR), das::LineInfo());
  addI("CYCLES_KHR", int64_t(VK_PERFORMANCE_COUNTER_UNIT_CYCLES_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_KHR_pipeline_executable_properties)
class EnumerationVkPipelineExecutableStatisticFormatKHR:public das::Enumeration{public:
EnumerationVkPipelineExecutableStatisticFormatKHR():das::Enumeration("VkPipelineExecutableStatisticFormatKHR") {
  external=true; cppName="VkPipelineExecutableStatisticFormatKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPipelineExecutableStatisticFormatKHR>::type>::type;
  addI("BOOL32_KHR", int64_t(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR), das::LineInfo());
  addI("INT64_KHR", int64_t(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR), das::LineInfo());
  addI("UINT64_KHR", int64_t(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR), das::LineInfo());
  addI("FLOAT64_KHR", int64_t(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_KHR_ray_tracing_pipeline)
class EnumerationVkRayTracingShaderGroupTypeKHR:public das::Enumeration{public:
EnumerationVkRayTracingShaderGroupTypeKHR():das::Enumeration("VkRayTracingShaderGroupTypeKHR") {
  external=true; cppName="VkRayTracingShaderGroupTypeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkRayTracingShaderGroupTypeKHR>::type>::type;
  addI("GENERAL_KHR", int64_t(VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR), das::LineInfo());
  addI("TRIANGLES_HIT_GROUP_KHR", int64_t(VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR), das::LineInfo());
  addI("PROCEDURAL_HIT_GROUP_KHR", int64_t(VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR), das::LineInfo());
#if defined(VK_NV_ray_tracing)
  addI("GENERAL_NV", int64_t(VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV), das::LineInfo());
  addI("TRIANGLES_HIT_GROUP_NV", int64_t(VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV), das::LineInfo());
  addI("PROCEDURAL_HIT_GROUP_NV", int64_t(VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) */
} };
class EnumerationVkShaderGroupShaderKHR:public das::Enumeration{public:
EnumerationVkShaderGroupShaderKHR():das::Enumeration("VkShaderGroupShaderKHR") {
  external=true; cppName="VkShaderGroupShaderKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkShaderGroupShaderKHR>::type>::type;
  addI("GENERAL_KHR", int64_t(VK_SHADER_GROUP_SHADER_GENERAL_KHR), das::LineInfo());
  addI("CLOSEST_HIT_KHR", int64_t(VK_SHADER_GROUP_SHADER_CLOSEST_HIT_KHR), das::LineInfo());
  addI("ANY_HIT_KHR", int64_t(VK_SHADER_GROUP_SHADER_ANY_HIT_KHR), das::LineInfo());
  addI("INTERSECTION_KHR", int64_t(VK_SHADER_GROUP_SHADER_INTERSECTION_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_surface)
class EnumerationVkColorSpaceKHR:public das::Enumeration{public:
EnumerationVkColorSpaceKHR():das::Enumeration("VkColorSpaceKHR") {
  external=true; cppName="VkColorSpaceKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkColorSpaceKHR>::type>::type;
  addI("SRGB_NONLINEAR_KHR", int64_t(VK_COLOR_SPACE_SRGB_NONLINEAR_KHR), das::LineInfo());
#if defined(VK_AMD_display_native_hdr)
  addI("DISPLAY_NATIVE_AMD", int64_t(VK_COLOR_SPACE_DISPLAY_NATIVE_AMD), das::LineInfo());
#endif /* defined(VK_AMD_display_native_hdr) */
#if defined(VK_EXT_swapchain_colorspace)
  addI("DISPLAY_P3_NONLINEAR_EXT", int64_t(VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT), das::LineInfo());
  addI("EXTENDED_SRGB_LINEAR_EXT", int64_t(VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT), das::LineInfo());
  addI("DISPLAY_P3_LINEAR_EXT", int64_t(VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT), das::LineInfo());
  addI("DCI_P3_NONLINEAR_EXT", int64_t(VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT), das::LineInfo());
  addI("BT709_LINEAR_EXT", int64_t(VK_COLOR_SPACE_BT709_LINEAR_EXT), das::LineInfo());
  addI("BT709_NONLINEAR_EXT", int64_t(VK_COLOR_SPACE_BT709_NONLINEAR_EXT), das::LineInfo());
  addI("BT2020_LINEAR_EXT", int64_t(VK_COLOR_SPACE_BT2020_LINEAR_EXT), das::LineInfo());
  addI("HDR10_ST2084_EXT", int64_t(VK_COLOR_SPACE_HDR10_ST2084_EXT), das::LineInfo());
  addI("DOLBYVISION_EXT", int64_t(VK_COLOR_SPACE_DOLBYVISION_EXT), das::LineInfo());
  addI("HDR10_HLG_EXT", int64_t(VK_COLOR_SPACE_HDR10_HLG_EXT), das::LineInfo());
  addI("ADOBERGB_LINEAR_EXT", int64_t(VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT), das::LineInfo());
  addI("ADOBERGB_NONLINEAR_EXT", int64_t(VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT), das::LineInfo());
  addI("PASS_THROUGH_EXT", int64_t(VK_COLOR_SPACE_PASS_THROUGH_EXT), das::LineInfo());
  addI("EXTENDED_SRGB_NONLINEAR_EXT", int64_t(VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT), das::LineInfo());
  addI("DCI_P3_LINEAR_EXT", int64_t(VK_COLOR_SPACE_DCI_P3_LINEAR_EXT), das::LineInfo());
#endif /* defined(VK_EXT_swapchain_colorspace) */
} };
class EnumerationVkCompositeAlphaFlagBitsKHR:public das::Enumeration{public:
EnumerationVkCompositeAlphaFlagBitsKHR():das::Enumeration("VkCompositeAlphaFlagBitsKHR") {
  external=true; cppName="VkCompositeAlphaFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>::type;
  addI("OPAQUE_BIT_KHR", int64_t(VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR), das::LineInfo());
  addI("PRE_MULTIPLIED_BIT_KHR", int64_t(VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR), das::LineInfo());
  addI("POST_MULTIPLIED_BIT_KHR", int64_t(VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR), das::LineInfo());
  addI("INHERIT_BIT_KHR", int64_t(VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR), das::LineInfo());
} };
class EnumerationVkPresentModeKHR:public das::Enumeration{public:
EnumerationVkPresentModeKHR():das::Enumeration("VkPresentModeKHR") {
  external=true; cppName="VkPresentModeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkPresentModeKHR>::type>::type;
  addI("IMMEDIATE_KHR", int64_t(VK_PRESENT_MODE_IMMEDIATE_KHR), das::LineInfo());
  addI("MAILBOX_KHR", int64_t(VK_PRESENT_MODE_MAILBOX_KHR), das::LineInfo());
  addI("FIFO_KHR", int64_t(VK_PRESENT_MODE_FIFO_KHR), das::LineInfo());
  addI("FIFO_RELAXED_KHR", int64_t(VK_PRESENT_MODE_FIFO_RELAXED_KHR), das::LineInfo());
#if defined(VK_EXT_present_mode_fifo_latest_ready)
  addI("FIFO_LATEST_READY_EXT", int64_t(VK_PRESENT_MODE_FIFO_LATEST_READY_EXT), das::LineInfo());
#endif /* defined(VK_EXT_present_mode_fifo_latest_ready) */
#if defined(VK_KHR_shared_presentable_image)
  addI("SHARED_DEMAND_REFRESH_KHR", int64_t(VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR), das::LineInfo());
  addI("SHARED_CONTINUOUS_REFRESH_KHR", int64_t(VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR), das::LineInfo());
#endif /* defined(VK_KHR_shared_presentable_image) */
} };
class EnumerationVkSurfaceTransformFlagBitsKHR:public das::Enumeration{public:
EnumerationVkSurfaceTransformFlagBitsKHR():das::Enumeration("VkSurfaceTransformFlagBitsKHR") {
  external=true; cppName="VkSurfaceTransformFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>::type;
  addI("IDENTITY_BIT_KHR", int64_t(VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR), das::LineInfo());
  addI("ROTATE_90_BIT_KHR", int64_t(VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR), das::LineInfo());
  addI("ROTATE_180_BIT_KHR", int64_t(VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR), das::LineInfo());
  addI("ROTATE_270_BIT_KHR", int64_t(VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR), das::LineInfo());
  addI("HORIZONTAL_MIRROR_BIT_KHR", int64_t(VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR), das::LineInfo());
  addI("HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR", int64_t(VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR), das::LineInfo());
  addI("HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR", int64_t(VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR), das::LineInfo());
  addI("HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR", int64_t(VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR), das::LineInfo());
  addI("INHERIT_BIT_KHR", int64_t(VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_video_decode_h264)
class EnumerationVkVideoDecodeH264PictureLayoutFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoDecodeH264PictureLayoutFlagBitsKHR():das::Enumeration("VkVideoDecodeH264PictureLayoutFlagBitsKHR") {
  external=true; cppName="VkVideoDecodeH264PictureLayoutFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoDecodeH264PictureLayoutFlagBitsKHR>::type>::type;
  addI("PROGRESSIVE_KHR", int64_t(VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_PROGRESSIVE_KHR), das::LineInfo());
  addI("INTERLACED_INTERLEAVED_LINES_BIT_KHR", int64_t(VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_INTERLEAVED_LINES_BIT_KHR), das::LineInfo());
  addI("INTERLACED_SEPARATE_PLANES_BIT_KHR", int64_t(VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_SEPARATE_PLANES_BIT_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_video_decode_h264) */
#if defined(VK_KHR_video_decode_queue)
class EnumerationVkVideoDecodeCapabilityFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoDecodeCapabilityFlagBitsKHR():das::Enumeration("VkVideoDecodeCapabilityFlagBitsKHR") {
  external=true; cppName="VkVideoDecodeCapabilityFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoDecodeCapabilityFlagBitsKHR>::type>::type;
  addI("COINCIDE_BIT_KHR", int64_t(VK_VIDEO_DECODE_CAPABILITY_DPB_AND_OUTPUT_COINCIDE_BIT_KHR), das::LineInfo());
  addI("DISTINCT_BIT_KHR", int64_t(VK_VIDEO_DECODE_CAPABILITY_DPB_AND_OUTPUT_DISTINCT_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoDecodeUsageFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoDecodeUsageFlagBitsKHR():das::Enumeration("VkVideoDecodeUsageFlagBitsKHR") {
  external=true; cppName="VkVideoDecodeUsageFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoDecodeUsageFlagBitsKHR>::type>::type;
  addI("DEFAULT_KHR", int64_t(VK_VIDEO_DECODE_USAGE_DEFAULT_KHR), das::LineInfo());
  addI("TRANSCODING_BIT_KHR", int64_t(VK_VIDEO_DECODE_USAGE_TRANSCODING_BIT_KHR), das::LineInfo());
  addI("OFFLINE_BIT_KHR", int64_t(VK_VIDEO_DECODE_USAGE_OFFLINE_BIT_KHR), das::LineInfo());
  addI("STREAMING_BIT_KHR", int64_t(VK_VIDEO_DECODE_USAGE_STREAMING_BIT_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_av1)
class EnumerationVkVideoEncodeAV1CapabilityFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeAV1CapabilityFlagBitsKHR():das::Enumeration("VkVideoEncodeAV1CapabilityFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeAV1CapabilityFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeAV1CapabilityFlagBitsKHR>::type>::type;
  addI("PER_RATE_CONTROL_GROUP_MIN_MAX_Q_INDEX_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_CAPABILITY_PER_RATE_CONTROL_GROUP_MIN_MAX_Q_INDEX_BIT_KHR), das::LineInfo());
  addI("GENERATE_OBU_EXTENSION_HEADER_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_CAPABILITY_GENERATE_OBU_EXTENSION_HEADER_BIT_KHR), das::LineInfo());
  addI("PRIMARY_REFERENCE_CDF_ONLY_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_CAPABILITY_PRIMARY_REFERENCE_CDF_ONLY_BIT_KHR), das::LineInfo());
  addI("FRAME_SIZE_OVERRIDE_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_CAPABILITY_FRAME_SIZE_OVERRIDE_BIT_KHR), das::LineInfo());
  addI("MOTION_VECTOR_SCALING_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_CAPABILITY_MOTION_VECTOR_SCALING_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeAV1PredictionModeKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeAV1PredictionModeKHR():das::Enumeration("VkVideoEncodeAV1PredictionModeKHR") {
  external=true; cppName="VkVideoEncodeAV1PredictionModeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeAV1PredictionModeKHR>::type>::type;
  addI("INTRA_ONLY_KHR", int64_t(VK_VIDEO_ENCODE_AV1_PREDICTION_MODE_INTRA_ONLY_KHR), das::LineInfo());
  addI("SINGLE_REFERENCE_KHR", int64_t(VK_VIDEO_ENCODE_AV1_PREDICTION_MODE_SINGLE_REFERENCE_KHR), das::LineInfo());
  addI("UNIDIRECTIONAL_COMPOUND_KHR", int64_t(VK_VIDEO_ENCODE_AV1_PREDICTION_MODE_UNIDIRECTIONAL_COMPOUND_KHR), das::LineInfo());
  addI("BIDIRECTIONAL_COMPOUND_KHR", int64_t(VK_VIDEO_ENCODE_AV1_PREDICTION_MODE_BIDIRECTIONAL_COMPOUND_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeAV1RateControlFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeAV1RateControlFlagBitsKHR():das::Enumeration("VkVideoEncodeAV1RateControlFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeAV1RateControlFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeAV1RateControlFlagBitsKHR>::type>::type;
  addI("REGULAR_GOP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_RATE_CONTROL_REGULAR_GOP_BIT_KHR), das::LineInfo());
  addI("TEMPORAL_LAYER_PATTERN_DYADIC_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_RATE_CONTROL_TEMPORAL_LAYER_PATTERN_DYADIC_BIT_KHR), das::LineInfo());
  addI("REFERENCE_PATTERN_FLAT_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_RATE_CONTROL_REFERENCE_PATTERN_FLAT_BIT_KHR), das::LineInfo());
  addI("REFERENCE_PATTERN_DYADIC_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_RATE_CONTROL_REFERENCE_PATTERN_DYADIC_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeAV1RateControlGroupKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeAV1RateControlGroupKHR():das::Enumeration("VkVideoEncodeAV1RateControlGroupKHR") {
  external=true; cppName="VkVideoEncodeAV1RateControlGroupKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeAV1RateControlGroupKHR>::type>::type;
  addI("INTRA_KHR", int64_t(VK_VIDEO_ENCODE_AV1_RATE_CONTROL_GROUP_INTRA_KHR), das::LineInfo());
  addI("PREDICTIVE_KHR", int64_t(VK_VIDEO_ENCODE_AV1_RATE_CONTROL_GROUP_PREDICTIVE_KHR), das::LineInfo());
  addI("BIPREDICTIVE_KHR", int64_t(VK_VIDEO_ENCODE_AV1_RATE_CONTROL_GROUP_BIPREDICTIVE_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeAV1StdFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeAV1StdFlagBitsKHR():das::Enumeration("VkVideoEncodeAV1StdFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeAV1StdFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeAV1StdFlagBitsKHR>::type>::type;
  addI("UNIFORM_TILE_SPACING_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_STD_UNIFORM_TILE_SPACING_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("SKIP_MODE_PRESENT_UNSET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_STD_SKIP_MODE_PRESENT_UNSET_BIT_KHR), das::LineInfo());
  addI("PRIMARY_REF_FRAME_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_STD_PRIMARY_REF_FRAME_BIT_KHR), das::LineInfo());
  addI("DELTA_Q_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_STD_DELTA_Q_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeAV1SuperblockSizeFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeAV1SuperblockSizeFlagBitsKHR():das::Enumeration("VkVideoEncodeAV1SuperblockSizeFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeAV1SuperblockSizeFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeAV1SuperblockSizeFlagBitsKHR>::type>::type;
  addI("_64_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_SUPERBLOCK_SIZE_64_BIT_KHR), das::LineInfo());
  addI("_128_BIT_KHR", int64_t(VK_VIDEO_ENCODE_AV1_SUPERBLOCK_SIZE_128_BIT_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_h264)
class EnumerationVkVideoEncodeH264CapabilityFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeH264CapabilityFlagBitsKHR():das::Enumeration("VkVideoEncodeH264CapabilityFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeH264CapabilityFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeH264CapabilityFlagBitsKHR>::type>::type;
  addI("HRD_COMPLIANCE_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_HRD_COMPLIANCE_BIT_KHR), das::LineInfo());
  addI("PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR), das::LineInfo());
  addI("ROW_UNALIGNED_SLICE_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_ROW_UNALIGNED_SLICE_BIT_KHR), das::LineInfo());
  addI("DIFFERENT_SLICE_TYPE_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_DIFFERENT_SLICE_TYPE_BIT_KHR), das::LineInfo());
  addI("B_FRAME_IN_L0_LIST_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_B_FRAME_IN_L0_LIST_BIT_KHR), das::LineInfo());
  addI("B_FRAME_IN_L1_LIST_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_B_FRAME_IN_L1_LIST_BIT_KHR), das::LineInfo());
  addI("PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR), das::LineInfo());
  addI("PER_SLICE_CONSTANT_QP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_PER_SLICE_CONSTANT_QP_BIT_KHR), das::LineInfo());
  addI("GENERATE_PREFIX_NALU_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_GENERATE_PREFIX_NALU_BIT_KHR), das::LineInfo());
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h264)
  addI("MB_QP_DIFF_WRAPAROUND_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_CAPABILITY_MB_QP_DIFF_WRAPAROUND_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h264) */
} };
class EnumerationVkVideoEncodeH264RateControlFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeH264RateControlFlagBitsKHR():das::Enumeration("VkVideoEncodeH264RateControlFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeH264RateControlFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeH264RateControlFlagBitsKHR>::type>::type;
  addI("ATTEMPT_HRD_COMPLIANCE_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_RATE_CONTROL_ATTEMPT_HRD_COMPLIANCE_BIT_KHR), das::LineInfo());
  addI("REGULAR_GOP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_RATE_CONTROL_REGULAR_GOP_BIT_KHR), das::LineInfo());
  addI("REFERENCE_PATTERN_FLAT_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_RATE_CONTROL_REFERENCE_PATTERN_FLAT_BIT_KHR), das::LineInfo());
  addI("REFERENCE_PATTERN_DYADIC_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_RATE_CONTROL_REFERENCE_PATTERN_DYADIC_BIT_KHR), das::LineInfo());
  addI("TEMPORAL_LAYER_PATTERN_DYADIC_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_RATE_CONTROL_TEMPORAL_LAYER_PATTERN_DYADIC_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeH264StdFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeH264StdFlagBitsKHR():das::Enumeration("VkVideoEncodeH264StdFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeH264StdFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeH264StdFlagBitsKHR>::type>::type;
  addI("SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("QPPRIME_Y_ZERO_TRANSFORM_BYPASS_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_QPPRIME_Y_ZERO_TRANSFORM_BYPASS_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("SCALING_MATRIX_PRESENT_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_SCALING_MATRIX_PRESENT_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("CHROMA_QP_INDEX_OFFSET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_CHROMA_QP_INDEX_OFFSET_BIT_KHR), das::LineInfo());
  addI("SECOND_CHROMA_QP_INDEX_OFFSET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_SECOND_CHROMA_QP_INDEX_OFFSET_BIT_KHR), das::LineInfo());
  addI("PIC_INIT_QP_MINUS26_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_PIC_INIT_QP_MINUS26_BIT_KHR), das::LineInfo());
  addI("WEIGHTED_PRED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_WEIGHTED_PRED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("WEIGHTED_BIPRED_IDC_EXPLICIT_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_WEIGHTED_BIPRED_IDC_EXPLICIT_BIT_KHR), das::LineInfo());
  addI("WEIGHTED_BIPRED_IDC_IMPLICIT_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_WEIGHTED_BIPRED_IDC_IMPLICIT_BIT_KHR), das::LineInfo());
  addI("TRANSFORM_8X8_MODE_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_TRANSFORM_8X8_MODE_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("DIRECT_SPATIAL_MV_PRED_FLAG_UNSET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_DIRECT_SPATIAL_MV_PRED_FLAG_UNSET_BIT_KHR), das::LineInfo());
  addI("ENTROPY_CODING_MODE_FLAG_UNSET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_ENTROPY_CODING_MODE_FLAG_UNSET_BIT_KHR), das::LineInfo());
  addI("ENTROPY_CODING_MODE_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_ENTROPY_CODING_MODE_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("DIRECT_8X8_INFERENCE_FLAG_UNSET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_DIRECT_8X8_INFERENCE_FLAG_UNSET_BIT_KHR), das::LineInfo());
  addI("CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("DEBLOCKING_FILTER_DISABLED_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_DEBLOCKING_FILTER_DISABLED_BIT_KHR), das::LineInfo());
  addI("DEBLOCKING_FILTER_ENABLED_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_DEBLOCKING_FILTER_ENABLED_BIT_KHR), das::LineInfo());
  addI("DEBLOCKING_FILTER_PARTIAL_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_DEBLOCKING_FILTER_PARTIAL_BIT_KHR), das::LineInfo());
  addI("SLICE_QP_DELTA_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_SLICE_QP_DELTA_BIT_KHR), das::LineInfo());
  addI("DIFFERENT_SLICE_QP_DELTA_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H264_STD_DIFFERENT_SLICE_QP_DELTA_BIT_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_h265)
class EnumerationVkVideoEncodeH265CapabilityFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeH265CapabilityFlagBitsKHR():das::Enumeration("VkVideoEncodeH265CapabilityFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeH265CapabilityFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeH265CapabilityFlagBitsKHR>::type>::type;
  addI("HRD_COMPLIANCE_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_HRD_COMPLIANCE_BIT_KHR), das::LineInfo());
  addI("PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR), das::LineInfo());
  addI("ROW_UNALIGNED_SLICE_SEGMENT_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_ROW_UNALIGNED_SLICE_SEGMENT_BIT_KHR), das::LineInfo());
  addI("DIFFERENT_SLICE_SEGMENT_TYPE_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_DIFFERENT_SLICE_SEGMENT_TYPE_BIT_KHR), das::LineInfo());
  addI("B_FRAME_IN_L0_LIST_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_B_FRAME_IN_L0_LIST_BIT_KHR), das::LineInfo());
  addI("B_FRAME_IN_L1_LIST_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_B_FRAME_IN_L1_LIST_BIT_KHR), das::LineInfo());
  addI("PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR), das::LineInfo());
  addI("PER_SLICE_SEGMENT_CONSTANT_QP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_PER_SLICE_SEGMENT_CONSTANT_QP_BIT_KHR), das::LineInfo());
  addI("MULTIPLE_TILES_PER_SLICE_SEGMENT_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_TILES_PER_SLICE_SEGMENT_BIT_KHR), das::LineInfo());
  addI("MULTIPLE_SLICE_SEGMENTS_PER_TILE_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_MULTIPLE_SLICE_SEGMENTS_PER_TILE_BIT_KHR), das::LineInfo());
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265)
  addI("CU_QP_DIFF_WRAPAROUND_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CAPABILITY_CU_QP_DIFF_WRAPAROUND_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265) */
} };
class EnumerationVkVideoEncodeH265CtbSizeFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeH265CtbSizeFlagBitsKHR():das::Enumeration("VkVideoEncodeH265CtbSizeFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeH265CtbSizeFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeH265CtbSizeFlagBitsKHR>::type>::type;
  addI("_16_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CTB_SIZE_16_BIT_KHR), das::LineInfo());
  addI("_32_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CTB_SIZE_32_BIT_KHR), das::LineInfo());
  addI("_64_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_CTB_SIZE_64_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeH265RateControlFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeH265RateControlFlagBitsKHR():das::Enumeration("VkVideoEncodeH265RateControlFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeH265RateControlFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeH265RateControlFlagBitsKHR>::type>::type;
  addI("ATTEMPT_HRD_COMPLIANCE_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_RATE_CONTROL_ATTEMPT_HRD_COMPLIANCE_BIT_KHR), das::LineInfo());
  addI("REGULAR_GOP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_RATE_CONTROL_REGULAR_GOP_BIT_KHR), das::LineInfo());
  addI("REFERENCE_PATTERN_FLAT_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_RATE_CONTROL_REFERENCE_PATTERN_FLAT_BIT_KHR), das::LineInfo());
  addI("REFERENCE_PATTERN_DYADIC_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_RATE_CONTROL_REFERENCE_PATTERN_DYADIC_BIT_KHR), das::LineInfo());
  addI("TEMPORAL_SUB_LAYER_PATTERN_DYADIC_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_RATE_CONTROL_TEMPORAL_SUB_LAYER_PATTERN_DYADIC_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeH265StdFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeH265StdFlagBitsKHR():das::Enumeration("VkVideoEncodeH265StdFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeH265StdFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeH265StdFlagBitsKHR>::type>::type;
  addI("SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("SAMPLE_ADAPTIVE_OFFSET_ENABLED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_SAMPLE_ADAPTIVE_OFFSET_ENABLED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("SCALING_LIST_DATA_PRESENT_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_SCALING_LIST_DATA_PRESENT_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("PCM_ENABLED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_PCM_ENABLED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("SPS_TEMPORAL_MVP_ENABLED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_SPS_TEMPORAL_MVP_ENABLED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("INIT_QP_MINUS26_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_INIT_QP_MINUS26_BIT_KHR), das::LineInfo());
  addI("WEIGHTED_PRED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_WEIGHTED_PRED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("WEIGHTED_BIPRED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_WEIGHTED_BIPRED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("LOG2_PARALLEL_MERGE_LEVEL_MINUS2_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_LOG2_PARALLEL_MERGE_LEVEL_MINUS2_BIT_KHR), das::LineInfo());
  addI("SIGN_DATA_HIDING_ENABLED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_SIGN_DATA_HIDING_ENABLED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("TRANSFORM_SKIP_ENABLED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_TRANSFORM_SKIP_ENABLED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("TRANSFORM_SKIP_ENABLED_FLAG_UNSET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_TRANSFORM_SKIP_ENABLED_FLAG_UNSET_BIT_KHR), das::LineInfo());
  addI("PPS_SLICE_CHROMA_QP_OFFSETS_PRESENT_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_PPS_SLICE_CHROMA_QP_OFFSETS_PRESENT_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("TRANSQUANT_BYPASS_ENABLED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_TRANSQUANT_BYPASS_ENABLED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("ENTROPY_CODING_SYNC_ENABLED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_ENTROPY_CODING_SYNC_ENABLED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("DEBLOCKING_FILTER_OVERRIDE_ENABLED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_DEBLOCKING_FILTER_OVERRIDE_ENABLED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("DEPENDENT_SLICE_SEGMENTS_ENABLED_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_DEPENDENT_SLICE_SEGMENTS_ENABLED_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("DEPENDENT_SLICE_SEGMENT_FLAG_SET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_DEPENDENT_SLICE_SEGMENT_FLAG_SET_BIT_KHR), das::LineInfo());
  addI("SLICE_QP_DELTA_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_SLICE_QP_DELTA_BIT_KHR), das::LineInfo());
  addI("DIFFERENT_SLICE_QP_DELTA_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_STD_DIFFERENT_SLICE_QP_DELTA_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeH265TransformBlockSizeFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeH265TransformBlockSizeFlagBitsKHR():das::Enumeration("VkVideoEncodeH265TransformBlockSizeFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeH265TransformBlockSizeFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeH265TransformBlockSizeFlagBitsKHR>::type>::type;
  addI("_4_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_4_BIT_KHR), das::LineInfo());
  addI("_8_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_8_BIT_KHR), das::LineInfo());
  addI("_16_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_16_BIT_KHR), das::LineInfo());
  addI("_32_BIT_KHR", int64_t(VK_VIDEO_ENCODE_H265_TRANSFORM_BLOCK_SIZE_32_BIT_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_queue)
class EnumerationVkVideoEncodeCapabilityFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeCapabilityFlagBitsKHR():das::Enumeration("VkVideoEncodeCapabilityFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeCapabilityFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeCapabilityFlagBitsKHR>::type>::type;
  addI("PRECEDING_EXTERNALLY_ENCODED_BYTES_BIT_KHR", int64_t(VK_VIDEO_ENCODE_CAPABILITY_PRECEDING_EXTERNALLY_ENCODED_BYTES_BIT_KHR), das::LineInfo());
  addI("INSUFFICIENT_BITSTREAM_BUFFER_RANGE_DETECTION_BIT_KHR", int64_t(VK_VIDEO_ENCODE_CAPABILITY_INSUFFICIENT_BITSTREAM_BUFFER_RANGE_DETECTION_BIT_KHR), das::LineInfo());
#if defined(VK_KHR_video_encode_quantization_map)
  addI("QUANTIZATION_DELTA_MAP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_CAPABILITY_QUANTIZATION_DELTA_MAP_BIT_KHR), das::LineInfo());
  addI("EMPHASIS_MAP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_CAPABILITY_EMPHASIS_MAP_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) */
} };
class EnumerationVkVideoEncodeContentFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeContentFlagBitsKHR():das::Enumeration("VkVideoEncodeContentFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeContentFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeContentFlagBitsKHR>::type>::type;
  addI("DEFAULT_KHR", int64_t(VK_VIDEO_ENCODE_CONTENT_DEFAULT_KHR), das::LineInfo());
  addI("CAMERA_BIT_KHR", int64_t(VK_VIDEO_ENCODE_CONTENT_CAMERA_BIT_KHR), das::LineInfo());
  addI("DESKTOP_BIT_KHR", int64_t(VK_VIDEO_ENCODE_CONTENT_DESKTOP_BIT_KHR), das::LineInfo());
  addI("RENDERED_BIT_KHR", int64_t(VK_VIDEO_ENCODE_CONTENT_RENDERED_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeFeedbackFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeFeedbackFlagBitsKHR():das::Enumeration("VkVideoEncodeFeedbackFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeFeedbackFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeFeedbackFlagBitsKHR>::type>::type;
  addI("BUFFER_OFFSET_BIT_KHR", int64_t(VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_BUFFER_OFFSET_BIT_KHR), das::LineInfo());
  addI("BYTES_WRITTEN_BIT_KHR", int64_t(VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_BYTES_WRITTEN_BIT_KHR), das::LineInfo());
  addI("HAS_OVERRIDES_BIT_KHR", int64_t(VK_VIDEO_ENCODE_FEEDBACK_BITSTREAM_HAS_OVERRIDES_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeRateControlModeFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeRateControlModeFlagBitsKHR():das::Enumeration("VkVideoEncodeRateControlModeFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeRateControlModeFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeRateControlModeFlagBitsKHR>::type>::type;
  addI("DEFAULT_KHR", int64_t(VK_VIDEO_ENCODE_RATE_CONTROL_MODE_DEFAULT_KHR), das::LineInfo());
  addI("DISABLED_BIT_KHR", int64_t(VK_VIDEO_ENCODE_RATE_CONTROL_MODE_DISABLED_BIT_KHR), das::LineInfo());
  addI("CBR_BIT_KHR", int64_t(VK_VIDEO_ENCODE_RATE_CONTROL_MODE_CBR_BIT_KHR), das::LineInfo());
  addI("VBR_BIT_KHR", int64_t(VK_VIDEO_ENCODE_RATE_CONTROL_MODE_VBR_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeTuningModeKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeTuningModeKHR():das::Enumeration("VkVideoEncodeTuningModeKHR") {
  external=true; cppName="VkVideoEncodeTuningModeKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeTuningModeKHR>::type>::type;
  addI("DEFAULT_KHR", int64_t(VK_VIDEO_ENCODE_TUNING_MODE_DEFAULT_KHR), das::LineInfo());
  addI("HIGH_QUALITY_KHR", int64_t(VK_VIDEO_ENCODE_TUNING_MODE_HIGH_QUALITY_KHR), das::LineInfo());
  addI("LOW_LATENCY_KHR", int64_t(VK_VIDEO_ENCODE_TUNING_MODE_LOW_LATENCY_KHR), das::LineInfo());
  addI("ULTRA_LOW_LATENCY_KHR", int64_t(VK_VIDEO_ENCODE_TUNING_MODE_ULTRA_LOW_LATENCY_KHR), das::LineInfo());
  addI("LOSSLESS_KHR", int64_t(VK_VIDEO_ENCODE_TUNING_MODE_LOSSLESS_KHR), das::LineInfo());
} };
class EnumerationVkVideoEncodeUsageFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoEncodeUsageFlagBitsKHR():das::Enumeration("VkVideoEncodeUsageFlagBitsKHR") {
  external=true; cppName="VkVideoEncodeUsageFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoEncodeUsageFlagBitsKHR>::type>::type;
  addI("DEFAULT_KHR", int64_t(VK_VIDEO_ENCODE_USAGE_DEFAULT_KHR), das::LineInfo());
  addI("TRANSCODING_BIT_KHR", int64_t(VK_VIDEO_ENCODE_USAGE_TRANSCODING_BIT_KHR), das::LineInfo());
  addI("STREAMING_BIT_KHR", int64_t(VK_VIDEO_ENCODE_USAGE_STREAMING_BIT_KHR), das::LineInfo());
  addI("RECORDING_BIT_KHR", int64_t(VK_VIDEO_ENCODE_USAGE_RECORDING_BIT_KHR), das::LineInfo());
  addI("CONFERENCING_BIT_KHR", int64_t(VK_VIDEO_ENCODE_USAGE_CONFERENCING_BIT_KHR), das::LineInfo());
} };
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_queue)
class EnumerationVkQueryResultStatusKHR:public das::Enumeration{public:
EnumerationVkQueryResultStatusKHR():das::Enumeration("VkQueryResultStatusKHR") {
  external=true; cppName="VkQueryResultStatusKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkQueryResultStatusKHR>::type>::type;
  addI("ERROR_KHR", int64_t(VK_QUERY_RESULT_STATUS_ERROR_KHR), das::LineInfo());
  addI("NOT_READY_KHR", int64_t(VK_QUERY_RESULT_STATUS_NOT_READY_KHR), das::LineInfo());
  addI("COMPLETE_KHR", int64_t(VK_QUERY_RESULT_STATUS_COMPLETE_KHR), das::LineInfo());
#if defined(VK_KHR_video_encode_queue)
  addI("INSUFFICIENT_BITSTREAM_BUFFER_RANGE_KHR", int64_t(VK_QUERY_RESULT_STATUS_INSUFFICIENT_BITSTREAM_BUFFER_RANGE_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
} };
class EnumerationVkVideoCapabilityFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoCapabilityFlagBitsKHR():das::Enumeration("VkVideoCapabilityFlagBitsKHR") {
  external=true; cppName="VkVideoCapabilityFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoCapabilityFlagBitsKHR>::type>::type;
  addI("PROTECTED_CONTENT_BIT_KHR", int64_t(VK_VIDEO_CAPABILITY_PROTECTED_CONTENT_BIT_KHR), das::LineInfo());
  addI("SEPARATE_REFERENCE_IMAGES_BIT_KHR", int64_t(VK_VIDEO_CAPABILITY_SEPARATE_REFERENCE_IMAGES_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoChromaSubsamplingFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoChromaSubsamplingFlagBitsKHR():das::Enumeration("VkVideoChromaSubsamplingFlagBitsKHR") {
  external=true; cppName="VkVideoChromaSubsamplingFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoChromaSubsamplingFlagBitsKHR>::type>::type;
  addI("INVALID_KHR", int64_t(VK_VIDEO_CHROMA_SUBSAMPLING_INVALID_KHR), das::LineInfo());
  addI("MONOCHROME_BIT_KHR", int64_t(VK_VIDEO_CHROMA_SUBSAMPLING_MONOCHROME_BIT_KHR), das::LineInfo());
  addI("_420_BIT_KHR", int64_t(VK_VIDEO_CHROMA_SUBSAMPLING_420_BIT_KHR), das::LineInfo());
  addI("_422_BIT_KHR", int64_t(VK_VIDEO_CHROMA_SUBSAMPLING_422_BIT_KHR), das::LineInfo());
  addI("_444_BIT_KHR", int64_t(VK_VIDEO_CHROMA_SUBSAMPLING_444_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoCodecOperationFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoCodecOperationFlagBitsKHR():das::Enumeration("VkVideoCodecOperationFlagBitsKHR") {
  external=true; cppName="VkVideoCodecOperationFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoCodecOperationFlagBitsKHR>::type>::type;
  addI("NONE_KHR", int64_t(VK_VIDEO_CODEC_OPERATION_NONE_KHR), das::LineInfo());
#if defined(VK_KHR_video_decode_av1)
  addI("DECODE_AV1_BIT_KHR", int64_t(VK_VIDEO_CODEC_OPERATION_DECODE_AV1_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_av1) */
#if defined(VK_KHR_video_decode_h264)
  addI("DECODE_H264_BIT_KHR", int64_t(VK_VIDEO_CODEC_OPERATION_DECODE_H264_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_h264) */
#if defined(VK_KHR_video_decode_h265)
  addI("DECODE_H265_BIT_KHR", int64_t(VK_VIDEO_CODEC_OPERATION_DECODE_H265_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_decode_h265) */
#if defined(VK_KHR_video_encode_av1)
  addI("ENCODE_AV1_BIT_KHR", int64_t(VK_VIDEO_CODEC_OPERATION_ENCODE_AV1_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_h264)
  addI("ENCODE_H264_BIT_KHR", int64_t(VK_VIDEO_CODEC_OPERATION_ENCODE_H264_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_h265)
  addI("ENCODE_H265_BIT_KHR", int64_t(VK_VIDEO_CODEC_OPERATION_ENCODE_H265_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_h265) */
} };
class EnumerationVkVideoCodingControlFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoCodingControlFlagBitsKHR():das::Enumeration("VkVideoCodingControlFlagBitsKHR") {
  external=true; cppName="VkVideoCodingControlFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoCodingControlFlagBitsKHR>::type>::type;
  addI("RESET_BIT_KHR", int64_t(VK_VIDEO_CODING_CONTROL_RESET_BIT_KHR), das::LineInfo());
#if defined(VK_KHR_video_encode_queue)
  addI("ENCODE_RATE_CONTROL_BIT_KHR", int64_t(VK_VIDEO_CODING_CONTROL_ENCODE_RATE_CONTROL_BIT_KHR), das::LineInfo());
  addI("ENCODE_QUALITY_LEVEL_BIT_KHR", int64_t(VK_VIDEO_CODING_CONTROL_ENCODE_QUALITY_LEVEL_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
} };
class EnumerationVkVideoComponentBitDepthFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoComponentBitDepthFlagBitsKHR():das::Enumeration("VkVideoComponentBitDepthFlagBitsKHR") {
  external=true; cppName="VkVideoComponentBitDepthFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoComponentBitDepthFlagBitsKHR>::type>::type;
  addI("INVALID_KHR", int64_t(VK_VIDEO_COMPONENT_BIT_DEPTH_INVALID_KHR), das::LineInfo());
  addI("_8_BIT_KHR", int64_t(VK_VIDEO_COMPONENT_BIT_DEPTH_8_BIT_KHR), das::LineInfo());
  addI("_10_BIT_KHR", int64_t(VK_VIDEO_COMPONENT_BIT_DEPTH_10_BIT_KHR), das::LineInfo());
  addI("_12_BIT_KHR", int64_t(VK_VIDEO_COMPONENT_BIT_DEPTH_12_BIT_KHR), das::LineInfo());
} };
class EnumerationVkVideoSessionCreateFlagBitsKHR:public das::Enumeration{public:
EnumerationVkVideoSessionCreateFlagBitsKHR():das::Enumeration("VkVideoSessionCreateFlagBitsKHR") {
  external=true; cppName="VkVideoSessionCreateFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkVideoSessionCreateFlagBitsKHR>::type>::type;
  addI("PROTECTED_CONTENT_BIT_KHR", int64_t(VK_VIDEO_SESSION_CREATE_PROTECTED_CONTENT_BIT_KHR), das::LineInfo());
#if defined(VK_KHR_video_encode_quantization_map)
  addI("ALLOW_ENCODE_QUANTIZATION_DELTA_MAP_BIT_KHR", int64_t(VK_VIDEO_SESSION_CREATE_ALLOW_ENCODE_QUANTIZATION_DELTA_MAP_BIT_KHR), das::LineInfo());
  addI("ALLOW_ENCODE_EMPHASIS_MAP_BIT_KHR", int64_t(VK_VIDEO_SESSION_CREATE_ALLOW_ENCODE_EMPHASIS_MAP_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_encode_queue)
  addI("ALLOW_ENCODE_PARAMETER_OPTIMIZATIONS_BIT_KHR", int64_t(VK_VIDEO_SESSION_CREATE_ALLOW_ENCODE_PARAMETER_OPTIMIZATIONS_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_maintenance1)
  addI("INLINE_QUERIES_BIT_KHR", int64_t(VK_VIDEO_SESSION_CREATE_INLINE_QUERIES_BIT_KHR), das::LineInfo());
#endif /* defined(VK_KHR_video_maintenance1) */
} };
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_LUNARG_direct_driver_loading)
class EnumerationVkDirectDriverLoadingModeLUNARG:public das::Enumeration{public:
EnumerationVkDirectDriverLoadingModeLUNARG():das::Enumeration("VkDirectDriverLoadingModeLUNARG") {
  external=true; cppName="VkDirectDriverLoadingModeLUNARG";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDirectDriverLoadingModeLUNARG>::type>::type;
  addI("EXCLUSIVE_LUNARG", int64_t(VK_DIRECT_DRIVER_LOADING_MODE_EXCLUSIVE_LUNARG), das::LineInfo());
  addI("INCLUSIVE_LUNARG", int64_t(VK_DIRECT_DRIVER_LOADING_MODE_INCLUSIVE_LUNARG), das::LineInfo());
} };
#endif /* defined(VK_LUNARG_direct_driver_loading) */
#if defined(VK_MSFT_layered_driver)
class EnumerationVkLayeredDriverUnderlyingApiMSFT:public das::Enumeration{public:
EnumerationVkLayeredDriverUnderlyingApiMSFT():das::Enumeration("VkLayeredDriverUnderlyingApiMSFT") {
  external=true; cppName="VkLayeredDriverUnderlyingApiMSFT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkLayeredDriverUnderlyingApiMSFT>::type>::type;
  addI("NONE_MSFT", int64_t(VK_LAYERED_DRIVER_UNDERLYING_API_NONE_MSFT), das::LineInfo());
  addI("D3D12_MSFT", int64_t(VK_LAYERED_DRIVER_UNDERLYING_API_D3D12_MSFT), das::LineInfo());
} };
#endif /* defined(VK_MSFT_layered_driver) */
#if defined(VK_NV_coverage_reduction_mode)
class EnumerationVkCoverageReductionModeNV:public das::Enumeration{public:
EnumerationVkCoverageReductionModeNV():das::Enumeration("VkCoverageReductionModeNV") {
  external=true; cppName="VkCoverageReductionModeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCoverageReductionModeNV>::type>::type;
  addI("MERGE_NV", int64_t(VK_COVERAGE_REDUCTION_MODE_MERGE_NV), das::LineInfo());
  addI("TRUNCATE_NV", int64_t(VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_NV_device_diagnostics_config)
class EnumerationVkDeviceDiagnosticsConfigFlagBitsNV:public das::Enumeration{public:
EnumerationVkDeviceDiagnosticsConfigFlagBitsNV():das::Enumeration("VkDeviceDiagnosticsConfigFlagBitsNV") {
  external=true; cppName="VkDeviceDiagnosticsConfigFlagBitsNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDeviceDiagnosticsConfigFlagBitsNV>::type>::type;
  addI("SHADER_DEBUG_INFO_BIT_NV", int64_t(VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_DEBUG_INFO_BIT_NV), das::LineInfo());
  addI("RESOURCE_TRACKING_BIT_NV", int64_t(VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_RESOURCE_TRACKING_BIT_NV), das::LineInfo());
  addI("AUTOMATIC_CHECKPOINTS_BIT_NV", int64_t(VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV), das::LineInfo());
  addI("SHADER_ERROR_REPORTING_BIT_NV", int64_t(VK_DEVICE_DIAGNOSTICS_CONFIG_ENABLE_SHADER_ERROR_REPORTING_BIT_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_device_diagnostics_config) */
#if defined(VK_NV_device_generated_commands)
class EnumerationVkIndirectCommandsLayoutUsageFlagBitsNV:public das::Enumeration{public:
EnumerationVkIndirectCommandsLayoutUsageFlagBitsNV():das::Enumeration("VkIndirectCommandsLayoutUsageFlagBitsNV") {
  external=true; cppName="VkIndirectCommandsLayoutUsageFlagBitsNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNV>::type>::type;
  addI("EXPLICIT_PREPROCESS_BIT_NV", int64_t(VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EXPLICIT_PREPROCESS_BIT_NV), das::LineInfo());
  addI("INDEXED_SEQUENCES_BIT_NV", int64_t(VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NV), das::LineInfo());
  addI("UNORDERED_SEQUENCES_BIT_NV", int64_t(VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NV), das::LineInfo());
} };
class EnumerationVkIndirectCommandsTokenTypeNV:public das::Enumeration{public:
EnumerationVkIndirectCommandsTokenTypeNV():das::Enumeration("VkIndirectCommandsTokenTypeNV") {
  external=true; cppName="VkIndirectCommandsTokenTypeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkIndirectCommandsTokenTypeNV>::type>::type;
  addI("SHADER_GROUP_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_SHADER_GROUP_NV), das::LineInfo());
  addI("STATE_FLAGS_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_STATE_FLAGS_NV), das::LineInfo());
  addI("INDEX_BUFFER_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NV), das::LineInfo());
  addI("VERTEX_BUFFER_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NV), das::LineInfo());
  addI("PUSH_CONSTANT_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NV), das::LineInfo());
  addI("DRAW_INDEXED_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NV), das::LineInfo());
  addI("DRAW_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NV), das::LineInfo());
  addI("DRAW_TASKS_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_TASKS_NV), das::LineInfo());
#if defined(VK_EXT_mesh_shader) && defined(VK_NV_device_generated_commands)
  addI("DRAW_MESH_TASKS_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_MESH_TASKS_NV), das::LineInfo());
#endif /* defined(VK_EXT_mesh_shader) && defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_device_generated_commands_compute)
  addI("PIPELINE_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NV), das::LineInfo());
  addI("DISPATCH_NV", int64_t(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NV), das::LineInfo());
#endif /* defined(VK_NV_device_generated_commands_compute) */
} };
class EnumerationVkIndirectStateFlagBitsNV:public das::Enumeration{public:
EnumerationVkIndirectStateFlagBitsNV():das::Enumeration("VkIndirectStateFlagBitsNV") {
  external=true; cppName="VkIndirectStateFlagBitsNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkIndirectStateFlagBitsNV>::type>::type;
  addI("FRONTFACE_BIT_NV", int64_t(VK_INDIRECT_STATE_FLAG_FRONTFACE_BIT_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_displacement_micromap)
class EnumerationVkDisplacementMicromapFormatNV:public das::Enumeration{public:
EnumerationVkDisplacementMicromapFormatNV():das::Enumeration("VkDisplacementMicromapFormatNV") {
  external=true; cppName="VkDisplacementMicromapFormatNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDisplacementMicromapFormatNV>::type>::type;
  addI("_64_TRIANGLES_64_BYTES_NV", int64_t(VK_DISPLACEMENT_MICROMAP_FORMAT_64_TRIANGLES_64_BYTES_NV), das::LineInfo());
  addI("_256_TRIANGLES_128_BYTES_NV", int64_t(VK_DISPLACEMENT_MICROMAP_FORMAT_256_TRIANGLES_128_BYTES_NV), das::LineInfo());
  addI("_1024_TRIANGLES_128_BYTES_NV", int64_t(VK_DISPLACEMENT_MICROMAP_FORMAT_1024_TRIANGLES_128_BYTES_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_displacement_micromap) */
#if defined(VK_NV_display_stereo)
class EnumerationVkDisplaySurfaceStereoTypeNV:public das::Enumeration{public:
EnumerationVkDisplaySurfaceStereoTypeNV():das::Enumeration("VkDisplaySurfaceStereoTypeNV") {
  external=true; cppName="VkDisplaySurfaceStereoTypeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDisplaySurfaceStereoTypeNV>::type>::type;
  addI("NONE_NV", int64_t(VK_DISPLAY_SURFACE_STEREO_TYPE_NONE_NV), das::LineInfo());
  addI("ONBOARD_DIN_NV", int64_t(VK_DISPLAY_SURFACE_STEREO_TYPE_ONBOARD_DIN_NV), das::LineInfo());
  addI("HDMI_3D_NV", int64_t(VK_DISPLAY_SURFACE_STEREO_TYPE_HDMI_3D_NV), das::LineInfo());
  addI("INBAND_DISPLAYPORT_NV", int64_t(VK_DISPLAY_SURFACE_STEREO_TYPE_INBAND_DISPLAYPORT_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_display_stereo) */
#if defined(VK_NV_external_memory_capabilities)
class EnumerationVkExternalMemoryFeatureFlagBitsNV:public das::Enumeration{public:
EnumerationVkExternalMemoryFeatureFlagBitsNV():das::Enumeration("VkExternalMemoryFeatureFlagBitsNV") {
  external=true; cppName="VkExternalMemoryFeatureFlagBitsNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>::type;
  addI("DEDICATED_ONLY_BIT_NV", int64_t(VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV), das::LineInfo());
  addI("EXPORTABLE_BIT_NV", int64_t(VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV), das::LineInfo());
  addI("IMPORTABLE_BIT_NV", int64_t(VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV), das::LineInfo());
} };
class EnumerationVkExternalMemoryHandleTypeFlagBitsNV:public das::Enumeration{public:
EnumerationVkExternalMemoryHandleTypeFlagBitsNV():das::Enumeration("VkExternalMemoryHandleTypeFlagBitsNV") {
  external=true; cppName="VkExternalMemoryHandleTypeFlagBitsNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>::type;
  addI("OPAQUE_WIN32_BIT_NV", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV), das::LineInfo());
  addI("OPAQUE_WIN32_KMT_BIT_NV", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV), das::LineInfo());
  addI("D3D11_IMAGE_BIT_NV", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV), das::LineInfo());
  addI("D3D11_IMAGE_KMT_BIT_NV", int64_t(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_external_memory_capabilities) */
#if defined(VK_NV_fragment_shading_rate_enums)
class EnumerationVkFragmentShadingRateNV:public das::Enumeration{public:
EnumerationVkFragmentShadingRateNV():das::Enumeration("VkFragmentShadingRateNV") {
  external=true; cppName="VkFragmentShadingRateNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFragmentShadingRateNV>::type>::type;
  addI("_1_INVOCATION_PER_PIXEL_NV", int64_t(VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_1X2_PIXELS_NV", int64_t(VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_2X1_PIXELS_NV", int64_t(VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_2X2_PIXELS_NV", int64_t(VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_2X4_PIXELS_NV", int64_t(VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_4X2_PIXELS_NV", int64_t(VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_4X4_PIXELS_NV", int64_t(VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV), das::LineInfo());
  addI("_2_INVOCATIONS_PER_PIXEL_NV", int64_t(VK_FRAGMENT_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV), das::LineInfo());
  addI("_4_INVOCATIONS_PER_PIXEL_NV", int64_t(VK_FRAGMENT_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV), das::LineInfo());
  addI("_8_INVOCATIONS_PER_PIXEL_NV", int64_t(VK_FRAGMENT_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV), das::LineInfo());
  addI("_16_INVOCATIONS_PER_PIXEL_NV", int64_t(VK_FRAGMENT_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV), das::LineInfo());
  addI("NO_INVOCATIONS_NV", int64_t(VK_FRAGMENT_SHADING_RATE_NO_INVOCATIONS_NV), das::LineInfo());
} };
class EnumerationVkFragmentShadingRateTypeNV:public das::Enumeration{public:
EnumerationVkFragmentShadingRateTypeNV():das::Enumeration("VkFragmentShadingRateTypeNV") {
  external=true; cppName="VkFragmentShadingRateTypeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkFragmentShadingRateTypeNV>::type>::type;
  addI("FRAGMENT_SIZE_NV", int64_t(VK_FRAGMENT_SHADING_RATE_TYPE_FRAGMENT_SIZE_NV), das::LineInfo());
  addI("ENUMS_NV", int64_t(VK_FRAGMENT_SHADING_RATE_TYPE_ENUMS_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_fragment_shading_rate_enums) */
#if defined(VK_NV_framebuffer_mixed_samples)
class EnumerationVkCoverageModulationModeNV:public das::Enumeration{public:
EnumerationVkCoverageModulationModeNV():das::Enumeration("VkCoverageModulationModeNV") {
  external=true; cppName="VkCoverageModulationModeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCoverageModulationModeNV>::type>::type;
  addI("NONE_NV", int64_t(VK_COVERAGE_MODULATION_MODE_NONE_NV), das::LineInfo());
  addI("RGB_NV", int64_t(VK_COVERAGE_MODULATION_MODE_RGB_NV), das::LineInfo());
  addI("ALPHA_NV", int64_t(VK_COVERAGE_MODULATION_MODE_ALPHA_NV), das::LineInfo());
  addI("RGBA_NV", int64_t(VK_COVERAGE_MODULATION_MODE_RGBA_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_framebuffer_mixed_samples) */
#if defined(VK_NV_low_latency2)
class EnumerationVkLatencyMarkerNV:public das::Enumeration{public:
EnumerationVkLatencyMarkerNV():das::Enumeration("VkLatencyMarkerNV") {
  external=true; cppName="VkLatencyMarkerNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkLatencyMarkerNV>::type>::type;
  addI("SIMULATION_START_NV", int64_t(VK_LATENCY_MARKER_SIMULATION_START_NV), das::LineInfo());
  addI("SIMULATION_END_NV", int64_t(VK_LATENCY_MARKER_SIMULATION_END_NV), das::LineInfo());
  addI("RENDERSUBMIT_START_NV", int64_t(VK_LATENCY_MARKER_RENDERSUBMIT_START_NV), das::LineInfo());
  addI("RENDERSUBMIT_END_NV", int64_t(VK_LATENCY_MARKER_RENDERSUBMIT_END_NV), das::LineInfo());
  addI("PRESENT_START_NV", int64_t(VK_LATENCY_MARKER_PRESENT_START_NV), das::LineInfo());
  addI("PRESENT_END_NV", int64_t(VK_LATENCY_MARKER_PRESENT_END_NV), das::LineInfo());
  addI("INPUT_SAMPLE_NV", int64_t(VK_LATENCY_MARKER_INPUT_SAMPLE_NV), das::LineInfo());
  addI("TRIGGER_FLASH_NV", int64_t(VK_LATENCY_MARKER_TRIGGER_FLASH_NV), das::LineInfo());
  addI("OUT_OF_BAND_RENDERSUBMIT_START_NV", int64_t(VK_LATENCY_MARKER_OUT_OF_BAND_RENDERSUBMIT_START_NV), das::LineInfo());
  addI("OUT_OF_BAND_RENDERSUBMIT_END_NV", int64_t(VK_LATENCY_MARKER_OUT_OF_BAND_RENDERSUBMIT_END_NV), das::LineInfo());
  addI("OUT_OF_BAND_PRESENT_START_NV", int64_t(VK_LATENCY_MARKER_OUT_OF_BAND_PRESENT_START_NV), das::LineInfo());
  addI("OUT_OF_BAND_PRESENT_END_NV", int64_t(VK_LATENCY_MARKER_OUT_OF_BAND_PRESENT_END_NV), das::LineInfo());
} };
class EnumerationVkOutOfBandQueueTypeNV:public das::Enumeration{public:
EnumerationVkOutOfBandQueueTypeNV():das::Enumeration("VkOutOfBandQueueTypeNV") {
  external=true; cppName="VkOutOfBandQueueTypeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkOutOfBandQueueTypeNV>::type>::type;
  addI("RENDER_NV", int64_t(VK_OUT_OF_BAND_QUEUE_TYPE_RENDER_NV), das::LineInfo());
  addI("PRESENT_NV", int64_t(VK_OUT_OF_BAND_QUEUE_TYPE_PRESENT_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_NV_memory_decompression)
class EnumerationVkMemoryDecompressionMethodFlagBitsNV:public das::Enumeration{public:
EnumerationVkMemoryDecompressionMethodFlagBitsNV():das::Enumeration("VkMemoryDecompressionMethodFlagBitsNV") {
  external=true; cppName="VkMemoryDecompressionMethodFlagBitsNV";
  baseType=das::tUInt64;
  addI("GDEFLATE_1_0_BIT_NV", int64_t(VK_MEMORY_DECOMPRESSION_METHOD_GDEFLATE_1_0_BIT_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_memory_decompression) */
#if defined(VK_NV_optical_flow)
class EnumerationVkOpticalFlowExecuteFlagBitsNV:public das::Enumeration{public:
EnumerationVkOpticalFlowExecuteFlagBitsNV():das::Enumeration("VkOpticalFlowExecuteFlagBitsNV") {
  external=true; cppName="VkOpticalFlowExecuteFlagBitsNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkOpticalFlowExecuteFlagBitsNV>::type>::type;
  addI("DISABLE_TEMPORAL_HINTS_BIT_NV", int64_t(VK_OPTICAL_FLOW_EXECUTE_DISABLE_TEMPORAL_HINTS_BIT_NV), das::LineInfo());
} };
class EnumerationVkOpticalFlowGridSizeFlagBitsNV:public das::Enumeration{public:
EnumerationVkOpticalFlowGridSizeFlagBitsNV():das::Enumeration("VkOpticalFlowGridSizeFlagBitsNV") {
  external=true; cppName="VkOpticalFlowGridSizeFlagBitsNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkOpticalFlowGridSizeFlagBitsNV>::type>::type;
  addI("UNKNOWN_NV", int64_t(VK_OPTICAL_FLOW_GRID_SIZE_UNKNOWN_NV), das::LineInfo());
  addI("_1X1_BIT_NV", int64_t(VK_OPTICAL_FLOW_GRID_SIZE_1X1_BIT_NV), das::LineInfo());
  addI("_2X2_BIT_NV", int64_t(VK_OPTICAL_FLOW_GRID_SIZE_2X2_BIT_NV), das::LineInfo());
  addI("_4X4_BIT_NV", int64_t(VK_OPTICAL_FLOW_GRID_SIZE_4X4_BIT_NV), das::LineInfo());
  addI("_8X8_BIT_NV", int64_t(VK_OPTICAL_FLOW_GRID_SIZE_8X8_BIT_NV), das::LineInfo());
} };
class EnumerationVkOpticalFlowPerformanceLevelNV:public das::Enumeration{public:
EnumerationVkOpticalFlowPerformanceLevelNV():das::Enumeration("VkOpticalFlowPerformanceLevelNV") {
  external=true; cppName="VkOpticalFlowPerformanceLevelNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkOpticalFlowPerformanceLevelNV>::type>::type;
  addI("UNKNOWN_NV", int64_t(VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_UNKNOWN_NV), das::LineInfo());
  addI("SLOW_NV", int64_t(VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_SLOW_NV), das::LineInfo());
  addI("MEDIUM_NV", int64_t(VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_MEDIUM_NV), das::LineInfo());
  addI("FAST_NV", int64_t(VK_OPTICAL_FLOW_PERFORMANCE_LEVEL_FAST_NV), das::LineInfo());
} };
class EnumerationVkOpticalFlowSessionBindingPointNV:public das::Enumeration{public:
EnumerationVkOpticalFlowSessionBindingPointNV():das::Enumeration("VkOpticalFlowSessionBindingPointNV") {
  external=true; cppName="VkOpticalFlowSessionBindingPointNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkOpticalFlowSessionBindingPointNV>::type>::type;
  addI("UNKNOWN_NV", int64_t(VK_OPTICAL_FLOW_SESSION_BINDING_POINT_UNKNOWN_NV), das::LineInfo());
  addI("INPUT_NV", int64_t(VK_OPTICAL_FLOW_SESSION_BINDING_POINT_INPUT_NV), das::LineInfo());
  addI("REFERENCE_NV", int64_t(VK_OPTICAL_FLOW_SESSION_BINDING_POINT_REFERENCE_NV), das::LineInfo());
  addI("HINT_NV", int64_t(VK_OPTICAL_FLOW_SESSION_BINDING_POINT_HINT_NV), das::LineInfo());
  addI("FLOW_VECTOR_NV", int64_t(VK_OPTICAL_FLOW_SESSION_BINDING_POINT_FLOW_VECTOR_NV), das::LineInfo());
  addI("BACKWARD_FLOW_VECTOR_NV", int64_t(VK_OPTICAL_FLOW_SESSION_BINDING_POINT_BACKWARD_FLOW_VECTOR_NV), das::LineInfo());
  addI("COST_NV", int64_t(VK_OPTICAL_FLOW_SESSION_BINDING_POINT_COST_NV), das::LineInfo());
  addI("BACKWARD_COST_NV", int64_t(VK_OPTICAL_FLOW_SESSION_BINDING_POINT_BACKWARD_COST_NV), das::LineInfo());
  addI("GLOBAL_FLOW_NV", int64_t(VK_OPTICAL_FLOW_SESSION_BINDING_POINT_GLOBAL_FLOW_NV), das::LineInfo());
} };
class EnumerationVkOpticalFlowSessionCreateFlagBitsNV:public das::Enumeration{public:
EnumerationVkOpticalFlowSessionCreateFlagBitsNV():das::Enumeration("VkOpticalFlowSessionCreateFlagBitsNV") {
  external=true; cppName="VkOpticalFlowSessionCreateFlagBitsNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkOpticalFlowSessionCreateFlagBitsNV>::type>::type;
  addI("ENABLE_HINT_BIT_NV", int64_t(VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_HINT_BIT_NV), das::LineInfo());
  addI("ENABLE_COST_BIT_NV", int64_t(VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_COST_BIT_NV), das::LineInfo());
  addI("ENABLE_GLOBAL_FLOW_BIT_NV", int64_t(VK_OPTICAL_FLOW_SESSION_CREATE_ENABLE_GLOBAL_FLOW_BIT_NV), das::LineInfo());
  addI("ALLOW_REGIONS_BIT_NV", int64_t(VK_OPTICAL_FLOW_SESSION_CREATE_ALLOW_REGIONS_BIT_NV), das::LineInfo());
  addI("BOTH_DIRECTIONS_BIT_NV", int64_t(VK_OPTICAL_FLOW_SESSION_CREATE_BOTH_DIRECTIONS_BIT_NV), das::LineInfo());
} };
class EnumerationVkOpticalFlowUsageFlagBitsNV:public das::Enumeration{public:
EnumerationVkOpticalFlowUsageFlagBitsNV():das::Enumeration("VkOpticalFlowUsageFlagBitsNV") {
  external=true; cppName="VkOpticalFlowUsageFlagBitsNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkOpticalFlowUsageFlagBitsNV>::type>::type;
  addI("UNKNOWN_NV", int64_t(VK_OPTICAL_FLOW_USAGE_UNKNOWN_NV), das::LineInfo());
  addI("INPUT_BIT_NV", int64_t(VK_OPTICAL_FLOW_USAGE_INPUT_BIT_NV), das::LineInfo());
  addI("OUTPUT_BIT_NV", int64_t(VK_OPTICAL_FLOW_USAGE_OUTPUT_BIT_NV), das::LineInfo());
  addI("HINT_BIT_NV", int64_t(VK_OPTICAL_FLOW_USAGE_HINT_BIT_NV), das::LineInfo());
  addI("COST_BIT_NV", int64_t(VK_OPTICAL_FLOW_USAGE_COST_BIT_NV), das::LineInfo());
  addI("GLOBAL_FLOW_BIT_NV", int64_t(VK_OPTICAL_FLOW_USAGE_GLOBAL_FLOW_BIT_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_NV_ray_tracing)
class EnumerationVkAccelerationStructureMemoryRequirementsTypeNV:public das::Enumeration{public:
EnumerationVkAccelerationStructureMemoryRequirementsTypeNV():das::Enumeration("VkAccelerationStructureMemoryRequirementsTypeNV") {
  external=true; cppName="VkAccelerationStructureMemoryRequirementsTypeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAccelerationStructureMemoryRequirementsTypeNV>::type>::type;
  addI("OBJECT_NV", int64_t(VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV), das::LineInfo());
  addI("BUILD_SCRATCH_NV", int64_t(VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV), das::LineInfo());
  addI("UPDATE_SCRATCH_NV", int64_t(VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_ray_tracing_invocation_reorder)
class EnumerationVkRayTracingInvocationReorderModeNV:public das::Enumeration{public:
EnumerationVkRayTracingInvocationReorderModeNV():das::Enumeration("VkRayTracingInvocationReorderModeNV") {
  external=true; cppName="VkRayTracingInvocationReorderModeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkRayTracingInvocationReorderModeNV>::type>::type;
  addI("NONE_NV", int64_t(VK_RAY_TRACING_INVOCATION_REORDER_MODE_NONE_NV), das::LineInfo());
  addI("REORDER_NV", int64_t(VK_RAY_TRACING_INVOCATION_REORDER_MODE_REORDER_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_ray_tracing_invocation_reorder) */
#if defined(VK_NV_ray_tracing_motion_blur)
class EnumerationVkAccelerationStructureMotionInstanceTypeNV:public das::Enumeration{public:
EnumerationVkAccelerationStructureMotionInstanceTypeNV():das::Enumeration("VkAccelerationStructureMotionInstanceTypeNV") {
  external=true; cppName="VkAccelerationStructureMotionInstanceTypeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkAccelerationStructureMotionInstanceTypeNV>::type>::type;
  addI("STATIC_NV", int64_t(VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_STATIC_NV), das::LineInfo());
  addI("MATRIX_MOTION_NV", int64_t(VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_MATRIX_MOTION_NV), das::LineInfo());
  addI("SRT_MOTION_NV", int64_t(VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_SRT_MOTION_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_NV_shading_rate_image)
class EnumerationVkCoarseSampleOrderTypeNV:public das::Enumeration{public:
EnumerationVkCoarseSampleOrderTypeNV():das::Enumeration("VkCoarseSampleOrderTypeNV") {
  external=true; cppName="VkCoarseSampleOrderTypeNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCoarseSampleOrderTypeNV>::type>::type;
  addI("DEFAULT_NV", int64_t(VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV), das::LineInfo());
  addI("CUSTOM_NV", int64_t(VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV), das::LineInfo());
  addI("PIXEL_MAJOR_NV", int64_t(VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV), das::LineInfo());
  addI("SAMPLE_MAJOR_NV", int64_t(VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV), das::LineInfo());
} };
class EnumerationVkShadingRatePaletteEntryNV:public das::Enumeration{public:
EnumerationVkShadingRatePaletteEntryNV():das::Enumeration("VkShadingRatePaletteEntryNV") {
  external=true; cppName="VkShadingRatePaletteEntryNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkShadingRatePaletteEntryNV>::type>::type;
  addI("NO_INVOCATIONS_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV), das::LineInfo());
  addI("_16_INVOCATIONS_PER_PIXEL_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV), das::LineInfo());
  addI("_8_INVOCATIONS_PER_PIXEL_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV), das::LineInfo());
  addI("_4_INVOCATIONS_PER_PIXEL_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV), das::LineInfo());
  addI("_2_INVOCATIONS_PER_PIXEL_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_PIXEL_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_2X1_PIXELS_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_1X2_PIXELS_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_2X2_PIXELS_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_4X2_PIXELS_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_2X4_PIXELS_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV), das::LineInfo());
  addI("_1_INVOCATION_PER_4X4_PIXELS_NV", int64_t(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_NV_viewport_swizzle)
class EnumerationVkViewportCoordinateSwizzleNV:public das::Enumeration{public:
EnumerationVkViewportCoordinateSwizzleNV():das::Enumeration("VkViewportCoordinateSwizzleNV") {
  external=true; cppName="VkViewportCoordinateSwizzleNV";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkViewportCoordinateSwizzleNV>::type>::type;
  addI("POSITIVE_X_NV", int64_t(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV), das::LineInfo());
  addI("NEGATIVE_X_NV", int64_t(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV), das::LineInfo());
  addI("POSITIVE_Y_NV", int64_t(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV), das::LineInfo());
  addI("NEGATIVE_Y_NV", int64_t(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV), das::LineInfo());
  addI("POSITIVE_Z_NV", int64_t(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV), das::LineInfo());
  addI("NEGATIVE_Z_NV", int64_t(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV), das::LineInfo());
  addI("POSITIVE_W_NV", int64_t(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV), das::LineInfo());
  addI("NEGATIVE_W_NV", int64_t(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV), das::LineInfo());
} };
#endif /* defined(VK_NV_viewport_swizzle) */
#if defined(VK_QCOM_filter_cubic_weights)
class EnumerationVkCubicFilterWeightsQCOM:public das::Enumeration{public:
EnumerationVkCubicFilterWeightsQCOM():das::Enumeration("VkCubicFilterWeightsQCOM") {
  external=true; cppName="VkCubicFilterWeightsQCOM";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkCubicFilterWeightsQCOM>::type>::type;
  addI("CATMULL_ROM_QCOM", int64_t(VK_CUBIC_FILTER_WEIGHTS_CATMULL_ROM_QCOM), das::LineInfo());
  addI("ZERO_TANGENT_CARDINAL_QCOM", int64_t(VK_CUBIC_FILTER_WEIGHTS_ZERO_TANGENT_CARDINAL_QCOM), das::LineInfo());
  addI("B_SPLINE_QCOM", int64_t(VK_CUBIC_FILTER_WEIGHTS_B_SPLINE_QCOM), das::LineInfo());
  addI("MITCHELL_NETRAVALI_QCOM", int64_t(VK_CUBIC_FILTER_WEIGHTS_MITCHELL_NETRAVALI_QCOM), das::LineInfo());
} };
#endif /* defined(VK_QCOM_filter_cubic_weights) */
#if defined(VK_QCOM_image_processing2)
class EnumerationVkBlockMatchWindowCompareModeQCOM:public das::Enumeration{public:
EnumerationVkBlockMatchWindowCompareModeQCOM():das::Enumeration("VkBlockMatchWindowCompareModeQCOM") {
  external=true; cppName="VkBlockMatchWindowCompareModeQCOM";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkBlockMatchWindowCompareModeQCOM>::type>::type;
  addI("IN_QCOM", int64_t(VK_BLOCK_MATCH_WINDOW_COMPARE_MODE_MIN_QCOM), das::LineInfo());
  addI("AX_QCOM", int64_t(VK_BLOCK_MATCH_WINDOW_COMPARE_MODE_MAX_QCOM), das::LineInfo());
} };
#endif /* defined(VK_QCOM_image_processing2) */
#if (defined(VK_EXT_debug_marker)) || (defined(VK_EXT_debug_report))
class EnumerationVkDebugReportObjectTypeEXT:public das::Enumeration{public:
EnumerationVkDebugReportObjectTypeEXT():das::Enumeration("VkDebugReportObjectTypeEXT") {
  external=true; cppName="VkDebugReportObjectTypeEXT";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDebugReportObjectTypeEXT>::type>::type;
  addI("UNKNOWN_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT), das::LineInfo());
  addI("INSTANCE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT), das::LineInfo());
  addI("PHYSICAL_DEVICE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT), das::LineInfo());
  addI("DEVICE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT), das::LineInfo());
  addI("QUEUE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT), das::LineInfo());
  addI("SEMAPHORE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT), das::LineInfo());
  addI("COMMAND_BUFFER_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT), das::LineInfo());
  addI("FENCE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT), das::LineInfo());
  addI("DEVICE_MEMORY_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT), das::LineInfo());
  addI("BUFFER_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT), das::LineInfo());
  addI("IMAGE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT), das::LineInfo());
  addI("EVENT_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT), das::LineInfo());
  addI("QUERY_POOL_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT), das::LineInfo());
  addI("BUFFER_VIEW_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT), das::LineInfo());
  addI("IMAGE_VIEW_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT), das::LineInfo());
  addI("SHADER_MODULE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT), das::LineInfo());
  addI("PIPELINE_CACHE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT), das::LineInfo());
  addI("PIPELINE_LAYOUT_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT), das::LineInfo());
  addI("RENDER_PASS_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT), das::LineInfo());
  addI("PIPELINE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT), das::LineInfo());
  addI("DESCRIPTOR_SET_LAYOUT_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT), das::LineInfo());
  addI("SAMPLER_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT), das::LineInfo());
  addI("DESCRIPTOR_POOL_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT), das::LineInfo());
  addI("DESCRIPTOR_SET_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT), das::LineInfo());
  addI("FRAMEBUFFER_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT), das::LineInfo());
  addI("COMMAND_POOL_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT), das::LineInfo());
  addI("SURFACE_KHR_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT), das::LineInfo());
  addI("SWAPCHAIN_KHR_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT), das::LineInfo());
  addI("DEBUG_REPORT_CALLBACK_EXT_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT), das::LineInfo());
  addI("DISPLAY_KHR_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT), das::LineInfo());
  addI("DISPLAY_MODE_KHR_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT), das::LineInfo());
  addI("VALIDATION_CACHE_EXT_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT), das::LineInfo());
#if defined(VK_EXT_debug_report) && defined(VK_VERSION_1_1)
  addI("DESCRIPTOR_UPDATE_TEMPLATE_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT), das::LineInfo());
#endif /* defined(VK_EXT_debug_report) && defined(VK_VERSION_1_1) */
#if defined(VK_FUCHSIA_buffer_collection) && defined(VK_EXT_debug_report)
  addI("BUFFER_COLLECTION_FUCHSIA_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_COLLECTION_FUCHSIA_EXT), das::LineInfo());
#endif /* defined(VK_FUCHSIA_buffer_collection) && defined(VK_EXT_debug_report) */
#if defined(VK_KHR_acceleration_structure) && defined(VK_EXT_debug_report)
  addI("ACCELERATION_STRUCTURE_KHR_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR_EXT), das::LineInfo());
#endif /* defined(VK_KHR_acceleration_structure) && defined(VK_EXT_debug_report) */
#if defined(VK_KHR_descriptor_update_template) && defined(VK_EXT_debug_report)
  addI("DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT), das::LineInfo());
#endif /* defined(VK_KHR_descriptor_update_template) && defined(VK_EXT_debug_report) */
#if defined(VK_KHR_sampler_ycbcr_conversion) && defined(VK_EXT_debug_report)
  addI("SAMPLER_YCBCR_CONVERSION_KHR_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT), das::LineInfo());
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) && defined(VK_EXT_debug_report) */
#if defined(VK_NVX_binary_import) && defined(VK_EXT_debug_report)
  addI("CU_MODULE_NVX_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_CU_MODULE_NVX_EXT), das::LineInfo());
  addI("CU_FUNCTION_NVX_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_CU_FUNCTION_NVX_EXT), das::LineInfo());
#endif /* defined(VK_NVX_binary_import) && defined(VK_EXT_debug_report) */
#if defined(VK_NV_cuda_kernel_launch) && defined(VK_EXT_debug_report)
  addI("CUDA_MODULE_NV_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_CUDA_MODULE_NV_EXT), das::LineInfo());
  addI("CUDA_FUNCTION_NV_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_CUDA_FUNCTION_NV_EXT), das::LineInfo());
#endif /* defined(VK_NV_cuda_kernel_launch) && defined(VK_EXT_debug_report) */
#if defined(VK_NV_ray_tracing) && defined(VK_EXT_debug_report)
  addI("ACCELERATION_STRUCTURE_NV_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT), das::LineInfo());
#endif /* defined(VK_NV_ray_tracing) && defined(VK_EXT_debug_report) */
#if (defined(VK_EXT_debug_report) && defined(VK_VERSION_1_1)) || (defined(VK_KHR_sampler_ycbcr_conversion) && defined(VK_EXT_debug_report))
  addI("SAMPLER_YCBCR_CONVERSION_EXT", int64_t(VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT), das::LineInfo());
#endif /* (defined(VK_EXT_debug_report) && defined(VK_VERSION_1_1)) || (defined(VK_KHR_sampler_ycbcr_conversion) && defined(VK_EXT_debug_report)) */
} };
#endif /* (defined(VK_EXT_debug_marker)) || (defined(VK_EXT_debug_report)) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
class EnumerationVkDeviceGroupPresentModeFlagBitsKHR:public das::Enumeration{public:
EnumerationVkDeviceGroupPresentModeFlagBitsKHR():das::Enumeration("VkDeviceGroupPresentModeFlagBitsKHR") {
  external=true; cppName="VkDeviceGroupPresentModeFlagBitsKHR";
  baseType=(das::Type)das::ToBasicType<das::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>::type;
  addI("LOCAL_BIT_KHR", int64_t(VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR), das::LineInfo());
  addI("REMOTE_BIT_KHR", int64_t(VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR), das::LineInfo());
  addI("SUM_BIT_KHR", int64_t(VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR), das::LineInfo());
  addI("LOCAL_MULTI_DEVICE_BIT_KHR", int64_t(VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR), das::LineInfo());
} };
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_EXT_descriptor_buffer) && (defined(VK_KHR_acceleration_structure) || defined(VK_NV_ray_tracing))
#endif /* defined(VK_EXT_descriptor_buffer) && (defined(VK_KHR_acceleration_structure) || defined(VK_NV_ray_tracing)) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_ray_tracing)
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_ray_tracing_motion_blur)
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_NV_ray_tracing)
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_ray_tracing_motion_blur)
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_EXT_opacity_micromap)
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_NV_displacement_micromap)
#endif /* defined(VK_NV_displacement_micromap) */
#if defined(VK_EXT_opacity_micromap)
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_KHR_performance_query)
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_SEC_amigo_profiling)
#endif /* defined(VK_SEC_amigo_profiling) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_ANDROID_external_format_resolve)
#endif /* defined(VK_ANDROID_external_format_resolve) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_KHR_android_surface)
#endif /* defined(VK_KHR_android_surface) */
#if defined(VK_AMD_anti_lag)
#endif /* defined(VK_AMD_anti_lag) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_AMD_mixed_attachment_samples) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
#endif /* defined(VK_AMD_mixed_attachment_samples) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_sample_locations)
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_ray_tracing)
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_device_generated_commands_compute)
#endif /* defined(VK_NV_device_generated_commands_compute) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_KHR_video_queue)
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_QCOM_filter_cubic_weights)
#endif /* defined(VK_QCOM_filter_cubic_weights) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_FUCHSIA_buffer_collection)
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_FUCHSIA_buffer_collection)
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_buffer_device_address)
#endif /* defined(VK_EXT_buffer_device_address) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_calibrated_timestamps)
#endif /* defined(VK_KHR_calibrated_timestamps) */
#if defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2))
#endif /* defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2)) */
#if defined(VK_NV_device_diagnostic_checkpoints)
#endif /* defined(VK_NV_device_diagnostic_checkpoints) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_shading_rate_image)
#endif /* defined(VK_NV_shading_rate_image) */
#if (defined(VK_EXT_extended_dynamic_state3)) || (defined(VK_EXT_shader_object))
#endif /* (defined(VK_EXT_extended_dynamic_state3)) || (defined(VK_EXT_shader_object)) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_conditional_rendering)
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_QCOM_render_pass_transform)
#endif /* defined(VK_QCOM_render_pass_transform) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_inherited_viewport_scissor)
#endif /* defined(VK_NV_inherited_viewport_scissor) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_device_generated_commands_compute)
#endif /* defined(VK_NV_device_generated_commands_compute) */
#if defined(VK_EXT_conditional_rendering)
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_NV_cooperative_matrix2)
#endif /* defined(VK_NV_cooperative_matrix2) */
#if defined(VK_KHR_cooperative_matrix)
#endif /* defined(VK_KHR_cooperative_matrix) */
#if defined(VK_NV_cooperative_matrix)
#endif /* defined(VK_NV_cooperative_matrix) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_QCOM_rotated_copy_commands)
#endif /* defined(VK_QCOM_rotated_copy_commands) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_copy_memory_indirect)
#endif /* defined(VK_NV_copy_memory_indirect) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_copy_memory_indirect)
#endif /* defined(VK_NV_copy_memory_indirect) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_opacity_micromap)
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_NVX_binary_import)
#endif /* defined(VK_NVX_binary_import) */
#if defined(VK_NV_cuda_kernel_launch)
#endif /* defined(VK_NV_cuda_kernel_launch) */
#if defined(VK_KHR_external_semaphore_win32)
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_EXT_debug_marker)
#endif /* defined(VK_EXT_debug_marker) */
#if defined(VK_EXT_debug_report)
#endif /* defined(VK_EXT_debug_report) */
#if defined(VK_EXT_debug_utils)
#endif /* defined(VK_EXT_debug_utils) */
#if defined(VK_NV_memory_decompression)
#endif /* defined(VK_NV_memory_decompression) */
#if defined(VK_NV_dedicated_allocation)
#endif /* defined(VK_NV_dedicated_allocation) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_depth_bias_control)
#endif /* defined(VK_EXT_depth_bias_control) */
#if defined(VK_EXT_depth_clamp_control)
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VALVE_descriptor_set_host_mapping)
#endif /* defined(VK_VALVE_descriptor_set_host_mapping) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VALVE_descriptor_set_host_mapping)
#endif /* defined(VK_VALVE_descriptor_set_host_mapping) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_device_address_binding_report)
#endif /* defined(VK_EXT_device_address_binding_report) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_device_memory_report)
#endif /* defined(VK_EXT_device_memory_report) */
#if defined(VK_NV_device_diagnostics_config)
#endif /* defined(VK_NV_device_diagnostics_config) */
#if defined(VK_EXT_display_control)
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_EXT_device_fault)
#endif /* defined(VK_EXT_device_fault) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_AMD_memory_overallocation_behavior)
#endif /* defined(VK_AMD_memory_overallocation_behavior) */
#if defined(VK_EXT_device_memory_report)
#endif /* defined(VK_EXT_device_memory_report) */
#if defined(VK_AMDX_shader_enqueue)
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_KHR_pipeline_binary)
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_ARM_scheduling_controls)
#endif /* defined(VK_ARM_scheduling_controls) */
#if defined(VK_LUNARG_direct_driver_loading)
#endif /* defined(VK_LUNARG_direct_driver_loading) */
#if defined(VK_EXT_directfb_surface)
#endif /* defined(VK_EXT_directfb_surface) */
#if defined(VK_AMDX_shader_enqueue)
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_display_control)
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_KHR_display)
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_get_display_properties2)
#endif /* defined(VK_KHR_get_display_properties2) */
#if defined(VK_NV_display_stereo)
#endif /* defined(VK_NV_display_stereo) */
#if defined(VK_AMD_display_native_hdr)
#endif /* defined(VK_AMD_display_native_hdr) */
#if defined(VK_KHR_display)
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_get_display_properties2)
#endif /* defined(VK_KHR_get_display_properties2) */
#if defined(VK_KHR_display)
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_get_display_properties2)
#endif /* defined(VK_KHR_get_display_properties2) */
#if defined(VK_EXT_display_control)
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_KHR_display_swapchain)
#endif /* defined(VK_KHR_display_swapchain) */
#if defined(VK_KHR_display)
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_get_display_properties2)
#endif /* defined(VK_KHR_get_display_properties2) */
#if defined(VK_KHR_display)
#endif /* defined(VK_KHR_display) */
#if defined(VK_NV_display_stereo)
#endif /* defined(VK_NV_display_stereo) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_mesh_shader)
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_NV_mesh_shader)
#endif /* defined(VK_NV_mesh_shader) */
#if defined(VK_EXT_image_drm_format_modifier) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
#endif /* defined(VK_EXT_image_drm_format_modifier) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_EXT_image_drm_format_modifier)
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_EXT_image_drm_format_modifier) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
#endif /* defined(VK_EXT_image_drm_format_modifier) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_EXT_image_drm_format_modifier)
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_pipeline_library)
#endif /* defined(VK_KHR_pipeline_library) */
#if defined(VK_AMDX_shader_enqueue)
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_external_fence_win32)
#endif /* defined(VK_KHR_external_fence_win32) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_NV_external_memory)
#endif /* defined(VK_NV_external_memory) */
#if defined(VK_KHR_external_memory_win32)
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_NV_external_memory_win32)
#endif /* defined(VK_NV_external_memory_win32) */
#if defined(VK_EXT_metal_objects)
#endif /* defined(VK_EXT_metal_objects) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_external_semaphore_win32)
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_QNX_external_memory_screen_buffer)
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_external_memory_capabilities)
#endif /* defined(VK_NV_external_memory_capabilities) */
#if defined(VK_EXT_external_memory_acquire_unmodified)
#endif /* defined(VK_EXT_external_memory_acquire_unmodified) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_NV_external_memory)
#endif /* defined(VK_NV_external_memory) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_external_fence_fd)
#endif /* defined(VK_KHR_external_fence_fd) */
#if defined(VK_KHR_external_fence_win32)
#endif /* defined(VK_KHR_external_fence_win32) */
#if defined(VK_EXT_filter_cubic)
#endif /* defined(VK_EXT_filter_cubic) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_KHR_fragment_shading_rate)
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_EXT_frame_boundary)
#endif /* defined(VK_EXT_frame_boundary) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_coverage_reduction_mode)
#endif /* defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_low_latency2)
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_graphics_pipeline_library)
#endif /* defined(VK_EXT_graphics_pipeline_library) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_hdr_metadata)
#endif /* defined(VK_EXT_hdr_metadata) */
#if defined(VK_HUAWEI_hdr_vivid)
#endif /* defined(VK_HUAWEI_hdr_vivid) */
#if defined(VK_EXT_headless_surface)
#endif /* defined(VK_EXT_headless_surface) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_MVK_ios_surface)
#endif /* defined(VK_MVK_ios_surface) */
#if defined(VK_MESA_image_alignment_control)
#endif /* defined(VK_MESA_image_alignment_control) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_EXT_image_compression_control)
#endif /* defined(VK_EXT_image_compression_control) */
#if defined(VK_FUCHSIA_buffer_collection)
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_image_drm_format_modifier)
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_FUCHSIA_imagepipe_surface)
#endif /* defined(VK_FUCHSIA_imagepipe_surface) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_EXT_astc_decode_mode)
#endif /* defined(VK_EXT_astc_decode_mode) */
#if defined(VK_NVX_image_view_handle)
#endif /* defined(VK_NVX_image_view_handle) */
#if defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NVX_image_view_handle)
#endif /* defined(VK_NVX_image_view_handle) */
#if defined(VK_EXT_image_view_min_lod)
#endif /* defined(VK_EXT_image_view_min_lod) */
#if defined(VK_QCOM_image_processing)
#endif /* defined(VK_QCOM_image_processing) */
#if defined(VK_EXT_image_sliced_view_of_3d)
#endif /* defined(VK_EXT_image_sliced_view_of_3d) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_KHR_external_fence_fd)
#endif /* defined(VK_KHR_external_fence_fd) */
#if defined(VK_KHR_external_fence_win32)
#endif /* defined(VK_KHR_external_fence_win32) */
#if defined(VK_FUCHSIA_buffer_collection)
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_KHR_external_memory_fd)
#endif /* defined(VK_KHR_external_memory_fd) */
#if defined(VK_EXT_external_memory_host)
#endif /* defined(VK_EXT_external_memory_host) */
#if defined(VK_KHR_external_memory_win32)
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_NV_external_memory_win32)
#endif /* defined(VK_NV_external_memory_win32) */
#if defined(VK_FUCHSIA_external_memory)
#endif /* defined(VK_FUCHSIA_external_memory) */
#if defined(VK_EXT_metal_objects)
#endif /* defined(VK_EXT_metal_objects) */
#if defined(VK_QNX_external_memory_screen_buffer)
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
#if defined(VK_KHR_external_semaphore_fd)
#endif /* defined(VK_KHR_external_semaphore_fd) */
#if defined(VK_KHR_external_semaphore_win32)
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_FUCHSIA_external_semaphore)
#endif /* defined(VK_FUCHSIA_external_semaphore) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_INTEL_performance_query)
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_low_latency2)
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_layer_settings)
#endif /* defined(VK_EXT_layer_settings) */
#if defined(VK_MVK_macos_surface)
#endif /* defined(VK_MVK_macos_surface) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_external_memory_fd)
#endif /* defined(VK_KHR_external_memory_fd) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_KHR_external_memory_fd)
#endif /* defined(VK_KHR_external_memory_fd) */
#if defined(VK_NV_external_memory_rdma)
#endif /* defined(VK_NV_external_memory_rdma) */
#if defined(VK_KHR_external_memory_win32)
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_FUCHSIA_external_memory)
#endif /* defined(VK_FUCHSIA_external_memory) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_external_memory_host)
#endif /* defined(VK_EXT_external_memory_host) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_map_memory_placed)
#endif /* defined(VK_EXT_map_memory_placed) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_memory_priority)
#endif /* defined(VK_EXT_memory_priority) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_KHR_external_memory_win32)
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_FUCHSIA_external_memory)
#endif /* defined(VK_FUCHSIA_external_memory) */
#if defined(VK_EXT_metal_surface)
#endif /* defined(VK_EXT_metal_surface) */
#if defined(VK_EXT_opacity_micromap)
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_multi_draw)
#endif /* defined(VK_EXT_multi_draw) */
#if defined(VK_EXT_sample_locations)
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_EXT_multisampled_render_to_single_sampled)
#endif /* defined(VK_EXT_multisampled_render_to_single_sampled) */
#if defined(VK_NVX_multiview_per_view_attributes) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
#endif /* defined(VK_NVX_multiview_per_view_attributes) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_QCOM_multiview_per_view_render_areas)
#endif /* defined(VK_QCOM_multiview_per_view_render_areas) */
#if defined(VK_EXT_mutable_descriptor_type)
#endif /* defined(VK_EXT_mutable_descriptor_type) */
#if defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_NV_optical_flow)
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_NV_low_latency2)
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_GOOGLE_display_timing)
#endif /* defined(VK_GOOGLE_display_timing) */
#if defined(VK_INTEL_performance_query)
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_performance_query)
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_INTEL_performance_query)
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_performance_query) && defined(VKSC_VERSION_1_0)
#endif /* defined(VK_KHR_performance_query) && defined(VKSC_VERSION_1_0) */
#if defined(VK_KHR_performance_query)
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_INTEL_performance_query)
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_4444_formats)
#endif /* defined(VK_EXT_4444_formats) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_astc_decode_mode)
#endif /* defined(VK_EXT_astc_decode_mode) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_EXT_device_address_binding_report)
#endif /* defined(VK_EXT_device_address_binding_report) */
#if defined(VK_SEC_amigo_profiling)
#endif /* defined(VK_SEC_amigo_profiling) */
#if defined(VK_AMD_anti_lag)
#endif /* defined(VK_AMD_anti_lag) */
#if defined(VK_EXT_attachment_feedback_loop_dynamic_state)
#endif /* defined(VK_EXT_attachment_feedback_loop_dynamic_state) */
#if defined(VK_EXT_attachment_feedback_loop_layout)
#endif /* defined(VK_EXT_attachment_feedback_loop_layout) */
#if defined(VK_EXT_blend_operation_advanced)
#endif /* defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_EXT_border_color_swizzle)
#endif /* defined(VK_EXT_border_color_swizzle) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_buffer_device_address)
#endif /* defined(VK_EXT_buffer_device_address) */
#if defined(VK_HUAWEI_cluster_culling_shader)
#endif /* defined(VK_HUAWEI_cluster_culling_shader) */
#if defined(VK_AMD_device_coherent_memory)
#endif /* defined(VK_AMD_device_coherent_memory) */
#if defined(VK_EXT_color_write_enable)
#endif /* defined(VK_EXT_color_write_enable) */
#if defined(VK_NV_command_buffer_inheritance)
#endif /* defined(VK_NV_command_buffer_inheritance) */
#if defined(VK_KHR_compute_shader_derivatives)
#endif /* defined(VK_KHR_compute_shader_derivatives) */
#if defined(VK_EXT_conditional_rendering)
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_EXT_conservative_rasterization)
#endif /* defined(VK_EXT_conservative_rasterization) */
#if defined(VK_NV_cooperative_matrix2)
#endif /* defined(VK_NV_cooperative_matrix2) */
#if defined(VK_KHR_cooperative_matrix)
#endif /* defined(VK_KHR_cooperative_matrix) */
#if defined(VK_NV_cooperative_matrix)
#endif /* defined(VK_NV_cooperative_matrix) */
#if defined(VK_KHR_cooperative_matrix)
#endif /* defined(VK_KHR_cooperative_matrix) */
#if defined(VK_NV_cooperative_matrix)
#endif /* defined(VK_NV_cooperative_matrix) */
#if defined(VK_NV_copy_memory_indirect)
#endif /* defined(VK_NV_copy_memory_indirect) */
#if defined(VK_NV_corner_sampled_image)
#endif /* defined(VK_NV_corner_sampled_image) */
#if defined(VK_NV_coverage_reduction_mode)
#endif /* defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_QCOM_filter_cubic_clamp)
#endif /* defined(VK_QCOM_filter_cubic_clamp) */
#if defined(VK_QCOM_filter_cubic_weights)
#endif /* defined(VK_QCOM_filter_cubic_weights) */
#if defined(VK_NV_cuda_kernel_launch)
#endif /* defined(VK_NV_cuda_kernel_launch) */
#if defined(VK_EXT_custom_border_color)
#endif /* defined(VK_EXT_custom_border_color) */
#if defined(VK_NV_dedicated_allocation_image_aliasing)
#endif /* defined(VK_NV_dedicated_allocation_image_aliasing) */
#if defined(VK_EXT_depth_bias_control)
#endif /* defined(VK_EXT_depth_bias_control) */
#if defined(VK_EXT_depth_clamp_control)
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_depth_clamp_zero_one)
#endif /* defined(VK_EXT_depth_clamp_zero_one) */
#if defined(VK_EXT_depth_clip_control)
#endif /* defined(VK_EXT_depth_clip_control) */
#if defined(VK_EXT_depth_clip_enable)
#endif /* defined(VK_EXT_depth_clip_enable) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_NV_descriptor_pool_overallocation)
#endif /* defined(VK_NV_descriptor_pool_overallocation) */
#if defined(VK_VALVE_descriptor_set_host_mapping)
#endif /* defined(VK_VALVE_descriptor_set_host_mapping) */
#if defined(VK_NV_device_generated_commands_compute)
#endif /* defined(VK_NV_device_generated_commands_compute) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_memory_report)
#endif /* defined(VK_EXT_device_memory_report) */
#if defined(VK_NV_device_diagnostics_config)
#endif /* defined(VK_NV_device_diagnostics_config) */
#if defined(VK_EXT_discard_rectangles)
#endif /* defined(VK_EXT_discard_rectangles) */
#if defined(VK_NV_displacement_micromap)
#endif /* defined(VK_NV_displacement_micromap) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_physical_device_drm)
#endif /* defined(VK_EXT_physical_device_drm) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_dynamic_rendering_unused_attachments)
#endif /* defined(VK_EXT_dynamic_rendering_unused_attachments) */
#if defined(VK_NV_scissor_exclusive)
#endif /* defined(VK_NV_scissor_exclusive) */
#if defined(VK_EXT_extended_dynamic_state2)
#endif /* defined(VK_EXT_extended_dynamic_state2) */
#if defined(VK_EXT_extended_dynamic_state3)
#endif /* defined(VK_EXT_extended_dynamic_state3) */
#if defined(VK_EXT_extended_dynamic_state)
#endif /* defined(VK_EXT_extended_dynamic_state) */
#if defined(VK_NV_extended_sparse_address_space)
#endif /* defined(VK_NV_extended_sparse_address_space) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_ANDROID_external_format_resolve)
#endif /* defined(VK_ANDROID_external_format_resolve) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_external_memory_host)
#endif /* defined(VK_EXT_external_memory_host) */
#if defined(VK_NV_external_memory_rdma)
#endif /* defined(VK_NV_external_memory_rdma) */
#if defined(VK_QNX_external_memory_screen_buffer)
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_device_fault)
#endif /* defined(VK_EXT_device_fault) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_fragment_density_map2)
#endif /* defined(VK_EXT_fragment_density_map2) */
#if defined(VK_EXT_fragment_density_map)
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_QCOM_fragment_density_map_offset)
#endif /* defined(VK_QCOM_fragment_density_map_offset) */
#if defined(VK_EXT_fragment_density_map)
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_KHR_fragment_shader_barycentric)
#endif /* defined(VK_KHR_fragment_shader_barycentric) */
#if defined(VK_EXT_fragment_shader_interlock)
#endif /* defined(VK_EXT_fragment_shader_interlock) */
#if defined(VK_NV_fragment_shading_rate_enums)
#endif /* defined(VK_NV_fragment_shading_rate_enums) */
#if defined(VK_KHR_fragment_shading_rate)
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_EXT_frame_boundary)
#endif /* defined(VK_EXT_frame_boundary) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_graphics_pipeline_library)
#endif /* defined(VK_EXT_graphics_pipeline_library) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_HUAWEI_hdr_vivid)
#endif /* defined(VK_HUAWEI_hdr_vivid) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_image_2d_view_of_3d)
#endif /* defined(VK_EXT_image_2d_view_of_3d) */
#if defined(VK_MESA_image_alignment_control)
#endif /* defined(VK_MESA_image_alignment_control) */
#if defined(VK_EXT_image_compression_control)
#endif /* defined(VK_EXT_image_compression_control) */
#if defined(VK_EXT_image_compression_control_swapchain)
#endif /* defined(VK_EXT_image_compression_control_swapchain) */
#if defined(VK_EXT_image_drm_format_modifier)
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_QCOM_image_processing2)
#endif /* defined(VK_QCOM_image_processing2) */
#if defined(VK_QCOM_image_processing)
#endif /* defined(VK_QCOM_image_processing) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_image_sliced_view_of_3d)
#endif /* defined(VK_EXT_image_sliced_view_of_3d) */
#if defined(VK_EXT_filter_cubic)
#endif /* defined(VK_EXT_filter_cubic) */
#if defined(VK_EXT_image_view_min_lod)
#endif /* defined(VK_EXT_image_view_min_lod) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_inherited_viewport_scissor)
#endif /* defined(VK_NV_inherited_viewport_scissor) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_HUAWEI_invocation_mask)
#endif /* defined(VK_HUAWEI_invocation_mask) */
#if defined(VK_KHR_maintenance7)
#endif /* defined(VK_KHR_maintenance7) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_maintenance7)
#endif /* defined(VK_KHR_maintenance7) */
#if defined(VK_MSFT_layered_driver)
#endif /* defined(VK_MSFT_layered_driver) */
#if defined(VK_EXT_legacy_dithering)
#endif /* defined(VK_EXT_legacy_dithering) */
#if defined(VK_EXT_legacy_vertex_attributes)
#endif /* defined(VK_EXT_legacy_vertex_attributes) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_linear_color_attachment)
#endif /* defined(VK_NV_linear_color_attachment) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_KHR_maintenance7)
#endif /* defined(VK_KHR_maintenance7) */
#if defined(VK_EXT_map_memory_placed)
#endif /* defined(VK_EXT_map_memory_placed) */
#if defined(VK_EXT_memory_budget)
#endif /* defined(VK_EXT_memory_budget) */
#if defined(VK_NV_memory_decompression)
#endif /* defined(VK_NV_memory_decompression) */
#if defined(VK_EXT_memory_priority)
#endif /* defined(VK_EXT_memory_priority) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_mesh_shader)
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_NV_mesh_shader)
#endif /* defined(VK_NV_mesh_shader) */
#if defined(VK_EXT_mesh_shader)
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_NV_mesh_shader)
#endif /* defined(VK_NV_mesh_shader) */
#if defined(VK_EXT_multi_draw)
#endif /* defined(VK_EXT_multi_draw) */
#if defined(VK_EXT_multisampled_render_to_single_sampled)
#endif /* defined(VK_EXT_multisampled_render_to_single_sampled) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_NVX_multiview_per_view_attributes)
#endif /* defined(VK_NVX_multiview_per_view_attributes) */
#if defined(VK_QCOM_multiview_per_view_render_areas)
#endif /* defined(VK_QCOM_multiview_per_view_render_areas) */
#if defined(VK_QCOM_multiview_per_view_viewports)
#endif /* defined(VK_QCOM_multiview_per_view_viewports) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_mutable_descriptor_type)
#endif /* defined(VK_EXT_mutable_descriptor_type) */
#if defined(VK_EXT_nested_command_buffer)
#endif /* defined(VK_EXT_nested_command_buffer) */
#if defined(VK_EXT_non_seamless_cube_map)
#endif /* defined(VK_EXT_non_seamless_cube_map) */
#if defined(VK_EXT_opacity_micromap)
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_NV_optical_flow)
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_EXT_pci_bus_info)
#endif /* defined(VK_EXT_pci_bus_info) */
#if defined(VK_EXT_pageable_device_local_memory)
#endif /* defined(VK_EXT_pageable_device_local_memory) */
#if defined(VK_NV_per_stage_descriptor_set)
#endif /* defined(VK_NV_per_stage_descriptor_set) */
#if defined(VK_KHR_performance_query)
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_KHR_pipeline_binary)
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_KHR_pipeline_executable_properties)
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_EXT_pipeline_library_group_handles)
#endif /* defined(VK_EXT_pipeline_library_group_handles) */
#if defined(VK_EXT_pipeline_properties)
#endif /* defined(VK_EXT_pipeline_properties) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_portability_subset)
#endif /* defined(VK_KHR_portability_subset) */
#if defined(VK_NV_present_barrier)
#endif /* defined(VK_NV_present_barrier) */
#if defined(VK_KHR_present_id)
#endif /* defined(VK_KHR_present_id) */
#if defined(VK_EXT_present_mode_fifo_latest_ready)
#endif /* defined(VK_EXT_present_mode_fifo_latest_ready) */
#if defined(VK_KHR_present_wait)
#endif /* defined(VK_KHR_present_wait) */
#if defined(VK_EXT_primitive_topology_list_restart)
#endif /* defined(VK_EXT_primitive_topology_list_restart) */
#if defined(VK_EXT_primitives_generated_query)
#endif /* defined(VK_EXT_primitives_generated_query) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_provoking_vertex)
#endif /* defined(VK_EXT_provoking_vertex) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_rgba10x6_formats)
#endif /* defined(VK_EXT_rgba10x6_formats) */
#if defined(VK_EXT_rasterization_order_attachment_access)
#endif /* defined(VK_EXT_rasterization_order_attachment_access) */
#if defined(VK_NV_raw_access_chains)
#endif /* defined(VK_NV_raw_access_chains) */
#if defined(VK_KHR_ray_query)
#endif /* defined(VK_KHR_ray_query) */
#if defined(VK_NV_ray_tracing_invocation_reorder)
#endif /* defined(VK_NV_ray_tracing_invocation_reorder) */
#if defined(VK_KHR_ray_tracing_maintenance1)
#endif /* defined(VK_KHR_ray_tracing_maintenance1) */
#if defined(VK_NV_ray_tracing_motion_blur)
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_KHR_ray_tracing_pipeline)
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_ray_tracing_position_fetch)
#endif /* defined(VK_KHR_ray_tracing_position_fetch) */
#if defined(VK_NV_ray_tracing)
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_ray_tracing_validation)
#endif /* defined(VK_NV_ray_tracing_validation) */
#if defined(VK_IMG_relaxed_line_rasterization)
#endif /* defined(VK_IMG_relaxed_line_rasterization) */
#if defined(VK_ARM_render_pass_striped)
#endif /* defined(VK_ARM_render_pass_striped) */
#if defined(VK_NV_representative_fragment_test)
#endif /* defined(VK_NV_representative_fragment_test) */
#if defined(VK_EXT_robustness2)
#endif /* defined(VK_EXT_robustness2) */
#if defined(VK_EXT_sample_locations)
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_ARM_scheduling_controls)
#endif /* defined(VK_ARM_scheduling_controls) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_NV_shader_atomic_float16_vector)
#endif /* defined(VK_NV_shader_atomic_float16_vector) */
#if defined(VK_EXT_shader_atomic_float2)
#endif /* defined(VK_EXT_shader_atomic_float2) */
#if defined(VK_EXT_shader_atomic_float)
#endif /* defined(VK_EXT_shader_atomic_float) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_KHR_shader_clock)
#endif /* defined(VK_KHR_shader_clock) */
#if defined(VK_ARM_shader_core_builtins)
#endif /* defined(VK_ARM_shader_core_builtins) */
#if defined(VK_AMD_shader_core_properties2)
#endif /* defined(VK_AMD_shader_core_properties2) */
#if defined(VK_AMD_shader_core_properties)
#endif /* defined(VK_AMD_shader_core_properties) */
#if defined(VK_ARM_shader_core_properties)
#endif /* defined(VK_ARM_shader_core_properties) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_AMD_shader_early_and_late_fragment_tests)
#endif /* defined(VK_AMD_shader_early_and_late_fragment_tests) */
#if defined(VK_AMDX_shader_enqueue)
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_shader_image_atomic_int64)
#endif /* defined(VK_EXT_shader_image_atomic_int64) */
#if defined(VK_NV_shader_image_footprint)
#endif /* defined(VK_NV_shader_image_footprint) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_INTEL_shader_integer_functions2)
#endif /* defined(VK_INTEL_shader_integer_functions2) */
#if defined(VK_KHR_shader_maximal_reconvergence)
#endif /* defined(VK_KHR_shader_maximal_reconvergence) */
#if defined(VK_EXT_shader_module_identifier)
#endif /* defined(VK_EXT_shader_module_identifier) */
#if defined(VK_EXT_shader_object)
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_KHR_shader_quad_control)
#endif /* defined(VK_KHR_shader_quad_control) */
#if defined(VK_KHR_shader_relaxed_extended_instruction)
#endif /* defined(VK_KHR_shader_relaxed_extended_instruction) */
#if defined(VK_EXT_shader_replicated_composites)
#endif /* defined(VK_EXT_shader_replicated_composites) */
#if defined(VK_NV_shader_sm_builtins)
#endif /* defined(VK_NV_shader_sm_builtins) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_KHR_shader_subgroup_uniform_control_flow)
#endif /* defined(VK_KHR_shader_subgroup_uniform_control_flow) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_shader_tile_image)
#endif /* defined(VK_EXT_shader_tile_image) */
#if defined(VK_NV_shading_rate_image)
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_subpass_merge_feedback)
#endif /* defined(VK_EXT_subpass_merge_feedback) */
#if defined(VK_HUAWEI_subpass_shading)
#endif /* defined(VK_HUAWEI_subpass_shading) */
#if defined(VK_KHR_get_surface_capabilities2)
#endif /* defined(VK_KHR_get_surface_capabilities2) */
#if defined(VK_EXT_swapchain_maintenance1)
#endif /* defined(VK_EXT_swapchain_maintenance1) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_texel_buffer_alignment)
#endif /* defined(VK_EXT_texel_buffer_alignment) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_QCOM_tile_properties)
#endif /* defined(VK_QCOM_tile_properties) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_transform_feedback)
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_vertex_attribute_divisor)
#endif /* defined(VK_EXT_vertex_attribute_divisor) */
#if defined(VK_EXT_vertex_attribute_robustness)
#endif /* defined(VK_EXT_vertex_attribute_robustness) */
#if defined(VK_EXT_vertex_input_dynamic_state)
#endif /* defined(VK_EXT_vertex_input_dynamic_state) */
#if defined(VK_KHR_video_encode_av1)
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_queue)
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_encode_queue)
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_encode_quantization_map)
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_queue)
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_maintenance1)
#endif /* defined(VK_KHR_video_maintenance1) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_KHR_workgroup_memory_explicit_layout)
#endif /* defined(VK_KHR_workgroup_memory_explicit_layout) */
#if defined(VK_EXT_ycbcr_2plane_444_formats)
#endif /* defined(VK_EXT_ycbcr_2plane_444_formats) */
#if defined(VK_QCOM_ycbcr_degamma)
#endif /* defined(VK_QCOM_ycbcr_degamma) */
#if defined(VK_EXT_ycbcr_image_arrays)
#endif /* defined(VK_EXT_ycbcr_image_arrays) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_KHR_pipeline_binary)
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_blend_operation_advanced)
#endif /* defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_EXT_color_write_enable)
#endif /* defined(VK_EXT_color_write_enable) */
#if defined(VK_AMD_pipeline_compiler_control)
#endif /* defined(VK_AMD_pipeline_compiler_control) */
#if defined(VK_NV_framebuffer_mixed_samples)
#endif /* defined(VK_NV_framebuffer_mixed_samples) */
#if defined(VK_NV_coverage_reduction_mode)
#endif /* defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_NV_fragment_coverage_to_color)
#endif /* defined(VK_NV_fragment_coverage_to_color) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_discard_rectangles)
#endif /* defined(VK_EXT_discard_rectangles) */
#if defined(VK_KHR_pipeline_executable_properties)
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_NV_fragment_shading_rate_enums)
#endif /* defined(VK_NV_fragment_shading_rate_enums) */
#if defined(VK_KHR_fragment_shading_rate)
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_NV_device_generated_commands_compute)
#endif /* defined(VK_NV_device_generated_commands_compute) */
#if defined(VK_KHR_pipeline_executable_properties)
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_pipeline_properties)
#endif /* defined(VK_EXT_pipeline_properties) */
#if defined(VK_EXT_conservative_rasterization)
#endif /* defined(VK_EXT_conservative_rasterization) */
#if defined(VK_EXT_depth_clip_enable)
#endif /* defined(VK_EXT_depth_clip_enable) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_provoking_vertex)
#endif /* defined(VK_EXT_provoking_vertex) */
#if defined(VK_AMD_rasterization_order)
#endif /* defined(VK_AMD_rasterization_order) */
#if defined(VK_EXT_transform_feedback)
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_NV_representative_fragment_test)
#endif /* defined(VK_NV_representative_fragment_test) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_sample_locations)
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_EXT_shader_module_identifier)
#endif /* defined(VK_EXT_shader_module_identifier) */
#if defined(VK_AMDX_shader_enqueue)
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_shading_rate_image)
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_EXT_depth_clamp_control)
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_depth_clip_control)
#endif /* defined(VK_EXT_depth_clip_control) */
#if defined(VK_NV_scissor_exclusive)
#endif /* defined(VK_NV_scissor_exclusive) */
#if defined(VK_NV_shading_rate_image)
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_NV_viewport_swizzle)
#endif /* defined(VK_NV_viewport_swizzle) */
#if defined(VK_NV_clip_space_w_scaling)
#endif /* defined(VK_NV_clip_space_w_scaling) */
#if defined(VK_GGP_frame_token)
#endif /* defined(VK_GGP_frame_token) */
#if defined(VK_KHR_present_id)
#endif /* defined(VK_KHR_present_id) */
#if defined(VK_KHR_swapchain)
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_KHR_incremental_present)
#endif /* defined(VK_KHR_incremental_present) */
#if defined(VK_GOOGLE_display_timing)
#endif /* defined(VK_GOOGLE_display_timing) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_low_latency)
#endif /* defined(VK_NV_low_latency) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_performance_query)
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_INTEL_performance_query)
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_video_encode_queue)
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2))
#endif /* defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2)) */
#if defined(VK_NV_device_diagnostic_checkpoints)
#endif /* defined(VK_NV_device_diagnostic_checkpoints) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_video_queue)
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_ray_tracing_pipeline)
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_NV_ray_tracing)
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_GOOGLE_display_timing)
#endif /* defined(VK_GOOGLE_display_timing) */
#if defined(VK_KHR_pipeline_binary)
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_EXT_swapchain_maintenance1)
#endif /* defined(VK_EXT_swapchain_maintenance1) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_subpass_merge_feedback)
#endif /* defined(VK_EXT_subpass_merge_feedback) */
#if defined(VK_EXT_fragment_density_map)
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_sample_locations)
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_ARM_render_pass_striped)
#endif /* defined(VK_ARM_render_pass_striped) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_ARM_render_pass_striped)
#endif /* defined(VK_ARM_render_pass_striped) */
#if defined(VK_EXT_subpass_merge_feedback)
#endif /* defined(VK_EXT_subpass_merge_feedback) */
#if defined(VK_QCOM_render_pass_transform)
#endif /* defined(VK_QCOM_render_pass_transform) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_fragment_density_map) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
#endif /* defined(VK_EXT_fragment_density_map) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
#endif /* defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_NV_ray_tracing_motion_blur)
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_QCOM_image_processing2)
#endif /* defined(VK_QCOM_image_processing2) */
#if defined(VK_EXT_border_color_swizzle)
#endif /* defined(VK_EXT_border_color_swizzle) */
#if defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_QCOM_filter_cubic_weights)
#endif /* defined(VK_QCOM_filter_cubic_weights) */
#if defined(VK_EXT_custom_border_color)
#endif /* defined(VK_EXT_custom_border_color) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_QCOM_ycbcr_degamma)
#endif /* defined(VK_QCOM_ycbcr_degamma) */
#if defined(VK_QNX_external_memory_screen_buffer)
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
#if defined(VK_QNX_screen_surface)
#endif /* defined(VK_QNX_screen_surface) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_external_semaphore_fd)
#endif /* defined(VK_KHR_external_semaphore_fd) */
#if defined(VK_KHR_external_semaphore_win32)
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_FUCHSIA_external_semaphore)
#endif /* defined(VK_FUCHSIA_external_semaphore) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer)
#endif /* defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer) */
#if defined(VK_NV_low_latency2)
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_shader_object)
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_shader_module_identifier)
#endif /* defined(VK_EXT_shader_module_identifier) */
#if defined(VK_EXT_validation_cache)
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_AMD_shader_info)
#endif /* defined(VK_AMD_shader_info) */
#if defined(VK_KHR_shared_presentable_image)
#endif /* defined(VK_KHR_shared_presentable_image) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_GGP_stream_descriptor_surface)
#endif /* defined(VK_GGP_stream_descriptor_surface) */
#if defined(VK_KHR_ray_tracing_pipeline)
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_QCOM_fragment_density_map_offset)
#endif /* defined(VK_QCOM_fragment_density_map_offset) */
#if defined(VK_EXT_multisampled_render_to_single_sampled)
#endif /* defined(VK_EXT_multisampled_render_to_single_sampled) */
#if defined(VK_HUAWEI_subpass_shading)
#endif /* defined(VK_HUAWEI_subpass_shading) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_display_surface_counter)
#endif /* defined(VK_EXT_display_surface_counter) */
#if defined(VK_KHR_surface)
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_get_surface_capabilities2)
#endif /* defined(VK_KHR_get_surface_capabilities2) */
#if defined(VK_EXT_full_screen_exclusive)
#endif /* defined(VK_EXT_full_screen_exclusive) */
#if defined(VK_NV_present_barrier)
#endif /* defined(VK_NV_present_barrier) */
#if defined(VK_KHR_surface)
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_get_surface_capabilities2)
#endif /* defined(VK_KHR_get_surface_capabilities2) */
#if defined(VK_EXT_full_screen_exclusive)
#endif /* defined(VK_EXT_full_screen_exclusive) */
#if defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_win32_surface)
#endif /* defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_win32_surface) */
#if defined(VK_EXT_surface_maintenance1)
#endif /* defined(VK_EXT_surface_maintenance1) */
#if defined(VK_KHR_surface_protected_capabilities)
#endif /* defined(VK_KHR_surface_protected_capabilities) */
#if defined(VK_EXT_display_control)
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_KHR_swapchain)
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_AMD_display_native_hdr)
#endif /* defined(VK_AMD_display_native_hdr) */
#if defined(VK_NV_low_latency2)
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_NV_present_barrier)
#endif /* defined(VK_NV_present_barrier) */
#if defined(VK_EXT_swapchain_maintenance1)
#endif /* defined(VK_EXT_swapchain_maintenance1) */
#if defined(VK_AMD_texture_gather_bias_lod)
#endif /* defined(VK_AMD_texture_gather_bias_lod) */
#if defined(VK_QCOM_tile_properties)
#endif /* defined(VK_QCOM_tile_properties) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_KHR_ray_tracing_maintenance1) && defined(VK_KHR_ray_tracing_pipeline)
#endif /* defined(VK_KHR_ray_tracing_maintenance1) && defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_ray_tracing_pipeline)
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_EXT_validation_cache)
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_EXT_validation_features)
#endif /* defined(VK_EXT_validation_features) */
#if defined(VK_EXT_validation_flags)
#endif /* defined(VK_EXT_validation_flags) */
#if (defined(VK_EXT_shader_object)) || (defined(VK_EXT_vertex_input_dynamic_state))
#endif /* (defined(VK_EXT_shader_object)) || (defined(VK_EXT_vertex_input_dynamic_state)) */
#if defined(VK_NN_vi_surface)
#endif /* defined(VK_NN_vi_surface) */
#if defined(VK_KHR_video_queue)
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_decode_av1)
#endif /* defined(VK_KHR_video_decode_av1) */
#if defined(VK_KHR_video_decode_queue)
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_decode_h264)
#endif /* defined(VK_KHR_video_decode_h264) */
#if defined(VK_KHR_video_decode_h265)
#endif /* defined(VK_KHR_video_decode_h265) */
#if defined(VK_KHR_video_decode_queue)
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_av1)
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1)
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_av1)
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_queue)
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_encode_h264)
#endif /* defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h264)
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_h264)
#endif /* defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_h265)
#endif /* defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265)
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_h265)
#endif /* defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_queue)
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_encode_quantization_map)
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_encode_queue)
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_queue)
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1)
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265)
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_queue)
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_encode_quantization_map)
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_maintenance1)
#endif /* defined(VK_KHR_video_maintenance1) */
#if defined(VK_KHR_video_queue)
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_wayland_surface)
#endif /* defined(VK_KHR_wayland_surface) */
#if defined(VK_KHR_win32_keyed_mutex)
#endif /* defined(VK_KHR_win32_keyed_mutex) */
#if defined(VK_NV_win32_keyed_mutex)
#endif /* defined(VK_NV_win32_keyed_mutex) */
#if defined(VK_KHR_win32_surface)
#endif /* defined(VK_KHR_win32_surface) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_ray_tracing)
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_VERSION_1_3)
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands) && defined(VK_EXT_shader_object)
#endif /* defined(VK_EXT_device_generated_commands) && defined(VK_EXT_shader_object) */
#if defined(VK_KHR_xcb_surface)
#endif /* defined(VK_KHR_xcb_surface) */
#if defined(VK_KHR_xlib_surface)
#endif /* defined(VK_KHR_xlib_surface) */
/* VOLK_GENERATE_DECL_ENUM */

void Module_dasVulkan::bindEnums(ModuleLibrary &lib)
{
  /* VOLK_GENERATE_BIND_ENUM */
#if defined(VK_VERSION_1_0)
  addConstant<uint32_t>(*this,"VK_ATTACHMENT_UNUSED",VK_ATTACHMENT_UNUSED);
  addConstant<uint32_t>(*this,"VK_FALSE",VK_FALSE);
  addConstant<float>(*this,"VK_LOD_CLAMP_NONE",VK_LOD_CLAMP_NONE);
  addConstant<uint32_t>(*this,"VK_QUEUE_FAMILY_IGNORED",VK_QUEUE_FAMILY_IGNORED);
  addConstant<uint32_t>(*this,"VK_REMAINING_ARRAY_LAYERS",VK_REMAINING_ARRAY_LAYERS);
  addConstant<uint32_t>(*this,"VK_REMAINING_MIP_LEVELS",VK_REMAINING_MIP_LEVELS);
  addConstant<uint32_t>(*this,"VK_SUBPASS_EXTERNAL",VK_SUBPASS_EXTERNAL);
  addConstant<uint32_t>(*this,"VK_TRUE",VK_TRUE);
  addConstant<uint64_t>(*this,"VK_WHOLE_SIZE",VK_WHOLE_SIZE);
  addConstant<uint32_t>(*this,"VK_MAX_MEMORY_TYPES",VK_MAX_MEMORY_TYPES);
  addConstant<uint32_t>(*this,"VK_MAX_PHYSICAL_DEVICE_NAME_SIZE",VK_MAX_PHYSICAL_DEVICE_NAME_SIZE);
  addConstant<uint32_t>(*this,"VK_UUID_SIZE",VK_UUID_SIZE);
  addConstant<uint32_t>(*this,"VK_MAX_EXTENSION_NAME_SIZE",VK_MAX_EXTENSION_NAME_SIZE);
  addConstant<uint32_t>(*this,"VK_MAX_DESCRIPTION_SIZE",VK_MAX_DESCRIPTION_SIZE);
  addConstant<uint32_t>(*this,"VK_MAX_MEMORY_HEAPS",VK_MAX_MEMORY_HEAPS);
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
  addConstant<uint32_t>(*this,"VK_MAX_DEVICE_GROUP_SIZE",VK_MAX_DEVICE_GROUP_SIZE);
  addConstant<uint32_t>(*this,"VK_LUID_SIZE",VK_LUID_SIZE);
  addConstant<uint32_t>(*this,"VK_QUEUE_FAMILY_EXTERNAL",VK_QUEUE_FAMILY_EXTERNAL);
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
  addConstant<uint32_t>(*this,"VK_MAX_DRIVER_NAME_SIZE",VK_MAX_DRIVER_NAME_SIZE);
  addConstant<uint32_t>(*this,"VK_MAX_DRIVER_INFO_SIZE",VK_MAX_DRIVER_INFO_SIZE);
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
  addConstant<uint32_t>(*this,"VK_MAX_GLOBAL_PRIORITY_SIZE",VK_MAX_GLOBAL_PRIORITY_SIZE);
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_AMDX_shader_enqueue)
  addConstant<uint32_t>(*this,"VK_SHADER_INDEX_UNUSED_AMDX",VK_SHADER_INDEX_UNUSED_AMDX);
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_EXT_image_sliced_view_of_3d)
  addConstant<uint32_t>(*this,"VK_REMAINING_3D_SLICES_EXT",VK_REMAINING_3D_SLICES_EXT);
#endif /* defined(VK_EXT_image_sliced_view_of_3d) */
#if defined(VK_EXT_queue_family_foreign)
  addConstant<uint32_t>(*this,"VK_QUEUE_FAMILY_FOREIGN_EXT",VK_QUEUE_FAMILY_FOREIGN_EXT);
#endif /* defined(VK_EXT_queue_family_foreign) */
#if defined(VK_EXT_shader_module_identifier)
  addConstant<uint32_t>(*this,"VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT",VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT);
#endif /* defined(VK_EXT_shader_module_identifier) */
#if defined(VK_KHR_pipeline_binary)
  addConstant<uint32_t>(*this,"VK_MAX_PIPELINE_BINARY_KEY_SIZE_KHR",VK_MAX_PIPELINE_BINARY_KEY_SIZE_KHR);
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_KHR_ray_tracing_pipeline)
  addConstant<uint32_t>(*this,"VK_SHADER_UNUSED_KHR",VK_SHADER_UNUSED_KHR);
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if (defined(VK_KHR_video_decode_av1)) || (defined(VK_KHR_video_encode_av1))
  addConstant<uint32_t>(*this,"VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR",VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR);
#endif /* (defined(VK_KHR_video_decode_av1)) || (defined(VK_KHR_video_encode_av1)) */
#if defined(VK_VERSION_1_0)
addEnumeration(make_smart<EnumerationVkAccessFlagBits>());
addEnumFlagOps<VkAccessFlagBits>(*this,lib,"VkAccessFlagBits");
addExtern<bool(*)(uint32_t,VkAccessFlagBits),das_operator_enum_AND_AND<VkAccessFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkAccessFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkAttachmentDescriptionFlagBits>());
addEnumFlagOps<VkAttachmentDescriptionFlagBits>(*this,lib,"VkAttachmentDescriptionFlagBits");
addExtern<bool(*)(uint32_t,VkAttachmentDescriptionFlagBits),das_operator_enum_AND_AND<VkAttachmentDescriptionFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkAttachmentDescriptionFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkAttachmentLoadOp>());
addEnumeration(make_smart<EnumerationVkAttachmentStoreOp>());
addEnumeration(make_smart<EnumerationVkBlendFactor>());
addEnumeration(make_smart<EnumerationVkBlendOp>());
addEnumeration(make_smart<EnumerationVkBorderColor>());
addEnumeration(make_smart<EnumerationVkBufferCreateFlagBits>());
addEnumFlagOps<VkBufferCreateFlagBits>(*this,lib,"VkBufferCreateFlagBits");
addExtern<bool(*)(uint32_t,VkBufferCreateFlagBits),das_operator_enum_AND_AND<VkBufferCreateFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkBufferCreateFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkBufferUsageFlagBits>());
addEnumFlagOps<VkBufferUsageFlagBits>(*this,lib,"VkBufferUsageFlagBits");
addExtern<bool(*)(uint32_t,VkBufferUsageFlagBits),das_operator_enum_AND_AND<VkBufferUsageFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkBufferUsageFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkColorComponentFlagBits>());
addEnumFlagOps<VkColorComponentFlagBits>(*this,lib,"VkColorComponentFlagBits");
addExtern<bool(*)(uint32_t,VkColorComponentFlagBits),das_operator_enum_AND_AND<VkColorComponentFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkColorComponentFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkCommandBufferLevel>());
addEnumeration(make_smart<EnumerationVkCommandBufferResetFlagBits>());
addEnumFlagOps<VkCommandBufferResetFlagBits>(*this,lib,"VkCommandBufferResetFlagBits");
addExtern<bool(*)(uint32_t,VkCommandBufferResetFlagBits),das_operator_enum_AND_AND<VkCommandBufferResetFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkCommandBufferResetFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkCommandBufferUsageFlagBits>());
addEnumFlagOps<VkCommandBufferUsageFlagBits>(*this,lib,"VkCommandBufferUsageFlagBits");
addExtern<bool(*)(uint32_t,VkCommandBufferUsageFlagBits),das_operator_enum_AND_AND<VkCommandBufferUsageFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkCommandBufferUsageFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkCommandPoolCreateFlagBits>());
addEnumFlagOps<VkCommandPoolCreateFlagBits>(*this,lib,"VkCommandPoolCreateFlagBits");
addExtern<bool(*)(uint32_t,VkCommandPoolCreateFlagBits),das_operator_enum_AND_AND<VkCommandPoolCreateFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkCommandPoolCreateFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkCommandPoolResetFlagBits>());
addEnumFlagOps<VkCommandPoolResetFlagBits>(*this,lib,"VkCommandPoolResetFlagBits");
addExtern<bool(*)(uint32_t,VkCommandPoolResetFlagBits),das_operator_enum_AND_AND<VkCommandPoolResetFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkCommandPoolResetFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkCompareOp>());
addEnumeration(make_smart<EnumerationVkComponentSwizzle>());
addEnumeration(make_smart<EnumerationVkCullModeFlagBits>());
addEnumFlagOps<VkCullModeFlagBits>(*this,lib,"VkCullModeFlagBits");
addExtern<bool(*)(uint32_t,VkCullModeFlagBits),das_operator_enum_AND_AND<VkCullModeFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkCullModeFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkDependencyFlagBits>());
addEnumFlagOps<VkDependencyFlagBits>(*this,lib,"VkDependencyFlagBits");
addExtern<bool(*)(uint32_t,VkDependencyFlagBits),das_operator_enum_AND_AND<VkDependencyFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDependencyFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkDescriptorPoolCreateFlagBits>());
addEnumFlagOps<VkDescriptorPoolCreateFlagBits>(*this,lib,"VkDescriptorPoolCreateFlagBits");
addExtern<bool(*)(uint32_t,VkDescriptorPoolCreateFlagBits),das_operator_enum_AND_AND<VkDescriptorPoolCreateFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDescriptorPoolCreateFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkDescriptorType>());
addEnumeration(make_smart<EnumerationVkDynamicState>());
addEnumeration(make_smart<EnumerationVkFenceCreateFlagBits>());
addEnumFlagOps<VkFenceCreateFlagBits>(*this,lib,"VkFenceCreateFlagBits");
addExtern<bool(*)(uint32_t,VkFenceCreateFlagBits),das_operator_enum_AND_AND<VkFenceCreateFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkFenceCreateFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkFilter>());
addEnumeration(make_smart<EnumerationVkFormat>());
addEnumeration(make_smart<EnumerationVkFormatFeatureFlagBits>());
addEnumFlagOps<VkFormatFeatureFlagBits>(*this,lib,"VkFormatFeatureFlagBits");
addExtern<bool(*)(uint32_t,VkFormatFeatureFlagBits),das_operator_enum_AND_AND<VkFormatFeatureFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkFormatFeatureFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkFrontFace>());
addEnumeration(make_smart<EnumerationVkImageAspectFlagBits>());
addEnumFlagOps<VkImageAspectFlagBits>(*this,lib,"VkImageAspectFlagBits");
addExtern<bool(*)(uint32_t,VkImageAspectFlagBits),das_operator_enum_AND_AND<VkImageAspectFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkImageAspectFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkImageCreateFlagBits>());
addEnumFlagOps<VkImageCreateFlagBits>(*this,lib,"VkImageCreateFlagBits");
addExtern<bool(*)(uint32_t,VkImageCreateFlagBits),das_operator_enum_AND_AND<VkImageCreateFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkImageCreateFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkImageLayout>());
addEnumeration(make_smart<EnumerationVkImageTiling>());
addEnumeration(make_smart<EnumerationVkImageType>());
addEnumeration(make_smart<EnumerationVkImageUsageFlagBits>());
addEnumFlagOps<VkImageUsageFlagBits>(*this,lib,"VkImageUsageFlagBits");
addExtern<bool(*)(uint32_t,VkImageUsageFlagBits),das_operator_enum_AND_AND<VkImageUsageFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkImageUsageFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkImageViewType>());
addEnumeration(make_smart<EnumerationVkIndexType>());
addEnumeration(make_smart<EnumerationVkInternalAllocationType>());
addEnumeration(make_smart<EnumerationVkLogicOp>());
addEnumeration(make_smart<EnumerationVkMemoryHeapFlagBits>());
addEnumFlagOps<VkMemoryHeapFlagBits>(*this,lib,"VkMemoryHeapFlagBits");
addExtern<bool(*)(uint32_t,VkMemoryHeapFlagBits),das_operator_enum_AND_AND<VkMemoryHeapFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkMemoryHeapFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkMemoryPropertyFlagBits>());
addEnumFlagOps<VkMemoryPropertyFlagBits>(*this,lib,"VkMemoryPropertyFlagBits");
addExtern<bool(*)(uint32_t,VkMemoryPropertyFlagBits),das_operator_enum_AND_AND<VkMemoryPropertyFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkMemoryPropertyFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkObjectType>());
addEnumeration(make_smart<EnumerationVkPhysicalDeviceType>());
addEnumeration(make_smart<EnumerationVkPipelineBindPoint>());
addEnumeration(make_smart<EnumerationVkPipelineCacheHeaderVersion>());
addEnumeration(make_smart<EnumerationVkPipelineCreateFlagBits>());
addEnumFlagOps<VkPipelineCreateFlagBits>(*this,lib,"VkPipelineCreateFlagBits");
addExtern<bool(*)(uint32_t,VkPipelineCreateFlagBits),das_operator_enum_AND_AND<VkPipelineCreateFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkPipelineCreateFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkPipelineStageFlagBits>());
addEnumFlagOps<VkPipelineStageFlagBits>(*this,lib,"VkPipelineStageFlagBits");
addExtern<bool(*)(uint32_t,VkPipelineStageFlagBits),das_operator_enum_AND_AND<VkPipelineStageFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkPipelineStageFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkPolygonMode>());
addEnumeration(make_smart<EnumerationVkPrimitiveTopology>());
addEnumeration(make_smart<EnumerationVkQueryControlFlagBits>());
addEnumFlagOps<VkQueryControlFlagBits>(*this,lib,"VkQueryControlFlagBits");
addExtern<bool(*)(uint32_t,VkQueryControlFlagBits),das_operator_enum_AND_AND<VkQueryControlFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkQueryControlFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkQueryPipelineStatisticFlagBits>());
addEnumFlagOps<VkQueryPipelineStatisticFlagBits>(*this,lib,"VkQueryPipelineStatisticFlagBits");
addExtern<bool(*)(uint32_t,VkQueryPipelineStatisticFlagBits),das_operator_enum_AND_AND<VkQueryPipelineStatisticFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkQueryPipelineStatisticFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkQueryResultFlagBits>());
addEnumFlagOps<VkQueryResultFlagBits>(*this,lib,"VkQueryResultFlagBits");
addExtern<bool(*)(uint32_t,VkQueryResultFlagBits),das_operator_enum_AND_AND<VkQueryResultFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkQueryResultFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkQueryType>());
addEnumeration(make_smart<EnumerationVkQueueFlagBits>());
addEnumFlagOps<VkQueueFlagBits>(*this,lib,"VkQueueFlagBits");
addExtern<bool(*)(uint32_t,VkQueueFlagBits),das_operator_enum_AND_AND<VkQueueFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkQueueFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkResult>());
addEnumeration(make_smart<EnumerationVkSampleCountFlagBits>());
addEnumFlagOps<VkSampleCountFlagBits>(*this,lib,"VkSampleCountFlagBits");
addExtern<bool(*)(uint32_t,VkSampleCountFlagBits),das_operator_enum_AND_AND<VkSampleCountFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkSampleCountFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkSamplerAddressMode>());
addEnumeration(make_smart<EnumerationVkSamplerMipmapMode>());
addEnumeration(make_smart<EnumerationVkShaderStageFlagBits>());
addEnumFlagOps<VkShaderStageFlagBits>(*this,lib,"VkShaderStageFlagBits");
addExtern<bool(*)(uint32_t,VkShaderStageFlagBits),das_operator_enum_AND_AND<VkShaderStageFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkShaderStageFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkSharingMode>());
addEnumeration(make_smart<EnumerationVkSparseImageFormatFlagBits>());
addEnumFlagOps<VkSparseImageFormatFlagBits>(*this,lib,"VkSparseImageFormatFlagBits");
addExtern<bool(*)(uint32_t,VkSparseImageFormatFlagBits),das_operator_enum_AND_AND<VkSparseImageFormatFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkSparseImageFormatFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkSparseMemoryBindFlagBits>());
addEnumFlagOps<VkSparseMemoryBindFlagBits>(*this,lib,"VkSparseMemoryBindFlagBits");
addExtern<bool(*)(uint32_t,VkSparseMemoryBindFlagBits),das_operator_enum_AND_AND<VkSparseMemoryBindFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkSparseMemoryBindFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkStencilFaceFlagBits>());
addEnumFlagOps<VkStencilFaceFlagBits>(*this,lib,"VkStencilFaceFlagBits");
addExtern<bool(*)(uint32_t,VkStencilFaceFlagBits),das_operator_enum_AND_AND<VkStencilFaceFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkStencilFaceFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkStencilOp>());
addEnumeration(make_smart<EnumerationVkStructureType>());
addEnumeration(make_smart<EnumerationVkSubpassContents>());
addEnumeration(make_smart<EnumerationVkSystemAllocationScope>());
addEnumeration(make_smart<EnumerationVkVendorId>());
addEnumeration(make_smart<EnumerationVkVertexInputRate>());
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
addEnumeration(make_smart<EnumerationVkChromaLocation>());
addEnumeration(make_smart<EnumerationVkDescriptorUpdateTemplateType>());
addEnumeration(make_smart<EnumerationVkExternalFenceFeatureFlagBits>());
addEnumFlagOps<VkExternalFenceFeatureFlagBits>(*this,lib,"VkExternalFenceFeatureFlagBits");
addExtern<bool(*)(uint32_t,VkExternalFenceFeatureFlagBits),das_operator_enum_AND_AND<VkExternalFenceFeatureFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkExternalFenceFeatureFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkExternalFenceHandleTypeFlagBits>());
addEnumFlagOps<VkExternalFenceHandleTypeFlagBits>(*this,lib,"VkExternalFenceHandleTypeFlagBits");
addExtern<bool(*)(uint32_t,VkExternalFenceHandleTypeFlagBits),das_operator_enum_AND_AND<VkExternalFenceHandleTypeFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkExternalFenceHandleTypeFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkExternalMemoryFeatureFlagBits>());
addEnumFlagOps<VkExternalMemoryFeatureFlagBits>(*this,lib,"VkExternalMemoryFeatureFlagBits");
addExtern<bool(*)(uint32_t,VkExternalMemoryFeatureFlagBits),das_operator_enum_AND_AND<VkExternalMemoryFeatureFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkExternalMemoryFeatureFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkExternalMemoryHandleTypeFlagBits>());
addEnumFlagOps<VkExternalMemoryHandleTypeFlagBits>(*this,lib,"VkExternalMemoryHandleTypeFlagBits");
addExtern<bool(*)(uint32_t,VkExternalMemoryHandleTypeFlagBits),das_operator_enum_AND_AND<VkExternalMemoryHandleTypeFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkExternalMemoryHandleTypeFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkExternalSemaphoreFeatureFlagBits>());
addEnumFlagOps<VkExternalSemaphoreFeatureFlagBits>(*this,lib,"VkExternalSemaphoreFeatureFlagBits");
addExtern<bool(*)(uint32_t,VkExternalSemaphoreFeatureFlagBits),das_operator_enum_AND_AND<VkExternalSemaphoreFeatureFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkExternalSemaphoreFeatureFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkExternalSemaphoreHandleTypeFlagBits>());
addEnumFlagOps<VkExternalSemaphoreHandleTypeFlagBits>(*this,lib,"VkExternalSemaphoreHandleTypeFlagBits");
addExtern<bool(*)(uint32_t,VkExternalSemaphoreHandleTypeFlagBits),das_operator_enum_AND_AND<VkExternalSemaphoreHandleTypeFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkExternalSemaphoreHandleTypeFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkFenceImportFlagBits>());
addEnumFlagOps<VkFenceImportFlagBits>(*this,lib,"VkFenceImportFlagBits");
addExtern<bool(*)(uint32_t,VkFenceImportFlagBits),das_operator_enum_AND_AND<VkFenceImportFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkFenceImportFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkMemoryAllocateFlagBits>());
addEnumFlagOps<VkMemoryAllocateFlagBits>(*this,lib,"VkMemoryAllocateFlagBits");
addExtern<bool(*)(uint32_t,VkMemoryAllocateFlagBits),das_operator_enum_AND_AND<VkMemoryAllocateFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkMemoryAllocateFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkPeerMemoryFeatureFlagBits>());
addEnumFlagOps<VkPeerMemoryFeatureFlagBits>(*this,lib,"VkPeerMemoryFeatureFlagBits");
addExtern<bool(*)(uint32_t,VkPeerMemoryFeatureFlagBits),das_operator_enum_AND_AND<VkPeerMemoryFeatureFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkPeerMemoryFeatureFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkPointClippingBehavior>());
addEnumeration(make_smart<EnumerationVkSamplerYcbcrModelConversion>());
addEnumeration(make_smart<EnumerationVkSamplerYcbcrRange>());
addEnumeration(make_smart<EnumerationVkSemaphoreImportFlagBits>());
addEnumFlagOps<VkSemaphoreImportFlagBits>(*this,lib,"VkSemaphoreImportFlagBits");
addExtern<bool(*)(uint32_t,VkSemaphoreImportFlagBits),das_operator_enum_AND_AND<VkSemaphoreImportFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkSemaphoreImportFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkSubgroupFeatureFlagBits>());
addEnumFlagOps<VkSubgroupFeatureFlagBits>(*this,lib,"VkSubgroupFeatureFlagBits");
addExtern<bool(*)(uint32_t,VkSubgroupFeatureFlagBits),das_operator_enum_AND_AND<VkSubgroupFeatureFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkSubgroupFeatureFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkTessellationDomainOrigin>());
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
addEnumeration(make_smart<EnumerationVkDescriptorBindingFlagBits>());
addEnumFlagOps<VkDescriptorBindingFlagBits>(*this,lib,"VkDescriptorBindingFlagBits");
addExtern<bool(*)(uint32_t,VkDescriptorBindingFlagBits),das_operator_enum_AND_AND<VkDescriptorBindingFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDescriptorBindingFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkDriverId>());
addEnumeration(make_smart<EnumerationVkResolveModeFlagBits>());
addEnumFlagOps<VkResolveModeFlagBits>(*this,lib,"VkResolveModeFlagBits");
addExtern<bool(*)(uint32_t,VkResolveModeFlagBits),das_operator_enum_AND_AND<VkResolveModeFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkResolveModeFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkSamplerReductionMode>());
addEnumeration(make_smart<EnumerationVkSemaphoreType>());
addEnumeration(make_smart<EnumerationVkSemaphoreWaitFlagBits>());
addEnumFlagOps<VkSemaphoreWaitFlagBits>(*this,lib,"VkSemaphoreWaitFlagBits");
addExtern<bool(*)(uint32_t,VkSemaphoreWaitFlagBits),das_operator_enum_AND_AND<VkSemaphoreWaitFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkSemaphoreWaitFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkShaderFloatControlsIndependence>());
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_3)
addEnumeration(make_smart<EnumerationVkAccessFlagBits2>());
addEnumeration(make_smart<EnumerationVkFormatFeatureFlagBits2>());
addEnumeration(make_smart<EnumerationVkPipelineCreationFeedbackFlagBits>());
addEnumFlagOps<VkPipelineCreationFeedbackFlagBits>(*this,lib,"VkPipelineCreationFeedbackFlagBits");
addExtern<bool(*)(uint32_t,VkPipelineCreationFeedbackFlagBits),das_operator_enum_AND_AND<VkPipelineCreationFeedbackFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkPipelineCreationFeedbackFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkPipelineStageFlagBits2>());
addEnumeration(make_smart<EnumerationVkRenderingFlagBits>());
addEnumFlagOps<VkRenderingFlagBits>(*this,lib,"VkRenderingFlagBits");
addExtern<bool(*)(uint32_t,VkRenderingFlagBits),das_operator_enum_AND_AND<VkRenderingFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkRenderingFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkSubmitFlagBits>());
addEnumFlagOps<VkSubmitFlagBits>(*this,lib,"VkSubmitFlagBits");
addExtern<bool(*)(uint32_t,VkSubmitFlagBits),das_operator_enum_AND_AND<VkSubmitFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkSubmitFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkToolPurposeFlagBits>());
addEnumFlagOps<VkToolPurposeFlagBits>(*this,lib,"VkToolPurposeFlagBits");
addExtern<bool(*)(uint32_t,VkToolPurposeFlagBits),das_operator_enum_AND_AND<VkToolPurposeFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkToolPurposeFlagBits>::invoke");
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
addEnumeration(make_smart<EnumerationVkBufferUsageFlagBits2>());
addEnumeration(make_smart<EnumerationVkHostImageCopyFlagBits>());
addEnumFlagOps<VkHostImageCopyFlagBits>(*this,lib,"VkHostImageCopyFlagBits");
addExtern<bool(*)(uint32_t,VkHostImageCopyFlagBits),das_operator_enum_AND_AND<VkHostImageCopyFlagBits>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkHostImageCopyFlagBits>::invoke");
addEnumeration(make_smart<EnumerationVkLineRasterizationMode>());
addEnumeration(make_smart<EnumerationVkPipelineCreateFlagBits2>());
addEnumeration(make_smart<EnumerationVkPipelineRobustnessBufferBehavior>());
addEnumeration(make_smart<EnumerationVkPipelineRobustnessImageBehavior>());
addEnumeration(make_smart<EnumerationVkQueueGlobalPriority>());
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_AMD_anti_lag)
addEnumeration(make_smart<EnumerationVkAntiLagModeAMD>());
addEnumeration(make_smart<EnumerationVkAntiLagStageAMD>());
#endif /* defined(VK_AMD_anti_lag) */
#if defined(VK_AMD_memory_overallocation_behavior)
addEnumeration(make_smart<EnumerationVkMemoryOverallocationBehaviorAMD>());
#endif /* defined(VK_AMD_memory_overallocation_behavior) */
#if defined(VK_AMD_rasterization_order)
addEnumeration(make_smart<EnumerationVkRasterizationOrderAMD>());
#endif /* defined(VK_AMD_rasterization_order) */
#if defined(VK_AMD_shader_info)
addEnumeration(make_smart<EnumerationVkShaderInfoTypeAMD>());
#endif /* defined(VK_AMD_shader_info) */
#if defined(VK_ARM_scheduling_controls)
addEnumeration(make_smart<EnumerationVkPhysicalDeviceSchedulingControlsFlagBitsARM>());
#endif /* defined(VK_ARM_scheduling_controls) */
#if defined(VK_EXT_blend_operation_advanced)
addEnumeration(make_smart<EnumerationVkBlendOverlapEXT>());
#endif /* defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_EXT_conditional_rendering)
addEnumeration(make_smart<EnumerationVkConditionalRenderingFlagBitsEXT>());
addEnumFlagOps<VkConditionalRenderingFlagBitsEXT>(*this,lib,"VkConditionalRenderingFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkConditionalRenderingFlagBitsEXT),das_operator_enum_AND_AND<VkConditionalRenderingFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkConditionalRenderingFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_EXT_conservative_rasterization)
addEnumeration(make_smart<EnumerationVkConservativeRasterizationModeEXT>());
#endif /* defined(VK_EXT_conservative_rasterization) */
#if defined(VK_EXT_debug_report)
addEnumeration(make_smart<EnumerationVkDebugReportFlagBitsEXT>());
addEnumFlagOps<VkDebugReportFlagBitsEXT>(*this,lib,"VkDebugReportFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkDebugReportFlagBitsEXT),das_operator_enum_AND_AND<VkDebugReportFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDebugReportFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_debug_report) */
#if defined(VK_EXT_debug_utils)
addEnumeration(make_smart<EnumerationVkDebugUtilsMessageSeverityFlagBitsEXT>());
addEnumFlagOps<VkDebugUtilsMessageSeverityFlagBitsEXT>(*this,lib,"VkDebugUtilsMessageSeverityFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkDebugUtilsMessageSeverityFlagBitsEXT),das_operator_enum_AND_AND<VkDebugUtilsMessageSeverityFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDebugUtilsMessageSeverityFlagBitsEXT>::invoke");
addEnumeration(make_smart<EnumerationVkDebugUtilsMessageTypeFlagBitsEXT>());
addEnumFlagOps<VkDebugUtilsMessageTypeFlagBitsEXT>(*this,lib,"VkDebugUtilsMessageTypeFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkDebugUtilsMessageTypeFlagBitsEXT),das_operator_enum_AND_AND<VkDebugUtilsMessageTypeFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDebugUtilsMessageTypeFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_debug_utils) */
#if defined(VK_EXT_depth_bias_control)
addEnumeration(make_smart<EnumerationVkDepthBiasRepresentationEXT>());
#endif /* defined(VK_EXT_depth_bias_control) */
#if defined(VK_EXT_depth_clamp_control)
addEnumeration(make_smart<EnumerationVkDepthClampModeEXT>());
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_device_address_binding_report)
addEnumeration(make_smart<EnumerationVkDeviceAddressBindingFlagBitsEXT>());
addEnumFlagOps<VkDeviceAddressBindingFlagBitsEXT>(*this,lib,"VkDeviceAddressBindingFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkDeviceAddressBindingFlagBitsEXT),das_operator_enum_AND_AND<VkDeviceAddressBindingFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDeviceAddressBindingFlagBitsEXT>::invoke");
addEnumeration(make_smart<EnumerationVkDeviceAddressBindingTypeEXT>());
#endif /* defined(VK_EXT_device_address_binding_report) */
#if defined(VK_EXT_device_fault)
addEnumeration(make_smart<EnumerationVkDeviceFaultAddressTypeEXT>());
addEnumeration(make_smart<EnumerationVkDeviceFaultVendorBinaryHeaderVersionEXT>());
#endif /* defined(VK_EXT_device_fault) */
#if defined(VK_EXT_device_generated_commands)
addEnumeration(make_smart<EnumerationVkIndirectCommandsInputModeFlagBitsEXT>());
addEnumFlagOps<VkIndirectCommandsInputModeFlagBitsEXT>(*this,lib,"VkIndirectCommandsInputModeFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkIndirectCommandsInputModeFlagBitsEXT),das_operator_enum_AND_AND<VkIndirectCommandsInputModeFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkIndirectCommandsInputModeFlagBitsEXT>::invoke");
addEnumeration(make_smart<EnumerationVkIndirectCommandsLayoutUsageFlagBitsEXT>());
addEnumFlagOps<VkIndirectCommandsLayoutUsageFlagBitsEXT>(*this,lib,"VkIndirectCommandsLayoutUsageFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkIndirectCommandsLayoutUsageFlagBitsEXT),das_operator_enum_AND_AND<VkIndirectCommandsLayoutUsageFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkIndirectCommandsLayoutUsageFlagBitsEXT>::invoke");
addEnumeration(make_smart<EnumerationVkIndirectCommandsTokenTypeEXT>());
addEnumeration(make_smart<EnumerationVkIndirectExecutionSetInfoTypeEXT>());
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_device_memory_report)
addEnumeration(make_smart<EnumerationVkDeviceMemoryReportEventTypeEXT>());
#endif /* defined(VK_EXT_device_memory_report) */
#if defined(VK_EXT_discard_rectangles)
addEnumeration(make_smart<EnumerationVkDiscardRectangleModeEXT>());
#endif /* defined(VK_EXT_discard_rectangles) */
#if defined(VK_EXT_display_control)
addEnumeration(make_smart<EnumerationVkDeviceEventTypeEXT>());
addEnumeration(make_smart<EnumerationVkDisplayEventTypeEXT>());
addEnumeration(make_smart<EnumerationVkDisplayPowerStateEXT>());
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_EXT_display_surface_counter)
addEnumeration(make_smart<EnumerationVkSurfaceCounterFlagBitsEXT>());
addEnumFlagOps<VkSurfaceCounterFlagBitsEXT>(*this,lib,"VkSurfaceCounterFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkSurfaceCounterFlagBitsEXT),das_operator_enum_AND_AND<VkSurfaceCounterFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkSurfaceCounterFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_display_surface_counter) */
#if defined(VK_EXT_frame_boundary)
addEnumeration(make_smart<EnumerationVkFrameBoundaryFlagBitsEXT>());
addEnumFlagOps<VkFrameBoundaryFlagBitsEXT>(*this,lib,"VkFrameBoundaryFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkFrameBoundaryFlagBitsEXT),das_operator_enum_AND_AND<VkFrameBoundaryFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkFrameBoundaryFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_frame_boundary) */
#if defined(VK_EXT_full_screen_exclusive)
addEnumeration(make_smart<EnumerationVkFullScreenExclusiveEXT>());
#endif /* defined(VK_EXT_full_screen_exclusive) */
#if defined(VK_EXT_graphics_pipeline_library)
addEnumeration(make_smart<EnumerationVkGraphicsPipelineLibraryFlagBitsEXT>());
addEnumFlagOps<VkGraphicsPipelineLibraryFlagBitsEXT>(*this,lib,"VkGraphicsPipelineLibraryFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkGraphicsPipelineLibraryFlagBitsEXT),das_operator_enum_AND_AND<VkGraphicsPipelineLibraryFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkGraphicsPipelineLibraryFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_graphics_pipeline_library) */
#if defined(VK_EXT_image_compression_control)
addEnumeration(make_smart<EnumerationVkImageCompressionFixedRateFlagBitsEXT>());
addEnumFlagOps<VkImageCompressionFixedRateFlagBitsEXT>(*this,lib,"VkImageCompressionFixedRateFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkImageCompressionFixedRateFlagBitsEXT),das_operator_enum_AND_AND<VkImageCompressionFixedRateFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkImageCompressionFixedRateFlagBitsEXT>::invoke");
addEnumeration(make_smart<EnumerationVkImageCompressionFlagBitsEXT>());
addEnumFlagOps<VkImageCompressionFlagBitsEXT>(*this,lib,"VkImageCompressionFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkImageCompressionFlagBitsEXT),das_operator_enum_AND_AND<VkImageCompressionFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkImageCompressionFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_image_compression_control) */
#if defined(VK_EXT_layer_settings)
addEnumeration(make_smart<EnumerationVkLayerSettingTypeEXT>());
#endif /* defined(VK_EXT_layer_settings) */
#if defined(VK_EXT_metal_objects)
addEnumeration(make_smart<EnumerationVkExportMetalObjectTypeFlagBitsEXT>());
addEnumFlagOps<VkExportMetalObjectTypeFlagBitsEXT>(*this,lib,"VkExportMetalObjectTypeFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkExportMetalObjectTypeFlagBitsEXT),das_operator_enum_AND_AND<VkExportMetalObjectTypeFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkExportMetalObjectTypeFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_metal_objects) */
#if defined(VK_EXT_opacity_micromap)
addEnumeration(make_smart<EnumerationVkBuildMicromapFlagBitsEXT>());
addEnumFlagOps<VkBuildMicromapFlagBitsEXT>(*this,lib,"VkBuildMicromapFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkBuildMicromapFlagBitsEXT),das_operator_enum_AND_AND<VkBuildMicromapFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkBuildMicromapFlagBitsEXT>::invoke");
addEnumeration(make_smart<EnumerationVkBuildMicromapModeEXT>());
addEnumeration(make_smart<EnumerationVkCopyMicromapModeEXT>());
addEnumeration(make_smart<EnumerationVkMicromapCreateFlagBitsEXT>());
addEnumFlagOps<VkMicromapCreateFlagBitsEXT>(*this,lib,"VkMicromapCreateFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkMicromapCreateFlagBitsEXT),das_operator_enum_AND_AND<VkMicromapCreateFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkMicromapCreateFlagBitsEXT>::invoke");
addEnumeration(make_smart<EnumerationVkMicromapTypeEXT>());
addEnumeration(make_smart<EnumerationVkOpacityMicromapFormatEXT>());
addEnumeration(make_smart<EnumerationVkOpacityMicromapSpecialIndexEXT>());
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_provoking_vertex)
addEnumeration(make_smart<EnumerationVkProvokingVertexModeEXT>());
#endif /* defined(VK_EXT_provoking_vertex) */
#if defined(VK_EXT_shader_object)
addEnumeration(make_smart<EnumerationVkShaderCodeTypeEXT>());
addEnumeration(make_smart<EnumerationVkShaderCreateFlagBitsEXT>());
addEnumFlagOps<VkShaderCreateFlagBitsEXT>(*this,lib,"VkShaderCreateFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkShaderCreateFlagBitsEXT),das_operator_enum_AND_AND<VkShaderCreateFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkShaderCreateFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_EXT_subpass_merge_feedback)
addEnumeration(make_smart<EnumerationVkSubpassMergeStatusEXT>());
#endif /* defined(VK_EXT_subpass_merge_feedback) */
#if defined(VK_EXT_surface_maintenance1)
addEnumeration(make_smart<EnumerationVkPresentGravityFlagBitsEXT>());
addEnumFlagOps<VkPresentGravityFlagBitsEXT>(*this,lib,"VkPresentGravityFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkPresentGravityFlagBitsEXT),das_operator_enum_AND_AND<VkPresentGravityFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkPresentGravityFlagBitsEXT>::invoke");
addEnumeration(make_smart<EnumerationVkPresentScalingFlagBitsEXT>());
addEnumFlagOps<VkPresentScalingFlagBitsEXT>(*this,lib,"VkPresentScalingFlagBitsEXT");
addExtern<bool(*)(uint32_t,VkPresentScalingFlagBitsEXT),das_operator_enum_AND_AND<VkPresentScalingFlagBitsEXT>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkPresentScalingFlagBitsEXT>::invoke");
#endif /* defined(VK_EXT_surface_maintenance1) */
#if defined(VK_EXT_validation_cache)
addEnumeration(make_smart<EnumerationVkValidationCacheHeaderVersionEXT>());
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_EXT_validation_features)
addEnumeration(make_smart<EnumerationVkValidationFeatureDisableEXT>());
addEnumeration(make_smart<EnumerationVkValidationFeatureEnableEXT>());
#endif /* defined(VK_EXT_validation_features) */
#if defined(VK_EXT_validation_flags)
addEnumeration(make_smart<EnumerationVkValidationCheckEXT>());
#endif /* defined(VK_EXT_validation_flags) */
#if defined(VK_FUCHSIA_buffer_collection)
addEnumeration(make_smart<EnumerationVkImageConstraintsInfoFlagBitsFUCHSIA>());
addEnumFlagOps<VkImageConstraintsInfoFlagBitsFUCHSIA>(*this,lib,"VkImageConstraintsInfoFlagBitsFUCHSIA");
addExtern<bool(*)(uint32_t,VkImageConstraintsInfoFlagBitsFUCHSIA),das_operator_enum_AND_AND<VkImageConstraintsInfoFlagBitsFUCHSIA>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkImageConstraintsInfoFlagBitsFUCHSIA>::invoke");
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_INTEL_performance_query)
addEnumeration(make_smart<EnumerationVkPerformanceConfigurationTypeINTEL>());
addEnumeration(make_smart<EnumerationVkPerformanceOverrideTypeINTEL>());
addEnumeration(make_smart<EnumerationVkPerformanceParameterTypeINTEL>());
addEnumeration(make_smart<EnumerationVkPerformanceValueTypeINTEL>());
addEnumeration(make_smart<EnumerationVkQueryPoolSamplingModeINTEL>());
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_acceleration_structure)
addEnumeration(make_smart<EnumerationVkAccelerationStructureBuildTypeKHR>());
addEnumeration(make_smart<EnumerationVkAccelerationStructureCompatibilityKHR>());
addEnumeration(make_smart<EnumerationVkAccelerationStructureCreateFlagBitsKHR>());
addEnumFlagOps<VkAccelerationStructureCreateFlagBitsKHR>(*this,lib,"VkAccelerationStructureCreateFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkAccelerationStructureCreateFlagBitsKHR),das_operator_enum_AND_AND<VkAccelerationStructureCreateFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkAccelerationStructureCreateFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkAccelerationStructureTypeKHR>());
addEnumeration(make_smart<EnumerationVkBuildAccelerationStructureFlagBitsKHR>());
addEnumFlagOps<VkBuildAccelerationStructureFlagBitsKHR>(*this,lib,"VkBuildAccelerationStructureFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkBuildAccelerationStructureFlagBitsKHR),das_operator_enum_AND_AND<VkBuildAccelerationStructureFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkBuildAccelerationStructureFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkBuildAccelerationStructureModeKHR>());
addEnumeration(make_smart<EnumerationVkCopyAccelerationStructureModeKHR>());
addEnumeration(make_smart<EnumerationVkGeometryFlagBitsKHR>());
addEnumFlagOps<VkGeometryFlagBitsKHR>(*this,lib,"VkGeometryFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkGeometryFlagBitsKHR),das_operator_enum_AND_AND<VkGeometryFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkGeometryFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkGeometryInstanceFlagBitsKHR>());
addEnumFlagOps<VkGeometryInstanceFlagBitsKHR>(*this,lib,"VkGeometryInstanceFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkGeometryInstanceFlagBitsKHR),das_operator_enum_AND_AND<VkGeometryInstanceFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkGeometryInstanceFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkGeometryTypeKHR>());
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_calibrated_timestamps)
addEnumeration(make_smart<EnumerationVkTimeDomainKHR>());
#endif /* defined(VK_KHR_calibrated_timestamps) */
#if defined(VK_KHR_cooperative_matrix)
addEnumeration(make_smart<EnumerationVkComponentTypeKHR>());
addEnumeration(make_smart<EnumerationVkScopeKHR>());
#endif /* defined(VK_KHR_cooperative_matrix) */
#if defined(VK_KHR_display)
addEnumeration(make_smart<EnumerationVkDisplayPlaneAlphaFlagBitsKHR>());
addEnumFlagOps<VkDisplayPlaneAlphaFlagBitsKHR>(*this,lib,"VkDisplayPlaneAlphaFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkDisplayPlaneAlphaFlagBitsKHR),das_operator_enum_AND_AND<VkDisplayPlaneAlphaFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDisplayPlaneAlphaFlagBitsKHR>::invoke");
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_fragment_shading_rate)
addEnumeration(make_smart<EnumerationVkFragmentShadingRateCombinerOpKHR>());
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_maintenance7)
addEnumeration(make_smart<EnumerationVkPhysicalDeviceLayeredApiKHR>());
#endif /* defined(VK_KHR_maintenance7) */
#if defined(VK_KHR_performance_query)
addEnumeration(make_smart<EnumerationVkPerformanceCounterDescriptionFlagBitsKHR>());
addEnumFlagOps<VkPerformanceCounterDescriptionFlagBitsKHR>(*this,lib,"VkPerformanceCounterDescriptionFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkPerformanceCounterDescriptionFlagBitsKHR),das_operator_enum_AND_AND<VkPerformanceCounterDescriptionFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkPerformanceCounterDescriptionFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkPerformanceCounterScopeKHR>());
addEnumeration(make_smart<EnumerationVkPerformanceCounterStorageKHR>());
addEnumeration(make_smart<EnumerationVkPerformanceCounterUnitKHR>());
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_KHR_pipeline_executable_properties)
addEnumeration(make_smart<EnumerationVkPipelineExecutableStatisticFormatKHR>());
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_KHR_ray_tracing_pipeline)
addEnumeration(make_smart<EnumerationVkRayTracingShaderGroupTypeKHR>());
addEnumeration(make_smart<EnumerationVkShaderGroupShaderKHR>());
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_surface)
addEnumeration(make_smart<EnumerationVkColorSpaceKHR>());
addEnumeration(make_smart<EnumerationVkCompositeAlphaFlagBitsKHR>());
addEnumFlagOps<VkCompositeAlphaFlagBitsKHR>(*this,lib,"VkCompositeAlphaFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkCompositeAlphaFlagBitsKHR),das_operator_enum_AND_AND<VkCompositeAlphaFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkCompositeAlphaFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkPresentModeKHR>());
addEnumeration(make_smart<EnumerationVkSurfaceTransformFlagBitsKHR>());
addEnumFlagOps<VkSurfaceTransformFlagBitsKHR>(*this,lib,"VkSurfaceTransformFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkSurfaceTransformFlagBitsKHR),das_operator_enum_AND_AND<VkSurfaceTransformFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkSurfaceTransformFlagBitsKHR>::invoke");
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_video_decode_h264)
addEnumeration(make_smart<EnumerationVkVideoDecodeH264PictureLayoutFlagBitsKHR>());
addEnumFlagOps<VkVideoDecodeH264PictureLayoutFlagBitsKHR>(*this,lib,"VkVideoDecodeH264PictureLayoutFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoDecodeH264PictureLayoutFlagBitsKHR),das_operator_enum_AND_AND<VkVideoDecodeH264PictureLayoutFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoDecodeH264PictureLayoutFlagBitsKHR>::invoke");
#endif /* defined(VK_KHR_video_decode_h264) */
#if defined(VK_KHR_video_decode_queue)
addEnumeration(make_smart<EnumerationVkVideoDecodeCapabilityFlagBitsKHR>());
addEnumFlagOps<VkVideoDecodeCapabilityFlagBitsKHR>(*this,lib,"VkVideoDecodeCapabilityFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoDecodeCapabilityFlagBitsKHR),das_operator_enum_AND_AND<VkVideoDecodeCapabilityFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoDecodeCapabilityFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoDecodeUsageFlagBitsKHR>());
addEnumFlagOps<VkVideoDecodeUsageFlagBitsKHR>(*this,lib,"VkVideoDecodeUsageFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoDecodeUsageFlagBitsKHR),das_operator_enum_AND_AND<VkVideoDecodeUsageFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoDecodeUsageFlagBitsKHR>::invoke");
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_av1)
addEnumeration(make_smart<EnumerationVkVideoEncodeAV1CapabilityFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeAV1CapabilityFlagBitsKHR>(*this,lib,"VkVideoEncodeAV1CapabilityFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeAV1CapabilityFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeAV1CapabilityFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeAV1CapabilityFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeAV1PredictionModeKHR>());
addEnumeration(make_smart<EnumerationVkVideoEncodeAV1RateControlFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeAV1RateControlFlagBitsKHR>(*this,lib,"VkVideoEncodeAV1RateControlFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeAV1RateControlFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeAV1RateControlFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeAV1RateControlFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeAV1RateControlGroupKHR>());
addEnumeration(make_smart<EnumerationVkVideoEncodeAV1StdFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeAV1StdFlagBitsKHR>(*this,lib,"VkVideoEncodeAV1StdFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeAV1StdFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeAV1StdFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeAV1StdFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeAV1SuperblockSizeFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeAV1SuperblockSizeFlagBitsKHR>(*this,lib,"VkVideoEncodeAV1SuperblockSizeFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeAV1SuperblockSizeFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeAV1SuperblockSizeFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeAV1SuperblockSizeFlagBitsKHR>::invoke");
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_h264)
addEnumeration(make_smart<EnumerationVkVideoEncodeH264CapabilityFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeH264CapabilityFlagBitsKHR>(*this,lib,"VkVideoEncodeH264CapabilityFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeH264CapabilityFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeH264CapabilityFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeH264CapabilityFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeH264RateControlFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeH264RateControlFlagBitsKHR>(*this,lib,"VkVideoEncodeH264RateControlFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeH264RateControlFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeH264RateControlFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeH264RateControlFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeH264StdFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeH264StdFlagBitsKHR>(*this,lib,"VkVideoEncodeH264StdFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeH264StdFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeH264StdFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeH264StdFlagBitsKHR>::invoke");
#endif /* defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_h265)
addEnumeration(make_smart<EnumerationVkVideoEncodeH265CapabilityFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeH265CapabilityFlagBitsKHR>(*this,lib,"VkVideoEncodeH265CapabilityFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeH265CapabilityFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeH265CapabilityFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeH265CapabilityFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeH265CtbSizeFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeH265CtbSizeFlagBitsKHR>(*this,lib,"VkVideoEncodeH265CtbSizeFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeH265CtbSizeFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeH265CtbSizeFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeH265CtbSizeFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeH265RateControlFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeH265RateControlFlagBitsKHR>(*this,lib,"VkVideoEncodeH265RateControlFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeH265RateControlFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeH265RateControlFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeH265RateControlFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeH265StdFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeH265StdFlagBitsKHR>(*this,lib,"VkVideoEncodeH265StdFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeH265StdFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeH265StdFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeH265StdFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeH265TransformBlockSizeFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeH265TransformBlockSizeFlagBitsKHR>(*this,lib,"VkVideoEncodeH265TransformBlockSizeFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeH265TransformBlockSizeFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeH265TransformBlockSizeFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeH265TransformBlockSizeFlagBitsKHR>::invoke");
#endif /* defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_queue)
addEnumeration(make_smart<EnumerationVkVideoEncodeCapabilityFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeCapabilityFlagBitsKHR>(*this,lib,"VkVideoEncodeCapabilityFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeCapabilityFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeCapabilityFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeCapabilityFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeContentFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeContentFlagBitsKHR>(*this,lib,"VkVideoEncodeContentFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeContentFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeContentFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeContentFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeFeedbackFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeFeedbackFlagBitsKHR>(*this,lib,"VkVideoEncodeFeedbackFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeFeedbackFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeFeedbackFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeFeedbackFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeRateControlModeFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeRateControlModeFlagBitsKHR>(*this,lib,"VkVideoEncodeRateControlModeFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeRateControlModeFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeRateControlModeFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeRateControlModeFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoEncodeTuningModeKHR>());
addEnumeration(make_smart<EnumerationVkVideoEncodeUsageFlagBitsKHR>());
addEnumFlagOps<VkVideoEncodeUsageFlagBitsKHR>(*this,lib,"VkVideoEncodeUsageFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoEncodeUsageFlagBitsKHR),das_operator_enum_AND_AND<VkVideoEncodeUsageFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoEncodeUsageFlagBitsKHR>::invoke");
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_queue)
addEnumeration(make_smart<EnumerationVkQueryResultStatusKHR>());
addEnumeration(make_smart<EnumerationVkVideoCapabilityFlagBitsKHR>());
addEnumFlagOps<VkVideoCapabilityFlagBitsKHR>(*this,lib,"VkVideoCapabilityFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoCapabilityFlagBitsKHR),das_operator_enum_AND_AND<VkVideoCapabilityFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoCapabilityFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoChromaSubsamplingFlagBitsKHR>());
addEnumFlagOps<VkVideoChromaSubsamplingFlagBitsKHR>(*this,lib,"VkVideoChromaSubsamplingFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoChromaSubsamplingFlagBitsKHR),das_operator_enum_AND_AND<VkVideoChromaSubsamplingFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoChromaSubsamplingFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoCodecOperationFlagBitsKHR>());
addEnumFlagOps<VkVideoCodecOperationFlagBitsKHR>(*this,lib,"VkVideoCodecOperationFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoCodecOperationFlagBitsKHR),das_operator_enum_AND_AND<VkVideoCodecOperationFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoCodecOperationFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoCodingControlFlagBitsKHR>());
addEnumFlagOps<VkVideoCodingControlFlagBitsKHR>(*this,lib,"VkVideoCodingControlFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoCodingControlFlagBitsKHR),das_operator_enum_AND_AND<VkVideoCodingControlFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoCodingControlFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoComponentBitDepthFlagBitsKHR>());
addEnumFlagOps<VkVideoComponentBitDepthFlagBitsKHR>(*this,lib,"VkVideoComponentBitDepthFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoComponentBitDepthFlagBitsKHR),das_operator_enum_AND_AND<VkVideoComponentBitDepthFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoComponentBitDepthFlagBitsKHR>::invoke");
addEnumeration(make_smart<EnumerationVkVideoSessionCreateFlagBitsKHR>());
addEnumFlagOps<VkVideoSessionCreateFlagBitsKHR>(*this,lib,"VkVideoSessionCreateFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkVideoSessionCreateFlagBitsKHR),das_operator_enum_AND_AND<VkVideoSessionCreateFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkVideoSessionCreateFlagBitsKHR>::invoke");
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_LUNARG_direct_driver_loading)
addEnumeration(make_smart<EnumerationVkDirectDriverLoadingModeLUNARG>());
#endif /* defined(VK_LUNARG_direct_driver_loading) */
#if defined(VK_MSFT_layered_driver)
addEnumeration(make_smart<EnumerationVkLayeredDriverUnderlyingApiMSFT>());
#endif /* defined(VK_MSFT_layered_driver) */
#if defined(VK_NV_coverage_reduction_mode)
addEnumeration(make_smart<EnumerationVkCoverageReductionModeNV>());
#endif /* defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_NV_device_diagnostics_config)
addEnumeration(make_smart<EnumerationVkDeviceDiagnosticsConfigFlagBitsNV>());
addEnumFlagOps<VkDeviceDiagnosticsConfigFlagBitsNV>(*this,lib,"VkDeviceDiagnosticsConfigFlagBitsNV");
addExtern<bool(*)(uint32_t,VkDeviceDiagnosticsConfigFlagBitsNV),das_operator_enum_AND_AND<VkDeviceDiagnosticsConfigFlagBitsNV>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDeviceDiagnosticsConfigFlagBitsNV>::invoke");
#endif /* defined(VK_NV_device_diagnostics_config) */
#if defined(VK_NV_device_generated_commands)
addEnumeration(make_smart<EnumerationVkIndirectCommandsLayoutUsageFlagBitsNV>());
addEnumFlagOps<VkIndirectCommandsLayoutUsageFlagBitsNV>(*this,lib,"VkIndirectCommandsLayoutUsageFlagBitsNV");
addExtern<bool(*)(uint32_t,VkIndirectCommandsLayoutUsageFlagBitsNV),das_operator_enum_AND_AND<VkIndirectCommandsLayoutUsageFlagBitsNV>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkIndirectCommandsLayoutUsageFlagBitsNV>::invoke");
addEnumeration(make_smart<EnumerationVkIndirectCommandsTokenTypeNV>());
addEnumeration(make_smart<EnumerationVkIndirectStateFlagBitsNV>());
addEnumFlagOps<VkIndirectStateFlagBitsNV>(*this,lib,"VkIndirectStateFlagBitsNV");
addExtern<bool(*)(uint32_t,VkIndirectStateFlagBitsNV),das_operator_enum_AND_AND<VkIndirectStateFlagBitsNV>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkIndirectStateFlagBitsNV>::invoke");
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_displacement_micromap)
addEnumeration(make_smart<EnumerationVkDisplacementMicromapFormatNV>());
#endif /* defined(VK_NV_displacement_micromap) */
#if defined(VK_NV_display_stereo)
addEnumeration(make_smart<EnumerationVkDisplaySurfaceStereoTypeNV>());
#endif /* defined(VK_NV_display_stereo) */
#if defined(VK_NV_external_memory_capabilities)
addEnumeration(make_smart<EnumerationVkExternalMemoryFeatureFlagBitsNV>());
addEnumFlagOps<VkExternalMemoryFeatureFlagBitsNV>(*this,lib,"VkExternalMemoryFeatureFlagBitsNV");
addExtern<bool(*)(uint32_t,VkExternalMemoryFeatureFlagBitsNV),das_operator_enum_AND_AND<VkExternalMemoryFeatureFlagBitsNV>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkExternalMemoryFeatureFlagBitsNV>::invoke");
addEnumeration(make_smart<EnumerationVkExternalMemoryHandleTypeFlagBitsNV>());
addEnumFlagOps<VkExternalMemoryHandleTypeFlagBitsNV>(*this,lib,"VkExternalMemoryHandleTypeFlagBitsNV");
addExtern<bool(*)(uint32_t,VkExternalMemoryHandleTypeFlagBitsNV),das_operator_enum_AND_AND<VkExternalMemoryHandleTypeFlagBitsNV>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkExternalMemoryHandleTypeFlagBitsNV>::invoke");
#endif /* defined(VK_NV_external_memory_capabilities) */
#if defined(VK_NV_fragment_shading_rate_enums)
addEnumeration(make_smart<EnumerationVkFragmentShadingRateNV>());
addEnumeration(make_smart<EnumerationVkFragmentShadingRateTypeNV>());
#endif /* defined(VK_NV_fragment_shading_rate_enums) */
#if defined(VK_NV_framebuffer_mixed_samples)
addEnumeration(make_smart<EnumerationVkCoverageModulationModeNV>());
#endif /* defined(VK_NV_framebuffer_mixed_samples) */
#if defined(VK_NV_low_latency2)
addEnumeration(make_smart<EnumerationVkLatencyMarkerNV>());
addEnumeration(make_smart<EnumerationVkOutOfBandQueueTypeNV>());
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_NV_memory_decompression)
addEnumeration(make_smart<EnumerationVkMemoryDecompressionMethodFlagBitsNV>());
#endif /* defined(VK_NV_memory_decompression) */
#if defined(VK_NV_optical_flow)
addEnumeration(make_smart<EnumerationVkOpticalFlowExecuteFlagBitsNV>());
addEnumFlagOps<VkOpticalFlowExecuteFlagBitsNV>(*this,lib,"VkOpticalFlowExecuteFlagBitsNV");
addExtern<bool(*)(uint32_t,VkOpticalFlowExecuteFlagBitsNV),das_operator_enum_AND_AND<VkOpticalFlowExecuteFlagBitsNV>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkOpticalFlowExecuteFlagBitsNV>::invoke");
addEnumeration(make_smart<EnumerationVkOpticalFlowGridSizeFlagBitsNV>());
addEnumFlagOps<VkOpticalFlowGridSizeFlagBitsNV>(*this,lib,"VkOpticalFlowGridSizeFlagBitsNV");
addExtern<bool(*)(uint32_t,VkOpticalFlowGridSizeFlagBitsNV),das_operator_enum_AND_AND<VkOpticalFlowGridSizeFlagBitsNV>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkOpticalFlowGridSizeFlagBitsNV>::invoke");
addEnumeration(make_smart<EnumerationVkOpticalFlowPerformanceLevelNV>());
addEnumeration(make_smart<EnumerationVkOpticalFlowSessionBindingPointNV>());
addEnumeration(make_smart<EnumerationVkOpticalFlowSessionCreateFlagBitsNV>());
addEnumFlagOps<VkOpticalFlowSessionCreateFlagBitsNV>(*this,lib,"VkOpticalFlowSessionCreateFlagBitsNV");
addExtern<bool(*)(uint32_t,VkOpticalFlowSessionCreateFlagBitsNV),das_operator_enum_AND_AND<VkOpticalFlowSessionCreateFlagBitsNV>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkOpticalFlowSessionCreateFlagBitsNV>::invoke");
addEnumeration(make_smart<EnumerationVkOpticalFlowUsageFlagBitsNV>());
addEnumFlagOps<VkOpticalFlowUsageFlagBitsNV>(*this,lib,"VkOpticalFlowUsageFlagBitsNV");
addExtern<bool(*)(uint32_t,VkOpticalFlowUsageFlagBitsNV),das_operator_enum_AND_AND<VkOpticalFlowUsageFlagBitsNV>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkOpticalFlowUsageFlagBitsNV>::invoke");
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_NV_ray_tracing)
addEnumeration(make_smart<EnumerationVkAccelerationStructureMemoryRequirementsTypeNV>());
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_ray_tracing_invocation_reorder)
addEnumeration(make_smart<EnumerationVkRayTracingInvocationReorderModeNV>());
#endif /* defined(VK_NV_ray_tracing_invocation_reorder) */
#if defined(VK_NV_ray_tracing_motion_blur)
addEnumeration(make_smart<EnumerationVkAccelerationStructureMotionInstanceTypeNV>());
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_NV_shading_rate_image)
addEnumeration(make_smart<EnumerationVkCoarseSampleOrderTypeNV>());
addEnumeration(make_smart<EnumerationVkShadingRatePaletteEntryNV>());
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_NV_viewport_swizzle)
addEnumeration(make_smart<EnumerationVkViewportCoordinateSwizzleNV>());
#endif /* defined(VK_NV_viewport_swizzle) */
#if defined(VK_QCOM_filter_cubic_weights)
addEnumeration(make_smart<EnumerationVkCubicFilterWeightsQCOM>());
#endif /* defined(VK_QCOM_filter_cubic_weights) */
#if defined(VK_QCOM_image_processing2)
addEnumeration(make_smart<EnumerationVkBlockMatchWindowCompareModeQCOM>());
#endif /* defined(VK_QCOM_image_processing2) */
#if (defined(VK_EXT_debug_marker)) || (defined(VK_EXT_debug_report))
addEnumeration(make_smart<EnumerationVkDebugReportObjectTypeEXT>());
#endif /* (defined(VK_EXT_debug_marker)) || (defined(VK_EXT_debug_report)) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
addEnumeration(make_smart<EnumerationVkDeviceGroupPresentModeFlagBitsKHR>());
addEnumFlagOps<VkDeviceGroupPresentModeFlagBitsKHR>(*this,lib,"VkDeviceGroupPresentModeFlagBitsKHR");
addExtern<bool(*)(uint32_t,VkDeviceGroupPresentModeFlagBitsKHR),das_operator_enum_AND_AND<VkDeviceGroupPresentModeFlagBitsKHR>::invoke>(*this,lib,"&&",SideEffects::none,"das_operator_enum_AND_AND<VkDeviceGroupPresentModeFlagBitsKHR>::invoke");
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
  /* VOLK_GENERATE_BIND_ENUM */
}

}
