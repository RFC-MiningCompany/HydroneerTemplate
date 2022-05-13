/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> PredefindFunction UOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverlays::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBasicOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicOverlays::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULocalizedOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalizedOverlays::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}

}


