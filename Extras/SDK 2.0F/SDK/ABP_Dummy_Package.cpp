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
	 * 		Name   -> Function ABP_Dummy.ABP_Dummy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Dummy_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Dummy.ABP_Dummy_C.AnimGraph"));
		
		struct
		{
			struct FPoseLink                                   AnimGraph;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function ABP_Dummy.ABP_Dummy_C.ExecuteUbergraph_ABP_Dummy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Dummy_C::ExecuteUbergraph_ABP_Dummy(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Dummy.ABP_Dummy_C.ExecuteUbergraph_ABP_Dummy"));
		
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
	 * 		Name   -> PredefindFunction UABP_Dummy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Dummy_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass ABP_Dummy.ABP_Dummy_C"));
		return ptr;
	}

}


