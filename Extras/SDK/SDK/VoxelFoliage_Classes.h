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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class VoxelFoliage.VoxelFoliage
	 * Size -> 0x02D0 (FullSize[0x02F8] - InheritedSize[0x0028])
	 */
	class UVoxelFoliage : public UObject
	{
	public:
		TArray<struct FVoxelFoliageMesh>                           Meshes;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelInstancedMeshSettings                         InstanceSettings;                                        // 0x0040(0x0180) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVoxelGeneratorPicker                               OutputPickerGenerator;                                   // 0x01C0(0x0068) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelFoliageDensity>                        Densities;                                               // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVoxelFoliageSpawnSettings                          SpawnSettings;                                           // 0x0238(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FVoxelFoliageCustomData>                     CustomDatas;                                             // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableSlopeRestriction;                                 // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VW4W[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelFloatInterval                                 GroundSlopeAngle;                                        // 0x0274(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHeightRestriction;                                // 0x027C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKBN[0x3];                                   // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelFloatInterval                                 HeightRestriction;                                       // 0x0280(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightRestrictionFalloff;                                // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelFoliageScale                                  Scaling;                                                 // 0x028C(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EVoxelFoliageRotation                                      RotationAlignment;                                       // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomYaw;                                              // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXOI[0x2];                                   // 0x02AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomPitchAngle;                                        // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalPositionOffset;                                     // 0x02B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LocalRotationOffset;                                     // 0x02BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             GlobalPositionOffset;                                    // 0x02C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FloatingDetectionOffset;                                 // 0x02D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSave;                                                   // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotDespawn;                                           // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A2TM[0x2];                                   // 0x02E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x02E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WAT[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelFoliage.VoxelFoliageActor
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class AVoxelFoliageActor : public AActor
	{
	public:
		bool                                                       bAutomaticallySetMesh;                                   // 0x0220(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RL7P[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelPhysicsRelevancyComponent*                     PhysicsRelevancyComponent;                               // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelFoliage.VoxelFoliageBiomeType
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UVoxelFoliageBiomeType : public UObject
	{
	public:
		struct FVoxelGeneratorPicker                               OutputPickerGenerator;                                   // 0x0028(0x0068) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVoxelGeneratorOutputPicker                         BiomeOutput;                                             // 0x0090(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelFoliageBiomeTypeEntry>                 Entries;                                                 // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelFoliage.VoxelFoliageBiome
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UVoxelFoliageBiome : public UVoxelFoliageBiomeBase
	{
	public:
		class UVoxelFoliageBiomeType*                              Type;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVoxelFoliageBiomeEntry>                     Entries;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelFoliage.VoxelFoliageBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelFoliageBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SpawnVoxelSpawnerActorsInArea(TArray<class AVoxelFoliageActor*>* OutActors, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, EVoxelSpawnerActorSpawnType SpawnType);
		class AVoxelFoliageActor* SpawnVoxelSpawnerActorByInstanceIndex(class AVoxelWorld* World, class UVoxelHierarchicalInstancedStaticMeshComponent* Component, int32_t InstanceIndex);
		void LoadFromSpawnersSave(class AVoxelWorld* World, const struct FVoxelFoliageSave& Save);
		struct FVoxelFoliageSave GetSpawnersSave(class AVoxelWorld* World);
		void AddInstances(class AVoxelWorld* World, TArray<struct FTransform> Transforms, TArray<float> CustomData, const struct FVoxelInstancedMeshKey& MeshKey, const struct FVector& FloatingDetectionOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelFoliage.VoxelFoliageCollection
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVoxelFoliageCollection : public UVoxelFoliageCollectionBase
	{
	public:
		TArray<class UVoxelFoliage*>                               Foliages;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelFoliage.VoxelFoliageDebugSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelFoliageDebugSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelFoliage.VoxelFoliageSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelFoliageSubsystemProxy : public UVoxelFoliageInterfaceSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelFoliage.VoxelHierarchicalInstancedStaticMeshComponent
	 * Size -> 0x0340 (FullSize[0x09B0] - InheritedSize[0x0670])
	 */
	class UVoxelHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
	{
	public:
		class UMaterialInterface*                                  Voxel_DebugMaterial;                                     // 0x0670(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3TP8[0x30];                                  // 0x0678(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVoxelInstancedMeshKey                              Voxel_MeshKey;                                           // 0x06A8(0x01A8) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8DA0[0x160];                                 // 0x0850(0x0160) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelFoliage.VoxelInstancedMeshSubsystemProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelInstancedMeshSubsystemProxy : public UVoxelStaticSubsystemProxy
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
