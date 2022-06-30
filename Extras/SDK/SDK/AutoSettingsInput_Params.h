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
	 * Function AutoSettingsInput.InputLabel.UpdateLabel
	 */
	struct UInputLabel_UpdateLabel_Params
	{
	};

	/**
	 * Function AutoSettingsInput.InputLabel.MappingsChanged
	 */
	struct UInputLabel_MappingsChanged_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMapping.UpdateMapping
	 */
	struct UInputMapping_UpdateMapping_Params
	{
	};

	/**
	 * Function AutoSettingsInput.InputMapping.UpdateLabel
	 */
	struct UInputMapping_UpdateLabel_Params
	{
	};

	/**
	 * Function AutoSettingsInput.InputMapping.ChordCaptured
	 */
	struct UInputMapping_ChordCaptured_Params
	{
	public:
		struct FCapturedInput                                      CapturedInput;                                           // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMapping.BindChord
	 */
	struct UInputMapping_BindChord_Params
	{
	public:
		struct FCapturedInput                                      CapturedInput;                                           // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.AutoSettingsInputProjectConfig.LoadKeyIcons
	 */
	struct UAutoSettingsInputProjectConfig_LoadKeyIcons_Params
	{
	public:
		struct FGameplayTagContainer                               KeyIconTags;                                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		TArray<class UTexture*>                                    ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyGroupStatic
	 */
	struct UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyFriendlyNameStatic
	 */
	struct UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.AutoSettingsPlayer.SaveInputMappings
	 */
	struct UAutoSettingsPlayer_SaveInputMappings_Params
	{
	public:
		struct FPlayerInputMappings                                InputMappings;                                           // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.AutoSettingsPlayer.GetUniquePlayerIdentifier
	 */
	struct UAutoSettingsPlayer_GetUniquePlayerIdentifier_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.AutoSettingsPlayer.GetInputMappings
	 */
	struct UAutoSettingsPlayer_GetInputMappings_Params
	{
	public:
		struct FPlayerInputMappings                                InputMappings;                                           // 0x0000(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.AutoSettingsPlayer.GetDefaultInputMappingPreset
	 */
	struct UAutoSettingsPlayer_GetDefaultInputMappingPreset_Params
	{
	public:
		struct FInputMappingPreset                                 ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.BindCaptureButton.StartCapture
	 */
	struct UBindCaptureButton_StartCapture_Params
	{
	public:
		class UBindCapturePrompt*                                  ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.BindCaptureButton.InitializePrompt
	 */
	struct UBindCaptureButton_InitializePrompt_Params
	{
	public:
		class UBindCapturePrompt*                                  PromptWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.BindCaptureButton.ChordCaptured
	 */
	struct UBindCaptureButton_ChordCaptured_Params
	{
	public:
		struct FCapturedInput                                      CapturedInput;                                           // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.SetPlayerKeyGroupStatic
	 */
	struct UInputMappingManager_SetPlayerKeyGroupStatic_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        KeyGroup;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetStatic
	 */
	struct UInputMappingManager_SetPlayerInputPresetStatic_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputMappingPreset                                 Preset;                                                  // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetByTag
	 */
	struct UInputMappingManager_SetPlayerInputPresetByTag_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        PresetTag;                                               // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.OnRegisteredPlayerControllerDestroyed
	 */
	struct UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.InitializePlayerInputOverridesStatic
	 */
	struct UInputMappingManager_InitializePlayerInputOverridesStatic_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.GetPlayerMappingsByKey
	 */
	struct UInputMappingManager_GetPlayerMappingsByKey_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FInputActionKeyMapping>                      Actions;                                                 // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FInputAxisKeyMapping>                        Axes;                                                    // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.GetPlayerInputMappingsStatic
	 */
	struct UInputMappingManager_GetPlayerInputMappingsStatic_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlayerInputMappings                                ReturnValue;                                             // 0x0008(0x00A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappingStatic
	 */
	struct UInputMappingManager_GetPlayerAxisMappingStatic_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AxisName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputAxisKeyMapping                                ReturnValue;                                             // 0x0018(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappings
	 */
	struct UInputMappingManager_GetPlayerAxisMappings_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AxisName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        KeyGroup;                                                // 0x0018(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePlayerKeyGroup;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FInputAxisKeyMapping>                        ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMapping
	 */
	struct UInputMappingManager_GetPlayerAxisMapping_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AxisName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        KeyGroup;                                                // 0x0018(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePlayerKeyGroup;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputAxisKeyMapping                                ReturnValue;                                             // 0x0028(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappingStatic
	 */
	struct UInputMappingManager_GetPlayerActionMappingStatic_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionKeyMapping                              ReturnValue;                                             // 0x0018(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappings
	 */
	struct UInputMappingManager_GetPlayerActionMappings_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        KeyGroup;                                                // 0x0014(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePlayerKeyGroup;                                      // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FInputActionKeyMapping>                      ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.GetPlayerActionMapping
	 */
	struct UInputMappingManager_GetPlayerActionMapping_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        KeyGroup;                                                // 0x0014(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePlayerKeyGroup;                                      // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionKeyMapping                              ReturnValue;                                             // 0x0020(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.GetDefaultInputPresets
	 */
	struct UInputMappingManager_GetDefaultInputPresets_Params
	{
	public:
		TArray<struct FInputMappingPreset>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverrideStatic
	 */
	struct UInputMappingManager_AddPlayerAxisOverrideStatic_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputAxisKeyMapping                                NewMapping;                                              // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAnyKeyGroup;                                            // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverride
	 */
	struct UInputMappingManager_AddPlayerAxisOverride_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputAxisKeyMapping                                NewMapping;                                              // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAnyKeyGroup;                                            // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverrideStatic
	 */
	struct UInputMappingManager_AddPlayerActionOverrideStatic_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionKeyMapping                              NewMapping;                                              // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAnyKeyGroup;                                            // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverride
	 */
	struct UInputMappingManager_AddPlayerActionOverride_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionKeyMapping                              NewMapping;                                              // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    MappingGroup;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAnyKeyGroup;                                            // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.KeyLabel.UpdateKeyLabel
	 */
	struct UKeyLabel_UpdateKeyLabel_Params
	{
	};

	/**
	 * Function AutoSettingsInput.KeyLabel.OnGlobalKeyIconTagsModified
	 */
	struct UKeyLabel_OnGlobalKeyIconTagsModified_Params
	{
	};

	/**
	 * Function AutoSettingsInput.KeyLabel.HasValidKey
	 */
	struct UKeyLabel_HasValidKey_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.KeyLabel.HasIcon
	 */
	struct UKeyLabel_HasIcon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.KeyLabel.GetIconVisibility
	 */
	struct UKeyLabel_GetIconVisibility_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.KeyLabel.GetIconBrush
	 */
	struct UKeyLabel_GetIconBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.KeyLabel.GetIcon
	 */
	struct UKeyLabel_GetIcon_Params
	{
	public:
		class UTexture*                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.KeyLabel.GetDisplayNameVisibility
	 */
	struct UKeyLabel_GetDisplayNameVisibility_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.KeyLabel.GetDisplayName
	 */
	struct UKeyLabel_GetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.BindCapturePrompt.IsKeyAllowed
	 */
	struct UBindCapturePrompt_IsKeyAllowed_Params
	{
	public:
		struct FKey                                                PrimaryKey;                                              // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.BindCapturePrompt.GetKeyGroup
	 */
	struct UBindCapturePrompt_GetKeyGroup_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.BindCapturePrompt.Cancel
	 */
	struct UBindCapturePrompt_Cancel_Params
	{
	};

	/**
	 * Function AutoSettingsInput.GlobalKeyIconTagManager.SetGlobalKeyIconTags
	 */
	struct UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Params
	{
	public:
		struct FGameplayTagContainer                               InGlobalIconTags;                                        // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function AutoSettingsInput.GlobalKeyIconTagManager.GetIconForKey
	 */
	struct UGlobalKeyIconTagManager_GetIconForKey_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               IconTags;                                                // 0x0018(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      AxisScale;                                               // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
