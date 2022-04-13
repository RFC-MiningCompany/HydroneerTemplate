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
	 * Enum Voxel.EVoxelTaskType
	 */
	enum class EVoxelTaskType : uint8_t
	{
		ChunksMeshing                  = 0x0000000000000000,
		CollisionsChunksMeshing        = 0x0000000000000001,
		VisibleChunksMeshing           = 0x0000000000000002,
		VisibleCollisionsChunksMeshing = 0x0000000000000003,
		CollisionCooking               = 0x0000000000000004,
		FoliageBuild                   = 0x0000000000000005,
		HISMBuild                      = 0x0000000000000006,
		AsyncEditFunctions             = 0x0000000000000007,
		MeshMerge                      = 0x0000000000000008,
		RenderOctree                   = 0x0000000000000009,
		Max                            = 0x000000000000000A
	};

	/**
	 * Enum Voxel.EVoxelFoliageWorldType
	 */
	enum class EVoxelFoliageWorldType : uint8_t
	{
		Flat   = 0x0000000000000000,
		Planet = 0x0000000000000001,
		MAX    = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelRenderType
	 */
	enum class EVoxelRenderType : uint8_t
	{
		MarchingCubes = 0x0000000000000000,
		Cubic         = 0x0000000000000001,
		SurfaceNets   = 0x0000000000000002,
		MAX           = 0x0000000000000003
	};

	/**
	 * Enum Voxel.EVoxelRGBHardness
	 */
	enum class EVoxelRGBHardness : uint8_t
	{
		FourWayBlend = 0x0000000000000000,
		FiveWayBlend = 0x0000000000000001,
		R            = 0x0000000000000002,
		G            = 0x0000000000000003,
		B            = 0x0000000000000004,
		A            = 0x0000000000000005,
		U0           = 0x0000000000000006,
		U1           = 0x0000000000000007,
		V0           = 0x0000000000000008,
		V1           = 0x0000000000000009,
		MAX          = 0x000000000000000A
	};

	/**
	 * Enum Voxel.EVoxelNormalConfig
	 */
	enum class EVoxelNormalConfig : uint8_t
	{
		NoNormal       = 0x0000000000000000,
		GradientNormal = 0x0000000000000001,
		FlatNormal     = 0x0000000000000002,
		MeshNormal     = 0x0000000000000003,
		MAX            = 0x0000000000000004
	};

	/**
	 * Enum Voxel.EVoxelUVConfig
	 */
	enum class EVoxelUVConfig : uint8_t
	{
		GlobalUVs        = 0x0000000000000000,
		PackWorldUpInUVs = 0x0000000000000001,
		PerVoxelUVs      = 0x0000000000000002,
		Max              = 0x0000000000000003
	};

	/**
	 * Enum Voxel.EVoxelMaterialConfig
	 */
	enum class EVoxelMaterialConfig : uint8_t
	{
		RGB                    = 0x0000000000000000,
		SingleIndex            = 0x0000000000000001,
		DoubleIndex_DEPRECATED = 0x0000000000000002,
		MultiIndex             = 0x0000000000000003,
		MAX                    = 0x0000000000000004
	};

	/**
	 * Enum Voxel.EVoxelGeneratorPickerType
	 */
	enum class EVoxelGeneratorPickerType : uint8_t
	{
		Class  = 0x0000000000000000,
		Object = 0x0000000000000001,
		MAX    = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelWorldCoordinatesRounding
	 */
	enum class EVoxelWorldCoordinatesRounding : uint8_t
	{
		RoundToNearest = 0x0000000000000000,
		RoundUp        = 0x0000000000000001,
		RoundDown      = 0x0000000000000002,
		MAX            = 0x0000000000000003
	};

	/**
	 * Enum Voxel.EVoxelAssetActorPreviewUpdateType
	 */
	enum class EVoxelAssetActorPreviewUpdateType : uint8_t
	{
		Manually  = 0x0000000000000000,
		EndOfMove = 0x0000000000000001,
		RealTime  = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum Voxel.EVoxelAssetMergeMode
	 */
	enum class EVoxelAssetMergeMode : uint8_t
	{
		AllValues                    = 0x0000000000000000,
		AllMaterials                 = 0x0000000000000001,
		AllValuesAndAllMaterials     = 0x0000000000000002,
		InnerValues                  = 0x0000000000000003,
		InnerMaterials               = 0x0000000000000004,
		InnerValuesAndInnerMaterials = 0x0000000000000005,
		MAX                          = 0x0000000000000006
	};

	/**
	 * Enum Voxel.EVoxelMemoryUsageType
	 */
	enum class EVoxelMemoryUsageType : uint8_t
	{
		VoxelsDirtyValuesData     = 0x0000000000000000,
		VoxelsDirtyMaterialsData  = 0x0000000000000001,
		VoxelsCachedValuesData    = 0x0000000000000002,
		VoxelsCachedMaterialsData = 0x0000000000000003,
		UndoRedo                  = 0x0000000000000004,
		Multiplayer               = 0x0000000000000005,
		IntermediateBuffers       = 0x0000000000000006,
		MeshesIndices             = 0x0000000000000007,
		MeshesTessellationIndices = 0x0000000000000008,
		MeshesVertices            = 0x0000000000000009,
		MeshesColors              = 0x000000000000000A,
		MeshesUVsAndTangents      = 0x000000000000000B,
		DataAssets                = 0x000000000000000C,
		HeightmapAssets           = 0x000000000000000D,
		UncompressedSaves         = 0x000000000000000E,
		CompressedSaves           = 0x000000000000000F,
		MAX                       = 0x0000000000000010
	};

	/**
	 * Enum Voxel.EVoxelDataAssetImportSource
	 */
	enum class EVoxelDataAssetImportSource : uint8_t
	{
		None      = 0x0000000000000000,
		MagicaVox = 0x0000000000000001,
		RawVox    = 0x0000000000000002,
		Mesh      = 0x0000000000000003,
		MAX       = 0x0000000000000004
	};

	/**
	 * Enum Voxel.EVoxelDistanceType
	 */
	enum class EVoxelDistanceType : uint8_t
	{
		Voxels      = 0x0000000000000000,
		Centimeters = 0x0000000000000001,
		MAX         = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelCubicFace
	 */
	enum class EVoxelCubicFace : uint8_t
	{
		Back   = 0x0000000000000000,
		Front  = 0x0000000000000001,
		Left   = 0x0000000000000002,
		Right  = 0x0000000000000003,
		Bottom = 0x0000000000000004,
		Top    = 0x0000000000000005,
		MAX    = 0x0000000000000006
	};

	/**
	 * Enum Voxel.EVoxelDataItemCombineMode
	 */
	enum class EVoxelDataItemCombineMode : uint8_t
	{
		Min = 0x0000000000000000,
		Max = 0x0000000000000001,
		Sum = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxel32BitMask
	 */
	enum class EVoxel32BitMask : uint8_t
	{
		Channel0  = 0x0000000000000000,
		Channel1  = 0x0000000000000001,
		Channel2  = 0x0000000000000002,
		Channel3  = 0x0000000000000003,
		Channel4  = 0x0000000000000004,
		Channel5  = 0x0000000000000005,
		Channel6  = 0x0000000000000006,
		Channel7  = 0x0000000000000007,
		Channel8  = 0x0000000000000008,
		Channel9  = 0x0000000000000009,
		Channel10 = 0x000000000000000A,
		Channel11 = 0x000000000000000B,
		Channel12 = 0x000000000000000C,
		Channel13 = 0x000000000000000D,
		Channel14 = 0x000000000000000E,
		Channel15 = 0x000000000000000F,
		Channel16 = 0x0000000000000010,
		Channel17 = 0x0000000000000011,
		Channel18 = 0x0000000000000012,
		Channel19 = 0x0000000000000013,
		Channel20 = 0x0000000000000014,
		Channel21 = 0x0000000000000015,
		Channel22 = 0x0000000000000016,
		Channel23 = 0x0000000000000017,
		Channel24 = 0x0000000000000018,
		Channel25 = 0x0000000000000019,
		Channel26 = 0x000000000000001A,
		Channel27 = 0x000000000000001B,
		Channel28 = 0x000000000000001C,
		Channel29 = 0x000000000000001D,
		Channel30 = 0x000000000000001E,
		Channel31 = 0x000000000000001F,
		MAX       = 0x0000000000000020
	};

	/**
	 * Enum Voxel.EVoxelUVAxis
	 */
	enum class EVoxelUVAxis : uint8_t
	{
		U   = 0x0000000000000000,
		V   = 0x0000000000000001,
		MAX = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelAxis
	 */
	enum class EVoxelAxis : uint8_t
	{
		X   = 0x0000000000000000,
		Y   = 0x0000000000000001,
		Z   = 0x0000000000000002,
		MAX = 0x0000000000000003
	};

	/**
	 * Enum Voxel.EVoxelComputeDevice
	 */
	enum class EVoxelComputeDevice : uint8_t
	{
		CPU = 0x0000000000000000,
		GPU = 0x0000000000000001,
		MAX = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelFalloff
	 */
	enum class EVoxelFalloff : uint8_t
	{
		Linear    = 0x0000000000000000,
		Smooth    = 0x0000000000000001,
		Spherical = 0x0000000000000002,
		Tip       = 0x0000000000000003,
		MAX       = 0x0000000000000004
	};

	/**
	 * Enum Voxel.EVoxelDataType
	 */
	enum class EVoxelDataType : uint8_t
	{
		Values    = 0x0000000000000000,
		Materials = 0x0000000000000001,
		MAX       = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelSamplerMode
	 */
	enum class EVoxelSamplerMode : uint8_t
	{
		Clamp = 0x0000000000000000,
		Tile  = 0x0000000000000001,
		MAX   = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelSpawnerActorSpawnType
	 */
	enum class EVoxelSpawnerActorSpawnType : uint8_t
	{
		All          = 0x0000000000000000,
		OnlyFloating = 0x0000000000000001,
		MAX          = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelRGBA
	 */
	enum class EVoxelRGBA : uint8_t
	{
		R   = 0x0000000000000000,
		G   = 0x0000000000000001,
		B   = 0x0000000000000002,
		A   = 0x0000000000000003,
		MAX = 0x0000000000000004
	};

	/**
	 * Enum Voxel.EVoxelCellularReturnType
	 */
	enum class EVoxelCellularReturnType : uint8_t
	{
		CellValue    = 0x0000000000000000,
		Distance     = 0x0000000000000001,
		Distance2    = 0x0000000000000002,
		Distance2Add = 0x0000000000000003,
		Distance2Sub = 0x0000000000000004,
		Distance2Mul = 0x0000000000000005,
		Distance2Div = 0x0000000000000006,
		MAX          = 0x0000000000000007
	};

	/**
	 * Enum Voxel.EVoxelCellularDistanceFunction
	 */
	enum class EVoxelCellularDistanceFunction : uint8_t
	{
		Euclidean = 0x0000000000000000,
		Manhattan = 0x0000000000000001,
		Natural   = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum Voxel.EVoxelNoiseFractalType
	 */
	enum class EVoxelNoiseFractalType : uint8_t
	{
		FBM        = 0x0000000000000000,
		Billow     = 0x0000000000000001,
		RigidMulti = 0x0000000000000002,
		MAX        = 0x0000000000000003
	};

	/**
	 * Enum Voxel.EVoxelNoiseInterpolation
	 */
	enum class EVoxelNoiseInterpolation : uint8_t
	{
		Linear  = 0x0000000000000000,
		Hermite = 0x0000000000000001,
		Quintic = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum Voxel.EVoxelGeneratorParameterPropertyType
	 */
	enum class EVoxelGeneratorParameterPropertyType : uint8_t
	{
		Float  = 0x0000000000000000,
		Int    = 0x0000000000000001,
		Bool   = 0x0000000000000002,
		Name   = 0x0000000000000003,
		Object = 0x0000000000000004,
		Struct = 0x0000000000000005,
		MAX    = 0x0000000000000006
	};

	/**
	 * Enum Voxel.EVoxelGeneratorParameterContainerType
	 */
	enum class EVoxelGeneratorParameterContainerType : uint8_t
	{
		None  = 0x0000000000000000,
		Array = 0x0000000000000001,
		Set   = 0x0000000000000002,
		Map   = 0x0000000000000003,
		MAX   = 0x0000000000000004
	};

	/**
	 * Enum Voxel.EVoxelHeightmapImporterMaterialConfig
	 */
	enum class EVoxelHeightmapImporterMaterialConfig : uint8_t
	{
		RGB          = 0x0000000000000000,
		FourWayBlend = 0x0000000000000001,
		FiveWayBlend = 0x0000000000000002,
		SingleIndex  = 0x0000000000000003,
		MultiIndex   = 0x0000000000000004,
		MAX          = 0x0000000000000005
	};

	/**
	 * Enum Voxel.EVoxelMaterialMask_BP
	 */
	enum class EVoxelMaterialMask_BP : uint8_t
	{
		R                      = 0x0000000000000000,
		G                      = 0x0000000000000001,
		B                      = 0x0000000000000002,
		A                      = 0x0000000000000003,
		U0                     = 0x0000000000000004,
		V0                     = 0x0000000000000005,
		U1                     = 0x0000000000000006,
		V1                     = 0x0000000000000007,
		U2                     = 0x0000000000000008,
		V2                     = 0x0000000000000009,
		U3                     = 0x000000000000000A,
		V3                     = 0x000000000000000B,
		EVoxelMaterialMask_MAX = 0x000000000000000C
	};

	/**
	 * Enum Voxel.EVoxelPaintMaterialType
	 */
	enum class EVoxelPaintMaterialType : uint8_t
	{
		Color             = 0x0000000000000000,
		FiveWayBlend      = 0x0000000000000001,
		SingleIndex       = 0x0000000000000002,
		MultiIndex        = 0x0000000000000003,
		MultiIndexWetness = 0x0000000000000004,
		MultiIndexRaw     = 0x0000000000000005,
		UV                = 0x0000000000000006,
		MAX               = 0x0000000000000007
	};

	/**
	 * Enum Voxel.EVoxelProjectionShape
	 */
	enum class EVoxelProjectionShape : uint8_t
	{
		Circle = 0x0000000000000000,
		Square = 0x0000000000000001,
		MAX    = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelThreadPriority
	 */
	enum class EVoxelThreadPriority : uint8_t
	{
		Normal              = 0x0000000000000000,
		AboveNormal         = 0x0000000000000001,
		BelowNormal         = 0x0000000000000002,
		Highest             = 0x0000000000000003,
		Lowest              = 0x0000000000000004,
		SlightlyBelowNormal = 0x0000000000000005,
		TimeCritical        = 0x0000000000000006,
		MAX                 = 0x0000000000000007
	};

	/**
	 * Enum Voxel.EVoxelSurfaceToolMaskType
	 */
	enum class EVoxelSurfaceToolMaskType : uint8_t
	{
		Texture   = 0x0000000000000000,
		Generator = 0x0000000000000001,
		MAX       = 0x0000000000000002
	};

	/**
	 * Enum Voxel.EVoxelSDFMergeMode
	 */
	enum class EVoxelSDFMergeMode : uint8_t
	{
		Union        = 0x0000000000000000,
		Intersection = 0x0000000000000001,
		Override     = 0x0000000000000002,
		MAX          = 0x0000000000000003
	};

	/**
	 * Enum Voxel.EVoxelToolAlignment
	 */
	enum class EVoxelToolAlignment : uint8_t
	{
		Surface = 0x0000000000000000,
		View    = 0x0000000000000001,
		Ground  = 0x0000000000000002,
		Up      = 0x0000000000000003,
		MAX     = 0x0000000000000004
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Voxel.VoxelTransformableGeneratorPicker
	 * Size -> 0x0068
	 */
	struct FVoxelTransformableGeneratorPicker
	{
	public:
		EVoxelGeneratorPickerType                                  Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AHL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Class;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelTransformableGenerator*                        Object;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           Parameters;                                              // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelIntBox
	 * Size -> 0x0018
	 */
	struct FVoxelIntBox
	{
	public:
		struct FIntVector                                          Min;                                                     // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          Max;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelBasicMaterialCollectionLayer
	 * Size -> 0x0010
	 */
	struct FVoxelBasicMaterialCollectionLayer
	{
	public:
		unsigned char                                              LayerIndex;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGWJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LayerMaterial;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelMaterialIndices
	 * Size -> 0x0008
	 */
	struct FVoxelMaterialIndices
	{
	public:
		unsigned char                                              UnknownData_JNSC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelDataAssetImportSettings_MagicaVox
	 * Size -> 0x0008
	 */
	struct FVoxelDataAssetImportSettings_MagicaVox
	{
	public:
		bool                                                       bUsePalette;                                             // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD3N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ModelIndex;                                              // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelTextureStructBase
	 * Size -> 0x0008
	 */
	struct FVoxelTextureStructBase
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelFloatTexture
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FVoxelFloatTexture : public FVoxelTextureStructBase
	{
	public:
		unsigned char                                              UnknownData_9L9Y[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelFlatGeneratorDataItemConfig
	 * Size -> 0x000C
	 */
	struct FVoxelFlatGeneratorDataItemConfig
	{
	public:
		float                                                      Smoothness;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Mask;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubtractItems;                                          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPLX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelToolTickData
	 * Size -> 0x0120
	 */
	struct FVoxelToolTickData
	{
	public:
		struct FVector2D                                           MousePosition;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CameraViewDirection;                                     // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEdit;                                                   // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KRN[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, bool>                                    Keys;                                                    // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, float>                                   Axes;                                                    // 0x0068(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionChannel;                                        // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4BT[0x67];                                  // 0x00B9(0x0067) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelHeightmapImporterWeightmapInfos
	 * Size -> 0x0018
	 */
	struct FVoxelHeightmapImporterWeightmapInfos
	{
	public:
		struct FFilePath                                           File;                                                    // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		EVoxelRGBA                                                 Layer;                                                   // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Index;                                                   // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLPK[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelInstancedMaterialCollectionLayer
	 * Size -> 0x0010
	 */
	struct FVoxelInstancedMaterialCollectionLayer
	{
	public:
		unsigned char                                              LayerIndex;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EE5X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   LayerMaterialInstance;                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelLandscapeImporterLayerInfo
	 * Size -> 0x0010
	 */
	struct FVoxelLandscapeImporterLayerInfo
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfo;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRGBA                                                 Layer;                                                   // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Index;                                                   // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUCO[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelLandscapeMaterialCollectionLayer
	 * Size -> 0x000C
	 */
	struct FVoxelLandscapeMaterialCollectionLayer
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Index;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ERJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelLandscapeMaterialCollectionPermutation
	 * Size -> 0x0030
	 */
	struct FVoxelLandscapeMaterialCollectionPermutation
	{
	public:
		class FName                                                Names[0x6];                                              // 0x0000(0x0030) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelMagicaVoxSceneEntry
	 * Size -> 0x0060
	 */
	struct FVoxelMagicaVoxSceneEntry
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelDataAsset*                                     Asset;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HSXO[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              Layer;                                                   // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelMeshImporterSettingsBase
	 * Size -> 0x0010
	 */
	struct FVoxelMeshImporterSettingsBase
	{
	public:
		float                                                      VoxelSize;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelAxis                                                 SweepDirection;                                          // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseSweep;                                           // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWatertight;                                             // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideLeaks;                                              // 0x0007(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExactBand;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceDivisor;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelMeshImporterSettings
	 * Size -> 0x0028 (FullSize[0x0038] - InheritedSize[0x0010])
	 */
	struct FVoxelMeshImporterSettings : public FVoxelMeshImporterSettingsBase
	{
	public:
		bool                                                       bImportColors;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JY6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  ColorsMaterial;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportUVs;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8INL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  UVsMaterial;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderTargetSize;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQGX[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelMeshImporterRenderTargetCache
	 * Size -> 0x0028
	 */
	struct FVoxelMeshImporterRenderTargetCache
	{
	public:
		class UTextureRenderTarget2D*                              ColorsRenderTarget;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              UVsRenderTarget;                                         // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  LastRenderedColorsMaterial;                              // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  LastRenderedUVsMaterial;                                 // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastRenderedRenderTargetSize;                            // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWW2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelMaterial
	 * Size -> 0x0008
	 */
	struct FVoxelMaterial
	{
	public:
		unsigned char                                              UnknownData_9E7A[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelPositionValueMaterial
	 * Size -> 0x0018
	 */
	struct FVoxelPositionValueMaterial
	{
	public:
		struct FIntVector                                          Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelMaterial                                      Material;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelGeneratorPicker
	 * Size -> 0x0068
	 */
	struct FVoxelGeneratorPicker
	{
	public:
		EVoxelGeneratorPickerType                                  Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RU1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Class;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelGenerator*                                     Object;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           Parameters;                                              // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelLODMaterialsBase
	 * Size -> 0x0008
	 */
	struct FVoxelLODMaterialsBase
	{
	public:
		int32_t                                                    StartLOD;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndLOD;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelLODMaterials
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FVoxelLODMaterials : public FVoxelLODMaterialsBase
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelLODMaterialCollections
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FVoxelLODMaterialCollections : public FVoxelLODMaterialsBase
	{
	public:
		class UVoxelMaterialCollectionBase*                        MaterialCollection;                                      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelMeshConfig
	 * Size -> 0x0008
	 */
	struct FVoxelMeshConfig
	{
	public:
		bool                                                       bReceivesDecals;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderCustomDepth;                                      // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERendererStencilMask                                       CustomDepthStencilWriteMask;                             // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RI4Z[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomDepthStencilValue;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelDataItemConstructionInfo
	 * Size -> 0x0038
	 */
	struct FVoxelDataItemConstructionInfo
	{
	public:
		class UVoxelGeneratorInstanceWrapper*                      Generator;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelIntBox                                        Bounds;                                                  // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              Parameters;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Mask;                                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCR2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelObjectArchiveEntry
	 * Size -> 0x0030
	 */
	struct FVoxelObjectArchiveEntry
	{
	public:
		unsigned char                                              Object[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    Index;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZW29[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelCompressedWorldSave
	 * Size -> 0x0020
	 */
	struct FVoxelCompressedWorldSave
	{
	public:
		unsigned char                                              UnknownData_FN8G[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVoxelObjectArchiveEntry>                    Objects;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelInt32Interval
	 * Size -> 0x0008
	 */
	struct FVoxelInt32Interval
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceToolMask
	 * Size -> 0x00A8
	 */
	struct FVoxelSurfaceToolMask
	{
	public:
		EVoxelSurfaceToolMaskType                                  Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQC6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRGBA                                                 Channel;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR3B[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               Generator;                                               // 0x0018(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SeedsToRandomize;                                        // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bScaleWithBrushSize;                                     // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5LC[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          GeneratorDebugTexture;                                   // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterialColor
	 * Size -> 0x001C
	 */
	struct FVoxelPaintMaterialColor
	{
	public:
		bool                                                       bUseLinearColor;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU5E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        LinearColor;                                             // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintR;                                                 // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintG;                                                 // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintB;                                                 // 0x001A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintA;                                                 // 0x001B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterial_MaterialCollectionChannel
	 * Size -> 0x0001
	 */
	struct FVoxelPaintMaterial_MaterialCollectionChannel
	{
	public:
		unsigned char                                              Channel;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterialSingleIndex
	 * Size -> 0x0001
	 */
	struct FVoxelPaintMaterialSingleIndex
	{
	public:
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterialMultiIndex
	 * Size -> 0x0018
	 */
	struct FVoxelPaintMaterialMultiIndex
	{
	public:
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1C24[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetValue;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelPaintMaterial_MaterialCollectionChannel> LockedChannels;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterialMultiIndexWetness
	 * Size -> 0x0004
	 */
	struct FVoxelPaintMaterialMultiIndexWetness
	{
	public:
		float                                                      TargetValue;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterialMultiIndexRaw
	 * Size -> 0x0020
	 */
	struct FVoxelPaintMaterialMultiIndexRaw
	{
	public:
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel0;                                                // 0x0000(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAF1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength0;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel1;                                                // 0x0008(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0XQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength1;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel2;                                                // 0x0010(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8D0Z[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength2;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel3;                                                // 0x0018(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1MC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength3;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterialUV
	 * Size -> 0x0010
	 */
	struct FVoxelPaintMaterialUV
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV;                                                      // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintU;                                                 // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintV;                                                 // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNVK[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterialFiveWayBlend
	 * Size -> 0x0020
	 */
	struct FVoxelPaintMaterialFiveWayBlend
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetValue;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      LockedChannels;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bFourWayBlend;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RJO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterial
	 * Size -> 0x0098
	 */
	struct FVoxelPaintMaterial
	{
	public:
		EVoxelPaintMaterialType                                    Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDF7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelPaintMaterialColor                            Color;                                                   // 0x0004(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialSingleIndex                      SingleIndex;                                             // 0x0020(0x0001) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYDG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelPaintMaterialMultiIndex                       MultiIndex;                                              // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialMultiIndexWetness                MultiIndexWetness;                                       // 0x0040(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialMultiIndexRaw                    MultiIndexRaw;                                           // 0x0044(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialUV                               UV;                                                      // 0x0064(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HQN[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelPaintMaterialFiveWayBlend                     FiveWayBlend;                                            // 0x0078(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelPerlinWormsSettings
	 * Size -> 0x0058
	 */
	struct FVoxelPerlinWormsSettings
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Start;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationAmplitude;                                       // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSegments;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SegmentLength;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplitProbability;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplitProbabilityGain;                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BranchMeanSize;                                          // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BranchSizeVariation;                                     // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NoiseDirection;                                          // 0x0044(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseSegmentLength;                                      // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxWorms;                                                // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelUncompressedWorldSave
	 * Size -> 0x0020
	 */
	struct FVoxelUncompressedWorldSave
	{
	public:
		unsigned char                                              UnknownData_6HF9[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVoxelObjectArchiveEntry>                    Objects;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelWorldCreateInfo
	 * Size -> 0x0048
	 */
	struct FVoxelWorldCreateInfo
	{
	public:
		bool                                                       bOverrideSave;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SO8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelUncompressedWorldSave                         SaveOverride;                                            // 0x0008(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bOverrideData;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63ZJ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVoxelWorld*                                         DataOverride;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MD5B[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelGeneratorInit
	 * Size -> 0x0090
	 */
	struct FVoxelGeneratorInit
	{
	public:
		float                                                      VoxelSize;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WorldSize;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRenderType                                           RenderType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelMaterialConfig                                       MaterialConfig;                                          // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVT3[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelMaterialCollectionBase*                        MaterialCollection;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AVoxelWorld>                          World;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEYN[0x70];                                  // 0x0020(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelDisableEditsBoxItemReference
	 * Size -> 0x0028
	 */
	struct FVoxelDisableEditsBoxItemReference
	{
	public:
		unsigned char                                              UnknownData_D5DE[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelAssetItemReference
	 * Size -> 0x0028
	 */
	struct FVoxelAssetItemReference
	{
	public:
		unsigned char                                              UnknownData_LODI[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelToolRenderingRef
	 * Size -> 0x0004
	 */
	struct FVoxelToolRenderingRef
	{
	public:
		unsigned char                                              UnknownData_T4QZ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelBoolVector
	 * Size -> 0x0003
	 */
	struct FVoxelBoolVector
	{
	public:
		bool                                                       bX;                                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bY;                                                      // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZ;                                                      // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelCookedData
	 * Size -> 0x0010
	 */
	struct FVoxelCookedData
	{
	public:
		unsigned char                                              UnknownData_XBZ7[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelCookingSettings
	 * Size -> 0x0080
	 */
	struct FVoxelCookingSettings
	{
	public:
		int32_t                                                    RenderOctreeDepth;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoxelSize;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRenderType                                           RenderType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5TD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               Generator;                                               // 0x0010(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogProgress;                                            // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFastCollisionCook;                                      // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCleanCollisionMesh;                                     // 0x007A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQVS[0x5];                                   // 0x007B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelFindClosestNonEmptyVoxelResult
	 * Size -> 0x001C
	 */
	struct FVoxelFindClosestNonEmptyVoxelResult
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7EK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          Position;                                                // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelMaterial                                      Material;                                                // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelDataMemoryUsageInMB
	 * Size -> 0x0010
	 */
	struct FVoxelDataMemoryUsageInMB
	{
	public:
		float                                                      DirtyValues;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedValues;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirtyMaterials;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedMaterials;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelValueMaterial
	 * Size -> 0x0018
	 */
	struct FVoxelValueMaterial
	{
	public:
		struct FIntVector                                          Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelMaterial                                      Material;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelDistance
	 * Size -> 0x0008
	 */
	struct FVoxelDistance
	{
	public:
		EVoxelDistanceType                                         Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D16R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelGeneratorOutputPicker
	 * Size -> 0x0008
	 */
	struct FVoxelGeneratorOutputPicker
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelGeneratorParameterTerminalType
	 * Size -> 0x000C
	 */
	struct FVoxelGeneratorParameterTerminalType
	{
	public:
		EVoxelGeneratorParameterPropertyType                       PropertyType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRU1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PropertyClass;                                           // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelGeneratorParameterType
	 * Size -> 0x0010 (FullSize[0x001C] - InheritedSize[0x000C])
	 */
	struct FVoxelGeneratorParameterType : public FVoxelGeneratorParameterTerminalType
	{
	public:
		EVoxelGeneratorParameterContainerType                      ContainerType;                                           // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56Z5[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorParameterTerminalType                ValueType;                                               // 0x0010(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelGeneratorParameter
	 * Size -> 0x00C0
	 */
	struct FVoxelGeneratorParameter
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelGeneratorParameterType                        Type;                                                    // 0x0008(0x001C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3NQD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Category;                                                // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JR27[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FString>                           MetaData;                                                // 0x0060(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelIntBoxWithValidity
	 * Size -> 0x001C
	 */
	struct FVoxelIntBoxWithValidity
	{
	public:
		struct FVoxelIntBox                                        Box;                                                     // 0x0000(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bValid;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VLHL[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelFloatInterval
	 * Size -> 0x0008
	 */
	struct FVoxelFloatInterval
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelInvokerSettings
	 * Size -> 0x0058
	 */
	struct FVoxelInvokerSettings
	{
	public:
		bool                                                       bUseForLOD;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODWK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODToSet;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelIntBox                                        LODBounds;                                               // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForCollisions;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M75W[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelIntBox                                        CollisionsBounds;                                        // 0x0024(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForNavmesh;                                          // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8T9[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelIntBox                                        NavmeshBounds;                                           // 0x0040(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelMaterialCollectionMaterialInfo
	 * Size -> 0x0014
	 */
	struct FVoxelMaterialCollectionMaterialInfo
	{
	public:
		unsigned char                                              Index;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AR7H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UMaterialInterface>                   Material;                                                // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NameOverride;                                            // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelHaltonStream
	 * Size -> 0x0008
	 */
	struct FVoxelHaltonStream
	{
	public:
		int32_t                                                    InitialSeed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Seed;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelProjectionHit
	 * Size -> 0x00A0
	 */
	struct FVoxelProjectionHit
	{
	public:
		struct FIntVector                                          VoxelPosition;                                           // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PlanePosition;                                           // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          Hit;                                                     // 0x0014(0x008C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelLineTraceParameters
	 * Size -> 0x0050
	 */
	struct FVoxelLineTraceParameters
	{
	public:
		ECollisionChannel                                          CollisionChannel;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Q1V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ECollisionChannel>                                  CollisionChannelsToIgnore;                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EDrawDebugTrace                                            DrawDebugType;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGTZ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        TraceColor;                                              // 0x002C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TraceHitColor;                                           // 0x003C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DrawTime;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelRange
	 * Size -> 0x0010
	 */
	struct FVoxelRange
	{
	public:
		double                                                     Min;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Max;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsStack
	 * Size -> 0x0010
	 */
	struct FVoxelSurfaceEditsStack
	{
	public:
		unsigned char                                              UnknownData_D6A3[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsStackElement
	 * Size -> 0x0060
	 */
	struct FVoxelSurfaceEditsStackElement
	{
	public:
		unsigned char                                              UnknownData_W50D[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsProcessedVoxels
	 * Size -> 0x0030
	 */
	struct FVoxelSurfaceEditsProcessedVoxels
	{
	public:
		unsigned char                                              UnknownData_WLVJ[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsVoxels
	 * Size -> 0x0018
	 */
	struct FVoxelSurfaceEditsVoxels
	{
	public:
		unsigned char                                              UnknownData_YG56[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsVoxelBase
	 * Size -> 0x0028
	 */
	struct FVoxelSurfaceEditsVoxelBase
	{
	public:
		struct FIntVector                                          Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SurfacePosition;                                         // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsVoxel
	 * Size -> 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
	 */
	struct FVoxelSurfaceEditsVoxel : public FVoxelSurfaceEditsVoxelBase
	{
	public:
		float                                                      Strength;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelTestValues
	 * Size -> 0x0010
	 */
	struct FVoxelTestValues
	{
	public:
		unsigned char                                              UnknownData_FUQN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelColorTexture
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FVoxelColorTexture : public FVoxelTextureStructBase
	{
	public:
		unsigned char                                              UnknownData_9UVN[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelToolBaseConfig
	 * Size -> 0x0040
	 */
	struct FVoxelToolBaseConfig
	{
	public:
		class UMaterialInterface*                                  OverlayMaterial;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MeshMaterial;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stride;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFixedDirection;                                      // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JRC[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            FixedDirection;                                          // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseFixedNormal;                                         // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6VS[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FixedNormal;                                             // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAlignment;                                           // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelToolAlignment                                        Alignment;                                               // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAirMode;                                                // 0x0036(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6GE[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceToCamera;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPlanePreview;                                       // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63P0[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.ModifiedVoxelMaterial
	 * Size -> 0x001C
	 */
	struct FModifiedVoxelMaterial
	{
	public:
		struct FIntVector                                          Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelMaterial                                      OldMaterial;                                             // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelMaterial                                      NewMaterial;                                             // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.ModifiedVoxelValue
	 * Size -> 0x0014
	 */
	struct FModifiedVoxelValue
	{
	public:
		struct FIntVector                                          Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OldValue;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewValue;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
