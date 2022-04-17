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
	 * Enum EngineSettings.ESubLevelStripMode
	 */
	enum class ESubLevelStripMode : uint8_t
	{
		ExactClass = 0x0000000000000000,
		IsChildOf  = 0x0000000000000001,
		MAX        = 0x0000000000000002
	};

	/**
	 * Enum EngineSettings.EFourPlayerSplitScreenType
	 */
	enum class EFourPlayerSplitScreenType : uint8_t
	{
		Grid       = 0x0000000000000000,
		Vertical   = 0x0000000000000001,
		Horizontal = 0x0000000000000002,
		MAX        = 0x0000000000000003
	};

	/**
	 * Enum EngineSettings.EThreePlayerSplitScreenType
	 */
	enum class EThreePlayerSplitScreenType : uint8_t
	{
		FavorTop    = 0x0000000000000000,
		FavorBottom = 0x0000000000000001,
		Vertical    = 0x0000000000000002,
		Horizontal  = 0x0000000000000003,
		MAX         = 0x0000000000000004
	};

	/**
	 * Enum EngineSettings.ETwoPlayerSplitScreenType
	 */
	enum class ETwoPlayerSplitScreenType : uint8_t
	{
		Horizontal = 0x0000000000000000,
		Vertical   = 0x0000000000000001,
		MAX        = 0x0000000000000002
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EngineSettings.AutoCompleteCommand
	 * Size -> 0x0028
	 */
	struct FAutoCompleteCommand
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Desc;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BASB[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EngineSettings.GameModeName
	 * Size -> 0x0028
	 */
	struct FGameModeName
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      GameMode;                                                // 0x0010(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
