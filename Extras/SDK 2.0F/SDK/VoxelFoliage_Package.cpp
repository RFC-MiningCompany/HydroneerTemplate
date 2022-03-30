﻿/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelFoliage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AVoxelFoliageActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoxelFoliageActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelFoliageActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliageBiomeType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliageBiomeType::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelFoliageBiomeType"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliageBiome.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliageBiome::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelFoliageBiome"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function VoxelFoliage.VoxelFoliageBlueprintLibrary.SpawnVoxelSpawnerActorsInArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AVoxelFoliageActor*>                  OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelIntBox                                Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		Voxel_EVoxelSpawnerActorSpawnType                  SpawnType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelFoliageBlueprintLibrary::SpawnVoxelSpawnerActorsInArea(TArray<class AVoxelFoliageActor*>* OutActors, class AVoxelWorld* World, const struct FVoxelIntBox& Bounds, Voxel_EVoxelSpawnerActorSpawnType SpawnType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VoxelFoliage.VoxelFoliageBlueprintLibrary.SpawnVoxelSpawnerActorsInArea"));
		
		struct
		{
			TArray<class AVoxelFoliageActor*>                  OutActors;
			class AVoxelWorld*                                 World;
			struct FVoxelIntBox                                Bounds;
			Voxel_EVoxelSpawnerActorSpawnType                  SpawnType;
		} params;
		params.World = World;
		params.Bounds = Bounds;
		params.SpawnType = SpawnType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function VoxelFoliage.VoxelFoliageBlueprintLibrary.SpawnVoxelSpawnerActorByInstanceIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVoxelHierarchicalInstancedStaticMeshComponent* Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AVoxelFoliageActor* UVoxelFoliageBlueprintLibrary::SpawnVoxelSpawnerActorByInstanceIndex(class AVoxelWorld* World, class UVoxelHierarchicalInstancedStaticMeshComponent* Component, int32_t InstanceIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VoxelFoliage.VoxelFoliageBlueprintLibrary.SpawnVoxelSpawnerActorByInstanceIndex"));
		
		struct
		{
			class AVoxelWorld*                                 World;
			class UVoxelHierarchicalInstancedStaticMeshComponent* Component;
			int32_t                                            InstanceIndex;
			class AVoxelFoliageActor*                          ReturnValue;
		} params;
		params.World = World;
		params.Component = Component;
		params.InstanceIndex = InstanceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function VoxelFoliage.VoxelFoliageBlueprintLibrary.LoadFromSpawnersSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoxelFoliageSave                           Save                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVoxelFoliageBlueprintLibrary::LoadFromSpawnersSave(class AVoxelWorld* World, const struct FVoxelFoliageSave& Save)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VoxelFoliage.VoxelFoliageBlueprintLibrary.LoadFromSpawnersSave"));
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelFoliageSave                           Save;
		} params;
		params.World = World;
		params.Save = Save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function VoxelFoliage.VoxelFoliageBlueprintLibrary.GetSpawnersSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoxelFoliageSave UVoxelFoliageBlueprintLibrary::GetSpawnersSave(class AVoxelWorld* World)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VoxelFoliage.VoxelFoliageBlueprintLibrary.GetSpawnersSave"));
		
		struct
		{
			class AVoxelWorld*                                 World;
			struct FVoxelFoliageSave                           ReturnValue;
		} params;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function VoxelFoliage.VoxelFoliageBlueprintLibrary.AddInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Transforms                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      CustomData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVoxelInstancedMeshKey                      MeshKey                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     FloatingDetectionOffset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoxelFoliageBlueprintLibrary::AddInstances(class AVoxelWorld* World, TArray<struct FTransform> Transforms, TArray<float> CustomData, const struct FVoxelInstancedMeshKey& MeshKey, const struct FVector& FloatingDetectionOffset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VoxelFoliage.VoxelFoliageBlueprintLibrary.AddInstances"));
		
		struct
		{
			class AVoxelWorld*                                 World;
			TArray<struct FTransform>                          Transforms;
			TArray<float>                                      CustomData;
			struct FVoxelInstancedMeshKey                      MeshKey;
			struct FVector                                     FloatingDetectionOffset;
		} params;
		params.World = World;
		params.Transforms = Transforms;
		params.CustomData = CustomData;
		params.MeshKey = MeshKey;
		params.FloatingDetectionOffset = FloatingDetectionOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliageBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliageBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelFoliageBlueprintLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliageCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliageCollection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelFoliageCollection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliageDebugSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliageDebugSubsystemProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelFoliageDebugSubsystemProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelFoliageSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelFoliageSubsystemProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelFoliageSubsystemProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelHierarchicalInstancedStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelHierarchicalInstancedStaticMeshComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVoxelInstancedMeshSubsystemProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelInstancedMeshSubsystemProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class VoxelFoliage.VoxelInstancedMeshSubsystemProxy"));
		return ptr;
	}

}


