#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
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
	enum class ESteamJsonResult : uint8_t
	{
		Found    = 0,
		NotFound = 1,
		MAX      = 2
	};

	/**
	 * Enum SteamCoreWeb.ESteamValueType
	 */
	enum class ESteamValueType : uint8_t
	{
		STRING = 0,
		NUMBER = 1,
		BOOL   = 2,
		MAX    = 3
	};

	/**
	 * Enum SteamCoreWeb.ESubsystemWeb
	 */
	enum class ESubsystemWeb : uint8_t
	{
		SteamCoreWeb        = 0,
		Apps                = 1,
		Broadcast           = 2,
		CheatReporting      = 3,
		Community           = 4,
		Econ                = 5,
		EconMarket          = 6,
		Economy             = 7,
		GameInventory       = 8,
		GameNotifications   = 9,
		GameServers         = 10,
		GameServerStats     = 11,
		Inventory           = 12,
		LobbyMatchmaking    = 13,
		Leaderboards        = 14,
		MicroTxn            = 15,
		News                = 16,
		PlayerService       = 17,
		PublishedFile       = 18,
		PublishedItemSearch = 19,
		PublishedItemVoting = 20,
		RemoteStorage       = 21,
		User                = 22,
		UserAuth            = 23,
		UserStats           = 24,
		Workshop            = 25,
		MAX                 = 26
	};

	/**
	 * Enum SteamCoreWeb.ESteamCoreWebLobbyType
	 */
	enum class ESteamCoreWebLobbyType : uint8_t
	{
		Private       = 0,
		FriendsOnly   = 1,
		TypePublic    = 2,
		TypeInvisible = 3,
		MAX           = 4
	};

	/**
	 * Enum SteamCoreWeb.EVanityUrlType
	 */
	enum class EVanityUrlType : uint8_t
	{
		Individual        = 0,
		Group             = 1,
		OfficialGameGroup = 2,
		MAX               = 3
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
		bool                                                       _bool_;                                                  // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamValueType                                            Type;                                                    // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEDR[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
