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
	 * 		Name   -> Function BP_LogicHookDelay10.BP_LogicHookDelay10_C.HookFunctionality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentItem_C*                            HookedTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanPass_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_LogicHookDelay10_C::HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicHookDelay10.BP_LogicHookDelay10_C.HookFunctionality");
		
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
	 * 		Name   -> Function BP_LogicHookDelay10.BP_LogicHookDelay10_C.WaitForDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentLogic_C*                           Logic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicHookDelay10_C::WaitForDelay(class ABP_ParentLogic_C* Logic, class USceneComponent* Component)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicHookDelay10.BP_LogicHookDelay10_C.WaitForDelay");
		
		struct
		{
			class ABP_ParentLogic_C*                           Logic;
			class USceneComponent*                             Component;
		} params;
		params.Logic = Logic;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LogicHookDelay10.BP_LogicHookDelay10_C.ExecuteUbergraph_BP_LogicHookDelay10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LogicHookDelay10_C::ExecuteUbergraph_BP_LogicHookDelay10(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LogicHookDelay10.BP_LogicHookDelay10_C.ExecuteUbergraph_BP_LogicHookDelay10");
		
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
	 * 		Name   -> PredefindFunction ABP_LogicHookDelay10_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LogicHookDelay10_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicHookDelay10.BP_LogicHookDelay10_C");
		return ptr;
	}

}


