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
	 * Function BPI_Vehicle.BPI_Vehicle_C.ExitVehicle
	 */
	struct UBPI_Vehicle_C_ExitVehicle_Params
	{
	};

	/**
	 * Function BPI_Vehicle.BPI_Vehicle_C.EnterVehicle
	 */
	struct UBPI_Vehicle_C_EnterVehicle_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
