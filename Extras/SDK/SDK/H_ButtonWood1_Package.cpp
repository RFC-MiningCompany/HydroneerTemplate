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
	 * 		Name   -> PredefindFunction UH_ButtonWood1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UH_ButtonWood1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass H_ButtonWood1.H_ButtonWood1_C");
		return ptr;
	}

}


