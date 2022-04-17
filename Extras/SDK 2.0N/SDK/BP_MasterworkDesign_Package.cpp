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
	 * 		Name   -> Function BP_MasterworkDesign.BP_MasterworkDesign_C.InitDesign
	 * 		Flags  -> ()
	 */
	void ABP_MasterworkDesign_C::InitDesign()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterworkDesign.BP_MasterworkDesign_C.InitDesign"));
		
		ABP_MasterworkDesign_C_InitDesign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MasterworkDesign.BP_MasterworkDesign_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MasterworkDesign_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterworkDesign.BP_MasterworkDesign_C.UserConstructionScript"));
		
		ABP_MasterworkDesign_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MasterworkDesign.BP_MasterworkDesign_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_MasterworkDesign_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterworkDesign.BP_MasterworkDesign_C.ActorLoaded"));
		
		ABP_MasterworkDesign_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MasterworkDesign.BP_MasterworkDesign_C.ExecuteUbergraph_BP_MasterworkDesign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MasterworkDesign_C::ExecuteUbergraph_BP_MasterworkDesign(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_MasterworkDesign.BP_MasterworkDesign_C.ExecuteUbergraph_BP_MasterworkDesign"));
		
		ABP_MasterworkDesign_C_ExecuteUbergraph_BP_MasterworkDesign_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_MasterworkDesign_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MasterworkDesign_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MasterworkDesign.BP_MasterworkDesign_C"));
		return ptr;
	}

}


