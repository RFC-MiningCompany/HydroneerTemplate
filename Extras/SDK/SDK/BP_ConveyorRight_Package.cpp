/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> PredefindFunction ABP_ConveyorRight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ConveyorRight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConveyorRight.BP_ConveyorRight_C");
		return ptr;
	}

}


