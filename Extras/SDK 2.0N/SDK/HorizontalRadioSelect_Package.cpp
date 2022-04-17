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
	 * 		Name   -> PredefindFunction UHorizontalRadioSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorizontalRadioSelect_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass HorizontalRadioSelect.HorizontalRadioSelect_C"));
		return ptr;
	}

}


