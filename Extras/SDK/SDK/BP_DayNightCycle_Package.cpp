/**
 * Name: Hydroneer
 * Version: 2.0
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayModePostLoad");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayMode");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ActorSaved");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ReceiveBeginPlay");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ActorPreSave");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SpeedUpToSunrise");
		
		struct
		{
			class ABP_ParentBed_C*                             Bed;
			class ABP_GameController_C*                        Controller;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SunRiseTimerCheck");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.SetNewRate");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.Update");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ActorLoaded");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DayNightCycle.BP_DayNightCycle_C.ExecuteUbergraph_BP_DayNightCycle");
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_DayNightCycle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DayNightCycle_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DayNightCycle.BP_DayNightCycle_C");
		return ptr;
	}

}


