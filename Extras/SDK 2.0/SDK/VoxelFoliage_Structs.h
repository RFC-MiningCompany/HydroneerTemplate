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
	 * Enum VoxelFoliage.EVoxelFoliageScaling
	 */
	enum class EVoxelFoliageScaling : uint8_t
	{
		Uniform = 0,
		Free    = 1,
		LockXY  = 2,
		MAX     = 3
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageRotation
	 */
	enum class EVoxelFoliageRotation : uint8_t
	{
		AlignToSurface = 0,
		AlignToWorldUp = 1,
		RandomAlign    = 2,
		MAX            = 3
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageCustomDataType
	 */
	enum class EVoxelFoliageCustomDataType : uint8_t
	{
		ColorGeneratorOutput = 0,
		FloatGeneratorOutput = 1,
		MaterialColor        = 2,
		MaterialSingleIndex  = 3,
		MaterialUV           = 4,
		MAX                  = 5
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageDensityType
	 */
	enum class EVoxelFoliageDensityType : uint8_t
	{
		Constant             = 0,
		GeneratorOutput      = 1,
		MaterialRGBA         = 2,
		MaterialUVs          = 3,
		MaterialFiveWayBlend = 4,
		SingleIndex          = 5,
		MultiIndex           = 6,
		MAX                  = 7
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageRandomGenerator
	 */
	enum class EVoxelFoliageRandomGenerator : uint8_t
	{
		Sobol  = 0,
		Halton = 1,
		MAX    = 2
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageSpawnType
	 */
	enum class EVoxelFoliageSpawnType : uint8_t
	{
		Ray    = 0,
		Height = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageMesh
	 * Size -> 0x0020
	 */
	struct FVoxelFoliageMesh
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQHT[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelInstancedMeshSettings
	 * Size -> 0x0180
	 */
	struct FVoxelInstancedMeshSettings
	{
	public:
		struct FVoxelInt32Interval                                 CullDistance;                                            // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadow;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectDynamicIndirectLighting;                          // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectDistanceFieldLighting;                            // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadowAsTwoSided;                                   // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReceivesDecals;                                         // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAsOccluder;                                          // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BH3E[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyInstance                                       BodyInstance;                                            // 0x0010(0x0158) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EHasCustomNavigableGeometry                                CustomNavigableGeometry;                                 // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x0169(0x0001) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bRenderCustomDepth;                                      // 0x016A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJ62[0x1];                                   // 0x016B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomDepthStencilValue;                                 // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BuildDelay;                                              // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GIL8[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              HISMTemplate;                                            // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageDensity
	 * Size -> 0x00C8
	 */
	struct FVoxelFoliageDensity
	{
	public:
		EVoxelFoliageDensityType                                   Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TOE8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Constant;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMainGenerator;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IXS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               CustomGenerator;                                         // 0x0010(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelGeneratorOutputPicker                         GeneratorOutputName;                                     // 0x0078(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRGBA                                                 RGBAChannel;                                             // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z21U[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UVChannel;                                               // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelUVAxis                                               UVAxis;                                                  // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2I5[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FiveWayBlendChannel;                                     // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            SingleIndexChannels;                                     // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MultiIndexChannels;                                      // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInvertDensity;                                          // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDEX[0x17];                                  // 0x00B1(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageSpawnSettings
	 * Size -> 0x0028
	 */
	struct FVoxelFoliageSpawnSettings
	{
	public:
		EVoxelFoliageSpawnType                                     SpawnType;                                               // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVFK[0x3];                                   // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVoxelDistance                                      DistanceBetweenInstances;                                // 0x0004(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ChunkSize;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelDistance                                      GenerationDistance;                                      // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EVoxelFoliageRandomGenerator                               RandomGenerator;                                         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteGenerationDistance;                             // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5IO[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorOutputPicker                         HeightGraphOutputName_HeightOnly;                        // 0x001C(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckIfFloating_HeightOnly;                             // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckIfCovered_HeightOnly;                              // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O21Q[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageCustomData
	 * Size -> 0x0098
	 */
	struct FVoxelFoliageCustomData
	{
	public:
		EVoxelFoliageCustomDataType                                Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMainGenerator;                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y76I[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               CustomGenerator;                                         // 0x0008(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelGeneratorOutputPicker                         ColorGeneratorOutputName;                                // 0x0070(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelGeneratorOutputPicker                         FloatGeneratorOutputName;                                // 0x0078(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UVChannel;                                               // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelUVAxis                                               UVAxis;                                                  // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4AZ[0x13];                                  // 0x0085(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageScale
	 * Size -> 0x001C
	 */
	struct FVoxelFoliageScale
	{
	public:
		EVoxelFoliageScaling                                       Scaling;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AE8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelFloatInterval                                 ScaleX;                                                  // 0x0004(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelFloatInterval                                 ScaleY;                                                  // 0x000C(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelFloatInterval                                 ScaleZ;                                                  // 0x0014(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageBiomeTypeEntry
	 * Size -> 0x0034
	 */
	struct FVoxelFoliageBiomeTypeEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelFoliageSpawnSettings                          SpawnSettings;                                           // 0x000C(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageBiomeEntry
	 * Size -> 0x0010
	 */
	struct FVoxelFoliageBiomeEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelFoliage*                                       Foliage;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelInstancedMeshKey
	 * Size -> 0x01A8
	 */
	struct FVoxelInstancedMeshKey
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelInstancedMeshSettings                         InstanceSettings;                                        // 0x0020(0x0180) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    NumCustomDataChannels;                                   // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDND[0x4];                                   // 0x01A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageSave
	 * Size -> 0x0010
	 */
	struct FVoxelFoliageSave
	{
	public:
		unsigned char                                              UnknownData_HEKL[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
