#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0H
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SteamCoreWeb.ESteamJsonResult
	 */
	enum class SteamCoreWeb_ESteamJsonResult : uint8_t
	{
		ESteamJsonResult__Found                = 0,
		ESteamJsonResult__NotFound             = 1,
		ESteamJsonResult__ESteamJsonResult_MAX = 2
	};

	/**
	 * Enum SteamCoreWeb.ESteamValueType
	 */
	enum class SteamCoreWeb_ESteamValueType : uint8_t
	{
		ESteamValueType__STRING              = 0,
		ESteamValueType__NUMBER              = 1,
		ESteamValueType__BOOL                = 2,
		ESteamValueType__ESteamValueType_MAX = 3
	};

	/**
	 * Enum SteamCoreWeb.ESubsystemWeb
	 */
	enum class SteamCoreWeb_ESubsystemWeb : uint8_t
	{
		ESubsystemWeb__SteamCoreWeb        = 0,
		ESubsystemWeb__Apps                = 1,
		ESubsystemWeb__Broadcast           = 2,
		ESubsystemWeb__CheatReporting      = 3,
		ESubsystemWeb__Community           = 4,
		ESubsystemWeb__Econ                = 5,
		ESubsystemWeb__EconMarket          = 6,
		ESubsystemWeb__Economy             = 7,
		ESubsystemWeb__GameInventory       = 8,
		ESubsystemWeb__GameNotifications   = 9,
		ESubsystemWeb__GameServers         = 10,
		ESubsystemWeb__GameServerStats     = 11,
		ESubsystemWeb__Inventory           = 12,
		ESubsystemWeb__LobbyMatchmaking    = 13,
		ESubsystemWeb__Leaderboards        = 14,
		ESubsystemWeb__MicroTxn            = 15,
		ESubsystemWeb__News                = 16,
		ESubsystemWeb__PlayerService       = 17,
		ESubsystemWeb__PublishedFile       = 18,
		ESubsystemWeb__PublishedItemSearch = 19,
		ESubsystemWeb__PublishedItemVoting = 20,
		ESubsystemWeb__RemoteStorage       = 21,
		ESubsystemWeb__User                = 22,
		ESubsystemWeb__UserAuth            = 23,
		ESubsystemWeb__UserStats           = 24,
		ESubsystemWeb__Workshop            = 25,
		ESubsystemWeb__ESubsystemWeb_MAX   = 26
	};

	/**
	 * Enum SteamCoreWeb.ESteamCoreWebLobbyType
	 */
	enum class SteamCoreWeb_ESteamCoreWebLobbyType : uint8_t
	{
		ESteamCoreWebLobbyType__Private                    = 0,
		ESteamCoreWebLobbyType__FriendsOnly                = 1,
		ESteamCoreWebLobbyType__TypePublic                 = 2,
		ESteamCoreWebLobbyType__TypeInvisible              = 3,
		ESteamCoreWebLobbyType__ESteamCoreWebLobbyType_MAX = 4
	};

	/**
	 * Enum SteamCoreWeb.EVanityUrlType
	 */
	enum class SteamCoreWeb_EVanityUrlType : uint8_t
	{
		EVanityUrlType__Individual         = 0,
		EVanityUrlType__Group              = 1,
		EVanityUrlType__OfficialGameGroup  = 2,
		EVanityUrlType__EVanityUrlType_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SteamCoreWeb.SteamCoreJson
	 * Size -> 0x0028
	 */
	struct FSteamCoreJson
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Number;                                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       boolValue;                                               // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCoreWeb_ESteamValueType                               Type;                                                    // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUPZ[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
