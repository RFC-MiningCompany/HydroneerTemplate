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
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.ComponentsToSave
	 */
	struct ABP_DayNightCycle_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayModePostLoad
	 */
	struct ABP_DayNightCycle_C_SetDayModePostLoad_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SetDayMode
	 */
	struct ABP_DayNightCycle_C_SetDayMode_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.ActorSaved
	 */
	struct ABP_DayNightCycle_C_ActorSaved_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.ReceiveBeginPlay
	 */
	struct ABP_DayNightCycle_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.ActorPreSave
	 */
	struct ABP_DayNightCycle_C_ActorPreSave_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SpeedUpToSunrise
	 */
	struct ABP_DayNightCycle_C_SpeedUpToSunrise_Params
	{
	public:
		class ABP_ParentBed_C*                                     Bed;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_GameController_C*                                Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SunRiseTimerCheck
	 */
	struct ABP_DayNightCycle_C_SunRiseTimerCheck_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.SetNewRate
	 */
	struct ABP_DayNightCycle_C_SetNewRate_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.Update
	 */
	struct ABP_DayNightCycle_C_Update_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.ActorLoaded
	 */
	struct ABP_DayNightCycle_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_DayNightCycle.BP_DayNightCycle_C.ExecuteUbergraph_BP_DayNightCycle
	 */
	struct ABP_DayNightCycle_C_ExecuteUbergraph_BP_DayNightCycle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
