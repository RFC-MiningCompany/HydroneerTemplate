/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * 		Name   -> Function BP_UnstuckTestrCapsule.BP_UnstuckTestrCapsule_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_UnstuckTestrCapsule_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UnstuckTestrCapsule.BP_UnstuckTestrCapsule_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_UnstuckTestrCapsule.BP_UnstuckTestrCapsule_C.ExecuteUbergraph_BP_UnstuckTestrCapsule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UnstuckTestrCapsule_C::ExecuteUbergraph_BP_UnstuckTestrCapsule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UnstuckTestrCapsule.BP_UnstuckTestrCapsule_C.ExecuteUbergraph_BP_UnstuckTestrCapsule");
		
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
	 * 		Name   -> PredefindFunction ABP_UnstuckTestrCapsule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_UnstuckTestrCapsule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnstuckTestrCapsule.BP_UnstuckTestrCapsule_C");
		return ptr;
	}

}


