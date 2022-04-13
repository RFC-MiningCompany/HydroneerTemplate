﻿#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ShelfFishingPot.BP_ShelfFishingPot_C.UserConstructionScript
	 */
	struct ABP_ShelfFishingPot_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ShelfFishingPot.BP_ShelfFishingPot_C.OverridePlacedDown
	 */
	struct ABP_ShelfFishingPot_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShelfFishingPot.BP_ShelfFishingPot_C.CatchFish
	 */
	struct ABP_ShelfFishingPot_C_CatchFish_Params
	{	};

	/**
	 * Function BP_ShelfFishingPot.BP_ShelfFishingPot_C.OverrideLoaded
	 */
	struct ABP_ShelfFishingPot_C_OverrideLoaded_Params
	{	};

	/**
	 * Function BP_ShelfFishingPot.BP_ShelfFishingPot_C.ExecuteUbergraph_BP_ShelfFishingPot
	 */
	struct ABP_ShelfFishingPot_C_ExecuteUbergraph_BP_ShelfFishingPot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
