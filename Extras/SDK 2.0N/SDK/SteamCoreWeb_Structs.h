#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
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
		Found    = 0x0000000000000000,
		NotFound = 0x0000000000000001,
		MAX      = 0x0000000000000002
	};

	/**
	 * Enum SteamCoreWeb.ESteamValueType
	 */
	enum class ESteamValueType : uint8_t
	{
		STRING = 0x0000000000000000,
		NUMBER = 0x0000000000000001,
		BOOL   = 0x0000000000000002,
		MAX    = 0x0000000000000003
	};

	/**
	 * Enum SteamCoreWeb.ESubsystemWeb
	 */
	enum class ESubsystemWeb : uint8_t
	{
		SteamCoreWeb        = 0x0000000000000000,
		Apps                = 0x0000000000000001,
		Broadcast           = 0x0000000000000002,
		CheatReporting      = 0x0000000000000003,
		Community           = 0x0000000000000004,
		Econ                = 0x0000000000000005,
		EconMarket          = 0x0000000000000006,
		Economy             = 0x0000000000000007,
		GameInventory       = 0x0000000000000008,
		GameNotifications   = 0x0000000000000009,
		GameServers         = 0x000000000000000A,
		GameServerStats     = 0x000000000000000B,
		Inventory           = 0x000000000000000C,
		LobbyMatchmaking    = 0x000000000000000D,
		Leaderboards        = 0x000000000000000E,
		MicroTxn            = 0x000000000000000F,
		News                = 0x0000000000000010,
		PlayerService       = 0x0000000000000011,
		PublishedFile       = 0x0000000000000012,
		PublishedItemSearch = 0x0000000000000013,
		PublishedItemVoting = 0x0000000000000014,
		RemoteStorage       = 0x0000000000000015,
		User                = 0x0000000000000016,
		UserAuth            = 0x0000000000000017,
		UserStats           = 0x0000000000000018,
		Workshop            = 0x0000000000000019,
		MAX                 = 0x000000000000001A
	};

	/**
	 * Enum SteamCoreWeb.ESteamCoreWebLobbyType
	 */
	enum class ESteamCoreWebLobbyType : uint8_t
	{
		Private       = 0x0000000000000000,
		FriendsOnly   = 0x0000000000000001,
		TypePublic    = 0x0000000000000002,
		TypeInvisible = 0x0000000000000003,
		MAX           = 0x0000000000000004
	};

	/**
	 * Enum SteamCoreWeb.EVanityUrlType
	 */
	enum class EVanityUrlType : uint8_t
	{
		Individual        = 0x0000000000000000,
		Group             = 0x0000000000000001,
		OfficialGameGroup = 0x0000000000000002,
		MAX               = 0x0000000000000003
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
		unsigned char                                              UnknownData_9C7X[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
