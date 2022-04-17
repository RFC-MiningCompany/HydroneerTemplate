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
	 * 		Name   -> PredefindFunction UHandlerComponentFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandlerComponentFactory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class PacketHandler.HandlerComponentFactory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPacketHandlerProfileConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketHandlerProfileConfig::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class PacketHandler.PacketHandlerProfileConfig"));
		return ptr;
	}

}


