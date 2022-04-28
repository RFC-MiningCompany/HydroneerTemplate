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
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.UpdateText
	 * 		Flags  -> ()
	 */
	void ABP_LogicKeypad_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicKeypad.BP_LogicKeypad_C.UpdateText");
		
		ABP_LogicKeypad_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_LogicKeypad_C::OverrideLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicKeypad.BP_LogicKeypad_C.OverrideLoaded");
		
		ABP_LogicKeypad_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.CustomEvent
	 * 		Flags  -> ()
	 */
	void ABP_LogicKeypad_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicKeypad.BP_LogicKeypad_C.CustomEvent");
		
		ABP_LogicKeypad_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.LMBDownIsTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            CarryingItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Insigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicKeypad_C::LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicKeypad.BP_LogicKeypad_C.LMBDownIsTarget");
		
		ABP_LogicKeypad_C_LMBDownIsTarget_Params params {};
		params.Component = Component;
		params.CarryingItem = CarryingItem;
		params.Insigator = Insigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.ExecuteUbergraph_BP_LogicKeypad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicKeypad_C::ExecuteUbergraph_BP_LogicKeypad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicKeypad.BP_LogicKeypad_C.ExecuteUbergraph_BP_LogicKeypad");
		
		ABP_LogicKeypad_C_ExecuteUbergraph_BP_LogicKeypad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LogicKeypad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicKeypad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicKeypad.BP_LogicKeypad_C");
		return ptr;
	}

}


