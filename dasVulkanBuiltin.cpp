#include "dasVulkan.h"

static char builtinSource[]=
{
"options gen2\n"
"require vulkan\n"
/* VOLK_GENERATE_DAS_TYPEDEF */
#if defined(VK_VERSION_1_0)
"typedef VkBuffer = VkBuffer_T?\n"
"typedef VkBufferView = VkBufferView_T?\n"
"typedef VkCommandBuffer = VkCommandBuffer_T?\n"
"typedef VkCommandPool = VkCommandPool_T?\n"
"typedef VkDescriptorPool = VkDescriptorPool_T?\n"
"typedef VkDescriptorSet = VkDescriptorSet_T?\n"
"typedef VkDescriptorSetLayout = VkDescriptorSetLayout_T?\n"
"typedef VkDevice = VkDevice_T?\n"
"typedef VkDeviceMemory = VkDeviceMemory_T?\n"
"typedef VkEvent = VkEvent_T?\n"
"typedef VkFence = VkFence_T?\n"
"typedef VkFramebuffer = VkFramebuffer_T?\n"
"typedef VkImage = VkImage_T?\n"
"typedef VkImageView = VkImageView_T?\n"
"typedef VkInstance = VkInstance_T?\n"
"typedef VkPhysicalDevice = VkPhysicalDevice_T?\n"
"typedef VkPipeline = VkPipeline_T?\n"
"typedef VkPipelineCache = VkPipelineCache_T?\n"
"typedef VkPipelineLayout = VkPipelineLayout_T?\n"
"typedef VkQueryPool = VkQueryPool_T?\n"
"typedef VkQueue = VkQueue_T?\n"
"typedef VkRenderPass = VkRenderPass_T?\n"
"typedef VkSampler = VkSampler_T?\n"
"typedef VkSemaphore = VkSemaphore_T?\n"
"typedef VkShaderModule = VkShaderModule_T?\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"typedef VkDescriptorUpdateTemplate = VkDescriptorUpdateTemplate_T?\n"
"typedef VkSamplerYcbcrConversion = VkSamplerYcbcrConversion_T?\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
"typedef VkPrivateDataSlot = VkPrivateDataSlot_T?\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_debug_report)
"typedef VkDebugReportCallbackEXT = VkDebugReportCallbackEXT_T?\n"
#endif /* defined(VK_EXT_debug_report) */
#if defined(VK_EXT_debug_utils)
"typedef VkDebugUtilsMessengerEXT = VkDebugUtilsMessengerEXT_T?\n"
#endif /* defined(VK_EXT_debug_utils) */
#if defined(VK_EXT_device_generated_commands)
"typedef VkIndirectCommandsLayoutEXT = VkIndirectCommandsLayoutEXT_T?\n"
"typedef VkIndirectExecutionSetEXT = VkIndirectExecutionSetEXT_T?\n"
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_opacity_micromap)
"typedef VkMicromapEXT = VkMicromapEXT_T?\n"
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_shader_object)
"typedef VkShaderEXT = VkShaderEXT_T?\n"
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_EXT_validation_cache)
"typedef VkValidationCacheEXT = VkValidationCacheEXT_T?\n"
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_FUCHSIA_buffer_collection)
"typedef VkBufferCollectionFUCHSIA = VkBufferCollectionFUCHSIA_T?\n"
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_INTEL_performance_query)
"typedef VkPerformanceConfigurationINTEL = VkPerformanceConfigurationINTEL_T?\n"
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_acceleration_structure)
"typedef VkAccelerationStructureKHR = VkAccelerationStructureKHR_T?\n"
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_deferred_host_operations)
"typedef VkDeferredOperationKHR = VkDeferredOperationKHR_T?\n"
#endif /* defined(VK_KHR_deferred_host_operations) */
#if defined(VK_KHR_display)
"typedef VkDisplayKHR = VkDisplayKHR_T?\n"
"typedef VkDisplayModeKHR = VkDisplayModeKHR_T?\n"
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_pipeline_binary)
"typedef VkPipelineBinaryKHR = VkPipelineBinaryKHR_T?\n"
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_KHR_surface)
"typedef VkSurfaceKHR = VkSurfaceKHR_T?\n"
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_swapchain)
"typedef VkSwapchainKHR = VkSwapchainKHR_T?\n"
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_KHR_video_queue)
"typedef VkVideoSessionKHR = VkVideoSessionKHR_T?\n"
"typedef VkVideoSessionParametersKHR = VkVideoSessionParametersKHR_T?\n"
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_NVX_binary_import)
"typedef VkCuFunctionNVX = VkCuFunctionNVX_T?\n"
"typedef VkCuModuleNVX = VkCuModuleNVX_T?\n"
#endif /* defined(VK_NVX_binary_import) */
#if defined(VK_NV_cuda_kernel_launch)
"typedef VkCudaFunctionNV = VkCudaFunctionNV_T?\n"
"typedef VkCudaModuleNV = VkCudaModuleNV_T?\n"
#endif /* defined(VK_NV_cuda_kernel_launch) */
#if defined(VK_NV_device_generated_commands)
"typedef VkIndirectCommandsLayoutNV = VkIndirectCommandsLayoutNV_T?\n"
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_optical_flow)
"typedef VkOpticalFlowSessionNV = VkOpticalFlowSessionNV_T?\n"
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_NV_ray_tracing)
"typedef VkAccelerationStructureNV = VkAccelerationStructureNV_T?\n"
#endif /* defined(VK_NV_ray_tracing) */
/* VOLK_GENERATE_DAS_TYPEDEF */
/* VOLK_GENERATE_DAS_GLOBAL */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_AMDX_shader_enqueue)
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_EXT_image_sliced_view_of_3d)
#endif /* defined(VK_EXT_image_sliced_view_of_3d) */
#if defined(VK_EXT_queue_family_foreign)
#endif /* defined(VK_EXT_queue_family_foreign) */
#if defined(VK_EXT_shader_module_identifier)
#endif /* defined(VK_EXT_shader_module_identifier) */
#if defined(VK_KHR_pipeline_binary)
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_KHR_ray_tracing_pipeline)
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if (defined(VK_KHR_video_decode_av1)) || (defined(VK_KHR_video_encode_av1))
#endif /* (defined(VK_KHR_video_decode_av1)) || (defined(VK_KHR_video_encode_av1)) */
#if defined(VK_VERSION_1_3)
"def VkAccessFlagBits2(v:uint64) { return unsafe(reinterpret<VkAccessFlagBits2> v); }\n"
"def operator |(a,b:VkAccessFlagBits2) { return VkAccessFlagBits2(uint64(a)|uint64(b)); } \n"
"def operator &(a,b:VkAccessFlagBits2) { return VkAccessFlagBits2(uint64(a)&uint64(b)); }\n"
"def operator &&(a,b:VkAccessFlagBits2) { return (uint64(a)&uint64(b))!=0ul; }\n"
"def VkFormatFeatureFlagBits2(v:uint64) { return unsafe(reinterpret<VkFormatFeatureFlagBits2> v); }\n"
"def operator |(a,b:VkFormatFeatureFlagBits2) { return VkFormatFeatureFlagBits2(uint64(a)|uint64(b)); } \n"
"def operator &(a,b:VkFormatFeatureFlagBits2) { return VkFormatFeatureFlagBits2(uint64(a)&uint64(b)); }\n"
"def operator &&(a,b:VkFormatFeatureFlagBits2) { return (uint64(a)&uint64(b))!=0ul; }\n"
"def VkPipelineStageFlagBits2(v:uint64) { return unsafe(reinterpret<VkPipelineStageFlagBits2> v); }\n"
"def operator |(a,b:VkPipelineStageFlagBits2) { return VkPipelineStageFlagBits2(uint64(a)|uint64(b)); } \n"
"def operator &(a,b:VkPipelineStageFlagBits2) { return VkPipelineStageFlagBits2(uint64(a)&uint64(b)); }\n"
"def operator &&(a,b:VkPipelineStageFlagBits2) { return (uint64(a)&uint64(b))!=0ul; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
"def VkBufferUsageFlagBits2(v:uint64) { return unsafe(reinterpret<VkBufferUsageFlagBits2> v); }\n"
"def operator |(a,b:VkBufferUsageFlagBits2) { return VkBufferUsageFlagBits2(uint64(a)|uint64(b)); } \n"
"def operator &(a,b:VkBufferUsageFlagBits2) { return VkBufferUsageFlagBits2(uint64(a)&uint64(b)); }\n"
"def operator &&(a,b:VkBufferUsageFlagBits2) { return (uint64(a)&uint64(b))!=0ul; }\n"
"def VkPipelineCreateFlagBits2(v:uint64) { return unsafe(reinterpret<VkPipelineCreateFlagBits2> v); }\n"
"def operator |(a,b:VkPipelineCreateFlagBits2) { return VkPipelineCreateFlagBits2(uint64(a)|uint64(b)); } \n"
"def operator &(a,b:VkPipelineCreateFlagBits2) { return VkPipelineCreateFlagBits2(uint64(a)&uint64(b)); }\n"
"def operator &&(a,b:VkPipelineCreateFlagBits2) { return (uint64(a)&uint64(b))!=0ul; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_ARM_scheduling_controls)
"def VkPhysicalDeviceSchedulingControlsFlagBitsARM(v:uint64) { return unsafe(reinterpret<VkPhysicalDeviceSchedulingControlsFlagBitsARM> v); }\n"
"def operator |(a,b:VkPhysicalDeviceSchedulingControlsFlagBitsARM) { return VkPhysicalDeviceSchedulingControlsFlagBitsARM(uint64(a)|uint64(b)); } \n"
"def operator &(a,b:VkPhysicalDeviceSchedulingControlsFlagBitsARM) { return VkPhysicalDeviceSchedulingControlsFlagBitsARM(uint64(a)&uint64(b)); }\n"
"def operator &&(a,b:VkPhysicalDeviceSchedulingControlsFlagBitsARM) { return (uint64(a)&uint64(b))!=0ul; }\n"
#endif /* defined(VK_ARM_scheduling_controls) */
#if defined(VK_NV_memory_decompression)
"def VkMemoryDecompressionMethodFlagBitsNV(v:uint64) { return unsafe(reinterpret<VkMemoryDecompressionMethodFlagBitsNV> v); }\n"
"def operator |(a,b:VkMemoryDecompressionMethodFlagBitsNV) { return VkMemoryDecompressionMethodFlagBitsNV(uint64(a)|uint64(b)); } \n"
"def operator &(a,b:VkMemoryDecompressionMethodFlagBitsNV) { return VkMemoryDecompressionMethodFlagBitsNV(uint64(a)&uint64(b)); }\n"
"def operator &&(a,b:VkMemoryDecompressionMethodFlagBitsNV) { return (uint64(a)&uint64(b))!=0ul; }\n"
#endif /* defined(VK_NV_memory_decompression) */
#if defined(VK_KHR_acceleration_structure)
"def VkAccelerationStructureGeometryAabbsDataKHR() { var self: VkAccelerationStructureGeometryAabbsDataKHR;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureGeometryAabbsDataKHR explicit) { return VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR; }\n"
"def VkAccelerationStructureGeometryInstancesDataKHR() { var self: VkAccelerationStructureGeometryInstancesDataKHR;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureGeometryInstancesDataKHR explicit) { return VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR; }\n"
"def VkAccelerationStructureGeometryTrianglesDataKHR() { var self: VkAccelerationStructureGeometryTrianglesDataKHR;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureGeometryTrianglesDataKHR explicit) { return VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR; }\n"
"def VkAccelerationStructureGeometryKHR() { var self: VkAccelerationStructureGeometryKHR;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureGeometryKHR explicit) { return VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_KHR; }\n"
"def VkAccelerationStructureBuildGeometryInfoKHR() { var self: VkAccelerationStructureBuildGeometryInfoKHR;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureBuildGeometryInfoKHR explicit) { return VkStructureType.ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR; }\n"
"def VkAccelerationStructureBuildSizesInfoKHR() { var self: VkAccelerationStructureBuildSizesInfoKHR;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureBuildSizesInfoKHR explicit) { return VkStructureType.ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR; }\n"
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_EXT_descriptor_buffer) && (defined(VK_KHR_acceleration_structure) || defined(VK_NV_ray_tracing))
"def VkAccelerationStructureCaptureDescriptorDataInfoEXT() { var self: VkAccelerationStructureCaptureDescriptorDataInfoEXT;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureCaptureDescriptorDataInfoEXT explicit) { return VkStructureType.ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT; }\n"
#endif /* defined(VK_EXT_descriptor_buffer) && (defined(VK_KHR_acceleration_structure) || defined(VK_NV_ray_tracing)) */
#if defined(VK_KHR_acceleration_structure)
"def VkAccelerationStructureCreateInfoKHR() { var self: VkAccelerationStructureCreateInfoKHR;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureCreateInfoKHR explicit) { return VkStructureType.ACCELERATION_STRUCTURE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_ray_tracing)
"def VkGeometryAABBNV() { var self: VkGeometryAABBNV;"
" self.sType = VkStructureType.GEOMETRY_AABB_NV;"
" return <- self; }\n"
"def struct_type(t: VkGeometryAABBNV explicit) { return VkStructureType.GEOMETRY_AABB_NV; }\n"
"def VkGeometryTrianglesNV() { var self: VkGeometryTrianglesNV;"
" self.sType = VkStructureType.GEOMETRY_TRIANGLES_NV;"
" return <- self; }\n"
"def struct_type(t: VkGeometryTrianglesNV explicit) { return VkStructureType.GEOMETRY_TRIANGLES_NV; }\n"
"def VkGeometryNV() { var self: VkGeometryNV;"
" self.sType = VkStructureType.GEOMETRY_NV;"
" return <- self; }\n"
"def struct_type(t: VkGeometryNV explicit) { return VkStructureType.GEOMETRY_NV; }\n"
"def VkAccelerationStructureInfoNV() { var self: VkAccelerationStructureInfoNV;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureInfoNV explicit) { return VkStructureType.ACCELERATION_STRUCTURE_INFO_NV; }\n"
"def VkAccelerationStructureCreateInfoNV() { var self: VkAccelerationStructureCreateInfoNV;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureCreateInfoNV explicit) { return VkStructureType.ACCELERATION_STRUCTURE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_KHR_acceleration_structure)
"def VkAccelerationStructureDeviceAddressInfoKHR() { var self: VkAccelerationStructureDeviceAddressInfoKHR;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureDeviceAddressInfoKHR explicit) { return VkStructureType.ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR; }\n"
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_ray_tracing_motion_blur)
"def VkAccelerationStructureGeometryMotionTrianglesDataNV() { var self: VkAccelerationStructureGeometryMotionTrianglesDataNV;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureGeometryMotionTrianglesDataNV explicit) { return VkStructureType.ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV; }\n"
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_NV_ray_tracing)
"def VkAccelerationStructureMemoryRequirementsInfoNV() { var self: VkAccelerationStructureMemoryRequirementsInfoNV;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureMemoryRequirementsInfoNV explicit) { return VkStructureType.ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV; }\n"
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_ray_tracing_motion_blur)
"def VkAccelerationStructureMotionInfoNV() { var self: VkAccelerationStructureMotionInfoNV;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_MOTION_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureMotionInfoNV explicit) { return VkStructureType.ACCELERATION_STRUCTURE_MOTION_INFO_NV; }\n"
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_EXT_opacity_micromap)
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_NV_displacement_micromap)
"def VkAccelerationStructureTrianglesDisplacementMicromapNV() { var self: VkAccelerationStructureTrianglesDisplacementMicromapNV;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureTrianglesDisplacementMicromapNV explicit) { return VkStructureType.ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV; }\n"
#endif /* defined(VK_NV_displacement_micromap) */
#if defined(VK_EXT_opacity_micromap)
"def VkAccelerationStructureTrianglesOpacityMicromapEXT() { var self: VkAccelerationStructureTrianglesOpacityMicromapEXT;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureTrianglesOpacityMicromapEXT explicit) { return VkStructureType.ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT; }\n"
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_KHR_acceleration_structure)
"def VkAccelerationStructureVersionInfoKHR() { var self: VkAccelerationStructureVersionInfoKHR;"
" self.sType = VkStructureType.ACCELERATION_STRUCTURE_VERSION_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAccelerationStructureVersionInfoKHR explicit) { return VkStructureType.ACCELERATION_STRUCTURE_VERSION_INFO_KHR; }\n"
#endif /* defined(VK_KHR_acceleration_structure) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
"def VkAcquireNextImageInfoKHR() { var self: VkAcquireNextImageInfoKHR;"
" self.sType = VkStructureType.ACQUIRE_NEXT_IMAGE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAcquireNextImageInfoKHR explicit) { return VkStructureType.ACQUIRE_NEXT_IMAGE_INFO_KHR; }\n"
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_KHR_performance_query)
"def VkAcquireProfilingLockInfoKHR() { var self: VkAcquireProfilingLockInfoKHR;"
" self.sType = VkStructureType.ACQUIRE_PROFILING_LOCK_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAcquireProfilingLockInfoKHR explicit) { return VkStructureType.ACQUIRE_PROFILING_LOCK_INFO_KHR; }\n"
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_SEC_amigo_profiling)
"def VkAmigoProfilingSubmitInfoSEC() { var self: VkAmigoProfilingSubmitInfoSEC;"
" self.sType = VkStructureType.AMIGO_PROFILING_SUBMIT_INFO_SEC;"
" return <- self; }\n"
"def struct_type(t: VkAmigoProfilingSubmitInfoSEC explicit) { return VkStructureType.AMIGO_PROFILING_SUBMIT_INFO_SEC; }\n"
#endif /* defined(VK_SEC_amigo_profiling) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3))
"def VkAndroidHardwareBufferFormatProperties2ANDROID() { var self: VkAndroidHardwareBufferFormatProperties2ANDROID;"
" self.sType = VkStructureType.ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkAndroidHardwareBufferFormatProperties2ANDROID explicit) { return VkStructureType.ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID; }\n"
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
"def VkAndroidHardwareBufferFormatPropertiesANDROID() { var self: VkAndroidHardwareBufferFormatPropertiesANDROID;"
" self.sType = VkStructureType.ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkAndroidHardwareBufferFormatPropertiesANDROID explicit) { return VkStructureType.ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID; }\n"
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_ANDROID_external_format_resolve)
"def VkAndroidHardwareBufferFormatResolvePropertiesANDROID() { var self: VkAndroidHardwareBufferFormatResolvePropertiesANDROID;"
" self.sType = VkStructureType.ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkAndroidHardwareBufferFormatResolvePropertiesANDROID explicit) { return VkStructureType.ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID; }\n"
#endif /* defined(VK_ANDROID_external_format_resolve) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
"def VkAndroidHardwareBufferPropertiesANDROID() { var self: VkAndroidHardwareBufferPropertiesANDROID;"
" self.sType = VkStructureType.ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkAndroidHardwareBufferPropertiesANDROID explicit) { return VkStructureType.ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID; }\n"
"def VkAndroidHardwareBufferUsageANDROID() { var self: VkAndroidHardwareBufferUsageANDROID;"
" self.sType = VkStructureType.ANDROID_HARDWARE_BUFFER_USAGE_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkAndroidHardwareBufferUsageANDROID explicit) { return VkStructureType.ANDROID_HARDWARE_BUFFER_USAGE_ANDROID; }\n"
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_KHR_android_surface)
"def VkAndroidSurfaceCreateInfoKHR() { var self: VkAndroidSurfaceCreateInfoKHR;"
" self.sType = VkStructureType.ANDROID_SURFACE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkAndroidSurfaceCreateInfoKHR explicit) { return VkStructureType.ANDROID_SURFACE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_android_surface) */
#if defined(VK_AMD_anti_lag)
"def VkAntiLagPresentationInfoAMD() { var self: VkAntiLagPresentationInfoAMD;"
" self.sType = VkStructureType.ANTI_LAG_PRESENTATION_INFO_AMD;"
" return <- self; }\n"
"def struct_type(t: VkAntiLagPresentationInfoAMD explicit) { return VkStructureType.ANTI_LAG_PRESENTATION_INFO_AMD; }\n"
"def VkAntiLagDataAMD() { var self: VkAntiLagDataAMD;"
" self.sType = VkStructureType.ANTI_LAG_DATA_AMD;"
" return <- self; }\n"
"def struct_type(t: VkAntiLagDataAMD explicit) { return VkStructureType.ANTI_LAG_DATA_AMD; }\n"
#endif /* defined(VK_AMD_anti_lag) */
#if defined(VK_VERSION_1_0)
"def VkApplicationInfo() { var self: VkApplicationInfo;"
" self.sType = VkStructureType.APPLICATION_INFO;"
" return <- self; }\n"
"def struct_type(t: VkApplicationInfo explicit) { return VkStructureType.APPLICATION_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_2)
"def VkAttachmentDescription2() { var self: VkAttachmentDescription2;"
" self.sType = VkStructureType.ATTACHMENT_DESCRIPTION_2;"
" return <- self; }\n"
"def struct_type(t: VkAttachmentDescription2 explicit) { return VkStructureType.ATTACHMENT_DESCRIPTION_2; }\n"
"def VkAttachmentDescriptionStencilLayout() { var self: VkAttachmentDescriptionStencilLayout;"
" self.sType = VkStructureType.ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT;"
" return <- self; }\n"
"def struct_type(t: VkAttachmentDescriptionStencilLayout explicit) { return VkStructureType.ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_2)
"def VkAttachmentReference2() { var self: VkAttachmentReference2;"
" self.sType = VkStructureType.ATTACHMENT_REFERENCE_2;"
" return <- self; }\n"
"def struct_type(t: VkAttachmentReference2 explicit) { return VkStructureType.ATTACHMENT_REFERENCE_2; }\n"
"def VkAttachmentReferenceStencilLayout() { var self: VkAttachmentReferenceStencilLayout;"
" self.sType = VkStructureType.ATTACHMENT_REFERENCE_STENCIL_LAYOUT;"
" return <- self; }\n"
"def struct_type(t: VkAttachmentReferenceStencilLayout explicit) { return VkStructureType.ATTACHMENT_REFERENCE_STENCIL_LAYOUT; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_AMD_mixed_attachment_samples) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
"def VkAttachmentSampleCountInfoAMD() { var self: VkAttachmentSampleCountInfoAMD;"
" self.sType = VkStructureType.ATTACHMENT_SAMPLE_COUNT_INFO_AMD;"
" return <- self; }\n"
"def struct_type(t: VkAttachmentSampleCountInfoAMD explicit) { return VkStructureType.ATTACHMENT_SAMPLE_COUNT_INFO_AMD; }\n"
#endif /* defined(VK_AMD_mixed_attachment_samples) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_sample_locations)
"def VkSampleLocationsInfoEXT() { var self: VkSampleLocationsInfoEXT;"
" self.sType = VkStructureType.SAMPLE_LOCATIONS_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSampleLocationsInfoEXT explicit) { return VkStructureType.SAMPLE_LOCATIONS_INFO_EXT; }\n"
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_ray_tracing)
"def VkBindAccelerationStructureMemoryInfoNV() { var self: VkBindAccelerationStructureMemoryInfoNV;"
" self.sType = VkStructureType.BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkBindAccelerationStructureMemoryInfoNV explicit) { return VkStructureType.BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV; }\n"
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_VERSION_1_1)
"def VkBindBufferMemoryDeviceGroupInfo() { var self: VkBindBufferMemoryDeviceGroupInfo;"
" self.sType = VkStructureType.BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBindBufferMemoryDeviceGroupInfo explicit) { return VkStructureType.BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO; }\n"
"def VkBindBufferMemoryInfo() { var self: VkBindBufferMemoryInfo;"
" self.sType = VkStructureType.BIND_BUFFER_MEMORY_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBindBufferMemoryInfo explicit) { return VkStructureType.BIND_BUFFER_MEMORY_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer)
"def VkBindDescriptorBufferEmbeddedSamplersInfoEXT() { var self: VkBindDescriptorBufferEmbeddedSamplersInfoEXT;"
" self.sType = VkStructureType.BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkBindDescriptorBufferEmbeddedSamplersInfoEXT explicit) { return VkStructureType.BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT; }\n"
#endif /* defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_4)
"def VkBindDescriptorSetsInfo() { var self: VkBindDescriptorSetsInfo;"
" self.sType = VkStructureType.BIND_DESCRIPTOR_SETS_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBindDescriptorSetsInfo explicit) { return VkStructureType.BIND_DESCRIPTOR_SETS_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkBindImageMemoryDeviceGroupInfo() { var self: VkBindImageMemoryDeviceGroupInfo;"
" self.sType = VkStructureType.BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBindImageMemoryDeviceGroupInfo explicit) { return VkStructureType.BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO; }\n"
"def VkBindImageMemoryInfo() { var self: VkBindImageMemoryInfo;"
" self.sType = VkStructureType.BIND_IMAGE_MEMORY_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBindImageMemoryInfo explicit) { return VkStructureType.BIND_IMAGE_MEMORY_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
"def VkBindImageMemorySwapchainInfoKHR() { var self: VkBindImageMemorySwapchainInfoKHR;"
" self.sType = VkStructureType.BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkBindImageMemorySwapchainInfoKHR explicit) { return VkStructureType.BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR; }\n"
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_VERSION_1_1)
"def VkBindImagePlaneMemoryInfo() { var self: VkBindImagePlaneMemoryInfo;"
" self.sType = VkStructureType.BIND_IMAGE_PLANE_MEMORY_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBindImagePlaneMemoryInfo explicit) { return VkStructureType.BIND_IMAGE_PLANE_MEMORY_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_VERSION_1_4)
"def VkBindMemoryStatus() { var self: VkBindMemoryStatus;"
" self.sType = VkStructureType.BIND_MEMORY_STATUS;"
" return <- self; }\n"
"def struct_type(t: VkBindMemoryStatus explicit) { return VkStructureType.BIND_MEMORY_STATUS; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_device_generated_commands_compute)
#endif /* defined(VK_NV_device_generated_commands_compute) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_VERSION_1_0)
"def VkBindSparseInfo() { var self: VkBindSparseInfo;"
" self.sType = VkStructureType.BIND_SPARSE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBindSparseInfo explicit) { return VkStructureType.BIND_SPARSE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_KHR_video_queue)
"def VkBindVideoSessionMemoryInfoKHR() { var self: VkBindVideoSessionMemoryInfoKHR;"
" self.sType = VkStructureType.BIND_VIDEO_SESSION_MEMORY_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkBindVideoSessionMemoryInfoKHR explicit) { return VkStructureType.BIND_VIDEO_SESSION_MEMORY_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_QCOM_filter_cubic_weights)
"def VkBlitImageCubicWeightsInfoQCOM() { var self: VkBlitImageCubicWeightsInfoQCOM;"
" self.sType = VkStructureType.BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkBlitImageCubicWeightsInfoQCOM explicit) { return VkStructureType.BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_filter_cubic_weights) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkImageBlit2() { var self: VkImageBlit2;"
" self.sType = VkStructureType.IMAGE_BLIT_2;"
" return <- self; }\n"
"def struct_type(t: VkImageBlit2 explicit) { return VkStructureType.IMAGE_BLIT_2; }\n"
"def VkBlitImageInfo2() { var self: VkBlitImageInfo2;"
" self.sType = VkStructureType.BLIT_IMAGE_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkBlitImageInfo2 explicit) { return VkStructureType.BLIT_IMAGE_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_descriptor_buffer)
"def VkBufferCaptureDescriptorDataInfoEXT() { var self: VkBufferCaptureDescriptorDataInfoEXT;"
" self.sType = VkStructureType.BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkBufferCaptureDescriptorDataInfoEXT explicit) { return VkStructureType.BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT; }\n"
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_FUCHSIA_buffer_collection)
"def VkBufferCollectionBufferCreateInfoFUCHSIA() { var self: VkBufferCollectionBufferCreateInfoFUCHSIA;"
" self.sType = VkStructureType.BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkBufferCollectionBufferCreateInfoFUCHSIA explicit) { return VkStructureType.BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA; }\n"
"def VkBufferCollectionConstraintsInfoFUCHSIA() { var self: VkBufferCollectionConstraintsInfoFUCHSIA;"
" self.sType = VkStructureType.BUFFER_COLLECTION_CONSTRAINTS_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkBufferCollectionConstraintsInfoFUCHSIA explicit) { return VkStructureType.BUFFER_COLLECTION_CONSTRAINTS_INFO_FUCHSIA; }\n"
"def VkBufferCollectionCreateInfoFUCHSIA() { var self: VkBufferCollectionCreateInfoFUCHSIA;"
" self.sType = VkStructureType.BUFFER_COLLECTION_CREATE_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkBufferCollectionCreateInfoFUCHSIA explicit) { return VkStructureType.BUFFER_COLLECTION_CREATE_INFO_FUCHSIA; }\n"
"def VkBufferCollectionImageCreateInfoFUCHSIA() { var self: VkBufferCollectionImageCreateInfoFUCHSIA;"
" self.sType = VkStructureType.BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkBufferCollectionImageCreateInfoFUCHSIA explicit) { return VkStructureType.BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA; }\n"
"def VkSysmemColorSpaceFUCHSIA() { var self: VkSysmemColorSpaceFUCHSIA;"
" self.sType = VkStructureType.SYSMEM_COLOR_SPACE_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkSysmemColorSpaceFUCHSIA explicit) { return VkStructureType.SYSMEM_COLOR_SPACE_FUCHSIA; }\n"
"def VkBufferCollectionPropertiesFUCHSIA() { var self: VkBufferCollectionPropertiesFUCHSIA;"
" self.sType = VkStructureType.BUFFER_COLLECTION_PROPERTIES_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkBufferCollectionPropertiesFUCHSIA explicit) { return VkStructureType.BUFFER_COLLECTION_PROPERTIES_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_VERSION_1_0)
"def VkBufferCreateInfo() { var self: VkBufferCreateInfo;"
" self.sType = VkStructureType.BUFFER_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBufferCreateInfo explicit) { return VkStructureType.BUFFER_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_FUCHSIA_buffer_collection)
"def VkBufferConstraintsInfoFUCHSIA() { var self: VkBufferConstraintsInfoFUCHSIA;"
" self.sType = VkStructureType.BUFFER_CONSTRAINTS_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkBufferConstraintsInfoFUCHSIA explicit) { return VkStructureType.BUFFER_CONSTRAINTS_INFO_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkBufferCopy2() { var self: VkBufferCopy2;"
" self.sType = VkStructureType.BUFFER_COPY_2;"
" return <- self; }\n"
"def struct_type(t: VkBufferCopy2 explicit) { return VkStructureType.BUFFER_COPY_2; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_buffer_device_address)
"def VkBufferDeviceAddressCreateInfoEXT() { var self: VkBufferDeviceAddressCreateInfoEXT;"
" self.sType = VkStructureType.BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkBufferDeviceAddressCreateInfoEXT explicit) { return VkStructureType.BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_buffer_device_address) */
#if defined(VK_VERSION_1_2)
"def VkBufferDeviceAddressInfo() { var self: VkBufferDeviceAddressInfo;"
" self.sType = VkStructureType.BUFFER_DEVICE_ADDRESS_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBufferDeviceAddressInfo explicit) { return VkStructureType.BUFFER_DEVICE_ADDRESS_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkBufferImageCopy2() { var self: VkBufferImageCopy2;"
" self.sType = VkStructureType.BUFFER_IMAGE_COPY_2;"
" return <- self; }\n"
"def struct_type(t: VkBufferImageCopy2 explicit) { return VkStructureType.BUFFER_IMAGE_COPY_2; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
"def VkBufferMemoryBarrier() { var self: VkBufferMemoryBarrier;"
" self.sType = VkStructureType.BUFFER_MEMORY_BARRIER;"
" return <- self; }\n"
"def struct_type(t: VkBufferMemoryBarrier explicit) { return VkStructureType.BUFFER_MEMORY_BARRIER; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkBufferMemoryBarrier2() { var self: VkBufferMemoryBarrier2;"
" self.sType = VkStructureType.BUFFER_MEMORY_BARRIER_2;"
" return <- self; }\n"
"def struct_type(t: VkBufferMemoryBarrier2 explicit) { return VkStructureType.BUFFER_MEMORY_BARRIER_2; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
"def VkBufferMemoryRequirementsInfo2() { var self: VkBufferMemoryRequirementsInfo2;"
" self.sType = VkStructureType.BUFFER_MEMORY_REQUIREMENTS_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkBufferMemoryRequirementsInfo2 explicit) { return VkStructureType.BUFFER_MEMORY_REQUIREMENTS_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
"def VkBufferOpaqueCaptureAddressCreateInfo() { var self: VkBufferOpaqueCaptureAddressCreateInfo;"
" self.sType = VkStructureType.BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBufferOpaqueCaptureAddressCreateInfo explicit) { return VkStructureType.BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
"def VkBufferUsageFlags2CreateInfo() { var self: VkBufferUsageFlags2CreateInfo;"
" self.sType = VkStructureType.BUFFER_USAGE_FLAGS_2_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBufferUsageFlags2CreateInfo explicit) { return VkStructureType.BUFFER_USAGE_FLAGS_2_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_0)
"def VkBufferViewCreateInfo() { var self: VkBufferViewCreateInfo;"
" self.sType = VkStructureType.BUFFER_VIEW_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkBufferViewCreateInfo explicit) { return VkStructureType.BUFFER_VIEW_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_calibrated_timestamps)
"def VkCalibratedTimestampInfoKHR() { var self: VkCalibratedTimestampInfoKHR;"
" self.sType = VkStructureType.CALIBRATED_TIMESTAMP_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkCalibratedTimestampInfoKHR explicit) { return VkStructureType.CALIBRATED_TIMESTAMP_INFO_KHR; }\n"
#endif /* defined(VK_KHR_calibrated_timestamps) */
#if defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2))
"def VkCheckpointData2NV() { var self: VkCheckpointData2NV;"
" self.sType = VkStructureType.CHECKPOINT_DATA_2_NV;"
" return <- self; }\n"
"def struct_type(t: VkCheckpointData2NV explicit) { return VkStructureType.CHECKPOINT_DATA_2_NV; }\n"
#endif /* defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2)) */
#if defined(VK_NV_device_diagnostic_checkpoints)
"def VkCheckpointDataNV() { var self: VkCheckpointDataNV;"
" self.sType = VkStructureType.CHECKPOINT_DATA_NV;"
" return <- self; }\n"
"def struct_type(t: VkCheckpointDataNV explicit) { return VkStructureType.CHECKPOINT_DATA_NV; }\n"
#endif /* defined(VK_NV_device_diagnostic_checkpoints) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_shading_rate_image)
#endif /* defined(VK_NV_shading_rate_image) */
#if (defined(VK_EXT_extended_dynamic_state3)) || (defined(VK_EXT_shader_object))
#endif /* (defined(VK_EXT_extended_dynamic_state3)) || (defined(VK_EXT_shader_object)) */
#if defined(VK_VERSION_1_0)
"def VkCommandBufferAllocateInfo() { var self: VkCommandBufferAllocateInfo;"
" self.sType = VkStructureType.COMMAND_BUFFER_ALLOCATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkCommandBufferAllocateInfo explicit) { return VkStructureType.COMMAND_BUFFER_ALLOCATE_INFO; }\n"
"def VkCommandBufferInheritanceInfo() { var self: VkCommandBufferInheritanceInfo;"
" self.sType = VkStructureType.COMMAND_BUFFER_INHERITANCE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkCommandBufferInheritanceInfo explicit) { return VkStructureType.COMMAND_BUFFER_INHERITANCE_INFO; }\n"
"def VkCommandBufferBeginInfo() { var self: VkCommandBufferBeginInfo;"
" self.sType = VkStructureType.COMMAND_BUFFER_BEGIN_INFO;"
" return <- self; }\n"
"def struct_type(t: VkCommandBufferBeginInfo explicit) { return VkStructureType.COMMAND_BUFFER_BEGIN_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_conditional_rendering)
"def VkCommandBufferInheritanceConditionalRenderingInfoEXT() { var self: VkCommandBufferInheritanceConditionalRenderingInfoEXT;"
" self.sType = VkStructureType.COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkCommandBufferInheritanceConditionalRenderingInfoEXT explicit) { return VkStructureType.COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT; }\n"
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_QCOM_render_pass_transform)
"def VkCommandBufferInheritanceRenderPassTransformInfoQCOM() { var self: VkCommandBufferInheritanceRenderPassTransformInfoQCOM;"
" self.sType = VkStructureType.COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkCommandBufferInheritanceRenderPassTransformInfoQCOM explicit) { return VkStructureType.COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_render_pass_transform) */
#if defined(VK_VERSION_1_3)
"def VkCommandBufferInheritanceRenderingInfo() { var self: VkCommandBufferInheritanceRenderingInfo;"
" self.sType = VkStructureType.COMMAND_BUFFER_INHERITANCE_RENDERING_INFO;"
" return <- self; }\n"
"def struct_type(t: VkCommandBufferInheritanceRenderingInfo explicit) { return VkStructureType.COMMAND_BUFFER_INHERITANCE_RENDERING_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_inherited_viewport_scissor)
"def VkCommandBufferInheritanceViewportScissorInfoNV() { var self: VkCommandBufferInheritanceViewportScissorInfoNV;"
" self.sType = VkStructureType.COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkCommandBufferInheritanceViewportScissorInfoNV explicit) { return VkStructureType.COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV; }\n"
#endif /* defined(VK_NV_inherited_viewport_scissor) */
#if defined(VK_VERSION_1_3)
"def VkCommandBufferSubmitInfo() { var self: VkCommandBufferSubmitInfo;"
" self.sType = VkStructureType.COMMAND_BUFFER_SUBMIT_INFO;"
" return <- self; }\n"
"def struct_type(t: VkCommandBufferSubmitInfo explicit) { return VkStructureType.COMMAND_BUFFER_SUBMIT_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
"def VkCommandPoolCreateInfo() { var self: VkCommandPoolCreateInfo;"
" self.sType = VkStructureType.COMMAND_POOL_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkCommandPoolCreateInfo explicit) { return VkStructureType.COMMAND_POOL_CREATE_INFO; }\n"
"def VkPipelineShaderStageCreateInfo() { var self: VkPipelineShaderStageCreateInfo;"
" self.sType = VkStructureType.PIPELINE_SHADER_STAGE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineShaderStageCreateInfo explicit) { return VkStructureType.PIPELINE_SHADER_STAGE_CREATE_INFO; }\n"
"def VkComputePipelineCreateInfo() { var self: VkComputePipelineCreateInfo;"
" self.sType = VkStructureType.COMPUTE_PIPELINE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkComputePipelineCreateInfo explicit) { return VkStructureType.COMPUTE_PIPELINE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_device_generated_commands_compute)
"def VkComputePipelineIndirectBufferInfoNV() { var self: VkComputePipelineIndirectBufferInfoNV;"
" self.sType = VkStructureType.COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkComputePipelineIndirectBufferInfoNV explicit) { return VkStructureType.COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV; }\n"
#endif /* defined(VK_NV_device_generated_commands_compute) */
#if defined(VK_EXT_conditional_rendering)
"def VkConditionalRenderingBeginInfoEXT() { var self: VkConditionalRenderingBeginInfoEXT;"
" self.sType = VkStructureType.CONDITIONAL_RENDERING_BEGIN_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkConditionalRenderingBeginInfoEXT explicit) { return VkStructureType.CONDITIONAL_RENDERING_BEGIN_INFO_EXT; }\n"
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_VERSION_1_2)
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_NV_cooperative_matrix2)
"def VkCooperativeMatrixFlexibleDimensionsPropertiesNV() { var self: VkCooperativeMatrixFlexibleDimensionsPropertiesNV;"
" self.sType = VkStructureType.COOPERATIVE_MATRIX_FLEXIBLE_DIMENSIONS_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkCooperativeMatrixFlexibleDimensionsPropertiesNV explicit) { return VkStructureType.COOPERATIVE_MATRIX_FLEXIBLE_DIMENSIONS_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_cooperative_matrix2) */
#if defined(VK_KHR_cooperative_matrix)
"def VkCooperativeMatrixPropertiesKHR() { var self: VkCooperativeMatrixPropertiesKHR;"
" self.sType = VkStructureType.COOPERATIVE_MATRIX_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkCooperativeMatrixPropertiesKHR explicit) { return VkStructureType.COOPERATIVE_MATRIX_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_cooperative_matrix) */
#if defined(VK_NV_cooperative_matrix)
"def VkCooperativeMatrixPropertiesNV() { var self: VkCooperativeMatrixPropertiesNV;"
" self.sType = VkStructureType.COOPERATIVE_MATRIX_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkCooperativeMatrixPropertiesNV explicit) { return VkStructureType.COOPERATIVE_MATRIX_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_cooperative_matrix) */
#if defined(VK_KHR_acceleration_structure)
"def VkCopyAccelerationStructureInfoKHR() { var self: VkCopyAccelerationStructureInfoKHR;"
" self.sType = VkStructureType.COPY_ACCELERATION_STRUCTURE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkCopyAccelerationStructureInfoKHR explicit) { return VkStructureType.COPY_ACCELERATION_STRUCTURE_INFO_KHR; }\n"
"def VkCopyAccelerationStructureToMemoryInfoKHR() { var self: VkCopyAccelerationStructureToMemoryInfoKHR;"
" self.sType = VkStructureType.COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkCopyAccelerationStructureToMemoryInfoKHR explicit) { return VkStructureType.COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR; }\n"
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_VERSION_1_3)
"def VkCopyBufferInfo2() { var self: VkCopyBufferInfo2;"
" self.sType = VkStructureType.COPY_BUFFER_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkCopyBufferInfo2 explicit) { return VkStructureType.COPY_BUFFER_INFO_2; }\n"
"def VkCopyBufferToImageInfo2() { var self: VkCopyBufferToImageInfo2;"
" self.sType = VkStructureType.COPY_BUFFER_TO_IMAGE_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkCopyBufferToImageInfo2 explicit) { return VkStructureType.COPY_BUFFER_TO_IMAGE_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_QCOM_rotated_copy_commands)
"def VkCopyCommandTransformInfoQCOM() { var self: VkCopyCommandTransformInfoQCOM;"
" self.sType = VkStructureType.COPY_COMMAND_TRANSFORM_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkCopyCommandTransformInfoQCOM explicit) { return VkStructureType.COPY_COMMAND_TRANSFORM_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_rotated_copy_commands) */
#if defined(VK_VERSION_1_0)
"def VkCopyDescriptorSet() { var self: VkCopyDescriptorSet;"
" self.sType = VkStructureType.COPY_DESCRIPTOR_SET;"
" return <- self; }\n"
"def struct_type(t: VkCopyDescriptorSet explicit) { return VkStructureType.COPY_DESCRIPTOR_SET; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkImageCopy2() { var self: VkImageCopy2;"
" self.sType = VkStructureType.IMAGE_COPY_2;"
" return <- self; }\n"
"def struct_type(t: VkImageCopy2 explicit) { return VkStructureType.IMAGE_COPY_2; }\n"
"def VkCopyImageInfo2() { var self: VkCopyImageInfo2;"
" self.sType = VkStructureType.COPY_IMAGE_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkCopyImageInfo2 explicit) { return VkStructureType.COPY_IMAGE_INFO_2; }\n"
"def VkCopyImageToBufferInfo2() { var self: VkCopyImageToBufferInfo2;"
" self.sType = VkStructureType.COPY_IMAGE_TO_BUFFER_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkCopyImageToBufferInfo2 explicit) { return VkStructureType.COPY_IMAGE_TO_BUFFER_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
"def VkCopyImageToImageInfo() { var self: VkCopyImageToImageInfo;"
" self.sType = VkStructureType.COPY_IMAGE_TO_IMAGE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkCopyImageToImageInfo explicit) { return VkStructureType.COPY_IMAGE_TO_IMAGE_INFO; }\n"
"def VkImageToMemoryCopy() { var self: VkImageToMemoryCopy;"
" self.sType = VkStructureType.IMAGE_TO_MEMORY_COPY;"
" return <- self; }\n"
"def struct_type(t: VkImageToMemoryCopy explicit) { return VkStructureType.IMAGE_TO_MEMORY_COPY; }\n"
"def VkCopyImageToMemoryInfo() { var self: VkCopyImageToMemoryInfo;"
" self.sType = VkStructureType.COPY_IMAGE_TO_MEMORY_INFO;"
" return <- self; }\n"
"def struct_type(t: VkCopyImageToMemoryInfo explicit) { return VkStructureType.COPY_IMAGE_TO_MEMORY_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_copy_memory_indirect)
#endif /* defined(VK_NV_copy_memory_indirect) */
#if defined(VK_KHR_acceleration_structure)
"def VkCopyMemoryToAccelerationStructureInfoKHR() { var self: VkCopyMemoryToAccelerationStructureInfoKHR;"
" self.sType = VkStructureType.COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkCopyMemoryToAccelerationStructureInfoKHR explicit) { return VkStructureType.COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_copy_memory_indirect)
#endif /* defined(VK_NV_copy_memory_indirect) */
#if defined(VK_VERSION_1_4)
"def VkMemoryToImageCopy() { var self: VkMemoryToImageCopy;"
" self.sType = VkStructureType.MEMORY_TO_IMAGE_COPY;"
" return <- self; }\n"
"def struct_type(t: VkMemoryToImageCopy explicit) { return VkStructureType.MEMORY_TO_IMAGE_COPY; }\n"
"def VkCopyMemoryToImageInfo() { var self: VkCopyMemoryToImageInfo;"
" self.sType = VkStructureType.COPY_MEMORY_TO_IMAGE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkCopyMemoryToImageInfo explicit) { return VkStructureType.COPY_MEMORY_TO_IMAGE_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_opacity_micromap)
"def VkCopyMemoryToMicromapInfoEXT() { var self: VkCopyMemoryToMicromapInfoEXT;"
" self.sType = VkStructureType.COPY_MEMORY_TO_MICROMAP_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkCopyMemoryToMicromapInfoEXT explicit) { return VkStructureType.COPY_MEMORY_TO_MICROMAP_INFO_EXT; }\n"
"def VkCopyMicromapInfoEXT() { var self: VkCopyMicromapInfoEXT;"
" self.sType = VkStructureType.COPY_MICROMAP_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkCopyMicromapInfoEXT explicit) { return VkStructureType.COPY_MICROMAP_INFO_EXT; }\n"
"def VkCopyMicromapToMemoryInfoEXT() { var self: VkCopyMicromapToMemoryInfoEXT;"
" self.sType = VkStructureType.COPY_MICROMAP_TO_MEMORY_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkCopyMicromapToMemoryInfoEXT explicit) { return VkStructureType.COPY_MICROMAP_TO_MEMORY_INFO_EXT; }\n"
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_NVX_binary_import)
"def VkCuFunctionCreateInfoNVX() { var self: VkCuFunctionCreateInfoNVX;"
" self.sType = VkStructureType.CU_FUNCTION_CREATE_INFO_NVX;"
" return <- self; }\n"
"def struct_type(t: VkCuFunctionCreateInfoNVX explicit) { return VkStructureType.CU_FUNCTION_CREATE_INFO_NVX; }\n"
"def VkCuLaunchInfoNVX() { var self: VkCuLaunchInfoNVX;"
" self.sType = VkStructureType.CU_LAUNCH_INFO_NVX;"
" return <- self; }\n"
"def struct_type(t: VkCuLaunchInfoNVX explicit) { return VkStructureType.CU_LAUNCH_INFO_NVX; }\n"
"def VkCuModuleCreateInfoNVX() { var self: VkCuModuleCreateInfoNVX;"
" self.sType = VkStructureType.CU_MODULE_CREATE_INFO_NVX;"
" return <- self; }\n"
"def struct_type(t: VkCuModuleCreateInfoNVX explicit) { return VkStructureType.CU_MODULE_CREATE_INFO_NVX; }\n"
"def VkCuModuleTexturingModeCreateInfoNVX() { var self: VkCuModuleTexturingModeCreateInfoNVX;"
" self.sType = VkStructureType.CU_MODULE_TEXTURING_MODE_CREATE_INFO_NVX;"
" return <- self; }\n"
"def struct_type(t: VkCuModuleTexturingModeCreateInfoNVX explicit) { return VkStructureType.CU_MODULE_TEXTURING_MODE_CREATE_INFO_NVX; }\n"
#endif /* defined(VK_NVX_binary_import) */
#if defined(VK_NV_cuda_kernel_launch)
"def VkCudaFunctionCreateInfoNV() { var self: VkCudaFunctionCreateInfoNV;"
" self.sType = VkStructureType.CUDA_FUNCTION_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkCudaFunctionCreateInfoNV explicit) { return VkStructureType.CUDA_FUNCTION_CREATE_INFO_NV; }\n"
"def VkCudaLaunchInfoNV() { var self: VkCudaLaunchInfoNV;"
" self.sType = VkStructureType.CUDA_LAUNCH_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkCudaLaunchInfoNV explicit) { return VkStructureType.CUDA_LAUNCH_INFO_NV; }\n"
"def VkCudaModuleCreateInfoNV() { var self: VkCudaModuleCreateInfoNV;"
" self.sType = VkStructureType.CUDA_MODULE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkCudaModuleCreateInfoNV explicit) { return VkStructureType.CUDA_MODULE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_cuda_kernel_launch) */
#if defined(VK_KHR_external_semaphore_win32)
"def VkD3D12FenceSubmitInfoKHR() { var self: VkD3D12FenceSubmitInfoKHR;"
" self.sType = VkStructureType.D3D12_FENCE_SUBMIT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkD3D12FenceSubmitInfoKHR explicit) { return VkStructureType.D3D12_FENCE_SUBMIT_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_EXT_debug_marker)
"def VkDebugMarkerMarkerInfoEXT() { var self: VkDebugMarkerMarkerInfoEXT;"
" self.sType = VkStructureType.DEBUG_MARKER_MARKER_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDebugMarkerMarkerInfoEXT explicit) { return VkStructureType.DEBUG_MARKER_MARKER_INFO_EXT; }\n"
"def VkDebugMarkerObjectNameInfoEXT() { var self: VkDebugMarkerObjectNameInfoEXT;"
" self.sType = VkStructureType.DEBUG_MARKER_OBJECT_NAME_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDebugMarkerObjectNameInfoEXT explicit) { return VkStructureType.DEBUG_MARKER_OBJECT_NAME_INFO_EXT; }\n"
"def VkDebugMarkerObjectTagInfoEXT() { var self: VkDebugMarkerObjectTagInfoEXT;"
" self.sType = VkStructureType.DEBUG_MARKER_OBJECT_TAG_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDebugMarkerObjectTagInfoEXT explicit) { return VkStructureType.DEBUG_MARKER_OBJECT_TAG_INFO_EXT; }\n"
#endif /* defined(VK_EXT_debug_marker) */
#if defined(VK_EXT_debug_report)
"def VkDebugReportCallbackCreateInfoEXT() { var self: VkDebugReportCallbackCreateInfoEXT;"
" self.sType = VkStructureType.DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDebugReportCallbackCreateInfoEXT explicit) { return VkStructureType.DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_debug_report) */
#if defined(VK_EXT_debug_utils)
"def VkDebugUtilsLabelEXT() { var self: VkDebugUtilsLabelEXT;"
" self.sType = VkStructureType.DEBUG_UTILS_LABEL_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDebugUtilsLabelEXT explicit) { return VkStructureType.DEBUG_UTILS_LABEL_EXT; }\n"
"def VkDebugUtilsObjectNameInfoEXT() { var self: VkDebugUtilsObjectNameInfoEXT;"
" self.sType = VkStructureType.DEBUG_UTILS_OBJECT_NAME_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDebugUtilsObjectNameInfoEXT explicit) { return VkStructureType.DEBUG_UTILS_OBJECT_NAME_INFO_EXT; }\n"
"def VkDebugUtilsMessengerCallbackDataEXT() { var self: VkDebugUtilsMessengerCallbackDataEXT;"
" self.sType = VkStructureType.DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDebugUtilsMessengerCallbackDataEXT explicit) { return VkStructureType.DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT; }\n"
"def VkDebugUtilsMessengerCreateInfoEXT() { var self: VkDebugUtilsMessengerCreateInfoEXT;"
" self.sType = VkStructureType.DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDebugUtilsMessengerCreateInfoEXT explicit) { return VkStructureType.DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT; }\n"
"def VkDebugUtilsObjectTagInfoEXT() { var self: VkDebugUtilsObjectTagInfoEXT;"
" self.sType = VkStructureType.DEBUG_UTILS_OBJECT_TAG_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDebugUtilsObjectTagInfoEXT explicit) { return VkStructureType.DEBUG_UTILS_OBJECT_TAG_INFO_EXT; }\n"
#endif /* defined(VK_EXT_debug_utils) */
#if defined(VK_NV_memory_decompression)
#endif /* defined(VK_NV_memory_decompression) */
#if defined(VK_NV_dedicated_allocation)
"def VkDedicatedAllocationBufferCreateInfoNV() { var self: VkDedicatedAllocationBufferCreateInfoNV;"
" self.sType = VkStructureType.DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkDedicatedAllocationBufferCreateInfoNV explicit) { return VkStructureType.DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV; }\n"
"def VkDedicatedAllocationImageCreateInfoNV() { var self: VkDedicatedAllocationImageCreateInfoNV;"
" self.sType = VkStructureType.DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkDedicatedAllocationImageCreateInfoNV explicit) { return VkStructureType.DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV; }\n"
"def VkDedicatedAllocationMemoryAllocateInfoNV() { var self: VkDedicatedAllocationMemoryAllocateInfoNV;"
" self.sType = VkStructureType.DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkDedicatedAllocationMemoryAllocateInfoNV explicit) { return VkStructureType.DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV; }\n"
#endif /* defined(VK_NV_dedicated_allocation) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkImageMemoryBarrier2() { var self: VkImageMemoryBarrier2;"
" self.sType = VkStructureType.IMAGE_MEMORY_BARRIER_2;"
" return <- self; }\n"
"def struct_type(t: VkImageMemoryBarrier2 explicit) { return VkStructureType.IMAGE_MEMORY_BARRIER_2; }\n"
"def VkMemoryBarrier2() { var self: VkMemoryBarrier2;"
" self.sType = VkStructureType.MEMORY_BARRIER_2;"
" return <- self; }\n"
"def struct_type(t: VkMemoryBarrier2 explicit) { return VkStructureType.MEMORY_BARRIER_2; }\n"
"def VkDependencyInfo() { var self: VkDependencyInfo;"
" self.sType = VkStructureType.DEPENDENCY_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDependencyInfo explicit) { return VkStructureType.DEPENDENCY_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_depth_bias_control)
"def VkDepthBiasInfoEXT() { var self: VkDepthBiasInfoEXT;"
" self.sType = VkStructureType.DEPTH_BIAS_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDepthBiasInfoEXT explicit) { return VkStructureType.DEPTH_BIAS_INFO_EXT; }\n"
"def VkDepthBiasRepresentationInfoEXT() { var self: VkDepthBiasRepresentationInfoEXT;"
" self.sType = VkStructureType.DEPTH_BIAS_REPRESENTATION_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDepthBiasRepresentationInfoEXT explicit) { return VkStructureType.DEPTH_BIAS_REPRESENTATION_INFO_EXT; }\n"
#endif /* defined(VK_EXT_depth_bias_control) */
#if defined(VK_EXT_depth_clamp_control)
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_descriptor_buffer)
"def VkDescriptorAddressInfoEXT() { var self: VkDescriptorAddressInfoEXT;"
" self.sType = VkStructureType.DESCRIPTOR_ADDRESS_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorAddressInfoEXT explicit) { return VkStructureType.DESCRIPTOR_ADDRESS_INFO_EXT; }\n"
"def VkDescriptorBufferBindingInfoEXT() { var self: VkDescriptorBufferBindingInfoEXT;"
" self.sType = VkStructureType.DESCRIPTOR_BUFFER_BINDING_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorBufferBindingInfoEXT explicit) { return VkStructureType.DESCRIPTOR_BUFFER_BINDING_INFO_EXT; }\n"
"def VkDescriptorBufferBindingPushDescriptorBufferHandleEXT() { var self: VkDescriptorBufferBindingPushDescriptorBufferHandleEXT;"
" self.sType = VkStructureType.DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorBufferBindingPushDescriptorBufferHandleEXT explicit) { return VkStructureType.DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT; }\n"
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_descriptor_buffer)
"def VkDescriptorGetInfoEXT() { var self: VkDescriptorGetInfoEXT;"
" self.sType = VkStructureType.DESCRIPTOR_GET_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorGetInfoEXT explicit) { return VkStructureType.DESCRIPTOR_GET_INFO_EXT; }\n"
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_0)
"def VkDescriptorPoolCreateInfo() { var self: VkDescriptorPoolCreateInfo;"
" self.sType = VkStructureType.DESCRIPTOR_POOL_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorPoolCreateInfo explicit) { return VkStructureType.DESCRIPTOR_POOL_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkDescriptorPoolInlineUniformBlockCreateInfo() { var self: VkDescriptorPoolInlineUniformBlockCreateInfo;"
" self.sType = VkStructureType.DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorPoolInlineUniformBlockCreateInfo explicit) { return VkStructureType.DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
"def VkDescriptorSetAllocateInfo() { var self: VkDescriptorSetAllocateInfo;"
" self.sType = VkStructureType.DESCRIPTOR_SET_ALLOCATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorSetAllocateInfo explicit) { return VkStructureType.DESCRIPTOR_SET_ALLOCATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VALVE_descriptor_set_host_mapping)
"def VkDescriptorSetBindingReferenceVALVE() { var self: VkDescriptorSetBindingReferenceVALVE;"
" self.sType = VkStructureType.DESCRIPTOR_SET_BINDING_REFERENCE_VALVE;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorSetBindingReferenceVALVE explicit) { return VkStructureType.DESCRIPTOR_SET_BINDING_REFERENCE_VALVE; }\n"
#endif /* defined(VK_VALVE_descriptor_set_host_mapping) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_2)
"def VkDescriptorSetLayoutBindingFlagsCreateInfo() { var self: VkDescriptorSetLayoutBindingFlagsCreateInfo;"
" self.sType = VkStructureType.DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorSetLayoutBindingFlagsCreateInfo explicit) { return VkStructureType.DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
"def VkDescriptorSetLayoutCreateInfo() { var self: VkDescriptorSetLayoutCreateInfo;"
" self.sType = VkStructureType.DESCRIPTOR_SET_LAYOUT_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorSetLayoutCreateInfo explicit) { return VkStructureType.DESCRIPTOR_SET_LAYOUT_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VALVE_descriptor_set_host_mapping)
"def VkDescriptorSetLayoutHostMappingInfoVALVE() { var self: VkDescriptorSetLayoutHostMappingInfoVALVE;"
" self.sType = VkStructureType.DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorSetLayoutHostMappingInfoVALVE explicit) { return VkStructureType.DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE; }\n"
#endif /* defined(VK_VALVE_descriptor_set_host_mapping) */
#if defined(VK_VERSION_1_1)
"def VkDescriptorSetLayoutSupport() { var self: VkDescriptorSetLayoutSupport;"
" self.sType = VkStructureType.DESCRIPTOR_SET_LAYOUT_SUPPORT;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorSetLayoutSupport explicit) { return VkStructureType.DESCRIPTOR_SET_LAYOUT_SUPPORT; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
"def VkDescriptorSetVariableDescriptorCountAllocateInfo() { var self: VkDescriptorSetVariableDescriptorCountAllocateInfo;"
" self.sType = VkStructureType.DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorSetVariableDescriptorCountAllocateInfo explicit) { return VkStructureType.DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO; }\n"
"def VkDescriptorSetVariableDescriptorCountLayoutSupport() { var self: VkDescriptorSetVariableDescriptorCountLayoutSupport;"
" self.sType = VkStructureType.DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorSetVariableDescriptorCountLayoutSupport explicit) { return VkStructureType.DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
"def VkDescriptorUpdateTemplateCreateInfo() { var self: VkDescriptorUpdateTemplateCreateInfo;"
" self.sType = VkStructureType.DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDescriptorUpdateTemplateCreateInfo explicit) { return VkStructureType.DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_device_address_binding_report)
"def VkDeviceAddressBindingCallbackDataEXT() { var self: VkDeviceAddressBindingCallbackDataEXT;"
" self.sType = VkStructureType.DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDeviceAddressBindingCallbackDataEXT explicit) { return VkStructureType.DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT; }\n"
#endif /* defined(VK_EXT_device_address_binding_report) */
#if defined(VK_VERSION_1_3)
"def VkDeviceBufferMemoryRequirements() { var self: VkDeviceBufferMemoryRequirements;"
" self.sType = VkStructureType.DEVICE_BUFFER_MEMORY_REQUIREMENTS;"
" return <- self; }\n"
"def struct_type(t: VkDeviceBufferMemoryRequirements explicit) { return VkStructureType.DEVICE_BUFFER_MEMORY_REQUIREMENTS; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_0)
"def VkDeviceQueueCreateInfo() { var self: VkDeviceQueueCreateInfo;"
" self.sType = VkStructureType.DEVICE_QUEUE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceQueueCreateInfo explicit) { return VkStructureType.DEVICE_QUEUE_CREATE_INFO; }\n"
"def VkDeviceCreateInfo() { var self: VkDeviceCreateInfo;"
" self.sType = VkStructureType.DEVICE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceCreateInfo explicit) { return VkStructureType.DEVICE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_device_memory_report)
"def VkDeviceDeviceMemoryReportCreateInfoEXT() { var self: VkDeviceDeviceMemoryReportCreateInfoEXT;"
" self.sType = VkStructureType.DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDeviceDeviceMemoryReportCreateInfoEXT explicit) { return VkStructureType.DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_device_memory_report) */
#if defined(VK_NV_device_diagnostics_config)
"def VkDeviceDiagnosticsConfigCreateInfoNV() { var self: VkDeviceDiagnosticsConfigCreateInfoNV;"
" self.sType = VkStructureType.DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkDeviceDiagnosticsConfigCreateInfoNV explicit) { return VkStructureType.DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_device_diagnostics_config) */
#if defined(VK_EXT_display_control)
"def VkDeviceEventInfoEXT() { var self: VkDeviceEventInfoEXT;"
" self.sType = VkStructureType.DEVICE_EVENT_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDeviceEventInfoEXT explicit) { return VkStructureType.DEVICE_EVENT_INFO_EXT; }\n"
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_EXT_device_fault)
"def VkDeviceFaultCountsEXT() { var self: VkDeviceFaultCountsEXT;"
" self.sType = VkStructureType.DEVICE_FAULT_COUNTS_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDeviceFaultCountsEXT explicit) { return VkStructureType.DEVICE_FAULT_COUNTS_EXT; }\n"
"def VkDeviceFaultInfoEXT() { var self: VkDeviceFaultInfoEXT;"
" self.sType = VkStructureType.DEVICE_FAULT_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDeviceFaultInfoEXT explicit) { return VkStructureType.DEVICE_FAULT_INFO_EXT; }\n"
#endif /* defined(VK_EXT_device_fault) */
#if defined(VK_VERSION_1_1)
"def VkDeviceGroupBindSparseInfo() { var self: VkDeviceGroupBindSparseInfo;"
" self.sType = VkStructureType.DEVICE_GROUP_BIND_SPARSE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceGroupBindSparseInfo explicit) { return VkStructureType.DEVICE_GROUP_BIND_SPARSE_INFO; }\n"
"def VkDeviceGroupCommandBufferBeginInfo() { var self: VkDeviceGroupCommandBufferBeginInfo;"
" self.sType = VkStructureType.DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceGroupCommandBufferBeginInfo explicit) { return VkStructureType.DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO; }\n"
"def VkDeviceGroupDeviceCreateInfo() { var self: VkDeviceGroupDeviceCreateInfo;"
" self.sType = VkStructureType.DEVICE_GROUP_DEVICE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceGroupDeviceCreateInfo explicit) { return VkStructureType.DEVICE_GROUP_DEVICE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
"def VkDeviceGroupPresentCapabilitiesKHR() { var self: VkDeviceGroupPresentCapabilitiesKHR;"
" self.sType = VkStructureType.DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDeviceGroupPresentCapabilitiesKHR explicit) { return VkStructureType.DEVICE_GROUP_PRESENT_CAPABILITIES_KHR; }\n"
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
"def VkDeviceGroupPresentInfoKHR() { var self: VkDeviceGroupPresentInfoKHR;"
" self.sType = VkStructureType.DEVICE_GROUP_PRESENT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDeviceGroupPresentInfoKHR explicit) { return VkStructureType.DEVICE_GROUP_PRESENT_INFO_KHR; }\n"
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_VERSION_1_1)
"def VkDeviceGroupRenderPassBeginInfo() { var self: VkDeviceGroupRenderPassBeginInfo;"
" self.sType = VkStructureType.DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceGroupRenderPassBeginInfo explicit) { return VkStructureType.DEVICE_GROUP_RENDER_PASS_BEGIN_INFO; }\n"
"def VkDeviceGroupSubmitInfo() { var self: VkDeviceGroupSubmitInfo;"
" self.sType = VkStructureType.DEVICE_GROUP_SUBMIT_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceGroupSubmitInfo explicit) { return VkStructureType.DEVICE_GROUP_SUBMIT_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
"def VkDeviceGroupSwapchainCreateInfoKHR() { var self: VkDeviceGroupSwapchainCreateInfoKHR;"
" self.sType = VkStructureType.DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDeviceGroupSwapchainCreateInfoKHR explicit) { return VkStructureType.DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR; }\n"
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_VERSION_1_0)
"def VkImageCreateInfo() { var self: VkImageCreateInfo;"
" self.sType = VkStructureType.IMAGE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkImageCreateInfo explicit) { return VkStructureType.IMAGE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkDeviceImageMemoryRequirements() { var self: VkDeviceImageMemoryRequirements;"
" self.sType = VkStructureType.DEVICE_IMAGE_MEMORY_REQUIREMENTS;"
" return <- self; }\n"
"def struct_type(t: VkDeviceImageMemoryRequirements explicit) { return VkStructureType.DEVICE_IMAGE_MEMORY_REQUIREMENTS; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
"def VkImageSubresource2() { var self: VkImageSubresource2;"
" self.sType = VkStructureType.IMAGE_SUBRESOURCE_2;"
" return <- self; }\n"
"def struct_type(t: VkImageSubresource2 explicit) { return VkStructureType.IMAGE_SUBRESOURCE_2; }\n"
"def VkDeviceImageSubresourceInfo() { var self: VkDeviceImageSubresourceInfo;"
" self.sType = VkStructureType.DEVICE_IMAGE_SUBRESOURCE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceImageSubresourceInfo explicit) { return VkStructureType.DEVICE_IMAGE_SUBRESOURCE_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_2)
"def VkDeviceMemoryOpaqueCaptureAddressInfo() { var self: VkDeviceMemoryOpaqueCaptureAddressInfo;"
" self.sType = VkStructureType.DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceMemoryOpaqueCaptureAddressInfo explicit) { return VkStructureType.DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_AMD_memory_overallocation_behavior)
"def VkDeviceMemoryOverallocationCreateInfoAMD() { var self: VkDeviceMemoryOverallocationCreateInfoAMD;"
" self.sType = VkStructureType.DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;"
" return <- self; }\n"
"def struct_type(t: VkDeviceMemoryOverallocationCreateInfoAMD explicit) { return VkStructureType.DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD; }\n"
#endif /* defined(VK_AMD_memory_overallocation_behavior) */
#if defined(VK_EXT_device_memory_report)
"def VkDeviceMemoryReportCallbackDataEXT() { var self: VkDeviceMemoryReportCallbackDataEXT;"
" self.sType = VkStructureType.DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDeviceMemoryReportCallbackDataEXT explicit) { return VkStructureType.DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT; }\n"
#endif /* defined(VK_EXT_device_memory_report) */
#if defined(VK_AMDX_shader_enqueue)
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_KHR_pipeline_binary)
"def VkDevicePipelineBinaryInternalCacheControlKHR() { var self: VkDevicePipelineBinaryInternalCacheControlKHR;"
" self.sType = VkStructureType.DEVICE_PIPELINE_BINARY_INTERNAL_CACHE_CONTROL_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDevicePipelineBinaryInternalCacheControlKHR explicit) { return VkStructureType.DEVICE_PIPELINE_BINARY_INTERNAL_CACHE_CONTROL_KHR; }\n"
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_VERSION_1_3)
"def VkDevicePrivateDataCreateInfo() { var self: VkDevicePrivateDataCreateInfo;"
" self.sType = VkStructureType.DEVICE_PRIVATE_DATA_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDevicePrivateDataCreateInfo explicit) { return VkStructureType.DEVICE_PRIVATE_DATA_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
"def VkDeviceQueueGlobalPriorityCreateInfo() { var self: VkDeviceQueueGlobalPriorityCreateInfo;"
" self.sType = VkStructureType.DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkDeviceQueueGlobalPriorityCreateInfo explicit) { return VkStructureType.DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_1)
"def VkDeviceQueueInfo2() { var self: VkDeviceQueueInfo2;"
" self.sType = VkStructureType.DEVICE_QUEUE_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkDeviceQueueInfo2 explicit) { return VkStructureType.DEVICE_QUEUE_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_ARM_scheduling_controls)
"def VkDeviceQueueShaderCoreControlCreateInfoARM() { var self: VkDeviceQueueShaderCoreControlCreateInfoARM;"
" self.sType = VkStructureType.DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM;"
" return <- self; }\n"
"def struct_type(t: VkDeviceQueueShaderCoreControlCreateInfoARM explicit) { return VkStructureType.DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM; }\n"
#endif /* defined(VK_ARM_scheduling_controls) */
#if defined(VK_LUNARG_direct_driver_loading)
"def VkDirectDriverLoadingInfoLUNARG() { var self: VkDirectDriverLoadingInfoLUNARG;"
" self.sType = VkStructureType.DIRECT_DRIVER_LOADING_INFO_LUNARG;"
" return <- self; }\n"
"def struct_type(t: VkDirectDriverLoadingInfoLUNARG explicit) { return VkStructureType.DIRECT_DRIVER_LOADING_INFO_LUNARG; }\n"
"def VkDirectDriverLoadingListLUNARG() { var self: VkDirectDriverLoadingListLUNARG;"
" self.sType = VkStructureType.DIRECT_DRIVER_LOADING_LIST_LUNARG;"
" return <- self; }\n"
"def struct_type(t: VkDirectDriverLoadingListLUNARG explicit) { return VkStructureType.DIRECT_DRIVER_LOADING_LIST_LUNARG; }\n"
#endif /* defined(VK_LUNARG_direct_driver_loading) */
#if defined(VK_EXT_directfb_surface)
"def VkDirectFBSurfaceCreateInfoEXT() { var self: VkDirectFBSurfaceCreateInfoEXT;"
" self.sType = VkStructureType.DIRECTFB_SURFACE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDirectFBSurfaceCreateInfoEXT explicit) { return VkStructureType.DIRECTFB_SURFACE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_directfb_surface) */
#if defined(VK_AMDX_shader_enqueue)
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_display_control)
"def VkDisplayEventInfoEXT() { var self: VkDisplayEventInfoEXT;"
" self.sType = VkStructureType.DISPLAY_EVENT_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDisplayEventInfoEXT explicit) { return VkStructureType.DISPLAY_EVENT_INFO_EXT; }\n"
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_KHR_display)
"def VkDisplayModeCreateInfoKHR() { var self: VkDisplayModeCreateInfoKHR;"
" self.sType = VkStructureType.DISPLAY_MODE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDisplayModeCreateInfoKHR explicit) { return VkStructureType.DISPLAY_MODE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_get_display_properties2)
"def VkDisplayModeProperties2KHR() { var self: VkDisplayModeProperties2KHR;"
" self.sType = VkStructureType.DISPLAY_MODE_PROPERTIES_2_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDisplayModeProperties2KHR explicit) { return VkStructureType.DISPLAY_MODE_PROPERTIES_2_KHR; }\n"
#endif /* defined(VK_KHR_get_display_properties2) */
#if defined(VK_NV_display_stereo)
"def VkDisplayModeStereoPropertiesNV() { var self: VkDisplayModeStereoPropertiesNV;"
" self.sType = VkStructureType.DISPLAY_MODE_STEREO_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkDisplayModeStereoPropertiesNV explicit) { return VkStructureType.DISPLAY_MODE_STEREO_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_display_stereo) */
#if defined(VK_AMD_display_native_hdr)
"def VkDisplayNativeHdrSurfaceCapabilitiesAMD() { var self: VkDisplayNativeHdrSurfaceCapabilitiesAMD;"
" self.sType = VkStructureType.DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD;"
" return <- self; }\n"
"def struct_type(t: VkDisplayNativeHdrSurfaceCapabilitiesAMD explicit) { return VkStructureType.DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD; }\n"
#endif /* defined(VK_AMD_display_native_hdr) */
#if defined(VK_KHR_display)
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_get_display_properties2)
"def VkDisplayPlaneCapabilities2KHR() { var self: VkDisplayPlaneCapabilities2KHR;"
" self.sType = VkStructureType.DISPLAY_PLANE_CAPABILITIES_2_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDisplayPlaneCapabilities2KHR explicit) { return VkStructureType.DISPLAY_PLANE_CAPABILITIES_2_KHR; }\n"
"def VkDisplayPlaneInfo2KHR() { var self: VkDisplayPlaneInfo2KHR;"
" self.sType = VkStructureType.DISPLAY_PLANE_INFO_2_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDisplayPlaneInfo2KHR explicit) { return VkStructureType.DISPLAY_PLANE_INFO_2_KHR; }\n"
#endif /* defined(VK_KHR_get_display_properties2) */
#if defined(VK_KHR_display)
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_get_display_properties2)
"def VkDisplayPlaneProperties2KHR() { var self: VkDisplayPlaneProperties2KHR;"
" self.sType = VkStructureType.DISPLAY_PLANE_PROPERTIES_2_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDisplayPlaneProperties2KHR explicit) { return VkStructureType.DISPLAY_PLANE_PROPERTIES_2_KHR; }\n"
#endif /* defined(VK_KHR_get_display_properties2) */
#if defined(VK_EXT_display_control)
"def VkDisplayPowerInfoEXT() { var self: VkDisplayPowerInfoEXT;"
" self.sType = VkStructureType.DISPLAY_POWER_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDisplayPowerInfoEXT explicit) { return VkStructureType.DISPLAY_POWER_INFO_EXT; }\n"
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_KHR_display_swapchain)
"def VkDisplayPresentInfoKHR() { var self: VkDisplayPresentInfoKHR;"
" self.sType = VkStructureType.DISPLAY_PRESENT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDisplayPresentInfoKHR explicit) { return VkStructureType.DISPLAY_PRESENT_INFO_KHR; }\n"
#endif /* defined(VK_KHR_display_swapchain) */
#if defined(VK_KHR_display)
#endif /* defined(VK_KHR_display) */
#if defined(VK_KHR_get_display_properties2)
"def VkDisplayProperties2KHR() { var self: VkDisplayProperties2KHR;"
" self.sType = VkStructureType.DISPLAY_PROPERTIES_2_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDisplayProperties2KHR explicit) { return VkStructureType.DISPLAY_PROPERTIES_2_KHR; }\n"
#endif /* defined(VK_KHR_get_display_properties2) */
#if defined(VK_KHR_display)
"def VkDisplaySurfaceCreateInfoKHR() { var self: VkDisplaySurfaceCreateInfoKHR;"
" self.sType = VkStructureType.DISPLAY_SURFACE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkDisplaySurfaceCreateInfoKHR explicit) { return VkStructureType.DISPLAY_SURFACE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_display) */
#if defined(VK_NV_display_stereo)
"def VkDisplaySurfaceStereoCreateInfoNV() { var self: VkDisplaySurfaceStereoCreateInfoNV;"
" self.sType = VkStructureType.DISPLAY_SURFACE_STEREO_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkDisplaySurfaceStereoCreateInfoNV explicit) { return VkStructureType.DISPLAY_SURFACE_STEREO_CREATE_INFO_NV; }\n"
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
"def VkDrmFormatModifierPropertiesList2EXT() { var self: VkDrmFormatModifierPropertiesList2EXT;"
" self.sType = VkStructureType.DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDrmFormatModifierPropertiesList2EXT explicit) { return VkStructureType.DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT; }\n"
#endif /* defined(VK_EXT_image_drm_format_modifier) && (defined(VK_KHR_format_feature_flags2) || defined(VK_VERSION_1_3)) */
#if defined(VK_EXT_image_drm_format_modifier)
"def VkDrmFormatModifierPropertiesListEXT() { var self: VkDrmFormatModifierPropertiesListEXT;"
" self.sType = VkStructureType.DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT;"
" return <- self; }\n"
"def struct_type(t: VkDrmFormatModifierPropertiesListEXT explicit) { return VkStructureType.DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT; }\n"
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_VERSION_1_0)
"def VkEventCreateInfo() { var self: VkEventCreateInfo;"
" self.sType = VkStructureType.EVENT_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkEventCreateInfo explicit) { return VkStructureType.EVENT_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_pipeline_library)
"def VkPipelineLibraryCreateInfoKHR() { var self: VkPipelineLibraryCreateInfoKHR;"
" self.sType = VkStructureType.PIPELINE_LIBRARY_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineLibraryCreateInfoKHR explicit) { return VkStructureType.PIPELINE_LIBRARY_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_pipeline_library) */
#if defined(VK_AMDX_shader_enqueue)
"def VkExecutionGraphPipelineCreateInfoAMDX() { var self: VkExecutionGraphPipelineCreateInfoAMDX;"
" self.sType = VkStructureType.EXECUTION_GRAPH_PIPELINE_CREATE_INFO_AMDX;"
" return <- self; }\n"
"def struct_type(t: VkExecutionGraphPipelineCreateInfoAMDX explicit) { return VkStructureType.EXECUTION_GRAPH_PIPELINE_CREATE_INFO_AMDX; }\n"
"def VkExecutionGraphPipelineScratchSizeAMDX() { var self: VkExecutionGraphPipelineScratchSizeAMDX;"
" self.sType = VkStructureType.EXECUTION_GRAPH_PIPELINE_SCRATCH_SIZE_AMDX;"
" return <- self; }\n"
"def struct_type(t: VkExecutionGraphPipelineScratchSizeAMDX explicit) { return VkStructureType.EXECUTION_GRAPH_PIPELINE_SCRATCH_SIZE_AMDX; }\n"
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_VERSION_1_1)
"def VkExportFenceCreateInfo() { var self: VkExportFenceCreateInfo;"
" self.sType = VkStructureType.EXPORT_FENCE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkExportFenceCreateInfo explicit) { return VkStructureType.EXPORT_FENCE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_external_fence_win32)
"def VkExportFenceWin32HandleInfoKHR() { var self: VkExportFenceWin32HandleInfoKHR;"
" self.sType = VkStructureType.EXPORT_FENCE_WIN32_HANDLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkExportFenceWin32HandleInfoKHR explicit) { return VkStructureType.EXPORT_FENCE_WIN32_HANDLE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_fence_win32) */
#if defined(VK_VERSION_1_1)
"def VkExportMemoryAllocateInfo() { var self: VkExportMemoryAllocateInfo;"
" self.sType = VkStructureType.EXPORT_MEMORY_ALLOCATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkExportMemoryAllocateInfo explicit) { return VkStructureType.EXPORT_MEMORY_ALLOCATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_NV_external_memory)
"def VkExportMemoryAllocateInfoNV() { var self: VkExportMemoryAllocateInfoNV;"
" self.sType = VkStructureType.EXPORT_MEMORY_ALLOCATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkExportMemoryAllocateInfoNV explicit) { return VkStructureType.EXPORT_MEMORY_ALLOCATE_INFO_NV; }\n"
#endif /* defined(VK_NV_external_memory) */
#if defined(VK_KHR_external_memory_win32)
"def VkExportMemoryWin32HandleInfoKHR() { var self: VkExportMemoryWin32HandleInfoKHR;"
" self.sType = VkStructureType.EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkExportMemoryWin32HandleInfoKHR explicit) { return VkStructureType.EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_NV_external_memory_win32)
"def VkExportMemoryWin32HandleInfoNV() { var self: VkExportMemoryWin32HandleInfoNV;"
" self.sType = VkStructureType.EXPORT_MEMORY_WIN32_HANDLE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkExportMemoryWin32HandleInfoNV explicit) { return VkStructureType.EXPORT_MEMORY_WIN32_HANDLE_INFO_NV; }\n"
#endif /* defined(VK_NV_external_memory_win32) */
#if defined(VK_EXT_metal_objects)
"def VkExportMetalBufferInfoEXT() { var self: VkExportMetalBufferInfoEXT;"
" self.sType = VkStructureType.EXPORT_METAL_BUFFER_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkExportMetalBufferInfoEXT explicit) { return VkStructureType.EXPORT_METAL_BUFFER_INFO_EXT; }\n"
"def VkExportMetalCommandQueueInfoEXT() { var self: VkExportMetalCommandQueueInfoEXT;"
" self.sType = VkStructureType.EXPORT_METAL_COMMAND_QUEUE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkExportMetalCommandQueueInfoEXT explicit) { return VkStructureType.EXPORT_METAL_COMMAND_QUEUE_INFO_EXT; }\n"
"def VkExportMetalDeviceInfoEXT() { var self: VkExportMetalDeviceInfoEXT;"
" self.sType = VkStructureType.EXPORT_METAL_DEVICE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkExportMetalDeviceInfoEXT explicit) { return VkStructureType.EXPORT_METAL_DEVICE_INFO_EXT; }\n"
"def VkExportMetalIOSurfaceInfoEXT() { var self: VkExportMetalIOSurfaceInfoEXT;"
" self.sType = VkStructureType.EXPORT_METAL_IO_SURFACE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkExportMetalIOSurfaceInfoEXT explicit) { return VkStructureType.EXPORT_METAL_IO_SURFACE_INFO_EXT; }\n"
"def VkExportMetalObjectCreateInfoEXT() { var self: VkExportMetalObjectCreateInfoEXT;"
" self.sType = VkStructureType.EXPORT_METAL_OBJECT_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkExportMetalObjectCreateInfoEXT explicit) { return VkStructureType.EXPORT_METAL_OBJECT_CREATE_INFO_EXT; }\n"
"def VkExportMetalObjectsInfoEXT() { var self: VkExportMetalObjectsInfoEXT;"
" self.sType = VkStructureType.EXPORT_METAL_OBJECTS_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkExportMetalObjectsInfoEXT explicit) { return VkStructureType.EXPORT_METAL_OBJECTS_INFO_EXT; }\n"
"def VkExportMetalSharedEventInfoEXT() { var self: VkExportMetalSharedEventInfoEXT;"
" self.sType = VkStructureType.EXPORT_METAL_SHARED_EVENT_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkExportMetalSharedEventInfoEXT explicit) { return VkStructureType.EXPORT_METAL_SHARED_EVENT_INFO_EXT; }\n"
"def VkExportMetalTextureInfoEXT() { var self: VkExportMetalTextureInfoEXT;"
" self.sType = VkStructureType.EXPORT_METAL_TEXTURE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkExportMetalTextureInfoEXT explicit) { return VkStructureType.EXPORT_METAL_TEXTURE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_metal_objects) */
#if defined(VK_VERSION_1_1)
"def VkExportSemaphoreCreateInfo() { var self: VkExportSemaphoreCreateInfo;"
" self.sType = VkStructureType.EXPORT_SEMAPHORE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkExportSemaphoreCreateInfo explicit) { return VkStructureType.EXPORT_SEMAPHORE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_external_semaphore_win32)
"def VkExportSemaphoreWin32HandleInfoKHR() { var self: VkExportSemaphoreWin32HandleInfoKHR;"
" self.sType = VkStructureType.EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkExportSemaphoreWin32HandleInfoKHR explicit) { return VkStructureType.EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkExternalBufferProperties() { var self: VkExternalBufferProperties;"
" self.sType = VkStructureType.EXTERNAL_BUFFER_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkExternalBufferProperties explicit) { return VkStructureType.EXTERNAL_BUFFER_PROPERTIES; }\n"
"def VkExternalFenceProperties() { var self: VkExternalFenceProperties;"
" self.sType = VkStructureType.EXTERNAL_FENCE_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkExternalFenceProperties explicit) { return VkStructureType.EXTERNAL_FENCE_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
"def VkExternalFormatANDROID() { var self: VkExternalFormatANDROID;"
" self.sType = VkStructureType.EXTERNAL_FORMAT_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkExternalFormatANDROID explicit) { return VkStructureType.EXTERNAL_FORMAT_ANDROID; }\n"
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_QNX_external_memory_screen_buffer)
"def VkExternalFormatQNX() { var self: VkExternalFormatQNX;"
" self.sType = VkStructureType.EXTERNAL_FORMAT_QNX;"
" return <- self; }\n"
"def struct_type(t: VkExternalFormatQNX explicit) { return VkStructureType.EXTERNAL_FORMAT_QNX; }\n"
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
#if defined(VK_VERSION_1_1)
"def VkExternalImageFormatProperties() { var self: VkExternalImageFormatProperties;"
" self.sType = VkStructureType.EXTERNAL_IMAGE_FORMAT_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkExternalImageFormatProperties explicit) { return VkStructureType.EXTERNAL_IMAGE_FORMAT_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_external_memory_capabilities)
#endif /* defined(VK_NV_external_memory_capabilities) */
#if defined(VK_EXT_external_memory_acquire_unmodified)
"def VkExternalMemoryAcquireUnmodifiedEXT() { var self: VkExternalMemoryAcquireUnmodifiedEXT;"
" self.sType = VkStructureType.EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT;"
" return <- self; }\n"
"def struct_type(t: VkExternalMemoryAcquireUnmodifiedEXT explicit) { return VkStructureType.EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT; }\n"
#endif /* defined(VK_EXT_external_memory_acquire_unmodified) */
#if defined(VK_VERSION_1_1)
"def VkExternalMemoryBufferCreateInfo() { var self: VkExternalMemoryBufferCreateInfo;"
" self.sType = VkStructureType.EXTERNAL_MEMORY_BUFFER_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkExternalMemoryBufferCreateInfo explicit) { return VkStructureType.EXTERNAL_MEMORY_BUFFER_CREATE_INFO; }\n"
"def VkExternalMemoryImageCreateInfo() { var self: VkExternalMemoryImageCreateInfo;"
" self.sType = VkStructureType.EXTERNAL_MEMORY_IMAGE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkExternalMemoryImageCreateInfo explicit) { return VkStructureType.EXTERNAL_MEMORY_IMAGE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_NV_external_memory)
"def VkExternalMemoryImageCreateInfoNV() { var self: VkExternalMemoryImageCreateInfoNV;"
" self.sType = VkStructureType.EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkExternalMemoryImageCreateInfoNV explicit) { return VkStructureType.EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_external_memory) */
#if defined(VK_VERSION_1_1)
"def VkExternalSemaphoreProperties() { var self: VkExternalSemaphoreProperties;"
" self.sType = VkStructureType.EXTERNAL_SEMAPHORE_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkExternalSemaphoreProperties explicit) { return VkStructureType.EXTERNAL_SEMAPHORE_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
"def VkFenceCreateInfo() { var self: VkFenceCreateInfo;"
" self.sType = VkStructureType.FENCE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkFenceCreateInfo explicit) { return VkStructureType.FENCE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_external_fence_fd)
"def VkFenceGetFdInfoKHR() { var self: VkFenceGetFdInfoKHR;"
" self.sType = VkStructureType.FENCE_GET_FD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkFenceGetFdInfoKHR explicit) { return VkStructureType.FENCE_GET_FD_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_fence_fd) */
#if defined(VK_KHR_external_fence_win32)
"def VkFenceGetWin32HandleInfoKHR() { var self: VkFenceGetWin32HandleInfoKHR;"
" self.sType = VkStructureType.FENCE_GET_WIN32_HANDLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkFenceGetWin32HandleInfoKHR explicit) { return VkStructureType.FENCE_GET_WIN32_HANDLE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_fence_win32) */
#if defined(VK_EXT_filter_cubic)
"def VkFilterCubicImageViewImageFormatPropertiesEXT() { var self: VkFilterCubicImageViewImageFormatPropertiesEXT;"
" self.sType = VkStructureType.FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkFilterCubicImageViewImageFormatPropertiesEXT explicit) { return VkStructureType.FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_filter_cubic) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkFormatProperties2() { var self: VkFormatProperties2;"
" self.sType = VkStructureType.FORMAT_PROPERTIES_2;"
" return <- self; }\n"
"def struct_type(t: VkFormatProperties2 explicit) { return VkStructureType.FORMAT_PROPERTIES_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
"def VkFormatProperties3() { var self: VkFormatProperties3;"
" self.sType = VkStructureType.FORMAT_PROPERTIES_3;"
" return <- self; }\n"
"def struct_type(t: VkFormatProperties3 explicit) { return VkStructureType.FORMAT_PROPERTIES_3; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_KHR_fragment_shading_rate)
"def VkFragmentShadingRateAttachmentInfoKHR() { var self: VkFragmentShadingRateAttachmentInfoKHR;"
" self.sType = VkStructureType.FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkFragmentShadingRateAttachmentInfoKHR explicit) { return VkStructureType.FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR; }\n"
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_EXT_frame_boundary)
"def VkFrameBoundaryEXT() { var self: VkFrameBoundaryEXT;"
" self.sType = VkStructureType.FRAME_BOUNDARY_EXT;"
" return <- self; }\n"
"def struct_type(t: VkFrameBoundaryEXT explicit) { return VkStructureType.FRAME_BOUNDARY_EXT; }\n"
#endif /* defined(VK_EXT_frame_boundary) */
#if defined(VK_VERSION_1_2)
"def VkFramebufferAttachmentImageInfo() { var self: VkFramebufferAttachmentImageInfo;"
" self.sType = VkStructureType.FRAMEBUFFER_ATTACHMENT_IMAGE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkFramebufferAttachmentImageInfo explicit) { return VkStructureType.FRAMEBUFFER_ATTACHMENT_IMAGE_INFO; }\n"
"def VkFramebufferAttachmentsCreateInfo() { var self: VkFramebufferAttachmentsCreateInfo;"
" self.sType = VkStructureType.FRAMEBUFFER_ATTACHMENTS_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkFramebufferAttachmentsCreateInfo explicit) { return VkStructureType.FRAMEBUFFER_ATTACHMENTS_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
"def VkFramebufferCreateInfo() { var self: VkFramebufferCreateInfo;"
" self.sType = VkStructureType.FRAMEBUFFER_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkFramebufferCreateInfo explicit) { return VkStructureType.FRAMEBUFFER_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_coverage_reduction_mode)
"def VkFramebufferMixedSamplesCombinationNV() { var self: VkFramebufferMixedSamplesCombinationNV;"
" self.sType = VkStructureType.FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV;"
" return <- self; }\n"
"def struct_type(t: VkFramebufferMixedSamplesCombinationNV explicit) { return VkStructureType.FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV; }\n"
#endif /* defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_EXT_device_generated_commands)
"def VkGeneratedCommandsInfoEXT() { var self: VkGeneratedCommandsInfoEXT;"
" self.sType = VkStructureType.GENERATED_COMMANDS_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkGeneratedCommandsInfoEXT explicit) { return VkStructureType.GENERATED_COMMANDS_INFO_EXT; }\n"
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
"def VkGeneratedCommandsInfoNV() { var self: VkGeneratedCommandsInfoNV;"
" self.sType = VkStructureType.GENERATED_COMMANDS_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkGeneratedCommandsInfoNV explicit) { return VkStructureType.GENERATED_COMMANDS_INFO_NV; }\n"
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands)
"def VkGeneratedCommandsMemoryRequirementsInfoEXT() { var self: VkGeneratedCommandsMemoryRequirementsInfoEXT;"
" self.sType = VkStructureType.GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkGeneratedCommandsMemoryRequirementsInfoEXT explicit) { return VkStructureType.GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_EXT; }\n"
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
"def VkGeneratedCommandsMemoryRequirementsInfoNV() { var self: VkGeneratedCommandsMemoryRequirementsInfoNV;"
" self.sType = VkStructureType.GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkGeneratedCommandsMemoryRequirementsInfoNV explicit) { return VkStructureType.GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV; }\n"
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands)
"def VkGeneratedCommandsPipelineInfoEXT() { var self: VkGeneratedCommandsPipelineInfoEXT;"
" self.sType = VkStructureType.GENERATED_COMMANDS_PIPELINE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkGeneratedCommandsPipelineInfoEXT explicit) { return VkStructureType.GENERATED_COMMANDS_PIPELINE_INFO_EXT; }\n"
"def VkGeneratedCommandsShaderInfoEXT() { var self: VkGeneratedCommandsShaderInfoEXT;"
" self.sType = VkStructureType.GENERATED_COMMANDS_SHADER_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkGeneratedCommandsShaderInfoEXT explicit) { return VkStructureType.GENERATED_COMMANDS_SHADER_INFO_EXT; }\n"
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_low_latency2)
"def VkLatencyTimingsFrameReportNV() { var self: VkLatencyTimingsFrameReportNV;"
" self.sType = VkStructureType.LATENCY_TIMINGS_FRAME_REPORT_NV;"
" return <- self; }\n"
"def struct_type(t: VkLatencyTimingsFrameReportNV explicit) { return VkStructureType.LATENCY_TIMINGS_FRAME_REPORT_NV; }\n"
"def VkGetLatencyMarkerInfoNV() { var self: VkGetLatencyMarkerInfoNV;"
" self.sType = VkStructureType.GET_LATENCY_MARKER_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkGetLatencyMarkerInfoNV explicit) { return VkStructureType.GET_LATENCY_MARKER_INFO_NV; }\n"
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_VERSION_1_0)
"def VkPipelineTessellationStateCreateInfo() { var self: VkPipelineTessellationStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_TESSELLATION_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineTessellationStateCreateInfo explicit) { return VkStructureType.PIPELINE_TESSELLATION_STATE_CREATE_INFO; }\n"
"def VkPipelineVertexInputStateCreateInfo() { var self: VkPipelineVertexInputStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineVertexInputStateCreateInfo explicit) { return VkStructureType.PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO; }\n"
"def VkPipelineColorBlendStateCreateInfo() { var self: VkPipelineColorBlendStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineColorBlendStateCreateInfo explicit) { return VkStructureType.PIPELINE_COLOR_BLEND_STATE_CREATE_INFO; }\n"
"def VkPipelineDepthStencilStateCreateInfo() { var self: VkPipelineDepthStencilStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineDepthStencilStateCreateInfo explicit) { return VkStructureType.PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO; }\n"
"def VkPipelineDynamicStateCreateInfo() { var self: VkPipelineDynamicStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_DYNAMIC_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineDynamicStateCreateInfo explicit) { return VkStructureType.PIPELINE_DYNAMIC_STATE_CREATE_INFO; }\n"
"def VkPipelineInputAssemblyStateCreateInfo() { var self: VkPipelineInputAssemblyStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineInputAssemblyStateCreateInfo explicit) { return VkStructureType.PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO; }\n"
"def VkPipelineMultisampleStateCreateInfo() { var self: VkPipelineMultisampleStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineMultisampleStateCreateInfo explicit) { return VkStructureType.PIPELINE_MULTISAMPLE_STATE_CREATE_INFO; }\n"
"def VkPipelineRasterizationStateCreateInfo() { var self: VkPipelineRasterizationStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_RASTERIZATION_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRasterizationStateCreateInfo explicit) { return VkStructureType.PIPELINE_RASTERIZATION_STATE_CREATE_INFO; }\n"
"def VkPipelineViewportStateCreateInfo() { var self: VkPipelineViewportStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_VIEWPORT_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineViewportStateCreateInfo explicit) { return VkStructureType.PIPELINE_VIEWPORT_STATE_CREATE_INFO; }\n"
"def VkGraphicsPipelineCreateInfo() { var self: VkGraphicsPipelineCreateInfo;"
" self.sType = VkStructureType.GRAPHICS_PIPELINE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkGraphicsPipelineCreateInfo explicit) { return VkStructureType.GRAPHICS_PIPELINE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_graphics_pipeline_library)
"def VkGraphicsPipelineLibraryCreateInfoEXT() { var self: VkGraphicsPipelineLibraryCreateInfoEXT;"
" self.sType = VkStructureType.GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkGraphicsPipelineLibraryCreateInfoEXT explicit) { return VkStructureType.GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_graphics_pipeline_library) */
#if defined(VK_NV_device_generated_commands)
"def VkGraphicsShaderGroupCreateInfoNV() { var self: VkGraphicsShaderGroupCreateInfoNV;"
" self.sType = VkStructureType.GRAPHICS_SHADER_GROUP_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkGraphicsShaderGroupCreateInfoNV explicit) { return VkStructureType.GRAPHICS_SHADER_GROUP_CREATE_INFO_NV; }\n"
"def VkGraphicsPipelineShaderGroupsCreateInfoNV() { var self: VkGraphicsPipelineShaderGroupsCreateInfoNV;"
" self.sType = VkStructureType.GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkGraphicsPipelineShaderGroupsCreateInfoNV explicit) { return VkStructureType.GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_hdr_metadata)
"def VkHdrMetadataEXT() { var self: VkHdrMetadataEXT;"
" self.sType = VkStructureType.HDR_METADATA_EXT;"
" return <- self; }\n"
"def struct_type(t: VkHdrMetadataEXT explicit) { return VkStructureType.HDR_METADATA_EXT; }\n"
#endif /* defined(VK_EXT_hdr_metadata) */
#if defined(VK_HUAWEI_hdr_vivid)
"def VkHdrVividDynamicMetadataHUAWEI() { var self: VkHdrVividDynamicMetadataHUAWEI;"
" self.sType = VkStructureType.HDR_VIVID_DYNAMIC_METADATA_HUAWEI;"
" return <- self; }\n"
"def struct_type(t: VkHdrVividDynamicMetadataHUAWEI explicit) { return VkStructureType.HDR_VIVID_DYNAMIC_METADATA_HUAWEI; }\n"
#endif /* defined(VK_HUAWEI_hdr_vivid) */
#if defined(VK_EXT_headless_surface)
"def VkHeadlessSurfaceCreateInfoEXT() { var self: VkHeadlessSurfaceCreateInfoEXT;"
" self.sType = VkStructureType.HEADLESS_SURFACE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkHeadlessSurfaceCreateInfoEXT explicit) { return VkStructureType.HEADLESS_SURFACE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_headless_surface) */
#if defined(VK_VERSION_1_4)
"def VkHostImageCopyDevicePerformanceQuery() { var self: VkHostImageCopyDevicePerformanceQuery;"
" self.sType = VkStructureType.HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY;"
" return <- self; }\n"
"def struct_type(t: VkHostImageCopyDevicePerformanceQuery explicit) { return VkStructureType.HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY; }\n"
"def VkHostImageLayoutTransitionInfo() { var self: VkHostImageLayoutTransitionInfo;"
" self.sType = VkStructureType.HOST_IMAGE_LAYOUT_TRANSITION_INFO;"
" return <- self; }\n"
"def struct_type(t: VkHostImageLayoutTransitionInfo explicit) { return VkStructureType.HOST_IMAGE_LAYOUT_TRANSITION_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_MVK_ios_surface)
"def VkIOSSurfaceCreateInfoMVK() { var self: VkIOSSurfaceCreateInfoMVK;"
" self.sType = VkStructureType.IOS_SURFACE_CREATE_INFO_MVK;"
" return <- self; }\n"
"def struct_type(t: VkIOSSurfaceCreateInfoMVK explicit) { return VkStructureType.IOS_SURFACE_CREATE_INFO_MVK; }\n"
#endif /* defined(VK_MVK_ios_surface) */
#if defined(VK_MESA_image_alignment_control)
"def VkImageAlignmentControlCreateInfoMESA() { var self: VkImageAlignmentControlCreateInfoMESA;"
" self.sType = VkStructureType.IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA;"
" return <- self; }\n"
"def struct_type(t: VkImageAlignmentControlCreateInfoMESA explicit) { return VkStructureType.IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA; }\n"
#endif /* defined(VK_MESA_image_alignment_control) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_descriptor_buffer)
"def VkImageCaptureDescriptorDataInfoEXT() { var self: VkImageCaptureDescriptorDataInfoEXT;"
" self.sType = VkStructureType.IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageCaptureDescriptorDataInfoEXT explicit) { return VkStructureType.IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT; }\n"
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_EXT_image_compression_control)
"def VkImageCompressionControlEXT() { var self: VkImageCompressionControlEXT;"
" self.sType = VkStructureType.IMAGE_COMPRESSION_CONTROL_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageCompressionControlEXT explicit) { return VkStructureType.IMAGE_COMPRESSION_CONTROL_EXT; }\n"
"def VkImageCompressionPropertiesEXT() { var self: VkImageCompressionPropertiesEXT;"
" self.sType = VkStructureType.IMAGE_COMPRESSION_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageCompressionPropertiesEXT explicit) { return VkStructureType.IMAGE_COMPRESSION_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_image_compression_control) */
#if defined(VK_FUCHSIA_buffer_collection)
"def VkImageFormatConstraintsInfoFUCHSIA() { var self: VkImageFormatConstraintsInfoFUCHSIA;"
" self.sType = VkStructureType.IMAGE_FORMAT_CONSTRAINTS_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkImageFormatConstraintsInfoFUCHSIA explicit) { return VkStructureType.IMAGE_FORMAT_CONSTRAINTS_INFO_FUCHSIA; }\n"
"def VkImageConstraintsInfoFUCHSIA() { var self: VkImageConstraintsInfoFUCHSIA;"
" self.sType = VkStructureType.IMAGE_CONSTRAINTS_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkImageConstraintsInfoFUCHSIA explicit) { return VkStructureType.IMAGE_CONSTRAINTS_INFO_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_image_drm_format_modifier)
"def VkImageDrmFormatModifierExplicitCreateInfoEXT() { var self: VkImageDrmFormatModifierExplicitCreateInfoEXT;"
" self.sType = VkStructureType.IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageDrmFormatModifierExplicitCreateInfoEXT explicit) { return VkStructureType.IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT; }\n"
"def VkImageDrmFormatModifierListCreateInfoEXT() { var self: VkImageDrmFormatModifierListCreateInfoEXT;"
" self.sType = VkStructureType.IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageDrmFormatModifierListCreateInfoEXT explicit) { return VkStructureType.IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT; }\n"
"def VkImageDrmFormatModifierPropertiesEXT() { var self: VkImageDrmFormatModifierPropertiesEXT;"
" self.sType = VkStructureType.IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageDrmFormatModifierPropertiesEXT explicit) { return VkStructureType.IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_VERSION_1_2)
"def VkImageFormatListCreateInfo() { var self: VkImageFormatListCreateInfo;"
" self.sType = VkStructureType.IMAGE_FORMAT_LIST_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkImageFormatListCreateInfo explicit) { return VkStructureType.IMAGE_FORMAT_LIST_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
"def VkImageFormatProperties2() { var self: VkImageFormatProperties2;"
" self.sType = VkStructureType.IMAGE_FORMAT_PROPERTIES_2;"
" return <- self; }\n"
"def struct_type(t: VkImageFormatProperties2 explicit) { return VkStructureType.IMAGE_FORMAT_PROPERTIES_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
"def VkImageMemoryBarrier() { var self: VkImageMemoryBarrier;"
" self.sType = VkStructureType.IMAGE_MEMORY_BARRIER;"
" return <- self; }\n"
"def struct_type(t: VkImageMemoryBarrier explicit) { return VkStructureType.IMAGE_MEMORY_BARRIER; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkImageMemoryRequirementsInfo2() { var self: VkImageMemoryRequirementsInfo2;"
" self.sType = VkStructureType.IMAGE_MEMORY_REQUIREMENTS_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkImageMemoryRequirementsInfo2 explicit) { return VkStructureType.IMAGE_MEMORY_REQUIREMENTS_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_FUCHSIA_imagepipe_surface)
"def VkImagePipeSurfaceCreateInfoFUCHSIA() { var self: VkImagePipeSurfaceCreateInfoFUCHSIA;"
" self.sType = VkStructureType.IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkImagePipeSurfaceCreateInfoFUCHSIA explicit) { return VkStructureType.IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_imagepipe_surface) */
#if defined(VK_VERSION_1_1)
"def VkImagePlaneMemoryRequirementsInfo() { var self: VkImagePlaneMemoryRequirementsInfo;"
" self.sType = VkStructureType.IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;"
" return <- self; }\n"
"def struct_type(t: VkImagePlaneMemoryRequirementsInfo explicit) { return VkStructureType.IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkImageResolve2() { var self: VkImageResolve2;"
" self.sType = VkStructureType.IMAGE_RESOLVE_2;"
" return <- self; }\n"
"def struct_type(t: VkImageResolve2 explicit) { return VkStructureType.IMAGE_RESOLVE_2; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
"def VkImageSparseMemoryRequirementsInfo2() { var self: VkImageSparseMemoryRequirementsInfo2;"
" self.sType = VkStructureType.IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkImageSparseMemoryRequirementsInfo2 explicit) { return VkStructureType.IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
"def VkImageStencilUsageCreateInfo() { var self: VkImageStencilUsageCreateInfo;"
" self.sType = VkStructureType.IMAGE_STENCIL_USAGE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkImageStencilUsageCreateInfo explicit) { return VkStructureType.IMAGE_STENCIL_USAGE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
"def VkImageSwapchainCreateInfoKHR() { var self: VkImageSwapchainCreateInfoKHR;"
" self.sType = VkStructureType.IMAGE_SWAPCHAIN_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkImageSwapchainCreateInfoKHR explicit) { return VkStructureType.IMAGE_SWAPCHAIN_CREATE_INFO_KHR; }\n"
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if defined(VK_EXT_astc_decode_mode)
"def VkImageViewASTCDecodeModeEXT() { var self: VkImageViewASTCDecodeModeEXT;"
" self.sType = VkStructureType.IMAGE_VIEW_ASTC_DECODE_MODE_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageViewASTCDecodeModeEXT explicit) { return VkStructureType.IMAGE_VIEW_ASTC_DECODE_MODE_EXT; }\n"
#endif /* defined(VK_EXT_astc_decode_mode) */
#if defined(VK_NVX_image_view_handle)
"def VkImageViewAddressPropertiesNVX() { var self: VkImageViewAddressPropertiesNVX;"
" self.sType = VkStructureType.IMAGE_VIEW_ADDRESS_PROPERTIES_NVX;"
" return <- self; }\n"
"def struct_type(t: VkImageViewAddressPropertiesNVX explicit) { return VkStructureType.IMAGE_VIEW_ADDRESS_PROPERTIES_NVX; }\n"
#endif /* defined(VK_NVX_image_view_handle) */
#if defined(VK_EXT_descriptor_buffer)
"def VkImageViewCaptureDescriptorDataInfoEXT() { var self: VkImageViewCaptureDescriptorDataInfoEXT;"
" self.sType = VkStructureType.IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageViewCaptureDescriptorDataInfoEXT explicit) { return VkStructureType.IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT; }\n"
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_0)
"def VkImageViewCreateInfo() { var self: VkImageViewCreateInfo;"
" self.sType = VkStructureType.IMAGE_VIEW_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkImageViewCreateInfo explicit) { return VkStructureType.IMAGE_VIEW_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NVX_image_view_handle)
"def VkImageViewHandleInfoNVX() { var self: VkImageViewHandleInfoNVX;"
" self.sType = VkStructureType.IMAGE_VIEW_HANDLE_INFO_NVX;"
" return <- self; }\n"
"def struct_type(t: VkImageViewHandleInfoNVX explicit) { return VkStructureType.IMAGE_VIEW_HANDLE_INFO_NVX; }\n"
#endif /* defined(VK_NVX_image_view_handle) */
#if defined(VK_EXT_image_view_min_lod)
"def VkImageViewMinLodCreateInfoEXT() { var self: VkImageViewMinLodCreateInfoEXT;"
" self.sType = VkStructureType.IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageViewMinLodCreateInfoEXT explicit) { return VkStructureType.IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_image_view_min_lod) */
#if defined(VK_QCOM_image_processing)
"def VkImageViewSampleWeightCreateInfoQCOM() { var self: VkImageViewSampleWeightCreateInfoQCOM;"
" self.sType = VkStructureType.IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkImageViewSampleWeightCreateInfoQCOM explicit) { return VkStructureType.IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_image_processing) */
#if defined(VK_EXT_image_sliced_view_of_3d)
"def VkImageViewSlicedCreateInfoEXT() { var self: VkImageViewSlicedCreateInfoEXT;"
" self.sType = VkStructureType.IMAGE_VIEW_SLICED_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImageViewSlicedCreateInfoEXT explicit) { return VkStructureType.IMAGE_VIEW_SLICED_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_image_sliced_view_of_3d) */
#if defined(VK_VERSION_1_1)
"def VkImageViewUsageCreateInfo() { var self: VkImageViewUsageCreateInfo;"
" self.sType = VkStructureType.IMAGE_VIEW_USAGE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkImageViewUsageCreateInfo explicit) { return VkStructureType.IMAGE_VIEW_USAGE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
"def VkImportAndroidHardwareBufferInfoANDROID() { var self: VkImportAndroidHardwareBufferInfoANDROID;"
" self.sType = VkStructureType.IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkImportAndroidHardwareBufferInfoANDROID explicit) { return VkStructureType.IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID; }\n"
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_KHR_external_fence_fd)
"def VkImportFenceFdInfoKHR() { var self: VkImportFenceFdInfoKHR;"
" self.sType = VkStructureType.IMPORT_FENCE_FD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkImportFenceFdInfoKHR explicit) { return VkStructureType.IMPORT_FENCE_FD_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_fence_fd) */
#if defined(VK_KHR_external_fence_win32)
"def VkImportFenceWin32HandleInfoKHR() { var self: VkImportFenceWin32HandleInfoKHR;"
" self.sType = VkStructureType.IMPORT_FENCE_WIN32_HANDLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkImportFenceWin32HandleInfoKHR explicit) { return VkStructureType.IMPORT_FENCE_WIN32_HANDLE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_fence_win32) */
#if defined(VK_FUCHSIA_buffer_collection)
"def VkImportMemoryBufferCollectionFUCHSIA() { var self: VkImportMemoryBufferCollectionFUCHSIA;"
" self.sType = VkStructureType.IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkImportMemoryBufferCollectionFUCHSIA explicit) { return VkStructureType.IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_buffer_collection) */
#if defined(VK_KHR_external_memory_fd)
"def VkImportMemoryFdInfoKHR() { var self: VkImportMemoryFdInfoKHR;"
" self.sType = VkStructureType.IMPORT_MEMORY_FD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkImportMemoryFdInfoKHR explicit) { return VkStructureType.IMPORT_MEMORY_FD_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_memory_fd) */
#if defined(VK_EXT_external_memory_host)
"def VkImportMemoryHostPointerInfoEXT() { var self: VkImportMemoryHostPointerInfoEXT;"
" self.sType = VkStructureType.IMPORT_MEMORY_HOST_POINTER_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImportMemoryHostPointerInfoEXT explicit) { return VkStructureType.IMPORT_MEMORY_HOST_POINTER_INFO_EXT; }\n"
#endif /* defined(VK_EXT_external_memory_host) */
#if defined(VK_KHR_external_memory_win32)
"def VkImportMemoryWin32HandleInfoKHR() { var self: VkImportMemoryWin32HandleInfoKHR;"
" self.sType = VkStructureType.IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkImportMemoryWin32HandleInfoKHR explicit) { return VkStructureType.IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_NV_external_memory_win32)
"def VkImportMemoryWin32HandleInfoNV() { var self: VkImportMemoryWin32HandleInfoNV;"
" self.sType = VkStructureType.IMPORT_MEMORY_WIN32_HANDLE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkImportMemoryWin32HandleInfoNV explicit) { return VkStructureType.IMPORT_MEMORY_WIN32_HANDLE_INFO_NV; }\n"
#endif /* defined(VK_NV_external_memory_win32) */
#if defined(VK_FUCHSIA_external_memory)
"def VkImportMemoryZirconHandleInfoFUCHSIA() { var self: VkImportMemoryZirconHandleInfoFUCHSIA;"
" self.sType = VkStructureType.IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkImportMemoryZirconHandleInfoFUCHSIA explicit) { return VkStructureType.IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_external_memory) */
#if defined(VK_EXT_metal_objects)
"def VkImportMetalBufferInfoEXT() { var self: VkImportMetalBufferInfoEXT;"
" self.sType = VkStructureType.IMPORT_METAL_BUFFER_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImportMetalBufferInfoEXT explicit) { return VkStructureType.IMPORT_METAL_BUFFER_INFO_EXT; }\n"
"def VkImportMetalIOSurfaceInfoEXT() { var self: VkImportMetalIOSurfaceInfoEXT;"
" self.sType = VkStructureType.IMPORT_METAL_IO_SURFACE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImportMetalIOSurfaceInfoEXT explicit) { return VkStructureType.IMPORT_METAL_IO_SURFACE_INFO_EXT; }\n"
"def VkImportMetalSharedEventInfoEXT() { var self: VkImportMetalSharedEventInfoEXT;"
" self.sType = VkStructureType.IMPORT_METAL_SHARED_EVENT_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImportMetalSharedEventInfoEXT explicit) { return VkStructureType.IMPORT_METAL_SHARED_EVENT_INFO_EXT; }\n"
"def VkImportMetalTextureInfoEXT() { var self: VkImportMetalTextureInfoEXT;"
" self.sType = VkStructureType.IMPORT_METAL_TEXTURE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkImportMetalTextureInfoEXT explicit) { return VkStructureType.IMPORT_METAL_TEXTURE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_metal_objects) */
#if defined(VK_QNX_external_memory_screen_buffer)
"def VkImportScreenBufferInfoQNX() { var self: VkImportScreenBufferInfoQNX;"
" self.sType = VkStructureType.IMPORT_SCREEN_BUFFER_INFO_QNX;"
" return <- self; }\n"
"def struct_type(t: VkImportScreenBufferInfoQNX explicit) { return VkStructureType.IMPORT_SCREEN_BUFFER_INFO_QNX; }\n"
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
#if defined(VK_KHR_external_semaphore_fd)
"def VkImportSemaphoreFdInfoKHR() { var self: VkImportSemaphoreFdInfoKHR;"
" self.sType = VkStructureType.IMPORT_SEMAPHORE_FD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkImportSemaphoreFdInfoKHR explicit) { return VkStructureType.IMPORT_SEMAPHORE_FD_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_semaphore_fd) */
#if defined(VK_KHR_external_semaphore_win32)
"def VkImportSemaphoreWin32HandleInfoKHR() { var self: VkImportSemaphoreWin32HandleInfoKHR;"
" self.sType = VkStructureType.IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkImportSemaphoreWin32HandleInfoKHR explicit) { return VkStructureType.IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_FUCHSIA_external_semaphore)
"def VkImportSemaphoreZirconHandleInfoFUCHSIA() { var self: VkImportSemaphoreZirconHandleInfoFUCHSIA;"
" self.sType = VkStructureType.IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkImportSemaphoreZirconHandleInfoFUCHSIA explicit) { return VkStructureType.IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_external_semaphore) */
#if defined(VK_EXT_device_generated_commands)
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_device_generated_commands)
"def VkIndirectCommandsLayoutTokenEXT() { var self: VkIndirectCommandsLayoutTokenEXT;"
" self.sType = VkStructureType.INDIRECT_COMMANDS_LAYOUT_TOKEN_EXT;"
" return <- self; }\n"
"def struct_type(t: VkIndirectCommandsLayoutTokenEXT explicit) { return VkStructureType.INDIRECT_COMMANDS_LAYOUT_TOKEN_EXT; }\n"
"def VkIndirectCommandsLayoutCreateInfoEXT() { var self: VkIndirectCommandsLayoutCreateInfoEXT;"
" self.sType = VkStructureType.INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkIndirectCommandsLayoutCreateInfoEXT explicit) { return VkStructureType.INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
"def VkIndirectCommandsLayoutTokenNV() { var self: VkIndirectCommandsLayoutTokenNV;"
" self.sType = VkStructureType.INDIRECT_COMMANDS_LAYOUT_TOKEN_NV;"
" return <- self; }\n"
"def struct_type(t: VkIndirectCommandsLayoutTokenNV explicit) { return VkStructureType.INDIRECT_COMMANDS_LAYOUT_TOKEN_NV; }\n"
"def VkIndirectCommandsLayoutCreateInfoNV() { var self: VkIndirectCommandsLayoutCreateInfoNV;"
" self.sType = VkStructureType.INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkIndirectCommandsLayoutCreateInfoNV explicit) { return VkStructureType.INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands)
"def VkIndirectExecutionSetPipelineInfoEXT() { var self: VkIndirectExecutionSetPipelineInfoEXT;"
" self.sType = VkStructureType.INDIRECT_EXECUTION_SET_PIPELINE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkIndirectExecutionSetPipelineInfoEXT explicit) { return VkStructureType.INDIRECT_EXECUTION_SET_PIPELINE_INFO_EXT; }\n"
"def VkIndirectExecutionSetShaderLayoutInfoEXT() { var self: VkIndirectExecutionSetShaderLayoutInfoEXT;"
" self.sType = VkStructureType.INDIRECT_EXECUTION_SET_SHADER_LAYOUT_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkIndirectExecutionSetShaderLayoutInfoEXT explicit) { return VkStructureType.INDIRECT_EXECUTION_SET_SHADER_LAYOUT_INFO_EXT; }\n"
"def VkIndirectExecutionSetShaderInfoEXT() { var self: VkIndirectExecutionSetShaderInfoEXT;"
" self.sType = VkStructureType.INDIRECT_EXECUTION_SET_SHADER_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkIndirectExecutionSetShaderInfoEXT explicit) { return VkStructureType.INDIRECT_EXECUTION_SET_SHADER_INFO_EXT; }\n"
"def VkIndirectExecutionSetCreateInfoEXT() { var self: VkIndirectExecutionSetCreateInfoEXT;"
" self.sType = VkStructureType.INDIRECT_EXECUTION_SET_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkIndirectExecutionSetCreateInfoEXT explicit) { return VkStructureType.INDIRECT_EXECUTION_SET_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_INTEL_performance_query)
"def VkInitializePerformanceApiInfoINTEL() { var self: VkInitializePerformanceApiInfoINTEL;"
" self.sType = VkStructureType.INITIALIZE_PERFORMANCE_API_INFO_INTEL;"
" return <- self; }\n"
"def struct_type(t: VkInitializePerformanceApiInfoINTEL explicit) { return VkStructureType.INITIALIZE_PERFORMANCE_API_INFO_INTEL; }\n"
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_VERSION_1_1)
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
"def VkInstanceCreateInfo() { var self: VkInstanceCreateInfo;"
" self.sType = VkStructureType.INSTANCE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkInstanceCreateInfo explicit) { return VkStructureType.INSTANCE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_NV_low_latency2)
"def VkLatencySleepInfoNV() { var self: VkLatencySleepInfoNV;"
" self.sType = VkStructureType.LATENCY_SLEEP_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkLatencySleepInfoNV explicit) { return VkStructureType.LATENCY_SLEEP_INFO_NV; }\n"
"def VkLatencySleepModeInfoNV() { var self: VkLatencySleepModeInfoNV;"
" self.sType = VkStructureType.LATENCY_SLEEP_MODE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkLatencySleepModeInfoNV explicit) { return VkStructureType.LATENCY_SLEEP_MODE_INFO_NV; }\n"
"def VkLatencySubmissionPresentIdNV() { var self: VkLatencySubmissionPresentIdNV;"
" self.sType = VkStructureType.LATENCY_SUBMISSION_PRESENT_ID_NV;"
" return <- self; }\n"
"def struct_type(t: VkLatencySubmissionPresentIdNV explicit) { return VkStructureType.LATENCY_SUBMISSION_PRESENT_ID_NV; }\n"
"def VkLatencySurfaceCapabilitiesNV() { var self: VkLatencySurfaceCapabilitiesNV;"
" self.sType = VkStructureType.LATENCY_SURFACE_CAPABILITIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkLatencySurfaceCapabilitiesNV explicit) { return VkStructureType.LATENCY_SURFACE_CAPABILITIES_NV; }\n"
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_layer_settings)
"def VkLayerSettingsCreateInfoEXT() { var self: VkLayerSettingsCreateInfoEXT;"
" self.sType = VkStructureType.LAYER_SETTINGS_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkLayerSettingsCreateInfoEXT explicit) { return VkStructureType.LAYER_SETTINGS_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_layer_settings) */
#if defined(VK_MVK_macos_surface)
"def VkMacOSSurfaceCreateInfoMVK() { var self: VkMacOSSurfaceCreateInfoMVK;"
" self.sType = VkStructureType.MACOS_SURFACE_CREATE_INFO_MVK;"
" return <- self; }\n"
"def struct_type(t: VkMacOSSurfaceCreateInfoMVK explicit) { return VkStructureType.MACOS_SURFACE_CREATE_INFO_MVK; }\n"
#endif /* defined(VK_MVK_macos_surface) */
#if defined(VK_VERSION_1_0)
"def VkMappedMemoryRange() { var self: VkMappedMemoryRange;"
" self.sType = VkStructureType.MAPPED_MEMORY_RANGE;"
" return <- self; }\n"
"def struct_type(t: VkMappedMemoryRange explicit) { return VkStructureType.MAPPED_MEMORY_RANGE; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkMemoryAllocateFlagsInfo() { var self: VkMemoryAllocateFlagsInfo;"
" self.sType = VkStructureType.MEMORY_ALLOCATE_FLAGS_INFO;"
" return <- self; }\n"
"def struct_type(t: VkMemoryAllocateFlagsInfo explicit) { return VkStructureType.MEMORY_ALLOCATE_FLAGS_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
"def VkMemoryAllocateInfo() { var self: VkMemoryAllocateInfo;"
" self.sType = VkStructureType.MEMORY_ALLOCATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkMemoryAllocateInfo explicit) { return VkStructureType.MEMORY_ALLOCATE_INFO; }\n"
"def VkMemoryBarrier() { var self: VkMemoryBarrier;"
" self.sType = VkStructureType.MEMORY_BARRIER;"
" return <- self; }\n"
"def struct_type(t: VkMemoryBarrier explicit) { return VkStructureType.MEMORY_BARRIER; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkMemoryDedicatedAllocateInfo() { var self: VkMemoryDedicatedAllocateInfo;"
" self.sType = VkStructureType.MEMORY_DEDICATED_ALLOCATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkMemoryDedicatedAllocateInfo explicit) { return VkStructureType.MEMORY_DEDICATED_ALLOCATE_INFO; }\n"
"def VkMemoryDedicatedRequirements() { var self: VkMemoryDedicatedRequirements;"
" self.sType = VkStructureType.MEMORY_DEDICATED_REQUIREMENTS;"
" return <- self; }\n"
"def struct_type(t: VkMemoryDedicatedRequirements explicit) { return VkStructureType.MEMORY_DEDICATED_REQUIREMENTS; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_external_memory_fd)
"def VkMemoryFdPropertiesKHR() { var self: VkMemoryFdPropertiesKHR;"
" self.sType = VkStructureType.MEMORY_FD_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkMemoryFdPropertiesKHR explicit) { return VkStructureType.MEMORY_FD_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_external_memory_fd) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
"def VkMemoryGetAndroidHardwareBufferInfoANDROID() { var self: VkMemoryGetAndroidHardwareBufferInfoANDROID;"
" self.sType = VkStructureType.MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkMemoryGetAndroidHardwareBufferInfoANDROID explicit) { return VkStructureType.MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID; }\n"
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_KHR_external_memory_fd)
"def VkMemoryGetFdInfoKHR() { var self: VkMemoryGetFdInfoKHR;"
" self.sType = VkStructureType.MEMORY_GET_FD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkMemoryGetFdInfoKHR explicit) { return VkStructureType.MEMORY_GET_FD_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_memory_fd) */
#if defined(VK_NV_external_memory_rdma)
"def VkMemoryGetRemoteAddressInfoNV() { var self: VkMemoryGetRemoteAddressInfoNV;"
" self.sType = VkStructureType.MEMORY_GET_REMOTE_ADDRESS_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkMemoryGetRemoteAddressInfoNV explicit) { return VkStructureType.MEMORY_GET_REMOTE_ADDRESS_INFO_NV; }\n"
#endif /* defined(VK_NV_external_memory_rdma) */
#if defined(VK_KHR_external_memory_win32)
"def VkMemoryGetWin32HandleInfoKHR() { var self: VkMemoryGetWin32HandleInfoKHR;"
" self.sType = VkStructureType.MEMORY_GET_WIN32_HANDLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkMemoryGetWin32HandleInfoKHR explicit) { return VkStructureType.MEMORY_GET_WIN32_HANDLE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_FUCHSIA_external_memory)
"def VkMemoryGetZirconHandleInfoFUCHSIA() { var self: VkMemoryGetZirconHandleInfoFUCHSIA;"
" self.sType = VkStructureType.MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkMemoryGetZirconHandleInfoFUCHSIA explicit) { return VkStructureType.MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_external_memory) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_external_memory_host)
"def VkMemoryHostPointerPropertiesEXT() { var self: VkMemoryHostPointerPropertiesEXT;"
" self.sType = VkStructureType.MEMORY_HOST_POINTER_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMemoryHostPointerPropertiesEXT explicit) { return VkStructureType.MEMORY_HOST_POINTER_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_external_memory_host) */
#if defined(VK_VERSION_1_4)
"def VkMemoryMapInfo() { var self: VkMemoryMapInfo;"
" self.sType = VkStructureType.MEMORY_MAP_INFO;"
" return <- self; }\n"
"def struct_type(t: VkMemoryMapInfo explicit) { return VkStructureType.MEMORY_MAP_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_map_memory_placed)
"def VkMemoryMapPlacedInfoEXT() { var self: VkMemoryMapPlacedInfoEXT;"
" self.sType = VkStructureType.MEMORY_MAP_PLACED_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMemoryMapPlacedInfoEXT explicit) { return VkStructureType.MEMORY_MAP_PLACED_INFO_EXT; }\n"
#endif /* defined(VK_EXT_map_memory_placed) */
#if defined(VK_VERSION_1_2)
"def VkMemoryOpaqueCaptureAddressAllocateInfo() { var self: VkMemoryOpaqueCaptureAddressAllocateInfo;"
" self.sType = VkStructureType.MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkMemoryOpaqueCaptureAddressAllocateInfo explicit) { return VkStructureType.MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_memory_priority)
"def VkMemoryPriorityAllocateInfoEXT() { var self: VkMemoryPriorityAllocateInfoEXT;"
" self.sType = VkStructureType.MEMORY_PRIORITY_ALLOCATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMemoryPriorityAllocateInfoEXT explicit) { return VkStructureType.MEMORY_PRIORITY_ALLOCATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_memory_priority) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkMemoryRequirements2() { var self: VkMemoryRequirements2;"
" self.sType = VkStructureType.MEMORY_REQUIREMENTS_2;"
" return <- self; }\n"
"def struct_type(t: VkMemoryRequirements2 explicit) { return VkStructureType.MEMORY_REQUIREMENTS_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_4)
"def VkMemoryUnmapInfo() { var self: VkMemoryUnmapInfo;"
" self.sType = VkStructureType.MEMORY_UNMAP_INFO;"
" return <- self; }\n"
"def struct_type(t: VkMemoryUnmapInfo explicit) { return VkStructureType.MEMORY_UNMAP_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_KHR_external_memory_win32)
"def VkMemoryWin32HandlePropertiesKHR() { var self: VkMemoryWin32HandlePropertiesKHR;"
" self.sType = VkStructureType.MEMORY_WIN32_HANDLE_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkMemoryWin32HandlePropertiesKHR explicit) { return VkStructureType.MEMORY_WIN32_HANDLE_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_FUCHSIA_external_memory)
"def VkMemoryZirconHandlePropertiesFUCHSIA() { var self: VkMemoryZirconHandlePropertiesFUCHSIA;"
" self.sType = VkStructureType.MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkMemoryZirconHandlePropertiesFUCHSIA explicit) { return VkStructureType.MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_external_memory) */
#if defined(VK_EXT_metal_surface)
"def VkMetalSurfaceCreateInfoEXT() { var self: VkMetalSurfaceCreateInfoEXT;"
" self.sType = VkStructureType.METAL_SURFACE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMetalSurfaceCreateInfoEXT explicit) { return VkStructureType.METAL_SURFACE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_metal_surface) */
#if defined(VK_EXT_opacity_micromap)
"def VkMicromapBuildInfoEXT() { var self: VkMicromapBuildInfoEXT;"
" self.sType = VkStructureType.MICROMAP_BUILD_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMicromapBuildInfoEXT explicit) { return VkStructureType.MICROMAP_BUILD_INFO_EXT; }\n"
"def VkMicromapBuildSizesInfoEXT() { var self: VkMicromapBuildSizesInfoEXT;"
" self.sType = VkStructureType.MICROMAP_BUILD_SIZES_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMicromapBuildSizesInfoEXT explicit) { return VkStructureType.MICROMAP_BUILD_SIZES_INFO_EXT; }\n"
"def VkMicromapCreateInfoEXT() { var self: VkMicromapCreateInfoEXT;"
" self.sType = VkStructureType.MICROMAP_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMicromapCreateInfoEXT explicit) { return VkStructureType.MICROMAP_CREATE_INFO_EXT; }\n"
"def VkMicromapVersionInfoEXT() { var self: VkMicromapVersionInfoEXT;"
" self.sType = VkStructureType.MICROMAP_VERSION_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMicromapVersionInfoEXT explicit) { return VkStructureType.MICROMAP_VERSION_INFO_EXT; }\n"
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_EXT_multi_draw)
#endif /* defined(VK_EXT_multi_draw) */
#if defined(VK_EXT_sample_locations)
"def VkMultisamplePropertiesEXT() { var self: VkMultisamplePropertiesEXT;"
" self.sType = VkStructureType.MULTISAMPLE_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMultisamplePropertiesEXT explicit) { return VkStructureType.MULTISAMPLE_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_EXT_multisampled_render_to_single_sampled)
"def VkMultisampledRenderToSingleSampledInfoEXT() { var self: VkMultisampledRenderToSingleSampledInfoEXT;"
" self.sType = VkStructureType.MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMultisampledRenderToSingleSampledInfoEXT explicit) { return VkStructureType.MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT; }\n"
#endif /* defined(VK_EXT_multisampled_render_to_single_sampled) */
#if defined(VK_NVX_multiview_per_view_attributes) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
"def VkMultiviewPerViewAttributesInfoNVX() { var self: VkMultiviewPerViewAttributesInfoNVX;"
" self.sType = VkStructureType.MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX;"
" return <- self; }\n"
"def struct_type(t: VkMultiviewPerViewAttributesInfoNVX explicit) { return VkStructureType.MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX; }\n"
#endif /* defined(VK_NVX_multiview_per_view_attributes) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_QCOM_multiview_per_view_render_areas)
"def VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM() { var self: VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM;"
" self.sType = VkStructureType.MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM explicit) { return VkStructureType.MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_multiview_per_view_render_areas) */
#if defined(VK_EXT_mutable_descriptor_type)
"def VkMutableDescriptorTypeCreateInfoEXT() { var self: VkMutableDescriptorTypeCreateInfoEXT;"
" self.sType = VkStructureType.MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkMutableDescriptorTypeCreateInfoEXT explicit) { return VkStructureType.MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_mutable_descriptor_type) */
#if defined(VK_EXT_descriptor_buffer)
"def VkOpaqueCaptureDescriptorDataCreateInfoEXT() { var self: VkOpaqueCaptureDescriptorDataCreateInfoEXT;"
" self.sType = VkStructureType.OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkOpaqueCaptureDescriptorDataCreateInfoEXT explicit) { return VkStructureType.OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_NV_optical_flow)
"def VkOpticalFlowExecuteInfoNV() { var self: VkOpticalFlowExecuteInfoNV;"
" self.sType = VkStructureType.OPTICAL_FLOW_EXECUTE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkOpticalFlowExecuteInfoNV explicit) { return VkStructureType.OPTICAL_FLOW_EXECUTE_INFO_NV; }\n"
"def VkOpticalFlowImageFormatInfoNV() { var self: VkOpticalFlowImageFormatInfoNV;"
" self.sType = VkStructureType.OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkOpticalFlowImageFormatInfoNV explicit) { return VkStructureType.OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV; }\n"
"def VkOpticalFlowImageFormatPropertiesNV() { var self: VkOpticalFlowImageFormatPropertiesNV;"
" self.sType = VkStructureType.OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkOpticalFlowImageFormatPropertiesNV explicit) { return VkStructureType.OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV; }\n"
"def VkOpticalFlowSessionCreateInfoNV() { var self: VkOpticalFlowSessionCreateInfoNV;"
" self.sType = VkStructureType.OPTICAL_FLOW_SESSION_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkOpticalFlowSessionCreateInfoNV explicit) { return VkStructureType.OPTICAL_FLOW_SESSION_CREATE_INFO_NV; }\n"
"def VkOpticalFlowSessionCreatePrivateDataInfoNV() { var self: VkOpticalFlowSessionCreatePrivateDataInfoNV;"
" self.sType = VkStructureType.OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkOpticalFlowSessionCreatePrivateDataInfoNV explicit) { return VkStructureType.OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV; }\n"
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_NV_low_latency2)
"def VkOutOfBandQueueTypeInfoNV() { var self: VkOutOfBandQueueTypeInfoNV;"
" self.sType = VkStructureType.OUT_OF_BAND_QUEUE_TYPE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkOutOfBandQueueTypeInfoNV explicit) { return VkStructureType.OUT_OF_BAND_QUEUE_TYPE_INFO_NV; }\n"
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_GOOGLE_display_timing)
#endif /* defined(VK_GOOGLE_display_timing) */
#if defined(VK_INTEL_performance_query)
"def VkPerformanceConfigurationAcquireInfoINTEL() { var self: VkPerformanceConfigurationAcquireInfoINTEL;"
" self.sType = VkStructureType.PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL;"
" return <- self; }\n"
"def struct_type(t: VkPerformanceConfigurationAcquireInfoINTEL explicit) { return VkStructureType.PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL; }\n"
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_performance_query)
"def VkPerformanceCounterDescriptionKHR() { var self: VkPerformanceCounterDescriptionKHR;"
" self.sType = VkStructureType.PERFORMANCE_COUNTER_DESCRIPTION_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPerformanceCounterDescriptionKHR explicit) { return VkStructureType.PERFORMANCE_COUNTER_DESCRIPTION_KHR; }\n"
"def VkPerformanceCounterKHR() { var self: VkPerformanceCounterKHR;"
" self.sType = VkStructureType.PERFORMANCE_COUNTER_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPerformanceCounterKHR explicit) { return VkStructureType.PERFORMANCE_COUNTER_KHR; }\n"
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_INTEL_performance_query)
"def VkPerformanceMarkerInfoINTEL() { var self: VkPerformanceMarkerInfoINTEL;"
" self.sType = VkStructureType.PERFORMANCE_MARKER_INFO_INTEL;"
" return <- self; }\n"
"def struct_type(t: VkPerformanceMarkerInfoINTEL explicit) { return VkStructureType.PERFORMANCE_MARKER_INFO_INTEL; }\n"
"def VkPerformanceOverrideInfoINTEL() { var self: VkPerformanceOverrideInfoINTEL;"
" self.sType = VkStructureType.PERFORMANCE_OVERRIDE_INFO_INTEL;"
" return <- self; }\n"
"def struct_type(t: VkPerformanceOverrideInfoINTEL explicit) { return VkStructureType.PERFORMANCE_OVERRIDE_INFO_INTEL; }\n"
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_performance_query) && defined(VKSC_VERSION_1_0)
"def VkPerformanceQueryReservationInfoKHR() { var self: VkPerformanceQueryReservationInfoKHR;"
" self.sType = VkStructureType.PERFORMANCE_QUERY_RESERVATION_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPerformanceQueryReservationInfoKHR explicit) { return VkStructureType.PERFORMANCE_QUERY_RESERVATION_INFO_KHR; }\n"
#endif /* defined(VK_KHR_performance_query) && defined(VKSC_VERSION_1_0) */
#if defined(VK_KHR_performance_query)
"def VkPerformanceQuerySubmitInfoKHR() { var self: VkPerformanceQuerySubmitInfoKHR;"
" self.sType = VkStructureType.PERFORMANCE_QUERY_SUBMIT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPerformanceQuerySubmitInfoKHR explicit) { return VkStructureType.PERFORMANCE_QUERY_SUBMIT_INFO_KHR; }\n"
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_INTEL_performance_query)
"def VkPerformanceStreamMarkerInfoINTEL() { var self: VkPerformanceStreamMarkerInfoINTEL;"
" self.sType = VkStructureType.PERFORMANCE_STREAM_MARKER_INFO_INTEL;"
" return <- self; }\n"
"def struct_type(t: VkPerformanceStreamMarkerInfoINTEL explicit) { return VkStructureType.PERFORMANCE_STREAM_MARKER_INFO_INTEL; }\n"
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDevice16BitStorageFeatures() { var self: VkPhysicalDevice16BitStorageFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevice16BitStorageFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_4444_formats)
"def VkPhysicalDevice4444FormatsFeaturesEXT() { var self: VkPhysicalDevice4444FormatsFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevice4444FormatsFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_4444_formats) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDevice8BitStorageFeatures() { var self: VkPhysicalDevice8BitStorageFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevice8BitStorageFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_astc_decode_mode)
"def VkPhysicalDeviceASTCDecodeFeaturesEXT() { var self: VkPhysicalDeviceASTCDecodeFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceASTCDecodeFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_astc_decode_mode) */
#if defined(VK_KHR_acceleration_structure)
"def VkPhysicalDeviceAccelerationStructureFeaturesKHR() { var self: VkPhysicalDeviceAccelerationStructureFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceAccelerationStructureFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR; }\n"
"def VkPhysicalDeviceAccelerationStructurePropertiesKHR() { var self: VkPhysicalDeviceAccelerationStructurePropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceAccelerationStructurePropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_EXT_device_address_binding_report)
"def VkPhysicalDeviceAddressBindingReportFeaturesEXT() { var self: VkPhysicalDeviceAddressBindingReportFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceAddressBindingReportFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_device_address_binding_report) */
#if defined(VK_SEC_amigo_profiling)
"def VkPhysicalDeviceAmigoProfilingFeaturesSEC() { var self: VkPhysicalDeviceAmigoProfilingFeaturesSEC;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceAmigoProfilingFeaturesSEC explicit) { return VkStructureType.PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC; }\n"
#endif /* defined(VK_SEC_amigo_profiling) */
#if defined(VK_AMD_anti_lag)
"def VkPhysicalDeviceAntiLagFeaturesAMD() { var self: VkPhysicalDeviceAntiLagFeaturesAMD;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceAntiLagFeaturesAMD explicit) { return VkStructureType.PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD; }\n"
#endif /* defined(VK_AMD_anti_lag) */
#if defined(VK_EXT_attachment_feedback_loop_dynamic_state)
"def VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT() { var self: VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_attachment_feedback_loop_dynamic_state) */
#if defined(VK_EXT_attachment_feedback_loop_layout)
"def VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT() { var self: VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_attachment_feedback_loop_layout) */
#if defined(VK_EXT_blend_operation_advanced)
"def VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT() { var self: VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT; }\n"
"def VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT() { var self: VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_EXT_border_color_swizzle)
"def VkPhysicalDeviceBorderColorSwizzleFeaturesEXT() { var self: VkPhysicalDeviceBorderColorSwizzleFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceBorderColorSwizzleFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_border_color_swizzle) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceBufferDeviceAddressFeatures() { var self: VkPhysicalDeviceBufferDeviceAddressFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceBufferDeviceAddressFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_buffer_device_address)
"def VkPhysicalDeviceBufferDeviceAddressFeaturesEXT() { var self: VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceBufferDeviceAddressFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_buffer_device_address) */
#if defined(VK_HUAWEI_cluster_culling_shader)
"def VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI() { var self: VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI explicit) { return VkStructureType.PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI; }\n"
"def VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI() { var self: VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI explicit) { return VkStructureType.PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI; }\n"
"def VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI() { var self: VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI explicit) { return VkStructureType.PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI; }\n"
#endif /* defined(VK_HUAWEI_cluster_culling_shader) */
#if defined(VK_AMD_device_coherent_memory)
"def VkPhysicalDeviceCoherentMemoryFeaturesAMD() { var self: VkPhysicalDeviceCoherentMemoryFeaturesAMD;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCoherentMemoryFeaturesAMD explicit) { return VkStructureType.PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD; }\n"
#endif /* defined(VK_AMD_device_coherent_memory) */
#if defined(VK_EXT_color_write_enable)
"def VkPhysicalDeviceColorWriteEnableFeaturesEXT() { var self: VkPhysicalDeviceColorWriteEnableFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceColorWriteEnableFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_color_write_enable) */
#if defined(VK_NV_command_buffer_inheritance)
"def VkPhysicalDeviceCommandBufferInheritanceFeaturesNV() { var self: VkPhysicalDeviceCommandBufferInheritanceFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCommandBufferInheritanceFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV; }\n"
#endif /* defined(VK_NV_command_buffer_inheritance) */
#if defined(VK_KHR_compute_shader_derivatives)
"def VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR() { var self: VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR; }\n"
"def VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR() { var self: VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_compute_shader_derivatives) */
#if defined(VK_EXT_conditional_rendering)
"def VkPhysicalDeviceConditionalRenderingFeaturesEXT() { var self: VkPhysicalDeviceConditionalRenderingFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceConditionalRenderingFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_EXT_conservative_rasterization)
"def VkPhysicalDeviceConservativeRasterizationPropertiesEXT() { var self: VkPhysicalDeviceConservativeRasterizationPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceConservativeRasterizationPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_conservative_rasterization) */
#if defined(VK_NV_cooperative_matrix2)
"def VkPhysicalDeviceCooperativeMatrix2FeaturesNV() { var self: VkPhysicalDeviceCooperativeMatrix2FeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCooperativeMatrix2FeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV; }\n"
"def VkPhysicalDeviceCooperativeMatrix2PropertiesNV() { var self: VkPhysicalDeviceCooperativeMatrix2PropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCooperativeMatrix2PropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_cooperative_matrix2) */
#if defined(VK_KHR_cooperative_matrix)
"def VkPhysicalDeviceCooperativeMatrixFeaturesKHR() { var self: VkPhysicalDeviceCooperativeMatrixFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCooperativeMatrixFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_cooperative_matrix) */
#if defined(VK_NV_cooperative_matrix)
"def VkPhysicalDeviceCooperativeMatrixFeaturesNV() { var self: VkPhysicalDeviceCooperativeMatrixFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCooperativeMatrixFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV; }\n"
#endif /* defined(VK_NV_cooperative_matrix) */
#if defined(VK_KHR_cooperative_matrix)
"def VkPhysicalDeviceCooperativeMatrixPropertiesKHR() { var self: VkPhysicalDeviceCooperativeMatrixPropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCooperativeMatrixPropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_cooperative_matrix) */
#if defined(VK_NV_cooperative_matrix)
"def VkPhysicalDeviceCooperativeMatrixPropertiesNV() { var self: VkPhysicalDeviceCooperativeMatrixPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCooperativeMatrixPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_cooperative_matrix) */
#if defined(VK_NV_copy_memory_indirect)
"def VkPhysicalDeviceCopyMemoryIndirectFeaturesNV() { var self: VkPhysicalDeviceCopyMemoryIndirectFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCopyMemoryIndirectFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV; }\n"
"def VkPhysicalDeviceCopyMemoryIndirectPropertiesNV() { var self: VkPhysicalDeviceCopyMemoryIndirectPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCopyMemoryIndirectPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_copy_memory_indirect) */
#if defined(VK_NV_corner_sampled_image)
"def VkPhysicalDeviceCornerSampledImageFeaturesNV() { var self: VkPhysicalDeviceCornerSampledImageFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCornerSampledImageFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV; }\n"
#endif /* defined(VK_NV_corner_sampled_image) */
#if defined(VK_NV_coverage_reduction_mode)
"def VkPhysicalDeviceCoverageReductionModeFeaturesNV() { var self: VkPhysicalDeviceCoverageReductionModeFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCoverageReductionModeFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV; }\n"
#endif /* defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_QCOM_filter_cubic_clamp)
"def VkPhysicalDeviceCubicClampFeaturesQCOM() { var self: VkPhysicalDeviceCubicClampFeaturesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCubicClampFeaturesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM; }\n"
#endif /* defined(VK_QCOM_filter_cubic_clamp) */
#if defined(VK_QCOM_filter_cubic_weights)
"def VkPhysicalDeviceCubicWeightsFeaturesQCOM() { var self: VkPhysicalDeviceCubicWeightsFeaturesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCubicWeightsFeaturesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM; }\n"
#endif /* defined(VK_QCOM_filter_cubic_weights) */
#if defined(VK_NV_cuda_kernel_launch)
"def VkPhysicalDeviceCudaKernelLaunchFeaturesNV() { var self: VkPhysicalDeviceCudaKernelLaunchFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCudaKernelLaunchFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV; }\n"
"def VkPhysicalDeviceCudaKernelLaunchPropertiesNV() { var self: VkPhysicalDeviceCudaKernelLaunchPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCudaKernelLaunchPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_cuda_kernel_launch) */
#if defined(VK_EXT_custom_border_color)
"def VkPhysicalDeviceCustomBorderColorFeaturesEXT() { var self: VkPhysicalDeviceCustomBorderColorFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCustomBorderColorFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT; }\n"
"def VkPhysicalDeviceCustomBorderColorPropertiesEXT() { var self: VkPhysicalDeviceCustomBorderColorPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceCustomBorderColorPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_custom_border_color) */
#if defined(VK_NV_dedicated_allocation_image_aliasing)
"def VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV() { var self: VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV; }\n"
#endif /* defined(VK_NV_dedicated_allocation_image_aliasing) */
#if defined(VK_EXT_depth_bias_control)
"def VkPhysicalDeviceDepthBiasControlFeaturesEXT() { var self: VkPhysicalDeviceDepthBiasControlFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDepthBiasControlFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_depth_bias_control) */
#if defined(VK_EXT_depth_clamp_control)
"def VkPhysicalDeviceDepthClampControlFeaturesEXT() { var self: VkPhysicalDeviceDepthClampControlFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDepthClampControlFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_depth_clamp_zero_one)
"def VkPhysicalDeviceDepthClampZeroOneFeaturesEXT() { var self: VkPhysicalDeviceDepthClampZeroOneFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDepthClampZeroOneFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_depth_clamp_zero_one) */
#if defined(VK_EXT_depth_clip_control)
"def VkPhysicalDeviceDepthClipControlFeaturesEXT() { var self: VkPhysicalDeviceDepthClipControlFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDepthClipControlFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_depth_clip_control) */
#if defined(VK_EXT_depth_clip_enable)
"def VkPhysicalDeviceDepthClipEnableFeaturesEXT() { var self: VkPhysicalDeviceDepthClipEnableFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDepthClipEnableFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_depth_clip_enable) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceDepthStencilResolveProperties() { var self: VkPhysicalDeviceDepthStencilResolveProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDepthStencilResolveProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_descriptor_buffer)
"def VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT() { var self: VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT; }\n"
"def VkPhysicalDeviceDescriptorBufferFeaturesEXT() { var self: VkPhysicalDeviceDescriptorBufferFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDescriptorBufferFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT; }\n"
"def VkPhysicalDeviceDescriptorBufferPropertiesEXT() { var self: VkPhysicalDeviceDescriptorBufferPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDescriptorBufferPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceDescriptorIndexingFeatures() { var self: VkPhysicalDeviceDescriptorIndexingFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDescriptorIndexingFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES; }\n"
"def VkPhysicalDeviceDescriptorIndexingProperties() { var self: VkPhysicalDeviceDescriptorIndexingProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDescriptorIndexingProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_NV_descriptor_pool_overallocation)
"def VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV() { var self: VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV; }\n"
#endif /* defined(VK_NV_descriptor_pool_overallocation) */
#if defined(VK_VALVE_descriptor_set_host_mapping)
"def VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE() { var self: VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE explicit) { return VkStructureType.PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE; }\n"
#endif /* defined(VK_VALVE_descriptor_set_host_mapping) */
#if defined(VK_NV_device_generated_commands_compute)
"def VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV() { var self: VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV; }\n"
#endif /* defined(VK_NV_device_generated_commands_compute) */
#if defined(VK_EXT_device_generated_commands)
"def VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT() { var self: VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
"def VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV() { var self: VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV; }\n"
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands)
"def VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT() { var self: VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_NV_device_generated_commands)
"def VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV() { var self: VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_device_memory_report)
"def VkPhysicalDeviceDeviceMemoryReportFeaturesEXT() { var self: VkPhysicalDeviceDeviceMemoryReportFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDeviceMemoryReportFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_device_memory_report) */
#if defined(VK_NV_device_diagnostics_config)
"def VkPhysicalDeviceDiagnosticsConfigFeaturesNV() { var self: VkPhysicalDeviceDiagnosticsConfigFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDiagnosticsConfigFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV; }\n"
#endif /* defined(VK_NV_device_diagnostics_config) */
#if defined(VK_EXT_discard_rectangles)
"def VkPhysicalDeviceDiscardRectanglePropertiesEXT() { var self: VkPhysicalDeviceDiscardRectanglePropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDiscardRectanglePropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_discard_rectangles) */
#if defined(VK_NV_displacement_micromap)
"def VkPhysicalDeviceDisplacementMicromapFeaturesNV() { var self: VkPhysicalDeviceDisplacementMicromapFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDisplacementMicromapFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV; }\n"
"def VkPhysicalDeviceDisplacementMicromapPropertiesNV() { var self: VkPhysicalDeviceDisplacementMicromapPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDisplacementMicromapPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_displacement_micromap) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceDriverProperties() { var self: VkPhysicalDeviceDriverProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DRIVER_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDriverProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_DRIVER_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_physical_device_drm)
"def VkPhysicalDeviceDrmPropertiesEXT() { var self: VkPhysicalDeviceDrmPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DRM_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDrmPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DRM_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_physical_device_drm) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceDynamicRenderingFeatures() { var self: VkPhysicalDeviceDynamicRenderingFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDynamicRenderingFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceDynamicRenderingLocalReadFeatures() { var self: VkPhysicalDeviceDynamicRenderingLocalReadFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDynamicRenderingLocalReadFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_dynamic_rendering_unused_attachments)
"def VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT() { var self: VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_dynamic_rendering_unused_attachments) */
#if defined(VK_NV_scissor_exclusive)
"def VkPhysicalDeviceExclusiveScissorFeaturesNV() { var self: VkPhysicalDeviceExclusiveScissorFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExclusiveScissorFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV; }\n"
#endif /* defined(VK_NV_scissor_exclusive) */
#if defined(VK_EXT_extended_dynamic_state2)
"def VkPhysicalDeviceExtendedDynamicState2FeaturesEXT() { var self: VkPhysicalDeviceExtendedDynamicState2FeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExtendedDynamicState2FeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_extended_dynamic_state2) */
#if defined(VK_EXT_extended_dynamic_state3)
"def VkPhysicalDeviceExtendedDynamicState3FeaturesEXT() { var self: VkPhysicalDeviceExtendedDynamicState3FeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExtendedDynamicState3FeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT; }\n"
"def VkPhysicalDeviceExtendedDynamicState3PropertiesEXT() { var self: VkPhysicalDeviceExtendedDynamicState3PropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExtendedDynamicState3PropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_extended_dynamic_state3) */
#if defined(VK_EXT_extended_dynamic_state)
"def VkPhysicalDeviceExtendedDynamicStateFeaturesEXT() { var self: VkPhysicalDeviceExtendedDynamicStateFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExtendedDynamicStateFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_extended_dynamic_state) */
#if defined(VK_NV_extended_sparse_address_space)
"def VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV() { var self: VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV; }\n"
"def VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV() { var self: VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_extended_sparse_address_space) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceExternalBufferInfo() { var self: VkPhysicalDeviceExternalBufferInfo;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExternalBufferInfo explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO; }\n"
"def VkPhysicalDeviceExternalFenceInfo() { var self: VkPhysicalDeviceExternalFenceInfo;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExternalFenceInfo explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_ANDROID_external_format_resolve)
"def VkPhysicalDeviceExternalFormatResolveFeaturesANDROID() { var self: VkPhysicalDeviceExternalFormatResolveFeaturesANDROID;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExternalFormatResolveFeaturesANDROID explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID; }\n"
"def VkPhysicalDeviceExternalFormatResolvePropertiesANDROID() { var self: VkPhysicalDeviceExternalFormatResolvePropertiesANDROID;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExternalFormatResolvePropertiesANDROID explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID; }\n"
#endif /* defined(VK_ANDROID_external_format_resolve) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceExternalImageFormatInfo() { var self: VkPhysicalDeviceExternalImageFormatInfo;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExternalImageFormatInfo explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_external_memory_host)
"def VkPhysicalDeviceExternalMemoryHostPropertiesEXT() { var self: VkPhysicalDeviceExternalMemoryHostPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExternalMemoryHostPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_external_memory_host) */
#if defined(VK_NV_external_memory_rdma)
"def VkPhysicalDeviceExternalMemoryRDMAFeaturesNV() { var self: VkPhysicalDeviceExternalMemoryRDMAFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExternalMemoryRDMAFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV; }\n"
#endif /* defined(VK_NV_external_memory_rdma) */
#if defined(VK_QNX_external_memory_screen_buffer)
"def VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX() { var self: VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX; }\n"
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceExternalSemaphoreInfo() { var self: VkPhysicalDeviceExternalSemaphoreInfo;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceExternalSemaphoreInfo explicit) { return VkStructureType.PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_device_fault)
"def VkPhysicalDeviceFaultFeaturesEXT() { var self: VkPhysicalDeviceFaultFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FAULT_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFaultFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_FAULT_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_device_fault) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceFeatures2() { var self: VkPhysicalDeviceFeatures2;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FEATURES_2;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFeatures2 explicit) { return VkStructureType.PHYSICAL_DEVICE_FEATURES_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceFloatControlsProperties() { var self: VkPhysicalDeviceFloatControlsProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFloatControlsProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_fragment_density_map2)
"def VkPhysicalDeviceFragmentDensityMap2FeaturesEXT() { var self: VkPhysicalDeviceFragmentDensityMap2FeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentDensityMap2FeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT; }\n"
"def VkPhysicalDeviceFragmentDensityMap2PropertiesEXT() { var self: VkPhysicalDeviceFragmentDensityMap2PropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentDensityMap2PropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_fragment_density_map2) */
#if defined(VK_EXT_fragment_density_map)
"def VkPhysicalDeviceFragmentDensityMapFeaturesEXT() { var self: VkPhysicalDeviceFragmentDensityMapFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentDensityMapFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_QCOM_fragment_density_map_offset)
"def VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM() { var self: VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM; }\n"
"def VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM() { var self: VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM; }\n"
#endif /* defined(VK_QCOM_fragment_density_map_offset) */
#if defined(VK_EXT_fragment_density_map)
"def VkPhysicalDeviceFragmentDensityMapPropertiesEXT() { var self: VkPhysicalDeviceFragmentDensityMapPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentDensityMapPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_KHR_fragment_shader_barycentric)
"def VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR() { var self: VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR; }\n"
"def VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR() { var self: VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_fragment_shader_barycentric) */
#if defined(VK_EXT_fragment_shader_interlock)
"def VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT() { var self: VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_fragment_shader_interlock) */
#if defined(VK_NV_fragment_shading_rate_enums)
"def VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV() { var self: VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV; }\n"
"def VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV() { var self: VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_fragment_shading_rate_enums) */
#if defined(VK_KHR_fragment_shading_rate)
"def VkPhysicalDeviceFragmentShadingRateFeaturesKHR() { var self: VkPhysicalDeviceFragmentShadingRateFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentShadingRateFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR; }\n"
"def VkPhysicalDeviceFragmentShadingRateKHR() { var self: VkPhysicalDeviceFragmentShadingRateKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentShadingRateKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR; }\n"
"def VkPhysicalDeviceFragmentShadingRatePropertiesKHR() { var self: VkPhysicalDeviceFragmentShadingRatePropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFragmentShadingRatePropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_EXT_frame_boundary)
"def VkPhysicalDeviceFrameBoundaryFeaturesEXT() { var self: VkPhysicalDeviceFrameBoundaryFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceFrameBoundaryFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_frame_boundary) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceGlobalPriorityQueryFeatures() { var self: VkPhysicalDeviceGlobalPriorityQueryFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceGlobalPriorityQueryFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_graphics_pipeline_library)
"def VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT() { var self: VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT; }\n"
"def VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT() { var self: VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_graphics_pipeline_library) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceGroupProperties() { var self: VkPhysicalDeviceGroupProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_GROUP_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceGroupProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_GROUP_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_HUAWEI_hdr_vivid)
"def VkPhysicalDeviceHdrVividFeaturesHUAWEI() { var self: VkPhysicalDeviceHdrVividFeaturesHUAWEI;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceHdrVividFeaturesHUAWEI explicit) { return VkStructureType.PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI; }\n"
#endif /* defined(VK_HUAWEI_hdr_vivid) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceHostImageCopyFeatures() { var self: VkPhysicalDeviceHostImageCopyFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceHostImageCopyFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES; }\n"
"def VkPhysicalDeviceHostImageCopyProperties() { var self: VkPhysicalDeviceHostImageCopyProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceHostImageCopyProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceHostQueryResetFeatures() { var self: VkPhysicalDeviceHostQueryResetFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceHostQueryResetFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceIDProperties() { var self: VkPhysicalDeviceIDProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ID_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceIDProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_ID_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_image_2d_view_of_3d)
"def VkPhysicalDeviceImage2DViewOf3DFeaturesEXT() { var self: VkPhysicalDeviceImage2DViewOf3DFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImage2DViewOf3DFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_image_2d_view_of_3d) */
#if defined(VK_MESA_image_alignment_control)
"def VkPhysicalDeviceImageAlignmentControlFeaturesMESA() { var self: VkPhysicalDeviceImageAlignmentControlFeaturesMESA;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageAlignmentControlFeaturesMESA explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA; }\n"
"def VkPhysicalDeviceImageAlignmentControlPropertiesMESA() { var self: VkPhysicalDeviceImageAlignmentControlPropertiesMESA;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageAlignmentControlPropertiesMESA explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA; }\n"
#endif /* defined(VK_MESA_image_alignment_control) */
#if defined(VK_EXT_image_compression_control)
"def VkPhysicalDeviceImageCompressionControlFeaturesEXT() { var self: VkPhysicalDeviceImageCompressionControlFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageCompressionControlFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_image_compression_control) */
#if defined(VK_EXT_image_compression_control_swapchain)
"def VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT() { var self: VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_image_compression_control_swapchain) */
#if defined(VK_EXT_image_drm_format_modifier)
"def VkPhysicalDeviceImageDrmFormatModifierInfoEXT() { var self: VkPhysicalDeviceImageDrmFormatModifierInfoEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageDrmFormatModifierInfoEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT; }\n"
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceImageFormatInfo2() { var self: VkPhysicalDeviceImageFormatInfo2;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageFormatInfo2 explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_QCOM_image_processing2)
"def VkPhysicalDeviceImageProcessing2FeaturesQCOM() { var self: VkPhysicalDeviceImageProcessing2FeaturesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageProcessing2FeaturesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM; }\n"
"def VkPhysicalDeviceImageProcessing2PropertiesQCOM() { var self: VkPhysicalDeviceImageProcessing2PropertiesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageProcessing2PropertiesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM; }\n"
#endif /* defined(VK_QCOM_image_processing2) */
#if defined(VK_QCOM_image_processing)
"def VkPhysicalDeviceImageProcessingFeaturesQCOM() { var self: VkPhysicalDeviceImageProcessingFeaturesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageProcessingFeaturesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM; }\n"
"def VkPhysicalDeviceImageProcessingPropertiesQCOM() { var self: VkPhysicalDeviceImageProcessingPropertiesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageProcessingPropertiesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM; }\n"
#endif /* defined(VK_QCOM_image_processing) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceImageRobustnessFeatures() { var self: VkPhysicalDeviceImageRobustnessFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageRobustnessFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_image_sliced_view_of_3d)
"def VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT() { var self: VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_image_sliced_view_of_3d) */
#if defined(VK_EXT_filter_cubic)
"def VkPhysicalDeviceImageViewImageFormatInfoEXT() { var self: VkPhysicalDeviceImageViewImageFormatInfoEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageViewImageFormatInfoEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT; }\n"
#endif /* defined(VK_EXT_filter_cubic) */
#if defined(VK_EXT_image_view_min_lod)
"def VkPhysicalDeviceImageViewMinLodFeaturesEXT() { var self: VkPhysicalDeviceImageViewMinLodFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImageViewMinLodFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_image_view_min_lod) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceImagelessFramebufferFeatures() { var self: VkPhysicalDeviceImagelessFramebufferFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceImagelessFramebufferFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceIndexTypeUint8Features() { var self: VkPhysicalDeviceIndexTypeUint8Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceIndexTypeUint8Features explicit) { return VkStructureType.PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_inherited_viewport_scissor)
"def VkPhysicalDeviceInheritedViewportScissorFeaturesNV() { var self: VkPhysicalDeviceInheritedViewportScissorFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceInheritedViewportScissorFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV; }\n"
#endif /* defined(VK_NV_inherited_viewport_scissor) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceInlineUniformBlockFeatures() { var self: VkPhysicalDeviceInlineUniformBlockFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceInlineUniformBlockFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES; }\n"
"def VkPhysicalDeviceInlineUniformBlockProperties() { var self: VkPhysicalDeviceInlineUniformBlockProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceInlineUniformBlockProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_HUAWEI_invocation_mask)
"def VkPhysicalDeviceInvocationMaskFeaturesHUAWEI() { var self: VkPhysicalDeviceInvocationMaskFeaturesHUAWEI;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceInvocationMaskFeaturesHUAWEI explicit) { return VkStructureType.PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI; }\n"
#endif /* defined(VK_HUAWEI_invocation_mask) */
#if defined(VK_KHR_maintenance7)
"def VkPhysicalDeviceLayeredApiPropertiesKHR() { var self: VkPhysicalDeviceLayeredApiPropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLayeredApiPropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR; }\n"
"def VkPhysicalDeviceLayeredApiPropertiesListKHR() { var self: VkPhysicalDeviceLayeredApiPropertiesListKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLayeredApiPropertiesListKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR; }\n"
#endif /* defined(VK_KHR_maintenance7) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceProperties2() { var self: VkPhysicalDeviceProperties2;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PROPERTIES_2;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceProperties2 explicit) { return VkStructureType.PHYSICAL_DEVICE_PROPERTIES_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_maintenance7)
"def VkPhysicalDeviceLayeredApiVulkanPropertiesKHR() { var self: VkPhysicalDeviceLayeredApiVulkanPropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLayeredApiVulkanPropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_maintenance7) */
#if defined(VK_MSFT_layered_driver)
"def VkPhysicalDeviceLayeredDriverPropertiesMSFT() { var self: VkPhysicalDeviceLayeredDriverPropertiesMSFT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLayeredDriverPropertiesMSFT explicit) { return VkStructureType.PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT; }\n"
#endif /* defined(VK_MSFT_layered_driver) */
#if defined(VK_EXT_legacy_dithering)
"def VkPhysicalDeviceLegacyDitheringFeaturesEXT() { var self: VkPhysicalDeviceLegacyDitheringFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLegacyDitheringFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_legacy_dithering) */
#if defined(VK_EXT_legacy_vertex_attributes)
"def VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT() { var self: VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT; }\n"
"def VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT() { var self: VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_legacy_vertex_attributes) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceLineRasterizationFeatures() { var self: VkPhysicalDeviceLineRasterizationFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLineRasterizationFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES; }\n"
"def VkPhysicalDeviceLineRasterizationProperties() { var self: VkPhysicalDeviceLineRasterizationProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLineRasterizationProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_linear_color_attachment)
"def VkPhysicalDeviceLinearColorAttachmentFeaturesNV() { var self: VkPhysicalDeviceLinearColorAttachmentFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceLinearColorAttachmentFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV; }\n"
#endif /* defined(VK_NV_linear_color_attachment) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceMaintenance3Properties() { var self: VkPhysicalDeviceMaintenance3Properties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMaintenance3Properties explicit) { return VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceMaintenance4Features() { var self: VkPhysicalDeviceMaintenance4Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMaintenance4Features explicit) { return VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES; }\n"
"def VkPhysicalDeviceMaintenance4Properties() { var self: VkPhysicalDeviceMaintenance4Properties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMaintenance4Properties explicit) { return VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceMaintenance5Features() { var self: VkPhysicalDeviceMaintenance5Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMaintenance5Features explicit) { return VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES; }\n"
"def VkPhysicalDeviceMaintenance5Properties() { var self: VkPhysicalDeviceMaintenance5Properties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMaintenance5Properties explicit) { return VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES; }\n"
"def VkPhysicalDeviceMaintenance6Features() { var self: VkPhysicalDeviceMaintenance6Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMaintenance6Features explicit) { return VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES; }\n"
"def VkPhysicalDeviceMaintenance6Properties() { var self: VkPhysicalDeviceMaintenance6Properties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMaintenance6Properties explicit) { return VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_KHR_maintenance7)
"def VkPhysicalDeviceMaintenance7FeaturesKHR() { var self: VkPhysicalDeviceMaintenance7FeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMaintenance7FeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR; }\n"
"def VkPhysicalDeviceMaintenance7PropertiesKHR() { var self: VkPhysicalDeviceMaintenance7PropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMaintenance7PropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_maintenance7) */
#if defined(VK_EXT_map_memory_placed)
"def VkPhysicalDeviceMapMemoryPlacedFeaturesEXT() { var self: VkPhysicalDeviceMapMemoryPlacedFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMapMemoryPlacedFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT; }\n"
"def VkPhysicalDeviceMapMemoryPlacedPropertiesEXT() { var self: VkPhysicalDeviceMapMemoryPlacedPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMapMemoryPlacedPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_map_memory_placed) */
#if defined(VK_EXT_memory_budget)
"def VkPhysicalDeviceMemoryBudgetPropertiesEXT() { var self: VkPhysicalDeviceMemoryBudgetPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMemoryBudgetPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_memory_budget) */
#if defined(VK_NV_memory_decompression)
"def VkPhysicalDeviceMemoryDecompressionFeaturesNV() { var self: VkPhysicalDeviceMemoryDecompressionFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMemoryDecompressionFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV; }\n"
"def VkPhysicalDeviceMemoryDecompressionPropertiesNV() { var self: VkPhysicalDeviceMemoryDecompressionPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMemoryDecompressionPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_memory_decompression) */
#if defined(VK_EXT_memory_priority)
"def VkPhysicalDeviceMemoryPriorityFeaturesEXT() { var self: VkPhysicalDeviceMemoryPriorityFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMemoryPriorityFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_memory_priority) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceMemoryProperties2() { var self: VkPhysicalDeviceMemoryProperties2;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMemoryProperties2 explicit) { return VkStructureType.PHYSICAL_DEVICE_MEMORY_PROPERTIES_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_mesh_shader)
"def VkPhysicalDeviceMeshShaderFeaturesEXT() { var self: VkPhysicalDeviceMeshShaderFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMeshShaderFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_NV_mesh_shader)
"def VkPhysicalDeviceMeshShaderFeaturesNV() { var self: VkPhysicalDeviceMeshShaderFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMeshShaderFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV; }\n"
#endif /* defined(VK_NV_mesh_shader) */
#if defined(VK_EXT_mesh_shader)
"def VkPhysicalDeviceMeshShaderPropertiesEXT() { var self: VkPhysicalDeviceMeshShaderPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMeshShaderPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_mesh_shader) */
#if defined(VK_NV_mesh_shader)
"def VkPhysicalDeviceMeshShaderPropertiesNV() { var self: VkPhysicalDeviceMeshShaderPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMeshShaderPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_mesh_shader) */
#if defined(VK_EXT_multi_draw)
"def VkPhysicalDeviceMultiDrawFeaturesEXT() { var self: VkPhysicalDeviceMultiDrawFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMultiDrawFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT; }\n"
"def VkPhysicalDeviceMultiDrawPropertiesEXT() { var self: VkPhysicalDeviceMultiDrawPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMultiDrawPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_multi_draw) */
#if defined(VK_EXT_multisampled_render_to_single_sampled)
"def VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT() { var self: VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_multisampled_render_to_single_sampled) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceMultiviewFeatures() { var self: VkPhysicalDeviceMultiviewFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMultiviewFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_NVX_multiview_per_view_attributes)
"def VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX() { var self: VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX explicit) { return VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX; }\n"
#endif /* defined(VK_NVX_multiview_per_view_attributes) */
#if defined(VK_QCOM_multiview_per_view_render_areas)
"def VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM() { var self: VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM; }\n"
#endif /* defined(VK_QCOM_multiview_per_view_render_areas) */
#if defined(VK_QCOM_multiview_per_view_viewports)
"def VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM() { var self: VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM; }\n"
#endif /* defined(VK_QCOM_multiview_per_view_viewports) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceMultiviewProperties() { var self: VkPhysicalDeviceMultiviewProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMultiviewProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_mutable_descriptor_type)
"def VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT() { var self: VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_mutable_descriptor_type) */
#if defined(VK_EXT_nested_command_buffer)
"def VkPhysicalDeviceNestedCommandBufferFeaturesEXT() { var self: VkPhysicalDeviceNestedCommandBufferFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceNestedCommandBufferFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT; }\n"
"def VkPhysicalDeviceNestedCommandBufferPropertiesEXT() { var self: VkPhysicalDeviceNestedCommandBufferPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceNestedCommandBufferPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_nested_command_buffer) */
#if defined(VK_EXT_non_seamless_cube_map)
"def VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT() { var self: VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_non_seamless_cube_map) */
#if defined(VK_EXT_opacity_micromap)
"def VkPhysicalDeviceOpacityMicromapFeaturesEXT() { var self: VkPhysicalDeviceOpacityMicromapFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceOpacityMicromapFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT; }\n"
"def VkPhysicalDeviceOpacityMicromapPropertiesEXT() { var self: VkPhysicalDeviceOpacityMicromapPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceOpacityMicromapPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_opacity_micromap) */
#if defined(VK_NV_optical_flow)
"def VkPhysicalDeviceOpticalFlowFeaturesNV() { var self: VkPhysicalDeviceOpticalFlowFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceOpticalFlowFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV; }\n"
"def VkPhysicalDeviceOpticalFlowPropertiesNV() { var self: VkPhysicalDeviceOpticalFlowPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceOpticalFlowPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_optical_flow) */
#if defined(VK_EXT_pci_bus_info)
"def VkPhysicalDevicePCIBusInfoPropertiesEXT() { var self: VkPhysicalDevicePCIBusInfoPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePCIBusInfoPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_pci_bus_info) */
#if defined(VK_EXT_pageable_device_local_memory)
"def VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT() { var self: VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_pageable_device_local_memory) */
#if defined(VK_NV_per_stage_descriptor_set)
"def VkPhysicalDevicePerStageDescriptorSetFeaturesNV() { var self: VkPhysicalDevicePerStageDescriptorSetFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePerStageDescriptorSetFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV; }\n"
#endif /* defined(VK_NV_per_stage_descriptor_set) */
#if defined(VK_KHR_performance_query)
"def VkPhysicalDevicePerformanceQueryFeaturesKHR() { var self: VkPhysicalDevicePerformanceQueryFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePerformanceQueryFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR; }\n"
"def VkPhysicalDevicePerformanceQueryPropertiesKHR() { var self: VkPhysicalDevicePerformanceQueryPropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePerformanceQueryPropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_KHR_pipeline_binary)
"def VkPhysicalDevicePipelineBinaryFeaturesKHR() { var self: VkPhysicalDevicePipelineBinaryFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePipelineBinaryFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR; }\n"
"def VkPhysicalDevicePipelineBinaryPropertiesKHR() { var self: VkPhysicalDevicePipelineBinaryPropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PIPELINE_BINARY_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePipelineBinaryPropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_PIPELINE_BINARY_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDevicePipelineCreationCacheControlFeatures() { var self: VkPhysicalDevicePipelineCreationCacheControlFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePipelineCreationCacheControlFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_KHR_pipeline_executable_properties)
"def VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR() { var self: VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_EXT_pipeline_library_group_handles)
"def VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT() { var self: VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_pipeline_library_group_handles) */
#if defined(VK_EXT_pipeline_properties)
"def VkPhysicalDevicePipelinePropertiesFeaturesEXT() { var self: VkPhysicalDevicePipelinePropertiesFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePipelinePropertiesFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_pipeline_properties) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDevicePipelineProtectedAccessFeatures() { var self: VkPhysicalDevicePipelineProtectedAccessFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePipelineProtectedAccessFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES; }\n"
"def VkPhysicalDevicePipelineRobustnessFeatures() { var self: VkPhysicalDevicePipelineRobustnessFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePipelineRobustnessFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES; }\n"
"def VkPhysicalDevicePipelineRobustnessProperties() { var self: VkPhysicalDevicePipelineRobustnessProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePipelineRobustnessProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDevicePointClippingProperties() { var self: VkPhysicalDevicePointClippingProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePointClippingProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_portability_subset)
"def VkPhysicalDevicePortabilitySubsetFeaturesKHR() { var self: VkPhysicalDevicePortabilitySubsetFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePortabilitySubsetFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR; }\n"
"def VkPhysicalDevicePortabilitySubsetPropertiesKHR() { var self: VkPhysicalDevicePortabilitySubsetPropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePortabilitySubsetPropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_portability_subset) */
#if defined(VK_NV_present_barrier)
"def VkPhysicalDevicePresentBarrierFeaturesNV() { var self: VkPhysicalDevicePresentBarrierFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePresentBarrierFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV; }\n"
#endif /* defined(VK_NV_present_barrier) */
#if defined(VK_KHR_present_id)
"def VkPhysicalDevicePresentIdFeaturesKHR() { var self: VkPhysicalDevicePresentIdFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePresentIdFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_present_id) */
#if defined(VK_EXT_present_mode_fifo_latest_ready)
"def VkPhysicalDevicePresentModeFifoLatestReadyFeaturesEXT() { var self: VkPhysicalDevicePresentModeFifoLatestReadyFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePresentModeFifoLatestReadyFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_present_mode_fifo_latest_ready) */
#if defined(VK_KHR_present_wait)
"def VkPhysicalDevicePresentWaitFeaturesKHR() { var self: VkPhysicalDevicePresentWaitFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePresentWaitFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_present_wait) */
#if defined(VK_EXT_primitive_topology_list_restart)
"def VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT() { var self: VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_primitive_topology_list_restart) */
#if defined(VK_EXT_primitives_generated_query)
"def VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT() { var self: VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_primitives_generated_query) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDevicePrivateDataFeatures() { var self: VkPhysicalDevicePrivateDataFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePrivateDataFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceProtectedMemoryFeatures() { var self: VkPhysicalDeviceProtectedMemoryFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceProtectedMemoryFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES; }\n"
"def VkPhysicalDeviceProtectedMemoryProperties() { var self: VkPhysicalDeviceProtectedMemoryProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceProtectedMemoryProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_provoking_vertex)
"def VkPhysicalDeviceProvokingVertexFeaturesEXT() { var self: VkPhysicalDeviceProvokingVertexFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceProvokingVertexFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT; }\n"
"def VkPhysicalDeviceProvokingVertexPropertiesEXT() { var self: VkPhysicalDeviceProvokingVertexPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceProvokingVertexPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_provoking_vertex) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDevicePushDescriptorProperties() { var self: VkPhysicalDevicePushDescriptorProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDevicePushDescriptorProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_rgba10x6_formats)
"def VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT() { var self: VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_rgba10x6_formats) */
#if defined(VK_EXT_rasterization_order_attachment_access)
"def VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT() { var self: VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_rasterization_order_attachment_access) */
#if defined(VK_NV_raw_access_chains)
"def VkPhysicalDeviceRawAccessChainsFeaturesNV() { var self: VkPhysicalDeviceRawAccessChainsFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRawAccessChainsFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV; }\n"
#endif /* defined(VK_NV_raw_access_chains) */
#if defined(VK_KHR_ray_query)
"def VkPhysicalDeviceRayQueryFeaturesKHR() { var self: VkPhysicalDeviceRayQueryFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayQueryFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_ray_query) */
#if defined(VK_NV_ray_tracing_invocation_reorder)
"def VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV() { var self: VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV; }\n"
"def VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV() { var self: VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_ray_tracing_invocation_reorder) */
#if defined(VK_KHR_ray_tracing_maintenance1)
"def VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR() { var self: VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_ray_tracing_maintenance1) */
#if defined(VK_NV_ray_tracing_motion_blur)
"def VkPhysicalDeviceRayTracingMotionBlurFeaturesNV() { var self: VkPhysicalDeviceRayTracingMotionBlurFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayTracingMotionBlurFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV; }\n"
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_KHR_ray_tracing_pipeline)
"def VkPhysicalDeviceRayTracingPipelineFeaturesKHR() { var self: VkPhysicalDeviceRayTracingPipelineFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayTracingPipelineFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR; }\n"
"def VkPhysicalDeviceRayTracingPipelinePropertiesKHR() { var self: VkPhysicalDeviceRayTracingPipelinePropertiesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayTracingPipelinePropertiesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_ray_tracing_position_fetch)
"def VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR() { var self: VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_ray_tracing_position_fetch) */
#if defined(VK_NV_ray_tracing)
"def VkPhysicalDeviceRayTracingPropertiesNV() { var self: VkPhysicalDeviceRayTracingPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayTracingPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_ray_tracing_validation)
"def VkPhysicalDeviceRayTracingValidationFeaturesNV() { var self: VkPhysicalDeviceRayTracingValidationFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRayTracingValidationFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV; }\n"
#endif /* defined(VK_NV_ray_tracing_validation) */
#if defined(VK_IMG_relaxed_line_rasterization)
"def VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG() { var self: VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG explicit) { return VkStructureType.PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG; }\n"
#endif /* defined(VK_IMG_relaxed_line_rasterization) */
#if defined(VK_ARM_render_pass_striped)
"def VkPhysicalDeviceRenderPassStripedFeaturesARM() { var self: VkPhysicalDeviceRenderPassStripedFeaturesARM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRenderPassStripedFeaturesARM explicit) { return VkStructureType.PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM; }\n"
"def VkPhysicalDeviceRenderPassStripedPropertiesARM() { var self: VkPhysicalDeviceRenderPassStripedPropertiesARM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRenderPassStripedPropertiesARM explicit) { return VkStructureType.PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM; }\n"
#endif /* defined(VK_ARM_render_pass_striped) */
#if defined(VK_NV_representative_fragment_test)
"def VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV() { var self: VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV; }\n"
#endif /* defined(VK_NV_representative_fragment_test) */
#if defined(VK_EXT_robustness2)
"def VkPhysicalDeviceRobustness2FeaturesEXT() { var self: VkPhysicalDeviceRobustness2FeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRobustness2FeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT; }\n"
"def VkPhysicalDeviceRobustness2PropertiesEXT() { var self: VkPhysicalDeviceRobustness2PropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceRobustness2PropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_robustness2) */
#if defined(VK_EXT_sample_locations)
"def VkPhysicalDeviceSampleLocationsPropertiesEXT() { var self: VkPhysicalDeviceSampleLocationsPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSampleLocationsPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceSamplerFilterMinmaxProperties() { var self: VkPhysicalDeviceSamplerFilterMinmaxProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSamplerFilterMinmaxProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceSamplerYcbcrConversionFeatures() { var self: VkPhysicalDeviceSamplerYcbcrConversionFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSamplerYcbcrConversionFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceScalarBlockLayoutFeatures() { var self: VkPhysicalDeviceScalarBlockLayoutFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceScalarBlockLayoutFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_ARM_scheduling_controls)
"def VkPhysicalDeviceSchedulingControlsFeaturesARM() { var self: VkPhysicalDeviceSchedulingControlsFeaturesARM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSchedulingControlsFeaturesARM explicit) { return VkStructureType.PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM; }\n"
"def VkPhysicalDeviceSchedulingControlsPropertiesARM() { var self: VkPhysicalDeviceSchedulingControlsPropertiesARM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSchedulingControlsPropertiesARM explicit) { return VkStructureType.PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM; }\n"
#endif /* defined(VK_ARM_scheduling_controls) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures() { var self: VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_NV_shader_atomic_float16_vector)
"def VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV() { var self: VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV; }\n"
#endif /* defined(VK_NV_shader_atomic_float16_vector) */
#if defined(VK_EXT_shader_atomic_float2)
"def VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT() { var self: VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_shader_atomic_float2) */
#if defined(VK_EXT_shader_atomic_float)
"def VkPhysicalDeviceShaderAtomicFloatFeaturesEXT() { var self: VkPhysicalDeviceShaderAtomicFloatFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderAtomicFloatFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_shader_atomic_float) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceShaderAtomicInt64Features() { var self: VkPhysicalDeviceShaderAtomicInt64Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderAtomicInt64Features explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_KHR_shader_clock)
"def VkPhysicalDeviceShaderClockFeaturesKHR() { var self: VkPhysicalDeviceShaderClockFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderClockFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_shader_clock) */
#if defined(VK_ARM_shader_core_builtins)
"def VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM() { var self: VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM; }\n"
"def VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM() { var self: VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM; }\n"
#endif /* defined(VK_ARM_shader_core_builtins) */
#if defined(VK_AMD_shader_core_properties2)
"def VkPhysicalDeviceShaderCoreProperties2AMD() { var self: VkPhysicalDeviceShaderCoreProperties2AMD;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderCoreProperties2AMD explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD; }\n"
#endif /* defined(VK_AMD_shader_core_properties2) */
#if defined(VK_AMD_shader_core_properties)
"def VkPhysicalDeviceShaderCorePropertiesAMD() { var self: VkPhysicalDeviceShaderCorePropertiesAMD;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderCorePropertiesAMD explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD; }\n"
#endif /* defined(VK_AMD_shader_core_properties) */
#if defined(VK_ARM_shader_core_properties)
"def VkPhysicalDeviceShaderCorePropertiesARM() { var self: VkPhysicalDeviceShaderCorePropertiesARM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderCorePropertiesARM explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM; }\n"
#endif /* defined(VK_ARM_shader_core_properties) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures() { var self: VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceShaderDrawParametersFeatures() { var self: VkPhysicalDeviceShaderDrawParametersFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderDrawParametersFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_AMD_shader_early_and_late_fragment_tests)
"def VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD() { var self: VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD; }\n"
#endif /* defined(VK_AMD_shader_early_and_late_fragment_tests) */
#if defined(VK_AMDX_shader_enqueue)
"def VkPhysicalDeviceShaderEnqueueFeaturesAMDX() { var self: VkPhysicalDeviceShaderEnqueueFeaturesAMDX;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderEnqueueFeaturesAMDX explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX; }\n"
"def VkPhysicalDeviceShaderEnqueuePropertiesAMDX() { var self: VkPhysicalDeviceShaderEnqueuePropertiesAMDX;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderEnqueuePropertiesAMDX explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX; }\n"
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceShaderExpectAssumeFeatures() { var self: VkPhysicalDeviceShaderExpectAssumeFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderExpectAssumeFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceShaderFloat16Int8Features() { var self: VkPhysicalDeviceShaderFloat16Int8Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderFloat16Int8Features explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceShaderFloatControls2Features() { var self: VkPhysicalDeviceShaderFloatControls2Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderFloatControls2Features explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_shader_image_atomic_int64)
"def VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT() { var self: VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_shader_image_atomic_int64) */
#if defined(VK_NV_shader_image_footprint)
"def VkPhysicalDeviceShaderImageFootprintFeaturesNV() { var self: VkPhysicalDeviceShaderImageFootprintFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderImageFootprintFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV; }\n"
#endif /* defined(VK_NV_shader_image_footprint) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceShaderIntegerDotProductFeatures() { var self: VkPhysicalDeviceShaderIntegerDotProductFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderIntegerDotProductFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES; }\n"
"def VkPhysicalDeviceShaderIntegerDotProductProperties() { var self: VkPhysicalDeviceShaderIntegerDotProductProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderIntegerDotProductProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_INTEL_shader_integer_functions2)
"def VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL() { var self: VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL; }\n"
#endif /* defined(VK_INTEL_shader_integer_functions2) */
#if defined(VK_KHR_shader_maximal_reconvergence)
"def VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR() { var self: VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_shader_maximal_reconvergence) */
#if defined(VK_EXT_shader_module_identifier)
"def VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT() { var self: VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT; }\n"
"def VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT() { var self: VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_shader_module_identifier) */
#if defined(VK_EXT_shader_object)
"def VkPhysicalDeviceShaderObjectFeaturesEXT() { var self: VkPhysicalDeviceShaderObjectFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderObjectFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT; }\n"
"def VkPhysicalDeviceShaderObjectPropertiesEXT() { var self: VkPhysicalDeviceShaderObjectPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderObjectPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_KHR_shader_quad_control)
"def VkPhysicalDeviceShaderQuadControlFeaturesKHR() { var self: VkPhysicalDeviceShaderQuadControlFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderQuadControlFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_shader_quad_control) */
#if defined(VK_KHR_shader_relaxed_extended_instruction)
"def VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR() { var self: VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_shader_relaxed_extended_instruction) */
#if defined(VK_EXT_shader_replicated_composites)
"def VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT() { var self: VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_shader_replicated_composites) */
#if defined(VK_NV_shader_sm_builtins)
"def VkPhysicalDeviceShaderSMBuiltinsFeaturesNV() { var self: VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderSMBuiltinsFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV; }\n"
"def VkPhysicalDeviceShaderSMBuiltinsPropertiesNV() { var self: VkPhysicalDeviceShaderSMBuiltinsPropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderSMBuiltinsPropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_shader_sm_builtins) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures() { var self: VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceShaderSubgroupRotateFeatures() { var self: VkPhysicalDeviceShaderSubgroupRotateFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderSubgroupRotateFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_KHR_shader_subgroup_uniform_control_flow)
"def VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR() { var self: VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_shader_subgroup_uniform_control_flow) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceShaderTerminateInvocationFeatures() { var self: VkPhysicalDeviceShaderTerminateInvocationFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderTerminateInvocationFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_shader_tile_image)
"def VkPhysicalDeviceShaderTileImageFeaturesEXT() { var self: VkPhysicalDeviceShaderTileImageFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderTileImageFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT; }\n"
"def VkPhysicalDeviceShaderTileImagePropertiesEXT() { var self: VkPhysicalDeviceShaderTileImagePropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShaderTileImagePropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_shader_tile_image) */
#if defined(VK_NV_shading_rate_image)
"def VkPhysicalDeviceShadingRateImageFeaturesNV() { var self: VkPhysicalDeviceShadingRateImageFeaturesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShadingRateImageFeaturesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV; }\n"
"def VkPhysicalDeviceShadingRateImagePropertiesNV() { var self: VkPhysicalDeviceShadingRateImagePropertiesNV;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceShadingRateImagePropertiesNV explicit) { return VkStructureType.PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceSparseImageFormatInfo2() { var self: VkPhysicalDeviceSparseImageFormatInfo2;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSparseImageFormatInfo2 explicit) { return VkStructureType.PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2; }\n"
"def VkPhysicalDeviceSubgroupProperties() { var self: VkPhysicalDeviceSubgroupProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSubgroupProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_SUBGROUP_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceSubgroupSizeControlFeatures() { var self: VkPhysicalDeviceSubgroupSizeControlFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSubgroupSizeControlFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES; }\n"
"def VkPhysicalDeviceSubgroupSizeControlProperties() { var self: VkPhysicalDeviceSubgroupSizeControlProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSubgroupSizeControlProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_subpass_merge_feedback)
"def VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT() { var self: VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_subpass_merge_feedback) */
#if defined(VK_HUAWEI_subpass_shading)
"def VkPhysicalDeviceSubpassShadingFeaturesHUAWEI() { var self: VkPhysicalDeviceSubpassShadingFeaturesHUAWEI;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSubpassShadingFeaturesHUAWEI explicit) { return VkStructureType.PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI; }\n"
"def VkPhysicalDeviceSubpassShadingPropertiesHUAWEI() { var self: VkPhysicalDeviceSubpassShadingPropertiesHUAWEI;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSubpassShadingPropertiesHUAWEI explicit) { return VkStructureType.PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI; }\n"
#endif /* defined(VK_HUAWEI_subpass_shading) */
#if defined(VK_KHR_get_surface_capabilities2)
"def VkPhysicalDeviceSurfaceInfo2KHR() { var self: VkPhysicalDeviceSurfaceInfo2KHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSurfaceInfo2KHR explicit) { return VkStructureType.PHYSICAL_DEVICE_SURFACE_INFO_2_KHR; }\n"
#endif /* defined(VK_KHR_get_surface_capabilities2) */
#if defined(VK_EXT_swapchain_maintenance1)
"def VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT() { var self: VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_swapchain_maintenance1) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceSynchronization2Features() { var self: VkPhysicalDeviceSynchronization2Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceSynchronization2Features explicit) { return VkStructureType.PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_texel_buffer_alignment)
"def VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT() { var self: VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_texel_buffer_alignment) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceTexelBufferAlignmentProperties() { var self: VkPhysicalDeviceTexelBufferAlignmentProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceTexelBufferAlignmentProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES; }\n"
"def VkPhysicalDeviceTextureCompressionASTCHDRFeatures() { var self: VkPhysicalDeviceTextureCompressionASTCHDRFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceTextureCompressionASTCHDRFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_QCOM_tile_properties)
"def VkPhysicalDeviceTilePropertiesFeaturesQCOM() { var self: VkPhysicalDeviceTilePropertiesFeaturesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceTilePropertiesFeaturesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM; }\n"
#endif /* defined(VK_QCOM_tile_properties) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceTimelineSemaphoreFeatures() { var self: VkPhysicalDeviceTimelineSemaphoreFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceTimelineSemaphoreFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES; }\n"
"def VkPhysicalDeviceTimelineSemaphoreProperties() { var self: VkPhysicalDeviceTimelineSemaphoreProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceTimelineSemaphoreProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceToolProperties() { var self: VkPhysicalDeviceToolProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_TOOL_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceToolProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_TOOL_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_transform_feedback)
"def VkPhysicalDeviceTransformFeedbackFeaturesEXT() { var self: VkPhysicalDeviceTransformFeedbackFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceTransformFeedbackFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT; }\n"
"def VkPhysicalDeviceTransformFeedbackPropertiesEXT() { var self: VkPhysicalDeviceTransformFeedbackPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceTransformFeedbackPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceUniformBufferStandardLayoutFeatures() { var self: VkPhysicalDeviceUniformBufferStandardLayoutFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceUniformBufferStandardLayoutFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
"def VkPhysicalDeviceVariablePointersFeatures() { var self: VkPhysicalDeviceVariablePointersFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVariablePointersFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceVertexAttributeDivisorFeatures() { var self: VkPhysicalDeviceVertexAttributeDivisorFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVertexAttributeDivisorFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES; }\n"
"def VkPhysicalDeviceVertexAttributeDivisorProperties() { var self: VkPhysicalDeviceVertexAttributeDivisorProperties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVertexAttributeDivisorProperties explicit) { return VkStructureType.PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_vertex_attribute_divisor)
"def VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT() { var self: VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT; }\n"
#endif /* defined(VK_EXT_vertex_attribute_divisor) */
#if defined(VK_EXT_vertex_attribute_robustness)
"def VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT() { var self: VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_vertex_attribute_robustness) */
#if defined(VK_EXT_vertex_input_dynamic_state)
"def VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT() { var self: VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_vertex_input_dynamic_state) */
#if defined(VK_KHR_video_encode_av1)
"def VkPhysicalDeviceVideoEncodeAV1FeaturesKHR() { var self: VkPhysicalDeviceVideoEncodeAV1FeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVideoEncodeAV1FeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_queue)
"def VkVideoProfileInfoKHR() { var self: VkVideoProfileInfoKHR;"
" self.sType = VkStructureType.VIDEO_PROFILE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoProfileInfoKHR explicit) { return VkStructureType.VIDEO_PROFILE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_encode_queue)
"def VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR() { var self: VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_encode_quantization_map)
"def VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR() { var self: VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_queue)
"def VkPhysicalDeviceVideoFormatInfoKHR() { var self: VkPhysicalDeviceVideoFormatInfoKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVideoFormatInfoKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_maintenance1)
"def VkPhysicalDeviceVideoMaintenance1FeaturesKHR() { var self: VkPhysicalDeviceVideoMaintenance1FeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVideoMaintenance1FeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_video_maintenance1) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceVulkan11Features() { var self: VkPhysicalDeviceVulkan11Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVulkan11Features explicit) { return VkStructureType.PHYSICAL_DEVICE_VULKAN_1_1_FEATURES; }\n"
"def VkPhysicalDeviceVulkan11Properties() { var self: VkPhysicalDeviceVulkan11Properties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVulkan11Properties explicit) { return VkStructureType.PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES; }\n"
"def VkPhysicalDeviceVulkan12Features() { var self: VkPhysicalDeviceVulkan12Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VULKAN_1_2_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVulkan12Features explicit) { return VkStructureType.PHYSICAL_DEVICE_VULKAN_1_2_FEATURES; }\n"
"def VkPhysicalDeviceVulkan12Properties() { var self: VkPhysicalDeviceVulkan12Properties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVulkan12Properties explicit) { return VkStructureType.PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceVulkan13Features() { var self: VkPhysicalDeviceVulkan13Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VULKAN_1_3_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVulkan13Features explicit) { return VkStructureType.PHYSICAL_DEVICE_VULKAN_1_3_FEATURES; }\n"
"def VkPhysicalDeviceVulkan13Properties() { var self: VkPhysicalDeviceVulkan13Properties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVulkan13Properties explicit) { return VkStructureType.PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
"def VkPhysicalDeviceVulkan14Features() { var self: VkPhysicalDeviceVulkan14Features;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VULKAN_1_4_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVulkan14Features explicit) { return VkStructureType.PHYSICAL_DEVICE_VULKAN_1_4_FEATURES; }\n"
"def VkPhysicalDeviceVulkan14Properties() { var self: VkPhysicalDeviceVulkan14Properties;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVulkan14Properties explicit) { return VkStructureType.PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_2)
"def VkPhysicalDeviceVulkanMemoryModelFeatures() { var self: VkPhysicalDeviceVulkanMemoryModelFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceVulkanMemoryModelFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_KHR_workgroup_memory_explicit_layout)
"def VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR() { var self: VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR explicit) { return VkStructureType.PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR; }\n"
#endif /* defined(VK_KHR_workgroup_memory_explicit_layout) */
#if defined(VK_EXT_ycbcr_2plane_444_formats)
"def VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT() { var self: VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_ycbcr_2plane_444_formats) */
#if defined(VK_QCOM_ycbcr_degamma)
"def VkPhysicalDeviceYcbcrDegammaFeaturesQCOM() { var self: VkPhysicalDeviceYcbcrDegammaFeaturesQCOM;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceYcbcrDegammaFeaturesQCOM explicit) { return VkStructureType.PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM; }\n"
#endif /* defined(VK_QCOM_ycbcr_degamma) */
#if defined(VK_EXT_ycbcr_image_arrays)
"def VkPhysicalDeviceYcbcrImageArraysFeaturesEXT() { var self: VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceYcbcrImageArraysFeaturesEXT explicit) { return VkStructureType.PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_ycbcr_image_arrays) */
#if defined(VK_VERSION_1_3)
"def VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures() { var self: VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;"
" self.sType = VkStructureType.PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES;"
" return <- self; }\n"
"def struct_type(t: VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures explicit) { return VkStructureType.PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_KHR_pipeline_binary)
"def VkPipelineBinaryKeyKHR() { var self: VkPipelineBinaryKeyKHR;"
" self.sType = VkStructureType.PIPELINE_BINARY_KEY_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineBinaryKeyKHR explicit) { return VkStructureType.PIPELINE_BINARY_KEY_KHR; }\n"
"def VkPipelineCreateInfoKHR() { var self: VkPipelineCreateInfoKHR;"
" self.sType = VkStructureType.PIPELINE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineCreateInfoKHR explicit) { return VkStructureType.PIPELINE_CREATE_INFO_KHR; }\n"
"def VkPipelineBinaryCreateInfoKHR() { var self: VkPipelineBinaryCreateInfoKHR;"
" self.sType = VkStructureType.PIPELINE_BINARY_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineBinaryCreateInfoKHR explicit) { return VkStructureType.PIPELINE_BINARY_CREATE_INFO_KHR; }\n"
"def VkPipelineBinaryDataInfoKHR() { var self: VkPipelineBinaryDataInfoKHR;"
" self.sType = VkStructureType.PIPELINE_BINARY_DATA_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineBinaryDataInfoKHR explicit) { return VkStructureType.PIPELINE_BINARY_DATA_INFO_KHR; }\n"
"def VkPipelineBinaryHandlesInfoKHR() { var self: VkPipelineBinaryHandlesInfoKHR;"
" self.sType = VkStructureType.PIPELINE_BINARY_HANDLES_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineBinaryHandlesInfoKHR explicit) { return VkStructureType.PIPELINE_BINARY_HANDLES_INFO_KHR; }\n"
"def VkPipelineBinaryInfoKHR() { var self: VkPipelineBinaryInfoKHR;"
" self.sType = VkStructureType.PIPELINE_BINARY_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineBinaryInfoKHR explicit) { return VkStructureType.PIPELINE_BINARY_INFO_KHR; }\n"
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_VERSION_1_0)
"def VkPipelineCacheCreateInfo() { var self: VkPipelineCacheCreateInfo;"
" self.sType = VkStructureType.PIPELINE_CACHE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineCacheCreateInfo explicit) { return VkStructureType.PIPELINE_CACHE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_blend_operation_advanced)
"def VkPipelineColorBlendAdvancedStateCreateInfoEXT() { var self: VkPipelineColorBlendAdvancedStateCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineColorBlendAdvancedStateCreateInfoEXT explicit) { return VkStructureType.PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_blend_operation_advanced) */
#if defined(VK_EXT_color_write_enable)
"def VkPipelineColorWriteCreateInfoEXT() { var self: VkPipelineColorWriteCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_COLOR_WRITE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineColorWriteCreateInfoEXT explicit) { return VkStructureType.PIPELINE_COLOR_WRITE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_color_write_enable) */
#if defined(VK_AMD_pipeline_compiler_control)
"def VkPipelineCompilerControlCreateInfoAMD() { var self: VkPipelineCompilerControlCreateInfoAMD;"
" self.sType = VkStructureType.PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD;"
" return <- self; }\n"
"def struct_type(t: VkPipelineCompilerControlCreateInfoAMD explicit) { return VkStructureType.PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD; }\n"
#endif /* defined(VK_AMD_pipeline_compiler_control) */
#if defined(VK_NV_framebuffer_mixed_samples)
"def VkPipelineCoverageModulationStateCreateInfoNV() { var self: VkPipelineCoverageModulationStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineCoverageModulationStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_framebuffer_mixed_samples) */
#if defined(VK_NV_coverage_reduction_mode)
"def VkPipelineCoverageReductionStateCreateInfoNV() { var self: VkPipelineCoverageReductionStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineCoverageReductionStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_coverage_reduction_mode) */
#if defined(VK_NV_fragment_coverage_to_color)
"def VkPipelineCoverageToColorStateCreateInfoNV() { var self: VkPipelineCoverageToColorStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineCoverageToColorStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_fragment_coverage_to_color) */
#if defined(VK_VERSION_1_4)
"def VkPipelineCreateFlags2CreateInfo() { var self: VkPipelineCreateFlags2CreateInfo;"
" self.sType = VkStructureType.PIPELINE_CREATE_FLAGS_2_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineCreateFlags2CreateInfo explicit) { return VkStructureType.PIPELINE_CREATE_FLAGS_2_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_3)
"def VkPipelineCreationFeedbackCreateInfo() { var self: VkPipelineCreationFeedbackCreateInfo;"
" self.sType = VkStructureType.PIPELINE_CREATION_FEEDBACK_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineCreationFeedbackCreateInfo explicit) { return VkStructureType.PIPELINE_CREATION_FEEDBACK_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_discard_rectangles)
"def VkPipelineDiscardRectangleStateCreateInfoEXT() { var self: VkPipelineDiscardRectangleStateCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineDiscardRectangleStateCreateInfoEXT explicit) { return VkStructureType.PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_discard_rectangles) */
#if defined(VK_KHR_pipeline_executable_properties)
"def VkPipelineExecutableInfoKHR() { var self: VkPipelineExecutableInfoKHR;"
" self.sType = VkStructureType.PIPELINE_EXECUTABLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineExecutableInfoKHR explicit) { return VkStructureType.PIPELINE_EXECUTABLE_INFO_KHR; }\n"
"def VkPipelineExecutableInternalRepresentationKHR() { var self: VkPipelineExecutableInternalRepresentationKHR;"
" self.sType = VkStructureType.PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineExecutableInternalRepresentationKHR explicit) { return VkStructureType.PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR; }\n"
"def VkPipelineExecutablePropertiesKHR() { var self: VkPipelineExecutablePropertiesKHR;"
" self.sType = VkStructureType.PIPELINE_EXECUTABLE_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineExecutablePropertiesKHR explicit) { return VkStructureType.PIPELINE_EXECUTABLE_PROPERTIES_KHR; }\n"
"def VkPipelineExecutableStatisticKHR() { var self: VkPipelineExecutableStatisticKHR;"
" self.sType = VkStructureType.PIPELINE_EXECUTABLE_STATISTIC_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineExecutableStatisticKHR explicit) { return VkStructureType.PIPELINE_EXECUTABLE_STATISTIC_KHR; }\n"
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_NV_fragment_shading_rate_enums)
"def VkPipelineFragmentShadingRateEnumStateCreateInfoNV() { var self: VkPipelineFragmentShadingRateEnumStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineFragmentShadingRateEnumStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_fragment_shading_rate_enums) */
#if defined(VK_KHR_fragment_shading_rate)
"def VkPipelineFragmentShadingRateStateCreateInfoKHR() { var self: VkPipelineFragmentShadingRateStateCreateInfoKHR;"
" self.sType = VkStructureType.PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineFragmentShadingRateStateCreateInfoKHR explicit) { return VkStructureType.PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_NV_device_generated_commands_compute)
"def VkPipelineIndirectDeviceAddressInfoNV() { var self: VkPipelineIndirectDeviceAddressInfoNV;"
" self.sType = VkStructureType.PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineIndirectDeviceAddressInfoNV explicit) { return VkStructureType.PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV; }\n"
#endif /* defined(VK_NV_device_generated_commands_compute) */
#if defined(VK_KHR_pipeline_executable_properties)
"def VkPipelineInfoKHR() { var self: VkPipelineInfoKHR;"
" self.sType = VkStructureType.PIPELINE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPipelineInfoKHR explicit) { return VkStructureType.PIPELINE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_VERSION_1_0)
"def VkPipelineLayoutCreateInfo() { var self: VkPipelineLayoutCreateInfo;"
" self.sType = VkStructureType.PIPELINE_LAYOUT_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineLayoutCreateInfo explicit) { return VkStructureType.PIPELINE_LAYOUT_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_pipeline_properties)
"def VkPipelinePropertiesIdentifierEXT() { var self: VkPipelinePropertiesIdentifierEXT;"
" self.sType = VkStructureType.PIPELINE_PROPERTIES_IDENTIFIER_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelinePropertiesIdentifierEXT explicit) { return VkStructureType.PIPELINE_PROPERTIES_IDENTIFIER_EXT; }\n"
#endif /* defined(VK_EXT_pipeline_properties) */
#if defined(VK_EXT_conservative_rasterization)
"def VkPipelineRasterizationConservativeStateCreateInfoEXT() { var self: VkPipelineRasterizationConservativeStateCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRasterizationConservativeStateCreateInfoEXT explicit) { return VkStructureType.PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_conservative_rasterization) */
#if defined(VK_EXT_depth_clip_enable)
"def VkPipelineRasterizationDepthClipStateCreateInfoEXT() { var self: VkPipelineRasterizationDepthClipStateCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRasterizationDepthClipStateCreateInfoEXT explicit) { return VkStructureType.PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_depth_clip_enable) */
#if defined(VK_VERSION_1_4)
"def VkPipelineRasterizationLineStateCreateInfo() { var self: VkPipelineRasterizationLineStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRasterizationLineStateCreateInfo explicit) { return VkStructureType.PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_provoking_vertex)
"def VkPipelineRasterizationProvokingVertexStateCreateInfoEXT() { var self: VkPipelineRasterizationProvokingVertexStateCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRasterizationProvokingVertexStateCreateInfoEXT explicit) { return VkStructureType.PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_provoking_vertex) */
#if defined(VK_AMD_rasterization_order)
"def VkPipelineRasterizationStateRasterizationOrderAMD() { var self: VkPipelineRasterizationStateRasterizationOrderAMD;"
" self.sType = VkStructureType.PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRasterizationStateRasterizationOrderAMD explicit) { return VkStructureType.PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD; }\n"
#endif /* defined(VK_AMD_rasterization_order) */
#if defined(VK_EXT_transform_feedback)
"def VkPipelineRasterizationStateStreamCreateInfoEXT() { var self: VkPipelineRasterizationStateStreamCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRasterizationStateStreamCreateInfoEXT explicit) { return VkStructureType.PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_VERSION_1_3)
"def VkPipelineRenderingCreateInfo() { var self: VkPipelineRenderingCreateInfo;"
" self.sType = VkStructureType.PIPELINE_RENDERING_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRenderingCreateInfo explicit) { return VkStructureType.PIPELINE_RENDERING_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_NV_representative_fragment_test)
"def VkPipelineRepresentativeFragmentTestStateCreateInfoNV() { var self: VkPipelineRepresentativeFragmentTestStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRepresentativeFragmentTestStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_representative_fragment_test) */
#if defined(VK_VERSION_1_4)
"def VkPipelineRobustnessCreateInfo() { var self: VkPipelineRobustnessCreateInfo;"
" self.sType = VkStructureType.PIPELINE_ROBUSTNESS_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineRobustnessCreateInfo explicit) { return VkStructureType.PIPELINE_ROBUSTNESS_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_sample_locations)
"def VkPipelineSampleLocationsStateCreateInfoEXT() { var self: VkPipelineSampleLocationsStateCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineSampleLocationsStateCreateInfoEXT explicit) { return VkStructureType.PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_EXT_shader_module_identifier)
"def VkPipelineShaderStageModuleIdentifierCreateInfoEXT() { var self: VkPipelineShaderStageModuleIdentifierCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineShaderStageModuleIdentifierCreateInfoEXT explicit) { return VkStructureType.PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_shader_module_identifier) */
#if defined(VK_AMDX_shader_enqueue)
"def VkPipelineShaderStageNodeCreateInfoAMDX() { var self: VkPipelineShaderStageNodeCreateInfoAMDX;"
" self.sType = VkStructureType.PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX;"
" return <- self; }\n"
"def struct_type(t: VkPipelineShaderStageNodeCreateInfoAMDX explicit) { return VkStructureType.PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX; }\n"
#endif /* defined(VK_AMDX_shader_enqueue) */
#if defined(VK_VERSION_1_3)
"def VkPipelineShaderStageRequiredSubgroupSizeCreateInfo() { var self: VkPipelineShaderStageRequiredSubgroupSizeCreateInfo;"
" self.sType = VkStructureType.PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineShaderStageRequiredSubgroupSizeCreateInfo explicit) { return VkStructureType.PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
"def VkPipelineTessellationDomainOriginStateCreateInfo() { var self: VkPipelineTessellationDomainOriginStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineTessellationDomainOriginStateCreateInfo explicit) { return VkStructureType.PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_4)
"def VkPipelineVertexInputDivisorStateCreateInfo() { var self: VkPipelineVertexInputDivisorStateCreateInfo;"
" self.sType = VkStructureType.PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPipelineVertexInputDivisorStateCreateInfo explicit) { return VkStructureType.PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_shading_rate_image)
"def VkPipelineViewportCoarseSampleOrderStateCreateInfoNV() { var self: VkPipelineViewportCoarseSampleOrderStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineViewportCoarseSampleOrderStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_EXT_depth_clamp_control)
"def VkPipelineViewportDepthClampControlCreateInfoEXT() { var self: VkPipelineViewportDepthClampControlCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_VIEWPORT_DEPTH_CLAMP_CONTROL_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineViewportDepthClampControlCreateInfoEXT explicit) { return VkStructureType.PIPELINE_VIEWPORT_DEPTH_CLAMP_CONTROL_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_depth_clamp_control) */
#if defined(VK_EXT_depth_clip_control)
"def VkPipelineViewportDepthClipControlCreateInfoEXT() { var self: VkPipelineViewportDepthClipControlCreateInfoEXT;"
" self.sType = VkStructureType.PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkPipelineViewportDepthClipControlCreateInfoEXT explicit) { return VkStructureType.PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_depth_clip_control) */
#if defined(VK_NV_scissor_exclusive)
"def VkPipelineViewportExclusiveScissorStateCreateInfoNV() { var self: VkPipelineViewportExclusiveScissorStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineViewportExclusiveScissorStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_scissor_exclusive) */
#if defined(VK_NV_shading_rate_image)
"def VkPipelineViewportShadingRateImageStateCreateInfoNV() { var self: VkPipelineViewportShadingRateImageStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineViewportShadingRateImageStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_shading_rate_image) */
#if defined(VK_NV_viewport_swizzle)
"def VkPipelineViewportSwizzleStateCreateInfoNV() { var self: VkPipelineViewportSwizzleStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineViewportSwizzleStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_viewport_swizzle) */
#if defined(VK_NV_clip_space_w_scaling)
"def VkPipelineViewportWScalingStateCreateInfoNV() { var self: VkPipelineViewportWScalingStateCreateInfoNV;"
" self.sType = VkStructureType.PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkPipelineViewportWScalingStateCreateInfoNV explicit) { return VkStructureType.PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_clip_space_w_scaling) */
#if defined(VK_GGP_frame_token)
"def VkPresentFrameTokenGGP() { var self: VkPresentFrameTokenGGP;"
" self.sType = VkStructureType.PRESENT_FRAME_TOKEN_GGP;"
" return <- self; }\n"
"def struct_type(t: VkPresentFrameTokenGGP explicit) { return VkStructureType.PRESENT_FRAME_TOKEN_GGP; }\n"
#endif /* defined(VK_GGP_frame_token) */
#if defined(VK_KHR_present_id)
"def VkPresentIdKHR() { var self: VkPresentIdKHR;"
" self.sType = VkStructureType.PRESENT_ID_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPresentIdKHR explicit) { return VkStructureType.PRESENT_ID_KHR; }\n"
#endif /* defined(VK_KHR_present_id) */
#if defined(VK_KHR_swapchain)
"def VkPresentInfoKHR() { var self: VkPresentInfoKHR;"
" self.sType = VkStructureType.PRESENT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPresentInfoKHR explicit) { return VkStructureType.PRESENT_INFO_KHR; }\n"
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_KHR_incremental_present)
"def VkPresentRegionsKHR() { var self: VkPresentRegionsKHR;"
" self.sType = VkStructureType.PRESENT_REGIONS_KHR;"
" return <- self; }\n"
"def struct_type(t: VkPresentRegionsKHR explicit) { return VkStructureType.PRESENT_REGIONS_KHR; }\n"
#endif /* defined(VK_KHR_incremental_present) */
#if defined(VK_GOOGLE_display_timing)
"def VkPresentTimesInfoGOOGLE() { var self: VkPresentTimesInfoGOOGLE;"
" self.sType = VkStructureType.PRESENT_TIMES_INFO_GOOGLE;"
" return <- self; }\n"
"def struct_type(t: VkPresentTimesInfoGOOGLE explicit) { return VkStructureType.PRESENT_TIMES_INFO_GOOGLE; }\n"
#endif /* defined(VK_GOOGLE_display_timing) */
#if defined(VK_VERSION_1_3)
"def VkPrivateDataSlotCreateInfo() { var self: VkPrivateDataSlotCreateInfo;"
" self.sType = VkStructureType.PRIVATE_DATA_SLOT_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPrivateDataSlotCreateInfo explicit) { return VkStructureType.PRIVATE_DATA_SLOT_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_1)
"def VkProtectedSubmitInfo() { var self: VkProtectedSubmitInfo;"
" self.sType = VkStructureType.PROTECTED_SUBMIT_INFO;"
" return <- self; }\n"
"def struct_type(t: VkProtectedSubmitInfo explicit) { return VkStructureType.PROTECTED_SUBMIT_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_4)
"def VkPushConstantsInfo() { var self: VkPushConstantsInfo;"
" self.sType = VkStructureType.PUSH_CONSTANTS_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPushConstantsInfo explicit) { return VkStructureType.PUSH_CONSTANTS_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_0)
"def VkWriteDescriptorSet() { var self: VkWriteDescriptorSet;"
" self.sType = VkStructureType.WRITE_DESCRIPTOR_SET;"
" return <- self; }\n"
"def struct_type(t: VkWriteDescriptorSet explicit) { return VkStructureType.WRITE_DESCRIPTOR_SET; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_4)
"def VkPushDescriptorSetInfo() { var self: VkPushDescriptorSetInfo;"
" self.sType = VkStructureType.PUSH_DESCRIPTOR_SET_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPushDescriptorSetInfo explicit) { return VkStructureType.PUSH_DESCRIPTOR_SET_INFO; }\n"
"def VkPushDescriptorSetWithTemplateInfo() { var self: VkPushDescriptorSetWithTemplateInfo;"
" self.sType = VkStructureType.PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkPushDescriptorSetWithTemplateInfo explicit) { return VkStructureType.PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_NV_low_latency)
"def VkQueryLowLatencySupportNV() { var self: VkQueryLowLatencySupportNV;"
" self.sType = VkStructureType.QUERY_LOW_LATENCY_SUPPORT_NV;"
" return <- self; }\n"
"def struct_type(t: VkQueryLowLatencySupportNV explicit) { return VkStructureType.QUERY_LOW_LATENCY_SUPPORT_NV; }\n"
#endif /* defined(VK_NV_low_latency) */
#if defined(VK_VERSION_1_0)
"def VkQueryPoolCreateInfo() { var self: VkQueryPoolCreateInfo;"
" self.sType = VkStructureType.QUERY_POOL_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkQueryPoolCreateInfo explicit) { return VkStructureType.QUERY_POOL_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_performance_query)
"def VkQueryPoolPerformanceCreateInfoKHR() { var self: VkQueryPoolPerformanceCreateInfoKHR;"
" self.sType = VkStructureType.QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkQueryPoolPerformanceCreateInfoKHR explicit) { return VkStructureType.QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_INTEL_performance_query)
"def VkQueryPoolPerformanceQueryCreateInfoINTEL() { var self: VkQueryPoolPerformanceQueryCreateInfoINTEL;"
" self.sType = VkStructureType.QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL;"
" return <- self; }\n"
"def struct_type(t: VkQueryPoolPerformanceQueryCreateInfoINTEL explicit) { return VkStructureType.QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL; }\n"
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_video_encode_queue)
"def VkQueryPoolVideoEncodeFeedbackCreateInfoKHR() { var self: VkQueryPoolVideoEncodeFeedbackCreateInfoKHR;"
" self.sType = VkStructureType.QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkQueryPoolVideoEncodeFeedbackCreateInfoKHR explicit) { return VkStructureType.QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2))
"def VkQueueFamilyCheckpointProperties2NV() { var self: VkQueueFamilyCheckpointProperties2NV;"
" self.sType = VkStructureType.QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV;"
" return <- self; }\n"
"def struct_type(t: VkQueueFamilyCheckpointProperties2NV explicit) { return VkStructureType.QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV; }\n"
#endif /* defined(VK_NV_device_diagnostic_checkpoints) && (defined(VK_VERSION_1_3) || defined(VK_KHR_synchronization2)) */
#if defined(VK_NV_device_diagnostic_checkpoints)
"def VkQueueFamilyCheckpointPropertiesNV() { var self: VkQueueFamilyCheckpointPropertiesNV;"
" self.sType = VkStructureType.QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;"
" return <- self; }\n"
"def struct_type(t: VkQueueFamilyCheckpointPropertiesNV explicit) { return VkStructureType.QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV; }\n"
#endif /* defined(VK_NV_device_diagnostic_checkpoints) */
#if defined(VK_VERSION_1_4)
"def VkQueueFamilyGlobalPriorityProperties() { var self: VkQueueFamilyGlobalPriorityProperties;"
" self.sType = VkStructureType.QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkQueueFamilyGlobalPriorityProperties explicit) { return VkStructureType.QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkQueueFamilyProperties2() { var self: VkQueueFamilyProperties2;"
" self.sType = VkStructureType.QUEUE_FAMILY_PROPERTIES_2;"
" return <- self; }\n"
"def struct_type(t: VkQueueFamilyProperties2 explicit) { return VkStructureType.QUEUE_FAMILY_PROPERTIES_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_KHR_video_queue)
"def VkQueueFamilyQueryResultStatusPropertiesKHR() { var self: VkQueueFamilyQueryResultStatusPropertiesKHR;"
" self.sType = VkStructureType.QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkQueueFamilyQueryResultStatusPropertiesKHR explicit) { return VkStructureType.QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR; }\n"
"def VkQueueFamilyVideoPropertiesKHR() { var self: VkQueueFamilyVideoPropertiesKHR;"
" self.sType = VkStructureType.QUEUE_FAMILY_VIDEO_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkQueueFamilyVideoPropertiesKHR explicit) { return VkStructureType.QUEUE_FAMILY_VIDEO_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_ray_tracing_pipeline)
"def VkRayTracingPipelineInterfaceCreateInfoKHR() { var self: VkRayTracingPipelineInterfaceCreateInfoKHR;"
" self.sType = VkStructureType.RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkRayTracingPipelineInterfaceCreateInfoKHR explicit) { return VkStructureType.RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR; }\n"
"def VkRayTracingShaderGroupCreateInfoKHR() { var self: VkRayTracingShaderGroupCreateInfoKHR;"
" self.sType = VkStructureType.RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkRayTracingShaderGroupCreateInfoKHR explicit) { return VkStructureType.RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR; }\n"
"def VkRayTracingPipelineCreateInfoKHR() { var self: VkRayTracingPipelineCreateInfoKHR;"
" self.sType = VkStructureType.RAY_TRACING_PIPELINE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkRayTracingPipelineCreateInfoKHR explicit) { return VkStructureType.RAY_TRACING_PIPELINE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_NV_ray_tracing)
"def VkRayTracingShaderGroupCreateInfoNV() { var self: VkRayTracingShaderGroupCreateInfoNV;"
" self.sType = VkStructureType.RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkRayTracingShaderGroupCreateInfoNV explicit) { return VkStructureType.RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV; }\n"
"def VkRayTracingPipelineCreateInfoNV() { var self: VkRayTracingPipelineCreateInfoNV;"
" self.sType = VkStructureType.RAY_TRACING_PIPELINE_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkRayTracingPipelineCreateInfoNV explicit) { return VkStructureType.RAY_TRACING_PIPELINE_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_GOOGLE_display_timing)
#endif /* defined(VK_GOOGLE_display_timing) */
#if defined(VK_KHR_pipeline_binary)
"def VkReleaseCapturedPipelineDataInfoKHR() { var self: VkReleaseCapturedPipelineDataInfoKHR;"
" self.sType = VkStructureType.RELEASE_CAPTURED_PIPELINE_DATA_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkReleaseCapturedPipelineDataInfoKHR explicit) { return VkStructureType.RELEASE_CAPTURED_PIPELINE_DATA_INFO_KHR; }\n"
#endif /* defined(VK_KHR_pipeline_binary) */
#if defined(VK_EXT_swapchain_maintenance1)
"def VkReleaseSwapchainImagesInfoEXT() { var self: VkReleaseSwapchainImagesInfoEXT;"
" self.sType = VkStructureType.RELEASE_SWAPCHAIN_IMAGES_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkReleaseSwapchainImagesInfoEXT explicit) { return VkStructureType.RELEASE_SWAPCHAIN_IMAGES_INFO_EXT; }\n"
#endif /* defined(VK_EXT_swapchain_maintenance1) */
#if defined(VK_VERSION_1_2)
"def VkRenderPassAttachmentBeginInfo() { var self: VkRenderPassAttachmentBeginInfo;"
" self.sType = VkStructureType.RENDER_PASS_ATTACHMENT_BEGIN_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassAttachmentBeginInfo explicit) { return VkStructureType.RENDER_PASS_ATTACHMENT_BEGIN_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_0)
"def VkRenderPassBeginInfo() { var self: VkRenderPassBeginInfo;"
" self.sType = VkStructureType.RENDER_PASS_BEGIN_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassBeginInfo explicit) { return VkStructureType.RENDER_PASS_BEGIN_INFO; }\n"
"def VkRenderPassCreateInfo() { var self: VkRenderPassCreateInfo;"
" self.sType = VkStructureType.RENDER_PASS_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassCreateInfo explicit) { return VkStructureType.RENDER_PASS_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_2)
"def VkSubpassDependency2() { var self: VkSubpassDependency2;"
" self.sType = VkStructureType.SUBPASS_DEPENDENCY_2;"
" return <- self; }\n"
"def struct_type(t: VkSubpassDependency2 explicit) { return VkStructureType.SUBPASS_DEPENDENCY_2; }\n"
"def VkSubpassDescription2() { var self: VkSubpassDescription2;"
" self.sType = VkStructureType.SUBPASS_DESCRIPTION_2;"
" return <- self; }\n"
"def struct_type(t: VkSubpassDescription2 explicit) { return VkStructureType.SUBPASS_DESCRIPTION_2; }\n"
"def VkRenderPassCreateInfo2() { var self: VkRenderPassCreateInfo2;"
" self.sType = VkStructureType.RENDER_PASS_CREATE_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassCreateInfo2 explicit) { return VkStructureType.RENDER_PASS_CREATE_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_EXT_subpass_merge_feedback)
"def VkRenderPassCreationControlEXT() { var self: VkRenderPassCreationControlEXT;"
" self.sType = VkStructureType.RENDER_PASS_CREATION_CONTROL_EXT;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassCreationControlEXT explicit) { return VkStructureType.RENDER_PASS_CREATION_CONTROL_EXT; }\n"
"def VkRenderPassCreationFeedbackCreateInfoEXT() { var self: VkRenderPassCreationFeedbackCreateInfoEXT;"
" self.sType = VkStructureType.RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassCreationFeedbackCreateInfoEXT explicit) { return VkStructureType.RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_subpass_merge_feedback) */
#if defined(VK_EXT_fragment_density_map)
"def VkRenderPassFragmentDensityMapCreateInfoEXT() { var self: VkRenderPassFragmentDensityMapCreateInfoEXT;"
" self.sType = VkStructureType.RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassFragmentDensityMapCreateInfoEXT explicit) { return VkStructureType.RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_fragment_density_map) */
#if defined(VK_VERSION_1_1)
"def VkRenderPassInputAttachmentAspectCreateInfo() { var self: VkRenderPassInputAttachmentAspectCreateInfo;"
" self.sType = VkStructureType.RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassInputAttachmentAspectCreateInfo explicit) { return VkStructureType.RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO; }\n"
"def VkRenderPassMultiviewCreateInfo() { var self: VkRenderPassMultiviewCreateInfo;"
" self.sType = VkStructureType.RENDER_PASS_MULTIVIEW_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassMultiviewCreateInfo explicit) { return VkStructureType.RENDER_PASS_MULTIVIEW_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_EXT_sample_locations)
"def VkRenderPassSampleLocationsBeginInfoEXT() { var self: VkRenderPassSampleLocationsBeginInfoEXT;"
" self.sType = VkStructureType.RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassSampleLocationsBeginInfoEXT explicit) { return VkStructureType.RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT; }\n"
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_ARM_render_pass_striped)
"def VkRenderPassStripeInfoARM() { var self: VkRenderPassStripeInfoARM;"
" self.sType = VkStructureType.RENDER_PASS_STRIPE_INFO_ARM;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassStripeInfoARM explicit) { return VkStructureType.RENDER_PASS_STRIPE_INFO_ARM; }\n"
"def VkRenderPassStripeBeginInfoARM() { var self: VkRenderPassStripeBeginInfoARM;"
" self.sType = VkStructureType.RENDER_PASS_STRIPE_BEGIN_INFO_ARM;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassStripeBeginInfoARM explicit) { return VkStructureType.RENDER_PASS_STRIPE_BEGIN_INFO_ARM; }\n"
#endif /* defined(VK_ARM_render_pass_striped) */
#if defined(VK_VERSION_1_3)
"def VkSemaphoreSubmitInfo() { var self: VkSemaphoreSubmitInfo;"
" self.sType = VkStructureType.SEMAPHORE_SUBMIT_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSemaphoreSubmitInfo explicit) { return VkStructureType.SEMAPHORE_SUBMIT_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_ARM_render_pass_striped)
"def VkRenderPassStripeSubmitInfoARM() { var self: VkRenderPassStripeSubmitInfoARM;"
" self.sType = VkStructureType.RENDER_PASS_STRIPE_SUBMIT_INFO_ARM;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassStripeSubmitInfoARM explicit) { return VkStructureType.RENDER_PASS_STRIPE_SUBMIT_INFO_ARM; }\n"
#endif /* defined(VK_ARM_render_pass_striped) */
#if defined(VK_EXT_subpass_merge_feedback)
"def VkRenderPassSubpassFeedbackCreateInfoEXT() { var self: VkRenderPassSubpassFeedbackCreateInfoEXT;"
" self.sType = VkStructureType.RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassSubpassFeedbackCreateInfoEXT explicit) { return VkStructureType.RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_subpass_merge_feedback) */
#if defined(VK_QCOM_render_pass_transform)
"def VkRenderPassTransformBeginInfoQCOM() { var self: VkRenderPassTransformBeginInfoQCOM;"
" self.sType = VkStructureType.RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkRenderPassTransformBeginInfoQCOM explicit) { return VkStructureType.RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_render_pass_transform) */
#if defined(VK_VERSION_1_4)
"def VkRenderingAreaInfo() { var self: VkRenderingAreaInfo;"
" self.sType = VkStructureType.RENDERING_AREA_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderingAreaInfo explicit) { return VkStructureType.RENDERING_AREA_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_3)
"def VkRenderingAttachmentInfo() { var self: VkRenderingAttachmentInfo;"
" self.sType = VkStructureType.RENDERING_ATTACHMENT_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderingAttachmentInfo explicit) { return VkStructureType.RENDERING_ATTACHMENT_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
"def VkRenderingAttachmentLocationInfo() { var self: VkRenderingAttachmentLocationInfo;"
" self.sType = VkStructureType.RENDERING_ATTACHMENT_LOCATION_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderingAttachmentLocationInfo explicit) { return VkStructureType.RENDERING_ATTACHMENT_LOCATION_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_fragment_density_map) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
"def VkRenderingFragmentDensityMapAttachmentInfoEXT() { var self: VkRenderingFragmentDensityMapAttachmentInfoEXT;"
" self.sType = VkStructureType.RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkRenderingFragmentDensityMapAttachmentInfoEXT explicit) { return VkStructureType.RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT; }\n"
#endif /* defined(VK_EXT_fragment_density_map) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering))
"def VkRenderingFragmentShadingRateAttachmentInfoKHR() { var self: VkRenderingFragmentShadingRateAttachmentInfoKHR;"
" self.sType = VkStructureType.RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkRenderingFragmentShadingRateAttachmentInfoKHR explicit) { return VkStructureType.RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR; }\n"
#endif /* defined(VK_KHR_fragment_shading_rate) && (defined(VK_VERSION_1_3) || defined(VK_KHR_dynamic_rendering)) */
#if defined(VK_VERSION_1_3)
"def VkRenderingInfo() { var self: VkRenderingInfo;"
" self.sType = VkStructureType.RENDERING_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderingInfo explicit) { return VkStructureType.RENDERING_INFO; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_4)
"def VkRenderingInputAttachmentIndexInfo() { var self: VkRenderingInputAttachmentIndexInfo;"
" self.sType = VkStructureType.RENDERING_INPUT_ATTACHMENT_INDEX_INFO;"
" return <- self; }\n"
"def struct_type(t: VkRenderingInputAttachmentIndexInfo explicit) { return VkStructureType.RENDERING_INPUT_ATTACHMENT_INDEX_INFO; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_VERSION_1_3)
"def VkResolveImageInfo2() { var self: VkResolveImageInfo2;"
" self.sType = VkStructureType.RESOLVE_IMAGE_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkResolveImageInfo2 explicit) { return VkStructureType.RESOLVE_IMAGE_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_NV_ray_tracing_motion_blur)
#endif /* defined(VK_NV_ray_tracing_motion_blur) */
#if defined(VK_QCOM_image_processing2)
"def VkSamplerBlockMatchWindowCreateInfoQCOM() { var self: VkSamplerBlockMatchWindowCreateInfoQCOM;"
" self.sType = VkStructureType.SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkSamplerBlockMatchWindowCreateInfoQCOM explicit) { return VkStructureType.SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_image_processing2) */
#if defined(VK_EXT_border_color_swizzle)
"def VkSamplerBorderColorComponentMappingCreateInfoEXT() { var self: VkSamplerBorderColorComponentMappingCreateInfoEXT;"
" self.sType = VkStructureType.SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSamplerBorderColorComponentMappingCreateInfoEXT explicit) { return VkStructureType.SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_border_color_swizzle) */
#if defined(VK_EXT_descriptor_buffer)
"def VkSamplerCaptureDescriptorDataInfoEXT() { var self: VkSamplerCaptureDescriptorDataInfoEXT;"
" self.sType = VkStructureType.SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSamplerCaptureDescriptorDataInfoEXT explicit) { return VkStructureType.SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT; }\n"
#endif /* defined(VK_EXT_descriptor_buffer) */
#if defined(VK_VERSION_1_0)
"def VkSamplerCreateInfo() { var self: VkSamplerCreateInfo;"
" self.sType = VkStructureType.SAMPLER_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSamplerCreateInfo explicit) { return VkStructureType.SAMPLER_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_QCOM_filter_cubic_weights)
"def VkSamplerCubicWeightsCreateInfoQCOM() { var self: VkSamplerCubicWeightsCreateInfoQCOM;"
" self.sType = VkStructureType.SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkSamplerCubicWeightsCreateInfoQCOM explicit) { return VkStructureType.SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_filter_cubic_weights) */
#if defined(VK_EXT_custom_border_color)
"def VkSamplerCustomBorderColorCreateInfoEXT() { var self: VkSamplerCustomBorderColorCreateInfoEXT;"
" self.sType = VkStructureType.SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSamplerCustomBorderColorCreateInfoEXT explicit) { return VkStructureType.SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_custom_border_color) */
#if defined(VK_VERSION_1_2)
"def VkSamplerReductionModeCreateInfo() { var self: VkSamplerReductionModeCreateInfo;"
" self.sType = VkStructureType.SAMPLER_REDUCTION_MODE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSamplerReductionModeCreateInfo explicit) { return VkStructureType.SAMPLER_REDUCTION_MODE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_VERSION_1_1)
"def VkSamplerYcbcrConversionCreateInfo() { var self: VkSamplerYcbcrConversionCreateInfo;"
" self.sType = VkStructureType.SAMPLER_YCBCR_CONVERSION_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSamplerYcbcrConversionCreateInfo explicit) { return VkStructureType.SAMPLER_YCBCR_CONVERSION_CREATE_INFO; }\n"
"def VkSamplerYcbcrConversionImageFormatProperties() { var self: VkSamplerYcbcrConversionImageFormatProperties;"
" self.sType = VkStructureType.SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;"
" return <- self; }\n"
"def struct_type(t: VkSamplerYcbcrConversionImageFormatProperties explicit) { return VkStructureType.SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES; }\n"
"def VkSamplerYcbcrConversionInfo() { var self: VkSamplerYcbcrConversionInfo;"
" self.sType = VkStructureType.SAMPLER_YCBCR_CONVERSION_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSamplerYcbcrConversionInfo explicit) { return VkStructureType.SAMPLER_YCBCR_CONVERSION_INFO; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_QCOM_ycbcr_degamma)
"def VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM() { var self: VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM;"
" self.sType = VkStructureType.SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM explicit) { return VkStructureType.SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_ycbcr_degamma) */
#if defined(VK_QNX_external_memory_screen_buffer)
"def VkScreenBufferFormatPropertiesQNX() { var self: VkScreenBufferFormatPropertiesQNX;"
" self.sType = VkStructureType.SCREEN_BUFFER_FORMAT_PROPERTIES_QNX;"
" return <- self; }\n"
"def struct_type(t: VkScreenBufferFormatPropertiesQNX explicit) { return VkStructureType.SCREEN_BUFFER_FORMAT_PROPERTIES_QNX; }\n"
"def VkScreenBufferPropertiesQNX() { var self: VkScreenBufferPropertiesQNX;"
" self.sType = VkStructureType.SCREEN_BUFFER_PROPERTIES_QNX;"
" return <- self; }\n"
"def struct_type(t: VkScreenBufferPropertiesQNX explicit) { return VkStructureType.SCREEN_BUFFER_PROPERTIES_QNX; }\n"
#endif /* defined(VK_QNX_external_memory_screen_buffer) */
#if defined(VK_QNX_screen_surface)
"def VkScreenSurfaceCreateInfoQNX() { var self: VkScreenSurfaceCreateInfoQNX;"
" self.sType = VkStructureType.SCREEN_SURFACE_CREATE_INFO_QNX;"
" return <- self; }\n"
"def struct_type(t: VkScreenSurfaceCreateInfoQNX explicit) { return VkStructureType.SCREEN_SURFACE_CREATE_INFO_QNX; }\n"
#endif /* defined(VK_QNX_screen_surface) */
#if defined(VK_VERSION_1_0)
"def VkSemaphoreCreateInfo() { var self: VkSemaphoreCreateInfo;"
" self.sType = VkStructureType.SEMAPHORE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSemaphoreCreateInfo explicit) { return VkStructureType.SEMAPHORE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_KHR_external_semaphore_fd)
"def VkSemaphoreGetFdInfoKHR() { var self: VkSemaphoreGetFdInfoKHR;"
" self.sType = VkStructureType.SEMAPHORE_GET_FD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkSemaphoreGetFdInfoKHR explicit) { return VkStructureType.SEMAPHORE_GET_FD_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_semaphore_fd) */
#if defined(VK_KHR_external_semaphore_win32)
"def VkSemaphoreGetWin32HandleInfoKHR() { var self: VkSemaphoreGetWin32HandleInfoKHR;"
" self.sType = VkStructureType.SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkSemaphoreGetWin32HandleInfoKHR explicit) { return VkStructureType.SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_FUCHSIA_external_semaphore)
"def VkSemaphoreGetZirconHandleInfoFUCHSIA() { var self: VkSemaphoreGetZirconHandleInfoFUCHSIA;"
" self.sType = VkStructureType.SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA;"
" return <- self; }\n"
"def struct_type(t: VkSemaphoreGetZirconHandleInfoFUCHSIA explicit) { return VkStructureType.SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA; }\n"
#endif /* defined(VK_FUCHSIA_external_semaphore) */
#if defined(VK_VERSION_1_2)
"def VkSemaphoreSignalInfo() { var self: VkSemaphoreSignalInfo;"
" self.sType = VkStructureType.SEMAPHORE_SIGNAL_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSemaphoreSignalInfo explicit) { return VkStructureType.SEMAPHORE_SIGNAL_INFO; }\n"
"def VkSemaphoreTypeCreateInfo() { var self: VkSemaphoreTypeCreateInfo;"
" self.sType = VkStructureType.SEMAPHORE_TYPE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSemaphoreTypeCreateInfo explicit) { return VkStructureType.SEMAPHORE_TYPE_CREATE_INFO; }\n"
"def VkSemaphoreWaitInfo() { var self: VkSemaphoreWaitInfo;"
" self.sType = VkStructureType.SEMAPHORE_WAIT_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSemaphoreWaitInfo explicit) { return VkStructureType.SEMAPHORE_WAIT_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer)
"def VkSetDescriptorBufferOffsetsInfoEXT() { var self: VkSetDescriptorBufferOffsetsInfoEXT;"
" self.sType = VkStructureType.SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSetDescriptorBufferOffsetsInfoEXT explicit) { return VkStructureType.SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT; }\n"
#endif /* defined(VK_KHR_maintenance6) && defined(VK_EXT_descriptor_buffer) */
#if defined(VK_NV_low_latency2)
"def VkSetLatencyMarkerInfoNV() { var self: VkSetLatencyMarkerInfoNV;"
" self.sType = VkStructureType.SET_LATENCY_MARKER_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkSetLatencyMarkerInfoNV explicit) { return VkStructureType.SET_LATENCY_MARKER_INFO_NV; }\n"
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_NV_device_generated_commands)
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_EXT_shader_object)
"def VkShaderCreateInfoEXT() { var self: VkShaderCreateInfoEXT;"
" self.sType = VkStructureType.SHADER_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkShaderCreateInfoEXT explicit) { return VkStructureType.SHADER_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_shader_object) */
#if defined(VK_VERSION_1_0)
"def VkShaderModuleCreateInfo() { var self: VkShaderModuleCreateInfo;"
" self.sType = VkStructureType.SHADER_MODULE_CREATE_INFO;"
" return <- self; }\n"
"def struct_type(t: VkShaderModuleCreateInfo explicit) { return VkStructureType.SHADER_MODULE_CREATE_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_EXT_shader_module_identifier)
"def VkShaderModuleIdentifierEXT() { var self: VkShaderModuleIdentifierEXT;"
" self.sType = VkStructureType.SHADER_MODULE_IDENTIFIER_EXT;"
" return <- self; }\n"
"def struct_type(t: VkShaderModuleIdentifierEXT explicit) { return VkStructureType.SHADER_MODULE_IDENTIFIER_EXT; }\n"
#endif /* defined(VK_EXT_shader_module_identifier) */
#if defined(VK_EXT_validation_cache)
"def VkShaderModuleValidationCacheCreateInfoEXT() { var self: VkShaderModuleValidationCacheCreateInfoEXT;"
" self.sType = VkStructureType.SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkShaderModuleValidationCacheCreateInfoEXT explicit) { return VkStructureType.SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_AMD_shader_info)
#endif /* defined(VK_AMD_shader_info) */
#if defined(VK_KHR_shared_presentable_image)
"def VkSharedPresentSurfaceCapabilitiesKHR() { var self: VkSharedPresentSurfaceCapabilitiesKHR;"
" self.sType = VkStructureType.SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkSharedPresentSurfaceCapabilitiesKHR explicit) { return VkStructureType.SHARED_PRESENT_SURFACE_CAPABILITIES_KHR; }\n"
#endif /* defined(VK_KHR_shared_presentable_image) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkSparseImageFormatProperties2() { var self: VkSparseImageFormatProperties2;"
" self.sType = VkStructureType.SPARSE_IMAGE_FORMAT_PROPERTIES_2;"
" return <- self; }\n"
"def struct_type(t: VkSparseImageFormatProperties2 explicit) { return VkStructureType.SPARSE_IMAGE_FORMAT_PROPERTIES_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_0)
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
"def VkSparseImageMemoryRequirements2() { var self: VkSparseImageMemoryRequirements2;"
" self.sType = VkStructureType.SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;"
" return <- self; }\n"
"def struct_type(t: VkSparseImageMemoryRequirements2 explicit) { return VkStructureType.SPARSE_IMAGE_MEMORY_REQUIREMENTS_2; }\n"
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_GGP_stream_descriptor_surface)
"def VkStreamDescriptorSurfaceCreateInfoGGP() { var self: VkStreamDescriptorSurfaceCreateInfoGGP;"
" self.sType = VkStructureType.STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP;"
" return <- self; }\n"
"def struct_type(t: VkStreamDescriptorSurfaceCreateInfoGGP explicit) { return VkStructureType.STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP; }\n"
#endif /* defined(VK_GGP_stream_descriptor_surface) */
#if defined(VK_KHR_ray_tracing_pipeline)
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_VERSION_1_0)
"def VkSubmitInfo() { var self: VkSubmitInfo;"
" self.sType = VkStructureType.SUBMIT_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSubmitInfo explicit) { return VkStructureType.SUBMIT_INFO; }\n"
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_3)
"def VkSubmitInfo2() { var self: VkSubmitInfo2;"
" self.sType = VkStructureType.SUBMIT_INFO_2;"
" return <- self; }\n"
"def struct_type(t: VkSubmitInfo2 explicit) { return VkStructureType.SUBMIT_INFO_2; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_VERSION_1_2)
"def VkSubpassBeginInfo() { var self: VkSubpassBeginInfo;"
" self.sType = VkStructureType.SUBPASS_BEGIN_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSubpassBeginInfo explicit) { return VkStructureType.SUBPASS_BEGIN_INFO; }\n"
"def VkSubpassDescriptionDepthStencilResolve() { var self: VkSubpassDescriptionDepthStencilResolve;"
" self.sType = VkStructureType.SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE;"
" return <- self; }\n"
"def struct_type(t: VkSubpassDescriptionDepthStencilResolve explicit) { return VkStructureType.SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE; }\n"
"def VkSubpassEndInfo() { var self: VkSubpassEndInfo;"
" self.sType = VkStructureType.SUBPASS_END_INFO;"
" return <- self; }\n"
"def struct_type(t: VkSubpassEndInfo explicit) { return VkStructureType.SUBPASS_END_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_QCOM_fragment_density_map_offset)
"def VkSubpassFragmentDensityMapOffsetEndInfoQCOM() { var self: VkSubpassFragmentDensityMapOffsetEndInfoQCOM;"
" self.sType = VkStructureType.SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkSubpassFragmentDensityMapOffsetEndInfoQCOM explicit) { return VkStructureType.SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM; }\n"
#endif /* defined(VK_QCOM_fragment_density_map_offset) */
#if defined(VK_EXT_multisampled_render_to_single_sampled)
"def VkSubpassResolvePerformanceQueryEXT() { var self: VkSubpassResolvePerformanceQueryEXT;"
" self.sType = VkStructureType.SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSubpassResolvePerformanceQueryEXT explicit) { return VkStructureType.SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT; }\n"
#endif /* defined(VK_EXT_multisampled_render_to_single_sampled) */
#if defined(VK_HUAWEI_subpass_shading)
"def VkSubpassShadingPipelineCreateInfoHUAWEI() { var self: VkSubpassShadingPipelineCreateInfoHUAWEI;"
" self.sType = VkStructureType.SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI;"
" return <- self; }\n"
"def struct_type(t: VkSubpassShadingPipelineCreateInfoHUAWEI explicit) { return VkStructureType.SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI; }\n"
#endif /* defined(VK_HUAWEI_subpass_shading) */
#if defined(VK_VERSION_1_4)
"def VkSubresourceHostMemcpySize() { var self: VkSubresourceHostMemcpySize;"
" self.sType = VkStructureType.SUBRESOURCE_HOST_MEMCPY_SIZE;"
" return <- self; }\n"
"def struct_type(t: VkSubresourceHostMemcpySize explicit) { return VkStructureType.SUBRESOURCE_HOST_MEMCPY_SIZE; }\n"
"def VkSubresourceLayout2() { var self: VkSubresourceLayout2;"
" self.sType = VkStructureType.SUBRESOURCE_LAYOUT_2;"
" return <- self; }\n"
"def struct_type(t: VkSubresourceLayout2 explicit) { return VkStructureType.SUBRESOURCE_LAYOUT_2; }\n"
#endif /* defined(VK_VERSION_1_4) */
#if defined(VK_EXT_display_surface_counter)
"def VkSurfaceCapabilities2EXT() { var self: VkSurfaceCapabilities2EXT;"
" self.sType = VkStructureType.SURFACE_CAPABILITIES_2_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSurfaceCapabilities2EXT explicit) { return VkStructureType.SURFACE_CAPABILITIES_2_EXT; }\n"
#endif /* defined(VK_EXT_display_surface_counter) */
#if defined(VK_KHR_surface)
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_get_surface_capabilities2)
"def VkSurfaceCapabilities2KHR() { var self: VkSurfaceCapabilities2KHR;"
" self.sType = VkStructureType.SURFACE_CAPABILITIES_2_KHR;"
" return <- self; }\n"
"def struct_type(t: VkSurfaceCapabilities2KHR explicit) { return VkStructureType.SURFACE_CAPABILITIES_2_KHR; }\n"
#endif /* defined(VK_KHR_get_surface_capabilities2) */
#if defined(VK_EXT_full_screen_exclusive)
"def VkSurfaceCapabilitiesFullScreenExclusiveEXT() { var self: VkSurfaceCapabilitiesFullScreenExclusiveEXT;"
" self.sType = VkStructureType.SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSurfaceCapabilitiesFullScreenExclusiveEXT explicit) { return VkStructureType.SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT; }\n"
#endif /* defined(VK_EXT_full_screen_exclusive) */
#if defined(VK_NV_present_barrier)
"def VkSurfaceCapabilitiesPresentBarrierNV() { var self: VkSurfaceCapabilitiesPresentBarrierNV;"
" self.sType = VkStructureType.SURFACE_CAPABILITIES_PRESENT_BARRIER_NV;"
" return <- self; }\n"
"def struct_type(t: VkSurfaceCapabilitiesPresentBarrierNV explicit) { return VkStructureType.SURFACE_CAPABILITIES_PRESENT_BARRIER_NV; }\n"
#endif /* defined(VK_NV_present_barrier) */
#if defined(VK_KHR_surface)
#endif /* defined(VK_KHR_surface) */
#if defined(VK_KHR_get_surface_capabilities2)
"def VkSurfaceFormat2KHR() { var self: VkSurfaceFormat2KHR;"
" self.sType = VkStructureType.SURFACE_FORMAT_2_KHR;"
" return <- self; }\n"
"def struct_type(t: VkSurfaceFormat2KHR explicit) { return VkStructureType.SURFACE_FORMAT_2_KHR; }\n"
#endif /* defined(VK_KHR_get_surface_capabilities2) */
#if defined(VK_EXT_full_screen_exclusive)
"def VkSurfaceFullScreenExclusiveInfoEXT() { var self: VkSurfaceFullScreenExclusiveInfoEXT;"
" self.sType = VkStructureType.SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSurfaceFullScreenExclusiveInfoEXT explicit) { return VkStructureType.SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_full_screen_exclusive) */
#if defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_win32_surface)
"def VkSurfaceFullScreenExclusiveWin32InfoEXT() { var self: VkSurfaceFullScreenExclusiveWin32InfoEXT;"
" self.sType = VkStructureType.SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSurfaceFullScreenExclusiveWin32InfoEXT explicit) { return VkStructureType.SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT; }\n"
#endif /* defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_win32_surface) */
#if defined(VK_EXT_surface_maintenance1)
"def VkSurfacePresentModeCompatibilityEXT() { var self: VkSurfacePresentModeCompatibilityEXT;"
" self.sType = VkStructureType.SURFACE_PRESENT_MODE_COMPATIBILITY_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSurfacePresentModeCompatibilityEXT explicit) { return VkStructureType.SURFACE_PRESENT_MODE_COMPATIBILITY_EXT; }\n"
"def VkSurfacePresentModeEXT() { var self: VkSurfacePresentModeEXT;"
" self.sType = VkStructureType.SURFACE_PRESENT_MODE_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSurfacePresentModeEXT explicit) { return VkStructureType.SURFACE_PRESENT_MODE_EXT; }\n"
"def VkSurfacePresentScalingCapabilitiesEXT() { var self: VkSurfacePresentScalingCapabilitiesEXT;"
" self.sType = VkStructureType.SURFACE_PRESENT_SCALING_CAPABILITIES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSurfacePresentScalingCapabilitiesEXT explicit) { return VkStructureType.SURFACE_PRESENT_SCALING_CAPABILITIES_EXT; }\n"
#endif /* defined(VK_EXT_surface_maintenance1) */
#if defined(VK_KHR_surface_protected_capabilities)
"def VkSurfaceProtectedCapabilitiesKHR() { var self: VkSurfaceProtectedCapabilitiesKHR;"
" self.sType = VkStructureType.SURFACE_PROTECTED_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkSurfaceProtectedCapabilitiesKHR explicit) { return VkStructureType.SURFACE_PROTECTED_CAPABILITIES_KHR; }\n"
#endif /* defined(VK_KHR_surface_protected_capabilities) */
#if defined(VK_EXT_display_control)
"def VkSwapchainCounterCreateInfoEXT() { var self: VkSwapchainCounterCreateInfoEXT;"
" self.sType = VkStructureType.SWAPCHAIN_COUNTER_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSwapchainCounterCreateInfoEXT explicit) { return VkStructureType.SWAPCHAIN_COUNTER_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_KHR_swapchain)
"def VkSwapchainCreateInfoKHR() { var self: VkSwapchainCreateInfoKHR;"
" self.sType = VkStructureType.SWAPCHAIN_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkSwapchainCreateInfoKHR explicit) { return VkStructureType.SWAPCHAIN_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_AMD_display_native_hdr)
"def VkSwapchainDisplayNativeHdrCreateInfoAMD() { var self: VkSwapchainDisplayNativeHdrCreateInfoAMD;"
" self.sType = VkStructureType.SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD;"
" return <- self; }\n"
"def struct_type(t: VkSwapchainDisplayNativeHdrCreateInfoAMD explicit) { return VkStructureType.SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD; }\n"
#endif /* defined(VK_AMD_display_native_hdr) */
#if defined(VK_NV_low_latency2)
"def VkSwapchainLatencyCreateInfoNV() { var self: VkSwapchainLatencyCreateInfoNV;"
" self.sType = VkStructureType.SWAPCHAIN_LATENCY_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkSwapchainLatencyCreateInfoNV explicit) { return VkStructureType.SWAPCHAIN_LATENCY_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_low_latency2) */
#if defined(VK_NV_present_barrier)
"def VkSwapchainPresentBarrierCreateInfoNV() { var self: VkSwapchainPresentBarrierCreateInfoNV;"
" self.sType = VkStructureType.SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkSwapchainPresentBarrierCreateInfoNV explicit) { return VkStructureType.SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV; }\n"
#endif /* defined(VK_NV_present_barrier) */
#if defined(VK_EXT_swapchain_maintenance1)
"def VkSwapchainPresentFenceInfoEXT() { var self: VkSwapchainPresentFenceInfoEXT;"
" self.sType = VkStructureType.SWAPCHAIN_PRESENT_FENCE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSwapchainPresentFenceInfoEXT explicit) { return VkStructureType.SWAPCHAIN_PRESENT_FENCE_INFO_EXT; }\n"
"def VkSwapchainPresentModeInfoEXT() { var self: VkSwapchainPresentModeInfoEXT;"
" self.sType = VkStructureType.SWAPCHAIN_PRESENT_MODE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSwapchainPresentModeInfoEXT explicit) { return VkStructureType.SWAPCHAIN_PRESENT_MODE_INFO_EXT; }\n"
"def VkSwapchainPresentModesCreateInfoEXT() { var self: VkSwapchainPresentModesCreateInfoEXT;"
" self.sType = VkStructureType.SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSwapchainPresentModesCreateInfoEXT explicit) { return VkStructureType.SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT; }\n"
"def VkSwapchainPresentScalingCreateInfoEXT() { var self: VkSwapchainPresentScalingCreateInfoEXT;"
" self.sType = VkStructureType.SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkSwapchainPresentScalingCreateInfoEXT explicit) { return VkStructureType.SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_swapchain_maintenance1) */
#if defined(VK_AMD_texture_gather_bias_lod)
"def VkTextureLODGatherFormatPropertiesAMD() { var self: VkTextureLODGatherFormatPropertiesAMD;"
" self.sType = VkStructureType.TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;"
" return <- self; }\n"
"def struct_type(t: VkTextureLODGatherFormatPropertiesAMD explicit) { return VkStructureType.TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD; }\n"
#endif /* defined(VK_AMD_texture_gather_bias_lod) */
#if defined(VK_QCOM_tile_properties)
"def VkTilePropertiesQCOM() { var self: VkTilePropertiesQCOM;"
" self.sType = VkStructureType.TILE_PROPERTIES_QCOM;"
" return <- self; }\n"
"def struct_type(t: VkTilePropertiesQCOM explicit) { return VkStructureType.TILE_PROPERTIES_QCOM; }\n"
#endif /* defined(VK_QCOM_tile_properties) */
#if defined(VK_VERSION_1_2)
"def VkTimelineSemaphoreSubmitInfo() { var self: VkTimelineSemaphoreSubmitInfo;"
" self.sType = VkStructureType.TIMELINE_SEMAPHORE_SUBMIT_INFO;"
" return <- self; }\n"
"def struct_type(t: VkTimelineSemaphoreSubmitInfo explicit) { return VkStructureType.TIMELINE_SEMAPHORE_SUBMIT_INFO; }\n"
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_KHR_ray_tracing_maintenance1) && defined(VK_KHR_ray_tracing_pipeline)
#endif /* defined(VK_KHR_ray_tracing_maintenance1) && defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_ray_tracing_pipeline)
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_acceleration_structure)
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_EXT_validation_cache)
"def VkValidationCacheCreateInfoEXT() { var self: VkValidationCacheCreateInfoEXT;"
" self.sType = VkStructureType.VALIDATION_CACHE_CREATE_INFO_EXT;"
" return <- self; }\n"
"def struct_type(t: VkValidationCacheCreateInfoEXT explicit) { return VkStructureType.VALIDATION_CACHE_CREATE_INFO_EXT; }\n"
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_EXT_validation_features)
"def VkValidationFeaturesEXT() { var self: VkValidationFeaturesEXT;"
" self.sType = VkStructureType.VALIDATION_FEATURES_EXT;"
" return <- self; }\n"
"def struct_type(t: VkValidationFeaturesEXT explicit) { return VkStructureType.VALIDATION_FEATURES_EXT; }\n"
#endif /* defined(VK_EXT_validation_features) */
#if defined(VK_EXT_validation_flags)
"def VkValidationFlagsEXT() { var self: VkValidationFlagsEXT;"
" self.sType = VkStructureType.VALIDATION_FLAGS_EXT;"
" return <- self; }\n"
"def struct_type(t: VkValidationFlagsEXT explicit) { return VkStructureType.VALIDATION_FLAGS_EXT; }\n"
#endif /* defined(VK_EXT_validation_flags) */
#if (defined(VK_EXT_shader_object)) || (defined(VK_EXT_vertex_input_dynamic_state))
"def VkVertexInputAttributeDescription2EXT() { var self: VkVertexInputAttributeDescription2EXT;"
" self.sType = VkStructureType.VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT;"
" return <- self; }\n"
"def struct_type(t: VkVertexInputAttributeDescription2EXT explicit) { return VkStructureType.VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT; }\n"
"def VkVertexInputBindingDescription2EXT() { var self: VkVertexInputBindingDescription2EXT;"
" self.sType = VkStructureType.VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT;"
" return <- self; }\n"
"def struct_type(t: VkVertexInputBindingDescription2EXT explicit) { return VkStructureType.VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT; }\n"
#endif /* (defined(VK_EXT_shader_object)) || (defined(VK_EXT_vertex_input_dynamic_state)) */
#if defined(VK_NN_vi_surface)
"def VkViSurfaceCreateInfoNN() { var self: VkViSurfaceCreateInfoNN;"
" self.sType = VkStructureType.VI_SURFACE_CREATE_INFO_NN;"
" return <- self; }\n"
"def struct_type(t: VkViSurfaceCreateInfoNN explicit) { return VkStructureType.VI_SURFACE_CREATE_INFO_NN; }\n"
#endif /* defined(VK_NN_vi_surface) */
#if defined(VK_KHR_video_queue)
"def VkVideoPictureResourceInfoKHR() { var self: VkVideoPictureResourceInfoKHR;"
" self.sType = VkStructureType.VIDEO_PICTURE_RESOURCE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoPictureResourceInfoKHR explicit) { return VkStructureType.VIDEO_PICTURE_RESOURCE_INFO_KHR; }\n"
"def VkVideoReferenceSlotInfoKHR() { var self: VkVideoReferenceSlotInfoKHR;"
" self.sType = VkStructureType.VIDEO_REFERENCE_SLOT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoReferenceSlotInfoKHR explicit) { return VkStructureType.VIDEO_REFERENCE_SLOT_INFO_KHR; }\n"
"def VkVideoBeginCodingInfoKHR() { var self: VkVideoBeginCodingInfoKHR;"
" self.sType = VkStructureType.VIDEO_BEGIN_CODING_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoBeginCodingInfoKHR explicit) { return VkStructureType.VIDEO_BEGIN_CODING_INFO_KHR; }\n"
"def VkVideoCapabilitiesKHR() { var self: VkVideoCapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoCapabilitiesKHR explicit) { return VkStructureType.VIDEO_CAPABILITIES_KHR; }\n"
"def VkVideoCodingControlInfoKHR() { var self: VkVideoCodingControlInfoKHR;"
" self.sType = VkStructureType.VIDEO_CODING_CONTROL_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoCodingControlInfoKHR explicit) { return VkStructureType.VIDEO_CODING_CONTROL_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_decode_av1)
"def VkVideoDecodeAV1CapabilitiesKHR() { var self: VkVideoDecodeAV1CapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_AV1_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeAV1CapabilitiesKHR explicit) { return VkStructureType.VIDEO_DECODE_AV1_CAPABILITIES_KHR; }\n"
"def VkVideoDecodeAV1DpbSlotInfoKHR() { var self: VkVideoDecodeAV1DpbSlotInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeAV1DpbSlotInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR; }\n"
"def VkVideoDecodeAV1PictureInfoKHR() { var self: VkVideoDecodeAV1PictureInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_AV1_PICTURE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeAV1PictureInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_AV1_PICTURE_INFO_KHR; }\n"
"def VkVideoDecodeAV1ProfileInfoKHR() { var self: VkVideoDecodeAV1ProfileInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_AV1_PROFILE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeAV1ProfileInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_AV1_PROFILE_INFO_KHR; }\n"
"def VkVideoDecodeAV1SessionParametersCreateInfoKHR() { var self: VkVideoDecodeAV1SessionParametersCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeAV1SessionParametersCreateInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_decode_av1) */
#if defined(VK_KHR_video_decode_queue)
"def VkVideoDecodeCapabilitiesKHR() { var self: VkVideoDecodeCapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeCapabilitiesKHR explicit) { return VkStructureType.VIDEO_DECODE_CAPABILITIES_KHR; }\n"
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_decode_h264)
"def VkVideoDecodeH264CapabilitiesKHR() { var self: VkVideoDecodeH264CapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H264_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH264CapabilitiesKHR explicit) { return VkStructureType.VIDEO_DECODE_H264_CAPABILITIES_KHR; }\n"
"def VkVideoDecodeH264DpbSlotInfoKHR() { var self: VkVideoDecodeH264DpbSlotInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH264DpbSlotInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR; }\n"
"def VkVideoDecodeH264PictureInfoKHR() { var self: VkVideoDecodeH264PictureInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H264_PICTURE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH264PictureInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H264_PICTURE_INFO_KHR; }\n"
"def VkVideoDecodeH264ProfileInfoKHR() { var self: VkVideoDecodeH264ProfileInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H264_PROFILE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH264ProfileInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H264_PROFILE_INFO_KHR; }\n"
"def VkVideoDecodeH264SessionParametersAddInfoKHR() { var self: VkVideoDecodeH264SessionParametersAddInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH264SessionParametersAddInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR; }\n"
"def VkVideoDecodeH264SessionParametersCreateInfoKHR() { var self: VkVideoDecodeH264SessionParametersCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH264SessionParametersCreateInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_decode_h264) */
#if defined(VK_KHR_video_decode_h265)
"def VkVideoDecodeH265CapabilitiesKHR() { var self: VkVideoDecodeH265CapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H265_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH265CapabilitiesKHR explicit) { return VkStructureType.VIDEO_DECODE_H265_CAPABILITIES_KHR; }\n"
"def VkVideoDecodeH265DpbSlotInfoKHR() { var self: VkVideoDecodeH265DpbSlotInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH265DpbSlotInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR; }\n"
"def VkVideoDecodeH265PictureInfoKHR() { var self: VkVideoDecodeH265PictureInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H265_PICTURE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH265PictureInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H265_PICTURE_INFO_KHR; }\n"
"def VkVideoDecodeH265ProfileInfoKHR() { var self: VkVideoDecodeH265ProfileInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H265_PROFILE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH265ProfileInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H265_PROFILE_INFO_KHR; }\n"
"def VkVideoDecodeH265SessionParametersAddInfoKHR() { var self: VkVideoDecodeH265SessionParametersAddInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH265SessionParametersAddInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR; }\n"
"def VkVideoDecodeH265SessionParametersCreateInfoKHR() { var self: VkVideoDecodeH265SessionParametersCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeH265SessionParametersCreateInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_decode_h265) */
#if defined(VK_KHR_video_decode_queue)
"def VkVideoDecodeInfoKHR() { var self: VkVideoDecodeInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_INFO_KHR; }\n"
"def VkVideoDecodeUsageInfoKHR() { var self: VkVideoDecodeUsageInfoKHR;"
" self.sType = VkStructureType.VIDEO_DECODE_USAGE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoDecodeUsageInfoKHR explicit) { return VkStructureType.VIDEO_DECODE_USAGE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_decode_queue) */
#if defined(VK_KHR_video_encode_av1)
"def VkVideoEncodeAV1CapabilitiesKHR() { var self: VkVideoEncodeAV1CapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1CapabilitiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_CAPABILITIES_KHR; }\n"
"def VkVideoEncodeAV1DpbSlotInfoKHR() { var self: VkVideoEncodeAV1DpbSlotInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_DPB_SLOT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1DpbSlotInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_DPB_SLOT_INFO_KHR; }\n"
"def VkVideoEncodeAV1GopRemainingFrameInfoKHR() { var self: VkVideoEncodeAV1GopRemainingFrameInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_GOP_REMAINING_FRAME_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1GopRemainingFrameInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_GOP_REMAINING_FRAME_INFO_KHR; }\n"
"def VkVideoEncodeAV1PictureInfoKHR() { var self: VkVideoEncodeAV1PictureInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_PICTURE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1PictureInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_PICTURE_INFO_KHR; }\n"
"def VkVideoEncodeAV1ProfileInfoKHR() { var self: VkVideoEncodeAV1ProfileInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_PROFILE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1ProfileInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_PROFILE_INFO_KHR; }\n"
"def VkVideoEncodeAV1QualityLevelPropertiesKHR() { var self: VkVideoEncodeAV1QualityLevelPropertiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_QUALITY_LEVEL_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1QualityLevelPropertiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_QUALITY_LEVEL_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1)
"def VkVideoEncodeAV1QuantizationMapCapabilitiesKHR() { var self: VkVideoEncodeAV1QuantizationMapCapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_QUANTIZATION_MAP_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1QuantizationMapCapabilitiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_QUANTIZATION_MAP_CAPABILITIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_av1)
"def VkVideoEncodeAV1RateControlInfoKHR() { var self: VkVideoEncodeAV1RateControlInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_RATE_CONTROL_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1RateControlInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_RATE_CONTROL_INFO_KHR; }\n"
"def VkVideoEncodeAV1RateControlLayerInfoKHR() { var self: VkVideoEncodeAV1RateControlLayerInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_RATE_CONTROL_LAYER_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1RateControlLayerInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_RATE_CONTROL_LAYER_INFO_KHR; }\n"
"def VkVideoEncodeAV1SessionCreateInfoKHR() { var self: VkVideoEncodeAV1SessionCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_SESSION_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1SessionCreateInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_SESSION_CREATE_INFO_KHR; }\n"
"def VkVideoEncodeAV1SessionParametersCreateInfoKHR() { var self: VkVideoEncodeAV1SessionParametersCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeAV1SessionParametersCreateInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_queue)
"def VkVideoEncodeCapabilitiesKHR() { var self: VkVideoEncodeCapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeCapabilitiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_CAPABILITIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_encode_h264)
"def VkVideoEncodeH264CapabilitiesKHR() { var self: VkVideoEncodeH264CapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264CapabilitiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_CAPABILITIES_KHR; }\n"
"def VkVideoEncodeH264DpbSlotInfoKHR() { var self: VkVideoEncodeH264DpbSlotInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264DpbSlotInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR; }\n"
"def VkVideoEncodeH264GopRemainingFrameInfoKHR() { var self: VkVideoEncodeH264GopRemainingFrameInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264GopRemainingFrameInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR; }\n"
"def VkVideoEncodeH264NaluSliceInfoKHR() { var self: VkVideoEncodeH264NaluSliceInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264NaluSliceInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR; }\n"
"def VkVideoEncodeH264PictureInfoKHR() { var self: VkVideoEncodeH264PictureInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_PICTURE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264PictureInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_PICTURE_INFO_KHR; }\n"
"def VkVideoEncodeH264ProfileInfoKHR() { var self: VkVideoEncodeH264ProfileInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_PROFILE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264ProfileInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_PROFILE_INFO_KHR; }\n"
"def VkVideoEncodeH264QualityLevelPropertiesKHR() { var self: VkVideoEncodeH264QualityLevelPropertiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264QualityLevelPropertiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h264)
"def VkVideoEncodeH264QuantizationMapCapabilitiesKHR() { var self: VkVideoEncodeH264QuantizationMapCapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_QUANTIZATION_MAP_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264QuantizationMapCapabilitiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_QUANTIZATION_MAP_CAPABILITIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_h264)
"def VkVideoEncodeH264RateControlInfoKHR() { var self: VkVideoEncodeH264RateControlInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264RateControlInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR; }\n"
"def VkVideoEncodeH264RateControlLayerInfoKHR() { var self: VkVideoEncodeH264RateControlLayerInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264RateControlLayerInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR; }\n"
"def VkVideoEncodeH264SessionCreateInfoKHR() { var self: VkVideoEncodeH264SessionCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264SessionCreateInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR; }\n"
"def VkVideoEncodeH264SessionParametersAddInfoKHR() { var self: VkVideoEncodeH264SessionParametersAddInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264SessionParametersAddInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR; }\n"
"def VkVideoEncodeH264SessionParametersCreateInfoKHR() { var self: VkVideoEncodeH264SessionParametersCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264SessionParametersCreateInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR; }\n"
"def VkVideoEncodeH264SessionParametersFeedbackInfoKHR() { var self: VkVideoEncodeH264SessionParametersFeedbackInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264SessionParametersFeedbackInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR; }\n"
"def VkVideoEncodeH264SessionParametersGetInfoKHR() { var self: VkVideoEncodeH264SessionParametersGetInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH264SessionParametersGetInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_h264) */
#if defined(VK_KHR_video_encode_h265)
"def VkVideoEncodeH265CapabilitiesKHR() { var self: VkVideoEncodeH265CapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265CapabilitiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_CAPABILITIES_KHR; }\n"
"def VkVideoEncodeH265DpbSlotInfoKHR() { var self: VkVideoEncodeH265DpbSlotInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265DpbSlotInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR; }\n"
"def VkVideoEncodeH265GopRemainingFrameInfoKHR() { var self: VkVideoEncodeH265GopRemainingFrameInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265GopRemainingFrameInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR; }\n"
"def VkVideoEncodeH265NaluSliceSegmentInfoKHR() { var self: VkVideoEncodeH265NaluSliceSegmentInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265NaluSliceSegmentInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR; }\n"
"def VkVideoEncodeH265PictureInfoKHR() { var self: VkVideoEncodeH265PictureInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_PICTURE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265PictureInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_PICTURE_INFO_KHR; }\n"
"def VkVideoEncodeH265ProfileInfoKHR() { var self: VkVideoEncodeH265ProfileInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_PROFILE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265ProfileInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_PROFILE_INFO_KHR; }\n"
"def VkVideoEncodeH265QualityLevelPropertiesKHR() { var self: VkVideoEncodeH265QualityLevelPropertiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265QualityLevelPropertiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265)
"def VkVideoEncodeH265QuantizationMapCapabilitiesKHR() { var self: VkVideoEncodeH265QuantizationMapCapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_QUANTIZATION_MAP_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265QuantizationMapCapabilitiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_QUANTIZATION_MAP_CAPABILITIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_h265)
"def VkVideoEncodeH265RateControlInfoKHR() { var self: VkVideoEncodeH265RateControlInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265RateControlInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR; }\n"
"def VkVideoEncodeH265RateControlLayerInfoKHR() { var self: VkVideoEncodeH265RateControlLayerInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265RateControlLayerInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR; }\n"
"def VkVideoEncodeH265SessionCreateInfoKHR() { var self: VkVideoEncodeH265SessionCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265SessionCreateInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR; }\n"
"def VkVideoEncodeH265SessionParametersAddInfoKHR() { var self: VkVideoEncodeH265SessionParametersAddInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265SessionParametersAddInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR; }\n"
"def VkVideoEncodeH265SessionParametersCreateInfoKHR() { var self: VkVideoEncodeH265SessionParametersCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265SessionParametersCreateInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR; }\n"
"def VkVideoEncodeH265SessionParametersFeedbackInfoKHR() { var self: VkVideoEncodeH265SessionParametersFeedbackInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265SessionParametersFeedbackInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR; }\n"
"def VkVideoEncodeH265SessionParametersGetInfoKHR() { var self: VkVideoEncodeH265SessionParametersGetInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeH265SessionParametersGetInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_encode_queue)
"def VkVideoEncodeInfoKHR() { var self: VkVideoEncodeInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_INFO_KHR; }\n"
"def VkVideoEncodeQualityLevelInfoKHR() { var self: VkVideoEncodeQualityLevelInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeQualityLevelInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR; }\n"
"def VkVideoEncodeQualityLevelPropertiesKHR() { var self: VkVideoEncodeQualityLevelPropertiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeQualityLevelPropertiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_encode_quantization_map)
"def VkVideoEncodeQuantizationMapCapabilitiesKHR() { var self: VkVideoEncodeQuantizationMapCapabilitiesKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_QUANTIZATION_MAP_CAPABILITIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeQuantizationMapCapabilitiesKHR explicit) { return VkStructureType.VIDEO_ENCODE_QUANTIZATION_MAP_CAPABILITIES_KHR; }\n"
"def VkVideoEncodeQuantizationMapInfoKHR() { var self: VkVideoEncodeQuantizationMapInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_QUANTIZATION_MAP_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeQuantizationMapInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_QUANTIZATION_MAP_INFO_KHR; }\n"
"def VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR() { var self: VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_QUANTIZATION_MAP_SESSION_PARAMETERS_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_QUANTIZATION_MAP_SESSION_PARAMETERS_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_encode_queue)
"def VkVideoEncodeRateControlLayerInfoKHR() { var self: VkVideoEncodeRateControlLayerInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeRateControlLayerInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR; }\n"
"def VkVideoEncodeRateControlInfoKHR() { var self: VkVideoEncodeRateControlInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_RATE_CONTROL_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeRateControlInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_RATE_CONTROL_INFO_KHR; }\n"
"def VkVideoEncodeSessionParametersFeedbackInfoKHR() { var self: VkVideoEncodeSessionParametersFeedbackInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeSessionParametersFeedbackInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR; }\n"
"def VkVideoEncodeSessionParametersGetInfoKHR() { var self: VkVideoEncodeSessionParametersGetInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeSessionParametersGetInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR; }\n"
"def VkVideoEncodeUsageInfoKHR() { var self: VkVideoEncodeUsageInfoKHR;"
" self.sType = VkStructureType.VIDEO_ENCODE_USAGE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEncodeUsageInfoKHR explicit) { return VkStructureType.VIDEO_ENCODE_USAGE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_queue) */
#if defined(VK_KHR_video_queue)
"def VkVideoEndCodingInfoKHR() { var self: VkVideoEndCodingInfoKHR;"
" self.sType = VkStructureType.VIDEO_END_CODING_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoEndCodingInfoKHR explicit) { return VkStructureType.VIDEO_END_CODING_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1)
"def VkVideoFormatAV1QuantizationMapPropertiesKHR() { var self: VkVideoFormatAV1QuantizationMapPropertiesKHR;"
" self.sType = VkStructureType.VIDEO_FORMAT_AV1_QUANTIZATION_MAP_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoFormatAV1QuantizationMapPropertiesKHR explicit) { return VkStructureType.VIDEO_FORMAT_AV1_QUANTIZATION_MAP_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_av1) */
#if defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265)
"def VkVideoFormatH265QuantizationMapPropertiesKHR() { var self: VkVideoFormatH265QuantizationMapPropertiesKHR;"
" self.sType = VkStructureType.VIDEO_FORMAT_H265_QUANTIZATION_MAP_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoFormatH265QuantizationMapPropertiesKHR explicit) { return VkStructureType.VIDEO_FORMAT_H265_QUANTIZATION_MAP_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_quantization_map) && defined(VK_KHR_video_encode_h265) */
#if defined(VK_KHR_video_queue)
"def VkVideoFormatPropertiesKHR() { var self: VkVideoFormatPropertiesKHR;"
" self.sType = VkStructureType.VIDEO_FORMAT_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoFormatPropertiesKHR explicit) { return VkStructureType.VIDEO_FORMAT_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_video_encode_quantization_map)
"def VkVideoFormatQuantizationMapPropertiesKHR() { var self: VkVideoFormatQuantizationMapPropertiesKHR;"
" self.sType = VkStructureType.VIDEO_FORMAT_QUANTIZATION_MAP_PROPERTIES_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoFormatQuantizationMapPropertiesKHR explicit) { return VkStructureType.VIDEO_FORMAT_QUANTIZATION_MAP_PROPERTIES_KHR; }\n"
#endif /* defined(VK_KHR_video_encode_quantization_map) */
#if defined(VK_KHR_video_maintenance1)
"def VkVideoInlineQueryInfoKHR() { var self: VkVideoInlineQueryInfoKHR;"
" self.sType = VkStructureType.VIDEO_INLINE_QUERY_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoInlineQueryInfoKHR explicit) { return VkStructureType.VIDEO_INLINE_QUERY_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_maintenance1) */
#if defined(VK_KHR_video_queue)
"def VkVideoProfileListInfoKHR() { var self: VkVideoProfileListInfoKHR;"
" self.sType = VkStructureType.VIDEO_PROFILE_LIST_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoProfileListInfoKHR explicit) { return VkStructureType.VIDEO_PROFILE_LIST_INFO_KHR; }\n"
"def VkVideoSessionCreateInfoKHR() { var self: VkVideoSessionCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_SESSION_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoSessionCreateInfoKHR explicit) { return VkStructureType.VIDEO_SESSION_CREATE_INFO_KHR; }\n"
"def VkVideoSessionMemoryRequirementsKHR() { var self: VkVideoSessionMemoryRequirementsKHR;"
" self.sType = VkStructureType.VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoSessionMemoryRequirementsKHR explicit) { return VkStructureType.VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR; }\n"
"def VkVideoSessionParametersCreateInfoKHR() { var self: VkVideoSessionParametersCreateInfoKHR;"
" self.sType = VkStructureType.VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoSessionParametersCreateInfoKHR explicit) { return VkStructureType.VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR; }\n"
"def VkVideoSessionParametersUpdateInfoKHR() { var self: VkVideoSessionParametersUpdateInfoKHR;"
" self.sType = VkStructureType.VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkVideoSessionParametersUpdateInfoKHR explicit) { return VkStructureType.VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_video_queue) */
#if defined(VK_KHR_wayland_surface)
"def VkWaylandSurfaceCreateInfoKHR() { var self: VkWaylandSurfaceCreateInfoKHR;"
" self.sType = VkStructureType.WAYLAND_SURFACE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkWaylandSurfaceCreateInfoKHR explicit) { return VkStructureType.WAYLAND_SURFACE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_wayland_surface) */
#if defined(VK_KHR_win32_keyed_mutex)
"def VkWin32KeyedMutexAcquireReleaseInfoKHR() { var self: VkWin32KeyedMutexAcquireReleaseInfoKHR;"
" self.sType = VkStructureType.WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkWin32KeyedMutexAcquireReleaseInfoKHR explicit) { return VkStructureType.WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_win32_keyed_mutex) */
#if defined(VK_NV_win32_keyed_mutex)
"def VkWin32KeyedMutexAcquireReleaseInfoNV() { var self: VkWin32KeyedMutexAcquireReleaseInfoNV;"
" self.sType = VkStructureType.WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV;"
" return <- self; }\n"
"def struct_type(t: VkWin32KeyedMutexAcquireReleaseInfoNV explicit) { return VkStructureType.WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV; }\n"
#endif /* defined(VK_NV_win32_keyed_mutex) */
#if defined(VK_KHR_win32_surface)
"def VkWin32SurfaceCreateInfoKHR() { var self: VkWin32SurfaceCreateInfoKHR;"
" self.sType = VkStructureType.WIN32_SURFACE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkWin32SurfaceCreateInfoKHR explicit) { return VkStructureType.WIN32_SURFACE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_win32_surface) */
#if defined(VK_KHR_acceleration_structure)
"def VkWriteDescriptorSetAccelerationStructureKHR() { var self: VkWriteDescriptorSetAccelerationStructureKHR;"
" self.sType = VkStructureType.WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR;"
" return <- self; }\n"
"def struct_type(t: VkWriteDescriptorSetAccelerationStructureKHR explicit) { return VkStructureType.WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR; }\n"
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_NV_ray_tracing)
"def VkWriteDescriptorSetAccelerationStructureNV() { var self: VkWriteDescriptorSetAccelerationStructureNV;"
" self.sType = VkStructureType.WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV;"
" return <- self; }\n"
"def struct_type(t: VkWriteDescriptorSetAccelerationStructureNV explicit) { return VkStructureType.WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV; }\n"
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_VERSION_1_3)
"def VkWriteDescriptorSetInlineUniformBlock() { var self: VkWriteDescriptorSetInlineUniformBlock;"
" self.sType = VkStructureType.WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK;"
" return <- self; }\n"
"def struct_type(t: VkWriteDescriptorSetInlineUniformBlock explicit) { return VkStructureType.WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK; }\n"
#endif /* defined(VK_VERSION_1_3) */
#if defined(VK_EXT_device_generated_commands)
"def VkWriteIndirectExecutionSetPipelineEXT() { var self: VkWriteIndirectExecutionSetPipelineEXT;"
" self.sType = VkStructureType.WRITE_INDIRECT_EXECUTION_SET_PIPELINE_EXT;"
" return <- self; }\n"
"def struct_type(t: VkWriteIndirectExecutionSetPipelineEXT explicit) { return VkStructureType.WRITE_INDIRECT_EXECUTION_SET_PIPELINE_EXT; }\n"
#endif /* defined(VK_EXT_device_generated_commands) */
#if defined(VK_EXT_device_generated_commands) && defined(VK_EXT_shader_object)
"def VkWriteIndirectExecutionSetShaderEXT() { var self: VkWriteIndirectExecutionSetShaderEXT;"
" self.sType = VkStructureType.WRITE_INDIRECT_EXECUTION_SET_SHADER_EXT;"
" return <- self; }\n"
"def struct_type(t: VkWriteIndirectExecutionSetShaderEXT explicit) { return VkStructureType.WRITE_INDIRECT_EXECUTION_SET_SHADER_EXT; }\n"
#endif /* defined(VK_EXT_device_generated_commands) && defined(VK_EXT_shader_object) */
#if defined(VK_KHR_xcb_surface)
"def VkXcbSurfaceCreateInfoKHR() { var self: VkXcbSurfaceCreateInfoKHR;"
" self.sType = VkStructureType.XCB_SURFACE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkXcbSurfaceCreateInfoKHR explicit) { return VkStructureType.XCB_SURFACE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_xcb_surface) */
#if defined(VK_KHR_xlib_surface)
"def VkXlibSurfaceCreateInfoKHR() { var self: VkXlibSurfaceCreateInfoKHR;"
" self.sType = VkStructureType.XLIB_SURFACE_CREATE_INFO_KHR;"
" return <- self; }\n"
"def struct_type(t: VkXlibSurfaceCreateInfoKHR explicit) { return VkStructureType.XLIB_SURFACE_CREATE_INFO_KHR; }\n"
#endif /* defined(VK_KHR_xlib_surface) */
/* VOLK_GENERATE_DAS_GLOBAL */
};

void das::Module_dasVulkan::compileBuiltin()
{
  compileBuiltinModule("vulkan.das", (uint8_t*)builtinSource, sizeof(builtinSource));
}
