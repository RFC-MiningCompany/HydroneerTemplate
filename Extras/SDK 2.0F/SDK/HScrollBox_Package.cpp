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
	 * 		Name   -> PredefindFunction UHScrollBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHScrollBox_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass HScrollBox.HScrollBox_C"));
		return ptr;
	}

}


