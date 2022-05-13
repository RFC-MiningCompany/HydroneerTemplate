#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
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
		SDK         = 0,
		Gameplay    = 1,
		Multiplayer = 2,
		Items       = 3,
		SaveSystem  = 4,
		Physics     = 5,
		Loading     = 6,
		Misc        = 7,
		MAX         = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
