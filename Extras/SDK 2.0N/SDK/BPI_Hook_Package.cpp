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
	 * 		Name   -> Function BPI_Hook.BPI_Hook_C.RemovePart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentHook_C*                            Hook                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Hook_C::RemovePart(class ABP_ParentHook_C* Hook)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_Hook.BPI_Hook_C.RemovePart"));
		
		UBPI_Hook_C_RemovePart_Params params {};
		params.Hook = Hook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Hook.BPI_Hook_C.AttachPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentHook_C*                            Hook                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Hook_C::AttachPart(class ABP_ParentHook_C* Hook)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_Hook.BPI_Hook_C.AttachPart"));
		
		UBPI_Hook_C_AttachPart_Params params {};
		params.Hook = Hook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_Hook_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Hook_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BPI_Hook.BPI_Hook_C"));
		return ptr;
	}

}


