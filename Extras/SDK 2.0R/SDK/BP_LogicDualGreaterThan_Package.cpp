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
	 * 		Name   -> Function BP_LogicDualGreaterThan.BP_LogicDualGreaterThan_C.OverrideLogicIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDualGreaterThan_C::OverrideLogicIn(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDualGreaterThan.BP_LogicDualGreaterThan_C.OverrideLogicIn");
		
		ABP_LogicDualGreaterThan_C_OverrideLogicIn_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicDualGreaterThan.BP_LogicDualGreaterThan_C.ExecuteUbergraph_BP_LogicDualGreaterThan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicDualGreaterThan_C::ExecuteUbergraph_BP_LogicDualGreaterThan(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicDualGreaterThan.BP_LogicDualGreaterThan_C.ExecuteUbergraph_BP_LogicDualGreaterThan");
		
		ABP_LogicDualGreaterThan_C_ExecuteUbergraph_BP_LogicDualGreaterThan_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LogicDualGreaterThan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicDualGreaterThan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicDualGreaterThan.BP_LogicDualGreaterThan_C");
		return ptr;
	}

}


