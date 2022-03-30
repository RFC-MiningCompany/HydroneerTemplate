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
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.UpdateText
	 * 		Flags  -> ()
	 */
	void ABP_LogicKeypad_C::UpdateText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicKeypad.BP_LogicKeypad_C.UpdateText"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.OverrideLoaded
	 * 		Flags  -> ()
	 */
	void ABP_LogicKeypad_C::OverrideLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicKeypad.BP_LogicKeypad_C.OverrideLoaded"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.CustomEvent
	 * 		Flags  -> ()
	 */
	void ABP_LogicKeypad_C::CustomEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicKeypad.BP_LogicKeypad_C.CustomEvent"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.LMBDownIsTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            CarryingItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Insigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicKeypad_C::LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicKeypad.BP_LogicKeypad_C.LMBDownIsTarget"));
		
		struct
		{
			class UPrimitiveComponent*                         Component;
			class ABP_ParentItem_C*                            CarryingItem;
			class ABP_GameController_C*                        Insigator;
		} params;
		params.Component = Component;
		params.CarryingItem = CarryingItem;
		params.Insigator = Insigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BP_LogicKeypad.BP_LogicKeypad_C.ExecuteUbergraph_BP_LogicKeypad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicKeypad_C::ExecuteUbergraph_BP_LogicKeypad(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicKeypad.BP_LogicKeypad_C.ExecuteUbergraph_BP_LogicKeypad"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LogicKeypad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicKeypad_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_LogicKeypad.BP_LogicKeypad_C"));
		return ptr;
	}

}


