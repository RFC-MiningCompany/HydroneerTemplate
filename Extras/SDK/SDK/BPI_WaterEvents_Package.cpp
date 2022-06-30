/**
 * Name: Hydroneer
 * Version: 2.0
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_WaterEvents.BPI_WaterEvents_C.WaterParticleHit");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_WaterEvents.BPI_WaterEvents_C.InWater");
		
		struct
		{
		} params;
		
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
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_WaterEvents.BPI_WaterEvents_C");
		return ptr;
	}

}


