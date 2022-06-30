/**
 * Name: Hydroneer
 * Version: 2.0
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
	 * 		Name   -> PredefindFunction USteamAuthComponentModuleInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAuthComponentModuleInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamNetConnection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamNetDriver::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}

}


