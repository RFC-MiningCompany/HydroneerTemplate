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
	 * 		Name   -> Function BP_ParentPlant.BP_ParentPlant_C.SkyTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Clear_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentPlant_C::SkyTest(bool* Clear_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPlant.BP_ParentPlant_C.SkyTest"));
		
		ABP_ParentPlant_C_SkyTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Clear_ != nullptr)
			*Clear_ = params.Clear_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPlant.BP_ParentPlant_C.DigPlant
	 * 		Flags  -> ()
	 */
	void ABP_ParentPlant_C::DigPlant()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPlant.BP_ParentPlant_C.DigPlant"));
		
		ABP_ParentPlant_C_DigPlant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPlant.BP_ParentPlant_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ParentPlant_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPlant.BP_ParentPlant_C.ReceiveBeginPlay"));
		
		ABP_ParentPlant_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPlant.BP_ParentPlant_C.GrowLoop
	 * 		Flags  -> ()
	 */
	void ABP_ParentPlant_C::GrowLoop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPlant.BP_ParentPlant_C.GrowLoop"));
		
		ABP_ParentPlant_C_GrowLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPlant.BP_ParentPlant_C.PostLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentPlant_C::PostLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPlant.BP_ParentPlant_C.PostLoaded"));
		
		ABP_ParentPlant_C_PostLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentPlant.BP_ParentPlant_C.ExecuteUbergraph_BP_ParentPlant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentPlant_C::ExecuteUbergraph_BP_ParentPlant(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentPlant.BP_ParentPlant_C.ExecuteUbergraph_BP_ParentPlant"));
		
		ABP_ParentPlant_C_ExecuteUbergraph_BP_ParentPlant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentPlant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentPlant_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ParentPlant.BP_ParentPlant_C"));
		return ptr;
	}

}


