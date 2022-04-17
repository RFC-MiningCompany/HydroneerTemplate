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
	 * 		Name   -> PredefindFunction UWmfMediaSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWmfMediaSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class WmfMediaFactory.WmfMediaSettings"));
		return ptr;
	}

}


