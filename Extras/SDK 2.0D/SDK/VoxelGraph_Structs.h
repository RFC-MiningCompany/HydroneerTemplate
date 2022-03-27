#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum VoxelGraph.EVoxelFunctionAxisDependencies
	 */
	enum class VoxelGraph_EVoxelFunctionAxisDependencies : uint8_t
	{
		EVoxelFunctionAxisDependencies__X                                  = 0,
		EVoxelFunctionAxisDependencies__XYWithCache                        = 1,
		EVoxelFunctionAxisDependencies__XYWithoutCache                     = 2,
		EVoxelFunctionAxisDependencies__XYZWithCache                       = 3,
		EVoxelFunctionAxisDependencies__XYZWithoutCache                    = 4,
		EVoxelFunctionAxisDependencies__EVoxelFunctionAxisDependencies_MAX = 5
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphGeneratorDebugLevel
	 */
	enum class VoxelGraph_EVoxelGraphGeneratorDebugLevel : uint8_t
	{
		EVoxelGraphGeneratorDebugLevel__BeforeMacroInlining                = 0,
		EVoxelGraphGeneratorDebugLevel__AfterMacroInlining                 = 1,
		EVoxelGraphGeneratorDebugLevel__AfterBiomeMergeReplace             = 2,
		EVoxelGraphGeneratorDebugLevel__AfterSmartMinMaxReplace            = 3,
		EVoxelGraphGeneratorDebugLevel__BeforeFillFunctionSeparators       = 4,
		EVoxelGraphGeneratorDebugLevel__Output                             = 5,
		EVoxelGraphGeneratorDebugLevel__Function                           = 6,
		EVoxelGraphGeneratorDebugLevel__Axis                               = 7,
		EVoxelGraphGeneratorDebugLevel__EVoxelGraphGeneratorDebugLevel_MAX = 8
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphMaterialPreviewType
	 */
	enum class VoxelGraph_EVoxelGraphMaterialPreviewType : uint8_t
	{
		EVoxelGraphMaterialPreviewType__RGB                                = 0,
		EVoxelGraphMaterialPreviewType__Alpha                              = 1,
		EVoxelGraphMaterialPreviewType__SingleIndex                        = 2,
		EVoxelGraphMaterialPreviewType__MultiIndex_Overview                = 3,
		EVoxelGraphMaterialPreviewType__MultiIndex_SingleIndexPreview      = 4,
		EVoxelGraphMaterialPreviewType__MultiIndex_Wetness                 = 5,
		EVoxelGraphMaterialPreviewType__UV0                                = 6,
		EVoxelGraphMaterialPreviewType__UV1                                = 7,
		EVoxelGraphMaterialPreviewType__UV2                                = 8,
		EVoxelGraphMaterialPreviewType__UV3                                = 9,
		EVoxelGraphMaterialPreviewType__EVoxelGraphMaterialPreviewType_MAX = 10
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewShowValue
	 */
	enum class VoxelGraph_EVoxelGraphPreviewShowValue : uint8_t
	{
		EVoxelGraphPreviewShowValue__ShowValue                       = 0,
		EVoxelGraphPreviewShowValue__ShowRange                       = 1,
		EVoxelGraphPreviewShowValue__ShowValueAndRange               = 2,
		EVoxelGraphPreviewShowValue__EVoxelGraphPreviewShowValue_MAX = 3
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewType
	 */
	enum class VoxelGraph_EVoxelGraphPreviewType : uint8_t
	{
		EVoxelGraphPreviewType__Density                    = 0,
		EVoxelGraphPreviewType__Material                   = 1,
		EVoxelGraphPreviewType__Cost                       = 2,
		EVoxelGraphPreviewType__RangeAnalysis              = 3,
		EVoxelGraphPreviewType__EVoxelGraphPreviewType_MAX = 4
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewAxes
	 */
	enum class VoxelGraph_EVoxelGraphPreviewAxes : uint8_t
	{
		EVoxelGraphPreviewAxes__X                          = 0,
		EVoxelGraphPreviewAxes__Y                          = 1,
		EVoxelGraphPreviewAxes__Z                          = 2,
		EVoxelGraphPreviewAxes__EVoxelGraphPreviewAxes_MAX = 3
	};

	/**
	 * Enum VoxelGraph.EVoxelNodeIfBranchToUseForRangeAnalysis
	 */
	enum class VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis : uint8_t
	{
		EVoxelNodeIfBranchToUseForRangeAnalysis__None                                        = 0,
		EVoxelNodeIfBranchToUseForRangeAnalysis__UseTrue                                     = 1,
		EVoxelNodeIfBranchToUseForRangeAnalysis__UseFalse                                    = 2,
		EVoxelNodeIfBranchToUseForRangeAnalysis__EVoxelNodeIfBranchToUseForRangeAnalysis_MAX = 3
	};

	/**
	 * Enum VoxelGraph.EVoxelPortalNodePinCategory
	 */
	enum class VoxelGraph_EVoxelPortalNodePinCategory : uint8_t
	{
		EVoxelPortalNodePinCategory__Boolean                         = 0,
		EVoxelPortalNodePinCategory__Int                             = 1,
		EVoxelPortalNodePinCategory__Float                           = 2,
		EVoxelPortalNodePinCategory__Material                        = 3,
		EVoxelPortalNodePinCategory__Color                           = 4,
		EVoxelPortalNodePinCategory__Seed                            = 5,
		EVoxelPortalNodePinCategory__EVoxelPortalNodePinCategory_MAX = 6
	};

	/**
	 * Enum VoxelGraph.EVoxelDataPinCategory
	 */
	enum class VoxelGraph_EVoxelDataPinCategory : uint8_t
	{
		EVoxelDataPinCategory__Boolean                   = 0,
		EVoxelDataPinCategory__Int                       = 1,
		EVoxelDataPinCategory__Float                     = 2,
		EVoxelDataPinCategory__Material                  = 3,
		EVoxelDataPinCategory__Color                     = 4,
		EVoxelDataPinCategory__EVoxelDataPinCategory_MAX = 5
	};

	/**
	 * Enum VoxelGraph.EVoxelPinCategory
	 */
	enum class VoxelGraph_EVoxelPinCategory : uint8_t
	{
		EVoxelPinCategory__Exec                  = 0,
		EVoxelPinCategory__Boolean               = 1,
		EVoxelPinCategory__Int                   = 2,
		EVoxelPinCategory__Float                 = 3,
		EVoxelPinCategory__Material              = 4,
		EVoxelPinCategory__Color                 = 5,
		EVoxelPinCategory__Seed                  = 6,
		EVoxelPinCategory__Wildcard              = 7,
		EVoxelPinCategory__Vector                = 8,
		EVoxelPinCategory__EVoxelPinCategory_MAX = 9
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VoxelGraph.VoxelPin
	 * Size -> 0x0048
	 */
	struct FVoxelPin
	{
	public:
		struct FGuid                                               PinId;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EVoxelPinCategory                               PinCategory;                                             // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HD8B[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVoxelNode*>                                  OtherNodes;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       OtherPinIds;                                             // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.VoxelPortalNodeSelector
	 * Size -> 0x0008
	 */
	struct FVoxelPortalNodeSelector
	{
	public:
		TWeakObjectPtr<class UVoxelLocalVariableDeclaration>       Input;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.BiomeMapElement
	 * Size -> 0x0018
	 */
	struct FBiomeMapElement
	{
	public:
		struct FColor                                              Color;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74C2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.VoxelGraphOutput
	 * Size -> 0x0020
	 */
	struct FVoxelGraphOutput
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EVoxelDataPinCategory                           Category;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFMY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Index;                                                   // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.VoxelNamedDataPin
	 * Size -> 0x0018
	 */
	struct FVoxelNamedDataPin
	{
	public:
		VoxelGraph_EVoxelDataPinCategory                           Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Z1W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.VoxelGraphMacroPin
	 * Size -> 0x0040
	 */
	struct FVoxelGraphMacroPin
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EVoxelPinCategory                               Category;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQ7X[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Tooltip;                                                 // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomDefaultValue;                                     // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BNI[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
