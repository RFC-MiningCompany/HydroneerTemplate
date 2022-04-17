﻿/**
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
	 * 		Name   -> Function BP_LogicDualEquals.BP_LogicDualEquals_C.OverrideLogicIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDualEquals_C::OverrideLogicIn(class USceneComponent* Component)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDualEquals.BP_LogicDualEquals_C.OverrideLogicIn"));
		
		ABP_LogicDualEquals_C_OverrideLogicIn_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDualEquals.BP_LogicDualEquals_C.ExecuteUbergraph_BP_LogicDualEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDualEquals_C::ExecuteUbergraph_BP_LogicDualEquals(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LogicDualEquals.BP_LogicDualEquals_C.ExecuteUbergraph_BP_LogicDualEquals"));
		
		ABP_LogicDualEquals_C_ExecuteUbergraph_BP_LogicDualEquals_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LogicDualEquals_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicDualEquals_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_LogicDualEquals.BP_LogicDualEquals_C"));
		return ptr;
	}

}


