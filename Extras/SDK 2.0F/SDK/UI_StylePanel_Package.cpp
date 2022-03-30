﻿/**
 * Name: Hydroneer
 * Version: 2.0F
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
	 * 		Name   -> Function UI_StylePanel.UI_StylePanel_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StylePanel_C::Update(class UWidget* Widget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_StylePanel.UI_StylePanel_C.Update"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_StylePanel.UI_StylePanel_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UPData_Customizable_Base_C*>          Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_StylePanel_C::Init(TArray<class UPData_Customizable_Base_C*>* Options)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_StylePanel.UI_StylePanel_C.Init"));
		
		struct
		{
			TArray<class UPData_Customizable_Base_C*>          Options;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_StylePanel.UI_StylePanel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StylePanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_StylePanel.UI_StylePanel_C.PreConstruct"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_StylePanel.UI_StylePanel_C.ExecuteUbergraph_UI_StylePanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StylePanel_C::ExecuteUbergraph_UI_StylePanel(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_StylePanel.UI_StylePanel_C.ExecuteUbergraph_UI_StylePanel"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_StylePanel.UI_StylePanel_C.OnUpdateStyle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StyleIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StylePanel_C::OnUpdateStyle__DelegateSignature(int32_t StyleIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_StylePanel.UI_StylePanel_C.OnUpdateStyle__DelegateSignature"));
		
		struct
		{
			int32_t                                            StyleIndex;
		} params;
		params.StyleIndex = StyleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_StylePanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StylePanel_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass UI_StylePanel.UI_StylePanel_C"));
		return ptr;
	}

}


