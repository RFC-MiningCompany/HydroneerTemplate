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
	 * 		Name   -> PredefindFunction UStyledActionLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledActionLabel_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass StyledActionLabel.StyledActionLabel_C"));
		return ptr;
	}

}


