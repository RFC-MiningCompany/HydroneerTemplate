/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverridePlacedDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicWeightReader_C::OverridePlacedDown(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverridePlacedDown");
		
		ABP_LogicWeightReader_C_OverridePlacedDown_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_LogicWeightReader_C::OverrideLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideLoaded");
		
		ABP_LogicWeightReader_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideStartPlacing
	 * 		Flags  -> ()
	 */
	void ABP_LogicWeightReader_C::OverrideStartPlacing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideStartPlacing");
		
		ABP_LogicWeightReader_C_OverrideStartPlacing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideDroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicWeightReader_C::OverrideDroppedItem(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideDroppedItem");
		
		ABP_LogicWeightReader_C_OverrideDroppedItem_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_LogicWeightReader_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverridePickedup");
		
		ABP_LogicWeightReader_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicWeightReader.BP_LogicWeightReader_C.BndEvt__BP_LogicWeightReader_WeightDetectBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_LogicWeightReader_C::BndEvt__BP_LogicWeightReader_WeightDetectBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicWeightReader.BP_LogicWeightReader_C.BndEvt__BP_LogicWeightReader_WeightDetectBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_LogicWeightReader_C_BndEvt__BP_LogicWeightReader_WeightDetectBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideLogicIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicWeightReader_C::OverrideLogicIn(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideLogicIn");
		
		ABP_LogicWeightReader_C_OverrideLogicIn_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicWeightReader.BP_LogicWeightReader_C.ExecuteUbergraph_BP_LogicWeightReader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicWeightReader_C::ExecuteUbergraph_BP_LogicWeightReader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicWeightReader.BP_LogicWeightReader_C.ExecuteUbergraph_BP_LogicWeightReader");
		
		ABP_LogicWeightReader_C_ExecuteUbergraph_BP_LogicWeightReader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LogicWeightReader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicWeightReader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicWeightReader.BP_LogicWeightReader_C");
		return ptr;
	}

}


