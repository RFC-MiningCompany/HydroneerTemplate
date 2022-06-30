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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AutoSettingsInput.InputLabel
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UInputLabel : public UUserWidget
	{
	public:
		int32_t                                                    MappingGroup;                                            // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        KeyGroup;                                                // 0x0264(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePlayerKeyGroup;                                      // 0x026C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1AJ[0x3];                                   // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               IconTags;                                                // 0x0270(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void UpdateLabel();
		void MappingsChanged(class APlayerController* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.ActionLabel
	 * Size -> 0x0068 (FullSize[0x02F8] - InheritedSize[0x0290])
	 */
	class UActionLabel : public UInputLabel
	{
	public:
		class FName                                                ActionName;                                              // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              KeyLabelWidgetClass;                                     // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              KeySeparatorWidgetClass;                                 // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPanelWidget*                                        KeyContainer;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UKeyLabel*                                           PrimaryKeyLabel;                                         // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UKeyLabel*                                           ShiftLabel;                                              // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UKeyLabel*                                           CtrlLabel;                                               // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UKeyLabel*                                           AltLabel;                                                // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UKeyLabel*                                           CmdLabel;                                                // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidget*                                             ShiftSeparator;                                          // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidget*                                             CtrlSeparator;                                           // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidget*                                             AltSeparator;                                            // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidget*                                             CmdSeparator;                                            // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.InputMapping
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class UInputMapping : public UUserWidget
	{
	public:
		int32_t                                                    MappingGroup;                                            // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        KeyGroup;                                                // 0x0264(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TN6D[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               IconTags;                                                // 0x0270(0x0020) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UBindCaptureButton*                                  BindCaptureButton;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdateMapping();
		void UpdateLabel();
		void ChordCaptured(const struct FCapturedInput& CapturedInput);
		void BindChord(const struct FCapturedInput& CapturedInput);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.ActionMapping
	 * Size -> 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
	 */
	class UActionMapping : public UInputMapping
	{
	public:
		class FName                                                ActionName;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UActionLabel*                                        ActionLabel;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.AutoSettingsInputConfig
	 * Size -> 0x0150 (FullSize[0x0188] - InheritedSize[0x0038])
	 */
	class UAutoSettingsInputConfig : public UDeveloperSettings
	{
	public:
		unsigned char                                              UnknownData_4WST[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoInitializePlayerInputOverrides;                     // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowModifierKeys;                                       // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJWC[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ShiftModifierOverrideText;                               // 0x0048(0x0018) Edit, Config, NativeAccessSpecifierPublic
		class FText                                                CtrlModifierOverrideText;                                // 0x0060(0x0018) Edit, Config, NativeAccessSpecifierPublic
		class FText                                                AltModifierOverrideText;                                 // 0x0078(0x0018) Edit, Config, NativeAccessSpecifierPublic
		class FText                                                CmdModifierOverrideText;                                 // 0x0090(0x0018) Edit, Config, NativeAccessSpecifierPublic
		TArray<struct FInputMappingPreset>                         InputPresets;                                            // 0x00A8(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       AllowMultipleBindingsPerKey;                             // 0x00B8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKRG[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMappingGroupLink>                           MappingGroupLinks;                                       // 0x00C0(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<class FName>                                        PreservedActions;                                        // 0x00D0(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<class FName>                                        PreservedAxes;                                           // 0x00E0(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FKeyIconSet>                                 KeyIconSets;                                             // 0x00F0(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FKeyFriendlyName>                            KeyFriendlyNames;                                        // 0x0100(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FKeyGroup>                                   KeyGroups;                                               // 0x0110(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        AllowedKeys;                                             // 0x0120(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        DisallowedKeys;                                          // 0x0130(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        BindingEscapeKeys;                                       // 0x0140(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		float                                                      MouseMoveCaptureDistance;                                // 0x0150(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7KO[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAxisAssociation>                            AxisAssociations;                                        // 0x0158(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<class FName>                                        BlacklistedActions;                                      // 0x0168(0x0010) ZeroConstructor, Config, Deprecated, Protected, NativeAccessSpecifierProtected
		TArray<class FName>                                        BlacklistedAxes;                                         // 0x0178(0x0010) ZeroConstructor, Config, Deprecated, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.AutoSettingsInputConfigInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutoSettingsInputConfigInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.AutoSettingsInputProjectConfig
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UAutoSettingsInputProjectConfig : public UAutoSettingsInputConfig
	{
	public:
		TArray<class UTexture*> LoadKeyIcons(const struct FGameplayTagContainer& KeyIconTags);
		struct FGameplayTag GetKeyGroupStatic(const struct FKey& Key);
		class FText GetKeyFriendlyNameStatic(const struct FKey& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.AutoSettingsInputSubsystem
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAutoSettingsInputSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_GUY6[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.AutoSettingsInputValidationSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAutoSettingsInputValidationSubsystem : public UGameInstanceSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.AutoSettingsPlayer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutoSettingsPlayer : public UInterface
	{
	public:
		void SaveInputMappings(const struct FPlayerInputMappings& InputMappings);
		class FString GetUniquePlayerIdentifier();
		bool GetInputMappings(struct FPlayerInputMappings* InputMappings);
		struct FInputMappingPreset GetDefaultInputMappingPreset();
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.AxisLabel
	 * Size -> 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
	 */
	class UAxisLabel : public UInputLabel
	{
	public:
		class FName                                                AxisName;                                                // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGOP[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKeyLabel*                                           KeyLabel;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.AxisMapping
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class UAxisMapping : public UInputMapping
	{
	public:
		class FName                                                AxisName;                                                // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQ2U[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAxisLabel*                                          AxisLabel;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.BindCaptureButton
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UBindCaptureButton : public UUserWidget
	{
	public:
		struct FGameplayTag                                        KeyGroup;                                                // 0x0260(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BindCapturePromptClass;                                  // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CapturePromptZOrder;                                     // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J54U[0x14];                                  // 0x0274(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBindCapturePrompt*                                  Prompt;                                                  // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UBindCapturePrompt* StartCapture();
		void InitializePrompt(class UBindCapturePrompt* PromptWidget);
		void ChordCaptured(const struct FCapturedInput& CapturedInput);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.BindCapturePrompt
	 * Size -> 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
	 */
	class UBindCapturePrompt : public UUserWidget
	{
	public:
		bool                                                       bIgnoreGameViewportInputWhileCapturing;                  // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictKeyGroup;                                       // 0x0261(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBindingCaptureMode                                        CaptureMode;                                             // 0x0262(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60BT[0x1];                                   // 0x0263(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        KeyGroup;                                                // 0x0264(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOZ2[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChordCaptured;                                         // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChordRejected;                                         // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCapturePromptClosed;                                   // 0x0290(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        KeysDown;                                                // 0x02A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       PreviousIgnoreInput;                                     // 0x02B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F1OM[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           AccumulatedMouseDelta;                                   // 0x02B4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JZHN[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		bool IsKeyAllowed(const struct FKey& PrimaryKey);
		struct FGameplayTag GetKeyGroup();
		void Cancel();
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.GlobalKeyIconTagManager
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGlobalKeyIconTagManager : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnGlobalKeyIconTagsModified;                             // 0x0028(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GlobalKeyIconTags;                                       // 0x0038(0x0020) NativeAccessSpecifierPrivate

	public:
		void SetGlobalKeyIconTags(const struct FGameplayTagContainer& InGlobalIconTags);
		class UTexture* GetIconForKey(const struct FKey& InKey, const struct FGameplayTagContainer& IconTags, float AxisScale);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.InputMappingManager
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UInputMappingManager : public UEngineSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnMappingsChanged;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FPlayerInputMappings>                        PlayerInputOverrides;                                    // 0x0040(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<class APlayerController*>                           RegisteredPlayerControllers;                             // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void SetPlayerKeyGroupStatic(class APlayerController* Player, const struct FGameplayTag& KeyGroup);
		void SetPlayerInputPresetStatic(class APlayerController* Player, const struct FInputMappingPreset& Preset);
		void SetPlayerInputPresetByTag(class APlayerController* Player, const struct FGameplayTag& PresetTag);
		void OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor);
		bool InitializePlayerInputOverridesStatic(class APlayerController* Player);
		void GetPlayerMappingsByKey(class APlayerController* Player, const struct FKey& Key, TArray<struct FInputActionKeyMapping>* Actions, TArray<struct FInputAxisKeyMapping>* Axes);
		struct FPlayerInputMappings GetPlayerInputMappingsStatic(class APlayerController* Player);
		struct FInputAxisKeyMapping GetPlayerAxisMappingStatic(class APlayerController* Player, const class FName& AxisName, float Scale, int32_t MappingGroup);
		TArray<struct FInputAxisKeyMapping> GetPlayerAxisMappings(class APlayerController* Player, const class FName& AxisName, float Scale, int32_t MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
		struct FInputAxisKeyMapping GetPlayerAxisMapping(class APlayerController* Player, const class FName& AxisName, float Scale, int32_t MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
		struct FInputActionKeyMapping GetPlayerActionMappingStatic(class APlayerController* Player, const class FName& ActionName, int32_t MappingGroup);
		TArray<struct FInputActionKeyMapping> GetPlayerActionMappings(class APlayerController* Player, const class FName& ActionName, int32_t MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
		struct FInputActionKeyMapping GetPlayerActionMapping(class APlayerController* Player, const class FName& ActionName, int32_t MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
		TArray<struct FInputMappingPreset> GetDefaultInputPresets();
		void AddPlayerAxisOverrideStatic(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup);
		void AddPlayerAxisOverride(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup);
		void AddPlayerActionOverrideStatic(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup);
		void AddPlayerActionOverride(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup);
		static UClass* StaticClass();
	};

	/**
	 * Class AutoSettingsInput.KeyLabel
	 * Size -> 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
	 */
	class UKeyLabel : public UUserWidget
	{
	public:
		class FText                                                KeyInvalidText;                                          // 0x0260(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                LabelOverride;                                           // 0x0278(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0290(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxisScale;                                               // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UO1G[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               IconTags;                                                // 0x02B0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void UpdateKeyLabel();
		void OnGlobalKeyIconTagsModified();
		bool HasValidKey();
		bool HasIcon();
		ESlateVisibility GetIconVisibility();
		struct FSlateBrush GetIconBrush();
		class UTexture* GetIcon();
		ESlateVisibility GetDisplayNameVisibility();
		class FText GetDisplayName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
