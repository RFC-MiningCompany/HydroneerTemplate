﻿/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * 		Name   -> Function InputSettingsPage.InputSettingsPage_C.Construct
	 * 		Flags  -> ()
	 */
	void UInputSettingsPage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputSettingsPage.InputSettingsPage_C.Construct");
		
		UInputSettingsPage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputSettingsPage.InputSettingsPage_C.BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UInputSettingsPage_C::BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputSettingsPage.InputSettingsPage_C.BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature");
		
		UInputSettingsPage_C_BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputSettingsPage.InputSettingsPage_C.ExecuteUbergraph_InputSettingsPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInputSettingsPage_C::ExecuteUbergraph_InputSettingsPage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InputSettingsPage.InputSettingsPage_C.ExecuteUbergraph_InputSettingsPage");
		
		UInputSettingsPage_C_ExecuteUbergraph_InputSettingsPage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInputSettingsPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputSettingsPage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputSettingsPage.InputSettingsPage_C");
		return ptr;
	}

}


