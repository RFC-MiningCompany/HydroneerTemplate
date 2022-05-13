#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AutoSettings.AutoSettingsConfig
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UAutoSettingsConfig : public UDeveloperSettings
	{
	public:
		class FString                                              SettingsIniName;                                         // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SettingsSectionName;                                     // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.AutoSettingWidget
	 * Size -> 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
	 */
	class UAutoSettingWidget : public UUserWidget
	{
	public:
		class FName                                                CVarName;                                                // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ValueMask;                                               // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSave;                                               // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoApply;                                              // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBU8[0x6];                                   // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SettingTags;                                             // 0x0278(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              CurrentValue;                                            // 0x0298(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasUnappliedChange;                                     // 0x02A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasUnsavedChange;                                       // 0x02A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUpdatingSettingSelection;                               // 0x02AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_580D[0x5];                                   // 0x02AB(0x0005) MISSED OFFSET (PADDING)

	public:
		void UpdateSelection(const class FString& Value);
		void Save();
		bool HasUnsavedChange();
		bool HasUnappliedChange();
		void Cancel();
		void ApplySettingValue(const class FString& Value, bool bSaveIfPossible);
		void Apply();
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.ToggleSetting
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class UToggleSetting : public UAutoSettingWidget
	{
	public:
		void UpdateToggleState(bool State);
		void ToggleStateUpdated(bool State);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.CheckBoxSetting
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UCheckBoxSetting : public UToggleSetting
	{
	public:
		class UCheckBox*                                           CheckBox;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void CheckBoxStateChanged(bool IsChecked);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.SelectSetting
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class USelectSetting : public UAutoSettingWidget
	{
	public:
		TArray<struct FSettingOption>                              Options;                                                 // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              OptionFactory;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdatingSettingOptions;                                 // 0x02C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_644C[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateOptions(TArray<struct FSettingOption> InOptions);
		void RegenerateOptions();
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.ComboBoxSetting
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UComboBoxSetting : public USelectSetting
	{
	public:
		class UComboBoxString*                                     ComboBox;                                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ComboBoxSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.ConsoleUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConsoleUtils : public UBlueprintFunctionLibrary
	{
	public:
		void SetStringCVar(const class FName& Name, const class FString& Value);
		void SetIntCVar(const class FName& Name, int32_t Value);
		void SetFloatCVar(const class FName& Name, float Value);
		void SetBoolCVar(const class FName& Name, bool Value);
		bool IsCVarRegistered(const class FName& Name);
		class FString GetStringCVar(const class FName& Name);
		int32_t GetIntCVar(const class FName& Name);
		float GetFloatCVar(const class FName& Name);
		bool GetBoolCVar(const class FName& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.CVarChangeListener
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UCVarChangeListener : public UObject
	{
	public:
		unsigned char                                              UnknownData_DWU7[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.CVarChangeListenerManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UCVarChangeListenerManager : public UObject
	{
	public:
		TMap<class FName, class UCVarChangeListener*>              Listeners;                                               // 0x0028(0x0050) NativeAccessSpecifierPrivate

	public:
		void AddStringCVarCallbackStatic(const class FName& Name, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately);
		void AddIntCVarCallbackStatic(const class FName& Name, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately);
		void AddFloatCVarCallbackStatic(const class FName& Name, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately);
		void AddBoolCVarCallbackStatic(const class FName& Name, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.SliderSetting
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class USliderSetting : public UAutoSettingWidget
	{
	public:
		float                                                      LeftValue;                                               // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightValue;                                              // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateSliderValue(float NormalizedValue, float RawValue);
		void SliderValueUpdated(float NormalizedValue);
		bool ShouldSaveCurrentValue();
		float RawValueToNormalized(float RawValue);
		void OnSliderValueUpdated(float NormalizedValue, float RawValue);
		float NormalizedValueToRaw(float NormalizedValue);
		float ClampRawValue(float RawValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.NativeSliderSetting
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class UNativeSliderSetting : public USliderSetting
	{
	public:
		class USlider*                                             Slider;                                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bMouseCaptureInProgress;                                 // 0x02C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XU85[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (PADDING)

	public:
		void SliderValueChanged(float NewValue);
		void SliderMouseCaptureEnd();
		void SliderMouseCaptureBegin();
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.RadioButton
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class URadioButton : public UUserWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FText                                                Label;                                                   // 0x0270(0x0018) BlueprintVisible, BlueprintReadOnly, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected
		class FString                                              Value;                                                   // 0x0288(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Selected;                                                // 0x0298(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KU01[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateSelected(bool InSelected);
		void UpdateLabel(const class FText& InLabel);
		void TriggerSelection();
		void SetValue(const class FString& InValue);
		void SetSelected(bool InSelected);
		void SetLabel(const class FText& InLabel);
		class FString GetValue();
		bool GetSelected();
		class FText GetLabel();
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.RadioSelect
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class URadioSelect : public UUserWidget
	{
	public:
		TArray<struct FSettingOption>                              Options;                                                 // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              RadioButtonClass;                                        // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SelectionChangedEvent;                                   // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UPanelWidget*                                        ButtonContainer;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class URadioButton*>                                RadioButtons;                                            // 0x0290(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetOptions(TArray<struct FSettingOption> InOptions);
		void Select(const class FString& Value);
		void OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot);
		TArray<class URadioButton*> GetRadioButtonWidgets();
		TArray<struct FSettingOption> GetOptions();
		void ButtonSelected(const class FString& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.RadioSelectSetting
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class URadioSelectSetting : public USelectSetting
	{
	public:
		class UClass*                                              RadioButtonClass;                                        // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URadioSelect*                                        RadioSelect;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void RadioSelectionChanged(const class FString& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.SettingOptionFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USettingOptionFactory : public UObject
	{
	public:
		TArray<struct FSettingOption> ConstructOptions();
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.ResolutionOptionFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UResolutionOptionFactory : public USettingOptionFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.ResolutionStringUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UResolutionStringUtils : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.SettingValueMask
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USettingValueMask : public UObject
	{
	public:
		class FString RecombineValues(const class FString& SettingValue, const class FString& ConsoleValue);
		class FString MaskValue(const class FString& ConsoleValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.ResolutionValueMask
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UResolutionValueMask : public USettingValueMask
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.SettingContainerUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USettingContainerUtils : public UBlueprintFunctionLibrary
	{
	public:
		void SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
		TArray<class UAutoSettingWidget*> GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
		bool DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent);
		bool DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent);
		void CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
		void ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.SettingsManager
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USettingsManager : public UEngineSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnSettingSaved;                                          // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              IniFilename;                                             // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SaveSettingStatic(const struct FAutoSettingData& SettingData);
		void RegisterStringCVarSettingWithCallback(const class FName& Name, const class FString& DefaultValue, const class FString& Help, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately);
		void RegisterStringCVarSetting(const class FName& Name, const class FString& DefaultValue, const class FString& Help);
		void RegisterIntCVarSettingWithCallback(const class FName& Name, int32_t DefaultValue, const class FString& Help, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately);
		void RegisterIntCVarSetting(const class FName& Name, int32_t DefaultValue, const class FString& Help);
		void RegisterFloatCVarSettingWithCallback(const class FName& Name, float DefaultValue, const class FString& Help, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately);
		void RegisterFloatCVarSetting(const class FName& Name, float DefaultValue, const class FString& Help);
		void RegisterBoolCVarSettingWithCallback(const class FName& Name, bool DefaultValue, const class FString& Help, const class FScriptDelegate& ChangedCallback, bool CallbackImmediately);
		void RegisterBoolCVarSetting(const class FName& Name, bool DefaultValue, const class FString& Help);
		class FString GetValue(const class FName& Key, bool bPreferConfigValue);
		void AutoDetectSettingsStatic(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier);
		void ApplySettingStatic(const struct FAutoSettingData& SettingData);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.Spinner
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class USpinner : public UUserWidget
	{
	public:
		TArray<struct FSettingOption>                              Options;                                                 // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAllowWrapping;                                          // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARGE[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SelectionChangedEvent;                                   // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGJU[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (PADDING)

	public:
		void SelectValue(const class FString& Value);
		void SelectIndex(int32_t Index);
		void Previous();
		void OnSelectionChanged(const struct FSettingOption& SelectedOption);
		void Next();
		bool HasValidPrevious();
		bool HasValidNext();
		struct FSettingOption GetCurrentOption();
		int32_t GetCurrentIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.SpinnerSetting
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class USpinnerSetting : public USelectSetting
	{
	public:
		class USpinner*                                            Spinner;                                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SpinnerSelectionChanged(const class FString& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettings.WindowModeValueMask
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWindowModeValueMask : public USettingValueMask
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
