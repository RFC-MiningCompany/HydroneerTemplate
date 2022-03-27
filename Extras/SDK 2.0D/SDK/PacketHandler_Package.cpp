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
	 * 		Name   -> PredefindFunction UHandlerComponentFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandlerComponentFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPacketHandlerProfileConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketHandlerProfileConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}

}


