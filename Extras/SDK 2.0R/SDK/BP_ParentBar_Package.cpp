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
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentBar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.UserConstructionScript");
		
		ABP_ParentBar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.HeatUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Heat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBar_C::HeatUpdated(float Heat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.HeatUpdated");
		
		ABP_ParentBar_C_HeatUpdated_Params params {};
		params.Heat = Heat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.InFire
	 * 		Flags  -> ()
	 */
	void ABP_ParentBar_C::InFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.InFire");
		
		ABP_ParentBar_C_InFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.OutOfFire
	 * 		Flags  -> ()
	 */
	void ABP_ParentBar_C::OutOfFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.OutOfFire");
		
		ABP_ParentBar_C_OutOfFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.FullHeat
	 * 		Flags  -> ()
	 */
	void ABP_ParentBar_C::FullHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.FullHeat");
		
		ABP_ParentBar_C_FullHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.InWater
	 * 		Flags  -> ()
	 */
	void ABP_ParentBar_C::InWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.InWater");
		
		ABP_ParentBar_C_InWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void ABP_ParentBar_C::WaterParticleHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.WaterParticleHit");
		
		ABP_ParentBar_C_WaterParticleHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.SetCraftedSize
	 * 		Flags  -> ()
	 */
	void ABP_ParentBar_C::SetCraftedSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.SetCraftedSize");
		
		ABP_ParentBar_C_SetCraftedSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.SetResourceSize
	 * 		Flags  -> ()
	 */
	void ABP_ParentBar_C::SetResourceSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.SetResourceSize");
		
		ABP_ParentBar_C_SetResourceSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBar.BP_ParentBar_C.ExecuteUbergraph_BP_ParentBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBar_C::ExecuteUbergraph_BP_ParentBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBar.BP_ParentBar_C.ExecuteUbergraph_BP_ParentBar");
		
		ABP_ParentBar_C_ExecuteUbergraph_BP_ParentBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentBar.BP_ParentBar_C");
		return ptr;
	}

}


