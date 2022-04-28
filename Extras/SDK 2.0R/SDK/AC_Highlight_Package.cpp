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
	 * 		Name   -> Function AC_Highlight.AC_Highlight_C.SetHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Highlight_C::SetHighlight(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Highlight.AC_Highlight_C.SetHighlight");
		
		UAC_Highlight_C_SetHighlight_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Highlight.AC_Highlight_C.ToggleHighlightSpecific
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StencilValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Highlight_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAC_Highlight_C::ToggleHighlightSpecific(int32_t StencilValue, bool Highlight_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Highlight.AC_Highlight_C.ToggleHighlightSpecific");
		
		UAC_Highlight_C_ToggleHighlightSpecific_Params params {};
		params.StencilValue = StencilValue;
		params.Highlight_ = Highlight_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Highlight.AC_Highlight_C.ForceStopHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Highlight_C::ForceStopHighlight(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Highlight.AC_Highlight_C.ForceStopHighlight");
		
		UAC_Highlight_C_ForceStopHighlight_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Highlight.AC_Highlight_C.TogglePlayerHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Highlight_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Highlight_C::TogglePlayerHighlight(bool Highlight_, class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Highlight.AC_Highlight_C.TogglePlayerHighlight");
		
		UAC_Highlight_C_TogglePlayerHighlight_Params params {};
		params.Highlight_ = Highlight_;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Highlight.AC_Highlight_C.OnUnhighlighted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Highlight_C::OnUnhighlighted__DelegateSignature(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Highlight.AC_Highlight_C.OnUnhighlighted__DelegateSignature");
		
		UAC_Highlight_C_OnUnhighlighted__DelegateSignature_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AC_Highlight.AC_Highlight_C.OnHighlighted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_Highlight_C::OnHighlighted__DelegateSignature(class ABP_GameController_C* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_Highlight.AC_Highlight_C.OnHighlighted__DelegateSignature");
		
		UAC_Highlight_C_OnHighlighted__DelegateSignature_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAC_Highlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_Highlight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AC_Highlight.AC_Highlight_C");
		return ptr;
	}

}


