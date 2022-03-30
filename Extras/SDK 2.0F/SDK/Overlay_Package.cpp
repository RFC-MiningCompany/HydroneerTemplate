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
	 * 		Name   -> PredefindFunction UOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverlays::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Overlay.Overlays"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBasicOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicOverlays::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Overlay.BasicOverlays"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULocalizedOverlays.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalizedOverlays::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Overlay.LocalizedOverlays"));
		return ptr;
	}

}


