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
	 * 		Name   -> Function UI_StyleOption.UI_StyleOption_C.ToggleSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StyleOption_C::ToggleSelection(bool isSelected_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_StyleOption.UI_StyleOption_C.ToggleSelection");
		
		struct
		{
			bool                                               isSelected_;
		} params;
		params.isSelected_ = isSelected_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StyleOption.UI_StyleOption_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_StyleOption_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_StyleOption.UI_StyleOption_C.Construct");
		
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
	 * 		Name   -> Function UI_StyleOption.UI_StyleOption_C.BndEvt__UI_StyleOption_Button_Option_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_StyleOption_C::BndEvt__UI_StyleOption_Button_Option_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_StyleOption.UI_StyleOption_C.BndEvt__UI_StyleOption_Button_Option_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_StyleOption.UI_StyleOption_C.ExecuteUbergraph_UI_StyleOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StyleOption_C::ExecuteUbergraph_UI_StyleOption(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_StyleOption.UI_StyleOption_C.ExecuteUbergraph_UI_StyleOption");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StyleOption.UI_StyleOption_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StyleOption_C::OnPressed__DelegateSignature(class UWidget* Widget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_StyleOption.UI_StyleOption_C.OnPressed__DelegateSignature");
		
		struct
		{
			class UWidget*                                     Widget;
		} params;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_StyleOption_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StyleOption_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StyleOption.UI_StyleOption_C");
		return ptr;
	}

}


