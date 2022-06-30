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
	 * 		Name   -> PredefindFunction UHCheckbox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHCheckbox_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HCheckbox.HCheckbox_C");
		return ptr;
	}

}


