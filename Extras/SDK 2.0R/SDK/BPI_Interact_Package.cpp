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
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.BPI_Unhighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::BPI_Unhighlight(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.BPI_Unhighlight");
		
		UBPI_Interact_C_BPI_Unhighlight_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.BPI_Highlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Interact_C::BPI_Highlight(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.BPI_Highlight");
		
		UBPI_Interact_C_BPI_Highlight_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.BPI_GetCanHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanHighlight_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::BPI_GetCanHighlight(bool* CanHighlight_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.BPI_GetCanHighlight");
		
		UBPI_Interact_C_BPI_GetCanHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHighlight_ != nullptr)
			*CanHighlight_ = params.CanHighlight_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.BPI_SetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Interact_C::BPI_SetHighlightArray(TArray<int32_t>* HighlightArray, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.BPI_SetHighlightArray");
		
		UBPI_Interact_C_BPI_SetHighlightArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HighlightArray != nullptr)
			*HighlightArray = params.HighlightArray;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Interact.BPI_Interact_C.BPI_GetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (Parm, OutParm)
	 */
	void UBPI_Interact_C::BPI_GetHighlightArray(TArray<int32_t>* HighlightArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_Interact.BPI_Interact_C.BPI_GetHighlightArray");
		
		UBPI_Interact_C_BPI_GetHighlightArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HighlightArray != nullptr)
			*HighlightArray = params.HighlightArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_Interact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Interact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Interact.BPI_Interact_C");
		return ptr;
	}

}


