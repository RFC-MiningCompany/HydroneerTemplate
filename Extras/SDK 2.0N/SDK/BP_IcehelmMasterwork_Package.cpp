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
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_IcehelmMasterwork_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ComponentsToSave"));
		
		ABP_IcehelmMasterwork_C_ComponentsToSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.SpitOutBars
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmMasterwork_C::SpitOutBars()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.SpitOutBars"));
		
		ABP_IcehelmMasterwork_C_SpitOutBars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.Add to Contents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FS_ResourceEnumAndWeight                    Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IcehelmMasterwork_C::Add_to_Contents(const struct FS_ResourceEnumAndWeight& Resource)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.Add to Contents"));
		
		ABP_IcehelmMasterwork_C_Add_to_Contents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.IsClassInOurRequirements?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Resource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRequired_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_MetalType                                        Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IcehelmMasterwork_C::IsClassInOurRequirements_(class UClass* Resource, bool* IsRequired_, E_MetalType* Type)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.IsClassInOurRequirements?"));
		
		ABP_IcehelmMasterwork_C_IsClassInOurRequirements__Params params {};
		params.Resource = Resource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRequired_ != nullptr)
			*IsRequired_ = params.IsRequired_;
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.FindWeightNeededOfSpecific
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MetalType                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Weight                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IcehelmMasterwork_C::FindWeightNeededOfSpecific(E_MetalType Type, float* Weight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.FindWeightNeededOfSpecific"));
		
		ABP_IcehelmMasterwork_C_FindWeightNeededOfSpecific_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weight != nullptr)
			*Weight = params.Weight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.SpawnAdditionalBars
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmMasterwork_C::SpawnAdditionalBars()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.SpawnAdditionalBars"));
		
		ABP_IcehelmMasterwork_C_SpawnAdditionalBars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.Has All Required Contents?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAllRequirements_                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_IcehelmMasterwork_C::Has_All_Required_Contents_(bool* HasAllRequirements_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.Has All Required Contents?"));
		
		ABP_IcehelmMasterwork_C_Has_All_Required_Contents__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasAllRequirements_ != nullptr)
			*HasAllRequirements_ = params.HasAllRequirements_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.PlayAnimationAndSounds
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmMasterwork_C::PlayAnimationAndSounds()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.PlayAnimationAndSounds"));
		
		ABP_IcehelmMasterwork_C_PlayAnimationAndSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.OverrideMouseClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IcehelmMasterwork_C::OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.OverrideMouseClicked"));
		
		ABP_IcehelmMasterwork_C_OverrideMouseClicked_Params params {};
		params.Component = Component;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.SpawnItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IcehelmMasterwork_C::SpawnItem(class UClass* Class)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.SpawnItem"));
		
		ABP_IcehelmMasterwork_C_SpawnItem_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ResetAll
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmMasterwork_C::ResetAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ResetAll"));
		
		ABP_IcehelmMasterwork_C_ResetAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.BndEvt__BP_IcehelmMasterwork_CrucibleCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_IcehelmMasterwork_C::BndEvt__BP_IcehelmMasterwork_CrucibleCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.BndEvt__BP_IcehelmMasterwork_CrucibleCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));
		
		ABP_IcehelmMasterwork_C_BndEvt__BP_IcehelmMasterwork_CrucibleCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IcehelmMasterwork_C::BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
		
		ABP_IcehelmMasterwork_C_BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_IcehelmMasterwork_C::BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
		
		ABP_IcehelmMasterwork_C_BndEvt__BP_IcehelmMasterwork_MouldBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmMasterwork_C::ActorSaved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ActorSaved"));
		
		ABP_IcehelmMasterwork_C_ActorSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmMasterwork_C::ActorPreSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ActorPreSave"));
		
		ABP_IcehelmMasterwork_C_ActorPreSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmMasterwork_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ActorLoaded"));
		
		ABP_IcehelmMasterwork_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.PlayEmptyAnimAndSounds
	 * 		Flags  -> ()
	 */
	void ABP_IcehelmMasterwork_C::PlayEmptyAnimAndSounds()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.PlayEmptyAnimAndSounds"));
		
		ABP_IcehelmMasterwork_C_PlayEmptyAnimAndSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ExecuteUbergraph_BP_IcehelmMasterwork
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IcehelmMasterwork_C::ExecuteUbergraph_BP_IcehelmMasterwork(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_IcehelmMasterwork.BP_IcehelmMasterwork_C.ExecuteUbergraph_BP_IcehelmMasterwork"));
		
		ABP_IcehelmMasterwork_C_ExecuteUbergraph_BP_IcehelmMasterwork_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_IcehelmMasterwork_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_IcehelmMasterwork_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_IcehelmMasterwork.BP_IcehelmMasterwork_C"));
		return ptr;
	}

}


