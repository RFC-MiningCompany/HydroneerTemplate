﻿/**
 * Name: Hydroneer
 * Version: 2.0N
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Vehicle.BPI_Vehicle_C.ExitVehicle
	 * 		Flags  -> ()
	 */
	void UBPI_Vehicle_C::ExitVehicle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_Vehicle.BPI_Vehicle_C.ExitVehicle"));
		
		UBPI_Vehicle_C_ExitVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Vehicle.BPI_Vehicle_C.EnterVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Vehicle_C::EnterVehicle(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_Vehicle.BPI_Vehicle_C.EnterVehicle"));
		
		UBPI_Vehicle_C_EnterVehicle_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_Vehicle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Vehicle_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BPI_Vehicle.BPI_Vehicle_C"));
		return ptr;
	}

}


