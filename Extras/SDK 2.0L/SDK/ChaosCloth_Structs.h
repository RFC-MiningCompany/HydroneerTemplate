#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * Enum ChaosCloth.EChaosClothTetherMode
	 */
	enum class EChaosClothTetherMode : uint8_t
	{
		FastTetherFastLength         = 0x0000000000000000,
		AccurateTetherFastLength     = 0x0000000000000001,
		AccurateTetherAccurateLength = 0x0000000000000002,
		MaxChaosClothTetherMode      = 0x0000000000000003,
		MAX                          = 0x0000000000000004
	};

	/**
	 * Enum ChaosCloth.EChaosWeightMapTarget
	 */
	enum class EChaosWeightMapTarget : uint8_t
	{
		None                = 0x0000000000000000,
		MaxDistance         = 0x0000000000000001,
		BackstopDistance    = 0x0000000000000002,
		BackstopRadius      = 0x0000000000000003,
		AnimDriveMultiplier = 0x0000000000000004,
		MAX                 = 0x0000000000000005
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
