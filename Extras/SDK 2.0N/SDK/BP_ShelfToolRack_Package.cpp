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
	 * 		Name   -> Function BP_ShelfToolRack.BP_ShelfToolRack_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ShelfToolRack_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShelfToolRack.BP_ShelfToolRack_C.UserConstructionScript"));
		
		ABP_ShelfToolRack_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShelfToolRack.BP_ShelfToolRack_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ShelfToolRack_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShelfToolRack.BP_ShelfToolRack_C.ActorLoaded"));
		
		ABP_ShelfToolRack_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShelfToolRack.BP_ShelfToolRack_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShelfToolRack_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShelfToolRack.BP_ShelfToolRack_C.ReceiveTick"));
		
		ABP_ShelfToolRack_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShelfToolRack.BP_ShelfToolRack_C.ExecuteUbergraph_BP_ShelfToolRack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShelfToolRack_C::ExecuteUbergraph_BP_ShelfToolRack(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShelfToolRack.BP_ShelfToolRack_C.ExecuteUbergraph_BP_ShelfToolRack"));
		
		ABP_ShelfToolRack_C_ExecuteUbergraph_BP_ShelfToolRack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ShelfToolRack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ShelfToolRack_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ShelfToolRack.BP_ShelfToolRack_C"));
		return ptr;
	}

}


