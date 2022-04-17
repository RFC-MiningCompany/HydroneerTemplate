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
	 * 		Name   -> Function AC_Heat.AC_Heat_C.InWater
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::InWater()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.InWater"));
		
		UAC_Heat_C_InWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::WaterParticleHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.WaterParticleHit"));
		
		UAC_Heat_C_WaterParticleHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.HeatUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Heat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Heat_C::HeatUpdated(float Heat)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.HeatUpdated"));
		
		UAC_Heat_C_HeatUpdated_Params params {};
		params.Heat = Heat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.FullHeat
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::FullHeat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.FullHeat"));
		
		UAC_Heat_C_FullHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.StartHeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HeatIncrement                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Heat_C::StartHeat(float HeatIncrement)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.StartHeat"));
		
		UAC_Heat_C_StartHeat_Params params {};
		params.HeatIncrement = HeatIncrement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.StopHeat
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::StopHeat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.StopHeat"));
		
		UAC_Heat_C_StopHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.IncreaseHeat
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::IncreaseHeat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.IncreaseHeat"));
		
		UAC_Heat_C_IncreaseHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.DecreaseHeat
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::DecreaseHeat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.DecreaseHeat"));
		
		UAC_Heat_C_DecreaseHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.ResetFullHeat
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::ResetFullHeat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.ResetFullHeat"));
		
		UAC_Heat_C_ResetFullHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.ZeroHeat
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::ZeroHeat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.ZeroHeat"));
		
		UAC_Heat_C_ZeroHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.InFire
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::InFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.InFire"));
		
		UAC_Heat_C_InFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.OutOfFire
	 * 		Flags  -> ()
	 */
	void UAC_Heat_C::OutOfFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.OutOfFire"));
		
		UAC_Heat_C_OutOfFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Heat.AC_Heat_C.ExecuteUbergraph_AC_Heat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Heat_C::ExecuteUbergraph_AC_Heat(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AC_Heat.AC_Heat_C.ExecuteUbergraph_AC_Heat"));
		
		UAC_Heat_C_ExecuteUbergraph_AC_Heat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAC_Heat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_Heat_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass AC_Heat.AC_Heat_C"));
		return ptr;
	}

}


