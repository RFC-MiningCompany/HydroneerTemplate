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
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_DayNightCycle_C::ComponentsToSave(TArray<class UActorComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ComponentsToSave");
		
		ABP_DayNightCycle_C_ComponentsToSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayModePostLoad
	 * 		Flags  -> ()
	 */
	void ABP_DayNightCycle_C::SetDayModePostLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayModePostLoad");
		
		ABP_DayNightCycle_C_SetDayModePostLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayMode
	 * 		Flags  -> ()
	 */
	void ABP_DayNightCycle_C::SetDayMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayMode");
		
		ABP_DayNightCycle_C_SetDayMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_DayNightCycle_C::ActorSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ActorSaved");
		
		ABP_DayNightCycle_C_ActorSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DayNightCycle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ReceiveBeginPlay");
		
		ABP_DayNightCycle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_DayNightCycle_C::ActorPreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ActorPreSave");
		
		ABP_DayNightCycle_C_ActorPreSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SpeedUpToSunrise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentBed_C*                             Bed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DayNightCycle_C::SpeedUpToSunrise(class ABP_ParentBed_C* Bed, class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SpeedUpToSunrise");
		
		ABP_DayNightCycle_C_SpeedUpToSunrise_Params params {};
		params.Bed = Bed;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SunRiseTimerCheck
	 * 		Flags  -> ()
	 */
	void ABP_DayNightCycle_C::SunRiseTimerCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SunRiseTimerCheck");
		
		ABP_DayNightCycle_C_SunRiseTimerCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.SetNewRate
	 * 		Flags  -> ()
	 */
	void ABP_DayNightCycle_C::SetNewRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SetNewRate");
		
		ABP_DayNightCycle_C_SetNewRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.Update
	 * 		Flags  -> ()
	 */
	void ABP_DayNightCycle_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.Update");
		
		ABP_DayNightCycle_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_DayNightCycle_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ActorLoaded");
		
		ABP_DayNightCycle_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DayNightCycle.BP_DayNightCycle_C.ExecuteUbergraph_BP_DayNightCycle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DayNightCycle_C::ExecuteUbergraph_BP_DayNightCycle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ExecuteUbergraph_BP_DayNightCycle");
		
		ABP_DayNightCycle_C_ExecuteUbergraph_BP_DayNightCycle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_DayNightCycle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DayNightCycle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DayNightCycle.BP_DayNightCycle_C");
		return ptr;
	}

}


