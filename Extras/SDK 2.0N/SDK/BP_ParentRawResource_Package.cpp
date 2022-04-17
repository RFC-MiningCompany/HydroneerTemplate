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
	 * 		Name   -> Function BP_ParentRawResource.BP_ParentRawResource_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ParentRawResource_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentRawResource.BP_ParentRawResource_C.ReceiveBeginPlay"));
		
		ABP_ParentRawResource_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentRawResource.BP_ParentRawResource_C.ToggleSaveRawResourcesChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentRawResource_C::ToggleSaveRawResourcesChanged(bool NewValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentRawResource.BP_ParentRawResource_C.ToggleSaveRawResourcesChanged"));
		
		ABP_ParentRawResource_C_ToggleSaveRawResourcesChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentRawResource.BP_ParentRawResource_C.ExecuteUbergraph_BP_ParentRawResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentRawResource_C::ExecuteUbergraph_BP_ParentRawResource(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ParentRawResource.BP_ParentRawResource_C.ExecuteUbergraph_BP_ParentRawResource"));
		
		ABP_ParentRawResource_C_ExecuteUbergraph_BP_ParentRawResource_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentRawResource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentRawResource_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ParentRawResource.BP_ParentRawResource_C"));
		return ptr;
	}

}


