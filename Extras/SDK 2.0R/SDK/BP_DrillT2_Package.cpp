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
	 * 		Name   -> Function BP_DrillT2.BP_DrillT2_C.OverrideDrillStart
	 * 		Flags  -> ()
	 */
	void ABP_DrillT2_C::OverrideDrillStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrillT2.BP_DrillT2_C.OverrideDrillStart");
		
		ABP_DrillT2_C_OverrideDrillStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrillT2.BP_DrillT2_C.OverrideDrillStop
	 * 		Flags  -> ()
	 */
	void ABP_DrillT2_C::OverrideDrillStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrillT2.BP_DrillT2_C.OverrideDrillStop");
		
		ABP_DrillT2_C_OverrideDrillStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrillT2.BP_DrillT2_C.AnimTimer
	 * 		Flags  -> ()
	 */
	void ABP_DrillT2_C::AnimTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrillT2.BP_DrillT2_C.AnimTimer");
		
		ABP_DrillT2_C_AnimTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DrillT2.BP_DrillT2_C.ExecuteUbergraph_BP_DrillT2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrillT2_C::ExecuteUbergraph_BP_DrillT2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrillT2.BP_DrillT2_C.ExecuteUbergraph_BP_DrillT2");
		
		ABP_DrillT2_C_ExecuteUbergraph_BP_DrillT2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_DrillT2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DrillT2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DrillT2.BP_DrillT2_C");
		return ptr;
	}

}


