﻿/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFoliageInstancedStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageInstancedStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMesh*                                 StaticMesh                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CenterPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UStaticMesh*                                 StaticMesh;
			struct FVector                                     CenterPosition;
			float                                              Radius;
			int32_t                                            ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.StaticMesh = StaticMesh;
		params.CenterPosition = CenterPosition;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMesh*                                 StaticMesh                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBox                                        Box                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UStaticMesh*                                 StaticMesh;
			struct FBox                                        Box;
			int32_t                                            ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.StaticMesh = StaticMesh;
		params.Box = Box;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFoliageStatistics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageStatistics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFoliageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFoliageType_Actor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageType_Actor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFoliageType_InstancedStaticMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoliageType_InstancedStaticMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AInstancedFoliageActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInstancedFoliageActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function Foliage.InteractiveFoliageActor.CapsuleTouched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OverlapInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");
		
		struct
		{
			class UPrimitiveComponent*                         OverlappedComp;
			class AActor*                                      Other;
			class UPrimitiveComponent*                         OtherComp;
			int32_t                                            OtherBodyIndex;
			bool                                               bFromSweep;
			struct FHitResult                                  OverlapInfo;
		} params;
		params.OverlappedComp = OverlappedComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.OverlapInfo = OverlapInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AInteractiveFoliageActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInteractiveFoliageActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractiveFoliageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveFoliageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AProceduralFoliageBlockingVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProceduralFoliageBlockingVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralFoliageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralFoliageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function Foliage.ProceduralFoliageSpawner.Simulate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumSteps                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProceduralFoliageSpawner::Simulate(int32_t NumSteps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");
		
		struct
		{
			int32_t                                            NumSteps;
		} params;
		params.NumSteps = NumSteps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralFoliageSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralFoliageSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UProceduralFoliageTile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralFoliageTile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AProceduralFoliageVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProceduralFoliageVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

}


