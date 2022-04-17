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
	 * 		Name   -> Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.SetCraftedScale
	 * 		Flags  -> ()
	 */
	void ABP_ParentCraftedResource_C::SetCraftedScale()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.SetCraftedScale"));
		
		ABP_ParentCraftedResource_C_SetCraftedScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentCraftedResource_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.UserConstructionScript"));
		
		ABP_ParentCraftedResource_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCraftedResource_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ReceiveTick"));
		
		ABP_ParentCraftedResource_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentCraftedResource_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ActorLoaded"));
		
		ABP_ParentCraftedResource_C_ActorLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ExecuteUbergraph_BP_ParentCraftedResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCraftedResource_C::ExecuteUbergraph_BP_ParentCraftedResource(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ExecuteUbergraph_BP_ParentCraftedResource"));
		
		ABP_ParentCraftedResource_C_ExecuteUbergraph_BP_ParentCraftedResource_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentCraftedResource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentCraftedResource_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ParentCraftedResource.BP_ParentCraftedResource_C"));
		return ptr;
	}

}


