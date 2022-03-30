/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

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
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass HorizontalRadioSelect.HorizontalRadioSelect_C"));
		return ptr;
	}

}


