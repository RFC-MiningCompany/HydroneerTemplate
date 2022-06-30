﻿/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * 		Name   -> PredefindFunction UPropertyAccess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyAccess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PropertyAccess.PropertyAccess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyEventBroadcaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyEventBroadcaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PropertyAccess.PropertyEventBroadcaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyEventSubscriber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyEventSubscriber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PropertyAccess.PropertyEventSubscriber");
		return ptr;
	}

}


