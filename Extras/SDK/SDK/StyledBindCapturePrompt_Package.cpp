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
	 * 		Name   -> PredefindFunction UStyledBindCapturePrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledBindCapturePrompt_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledBindCapturePrompt.StyledBindCapturePrompt_C");
		return ptr;
	}

}


