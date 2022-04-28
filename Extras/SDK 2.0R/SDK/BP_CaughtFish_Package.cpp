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
	 * 		Name   -> Function BP_CaughtFish.BP_CaughtFish_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_CaughtFish_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaughtFish.BP_CaughtFish_C.UserConstructionScript");
		
		ABP_CaughtFish_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaughtFish.BP_CaughtFish_C.InFire
	 * 		Flags  -> ()
	 */
	void ABP_CaughtFish_C::InFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaughtFish.BP_CaughtFish_C.InFire");
		
		ABP_CaughtFish_C_InFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaughtFish.BP_CaughtFish_C.OutOfFire
	 * 		Flags  -> ()
	 */
	void ABP_CaughtFish_C::OutOfFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaughtFish.BP_CaughtFish_C.OutOfFire");
		
		ABP_CaughtFish_C_OutOfFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaughtFish.BP_CaughtFish_C.FullHeat
	 * 		Flags  -> ()
	 */
	void ABP_CaughtFish_C::FullHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaughtFish.BP_CaughtFish_C.FullHeat");
		
		ABP_CaughtFish_C_FullHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaughtFish.BP_CaughtFish_C.HeatUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Heat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaughtFish_C::HeatUpdated(float Heat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaughtFish.BP_CaughtFish_C.HeatUpdated");
		
		ABP_CaughtFish_C_HeatUpdated_Params params {};
		params.Heat = Heat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaughtFish.BP_CaughtFish_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_CaughtFish_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaughtFish.BP_CaughtFish_C.ActorLoaded");
		
		ABP_CaughtFish_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaughtFish.BP_CaughtFish_C.LoadFishType
	 * 		Flags  -> ()
	 */
	void ABP_CaughtFish_C::LoadFishType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaughtFish.BP_CaughtFish_C.LoadFishType");
		
		ABP_CaughtFish_C_LoadFishType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaughtFish.BP_CaughtFish_C.ExecuteUbergraph_BP_CaughtFish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaughtFish_C::ExecuteUbergraph_BP_CaughtFish(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaughtFish.BP_CaughtFish_C.ExecuteUbergraph_BP_CaughtFish");
		
		ABP_CaughtFish_C_ExecuteUbergraph_BP_CaughtFish_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_CaughtFish_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CaughtFish_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CaughtFish.BP_CaughtFish_C");
		return ptr;
	}

}


