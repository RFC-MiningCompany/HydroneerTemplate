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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.UserConstructionScript
	 */
	struct ABP_CaughtFish_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.InFire
	 */
	struct ABP_CaughtFish_C_InFire_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.OutOfFire
	 */
	struct ABP_CaughtFish_C_OutOfFire_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.FullHeat
	 */
	struct ABP_CaughtFish_C_FullHeat_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.HeatUpdated
	 */
	struct ABP_CaughtFish_C_HeatUpdated_Params
	{
	public:
		float                                                      Heat;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.ActorLoaded
	 */
	struct ABP_CaughtFish_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.LoadFishType
	 */
	struct ABP_CaughtFish_C_LoadFishType_Params
	{
	};

	/**
	 * Function BP_CaughtFish.BP_CaughtFish_C.ExecuteUbergraph_BP_CaughtFish
	 */
	struct ABP_CaughtFish_C_ExecuteUbergraph_BP_CaughtFish_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
