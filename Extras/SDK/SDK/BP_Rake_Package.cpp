/**
 * Name: Hydroneer
 * Version: 2.0.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.TestDepthLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanModify                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Rake_C::TestDepthLocation(const struct FVector& Location, bool* CanModify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.TestDepthLocation");
		
		struct
		{
			struct FVector                                     Location;
			bool                                               CanModify;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanModify != nullptr)
			*CanModify = params.CanModify;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.TestAreaDensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Rake_C::TestAreaDensity(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.TestAreaDensity");
		
		struct
		{
			class USceneComponent*                             Component;
		} params;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.GetPlayerCameraInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ForwardVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BuildingLength                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Rake_C::GetPlayerCameraInfo(struct FVector* Location, struct FVector* ForwardVector, float* BuildingLength, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.GetPlayerCameraInfo");
		
		struct
		{
			struct FVector                                     Location;
			struct FVector                                     ForwardVector;
			float                                              BuildingLength;
			struct FRotator                                    Rotation;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (ForwardVector != nullptr)
			*ForwardVector = params.ForwardVector;
		if (BuildingLength != nullptr)
			*BuildingLength = params.BuildingLength;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.TryFindVoxelWorldHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class ABP_HydroVoxelWorld_C*                       VoxelWorld                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::TryFindVoxelWorldHit(TArray<struct FHitResult>* Hits, struct FHitResult* Hit, class ABP_HydroVoxelWorld_C** VoxelWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.TryFindVoxelWorldHit");
		
		struct
		{
			TArray<struct FHitResult>                          Hits;
			struct FHitResult                                  Hit;
			class ABP_HydroVoxelWorld_C*                       VoxelWorld;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hits != nullptr)
			*Hits = params.Hits;
		if (Hit != nullptr)
			*Hit = params.Hit;
		if (VoxelWorld != nullptr)
			*VoxelWorld = params.VoxelWorld;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.GetBoxBoundsInVoxel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AVoxelWorld*                                 VoxelWorld                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Bounds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVoxelIntBox ABP_Rake_C::GetBoxBoundsInVoxel(class AVoxelWorld* VoxelWorld, float Offset, float Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.GetBoxBoundsInVoxel");
		
		struct
		{
			class AVoxelWorld*                                 VoxelWorld;
			float                                              Offset;
			float                                              Bounds;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.Offset = Offset;
		params.Bounds = Bounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.NormalToClampedRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Inrement                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  T                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ABP_Rake_C::NormalToClampedRotation(const struct FVector& Normal, float Inrement, const struct FTransform& T)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.NormalToClampedRotation");
		
		struct
		{
			struct FVector                                     Normal;
			float                                              Inrement;
			struct FTransform                                  T;
		} params;
		params.Normal = Normal;
		params.Inrement = Inrement;
		params.T = T;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.FlattenVoxels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_HydroVoxelWorld_C*                       VoxelWorld                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		EVoxelSDFMergeMode                                 MergeMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::FlattenVoxels(class ABP_HydroVoxelWorld_C* VoxelWorld, EVoxelSDFMergeMode MergeMode, float Radius, int32_t Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.FlattenVoxels");
		
		struct
		{
			class ABP_HydroVoxelWorld_C*                       VoxelWorld;
			EVoxelSDFMergeMode                                 MergeMode;
			float                                              Radius;
			int32_t                                            Strength;
		} params;
		params.VoxelWorld = VoxelWorld;
		params.MergeMode = MergeMode;
		params.Radius = Radius;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.Rake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::Rake(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.Rake");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.LMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConsumeInput_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Rake_C::LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.LMBDownWhileCarrying");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
			class AActor*                                      HitActor;
			struct FVector                                     HitLocation;
			bool                                               ConsumeInput_;
		} params;
		params.Controller = Controller;
		params.HitActor = HitActor;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConsumeInput_ != nullptr)
			*ConsumeInput_ = params.ConsumeInput_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.TestUsability
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::TestUsability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.TestUsability");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.Box Tracing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Rake_C::Box_Tracing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.Box Tracing");
		
		struct
		{
			bool                                               Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.UserConstructionScript");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.OverridePickedup");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.OverrideDroppedItem");
		
		struct
		{
			class ABP_GameCharacter_C*                         Character;
		} params;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.LocationTimer
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::LocationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.LocationTimer");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.OverrideAnimFinished
	 * 		Flags  -> ()
	 */
	void ABP_Rake_C::OverrideAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.OverrideAnimFinished");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.RMBDownWhileCarrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit_Actor, const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.RMBDownWhileCarrying");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
			class AActor*                                      Hit_Actor;
			struct FVector                                     HitLocation;
		} params;
		params.Controller = Controller;
		params.Hit_Actor = Hit_Actor;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Rake.BP_Rake_C.ExecuteUbergraph_BP_Rake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Rake_C::ExecuteUbergraph_BP_Rake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Rake.BP_Rake_C.ExecuteUbergraph_BP_Rake");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Rake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Rake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Rake.BP_Rake_C");
		return ptr;
	}

}


