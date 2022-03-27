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
	 * 		Name   -> PredefindFunction UUdpMessagingSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdpMessagingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UdpMessaging.UdpMessagingSettings");
		return ptr;
	}

}


