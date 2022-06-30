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
	 * 		Name   -> PredefindFunction UH_ButtonMetal2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_ButtonMetal2_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass H_ButtonMetal2.H_ButtonMetal2_C");
		return ptr;
	}

}


