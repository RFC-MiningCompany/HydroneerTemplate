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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function VoxelFoliage.VoxelFoliageBlueprintLibrary.SpawnVoxelSpawnerActorsInArea
	 */
	struct UVoxelFoliageBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Params
	{
	public:
		TArray<class AVoxelFoliageActor*>                          OutActors;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class AVoxelWorld*                                         World;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVoxelIntBox                                        Bounds;                                                  // 0x0018(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Voxel_EVoxelSpawnerActorSpawnType                          SpawnType;                                               // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VoxelFoliage.VoxelFoliageBlueprintLibrary.SpawnVoxelSpawnerActorByInstanceIndex
	 */
	struct UVoxelFoliageBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Params
	{
	public:
		class AVoxelWorld*                                         World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVoxelHierarchicalInstancedStaticMeshComponent*      Component;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InstanceIndex;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AVoxelFoliageActor*                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VoxelFoliage.VoxelFoliageBlueprintLibrary.LoadFromSpawnersSave
	 */
	struct UVoxelFoliageBlueprintLibrary_LoadFromSpawnersSave_Params
	{
	public:
		class AVoxelWorld*                                         World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVoxelFoliageSave                                   Save;                                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VoxelFoliage.VoxelFoliageBlueprintLibrary.GetSpawnersSave
	 */
	struct UVoxelFoliageBlueprintLibrary_GetSpawnersSave_Params
	{
	public:
		class AVoxelWorld*                                         World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVoxelFoliageSave                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VoxelFoliage.VoxelFoliageBlueprintLibrary.AddInstances
	 */
	struct UVoxelFoliageBlueprintLibrary_AddInstances_Params
	{
	public:
		class AVoxelWorld*                                         World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              CustomData;                                              // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVoxelInstancedMeshKey                              MeshKey;                                                 // 0x0028(0x01A8)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             FloatingDetectionOffset;                                 // 0x01D0(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
