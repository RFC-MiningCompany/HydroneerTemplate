#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0F
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
	enum class Mining_ELogCategory : uint8_t
	{
		ELogCategory__SDK              = 0,
		ELogCategory__Gameplay         = 1,
		ELogCategory__Multiplayer      = 2,
		ELogCategory__Items            = 3,
		ELogCategory__SaveSystem       = 4,
		ELogCategory__Physics          = 5,
		ELogCategory__Loading          = 6,
		ELogCategory__Misc             = 7,
		ELogCategory__ELogCategory_MAX = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
