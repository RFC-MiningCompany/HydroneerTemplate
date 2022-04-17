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
	 * 		Name   -> Function BP_StandingTorch.BP_StandingTorch_C.SetProxyCollisionVisibility
	 * 		Flags  -> ()
	 */
	void ABP_StandingTorch_C::SetProxyCollisionVisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StandingTorch.BP_StandingTorch_C.SetProxyCollisionVisibility"));
		
		ABP_StandingTorch_C_SetProxyCollisionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StandingTorch.BP_StandingTorch_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_StandingTorch_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StandingTorch.BP_StandingTorch_C.ReceiveBeginPlay"));
		
		ABP_StandingTorch_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StandingTorch.BP_StandingTorch_C.OverrideLightOn
	 * 		Flags  -> ()
	 */
	void ABP_StandingTorch_C::OverrideLightOn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StandingTorch.BP_StandingTorch_C.OverrideLightOn"));
		
		ABP_StandingTorch_C_OverrideLightOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StandingTorch.BP_StandingTorch_C.OverrideLightOff
	 * 		Flags  -> ()
	 */
	void ABP_StandingTorch_C::OverrideLightOff()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StandingTorch.BP_StandingTorch_C.OverrideLightOff"));
		
		ABP_StandingTorch_C_OverrideLightOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StandingTorch.BP_StandingTorch_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_StandingTorch_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StandingTorch.BP_StandingTorch_C.ActorLoaded"));
		
		ABP_StandingTorch_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StandingTorch.BP_StandingTorch_C.ExecuteUbergraph_BP_StandingTorch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StandingTorch_C::ExecuteUbergraph_BP_StandingTorch(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_StandingTorch.BP_StandingTorch_C.ExecuteUbergraph_BP_StandingTorch"));
		
		ABP_StandingTorch_C_ExecuteUbergraph_BP_StandingTorch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_StandingTorch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StandingTorch_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_StandingTorch.BP_StandingTorch_C"));
		return ptr;
	}

}


