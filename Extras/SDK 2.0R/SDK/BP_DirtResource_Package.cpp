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
	 * 		Name   -> Function BP_DirtResource.BP_DirtResource_C.Cooldown
	 * 		Flags  -> ()
	 */
	void ABP_DirtResource_C::Cooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.Cooldown");
		
		ABP_DirtResource_C_Cooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirtResource.BP_DirtResource_C.OverrideHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirtResource_C::OverrideHit(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.OverrideHit");
		
		ABP_DirtResource_C_OverrideHit_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirtResource.BP_DirtResource_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DirtResource_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.ReceiveBeginPlay");
		
		ABP_DirtResource_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirtResource.BP_DirtResource_C.ToggleSaveDirtChunksChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DirtResource_C::ToggleSaveDirtChunksChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.ToggleSaveDirtChunksChanged");
		
		ABP_DirtResource_C_ToggleSaveDirtChunksChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirtResource.BP_DirtResource_C.ExecuteUbergraph_BP_DirtResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirtResource_C::ExecuteUbergraph_BP_DirtResource(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.ExecuteUbergraph_BP_DirtResource");
		
		ABP_DirtResource_C_ExecuteUbergraph_BP_DirtResource_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_DirtResource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DirtResource_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DirtResource.BP_DirtResource_C");
		return ptr;
	}

}


