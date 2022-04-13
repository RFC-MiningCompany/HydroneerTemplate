#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
		X               = 0x0000000000000000,
		XYWithCache     = 0x0000000000000001,
		XYWithoutCache  = 0x0000000000000002,
		XYZWithCache    = 0x0000000000000003,
		XYZWithoutCache = 0x0000000000000004,
		MAX             = 0x0000000000000005
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphGeneratorDebugLevel
	 */
	enum class EVoxelGraphGeneratorDebugLevel : uint8_t
	{
		BeforeMacroInlining          = 0x0000000000000000,
		AfterMacroInlining           = 0x0000000000000001,
		AfterBiomeMergeReplace       = 0x0000000000000002,
		AfterSmartMinMaxReplace      = 0x0000000000000003,
		BeforeFillFunctionSeparators = 0x0000000000000004,
		Output                       = 0x0000000000000005,
		Function                     = 0x0000000000000006,
		Axis                         = 0x0000000000000007,
		MAX                          = 0x0000000000000008
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphMaterialPreviewType
	 */
	enum class EVoxelGraphMaterialPreviewType : uint8_t
	{
		RGB                           = 0x0000000000000000,
		Alpha                         = 0x0000000000000001,
		SingleIndex                   = 0x0000000000000002,
		MultiIndex_Overview           = 0x0000000000000003,
		MultiIndex_SingleIndexPreview = 0x0000000000000004,
		MultiIndex_Wetness            = 0x0000000000000005,
		UV0                           = 0x0000000000000006,
		UV1                           = 0x0000000000000007,
		UV2                           = 0x0000000000000008,
		UV3                           = 0x0000000000000009,
		MAX                           = 0x000000000000000A
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewShowValue
	 */
	enum class EVoxelGraphPreviewShowValue : uint8_t
	{
		ShowValue         = 0x0000000000000000,
		ShowRange         = 0x0000000000000001,
		ShowValueAndRange = 0x0000000000000002,
		MAX               = 0x0000000000000003
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewType
	 */
	enum class EVoxelGraphPreviewType : uint8_t
	{
		Density       = 0x0000000000000000,
		Material      = 0x0000000000000001,
		Cost          = 0x0000000000000002,
		RangeAnalysis = 0x0000000000000003,
		MAX           = 0x0000000000000004
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewAxes
	 */
	enum class EVoxelGraphPreviewAxes : uint8_t
	{
		X   = 0x0000000000000000,
		Y   = 0x0000000000000001,
		Z   = 0x0000000000000002,
		MAX = 0x0000000000000003
	};

	/**
	 * Enum VoxelGraph.EVoxelNodeIfBranchToUseForRangeAnalysis
	 */
	enum class EVoxelNodeIfBranchToUseForRangeAnalysis : uint8_t
	{
		None     = 0x0000000000000000,
		UseTrue  = 0x0000000000000001,
		UseFalse = 0x0000000000000002,
		MAX      = 0x0000000000000003
	};

	/**
	 * Enum VoxelGraph.EVoxelPortalNodePinCategory
	 */
	enum class EVoxelPortalNodePinCategory : uint8_t
	{
		Boolean  = 0x0000000000000000,
		Int      = 0x0000000000000001,
		Float    = 0x0000000000000002,
		Material = 0x0000000000000003,
		Color    = 0x0000000000000004,
		Seed     = 0x0000000000000005,
		MAX      = 0x0000000000000006
	};

	/**
	 * Enum VoxelGraph.EVoxelDataPinCategory
	 */
	enum class EVoxelDataPinCategory : uint8_t
	{
		Boolean  = 0x0000000000000000,
		Int      = 0x0000000000000001,
		Float    = 0x0000000000000002,
		Material = 0x0000000000000003,
		Color    = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum VoxelGraph.EVoxelPinCategory
	 */
	enum class EVoxelPinCategory : uint8_t
	{
		Exec     = 0x0000000000000000,
		Boolean  = 0x0000000000000001,
		Int      = 0x0000000000000002,
		Float    = 0x0000000000000003,
		Material = 0x0000000000000004,
		Color    = 0x0000000000000005,
		Seed     = 0x0000000000000006,
		Wildcard = 0x0000000000000007,
		Vector   = 0x0000000000000008,
		MAX      = 0x0000000000000009
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
		unsigned char                                              UnknownData_JDSA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_F5MH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_YR18[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_XILU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_ZE5P[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Tooltip;                                                 // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomDefaultValue;                                     // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FZ8[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
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
