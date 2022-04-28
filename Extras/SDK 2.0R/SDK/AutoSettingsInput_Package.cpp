/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * 		Name   -> Function AutoSettingsInput.InputLabel.UpdateLabel
	 * 		Flags  -> ()
	 */
	void UInputLabel::UpdateLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputLabel.UpdateLabel");
		
		UInputLabel_UpdateLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputLabel.MappingsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputLabel::MappingsChanged(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputLabel.MappingsChanged");
		
		UInputLabel_MappingsChanged_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInputLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputLabel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.InputLabel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActionLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionLabel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.ActionLabel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMapping.UpdateMapping
	 * 		Flags  -> ()
	 */
	void UInputMapping::UpdateMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMapping.UpdateMapping");
		
		UInputMapping_UpdateMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMapping.UpdateLabel
	 * 		Flags  -> ()
	 */
	void UInputMapping::UpdateLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMapping.UpdateLabel");
		
		UInputMapping_UpdateLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMapping.ChordCaptured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedInput                              CapturedInput                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UInputMapping::ChordCaptured(const struct FCapturedInput& CapturedInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMapping.ChordCaptured");
		
		UInputMapping_ChordCaptured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMapping.BindChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedInput                              CapturedInput                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UInputMapping::BindChord(const struct FCapturedInput& CapturedInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMapping.BindChord");
		
		UInputMapping_BindChord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInputMapping.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapping::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.InputMapping");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActionMapping.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionMapping::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.ActionMapping");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.AutoSettingsInputConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputConfigInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputConfigInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.AutoSettingsInputConfigInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsInputProjectConfig.LoadKeyIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       KeyIconTags                                                (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<class UTexture*> UAutoSettingsInputProjectConfig::LoadKeyIcons(const struct FGameplayTagContainer& KeyIconTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.AutoSettingsInputProjectConfig.LoadKeyIcons");
		
		UAutoSettingsInputProjectConfig_LoadKeyIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyGroupStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTag UAutoSettingsInputProjectConfig::GetKeyGroupStatic(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyGroupStatic");
		
		UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyFriendlyNameStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UAutoSettingsInputProjectConfig::GetKeyFriendlyNameStatic(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyFriendlyNameStatic");
		
		UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputProjectConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputProjectConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.AutoSettingsInputProjectConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.AutoSettingsInputSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputValidationSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputValidationSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.AutoSettingsInputValidationSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsPlayer.SaveInputMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerInputMappings                        InputMappings                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAutoSettingsPlayer::SaveInputMappings(const struct FPlayerInputMappings& InputMappings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.AutoSettingsPlayer.SaveInputMappings");
		
		UAutoSettingsPlayer_SaveInputMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsPlayer.GetUniquePlayerIdentifier
	 * 		Flags  -> ()
	 */
	class FString UAutoSettingsPlayer::GetUniquePlayerIdentifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.AutoSettingsPlayer.GetUniquePlayerIdentifier");
		
		UAutoSettingsPlayer_GetUniquePlayerIdentifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsPlayer.GetInputMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerInputMappings                        InputMappings                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UAutoSettingsPlayer::GetInputMappings(struct FPlayerInputMappings* InputMappings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.AutoSettingsPlayer.GetInputMappings");
		
		UAutoSettingsPlayer_GetInputMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputMappings != nullptr)
			*InputMappings = params.InputMappings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsPlayer.GetDefaultInputMappingPreset
	 * 		Flags  -> ()
	 */
	struct FInputMappingPreset UAutoSettingsPlayer::GetDefaultInputMappingPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.AutoSettingsPlayer.GetDefaultInputMappingPreset");
		
		UAutoSettingsPlayer_GetDefaultInputMappingPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.AutoSettingsPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAxisLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisLabel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.AxisLabel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAxisMapping.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisMapping::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.AxisMapping");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCaptureButton.StartCapture
	 * 		Flags  -> ()
	 */
	class UBindCapturePrompt* UBindCaptureButton::StartCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.BindCaptureButton.StartCapture");
		
		UBindCaptureButton_StartCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCaptureButton.InitializePrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBindCapturePrompt*                          PromptWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBindCaptureButton::InitializePrompt(class UBindCapturePrompt* PromptWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.BindCaptureButton.InitializePrompt");
		
		UBindCaptureButton_InitializePrompt_Params params {};
		params.PromptWidget = PromptWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCaptureButton.ChordCaptured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedInput                              CapturedInput                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UBindCaptureButton::ChordCaptured(const struct FCapturedInput& CapturedInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.BindCaptureButton.ChordCaptured");
		
		UBindCaptureButton_ChordCaptured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBindCaptureButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBindCaptureButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.BindCaptureButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCapturePrompt.IsKeyAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        PrimaryKey                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBindCapturePrompt::IsKeyAllowed(const struct FKey& PrimaryKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.BindCapturePrompt.IsKeyAllowed");
		
		UBindCapturePrompt_IsKeyAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCapturePrompt.GetKeyGroup
	 * 		Flags  -> ()
	 */
	struct FGameplayTag UBindCapturePrompt::GetKeyGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.BindCapturePrompt.GetKeyGroup");
		
		UBindCapturePrompt_GetKeyGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCapturePrompt.Cancel
	 * 		Flags  -> ()
	 */
	void UBindCapturePrompt::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.BindCapturePrompt.Cancel");
		
		UBindCapturePrompt_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBindCapturePrompt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBindCapturePrompt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.BindCapturePrompt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.GlobalKeyIconTagManager.SetGlobalKeyIconTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       InGlobalIconTags                                           (Parm, NativeAccessSpecifierPublic)
	 */
	void UGlobalKeyIconTagManager::SetGlobalKeyIconTags(const struct FGameplayTagContainer& InGlobalIconTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.GlobalKeyIconTagManager.SetGlobalKeyIconTags");
		
		UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.GlobalKeyIconTagManager.GetIconForKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       IconTags                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              AxisScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* UGlobalKeyIconTagManager::GetIconForKey(const struct FKey& InKey, const struct FGameplayTagContainer& IconTags, float AxisScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.GlobalKeyIconTagManager.GetIconForKey");
		
		UGlobalKeyIconTagManager_GetIconForKey_Params params {};
		params.AxisScale = AxisScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGlobalKeyIconTagManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalKeyIconTagManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.GlobalKeyIconTagManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.SetPlayerKeyGroupStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                KeyGroup                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::SetPlayerKeyGroupStatic(class APlayerController* Player, const struct FGameplayTag& KeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.SetPlayerKeyGroupStatic");
		
		UInputMappingManager_SetPlayerKeyGroupStatic_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputMappingPreset                         Preset                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::SetPlayerInputPresetStatic(class APlayerController* Player, const struct FInputMappingPreset& Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetStatic");
		
		UInputMappingManager_SetPlayerInputPresetStatic_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                PresetTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::SetPlayerInputPresetByTag(class APlayerController* Player, const struct FGameplayTag& PresetTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetByTag");
		
		UInputMappingManager_SetPlayerInputPresetByTag_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.OnRegisteredPlayerControllerDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.OnRegisteredPlayerControllerDestroyed");
		
		UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.InitializePlayerInputOverridesStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputMappingManager::InitializePlayerInputOverridesStatic(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.InitializePlayerInputOverridesStatic");
		
		UInputMappingManager_InitializePlayerInputOverridesStatic_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerMappingsByKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInputActionKeyMapping>              Actions                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInputAxisKeyMapping>                Axes                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::GetPlayerMappingsByKey(class APlayerController* Player, const struct FKey& Key, TArray<struct FInputActionKeyMapping>* Actions, TArray<struct FInputAxisKeyMapping>* Axes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.GetPlayerMappingsByKey");
		
		UInputMappingManager_GetPlayerMappingsByKey_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actions != nullptr)
			*Actions = params.Actions;
		if (Axes != nullptr)
			*Axes = params.Axes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerInputMappingsStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlayerInputMappings UInputMappingManager::GetPlayerInputMappingsStatic(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.GetPlayerInputMappingsStatic");
		
		UInputMappingManager_GetPlayerInputMappingsStatic_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappingStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AxisName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputAxisKeyMapping UInputMappingManager::GetPlayerAxisMappingStatic(class APlayerController* Player, const class FName& AxisName, float Scale, int32_t MappingGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappingStatic");
		
		UInputMappingManager_GetPlayerAxisMappingStatic_Params params {};
		params.Player = Player;
		params.Scale = Scale;
		params.MappingGroup = MappingGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AxisName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                KeyGroup                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePlayerKeyGroup                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FInputAxisKeyMapping> UInputMappingManager::GetPlayerAxisMappings(class APlayerController* Player, const class FName& AxisName, float Scale, int32_t MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappings");
		
		UInputMappingManager_GetPlayerAxisMappings_Params params {};
		params.Player = Player;
		params.Scale = Scale;
		params.MappingGroup = MappingGroup;
		params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AxisName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                KeyGroup                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePlayerKeyGroup                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputAxisKeyMapping UInputMappingManager::GetPlayerAxisMapping(class APlayerController* Player, const class FName& AxisName, float Scale, int32_t MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMapping");
		
		UInputMappingManager_GetPlayerAxisMapping_Params params {};
		params.Player = Player;
		params.Scale = Scale;
		params.MappingGroup = MappingGroup;
		params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappingStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionKeyMapping UInputMappingManager::GetPlayerActionMappingStatic(class APlayerController* Player, const class FName& ActionName, int32_t MappingGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappingStatic");
		
		UInputMappingManager_GetPlayerActionMappingStatic_Params params {};
		params.Player = Player;
		params.MappingGroup = MappingGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                KeyGroup                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePlayerKeyGroup                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FInputActionKeyMapping> UInputMappingManager::GetPlayerActionMappings(class APlayerController* Player, const class FName& ActionName, int32_t MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappings");
		
		UInputMappingManager_GetPlayerActionMappings_Params params {};
		params.Player = Player;
		params.MappingGroup = MappingGroup;
		params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                KeyGroup                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePlayerKeyGroup                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionKeyMapping UInputMappingManager::GetPlayerActionMapping(class APlayerController* Player, const class FName& ActionName, int32_t MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.GetPlayerActionMapping");
		
		UInputMappingManager_GetPlayerActionMapping_Params params {};
		params.Player = Player;
		params.MappingGroup = MappingGroup;
		params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetDefaultInputPresets
	 * 		Flags  -> ()
	 */
	TArray<struct FInputMappingPreset> UInputMappingManager::GetDefaultInputPresets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.GetDefaultInputPresets");
		
		UInputMappingManager_GetDefaultInputPresets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverrideStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputAxisKeyMapping                        NewMapping                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnyKeyGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::AddPlayerAxisOverrideStatic(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverrideStatic");
		
		UInputMappingManager_AddPlayerAxisOverrideStatic_Params params {};
		params.Player = Player;
		params.MappingGroup = MappingGroup;
		params.bAnyKeyGroup = bAnyKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputAxisKeyMapping                        NewMapping                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnyKeyGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::AddPlayerAxisOverride(class APlayerController* Player, const struct FInputAxisKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverride");
		
		UInputMappingManager_AddPlayerAxisOverride_Params params {};
		params.Player = Player;
		params.MappingGroup = MappingGroup;
		params.bAnyKeyGroup = bAnyKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverrideStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionKeyMapping                      NewMapping                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnyKeyGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::AddPlayerActionOverrideStatic(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverrideStatic");
		
		UInputMappingManager_AddPlayerActionOverrideStatic_Params params {};
		params.Player = Player;
		params.MappingGroup = MappingGroup;
		params.bAnyKeyGroup = bAnyKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionKeyMapping                      NewMapping                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnyKeyGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::AddPlayerActionOverride(class APlayerController* Player, const struct FInputActionKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverride");
		
		UInputMappingManager_AddPlayerActionOverride_Params params {};
		params.Player = Player;
		params.MappingGroup = MappingGroup;
		params.bAnyKeyGroup = bAnyKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInputMappingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMappingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.InputMappingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.UpdateKeyLabel
	 * 		Flags  -> ()
	 */
	void UKeyLabel::UpdateKeyLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.KeyLabel.UpdateKeyLabel");
		
		UKeyLabel_UpdateKeyLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.OnGlobalKeyIconTagsModified
	 * 		Flags  -> ()
	 */
	void UKeyLabel::OnGlobalKeyIconTagsModified()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.KeyLabel.OnGlobalKeyIconTagsModified");
		
		UKeyLabel_OnGlobalKeyIconTagsModified_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.HasValidKey
	 * 		Flags  -> ()
	 */
	bool UKeyLabel::HasValidKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.KeyLabel.HasValidKey");
		
		UKeyLabel_HasValidKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.HasIcon
	 * 		Flags  -> ()
	 */
	bool UKeyLabel::HasIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.KeyLabel.HasIcon");
		
		UKeyLabel_HasIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetIconVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UKeyLabel::GetIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.KeyLabel.GetIconVisibility");
		
		UKeyLabel_GetIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetIconBrush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UKeyLabel::GetIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.KeyLabel.GetIconBrush");
		
		UKeyLabel_GetIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetIcon
	 * 		Flags  -> ()
	 */
	class UTexture* UKeyLabel::GetIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.KeyLabel.GetIcon");
		
		UKeyLabel_GetIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetDisplayNameVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UKeyLabel::GetDisplayNameVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.KeyLabel.GetDisplayNameVisibility");
		
		UKeyLabel_GetDisplayNameVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetDisplayName
	 * 		Flags  -> ()
	 */
	class FText UKeyLabel::GetDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutoSettingsInput.KeyLabel.GetDisplayName");
		
		UKeyLabel_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKeyLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyLabel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutoSettingsInput.KeyLabel");
		return ptr;
	}

}


