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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_WaterEvents.BPI_WaterEvents_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_WaterEvents_C : public UInterface
	{
	public:
		void WaterParticleHit();
		void InWater();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
