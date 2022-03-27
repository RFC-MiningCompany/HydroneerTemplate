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
	 * 		Name   -> PredefindFunction UStyledBindCapturePrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStyledBindCapturePrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StyledBindCapturePrompt.StyledBindCapturePrompt_C");
		return ptr;
	}

}


