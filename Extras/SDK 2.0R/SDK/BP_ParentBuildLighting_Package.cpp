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
	 * 		Name   -> Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuildLighting_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.UserConstructionScript");
		
		ABP_ParentBuildLighting_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuildLighting_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.Timeline_0__FinishedFunc");
		
		ABP_ParentBuildLighting_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuildLighting_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.Timeline_0__UpdateFunc");
		
		ABP_ParentBuildLighting_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.LMBDownIsTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            CarryingItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GameController_C*                        Insigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuildLighting_C::LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.LMBDownIsTarget");
		
		ABP_ParentBuildLighting_C_LMBDownIsTarget_Params params {};
		params.Component = Component;
		params.CarryingItem = CarryingItem;
		params.Insigator = Insigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuildLighting_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.ActorLoaded");
		
		ABP_ParentBuildLighting_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuildLighting_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.ReceiveBeginPlay");
		
		ABP_ParentBuildLighting_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.OverrideLightOn
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuildLighting_C::OverrideLightOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.OverrideLightOn");
		
		ABP_ParentBuildLighting_C_OverrideLightOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.OverrideLightOff
	 * 		Flags  -> ()
	 */
	void ABP_ParentBuildLighting_C::OverrideLightOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.OverrideLightOff");
		
		ABP_ParentBuildLighting_C_OverrideLightOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.ExecuteUbergraph_BP_ParentBuildLighting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentBuildLighting_C::ExecuteUbergraph_BP_ParentBuildLighting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentBuildLighting.BP_ParentBuildLighting_C.ExecuteUbergraph_BP_ParentBuildLighting");
		
		ABP_ParentBuildLighting_C_ExecuteUbergraph_BP_ParentBuildLighting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentBuildLighting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentBuildLighting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentBuildLighting.BP_ParentBuildLighting_C");
		return ptr;
	}

}


