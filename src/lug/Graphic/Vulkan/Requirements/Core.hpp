#pragma once

#include <lug/Config.hpp>

namespace lug {
namespace Graphic {
namespace Vulkan {
namespace Requirements {
namespace Core {

const Renderer::Requirements requirements{
    // mandatoryInstanceExtensions
    {
        VK_KHR_SURFACE_EXTENSION_NAME,
        LUG_VK_KHR_PLATFORM_SURFACE_EXTENSION_NAME
    },

    // mandatoryInstanceLayers
    {},

    // mandatoryDeviceExtensions
    {
        VK_KHR_SWAPCHAIN_EXTENSION_NAME
    },

    // optionnalInstanceExtensions
    {
#if defined(LUG_DEBUG)
        VK_EXT_DEBUG_REPORT_EXTENSION_NAME
#endif
    },

    // optionnalInstanceLayers
    {
#if defined(LUG_DEBUG)
        "VK_LAYER_LUNARG_standard_validation"
#endif
    },

    // optionnalDeviceExtensions
    {},

    // mandatoryFeatures
    {
        VK_FALSE, // robustBufferAccess
        VK_FALSE, // fullDrawIndexUint32
        VK_FALSE, // imageCubeArray
        VK_FALSE, // independentBlend
        VK_FALSE, // geometryShader
        VK_FALSE, // tessellationShader
        VK_FALSE, // sampleRateShading
        VK_FALSE, // dualSrcBlend
        VK_FALSE, // logicOp
        VK_FALSE, // multiDrawIndirect
        VK_FALSE, // drawIndirectFirstInstance
        VK_FALSE, // depthClamp
        VK_FALSE, // depthBiasClamp
        VK_FALSE, // fillModeNonSolid
        VK_FALSE, // depthBounds
        VK_FALSE, // wideLines
        VK_FALSE, // largePoints
        VK_FALSE, // alphaToOne
        VK_FALSE, // multiViewport
        VK_FALSE, // samplerAnisotropy
        VK_FALSE, // textureCompressionETC2
        VK_FALSE, // textureCompressionASTC_LDR
        VK_FALSE, // textureCompressionBC
        VK_FALSE, // occlusionQueryPrecise
        VK_FALSE, // pipelineStatisticsQuery
        VK_FALSE, // vertexPipelineStoresAndAtomics
        VK_FALSE, // fragmentStoresAndAtomics
        VK_FALSE, // shaderTessellationAndGeometryPointSize
        VK_FALSE, // shaderImageGatherExtended
        VK_FALSE, // shaderStorageImageExtendedFormats
        VK_FALSE, // shaderStorageImageMultisample
        VK_FALSE, // shaderStorageImageReadWithoutFormat
        VK_FALSE, // shaderStorageImageWriteWithoutFormat
        VK_FALSE, // shaderUniformBufferArrayDynamicIndexing
        VK_FALSE, // shaderSampledImageArrayDynamicIndexing
        VK_FALSE, // shaderStorageBufferArrayDynamicIndexing
        VK_FALSE, // shaderStorageImageArrayDynamicIndexing
        VK_FALSE, // shaderClipDistance
        VK_FALSE, // shaderCullDistance
        VK_FALSE, // shaderFloat64
        VK_FALSE, // shaderInt64
        VK_FALSE, // shaderInt16
        VK_FALSE, // shaderResourceResidency
        VK_FALSE, // shaderResourceMinLod
        VK_FALSE, // sparseBinding
        VK_FALSE, // sparseResidencyBuffer
        VK_FALSE, // sparseResidencyImage2D
        VK_FALSE, // sparseResidencyImage3D
        VK_FALSE, // sparseResidency2Samples
        VK_FALSE, // sparseResidency4Samples
        VK_FALSE, // sparseResidency8Samples
        VK_FALSE, // sparseResidency16Samples
        VK_FALSE, // sparseResidencyAliased
        VK_FALSE, // variableMultisampleRate
        VK_FALSE, // inheritedQueries
    },

    // optionnalFeatures
    {
        VK_FALSE, // robustBufferAccess
        VK_FALSE, // fullDrawIndexUint32
        VK_FALSE, // imageCubeArray
        VK_FALSE, // independentBlend
        VK_FALSE, // geometryShader
        VK_FALSE, // tessellationShader
        VK_FALSE, // sampleRateShading
        VK_FALSE, // dualSrcBlend
        VK_FALSE, // logicOp
        VK_FALSE, // multiDrawIndirect
        VK_FALSE, // drawIndirectFirstInstance
        VK_FALSE, // depthClamp
        VK_FALSE, // depthBiasClamp
        VK_FALSE, // fillModeNonSolid
        VK_FALSE, // depthBounds
        VK_FALSE, // wideLines
        VK_FALSE, // largePoints
        VK_FALSE, // alphaToOne
        VK_FALSE, // multiViewport
        VK_FALSE, // samplerAnisotropy
        VK_FALSE, // textureCompressionETC2
        VK_FALSE, // textureCompressionASTC_LDR
        VK_FALSE, // textureCompressionBC
        VK_FALSE, // occlusionQueryPrecise
        VK_FALSE, // pipelineStatisticsQuery
        VK_FALSE, // vertexPipelineStoresAndAtomics
        VK_FALSE, // fragmentStoresAndAtomics
        VK_FALSE, // shaderTessellationAndGeometryPointSize
        VK_FALSE, // shaderImageGatherExtended
        VK_FALSE, // shaderStorageImageExtendedFormats
        VK_FALSE, // shaderStorageImageMultisample
        VK_FALSE, // shaderStorageImageReadWithoutFormat
        VK_FALSE, // shaderStorageImageWriteWithoutFormat
        VK_FALSE, // shaderUniformBufferArrayDynamicIndexing
        VK_FALSE, // shaderSampledImageArrayDynamicIndexing
        VK_FALSE, // shaderStorageBufferArrayDynamicIndexing
        VK_FALSE, // shaderStorageImageArrayDynamicIndexing
        VK_FALSE, // shaderClipDistance
        VK_FALSE, // shaderCullDistance
        VK_FALSE, // shaderFloat64
        VK_FALSE, // shaderInt64
        VK_FALSE, // shaderInt16
        VK_FALSE, // shaderResourceResidency
        VK_FALSE, // shaderResourceMinLod
        VK_FALSE, // sparseBinding
        VK_FALSE, // sparseResidencyBuffer
        VK_FALSE, // sparseResidencyImage2D
        VK_FALSE, // sparseResidencyImage3D
        VK_FALSE, // sparseResidency2Samples
        VK_FALSE, // sparseResidency4Samples
        VK_FALSE, // sparseResidency8Samples
        VK_FALSE, // sparseResidency16Samples
        VK_FALSE, // sparseResidencyAliased
        VK_FALSE, // variableMultisampleRate
        VK_FALSE, // inheritedQueries
    },

    // mandatoryQueueFamilies
    {
        VK_QUEUE_GRAPHICS_BIT
    },

    // optionnalQueueFamilies
    {}
};

} // Core
} // Requirements
} // Vulkan
} // Graphic
} // lug