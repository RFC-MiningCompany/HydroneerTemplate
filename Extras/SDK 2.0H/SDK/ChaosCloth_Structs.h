﻿#pragma once

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
	 * Enum ChaosCloth.EChaosClothTetherMode
	 */
	enum class ChaosCloth_EChaosClothTetherMode : uint8_t
	{
		EChaosClothTetherMode__FastTetherFastLength         = 0,
		EChaosClothTetherMode__AccurateTetherFastLength     = 1,
		EChaosClothTetherMode__AccurateTetherAccurateLength = 2,
		EChaosClothTetherMode__MaxChaosClothTetherMode      = 3,
		EChaosClothTetherMode__EChaosClothTetherMode_MAX    = 4
	};

	/**
	 * Enum ChaosCloth.EChaosWeightMapTarget
	 */
	enum class ChaosCloth_EChaosWeightMapTarget : uint8_t
	{
		EChaosWeightMapTarget__None                      = 0,
		EChaosWeightMapTarget__MaxDistance               = 1,
		EChaosWeightMapTarget__BackstopDistance          = 2,
		EChaosWeightMapTarget__BackstopRadius            = 3,
		EChaosWeightMapTarget__AnimDriveMultiplier       = 4,
		EChaosWeightMapTarget__EChaosWeightMapTarget_MAX = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
