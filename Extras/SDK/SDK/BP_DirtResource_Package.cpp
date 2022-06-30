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
	 * 		Name   -> Function BP_DirtResource.BP_DirtResource_C.Cooldown
	 * 		Flags  -> ()
	 */
	void ABP_DirtResource_C::Cooldown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.Cooldown");
		
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
	 * 		Name   -> Function BP_DirtResource.BP_DirtResource_C.OverrideHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirtResource_C::OverrideHit(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.OverrideHit");
		
		struct
		{
			class AActor*                                      OtherActor;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_DirtResource.BP_DirtResource_C.ToggleSaveDirtChunksChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DirtResource_C::ToggleSaveDirtChunksChanged(bool NewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.ToggleSaveDirtChunksChanged");
		
		struct
		{
			bool                                               NewValue;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DirtResource.BP_DirtResource_C.ExecuteUbergraph_BP_DirtResource");
		
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
	 * 		Name   -> PredefindFunction ABP_DirtResource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DirtResource_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DirtResource.BP_DirtResource_C");
		return ptr;
	}

}


