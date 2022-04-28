/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function AC_Finite.AC_Finite_C.Used
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Finite_C::Used(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Finite.AC_Finite_C.Used");
		
		UAC_Finite_C_Used_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Finite.AC_Finite_C.AddUses
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Finite_C::AddUses(int32_t AmountToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Finite.AC_Finite_C.AddUses");
		
		UAC_Finite_C_AddUses_Params params {};
		params.AmountToAdd = AmountToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Finite.AC_Finite_C.ExecuteUbergraph_AC_Finite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Finite_C::ExecuteUbergraph_AC_Finite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Finite.AC_Finite_C.ExecuteUbergraph_AC_Finite");
		
		UAC_Finite_C_ExecuteUbergraph_AC_Finite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAC_Finite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_Finite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AC_Finite.AC_Finite_C");
		return ptr;
	}

}


