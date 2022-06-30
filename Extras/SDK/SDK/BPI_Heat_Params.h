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
	 * Function BPI_Heat.BPI_Heat_C.OutOfFire
	 */
	struct UBPI_Heat_C_OutOfFire_Params
	{
	};

	/**
	 * Function BPI_Heat.BPI_Heat_C.InFire
	 */
	struct UBPI_Heat_C_InFire_Params
	{
	};

	/**
	 * Function BPI_Heat.BPI_Heat_C.FullHeat
	 */
	struct UBPI_Heat_C_FullHeat_Params
	{
	};

	/**
	 * Function BPI_Heat.BPI_Heat_C.HeatUpdated
	 */
	struct UBPI_Heat_C_HeatUpdated_Params
	{
	public:
		float                                                      Heat;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
