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
	 * 		Name   -> Function BP_ShelfGoldHead.BP_ShelfGoldHead_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ShelfGoldHead_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShelfGoldHead.BP_ShelfGoldHead_C.UserConstructionScript");
		
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
	 * 		Name   -> PredefindFunction ABP_ShelfGoldHead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ShelfGoldHead_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShelfGoldHead.BP_ShelfGoldHead_C");
		return ptr;
	}

}


