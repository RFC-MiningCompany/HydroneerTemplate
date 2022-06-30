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
	 * Enum Voxel.EVoxelTaskType
	 */
	enum class EVoxelTaskType : uint8_t
	{
		ChunksMeshing                  = 0,
		CollisionsChunksMeshing        = 1,
		VisibleChunksMeshing           = 2,
		VisibleCollisionsChunksMeshing = 3,
		CollisionCooking               = 4,
		FoliageBuild                   = 5,
		HISMBuild                      = 6,
		AsyncEditFunctions             = 7,
		MeshMerge                      = 8,
		RenderOctree                   = 9,
		Max                            = 10
	};

	/**
	 * Enum Voxel.EVoxelFoliageWorldType
	 */
	enum class EVoxelFoliageWorldType : uint8_t
	{
		Flat   = 0,
		Planet = 1,
		MAX    = 2
	};

	/**
	 * Enum Voxel.EVoxelRenderType
	 */
	enum class EVoxelRenderType : uint8_t
	{
		MarchingCubes = 0,
		Cubic         = 1,
		SurfaceNets   = 2,
		MAX           = 3
	};

	/**
	 * Enum Voxel.EVoxelRGBHardness
	 */
	enum class EVoxelRGBHardness : uint8_t
	{
		FourWayBlend = 0,
		FiveWayBlend = 1,
		R            = 2,
		G            = 3,
		B            = 4,
		A            = 5,
		U0           = 6,
		U1           = 7,
		V0           = 8,
		V1           = 9,
		MAX          = 10
	};

	/**
	 * Enum Voxel.EVoxelNormalConfig
	 */
	enum class EVoxelNormalConfig : uint8_t
	{
		NoNormal       = 0,
		GradientNormal = 1,
		FlatNormal     = 2,
		MeshNormal     = 3,
		MAX            = 4
	};

	/**
	 * Enum Voxel.EVoxelUVConfig
	 */
	enum class EVoxelUVConfig : uint8_t
	{
		GlobalUVs        = 0,
		PackWorldUpInUVs = 1,
		PerVoxelUVs      = 2,
		Max              = 3
	};

	/**
	 * Enum Voxel.EVoxelMaterialConfig
	 */
	enum class EVoxelMaterialConfig : uint8_t
	{
		RGB                    = 0,
		SingleIndex            = 1,
		DoubleIndex_DEPRECATED = 2,
		MultiIndex             = 3,
		MAX                    = 4
	};

	/**
	 * Enum Voxel.EVoxelGeneratorPickerType
	 */
	enum class EVoxelGeneratorPickerType : uint8_t
	{
		Class  = 0,
		Object = 1,
		MAX    = 2
	};

	/**
	 * Enum Voxel.EVoxelWorldCoordinatesRounding
	 */
	enum class EVoxelWorldCoordinatesRounding : uint8_t
	{
		RoundToNearest = 0,
		RoundUp        = 1,
		RoundDown      = 2,
		MAX            = 3
	};

	/**
	 * Enum Voxel.EVoxelAssetActorPreviewUpdateType
	 */
	enum class EVoxelAssetActorPreviewUpdateType : uint8_t
	{
		Manually  = 0,
		EndOfMove = 1,
		RealTime  = 2,
		MAX       = 3
	};

	/**
	 * Enum Voxel.EVoxelAssetMergeMode
	 */
	enum class EVoxelAssetMergeMode : uint8_t
	{
		AllValues                    = 0,
		AllMaterials                 = 1,
		AllValuesAndAllMaterials     = 2,
		InnerValues                  = 3,
		InnerMaterials               = 4,
		InnerValuesAndInnerMaterials = 5,
		MAX                          = 6
	};

	/**
	 * Enum Voxel.EVoxelMemoryUsageType
	 */
	enum class EVoxelMemoryUsageType : uint8_t
	{
		VoxelsDirtyValuesData     = 0,
		VoxelsDirtyMaterialsData  = 1,
		VoxelsCachedValuesData    = 2,
		VoxelsCachedMaterialsData = 3,
		UndoRedo                  = 4,
		Multiplayer               = 5,
		IntermediateBuffers       = 6,
		MeshesIndices             = 7,
		MeshesTessellationIndices = 8,
		MeshesVertices            = 9,
		MeshesColors              = 10,
		MeshesUVsAndTangents      = 11,
		DataAssets                = 12,
		HeightmapAssets           = 13,
		UncompressedSaves         = 14,
		CompressedSaves           = 15,
		MAX                       = 16
	};

	/**
	 * Enum Voxel.EVoxelDataAssetImportSource
	 */
	enum class EVoxelDataAssetImportSource : uint8_t
	{
		None      = 0,
		MagicaVox = 1,
		RawVox    = 2,
		Mesh      = 3,
		MAX       = 4
	};

	/**
	 * Enum Voxel.EVoxelDistanceType
	 */
	enum class EVoxelDistanceType : uint8_t
	{
		Voxels      = 0,
		Centimeters = 1,
		MAX         = 2
	};

	/**
	 * Enum Voxel.EVoxelCubicFace
	 */
	enum class EVoxelCubicFace : uint8_t
	{
		Back   = 0,
		Front  = 1,
		Left   = 2,
		Right  = 3,
		Bottom = 4,
		Top    = 5,
		MAX    = 6
	};

	/**
	 * Enum Voxel.EVoxelDataItemCombineMode
	 */
	enum class EVoxelDataItemCombineMode : uint8_t
	{
		Min = 0,
		Max = 1,
		Sum = 2
	};

	/**
	 * Enum Voxel.EVoxel32BitMask
	 */
	enum class EVoxel32BitMask : uint8_t
	{
		Channel0  = 0,
		Channel1  = 1,
		Channel2  = 2,
		Channel3  = 3,
		Channel4  = 4,
		Channel5  = 5,
		Channel6  = 6,
		Channel7  = 7,
		Channel8  = 8,
		Channel9  = 9,
		Channel10 = 10,
		Channel11 = 11,
		Channel12 = 12,
		Channel13 = 13,
		Channel14 = 14,
		Channel15 = 15,
		Channel16 = 16,
		Channel17 = 17,
		Channel18 = 18,
		Channel19 = 19,
		Channel20 = 20,
		Channel21 = 21,
		Channel22 = 22,
		Channel23 = 23,
		Channel24 = 24,
		Channel25 = 25,
		Channel26 = 26,
		Channel27 = 27,
		Channel28 = 28,
		Channel29 = 29,
		Channel30 = 30,
		Channel31 = 31,
		MAX       = 32
	};

	/**
	 * Enum Voxel.EVoxelUVAxis
	 */
	enum class EVoxelUVAxis : uint8_t
	{
		U   = 0,
		V   = 1,
		MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelAxis
	 */
	enum class EVoxelAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelComputeDevice
	 */
	enum class EVoxelComputeDevice : uint8_t
	{
		CPU = 0,
		GPU = 1,
		MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelFalloff
	 */
	enum class EVoxelFalloff : uint8_t
	{
		Linear    = 0,
		Smooth    = 1,
		Spherical = 2,
		Tip       = 3,
		MAX       = 4
	};

	/**
	 * Enum Voxel.EVoxelDataType
	 */
	enum class EVoxelDataType : uint8_t
	{
		Values    = 0,
		Materials = 1,
		MAX       = 2
	};

	/**
	 * Enum Voxel.EVoxelSamplerMode
	 */
	enum class EVoxelSamplerMode : uint8_t
	{
		Clamp = 0,
		Tile  = 1,
		MAX   = 2
	};

	/**
	 * Enum Voxel.EVoxelSpawnerActorSpawnType
	 */
	enum class EVoxelSpawnerActorSpawnType : uint8_t
	{
		All          = 0,
		OnlyFloating = 1,
		MAX          = 2
	};

	/**
	 * Enum Voxel.EVoxelRGBA
	 */
	enum class EVoxelRGBA : uint8_t
	{
		R   = 0,
		G   = 1,
		B   = 2,
		A   = 3,
		MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelCellularReturnType
	 */
	enum class EVoxelCellularReturnType : uint8_t
	{
		CellValue    = 0,
		Distance     = 1,
		Distance2    = 2,
		Distance2Add = 3,
		Distance2Sub = 4,
		Distance2Mul = 5,
		Distance2Div = 6,
		MAX          = 7
	};

	/**
	 * Enum Voxel.EVoxelCellularDistanceFunction
	 */
	enum class EVoxelCellularDistanceFunction : uint8_t
	{
		Euclidean = 0,
		Manhattan = 1,
		Natural   = 2,
		MAX       = 3
	};

	/**
	 * Enum Voxel.EVoxelNoiseFractalType
	 */
	enum class EVoxelNoiseFractalType : uint8_t
	{
		FBM        = 0,
		Billow     = 1,
		RigidMulti = 2,
		MAX        = 3
	};

	/**
	 * Enum Voxel.EVoxelNoiseInterpolation
	 */
	enum class EVoxelNoiseInterpolation : uint8_t
	{
		Linear  = 0,
		Hermite = 1,
		Quintic = 2,
		MAX     = 3
	};

	/**
	 * Enum Voxel.EVoxelGeneratorParameterPropertyType
	 */
	enum class EVoxelGeneratorParameterPropertyType : uint8_t
	{
		Float  = 0,
		Int    = 1,
		Bool   = 2,
		Name   = 3,
		Object = 4,
		Struct = 5,
		MAX    = 6
	};

	/**
	 * Enum Voxel.EVoxelGeneratorParameterContainerType
	 */
	enum class EVoxelGeneratorParameterContainerType : uint8_t
	{
		None  = 0,
		Array = 1,
		Set   = 2,
		Map   = 3,
		MAX   = 4
	};

	/**
	 * Enum Voxel.EVoxelHeightmapImporterMaterialConfig
	 */
	enum class EVoxelHeightmapImporterMaterialConfig : uint8_t
	{
		RGB          = 0,
		FourWayBlend = 1,
		FiveWayBlend = 2,
		SingleIndex  = 3,
		MultiIndex   = 4,
		MAX          = 5
	};

	/**
	 * Enum Voxel.EVoxelMaterialMask_BP
	 */
	enum class EVoxelMaterialMask_BP : uint8_t
	{
		R                      = 0,
		G                      = 1,
		B                      = 2,
		A                      = 3,
		U0                     = 4,
		V0                     = 5,
		U1                     = 6,
		V1                     = 7,
		U2                     = 8,
		V2                     = 9,
		U3                     = 10,
		V3                     = 11,
		EVoxelMaterialMask_MAX = 12
	};

	/**
	 * Enum Voxel.EVoxelPaintMaterialType
	 */
	enum class EVoxelPaintMaterialType : uint8_t
	{
		Color             = 0,
		FiveWayBlend      = 1,
		SingleIndex       = 2,
		MultiIndex        = 3,
		MultiIndexWetness = 4,
		MultiIndexRaw     = 5,
		UV                = 6,
		MAX               = 7
	};

	/**
	 * Enum Voxel.EVoxelProjectionShape
	 */
	enum class EVoxelProjectionShape : uint8_t
	{
		Circle = 0,
		Square = 1,
		MAX    = 2
	};

	/**
	 * Enum Voxel.EVoxelThreadPriority
	 */
	enum class EVoxelThreadPriority : uint8_t
	{
		Normal              = 0,
		AboveNormal         = 1,
		BelowNormal         = 2,
		Highest             = 3,
		Lowest              = 4,
		SlightlyBelowNormal = 5,
		TimeCritical        = 6,
		MAX                 = 7
	};

	/**
	 * Enum Voxel.EVoxelSurfaceToolMaskType
	 */
	enum class EVoxelSurfaceToolMaskType : uint8_t
	{
		Texture   = 0,
		Generator = 1,
		MAX       = 2
	};

	/**
	 * Enum Voxel.EVoxelSDFMergeMode
	 */
	enum class EVoxelSDFMergeMode : uint8_t
	{
		Union        = 0,
		Intersection = 1,
		Override     = 2,
		MAX          = 3
	};

	/**
	 * Enum Voxel.EVoxelToolAlignment
	 */
	enum class EVoxelToolAlignment : uint8_t
	{
		Surface = 0,
		View    = 1,
		Ground  = 2,
		Up      = 3,
		MAX     = 4
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
		unsigned char                                              UnknownData_5D0J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_4IWJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LayerMaterial;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Voxel.VoxelMaterialIndices
	 * Size -> 0x0008
	 */
	struct FVoxelMaterialIndices
	{
	public:
		unsigned char                                              UnknownData_CMXS[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelDataAssetImportSettings_MagicaVox
	 * Size -> 0x0008
	 */
	struct FVoxelDataAssetImportSettings_MagicaVox
	{
	public:
		bool                                                       bUsePalette;                                             // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACPK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_XKQ7[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_P6F3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_3K26[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, bool>                                    Keys;                                                    // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, float>                                   Axes;                                                    // 0x0068(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionChannel;                                        // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X54U[0x67];                                  // 0x00B9(0x0067) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_TF49[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelInstancedMaterialCollectionLayer
	 * Size -> 0x0010
	 */
	struct FVoxelInstancedMaterialCollectionLayer
	{
	public:
		unsigned char                                              LayerIndex;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1T7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_W29R[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_5WDJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_B5ZE[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_PQAY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  ColorsMaterial;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportUVs;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91MV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  UVsMaterial;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderTargetSize;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCYW[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_5CJF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelMaterial
	 * Size -> 0x0008
	 */
	struct FVoxelMaterial
	{
	public:
		unsigned char                                              UnknownData_0EVU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_SEDO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_WZ4D[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_R0NA[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_ZWZ6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelCompressedWorldSave
	 * Size -> 0x0020
	 */
	struct FVoxelCompressedWorldSave
	{
	public:
		unsigned char                                              UnknownData_JKSS[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_6B7U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRGBA                                                 Channel;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WF28[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               Generator;                                               // 0x0018(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SeedsToRandomize;                                        // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bScaleWithBrushSize;                                     // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6P0B[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_981X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_946C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_DWE3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength0;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel1;                                                // 0x0008(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KCY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength1;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel2;                                                // 0x0010(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2WO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength2;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel3;                                                // 0x0018(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XX72[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_2QE7[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_DIF7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterial
	 * Size -> 0x0098
	 */
	struct FVoxelPaintMaterial
	{
	public:
		EVoxelPaintMaterialType                                    Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QJJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelPaintMaterialColor                            Color;                                                   // 0x0004(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialSingleIndex                      SingleIndex;                                             // 0x0020(0x0001) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YBV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelPaintMaterialMultiIndex                       MultiIndex;                                              // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialMultiIndexWetness                MultiIndexWetness;                                       // 0x0040(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialMultiIndexRaw                    MultiIndexRaw;                                           // 0x0044(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialUV                               UV;                                                      // 0x0064(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNH9[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_K2CN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_7G6J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelUncompressedWorldSave                         SaveOverride;                                            // 0x0008(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bOverrideData;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_142P[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVoxelWorld*                                         DataOverride;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIVU[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_S8RF[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelMaterialCollectionBase*                        MaterialCollection;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AVoxelWorld>                          World;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AG33[0x70];                                  // 0x0020(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelDisableEditsBoxItemReference
	 * Size -> 0x0028
	 */
	struct FVoxelDisableEditsBoxItemReference
	{
	public:
		unsigned char                                              UnknownData_ZJVM[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelAssetItemReference
	 * Size -> 0x0028
	 */
	struct FVoxelAssetItemReference
	{
	public:
		unsigned char                                              UnknownData_OSJA[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelToolRenderingRef
	 * Size -> 0x0004
	 */
	struct FVoxelToolRenderingRef
	{
	public:
		unsigned char                                              UnknownData_M55L[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_BD49[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_DK9K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               Generator;                                               // 0x0010(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogProgress;                                            // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFastCollisionCook;                                      // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCleanCollisionMesh;                                     // 0x007A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGC1[0x5];                                   // 0x007B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelFindClosestNonEmptyVoxelResult
	 * Size -> 0x001C
	 */
	struct FVoxelFindClosestNonEmptyVoxelResult
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWE7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_KNW0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_9CVQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_F1AB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_VWCM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Category;                                                // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKJ8[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_2LO5[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_08XD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODToSet;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelIntBox                                        LODBounds;                                               // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForCollisions;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYQI[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelIntBox                                        CollisionsBounds;                                        // 0x0024(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForNavmesh;                                          // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMYA[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_77HV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_3W3G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ECollisionChannel>                                  CollisionChannelsToIgnore;                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EDrawDebugTrace                                            DrawDebugType;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7G52[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_CDFK[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsStackElement
	 * Size -> 0x0060
	 */
	struct FVoxelSurfaceEditsStackElement
	{
	public:
		unsigned char                                              UnknownData_3HSI[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsProcessedVoxels
	 * Size -> 0x0030
	 */
	struct FVoxelSurfaceEditsProcessedVoxels
	{
	public:
		unsigned char                                              UnknownData_KKT0[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsVoxels
	 * Size -> 0x0018
	 */
	struct FVoxelSurfaceEditsVoxels
	{
	public:
		unsigned char                                              UnknownData_XBLR[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_D2TL[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Voxel.VoxelColorTexture
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FVoxelColorTexture : public FVoxelTextureStructBase
	{
	public:
		unsigned char                                              UnknownData_7V4B[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_D8LA[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            FixedDirection;                                          // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseFixedNormal;                                         // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFEG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FixedNormal;                                             // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAlignment;                                           // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelToolAlignment                                        Alignment;                                               // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAirMode;                                                // 0x0036(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9RW[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceToCamera;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPlanePreview;                                       // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APXS[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
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
