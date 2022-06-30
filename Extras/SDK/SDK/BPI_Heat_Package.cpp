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
	 * 		Name   -> Function BPI_Heat.BPI_Heat_C.OutOfFire
	 * 		Flags  -> ()
	 */
	void UBPI_Heat_C::OutOfFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Heat.BPI_Heat_C.OutOfFire");
		
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
	 * 		Name   -> Function BPI_Heat.BPI_Heat_C.InFire
	 * 		Flags  -> ()
	 */
	void UBPI_Heat_C::InFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Heat.BPI_Heat_C.InFire");
		
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
	 * 		Name   -> Function BPI_Heat.BPI_Heat_C.FullHeat
	 * 		Flags  -> ()
	 */
	void UBPI_Heat_C::FullHeat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Heat.BPI_Heat_C.FullHeat");
		
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
	 * 		Name   -> Function BPI_Heat.BPI_Heat_C.HeatUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Heat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Heat_C::HeatUpdated(float Heat)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Heat.BPI_Heat_C.HeatUpdated");
		
		struct
		{
			float                                              Heat;
		} params;
		params.Heat = Heat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_Heat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Heat_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Heat.BPI_Heat_C");
		return ptr;
	}

}


