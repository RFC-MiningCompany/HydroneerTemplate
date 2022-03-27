/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorizontalRadioSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorizontalRadioSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HorizontalRadioSelect.HorizontalRadioSelect_C");
		return ptr;
	}

}


