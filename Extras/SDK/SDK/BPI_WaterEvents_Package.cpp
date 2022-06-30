﻿/**
 * Name: Hydroneer
 * Version: 2.0.6
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_WaterEvents.BPI_WaterEvents_C.WaterParticleHit");
		
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
	 * Parameters:
	 * 		bool                                               WaterBody_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_WaterEvents_C::InWater(bool WaterBody_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_WaterEvents.BPI_WaterEvents_C.InWater");
		
		struct
		{
			bool                                               WaterBody_;
		} params;
		params.WaterBody_ = WaterBody_;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_WaterEvents.BPI_WaterEvents_C");
		return ptr;
	}

}


