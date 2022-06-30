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
	 * 		Name   -> Function UI_SwatchColor.UI_SwatchColor_C.UpdateSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SwatchColor_C::UpdateSelection(const class FName& ColorID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchColor.UI_SwatchColor_C.UpdateSelection");
		
		struct
		{
			class FName                                        ColorID;
		} params;
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SwatchColor.UI_SwatchColor_C.OnSelect
	 * 		Flags  -> ()
	 */
	void UUI_SwatchColor_C::OnSelect()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchColor.UI_SwatchColor_C.OnSelect");
		
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
	 * 		Name   -> Function UI_SwatchColor.UI_SwatchColor_C.BndEvt__UI_ColorSwatch_Button_Swatch_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SwatchColor_C::BndEvt__UI_ColorSwatch_Button_Swatch_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchColor.UI_SwatchColor_C.BndEvt__UI_ColorSwatch_Button_Swatch_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_SwatchColor.UI_SwatchColor_C.BndEvt__UI_ColorSwatch_Button_Swatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SwatchColor_C::BndEvt__UI_ColorSwatch_Button_Swatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchColor.UI_SwatchColor_C.BndEvt__UI_ColorSwatch_Button_Swatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_SwatchColor.UI_SwatchColor_C.BndEvt__UI_SwatchColor_Button_Swatch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_SwatchColor_C::BndEvt__UI_SwatchColor_Button_Swatch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchColor.UI_SwatchColor_C.BndEvt__UI_SwatchColor_Button_Swatch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
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
	 * 		Name   -> Function UI_SwatchColor.UI_SwatchColor_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SwatchColor_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchColor.UI_SwatchColor_C.PreConstruct");
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SwatchColor.UI_SwatchColor_C.ExecuteUbergraph_UI_SwatchColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SwatchColor_C::ExecuteUbergraph_UI_SwatchColor(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchColor.UI_SwatchColor_C.ExecuteUbergraph_UI_SwatchColor");
		
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
	 * 		Name   -> Function UI_SwatchColor.UI_SwatchColor_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ColorID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SwatchColor_C::OnSelected__DelegateSignature(const class FName& ColorID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SwatchColor.UI_SwatchColor_C.OnSelected__DelegateSignature");
		
		struct
		{
			class FName                                        ColorID;
		} params;
		params.ColorID = ColorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_SwatchColor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SwatchColor_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SwatchColor.UI_SwatchColor_C");
		return ptr;
	}

}


