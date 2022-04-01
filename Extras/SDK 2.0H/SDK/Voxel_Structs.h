#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0H
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
	enum class Voxel_EVoxelTaskType : uint8_t
	{
		EVoxelTaskType__ChunksMeshing                  = 0,
		EVoxelTaskType__CollisionsChunksMeshing        = 1,
		EVoxelTaskType__VisibleChunksMeshing           = 2,
		EVoxelTaskType__VisibleCollisionsChunksMeshing = 3,
		EVoxelTaskType__CollisionCooking               = 4,
		EVoxelTaskType__FoliageBuild                   = 5,
		EVoxelTaskType__HISMBuild                      = 6,
		EVoxelTaskType__AsyncEditFunctions             = 7,
		EVoxelTaskType__MeshMerge                      = 8,
		EVoxelTaskType__RenderOctree                   = 9,
		EVoxelTaskType__Max                            = 10
	};

	/**
	 * Enum Voxel.EVoxelFoliageWorldType
	 */
	enum class Voxel_EVoxelFoliageWorldType : uint8_t
	{
		EVoxelFoliageWorldType__Flat                       = 0,
		EVoxelFoliageWorldType__Planet                     = 1,
		EVoxelFoliageWorldType__EVoxelFoliageWorldType_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelRenderType
	 */
	enum class Voxel_EVoxelRenderType : uint8_t
	{
		EVoxelRenderType__MarchingCubes        = 0,
		EVoxelRenderType__Cubic                = 1,
		EVoxelRenderType__SurfaceNets          = 2,
		EVoxelRenderType__EVoxelRenderType_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelRGBHardness
	 */
	enum class Voxel_EVoxelRGBHardness : uint8_t
	{
		EVoxelRGBHardness__FourWayBlend          = 0,
		EVoxelRGBHardness__FiveWayBlend          = 1,
		EVoxelRGBHardness__R                     = 2,
		EVoxelRGBHardness__G                     = 3,
		EVoxelRGBHardness__B                     = 4,
		EVoxelRGBHardness__A                     = 5,
		EVoxelRGBHardness__U0                    = 6,
		EVoxelRGBHardness__U1                    = 7,
		EVoxelRGBHardness__V0                    = 8,
		EVoxelRGBHardness__V1                    = 9,
		EVoxelRGBHardness__EVoxelRGBHardness_MAX = 10
	};

	/**
	 * Enum Voxel.EVoxelNormalConfig
	 */
	enum class Voxel_EVoxelNormalConfig : uint8_t
	{
		EVoxelNormalConfig__NoNormal               = 0,
		EVoxelNormalConfig__GradientNormal         = 1,
		EVoxelNormalConfig__FlatNormal             = 2,
		EVoxelNormalConfig__MeshNormal             = 3,
		EVoxelNormalConfig__EVoxelNormalConfig_MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelUVConfig
	 */
	enum class Voxel_EVoxelUVConfig : uint8_t
	{
		EVoxelUVConfig__GlobalUVs        = 0,
		EVoxelUVConfig__PackWorldUpInUVs = 1,
		EVoxelUVConfig__PerVoxelUVs      = 2,
		EVoxelUVConfig__Max              = 3
	};

	/**
	 * Enum Voxel.EVoxelMaterialConfig
	 */
	enum class Voxel_EVoxelMaterialConfig : uint8_t
	{
		EVoxelMaterialConfig__RGB                      = 0,
		EVoxelMaterialConfig__SingleIndex              = 1,
		EVoxelMaterialConfig__DoubleIndex_DEPRECATED   = 2,
		EVoxelMaterialConfig__MultiIndex               = 3,
		EVoxelMaterialConfig__EVoxelMaterialConfig_MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelGeneratorPickerType
	 */
	enum class Voxel_EVoxelGeneratorPickerType : uint8_t
	{
		EVoxelGeneratorPickerType__Class                         = 0,
		EVoxelGeneratorPickerType__Object                        = 1,
		EVoxelGeneratorPickerType__EVoxelGeneratorPickerType_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelWorldCoordinatesRounding
	 */
	enum class Voxel_EVoxelWorldCoordinatesRounding : uint8_t
	{
		EVoxelWorldCoordinatesRounding__RoundToNearest                     = 0,
		EVoxelWorldCoordinatesRounding__RoundUp                            = 1,
		EVoxelWorldCoordinatesRounding__RoundDown                          = 2,
		EVoxelWorldCoordinatesRounding__EVoxelWorldCoordinatesRounding_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelAssetActorPreviewUpdateType
	 */
	enum class Voxel_EVoxelAssetActorPreviewUpdateType : uint8_t
	{
		EVoxelAssetActorPreviewUpdateType__Manually                              = 0,
		EVoxelAssetActorPreviewUpdateType__EndOfMove                             = 1,
		EVoxelAssetActorPreviewUpdateType__RealTime                              = 2,
		EVoxelAssetActorPreviewUpdateType__EVoxelAssetActorPreviewUpdateType_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelAssetMergeMode
	 */
	enum class Voxel_EVoxelAssetMergeMode : uint8_t
	{
		EVoxelAssetMergeMode__AllValues                    = 0,
		EVoxelAssetMergeMode__AllMaterials                 = 1,
		EVoxelAssetMergeMode__AllValuesAndAllMaterials     = 2,
		EVoxelAssetMergeMode__InnerValues                  = 3,
		EVoxelAssetMergeMode__InnerMaterials               = 4,
		EVoxelAssetMergeMode__InnerValuesAndInnerMaterials = 5,
		EVoxelAssetMergeMode__EVoxelAssetMergeMode_MAX     = 6
	};

	/**
	 * Enum Voxel.EVoxelMemoryUsageType
	 */
	enum class Voxel_EVoxelMemoryUsageType : uint8_t
	{
		EVoxelMemoryUsageType__VoxelsDirtyValuesData     = 0,
		EVoxelMemoryUsageType__VoxelsDirtyMaterialsData  = 1,
		EVoxelMemoryUsageType__VoxelsCachedValuesData    = 2,
		EVoxelMemoryUsageType__VoxelsCachedMaterialsData = 3,
		EVoxelMemoryUsageType__UndoRedo                  = 4,
		EVoxelMemoryUsageType__Multiplayer               = 5,
		EVoxelMemoryUsageType__IntermediateBuffers       = 6,
		EVoxelMemoryUsageType__MeshesIndices             = 7,
		EVoxelMemoryUsageType__MeshesTessellationIndices = 8,
		EVoxelMemoryUsageType__MeshesVertices            = 9,
		EVoxelMemoryUsageType__MeshesColors              = 10,
		EVoxelMemoryUsageType__MeshesUVsAndTangents      = 11,
		EVoxelMemoryUsageType__DataAssets                = 12,
		EVoxelMemoryUsageType__HeightmapAssets           = 13,
		EVoxelMemoryUsageType__UncompressedSaves         = 14,
		EVoxelMemoryUsageType__CompressedSaves           = 15,
		EVoxelMemoryUsageType__EVoxelMemoryUsageType_MAX = 16
	};

	/**
	 * Enum Voxel.EVoxelDataAssetImportSource
	 */
	enum class Voxel_EVoxelDataAssetImportSource : uint8_t
	{
		EVoxelDataAssetImportSource__None                            = 0,
		EVoxelDataAssetImportSource__MagicaVox                       = 1,
		EVoxelDataAssetImportSource__RawVox                          = 2,
		EVoxelDataAssetImportSource__Mesh                            = 3,
		EVoxelDataAssetImportSource__EVoxelDataAssetImportSource_MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelDistanceType
	 */
	enum class Voxel_EVoxelDistanceType : uint8_t
	{
		EVoxelDistanceType__Voxels                 = 0,
		EVoxelDistanceType__Centimeters            = 1,
		EVoxelDistanceType__EVoxelDistanceType_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelCubicFace
	 */
	enum class Voxel_EVoxelCubicFace : uint8_t
	{
		EVoxelCubicFace__Back                = 0,
		EVoxelCubicFace__Front               = 1,
		EVoxelCubicFace__Left                = 2,
		EVoxelCubicFace__Right               = 3,
		EVoxelCubicFace__Bottom              = 4,
		EVoxelCubicFace__Top                 = 5,
		EVoxelCubicFace__EVoxelCubicFace_MAX = 6
	};

	/**
	 * Enum Voxel.EVoxelDataItemCombineMode
	 */
	enum class Voxel_EVoxelDataItemCombineMode : uint8_t
	{
		EVoxelDataItemCombineMode__Min = 0,
		EVoxelDataItemCombineMode__Max = 1,
		EVoxelDataItemCombineMode__Sum = 2
	};

	/**
	 * Enum Voxel.EVoxel32BitMask
	 */
	enum class Voxel_EVoxel32BitMask : uint8_t
	{
		EVoxel32BitMask__Channel0            = 0,
		EVoxel32BitMask__Channel1            = 1,
		EVoxel32BitMask__Channel2            = 2,
		EVoxel32BitMask__Channel3            = 3,
		EVoxel32BitMask__Channel4            = 4,
		EVoxel32BitMask__Channel5            = 5,
		EVoxel32BitMask__Channel6            = 6,
		EVoxel32BitMask__Channel7            = 7,
		EVoxel32BitMask__Channel8            = 8,
		EVoxel32BitMask__Channel9            = 9,
		EVoxel32BitMask__Channel10           = 10,
		EVoxel32BitMask__Channel11           = 11,
		EVoxel32BitMask__Channel12           = 12,
		EVoxel32BitMask__Channel13           = 13,
		EVoxel32BitMask__Channel14           = 14,
		EVoxel32BitMask__Channel15           = 15,
		EVoxel32BitMask__Channel16           = 16,
		EVoxel32BitMask__Channel17           = 17,
		EVoxel32BitMask__Channel18           = 18,
		EVoxel32BitMask__Channel19           = 19,
		EVoxel32BitMask__Channel20           = 20,
		EVoxel32BitMask__Channel21           = 21,
		EVoxel32BitMask__Channel22           = 22,
		EVoxel32BitMask__Channel23           = 23,
		EVoxel32BitMask__Channel24           = 24,
		EVoxel32BitMask__Channel25           = 25,
		EVoxel32BitMask__Channel26           = 26,
		EVoxel32BitMask__Channel27           = 27,
		EVoxel32BitMask__Channel28           = 28,
		EVoxel32BitMask__Channel29           = 29,
		EVoxel32BitMask__Channel30           = 30,
		EVoxel32BitMask__Channel31           = 31,
		EVoxel32BitMask__EVoxel32BitMask_MAX = 32
	};

	/**
	 * Enum Voxel.EVoxelUVAxis
	 */
	enum class Voxel_EVoxelUVAxis : uint8_t
	{
		EVoxelUVAxis__U                = 0,
		EVoxelUVAxis__V                = 1,
		EVoxelUVAxis__EVoxelUVAxis_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelAxis
	 */
	enum class Voxel_EVoxelAxis : uint8_t
	{
		EVoxelAxis__X              = 0,
		EVoxelAxis__Y              = 1,
		EVoxelAxis__Z              = 2,
		EVoxelAxis__EVoxelAxis_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelComputeDevice
	 */
	enum class Voxel_EVoxelComputeDevice : uint8_t
	{
		EVoxelComputeDevice__CPU                     = 0,
		EVoxelComputeDevice__GPU                     = 1,
		EVoxelComputeDevice__EVoxelComputeDevice_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelFalloff
	 */
	enum class Voxel_EVoxelFalloff : uint8_t
	{
		EVoxelFalloff__Linear            = 0,
		EVoxelFalloff__Smooth            = 1,
		EVoxelFalloff__Spherical         = 2,
		EVoxelFalloff__Tip               = 3,
		EVoxelFalloff__EVoxelFalloff_MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelDataType
	 */
	enum class Voxel_EVoxelDataType : uint8_t
	{
		EVoxelDataType__Values             = 0,
		EVoxelDataType__Materials          = 1,
		EVoxelDataType__EVoxelDataType_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelSamplerMode
	 */
	enum class Voxel_EVoxelSamplerMode : uint8_t
	{
		EVoxelSamplerMode__Clamp                 = 0,
		EVoxelSamplerMode__Tile                  = 1,
		EVoxelSamplerMode__EVoxelSamplerMode_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelSpawnerActorSpawnType
	 */
	enum class Voxel_EVoxelSpawnerActorSpawnType : uint8_t
	{
		EVoxelSpawnerActorSpawnType__All                             = 0,
		EVoxelSpawnerActorSpawnType__OnlyFloating                    = 1,
		EVoxelSpawnerActorSpawnType__EVoxelSpawnerActorSpawnType_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelRGBA
	 */
	enum class Voxel_EVoxelRGBA : uint8_t
	{
		EVoxelRGBA__R              = 0,
		EVoxelRGBA__G              = 1,
		EVoxelRGBA__B              = 2,
		EVoxelRGBA__A              = 3,
		EVoxelRGBA__EVoxelRGBA_MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelCellularReturnType
	 */
	enum class Voxel_EVoxelCellularReturnType : uint8_t
	{
		EVoxelCellularReturnType__CellValue                    = 0,
		EVoxelCellularReturnType__Distance                     = 1,
		EVoxelCellularReturnType__Distance2                    = 2,
		EVoxelCellularReturnType__Distance2Add                 = 3,
		EVoxelCellularReturnType__Distance2Sub                 = 4,
		EVoxelCellularReturnType__Distance2Mul                 = 5,
		EVoxelCellularReturnType__Distance2Div                 = 6,
		EVoxelCellularReturnType__EVoxelCellularReturnType_MAX = 7
	};

	/**
	 * Enum Voxel.EVoxelCellularDistanceFunction
	 */
	enum class Voxel_EVoxelCellularDistanceFunction : uint8_t
	{
		EVoxelCellularDistanceFunction__Euclidean                          = 0,
		EVoxelCellularDistanceFunction__Manhattan                          = 1,
		EVoxelCellularDistanceFunction__Natural                            = 2,
		EVoxelCellularDistanceFunction__EVoxelCellularDistanceFunction_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelNoiseFractalType
	 */
	enum class Voxel_EVoxelNoiseFractalType : uint8_t
	{
		EVoxelNoiseFractalType__FBM                        = 0,
		EVoxelNoiseFractalType__Billow                     = 1,
		EVoxelNoiseFractalType__RigidMulti                 = 2,
		EVoxelNoiseFractalType__EVoxelNoiseFractalType_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelNoiseInterpolation
	 */
	enum class Voxel_EVoxelNoiseInterpolation : uint8_t
	{
		EVoxelNoiseInterpolation__Linear                       = 0,
		EVoxelNoiseInterpolation__Hermite                      = 1,
		EVoxelNoiseInterpolation__Quintic                      = 2,
		EVoxelNoiseInterpolation__EVoxelNoiseInterpolation_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelGeneratorParameterPropertyType
	 */
	enum class Voxel_EVoxelGeneratorParameterPropertyType : uint8_t
	{
		EVoxelGeneratorParameterPropertyType__Float                                    = 0,
		EVoxelGeneratorParameterPropertyType__Int                                      = 1,
		EVoxelGeneratorParameterPropertyType__Bool                                     = 2,
		EVoxelGeneratorParameterPropertyType__Name                                     = 3,
		EVoxelGeneratorParameterPropertyType__Object                                   = 4,
		EVoxelGeneratorParameterPropertyType__Struct                                   = 5,
		EVoxelGeneratorParameterPropertyType__EVoxelGeneratorParameterPropertyType_MAX = 6
	};

	/**
	 * Enum Voxel.EVoxelGeneratorParameterContainerType
	 */
	enum class Voxel_EVoxelGeneratorParameterContainerType : uint8_t
	{
		EVoxelGeneratorParameterContainerType__None                                      = 0,
		EVoxelGeneratorParameterContainerType__Array                                     = 1,
		EVoxelGeneratorParameterContainerType__Set                                       = 2,
		EVoxelGeneratorParameterContainerType__Map                                       = 3,
		EVoxelGeneratorParameterContainerType__EVoxelGeneratorParameterContainerType_MAX = 4
	};

	/**
	 * Enum Voxel.EVoxelHeightmapImporterMaterialConfig
	 */
	enum class Voxel_EVoxelHeightmapImporterMaterialConfig : uint8_t
	{
		EVoxelHeightmapImporterMaterialConfig__RGB                                       = 0,
		EVoxelHeightmapImporterMaterialConfig__FourWayBlend                              = 1,
		EVoxelHeightmapImporterMaterialConfig__FiveWayBlend                              = 2,
		EVoxelHeightmapImporterMaterialConfig__SingleIndex                               = 3,
		EVoxelHeightmapImporterMaterialConfig__MultiIndex                                = 4,
		EVoxelHeightmapImporterMaterialConfig__EVoxelHeightmapImporterMaterialConfig_MAX = 5
	};

	/**
	 * Enum Voxel.EVoxelMaterialMask_BP
	 */
	enum class Voxel_EVoxelMaterialMask_BP : uint8_t
	{
		EVoxelMaterialMask_BP__R                      = 0,
		EVoxelMaterialMask_BP__G                      = 1,
		EVoxelMaterialMask_BP__B                      = 2,
		EVoxelMaterialMask_BP__A                      = 3,
		EVoxelMaterialMask_BP__U0                     = 4,
		EVoxelMaterialMask_BP__V0                     = 5,
		EVoxelMaterialMask_BP__U1                     = 6,
		EVoxelMaterialMask_BP__V1                     = 7,
		EVoxelMaterialMask_BP__U2                     = 8,
		EVoxelMaterialMask_BP__V2                     = 9,
		EVoxelMaterialMask_BP__U3                     = 10,
		EVoxelMaterialMask_BP__V3                     = 11,
		EVoxelMaterialMask_BP__EVoxelMaterialMask_MAX = 12
	};

	/**
	 * Enum Voxel.EVoxelPaintMaterialType
	 */
	enum class Voxel_EVoxelPaintMaterialType : uint8_t
	{
		EVoxelPaintMaterialType__Color                       = 0,
		EVoxelPaintMaterialType__FiveWayBlend                = 1,
		EVoxelPaintMaterialType__SingleIndex                 = 2,
		EVoxelPaintMaterialType__MultiIndex                  = 3,
		EVoxelPaintMaterialType__MultiIndexWetness           = 4,
		EVoxelPaintMaterialType__MultiIndexRaw               = 5,
		EVoxelPaintMaterialType__UV                          = 6,
		EVoxelPaintMaterialType__EVoxelPaintMaterialType_MAX = 7
	};

	/**
	 * Enum Voxel.EVoxelProjectionShape
	 */
	enum class Voxel_EVoxelProjectionShape : uint8_t
	{
		EVoxelProjectionShape__Circle                    = 0,
		EVoxelProjectionShape__Square                    = 1,
		EVoxelProjectionShape__EVoxelProjectionShape_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelThreadPriority
	 */
	enum class Voxel_EVoxelThreadPriority : uint8_t
	{
		EVoxelThreadPriority__Normal                   = 0,
		EVoxelThreadPriority__AboveNormal              = 1,
		EVoxelThreadPriority__BelowNormal              = 2,
		EVoxelThreadPriority__Highest                  = 3,
		EVoxelThreadPriority__Lowest                   = 4,
		EVoxelThreadPriority__SlightlyBelowNormal      = 5,
		EVoxelThreadPriority__TimeCritical             = 6,
		EVoxelThreadPriority__EVoxelThreadPriority_MAX = 7
	};

	/**
	 * Enum Voxel.EVoxelSurfaceToolMaskType
	 */
	enum class Voxel_EVoxelSurfaceToolMaskType : uint8_t
	{
		EVoxelSurfaceToolMaskType__Texture                       = 0,
		EVoxelSurfaceToolMaskType__Generator                     = 1,
		EVoxelSurfaceToolMaskType__EVoxelSurfaceToolMaskType_MAX = 2
	};

	/**
	 * Enum Voxel.EVoxelSDFMergeMode
	 */
	enum class Voxel_EVoxelSDFMergeMode : uint8_t
	{
		EVoxelSDFMergeMode__Union                  = 0,
		EVoxelSDFMergeMode__Intersection           = 1,
		EVoxelSDFMergeMode__Override               = 2,
		EVoxelSDFMergeMode__EVoxelSDFMergeMode_MAX = 3
	};

	/**
	 * Enum Voxel.EVoxelToolAlignment
	 */
	enum class Voxel_EVoxelToolAlignment : uint8_t
	{
		EVoxelToolAlignment__Surface                 = 0,
		EVoxelToolAlignment__View                    = 1,
		EVoxelToolAlignment__Ground                  = 2,
		EVoxelToolAlignment__Up                      = 3,
		EVoxelToolAlignment__EVoxelToolAlignment_MAX = 4
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
		Voxel_EVoxelGeneratorPickerType                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4M8M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_6VVI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LayerMaterial;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelMaterialIndices
	 * Size -> 0x0008
	 */
	struct FVoxelMaterialIndices
	{
	public:
		unsigned char                                              UnknownData_G7J6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelDataAssetImportSettings_MagicaVox
	 * Size -> 0x0008
	 */
	struct FVoxelDataAssetImportSettings_MagicaVox
	{
	public:
		bool                                                       bUsePalette;                                             // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBMI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_OQOP[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_KQBY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_9O8T[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, bool>                                    Keys;                                                    // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, float>                                   Axes;                                                    // 0x0068(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		Engine_ECollisionChannel                                   CollisionChannel;                                        // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZS8B[0x67];                                  // 0x00B9(0x0067) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelHeightmapImporterWeightmapInfos
	 * Size -> 0x0018
	 */
	struct FVoxelHeightmapImporterWeightmapInfos
	{
	public:
		struct FFilePath                                           File;                                                    // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		Voxel_EVoxelRGBA                                           Layer;                                                   // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Index;                                                   // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3QW[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelInstancedMaterialCollectionLayer
	 * Size -> 0x0010
	 */
	struct FVoxelInstancedMaterialCollectionLayer
	{
	public:
		unsigned char                                              LayerIndex;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GY0Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		Voxel_EVoxelRGBA                                           Layer;                                                   // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Index;                                                   // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0F33[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)

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
	 * ScriptStruct Voxel.VoxelPaintMaterialMultiIndex
	 * Size -> 0x0018
	 */
	struct FVoxelPaintMaterialMultiIndex
	{
	public:
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXX5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetValue;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelPaintMaterial_MaterialCollectionChannel> LockedChannels;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

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
		unsigned char                                              UnknownData_JJBH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_MJSK[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		Voxel_EVoxelAxis                                           SweepDirection;                                          // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_BMRF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  ColorsMaterial;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportUVs;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PI0[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  UVsMaterial;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderTargetSize;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0AM5[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_4X36[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelMaterial
	 * Size -> 0x0008
	 */
	struct FVoxelMaterial
	{
	public:
		unsigned char                                              UnknownData_V615[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

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
		Voxel_EVoxelGeneratorPickerType                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KRP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		Engine_ERendererStencilMask                                CustomDepthStencilWriteMask;                             // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI4L[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_4WVD[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_CEZ1[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelCompressedWorldSave
	 * Size -> 0x0020
	 */
	struct FVoxelCompressedWorldSave
	{
	public:
		unsigned char                                              UnknownData_6I6N[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		Voxel_EVoxelSurfaceToolMaskType                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YK9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Voxel_EVoxelRGBA                                           Channel;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QE9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               Generator;                                               // 0x0018(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SeedsToRandomize;                                        // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bScaleWithBrushSize;                                     // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PP1W[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_6805[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        LinearColor;                                             // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintR;                                                 // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintG;                                                 // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintB;                                                 // 0x001A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPaintA;                                                 // 0x001B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
		unsigned char                                              UnknownData_GIBB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength0;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel1;                                                // 0x0008(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AADM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength1;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel2;                                                // 0x0010(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZRH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Strength2;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterial_MaterialCollectionChannel       Channel3;                                                // 0x0018(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0LG[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_J0GY[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_CYVW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelPaintMaterial
	 * Size -> 0x0098
	 */
	struct FVoxelPaintMaterial
	{
	public:
		Voxel_EVoxelPaintMaterialType                              Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5T21[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelPaintMaterialColor                            Color;                                                   // 0x0004(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialSingleIndex                      SingleIndex;                                             // 0x0020(0x0001) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKAK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelPaintMaterialMultiIndex                       MultiIndex;                                              // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialMultiIndexWetness                MultiIndexWetness;                                       // 0x0040(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialMultiIndexRaw                    MultiIndexRaw;                                           // 0x0044(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVoxelPaintMaterialUV                               UV;                                                      // 0x0064(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q802[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_3C73[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_VYTQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelUncompressedWorldSave                         SaveOverride;                                            // 0x0008(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bOverrideData;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NAGT[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVoxelWorld*                                         DataOverride;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZUH[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

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
		Voxel_EVoxelRenderType                                     RenderType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Voxel_EVoxelMaterialConfig                                 MaterialConfig;                                          // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZA2[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelMaterialCollectionBase*                        MaterialCollection;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AVoxelWorld>                          World;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCKV[0x70];                                  // 0x0020(0x0070) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelDisableEditsBoxItemReference
	 * Size -> 0x0028
	 */
	struct FVoxelDisableEditsBoxItemReference
	{
	public:
		unsigned char                                              UnknownData_4VEF[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelAssetItemReference
	 * Size -> 0x0028
	 */
	struct FVoxelAssetItemReference
	{
	public:
		unsigned char                                              UnknownData_L1DI[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelToolRenderingRef
	 * Size -> 0x0004
	 */
	struct FVoxelToolRenderingRef
	{
	public:
		unsigned char                                              UnknownData_T71V[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_BBIU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

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
		Voxel_EVoxelRenderType                                     RenderType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4S0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               Generator;                                               // 0x0010(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogProgress;                                            // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFastCollisionCook;                                      // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCleanCollisionMesh;                                     // 0x007A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZSS[0x5];                                   // 0x007B(0x0005) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelFindClosestNonEmptyVoxelResult
	 * Size -> 0x001C
	 */
	struct FVoxelFindClosestNonEmptyVoxelResult
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ESN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		Voxel_EVoxelDistanceType                                   Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HO3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		Voxel_EVoxelGeneratorParameterPropertyType                 PropertyType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWAJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PropertyClass;                                           // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Voxel.VoxelGeneratorParameterType
	 * Size -> 0x0010 (FullSize[0x001C] - InheritedSize[0x000C])
	 */
	struct FVoxelGeneratorParameterType : public FVoxelGeneratorParameterTerminalType
	{
	public:
		Voxel_EVoxelGeneratorParameterContainerType                ContainerType;                                           // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2HC[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_UXKX[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Category;                                                // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QBT[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_MHWS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_B9XB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODToSet;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelIntBox                                        LODBounds;                                               // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForCollisions;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3CC[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelIntBox                                        CollisionsBounds;                                        // 0x0024(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForNavmesh;                                          // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGXW[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_MFIG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		Engine_ECollisionChannel                                   CollisionChannel;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25TV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<Engine_ECollisionChannel>                           CollisionChannelsToIgnore;                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		Engine_EDrawDebugTrace                                     DrawDebugType;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7THN[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_4RPR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsStackElement
	 * Size -> 0x0060
	 */
	struct FVoxelSurfaceEditsStackElement
	{
	public:
		unsigned char                                              UnknownData_G17H[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsProcessedVoxels
	 * Size -> 0x0030
	 */
	struct FVoxelSurfaceEditsProcessedVoxels
	{
	public:
		unsigned char                                              UnknownData_J7C9[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelSurfaceEditsVoxels
	 * Size -> 0x0018
	 */
	struct FVoxelSurfaceEditsVoxels
	{
	public:
		unsigned char                                              UnknownData_HMY2[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_XECO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Voxel.VoxelColorTexture
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FVoxelColorTexture : public FVoxelTextureStructBase
	{
	public:
		unsigned char                                              UnknownData_IK7H[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_W7Y4[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            FixedDirection;                                          // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseFixedNormal;                                         // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPM6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FixedNormal;                                             // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAlignment;                                           // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Voxel_EVoxelToolAlignment                                  Alignment;                                               // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAirMode;                                                // 0x0036(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0UN[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceToCamera;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPlanePreview;                                       // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDFC[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

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
