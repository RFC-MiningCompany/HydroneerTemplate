/**
 * Name: Hydroneer
<<<<<<<< HEAD:Extras/SDK/SDK/BP_HookPressureGauge_Package.cpp
 * Version: 2.0.2
========
 * Version: 2.0.6
>>>>>>>> origin/development:Extras/SDK/SDK/BP_LogicHookDisplay_Package.cpp
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
	 * 		Name   -> Function BP_LogicHookDisplay.BP_LogicHookDisplay_C.TraceForParents
	 * 		Flags  -> ()
	 */
	void ABP_LogicHookDisplay_C::TraceForParents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LogicHookDisplay.BP_LogicHookDisplay_C.TraceForParents");
		
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
	 * 		Name   -> Function BP_LogicHookDisplay.BP_LogicHookDisplay_C.HookFunctionality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            HookedTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanPass_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicHookDisplay_C::HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_HookPressureGauge_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_HookPressureGauge.BP_HookPressureGauge_C.HookFunctionality");
========
			fn = UObject::FindObject<UFunction>("Function BP_LogicHookDisplay.BP_LogicHookDisplay_C.HookFunctionality");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_LogicHookDisplay_Package.cpp
		
		struct
		{
			class ABP_ParentItem_C*                            HookedTo;
			class USceneComponent*                             Component;
			bool                                               CanPass_;
		} params;
		params.HookedTo = HookedTo;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPass_ != nullptr)
			*CanPass_ = params.CanPass_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicHookDisplay.BP_LogicHookDisplay_C.OverridePickedup
	 * 		Flags  -> ()
	 */
	void ABP_LogicHookDisplay_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_HookPressureGauge_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_HookPressureGauge.BP_HookPressureGauge_C.ReceiveTick");
========
			fn = UObject::FindObject<UFunction>("Function BP_LogicHookDisplay.BP_LogicHookDisplay_C.OverridePickedup");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_LogicHookDisplay_Package.cpp
		
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
	 * 		Name   -> Function BP_LogicHookDisplay.BP_LogicHookDisplay_C.ExecuteUbergraph_BP_LogicHookDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicHookDisplay_C::ExecuteUbergraph_BP_LogicHookDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_HookPressureGauge_Package.cpp
			fn = UObject::FindObject<UFunction>("Function BP_HookPressureGauge.BP_HookPressureGauge_C.ExecuteUbergraph_BP_HookPressureGauge");
========
			fn = UObject::FindObject<UFunction>("Function BP_LogicHookDisplay.BP_LogicHookDisplay_C.ExecuteUbergraph_BP_LogicHookDisplay");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_LogicHookDisplay_Package.cpp
		
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
	 * 		Name   -> PredefindFunction ABP_LogicHookDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicHookDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
<<<<<<<< HEAD:Extras/SDK/SDK/BP_HookPressureGauge_Package.cpp
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HookPressureGauge.BP_HookPressureGauge_C");
========
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicHookDisplay.BP_LogicHookDisplay_C");
>>>>>>>> origin/development:Extras/SDK/SDK/BP_LogicHookDisplay_Package.cpp
		return ptr;
	}

}


