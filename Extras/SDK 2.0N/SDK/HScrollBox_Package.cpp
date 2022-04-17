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
	 * 		Name   -> PredefindFunction UHScrollBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHScrollBox_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass HScrollBox.HScrollBox_C"));
		return ptr;
	}

}


