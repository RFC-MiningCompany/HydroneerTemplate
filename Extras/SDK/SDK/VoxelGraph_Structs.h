#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
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
	enum class EVoxelFunctionAxisDependencies : uint8_t
	{
		X               = 0,
		XYWithCache     = 1,
		XYWithoutCache  = 2,
		XYZWithCache    = 3,
		XYZWithoutCache = 4,
		MAX             = 5
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphGeneratorDebugLevel
	 */
	enum class EVoxelGraphGeneratorDebugLevel : uint8_t
	{
		BeforeMacroInlining          = 0,
		AfterMacroInlining           = 1,
		AfterBiomeMergeReplace       = 2,
		AfterSmartMinMaxReplace      = 3,
		BeforeFillFunctionSeparators = 4,
		Output                       = 5,
		Function                     = 6,
		Axis                         = 7,
		MAX                          = 8
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphMaterialPreviewType
	 */
	enum class EVoxelGraphMaterialPreviewType : uint8_t
	{
		RGB                           = 0,
		Alpha                         = 1,
		SingleIndex                   = 2,
		MultiIndex_Overview           = 3,
		MultiIndex_SingleIndexPreview = 4,
		MultiIndex_Wetness            = 5,
		UV0                           = 6,
		UV1                           = 7,
		UV2                           = 8,
		UV3                           = 9,
		MAX                           = 10
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewShowValue
	 */
	enum class EVoxelGraphPreviewShowValue : uint8_t
	{
		ShowValue         = 0,
		ShowRange         = 1,
		ShowValueAndRange = 2,
		MAX               = 3
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewType
	 */
	enum class EVoxelGraphPreviewType : uint8_t
	{
		Density       = 0,
		Material      = 1,
		Cost          = 2,
		RangeAnalysis = 3,
		MAX           = 4
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewAxes
	 */
	enum class EVoxelGraphPreviewAxes : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum VoxelGraph.EVoxelNodeIfBranchToUseForRangeAnalysis
	 */
	enum class EVoxelNodeIfBranchToUseForRangeAnalysis : uint8_t
	{
		None     = 0,
		UseTrue  = 1,
		UseFalse = 2,
		MAX      = 3
	};

	/**
	 * Enum VoxelGraph.EVoxelPortalNodePinCategory
	 */
	enum class EVoxelPortalNodePinCategory : uint8_t
	{
		Boolean  = 0,
		Int      = 1,
		Float    = 2,
		Material = 3,
		Color    = 4,
		Seed     = 5,
		MAX      = 6
	};

	/**
	 * Enum VoxelGraph.EVoxelDataPinCategory
	 */
	enum class EVoxelDataPinCategory : uint8_t
	{
		Boolean  = 0,
		Int      = 1,
		Float    = 2,
		Material = 3,
		Color    = 4,
		MAX      = 5
	};

	/**
	 * Enum VoxelGraph.EVoxelPinCategory
	 */
	enum class EVoxelPinCategory : uint8_t
	{
		Exec     = 0,
		Boolean  = 1,
		Int      = 2,
		Float    = 3,
		Material = 4,
		Color    = 5,
		Seed     = 6,
		Wildcard = 7,
		Vector   = 8,
		MAX      = 9
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
		EVoxelPinCategory                                          PinCategory;                                             // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWLS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVoxelNode*>                                  OtherNodes;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       OtherPinIds;                                             // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VoxelGraph.BiomeMapElement
	 * Size -> 0x0018
	 */
	struct FBiomeMapElement
	{
	public:
		struct FColor                                              Color;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYZW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		EVoxelDataPinCategory                                      Category;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJHD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		EVoxelDataPinCategory                                      Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HC2C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		EVoxelPinCategory                                          Category;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFU8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Tooltip;                                                 // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomDefaultValue;                                     // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWF5[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
