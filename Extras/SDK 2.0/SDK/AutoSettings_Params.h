#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AutoSettings.AutoSettingWidget.UpdateSelection
	 */
	struct UAutoSettingWidget_UpdateSelection_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.AutoSettingWidget.Save
	 */
	struct UAutoSettingWidget_Save_Params
	{
	};

	/**
	 * Function AutoSettings.AutoSettingWidget.HasUnsavedChange
	 */
	struct UAutoSettingWidget_HasUnsavedChange_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.AutoSettingWidget.HasUnappliedChange
	 */
	struct UAutoSettingWidget_HasUnappliedChange_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.AutoSettingWidget.Cancel
	 */
	struct UAutoSettingWidget_Cancel_Params
	{
	};

	/**
	 * Function AutoSettings.AutoSettingWidget.ApplySettingValue
	 */
	struct UAutoSettingWidget_ApplySettingValue_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSaveIfPossible;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.AutoSettingWidget.Apply
	 */
	struct UAutoSettingWidget_Apply_Params
	{
	};

	/**
	 * Function AutoSettings.ToggleSetting.UpdateToggleState
	 */
	struct UToggleSetting_UpdateToggleState_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ToggleSetting.ToggleStateUpdated
	 */
	struct UToggleSetting_ToggleStateUpdated_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged
	 */
	struct UCheckBoxSetting_CheckBoxStateChanged_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SelectSetting.UpdateOptions
	 */
	struct USelectSetting_UpdateOptions_Params
	{
	public:
		TArray<struct FSettingOption>                              InOptions;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SelectSetting.RegenerateOptions
	 */
	struct USelectSetting_RegenerateOptions_Params
	{
	};

	/**
	 * Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged
	 */
	struct UComboBoxSetting_ComboBoxSelectionChanged_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		SlateCore_ESelectInfo                                      SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ConsoleUtils.SetStringCVar
	 */
	struct UConsoleUtils_SetStringCVar_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ConsoleUtils.SetIntCVar
	 */
	struct UConsoleUtils_SetIntCVar_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ConsoleUtils.SetFloatCVar
	 */
	struct UConsoleUtils_SetFloatCVar_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ConsoleUtils.SetBoolCVar
	 */
	struct UConsoleUtils_SetBoolCVar_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ConsoleUtils.IsCVarRegistered
	 */
	struct UConsoleUtils_IsCVarRegistered_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ConsoleUtils.GetStringCVar
	 */
	struct UConsoleUtils_GetStringCVar_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ConsoleUtils.GetIntCVar
	 */
	struct UConsoleUtils_GetIntCVar_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ConsoleUtils.GetFloatCVar
	 */
	struct UConsoleUtils_GetFloatCVar_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.ConsoleUtils.GetBoolCVar
	 */
	struct UConsoleUtils_GetBoolCVar_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic
	 */
	struct UCVarChangeListenerManager_AddStringCVarCallbackStatic_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedCallback;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       CallbackImmediately;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic
	 */
	struct UCVarChangeListenerManager_AddIntCVarCallbackStatic_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedCallback;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       CallbackImmediately;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic
	 */
	struct UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedCallback;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       CallbackImmediately;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic
	 */
	struct UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedCallback;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       CallbackImmediately;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SliderSetting.UpdateSliderValue
	 */
	struct USliderSetting_UpdateSliderValue_Params
	{
	public:
		float                                                      NormalizedValue;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RawValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SliderSetting.SliderValueUpdated
	 */
	struct USliderSetting_SliderValueUpdated_Params
	{
	public:
		float                                                      NormalizedValue;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SliderSetting.ShouldSaveCurrentValue
	 */
	struct USliderSetting_ShouldSaveCurrentValue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SliderSetting.RawValueToNormalized
	 */
	struct USliderSetting_RawValueToNormalized_Params
	{
	public:
		float                                                      RawValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SliderSetting.OnSliderValueUpdated
	 */
	struct USliderSetting_OnSliderValueUpdated_Params
	{
	public:
		float                                                      NormalizedValue;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RawValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SliderSetting.NormalizedValueToRaw
	 */
	struct USliderSetting_NormalizedValueToRaw_Params
	{
	public:
		float                                                      NormalizedValue;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SliderSetting.ClampRawValue
	 */
	struct USliderSetting_ClampRawValue_Params
	{
	public:
		float                                                      RawValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.NativeSliderSetting.SliderValueChanged
	 */
	struct UNativeSliderSetting_SliderValueChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd
	 */
	struct UNativeSliderSetting_SliderMouseCaptureEnd_Params
	{
	};

	/**
	 * Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin
	 */
	struct UNativeSliderSetting_SliderMouseCaptureBegin_Params
	{
	};

	/**
	 * Function AutoSettings.RadioButton.UpdateSelected
	 */
	struct URadioButton_UpdateSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioButton.UpdateLabel
	 */
	struct URadioButton_UpdateLabel_Params
	{
	public:
		class FText                                                InLabel;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioButton.TriggerSelection
	 */
	struct URadioButton_TriggerSelection_Params
	{
	};

	/**
	 * Function AutoSettings.RadioButton.SetValue
	 */
	struct URadioButton_SetValue_Params
	{
	public:
		class FString                                              InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioButton.SetSelected
	 */
	struct URadioButton_SetSelected_Params
	{
	public:
		bool                                                       InSelected;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioButton.SetLabel
	 */
	struct URadioButton_SetLabel_Params
	{
	public:
		class FText                                                InLabel;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioButton.GetValue
	 */
	struct URadioButton_GetValue_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioButton.GetSelected
	 */
	struct URadioButton_GetSelected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioButton.GetLabel
	 */
	struct URadioButton_GetLabel_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioSelect.SetOptions
	 */
	struct URadioSelect_SetOptions_Params
	{
	public:
		TArray<struct FSettingOption>                              InOptions;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioSelect.Select
	 */
	struct URadioSelect_Select_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioSelect.OnButtonCreated
	 */
	struct URadioSelect_OnButtonCreated_Params
	{
	public:
		class URadioButton*                                        Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPanelSlot*                                          NewSlot;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioSelect.GetRadioButtonWidgets
	 */
	struct URadioSelect_GetRadioButtonWidgets_Params
	{
	public:
		TArray<class URadioButton*>                                ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioSelect.GetOptions
	 */
	struct URadioSelect_GetOptions_Params
	{
	public:
		TArray<struct FSettingOption>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioSelect.ButtonSelected
	 */
	struct URadioSelect_ButtonSelected_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.RadioSelectSetting.RadioSelectionChanged
	 */
	struct URadioSelectSetting_RadioSelectionChanged_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingOptionFactory.ConstructOptions
	 */
	struct USettingOptionFactory_ConstructOptions_Params
	{
	public:
		TArray<struct FSettingOption>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingValueMask.RecombineValues
	 */
	struct USettingValueMask_RecombineValues_Params
	{
	public:
		class FString                                              SettingValue;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ConsoleValue;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingValueMask.MaskValue
	 */
	struct USettingValueMask_MaskValue_Params
	{
	public:
		class FString                                              ConsoleValue;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingContainerUtils.SaveChildSettings
	 */
	struct USettingContainerUtils_SaveChildSettings_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             Parent;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingContainerUtils.GetChildSettings
	 */
	struct USettingContainerUtils_GetChildSettings_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             Parent;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UAutoSettingWidget*>                          ReturnValue;                                             // 0x0010(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange
	 */
	struct USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             Parent;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange
	 */
	struct USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             Parent;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingContainerUtils.CancelChildSettings
	 */
	struct USettingContainerUtils_CancelChildSettings_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             Parent;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingContainerUtils.ApplyChildSettings
	 */
	struct USettingContainerUtils_ApplyChildSettings_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             Parent;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.SaveSettingStatic
	 */
	struct USettingsManager_SaveSettingStatic_Params
	{
	public:
		struct FAutoSettingData                                    SettingData;                                             // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback
	 */
	struct USettingsManager_RegisterStringCVarSettingWithCallback_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DefaultValue;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Help;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedCallback;                                         // 0x0028(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       CallbackImmediately;                                     // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.RegisterStringCVarSetting
	 */
	struct USettingsManager_RegisterStringCVarSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DefaultValue;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Help;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback
	 */
	struct USettingsManager_RegisterIntCVarSettingWithCallback_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DefaultValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Help;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedCallback;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       CallbackImmediately;                                     // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.RegisterIntCVarSetting
	 */
	struct USettingsManager_RegisterIntCVarSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DefaultValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Help;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback
	 */
	struct USettingsManager_RegisterFloatCVarSettingWithCallback_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DefaultValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Help;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedCallback;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       CallbackImmediately;                                     // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.RegisterFloatCVarSetting
	 */
	struct USettingsManager_RegisterFloatCVarSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DefaultValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Help;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback
	 */
	struct USettingsManager_RegisterBoolCVarSettingWithCallback_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DefaultValue;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Help;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedCallback;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       CallbackImmediately;                                     // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.RegisterBoolCVarSetting
	 */
	struct USettingsManager_RegisterBoolCVarSetting_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DefaultValue;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Help;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.GetValue
	 */
	struct USettingsManager_GetValue_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPreferConfigValue;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.AutoDetectSettingsStatic
	 */
	struct USettingsManager_AutoDetectSettingsStatic_Params
	{
	public:
		int32_t                                                    WorkScale;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CPUMultiplier;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GPUMultiplier;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SettingsManager.ApplySettingStatic
	 */
	struct USettingsManager_ApplySettingStatic_Params
	{
	public:
		struct FAutoSettingData                                    SettingData;                                             // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.Spinner.SelectValue
	 */
	struct USpinner_SelectValue_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.Spinner.SelectIndex
	 */
	struct USpinner_SelectIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.Spinner.Previous
	 */
	struct USpinner_Previous_Params
	{
	};

	/**
	 * Function AutoSettings.Spinner.OnSelectionChanged
	 */
	struct USpinner_OnSelectionChanged_Params
	{
	public:
		struct FSettingOption                                      SelectedOption;                                          // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.Spinner.Next
	 */
	struct USpinner_Next_Params
	{
	};

	/**
	 * Function AutoSettings.Spinner.HasValidPrevious
	 */
	struct USpinner_HasValidPrevious_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.Spinner.HasValidNext
	 */
	struct USpinner_HasValidNext_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.Spinner.GetCurrentOption
	 */
	struct USpinner_GetCurrentOption_Params
	{
	public:
		struct FSettingOption                                      ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.Spinner.GetCurrentIndex
	 */
	struct USpinner_GetCurrentIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged
	 */
	struct USpinnerSetting_SpinnerSelectionChanged_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
