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
	 * 		Name   -> Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.SetCraftedScale
	 * 		Flags  -> ()
	 */
	void ABP_ParentCraftedResource_C::SetCraftedScale()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.SetCraftedScale");
		
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
	 * 		Name   -> Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentCraftedResource_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCraftedResource_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ReceiveTick");
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ExecuteUbergraph_BP_ParentCraftedResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCraftedResource_C::ExecuteUbergraph_BP_ParentCraftedResource(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ParentCraftedResource.BP_ParentCraftedResource_C.ExecuteUbergraph_BP_ParentCraftedResource");
		
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
	 * 		Name   -> PredefindFunction ABP_ParentCraftedResource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentCraftedResource_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentCraftedResource.BP_ParentCraftedResource_C");
		return ptr;
	}

}


