/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MiningHelmet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.UserConstructionScript");
		
		ABP_MiningHelmet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_MiningHelmet_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.Timeline_0__FinishedFunc");
		
		ABP_MiningHelmet_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_MiningHelmet_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.Timeline_0__UpdateFunc");
		
		ABP_MiningHelmet_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void ABP_MiningHelmet_C::WaterParticleHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.WaterParticleHit");
		
		ABP_MiningHelmet_C_WaterParticleHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideHatOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiningHelmet_C::OverrideHatOn(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideHatOn");
		
		ABP_MiningHelmet_C_OverrideHatOn_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideHatOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiningHelmet_C::OverrideHatOff(class ABP_GameCharacter_C* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.OverrideHatOff");
		
		ABP_MiningHelmet_C_OverrideHatOff_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.InWater
	 * 		Flags  -> ()
	 */
	void ABP_MiningHelmet_C::InWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.InWater");
		
		ABP_MiningHelmet_C_InWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MiningHelmet.BP_MiningHelmet_C.ExecuteUbergraph_BP_MiningHelmet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MiningHelmet_C::ExecuteUbergraph_BP_MiningHelmet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MiningHelmet.BP_MiningHelmet_C.ExecuteUbergraph_BP_MiningHelmet");
		
		ABP_MiningHelmet_C_ExecuteUbergraph_BP_MiningHelmet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_MiningHelmet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MiningHelmet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiningHelmet.BP_MiningHelmet_C");
		return ptr;
	}

}


