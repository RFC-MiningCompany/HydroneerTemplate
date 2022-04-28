#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * Enum Mining.ELogCategory
	 */
	enum class ELogCategory : uint8_t
	{
		SDK         = 0x0000000000000000,
		Gameplay    = 0x0000000000000001,
		Multiplayer = 0x0000000000000002,
		Items       = 0x0000000000000003,
		SaveSystem  = 0x0000000000000004,
		Physics     = 0x0000000000000005,
		Loading     = 0x0000000000000006,
		Misc        = 0x0000000000000007,
		MAX         = 0x0000000000000008
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
