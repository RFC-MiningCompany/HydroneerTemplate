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
	 * 		Name   -> PredefindFunction ABP_PipeIntakeT1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PipeIntakeT1_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PipeIntakeT1.BP_PipeIntakeT1_C");
		return ptr;
	}

}


