/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> Function UI_ResourcePanel.UI_ResourcePanel_C.Get_ResourceTypeLbl_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_ResourcePanel_C::Get_ResourceTypeLbl_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourcePanel.UI_ResourcePanel_C.Get_ResourceTypeLbl_Text_1");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourcePanel.UI_ResourcePanel_C.Get_BaseValueLbl_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_ResourcePanel_C::Get_BaseValueLbl_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourcePanel.UI_ResourcePanel_C.Get_BaseValueLbl_Text_1");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourcePanel.UI_ResourcePanel_C.Get_WeightLbl_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_ResourcePanel_C::Get_WeightLbl_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourcePanel.UI_ResourcePanel_C.Get_WeightLbl_Text_1");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourcePanel.UI_ResourcePanel_C.Get_AmountLbl_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_ResourcePanel_C::Get_AmountLbl_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourcePanel.UI_ResourcePanel_C.Get_AmountLbl_Text_1");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourcePanel.UI_ResourcePanel_C.Get_ResourceLbl_Text_1
	 * 		Flags  -> ()
	 */
	class FText UUI_ResourcePanel_C::Get_ResourceLbl_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourcePanel.UI_ResourcePanel_C.Get_ResourceLbl_Text_1");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_ResourcePanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ResourcePanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ResourcePanel.UI_ResourcePanel_C");
		return ptr;
	}

}


