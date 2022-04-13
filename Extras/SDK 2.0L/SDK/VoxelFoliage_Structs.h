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
	 * Enum VoxelFoliage.EVoxelFoliageScaling
	 */
	enum class EVoxelFoliageScaling : uint8_t
	{
		Uniform = 0x0000000000000000,
		Free    = 0x0000000000000001,
		LockXY  = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageRotation
	 */
	enum class EVoxelFoliageRotation : uint8_t
	{
		AlignToSurface = 0x0000000000000000,
		AlignToWorldUp = 0x0000000000000001,
		RandomAlign    = 0x0000000000000002,
		MAX            = 0x0000000000000003
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageCustomDataType
	 */
	enum class EVoxelFoliageCustomDataType : uint8_t
	{
		ColorGeneratorOutput = 0x0000000000000000,
		FloatGeneratorOutput = 0x0000000000000001,
		MaterialColor        = 0x0000000000000002,
		MaterialSingleIndex  = 0x0000000000000003,
		MaterialUV           = 0x0000000000000004,
		MAX                  = 0x0000000000000005
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageDensityType
	 */
	enum class EVoxelFoliageDensityType : uint8_t
	{
		Constant             = 0x0000000000000000,
		GeneratorOutput      = 0x0000000000000001,
		MaterialRGBA         = 0x0000000000000002,
		MaterialUVs          = 0x0000000000000003,
		MaterialFiveWayBlend = 0x0000000000000004,
		SingleIndex          = 0x0000000000000005,
		MultiIndex           = 0x0000000000000006,
		MAX                  = 0x0000000000000007
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageRandomGenerator
	 */
	enum class EVoxelFoliageRandomGenerator : uint8_t
	{
		Sobol  = 0x0000000000000000,
		Halton = 0x0000000000000001,
		MAX    = 0x0000000000000002
	};

	/**
	 * Enum VoxelFoliage.EVoxelFoliageSpawnType
	 */
	enum class EVoxelFoliageSpawnType : uint8_t
	{
		Ray    = 0x0000000000000000,
		Height = 0x0000000000000001,
		MAX    = 0x0000000000000002
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
		unsigned char                                              UnknownData_GG5D[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_8FNR[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyInstance                                       BodyInstance;                                            // 0x0010(0x0158) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EHasCustomNavigableGeometry                                CustomNavigableGeometry;                                 // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x0169(0x0001) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bRenderCustomDepth;                                      // 0x016A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8DW[0x1];                                   // 0x016B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomDepthStencilValue;                                 // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BuildDelay;                                              // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NS6I[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_BJD3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Constant;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMainGenerator;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAO3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               CustomGenerator;                                         // 0x0010(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelGeneratorOutputPicker                         GeneratorOutputName;                                     // 0x0078(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelRGBA                                                 RGBAChannel;                                             // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0MZ[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UVChannel;                                               // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelUVAxis                                               UVAxis;                                                  // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AX30[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FiveWayBlendChannel;                                     // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            SingleIndexChannels;                                     // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MultiIndexChannels;                                      // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInvertDensity;                                          // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGS1[0x17];                                  // 0x00B1(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageSpawnSettings
	 * Size -> 0x0028
	 */
	struct FVoxelFoliageSpawnSettings
	{
	public:
		EVoxelFoliageSpawnType                                     SpawnType;                                               // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DE2Y[0x3];                                   // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVoxelDistance                                      DistanceBetweenInstances;                                // 0x0004(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ChunkSize;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelDistance                                      GenerationDistance;                                      // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EVoxelFoliageRandomGenerator                               RandomGenerator;                                         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteGenerationDistance;                             // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL0M[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorOutputPicker                         HeightGraphOutputName_HeightOnly;                        // 0x001C(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckIfFloating_HeightOnly;                             // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckIfCovered_HeightOnly;                              // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BL1P[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_WAOP[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelGeneratorPicker                               CustomGenerator;                                         // 0x0008(0x0068) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelGeneratorOutputPicker                         ColorGeneratorOutputName;                                // 0x0070(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelGeneratorOutputPicker                         FloatGeneratorOutputName;                                // 0x0078(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UVChannel;                                               // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelUVAxis                                               UVAxis;                                                  // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTM0[0x13];                                  // 0x0085(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageScale
	 * Size -> 0x001C
	 */
	struct FVoxelFoliageScale
	{
	public:
		EVoxelFoliageScaling                                       Scaling;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AY2L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_SQK9[0x4];                                   // 0x01A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoxelFoliage.VoxelFoliageSave
	 * Size -> 0x0010
	 */
	struct FVoxelFoliageSave
	{
	public:
		unsigned char                                              UnknownData_T3IG[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
