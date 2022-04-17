/**
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
	 * 		Name   -> Function BPI_WaterEvents.BPI_WaterEvents_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void UBPI_WaterEvents_C::WaterParticleHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_WaterEvents.BPI_WaterEvents_C.WaterParticleHit"));
		
		UBPI_WaterEvents_C_WaterParticleHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_WaterEvents.BPI_WaterEvents_C.InWater
	 * 		Flags  -> ()
	 */
	void UBPI_WaterEvents_C::InWater()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_WaterEvents.BPI_WaterEvents_C.InWater"));
		
		UBPI_WaterEvents_C_InWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_WaterEvents_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_WaterEvents_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BPI_WaterEvents.BPI_WaterEvents_C"));
		return ptr;
	}

}


