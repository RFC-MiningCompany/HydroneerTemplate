/**
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
	 * 		Name   -> Function AutoSettingsInput.InputLabel.UpdateLabel
	 * 		Flags  -> ()
	 */
	void UInputLabel::UpdateLabel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputLabel.UpdateLabel"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputLabel.MappingsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputLabel::MappingsChanged(class APlayerController* Player)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputLabel.MappingsChanged"));
		
		struct
		{
			class APlayerController*                           Player;
		} params;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInputLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputLabel::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.InputLabel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UActionLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionLabel::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.ActionLabel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMapping.UpdateMapping
	 * 		Flags  -> ()
	 */
	void UInputMapping::UpdateMapping()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMapping.UpdateMapping"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMapping.UpdateLabel
	 * 		Flags  -> ()
	 */
	void UInputMapping::UpdateLabel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMapping.UpdateLabel"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMapping.ChordCaptured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedInput                              CapturedInput                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UInputMapping::ChordCaptured(const struct FCapturedInput& CapturedInput)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMapping.ChordCaptured"));
		
		struct
		{
			struct FCapturedInput                              CapturedInput;
		} params;
		params.CapturedInput = CapturedInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMapping.BindChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedInput                              CapturedInput                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UInputMapping::BindChord(const struct FCapturedInput& CapturedInput)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMapping.BindChord"));
		
		struct
		{
			struct FCapturedInput                              CapturedInput;
		} params;
		params.CapturedInput = CapturedInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInputMapping.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapping::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.InputMapping"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UActionMapping.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionMapping::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.ActionMapping"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputConfig::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.AutoSettingsInputConfig"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputConfigInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputConfigInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.AutoSettingsInputConfigInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsInputProjectConfig.LoadKeyIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       KeyIconTags                                                (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<class UTexture*> UAutoSettingsInputProjectConfig::LoadKeyIcons(const struct FGameplayTagContainer& KeyIconTags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.AutoSettingsInputProjectConfig.LoadKeyIcons"));
		
		struct
		{
			struct FGameplayTagContainer                       KeyIconTags;
			TArray<class UTexture*>                            ReturnValue;
		} params;
		params.KeyIconTags = KeyIconTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyGroupStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTag UAutoSettingsInputProjectConfig::GetKeyGroupStatic(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyGroupStatic"));
		
		struct
		{
			struct FKey                                        Key;
			struct FGameplayTag                                ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyFriendlyNameStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UAutoSettingsInputProjectConfig::GetKeyFriendlyNameStatic(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyFriendlyNameStatic"));
		
		struct
		{
			struct FKey                                        Key;
			class FText                                        ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputProjectConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputProjectConfig::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.AutoSettingsInputProjectConfig"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputSubsystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.AutoSettingsInputSubsystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsInputValidationSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsInputValidationSubsystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.AutoSettingsInputValidationSubsystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsPlayer.SaveInputMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerInputMappings                        InputMappings                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAutoSettingsPlayer::SaveInputMappings(const struct FPlayerInputMappings& InputMappings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.AutoSettingsPlayer.SaveInputMappings"));
		
		struct
		{
			struct FPlayerInputMappings                        InputMappings;
		} params;
		params.InputMappings = InputMappings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsPlayer.GetUniquePlayerIdentifier
	 * 		Flags  -> ()
	 */
	class FString UAutoSettingsPlayer::GetUniquePlayerIdentifier()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.AutoSettingsPlayer.GetUniquePlayerIdentifier"));
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsPlayer.GetInputMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerInputMappings                        InputMappings                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UAutoSettingsPlayer::GetInputMappings(struct FPlayerInputMappings* InputMappings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.AutoSettingsPlayer.GetInputMappings"));
		
		struct
		{
			struct FPlayerInputMappings                        InputMappings;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputMappings != nullptr)
			*InputMappings = params.InputMappings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.AutoSettingsPlayer.GetDefaultInputMappingPreset
	 * 		Flags  -> ()
	 */
	struct FInputMappingPreset UAutoSettingsPlayer::GetDefaultInputMappingPreset()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.AutoSettingsPlayer.GetDefaultInputMappingPreset"));
		
		struct
		{
			struct FInputMappingPreset                         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAutoSettingsPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoSettingsPlayer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.AutoSettingsPlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAxisLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisLabel::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.AxisLabel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAxisMapping.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisMapping::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.AxisMapping"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCaptureButton.StartCapture
	 * 		Flags  -> ()
	 */
	class UBindCapturePrompt* UBindCaptureButton::StartCapture()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.BindCaptureButton.StartCapture"));
		
		struct
		{
			class UBindCapturePrompt*                          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCaptureButton.InitializePrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBindCapturePrompt*                          PromptWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBindCaptureButton::InitializePrompt(class UBindCapturePrompt* PromptWidget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.BindCaptureButton.InitializePrompt"));
		
		struct
		{
			class UBindCapturePrompt*                          PromptWidget;
		} params;
		params.PromptWidget = PromptWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCaptureButton.ChordCaptured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedInput                              CapturedInput                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UBindCaptureButton::ChordCaptured(const struct FCapturedInput& CapturedInput)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.BindCaptureButton.ChordCaptured"));
		
		struct
		{
			struct FCapturedInput                              CapturedInput;
		} params;
		params.CapturedInput = CapturedInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBindCaptureButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBindCaptureButton::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.BindCaptureButton"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCapturePrompt.IsKeyAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        PrimaryKey                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBindCapturePrompt::IsKeyAllowed(const struct FKey& PrimaryKey)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.BindCapturePrompt.IsKeyAllowed"));
		
		struct
		{
			struct FKey                                        PrimaryKey;
			bool                                               ReturnValue;
		} params;
		params.PrimaryKey = PrimaryKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCapturePrompt.GetKeyGroup
	 * 		Flags  -> ()
	 */
	struct FGameplayTag UBindCapturePrompt::GetKeyGroup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.BindCapturePrompt.GetKeyGroup"));
		
		struct
		{
			struct FGameplayTag                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.BindCapturePrompt.Cancel
	 * 		Flags  -> ()
	 */
	void UBindCapturePrompt::Cancel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.BindCapturePrompt.Cancel"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBindCapturePrompt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBindCapturePrompt::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.BindCapturePrompt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.GlobalKeyIconTagManager.SetGlobalKeyIconTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       InGlobalIconTags                                           (Parm, NativeAccessSpecifierPublic)
	 */
	void UGlobalKeyIconTagManager::SetGlobalKeyIconTags(const struct FGameplayTagContainer& InGlobalIconTags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.GlobalKeyIconTagManager.SetGlobalKeyIconTags"));
		
		struct
		{
			struct FGameplayTagContainer                       InGlobalIconTags;
		} params;
		params.InGlobalIconTags = InGlobalIconTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.GlobalKeyIconTagManager.GetIconForKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       IconTags                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              AxisScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* UGlobalKeyIconTagManager::GetIconForKey(const struct FKey& InKey, const struct FGameplayTagContainer& IconTags, float AxisScale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.GlobalKeyIconTagManager.GetIconForKey"));
		
		struct
		{
			struct FKey                                        InKey;
			struct FGameplayTagContainer                       IconTags;
			float                                              AxisScale;
			class UTexture*                                    ReturnValue;
		} params;
		params.InKey = InKey;
		params.IconTags = IconTags;
		params.AxisScale = AxisScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGlobalKeyIconTagManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalKeyIconTagManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.GlobalKeyIconTagManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.SetPlayerKeyGroupStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                KeyGroup                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::SetPlayerKeyGroupStatic(class APlayerController* Player, const struct FGameplayTag& KeyGroup)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.SetPlayerKeyGroupStatic"));
		
		struct
		{
			class APlayerController*                           Player;
			struct FGameplayTag                                KeyGroup;
		} params;
		params.Player = Player;
		params.KeyGroup = KeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputMappingPreset                         Preset                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::SetPlayerInputPresetStatic(class APlayerController* Player, const struct FInputMappingPreset& Preset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetStatic"));
		
		struct
		{
			class APlayerController*                           Player;
			struct FInputMappingPreset                         Preset;
		} params;
		params.Player = Player;
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                PresetTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::SetPlayerInputPresetByTag(class APlayerController* Player, const struct FGameplayTag& PresetTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetByTag"));
		
		struct
		{
			class APlayerController*                           Player;
			struct FGameplayTag                                PresetTag;
		} params;
		params.Player = Player;
		params.PresetTag = PresetTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.OnRegisteredPlayerControllerDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingManager::OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.OnRegisteredPlayerControllerDestroyed"));
		
		struct
		{
			class AActor*                                      DestroyedActor;
		} params;
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.InitializePlayerInputOverridesStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputMappingManager::InitializePlayerInputOverridesStatic(class APlayerController* Player)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.InitializePlayerInputOverridesStatic"));
		
		struct
		{
			class APlayerController*                           Player;
			bool                                               ReturnValue;
		} params;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.GetPlayerMappingsByKey"));
		
		struct
		{
			class APlayerController*                           Player;
			struct FKey                                        Key;
			TArray<struct FInputActionKeyMapping>              Actions;
			TArray<struct FInputAxisKeyMapping>                Axes;
		} params;
		params.Player = Player;
		params.Key = Key;
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerInputMappingsStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlayerInputMappings UInputMappingManager::GetPlayerInputMappingsStatic(class APlayerController* Player)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.GetPlayerInputMappingsStatic"));
		
		struct
		{
			class APlayerController*                           Player;
			struct FPlayerInputMappings                        ReturnValue;
		} params;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappingStatic"));
		
		struct
		{
			class APlayerController*                           Player;
			class FName                                        AxisName;
			float                                              Scale;
			int32_t                                            MappingGroup;
			struct FInputAxisKeyMapping                        ReturnValue;
		} params;
		params.Player = Player;
		params.AxisName = AxisName;
		params.Scale = Scale;
		params.MappingGroup = MappingGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappings"));
		
		struct
		{
			class APlayerController*                           Player;
			class FName                                        AxisName;
			float                                              Scale;
			int32_t                                            MappingGroup;
			struct FGameplayTag                                KeyGroup;
			bool                                               bUsePlayerKeyGroup;
			TArray<struct FInputAxisKeyMapping>                ReturnValue;
		} params;
		params.Player = Player;
		params.AxisName = AxisName;
		params.Scale = Scale;
		params.MappingGroup = MappingGroup;
		params.KeyGroup = KeyGroup;
		params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMapping"));
		
		struct
		{
			class APlayerController*                           Player;
			class FName                                        AxisName;
			float                                              Scale;
			int32_t                                            MappingGroup;
			struct FGameplayTag                                KeyGroup;
			bool                                               bUsePlayerKeyGroup;
			struct FInputAxisKeyMapping                        ReturnValue;
		} params;
		params.Player = Player;
		params.AxisName = AxisName;
		params.Scale = Scale;
		params.MappingGroup = MappingGroup;
		params.KeyGroup = KeyGroup;
		params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappingStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MappingGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionKeyMapping UInputMappingManager::GetPlayerActionMappingStatic(class APlayerController* Player, const class FName& ActionName, int32_t MappingGroup)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappingStatic"));
		
		struct
		{
			class APlayerController*                           Player;
			class FName                                        ActionName;
			int32_t                                            MappingGroup;
			struct FInputActionKeyMapping                      ReturnValue;
		} params;
		params.Player = Player;
		params.ActionName = ActionName;
		params.MappingGroup = MappingGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappings"));
		
		struct
		{
			class APlayerController*                           Player;
			class FName                                        ActionName;
			int32_t                                            MappingGroup;
			struct FGameplayTag                                KeyGroup;
			bool                                               bUsePlayerKeyGroup;
			TArray<struct FInputActionKeyMapping>              ReturnValue;
		} params;
		params.Player = Player;
		params.ActionName = ActionName;
		params.MappingGroup = MappingGroup;
		params.KeyGroup = KeyGroup;
		params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.GetPlayerActionMapping"));
		
		struct
		{
			class APlayerController*                           Player;
			class FName                                        ActionName;
			int32_t                                            MappingGroup;
			struct FGameplayTag                                KeyGroup;
			bool                                               bUsePlayerKeyGroup;
			struct FInputActionKeyMapping                      ReturnValue;
		} params;
		params.Player = Player;
		params.ActionName = ActionName;
		params.MappingGroup = MappingGroup;
		params.KeyGroup = KeyGroup;
		params.bUsePlayerKeyGroup = bUsePlayerKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.InputMappingManager.GetDefaultInputPresets
	 * 		Flags  -> ()
	 */
	TArray<struct FInputMappingPreset> UInputMappingManager::GetDefaultInputPresets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.GetDefaultInputPresets"));
		
		struct
		{
			TArray<struct FInputMappingPreset>                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverrideStatic"));
		
		struct
		{
			class APlayerController*                           Player;
			struct FInputAxisKeyMapping                        NewMapping;
			int32_t                                            MappingGroup;
			bool                                               bAnyKeyGroup;
		} params;
		params.Player = Player;
		params.NewMapping = NewMapping;
		params.MappingGroup = MappingGroup;
		params.bAnyKeyGroup = bAnyKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverride"));
		
		struct
		{
			class APlayerController*                           Player;
			struct FInputAxisKeyMapping                        NewMapping;
			int32_t                                            MappingGroup;
			bool                                               bAnyKeyGroup;
		} params;
		params.Player = Player;
		params.NewMapping = NewMapping;
		params.MappingGroup = MappingGroup;
		params.bAnyKeyGroup = bAnyKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverrideStatic"));
		
		struct
		{
			class APlayerController*                           Player;
			struct FInputActionKeyMapping                      NewMapping;
			int32_t                                            MappingGroup;
			bool                                               bAnyKeyGroup;
		} params;
		params.Player = Player;
		params.NewMapping = NewMapping;
		params.MappingGroup = MappingGroup;
		params.bAnyKeyGroup = bAnyKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverride"));
		
		struct
		{
			class APlayerController*                           Player;
			struct FInputActionKeyMapping                      NewMapping;
			int32_t                                            MappingGroup;
			bool                                               bAnyKeyGroup;
		} params;
		params.Player = Player;
		params.NewMapping = NewMapping;
		params.MappingGroup = MappingGroup;
		params.bAnyKeyGroup = bAnyKeyGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInputMappingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMappingManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.InputMappingManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.UpdateKeyLabel
	 * 		Flags  -> ()
	 */
	void UKeyLabel::UpdateKeyLabel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.KeyLabel.UpdateKeyLabel"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.OnGlobalKeyIconTagsModified
	 * 		Flags  -> ()
	 */
	void UKeyLabel::OnGlobalKeyIconTagsModified()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.KeyLabel.OnGlobalKeyIconTagsModified"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.HasValidKey
	 * 		Flags  -> ()
	 */
	bool UKeyLabel::HasValidKey()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.KeyLabel.HasValidKey"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.HasIcon
	 * 		Flags  -> ()
	 */
	bool UKeyLabel::HasIcon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.KeyLabel.HasIcon"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetIconVisibility
	 * 		Flags  -> ()
	 */
	UMG_ESlateVisibility UKeyLabel::GetIconVisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.KeyLabel.GetIconVisibility"));
		
		struct
		{
			UMG_ESlateVisibility                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetIconBrush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UKeyLabel::GetIconBrush()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.KeyLabel.GetIconBrush"));
		
		struct
		{
			struct FSlateBrush                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetIcon
	 * 		Flags  -> ()
	 */
	class UTexture* UKeyLabel::GetIcon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.KeyLabel.GetIcon"));
		
		struct
		{
			class UTexture*                                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetDisplayNameVisibility
	 * 		Flags  -> ()
	 */
	UMG_ESlateVisibility UKeyLabel::GetDisplayNameVisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.KeyLabel.GetDisplayNameVisibility"));
		
		struct
		{
			UMG_ESlateVisibility                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AutoSettingsInput.KeyLabel.GetDisplayName
	 * 		Flags  -> ()
	 */
	class FText UKeyLabel::GetDisplayName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AutoSettingsInput.KeyLabel.GetDisplayName"));
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKeyLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyLabel::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AutoSettingsInput.KeyLabel"));
		return ptr;
	}

}


