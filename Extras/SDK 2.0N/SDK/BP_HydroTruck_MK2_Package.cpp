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
	 * 		Name   -> Function BP_HydroTruck_MK2.BP_HydroTruck_MK2_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_MK2_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HydroTruck_MK2.BP_HydroTruck_MK2_C.UserConstructionScript"));
		
		ABP_HydroTruck_MK2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck_MK2.BP_HydroTruck_MK2_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_HydroTruck_MK2_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HydroTruck_MK2.BP_HydroTruck_MK2_C.ActorLoaded"));
		
		ABP_HydroTruck_MK2_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroTruck_MK2.BP_HydroTruck_MK2_C.ExecuteUbergraph_BP_HydroTruck_MK2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroTruck_MK2_C::ExecuteUbergraph_BP_HydroTruck_MK2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_HydroTruck_MK2.BP_HydroTruck_MK2_C.ExecuteUbergraph_BP_HydroTruck_MK2"));
		
		ABP_HydroTruck_MK2_C_ExecuteUbergraph_BP_HydroTruck_MK2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_HydroTruck_MK2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HydroTruck_MK2_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_HydroTruck_MK2.BP_HydroTruck_MK2_C"));
		return ptr;
	}

}


