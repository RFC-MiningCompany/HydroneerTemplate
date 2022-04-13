﻿/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * 		Name   -> PredefindFunction UAmbisonicsEncodingSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbisonicsEncodingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundFields.AmbisonicsEncodingSettings");
		return ptr;
	}

}


