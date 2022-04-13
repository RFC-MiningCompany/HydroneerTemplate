/**
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
	 * 		Name   -> PredefindFunction UAutoSettingsConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.AutoSettingsConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.AutoSettingWidget.UpdateSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoSettingWidget::UpdateSelection(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.UpdateSelection");
		
		UAutoSettingWidget_UpdateSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.AutoSettingWidget.Save
	 * 		Flags  -> ()
	 */
	void UAutoSettingWidget::Save()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.Save");
		
		UAutoSettingWidget_Save_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.AutoSettingWidget.HasUnsavedChange
	 * 		Flags  -> ()
	 */
	bool UAutoSettingWidget::HasUnsavedChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.HasUnsavedChange");
		
		UAutoSettingWidget_HasUnsavedChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.AutoSettingWidget.HasUnappliedChange
	 * 		Flags  -> ()
	 */
	bool UAutoSettingWidget::HasUnappliedChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.HasUnappliedChange");
		
		UAutoSettingWidget_HasUnappliedChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.AutoSettingWidget.Cancel
	 * 		Flags  -> ()
	 */
	void UAutoSettingWidget::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.Cancel");
		
		UAutoSettingWidget_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.AutoSettingWidget.ApplySettingValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveIfPossible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutoSettingWidget::ApplySettingValue(const class FString& Value, bool bSaveIfPossible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.ApplySettingValue");
		
		UAutoSettingWidget_ApplySettingValue_Params params {};
		params.bSaveIfPossible = bSaveIfPossible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.AutoSettingWidget.Apply
	 * 		Flags  -> ()
	 */
	void UAutoSettingWidget::Apply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.AutoSettingWidget.Apply");
		
		UAutoSettingWidget_Apply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.AutoSettingWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ToggleSetting.UpdateToggleState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UToggleSetting::UpdateToggleState(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ToggleSetting.UpdateToggleState");
		
		UToggleSetting_UpdateToggleState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ToggleSetting.ToggleStateUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UToggleSetting::ToggleStateUpdated(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ToggleSetting.ToggleStateUpdated");
		
		UToggleSetting_ToggleStateUpdated_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UToggleSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToggleSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.ToggleSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckBoxSetting::CheckBoxStateChanged(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged");
		
		UCheckBoxSetting_CheckBoxStateChanged_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCheckBoxSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckBoxSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.CheckBoxSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SelectSetting.UpdateOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSettingOption>                      InOptions                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USelectSetting::UpdateOptions(TArray<struct FSettingOption> InOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SelectSetting.UpdateOptions");
		
		USelectSetting_UpdateOptions_Params params {};
		params.InOptions = InOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SelectSetting.RegenerateOptions
	 * 		Flags  -> ()
	 */
	void USelectSetting::RegenerateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SelectSetting.RegenerateOptions");
		
		USelectSetting_RegenerateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USelectSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.SelectSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComboBoxSetting::ComboBoxSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged");
		
		UComboBoxSetting_ComboBoxSelectionChanged_Params params {};
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UComboBoxSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboBoxSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.ComboBoxSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ConsoleUtils.SetStringCVar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConsoleUtils::SetStringCVar(const class FName& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.SetStringCVar");
		
		UConsoleUtils_SetStringCVar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ConsoleUtils.SetIntCVar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConsoleUtils::SetIntCVar(const class FName& Name, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.SetIntCVar");
		
		UConsoleUtils_SetIntCVar_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ConsoleUtils.SetFloatCVar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConsoleUtils::SetFloatCVar(const class FName& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.SetFloatCVar");
		
		UConsoleUtils_SetFloatCVar_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ConsoleUtils.SetBoolCVar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConsoleUtils::SetBoolCVar(const class FName& Name, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.SetBoolCVar");
		
		UConsoleUtils_SetBoolCVar_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ConsoleUtils.IsCVarRegistered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConsoleUtils::IsCVarRegistered(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.IsCVarRegistered");
		
		UConsoleUtils_IsCVarRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ConsoleUtils.GetStringCVar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UConsoleUtils::GetStringCVar(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.GetStringCVar");
		
		UConsoleUtils_GetStringCVar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ConsoleUtils.GetIntCVar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UConsoleUtils::GetIntCVar(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.GetIntCVar");
		
		UConsoleUtils_GetIntCVar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ConsoleUtils.GetFloatCVar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UConsoleUtils::GetFloatCVar(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.GetFloatCVar");
		
		UConsoleUtils_GetFloatCVar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.ConsoleUtils.GetBoolCVar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConsoleUtils::GetBoolCVar(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.ConsoleUtils.GetBoolCVar");
		
		UConsoleUtils_GetBoolCVar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConsoleUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.ConsoleUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCVarChangeListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCVarChangeListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.CVarChangeListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedCallback                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               CallbackImmediately                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCVarChangeListenerManager::AddStringCVarCallbackStatic(const class FName& Name, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic");
		
		UCVarChangeListenerManager_AddStringCVarCallbackStatic_Params params {};
		params.CallbackImmediately = CallbackImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedCallback                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               CallbackImmediately                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCVarChangeListenerManager::AddIntCVarCallbackStatic(const class FName& Name, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic");
		
		UCVarChangeListenerManager_AddIntCVarCallbackStatic_Params params {};
		params.CallbackImmediately = CallbackImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedCallback                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               CallbackImmediately                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCVarChangeListenerManager::AddFloatCVarCallbackStatic(const class FName& Name, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic");
		
		UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Params params {};
		params.CallbackImmediately = CallbackImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedCallback                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               CallbackImmediately                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCVarChangeListenerManager::AddBoolCVarCallbackStatic(const class FName& Name, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic");
		
		UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Params params {};
		params.CallbackImmediately = CallbackImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCVarChangeListenerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCVarChangeListenerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.CVarChangeListenerManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SliderSetting.UpdateSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NormalizedValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RawValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USliderSetting::UpdateSliderValue(float NormalizedValue, float RawValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.UpdateSliderValue");
		
		USliderSetting_UpdateSliderValue_Params params {};
		params.NormalizedValue = NormalizedValue;
		params.RawValue = RawValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SliderSetting.SliderValueUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NormalizedValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USliderSetting::SliderValueUpdated(float NormalizedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.SliderValueUpdated");
		
		USliderSetting_SliderValueUpdated_Params params {};
		params.NormalizedValue = NormalizedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SliderSetting.ShouldSaveCurrentValue
	 * 		Flags  -> ()
	 */
	bool USliderSetting::ShouldSaveCurrentValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.ShouldSaveCurrentValue");
		
		USliderSetting_ShouldSaveCurrentValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SliderSetting.RawValueToNormalized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RawValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USliderSetting::RawValueToNormalized(float RawValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.RawValueToNormalized");
		
		USliderSetting_RawValueToNormalized_Params params {};
		params.RawValue = RawValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SliderSetting.OnSliderValueUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NormalizedValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RawValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USliderSetting::OnSliderValueUpdated(float NormalizedValue, float RawValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.OnSliderValueUpdated");
		
		USliderSetting_OnSliderValueUpdated_Params params {};
		params.NormalizedValue = NormalizedValue;
		params.RawValue = RawValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SliderSetting.NormalizedValueToRaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NormalizedValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USliderSetting::NormalizedValueToRaw(float NormalizedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.NormalizedValueToRaw");
		
		USliderSetting_NormalizedValueToRaw_Params params {};
		params.NormalizedValue = NormalizedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SliderSetting.ClampRawValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RawValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USliderSetting::ClampRawValue(float RawValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SliderSetting.ClampRawValue");
		
		USliderSetting_ClampRawValue_Params params {};
		params.RawValue = RawValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USliderSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USliderSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.SliderSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.NativeSliderSetting.SliderValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNativeSliderSetting::SliderValueChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.NativeSliderSetting.SliderValueChanged");
		
		UNativeSliderSetting_SliderValueChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd
	 * 		Flags  -> ()
	 */
	void UNativeSliderSetting::SliderMouseCaptureEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd");
		
		UNativeSliderSetting_SliderMouseCaptureEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin
	 * 		Flags  -> ()
	 */
	void UNativeSliderSetting::SliderMouseCaptureBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin");
		
		UNativeSliderSetting_SliderMouseCaptureBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNativeSliderSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNativeSliderSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.NativeSliderSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioButton.UpdateSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadioButton::UpdateSelected(bool InSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.UpdateSelected");
		
		URadioButton_UpdateSelected_Params params {};
		params.InSelected = InSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioButton.UpdateLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InLabel                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void URadioButton::UpdateLabel(const class FText& InLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.UpdateLabel");
		
		URadioButton_UpdateLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioButton.TriggerSelection
	 * 		Flags  -> ()
	 */
	void URadioButton::TriggerSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.TriggerSelection");
		
		URadioButton_TriggerSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioButton.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadioButton::SetValue(const class FString& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.SetValue");
		
		URadioButton_SetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioButton.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadioButton::SetSelected(bool InSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.SetSelected");
		
		URadioButton_SetSelected_Params params {};
		params.InSelected = InSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioButton.SetLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InLabel                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void URadioButton::SetLabel(const class FText& InLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.SetLabel");
		
		URadioButton_SetLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioButton.GetValue
	 * 		Flags  -> ()
	 */
	class FString URadioButton::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.GetValue");
		
		URadioButton_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioButton.GetSelected
	 * 		Flags  -> ()
	 */
	bool URadioButton::GetSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.GetSelected");
		
		URadioButton_GetSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioButton.GetLabel
	 * 		Flags  -> ()
	 */
	class FText URadioButton::GetLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioButton.GetLabel");
		
		URadioButton_GetLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URadioButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadioButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.RadioButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioSelect.SetOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSettingOption>                      InOptions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URadioSelect::SetOptions(TArray<struct FSettingOption> InOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.SetOptions");
		
		URadioSelect_SetOptions_Params params {};
		params.InOptions = InOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioSelect.Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadioSelect::Select(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.Select");
		
		URadioSelect_Select_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioSelect.OnButtonCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URadioButton*                                Button                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPanelSlot*                                  NewSlot                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadioSelect::OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.OnButtonCreated");
		
		URadioSelect_OnButtonCreated_Params params {};
		params.Button = Button;
		params.NewSlot = NewSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioSelect.GetRadioButtonWidgets
	 * 		Flags  -> ()
	 */
	TArray<class URadioButton*> URadioSelect::GetRadioButtonWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.GetRadioButtonWidgets");
		
		URadioSelect_GetRadioButtonWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioSelect.GetOptions
	 * 		Flags  -> ()
	 */
	TArray<struct FSettingOption> URadioSelect::GetOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.GetOptions");
		
		URadioSelect_GetOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioSelect.ButtonSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadioSelect::ButtonSelected(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelect.ButtonSelected");
		
		URadioSelect_ButtonSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URadioSelect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadioSelect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.RadioSelect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.RadioSelectSetting.RadioSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URadioSelectSetting::RadioSelectionChanged(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.RadioSelectSetting.RadioSelectionChanged");
		
		URadioSelectSetting_RadioSelectionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URadioSelectSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadioSelectSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.RadioSelectSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingOptionFactory.ConstructOptions
	 * 		Flags  -> ()
	 */
	TArray<struct FSettingOption> USettingOptionFactory::ConstructOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingOptionFactory.ConstructOptions");
		
		USettingOptionFactory_ConstructOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USettingOptionFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USettingOptionFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.SettingOptionFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UResolutionOptionFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResolutionOptionFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.ResolutionOptionFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UResolutionStringUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResolutionStringUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.ResolutionStringUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingValueMask.RecombineValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SettingValue                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConsoleValue                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USettingValueMask::RecombineValues(const class FString& SettingValue, const class FString& ConsoleValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingValueMask.RecombineValues");
		
		USettingValueMask_RecombineValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingValueMask.MaskValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConsoleValue                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USettingValueMask::MaskValue(const class FString& ConsoleValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingValueMask.MaskValue");
		
		USettingValueMask_MaskValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USettingValueMask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USettingValueMask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.SettingValueMask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UResolutionValueMask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResolutionValueMask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.ResolutionValueMask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingContainerUtils.SaveChildSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingContainerUtils::SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.SaveChildSettings");
		
		USettingContainerUtils_SaveChildSettings_Params params {};
		params.UserWidget = UserWidget;
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingContainerUtils.GetChildSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UAutoSettingWidget*> USettingContainerUtils::GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.GetChildSettings");
		
		USettingContainerUtils_GetChildSettings_Params params {};
		params.UserWidget = UserWidget;
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USettingContainerUtils::DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange");
		
		USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Params params {};
		params.UserWidget = UserWidget;
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USettingContainerUtils::DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange");
		
		USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Params params {};
		params.UserWidget = UserWidget;
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingContainerUtils.CancelChildSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingContainerUtils::CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.CancelChildSettings");
		
		USettingContainerUtils_CancelChildSettings_Params params {};
		params.UserWidget = UserWidget;
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingContainerUtils.ApplyChildSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingContainerUtils::ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingContainerUtils.ApplyChildSettings");
		
		USettingContainerUtils_ApplyChildSettings_Params params {};
		params.UserWidget = UserWidget;
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USettingContainerUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USettingContainerUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.SettingContainerUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.SaveSettingStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoSettingData                            SettingData                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::SaveSettingStatic(const struct FAutoSettingData& SettingData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.SaveSettingStatic");
		
		USettingsManager_SaveSettingStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DefaultValue                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Help                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedCallback                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               CallbackImmediately                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::RegisterStringCVarSettingWithCallback(const class FName& Name, const class FString& DefaultValue, const class FString& Help, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback");
		
		USettingsManager_RegisterStringCVarSettingWithCallback_Params params {};
		params.CallbackImmediately = CallbackImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.RegisterStringCVarSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DefaultValue                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Help                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::RegisterStringCVarSetting(const class FName& Name, const class FString& DefaultValue, const class FString& Help)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterStringCVarSetting");
		
		USettingsManager_RegisterStringCVarSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Help                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedCallback                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               CallbackImmediately                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::RegisterIntCVarSettingWithCallback(const class FName& Name, int32_t DefaultValue, const class FString& Help, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback");
		
		USettingsManager_RegisterIntCVarSettingWithCallback_Params params {};
		params.DefaultValue = DefaultValue;
		params.CallbackImmediately = CallbackImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.RegisterIntCVarSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Help                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::RegisterIntCVarSetting(const class FName& Name, int32_t DefaultValue, const class FString& Help)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterIntCVarSetting");
		
		USettingsManager_RegisterIntCVarSetting_Params params {};
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Help                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedCallback                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               CallbackImmediately                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::RegisterFloatCVarSettingWithCallback(const class FName& Name, float DefaultValue, const class FString& Help, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback");
		
		USettingsManager_RegisterFloatCVarSettingWithCallback_Params params {};
		params.DefaultValue = DefaultValue;
		params.CallbackImmediately = CallbackImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.RegisterFloatCVarSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Help                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::RegisterFloatCVarSetting(const class FName& Name, float DefaultValue, const class FString& Help)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterFloatCVarSetting");
		
		USettingsManager_RegisterFloatCVarSetting_Params params {};
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Help                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedCallback                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               CallbackImmediately                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::RegisterBoolCVarSettingWithCallback(const class FName& Name, bool DefaultValue, const class FString& Help, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback");
		
		USettingsManager_RegisterBoolCVarSettingWithCallback_Params params {};
		params.DefaultValue = DefaultValue;
		params.CallbackImmediately = CallbackImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.RegisterBoolCVarSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Help                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::RegisterBoolCVarSetting(const class FName& Name, bool DefaultValue, const class FString& Help)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.RegisterBoolCVarSetting");
		
		USettingsManager_RegisterBoolCVarSetting_Params params {};
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreferConfigValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USettingsManager::GetValue(const class FName& Key, bool bPreferConfigValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.GetValue");
		
		USettingsManager_GetValue_Params params {};
		params.bPreferConfigValue = bPreferConfigValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.AutoDetectSettingsStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WorkScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CPUMultiplier                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GPUMultiplier                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::AutoDetectSettingsStatic(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.AutoDetectSettingsStatic");
		
		USettingsManager_AutoDetectSettingsStatic_Params params {};
		params.WorkScale = WorkScale;
		params.CPUMultiplier = CPUMultiplier;
		params.GPUMultiplier = GPUMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SettingsManager.ApplySettingStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoSettingData                            SettingData                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void USettingsManager::ApplySettingStatic(const struct FAutoSettingData& SettingData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SettingsManager.ApplySettingStatic");
		
		USettingsManager_ApplySettingStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USettingsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USettingsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.SettingsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.Spinner.SelectValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinner::SelectValue(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.SelectValue");
		
		USpinner_SelectValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.Spinner.SelectIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinner::SelectIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.SelectIndex");
		
		USpinner_SelectIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.Spinner.Previous
	 * 		Flags  -> ()
	 */
	void USpinner::Previous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.Previous");
		
		USpinner_Previous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.Spinner.OnSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSettingOption                              SelectedOption                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void USpinner::OnSelectionChanged(const struct FSettingOption& SelectedOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.OnSelectionChanged");
		
		USpinner_OnSelectionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.Spinner.Next
	 * 		Flags  -> ()
	 */
	void USpinner::Next()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.Next");
		
		USpinner_Next_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.Spinner.HasValidPrevious
	 * 		Flags  -> ()
	 */
	bool USpinner::HasValidPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.HasValidPrevious");
		
		USpinner_HasValidPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.Spinner.HasValidNext
	 * 		Flags  -> ()
	 */
	bool USpinner::HasValidNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.HasValidNext");
		
		USpinner_HasValidNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.Spinner.GetCurrentOption
	 * 		Flags  -> ()
	 */
	struct FSettingOption USpinner::GetCurrentOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.GetCurrentOption");
		
		USpinner_GetCurrentOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.Spinner.GetCurrentIndex
	 * 		Flags  -> ()
	 */
	int32_t USpinner::GetCurrentIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.Spinner.GetCurrentIndex");
		
		USpinner_GetCurrentIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpinner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpinner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.Spinner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpinnerSetting::SpinnerSelectionChanged(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged");
		
		USpinnerSetting_SpinnerSelectionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpinnerSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpinnerSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.SpinnerSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWindowModeValueMask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindowModeValueMask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettings.WindowModeValueMask");
		return ptr;
	}

}


