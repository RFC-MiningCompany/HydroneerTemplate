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
	 * 		Name   -> Function BP_BuildFunctionless.BP_BuildFunctionless_C.CreateProxyItem
	 * 		Flags  -> ()
	 */
	void ABP_BuildFunctionless_C::CreateProxyItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildFunctionless.BP_BuildFunctionless_C.CreateProxyItem");
		
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
	 * 		Name   -> Function BP_BuildFunctionless.BP_BuildFunctionless_C.InitFunctionless
	 * 		Flags  -> ()
	 */
	void ABP_BuildFunctionless_C::InitFunctionless()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildFunctionless.BP_BuildFunctionless_C.InitFunctionless");
		
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
	 * 		Name   -> Function BP_BuildFunctionless.BP_BuildFunctionless_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_BuildFunctionless_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildFunctionless.BP_BuildFunctionless_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_BuildFunctionless.BP_BuildFunctionless_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_BuildFunctionless_C::ActorLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildFunctionless.BP_BuildFunctionless_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_BuildFunctionless.BP_BuildFunctionless_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BuildFunctionless_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildFunctionless.BP_BuildFunctionless_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_BuildFunctionless.BP_BuildFunctionless_C.ExecuteUbergraph_BP_BuildFunctionless
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BuildFunctionless_C::ExecuteUbergraph_BP_BuildFunctionless(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildFunctionless.BP_BuildFunctionless_C.ExecuteUbergraph_BP_BuildFunctionless");
		
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
	 * 		Name   -> PredefindFunction ABP_BuildFunctionless_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BuildFunctionless_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildFunctionless.BP_BuildFunctionless_C");
		return ptr;
	}

}


