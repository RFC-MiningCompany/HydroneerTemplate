/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_RodTrader_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.ComponentsToSave"));
		
		ABP_RodTrader_C_ComponentsToSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.ChangeMeshes
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::ChangeMeshes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.ChangeMeshes"));
		
		ABP_RodTrader_C_ChangeMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.ChangeTargetFish
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::ChangeTargetFish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.ChangeTargetFish"));
		
		ABP_RodTrader_C_ChangeTargetFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.DoWeHaveFish?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HaveFish_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RodTrader_C::DoWeHaveFish_(bool* HaveFish_, int32_t* ArrayIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.DoWeHaveFish?"));
		
		ABP_RodTrader_C_DoWeHaveFish__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HaveFish_ != nullptr)
			*HaveFish_ = params.HaveFish_;
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.Timeline_0__FinishedFunc"));
		
		ABP_RodTrader_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.Timeline_0__UpdateFunc"));
		
		ABP_RodTrader_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.OverrideMouseClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RodTrader_C::OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.OverrideMouseClicked"));
		
		ABP_RodTrader_C_OverrideMouseClicked_Params params {};
		params.Component = Component;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_RodTrader_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));
		
		ABP_RodTrader_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RodTrader_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));
		
		ABP_RodTrader_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.ButtonSound
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::ButtonSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.ButtonSound"));
		
		ABP_RodTrader_C_ButtonSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::ActorSaved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.ActorSaved"));
		
		ABP_RodTrader_C_ActorSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.ReleaseTheRod
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::ReleaseTheRod()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.ReleaseTheRod"));
		
		ABP_RodTrader_C_ReleaseTheRod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.SpawnRod
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::SpawnRod()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.SpawnRod"));
		
		ABP_RodTrader_C_SpawnRod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::ActorPreSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.ActorPreSave"));
		
		ABP_RodTrader_C_ActorPreSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.Animate
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::Animate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.Animate"));
		
		ABP_RodTrader_C_Animate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_RodTrader_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.ActorLoaded"));
		
		ABP_RodTrader_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RodTrader.BP_RodTrader_C.ExecuteUbergraph_BP_RodTrader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RodTrader_C::ExecuteUbergraph_BP_RodTrader(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RodTrader.BP_RodTrader_C.ExecuteUbergraph_BP_RodTrader"));
		
		ABP_RodTrader_C_ExecuteUbergraph_BP_RodTrader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_RodTrader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RodTrader_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_RodTrader.BP_RodTrader_C"));
		return ptr;
	}

}


