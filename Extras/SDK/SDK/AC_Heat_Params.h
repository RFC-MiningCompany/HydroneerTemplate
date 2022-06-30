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
	 * Function AC_Heat.AC_Heat_C.InWater
	 */
	struct UAC_Heat_C_InWater_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.WaterParticleHit
	 */
	struct UAC_Heat_C_WaterParticleHit_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.HeatUpdated
	 */
	struct UAC_Heat_C_HeatUpdated_Params
	{
	public:
		float                                                      Heat;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Heat.AC_Heat_C.FullHeat
	 */
	struct UAC_Heat_C_FullHeat_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.StartHeat
	 */
	struct UAC_Heat_C_StartHeat_Params
	{
	public:
		float                                                      HeatIncrement;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Heat.AC_Heat_C.StopHeat
	 */
	struct UAC_Heat_C_StopHeat_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.IncreaseHeat
	 */
	struct UAC_Heat_C_IncreaseHeat_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.DecreaseHeat
	 */
	struct UAC_Heat_C_DecreaseHeat_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.ResetFullHeat
	 */
	struct UAC_Heat_C_ResetFullHeat_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.ZeroHeat
	 */
	struct UAC_Heat_C_ZeroHeat_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.InFire
	 */
	struct UAC_Heat_C_InFire_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.OutOfFire
	 */
	struct UAC_Heat_C_OutOfFire_Params
	{
	};

	/**
	 * Function AC_Heat.AC_Heat_C.ExecuteUbergraph_AC_Heat
	 */
	struct UAC_Heat_C_ExecuteUbergraph_AC_Heat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
