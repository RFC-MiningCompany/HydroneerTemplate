/**
 * Name: Hydroneer
 * Version: 2.0H
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BPI_Hook.BPI_Hook_C.RemovePart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentHook_C*                            Hook                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Hook_C::RemovePart(class ABP_ParentHook_C* Hook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function BPI_Hook.BPI_Hook_C.RemovePart"));
		
		struct
		{
			class ABP_ParentHook_C*                            Hook;
		} params;
		params.Hook = Hook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function BPI_Hook.BPI_Hook_C.AttachPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ParentHook_C*                            Hook                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Hook_C::AttachPart(class ABP_ParentHook_C* Hook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(_xor_("Function BPI_Hook.BPI_Hook_C.AttachPart"));
		
		struct
		{
			class ABP_ParentHook_C*                            Hook;
		} params;
		params.Hook = Hook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_Hook_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Hook_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BPI_Hook.BPI_Hook_C"));
		return ptr;
	}

}


