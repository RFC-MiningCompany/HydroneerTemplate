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
	 * 		Name   -> PredefindFunction UCGameEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCGameEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mining.CGameEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CGameInstance.DiscordRunCallbacks
	 * 		Flags  -> ()
	 */
	void UCGameInstance::DiscordRunCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CGameInstance.DiscordRunCallbacks");
		
		UCGameInstance_DiscordRunCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mining.CGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.StringToClassRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ClassStringName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      OutClass                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCHydroneerLibrary::StringToClassRef(const class FString& ClassStringName, class UClass** OutClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.StringToClassRef");
		
		UCHydroneerLibrary_StringToClassRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClass != nullptr)
			*OutClass = params.OutClass;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.SanitizeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UCHydroneerLibrary::SanitizeString(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.SanitizeString");
		
		UCHydroneerLibrary_SanitizeString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.RenameSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OriginalSaveName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewSaveName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCHydroneerLibrary::RenameSave(const class FString& OriginalSaveName, const class FString& NewSaveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.RenameSave");
		
		UCHydroneerLibrary_RenameSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.ReloadInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReload                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCHydroneerLibrary::ReloadInput(bool bReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.ReloadInput");
		
		UCHydroneerLibrary_ReloadInput_Params params {};
		params.bReload = bReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.GetSaveDirectory
	 * 		Flags  -> ()
	 */
	class FString UCHydroneerLibrary::GetSaveDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetSaveDirectory");
		
		UCHydroneerLibrary_GetSaveDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.GetSaveBackupNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutBackups                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCHydroneerLibrary::GetSaveBackupNames(const class FString& SaveName, TArray<class FString>* OutBackups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetSaveBackupNames");
		
		UCHydroneerLibrary_GetSaveBackupNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBackups != nullptr)
			*OutBackups = params.OutBackups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.GetHighestCurrentSaveIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCHydroneerLibrary::GetHighestCurrentSaveIndex(const class FString& SaveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetHighestCurrentSaveIndex");
		
		UCHydroneerLibrary_GetHighestCurrentSaveIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.GetAppdataLocalDir
	 * 		Flags  -> ()
	 */
	class FString UCHydroneerLibrary::GetAppdataLocalDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetAppdataLocalDir");
		
		UCHydroneerLibrary_GetAppdataLocalDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.FindFolders
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UCHydroneerLibrary::FindFolders(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.FindFolders");
		
		UCHydroneerLibrary_FindFolders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.CopyOverDirectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OldDirectory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewDirectory                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCHydroneerLibrary::CopyOverDirectory(const class FString& OldDirectory, const class FString& NewDirectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.CopyOverDirectory");
		
		UCHydroneerLibrary_CopyOverDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerLibrary.BackupSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncrementSave                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxIncrements                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCHydroneerLibrary::BackupSave(const class FString& SaveName, bool bIncrementSave, int32_t MaxIncrements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.BackupSave");
		
		UCHydroneerLibrary_BackupSave_Params params {};
		params.bIncrementSave = bIncrementSave;
		params.MaxIncrements = MaxIncrements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCHydroneerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCHydroneerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mining.CHydroneerLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CHydroneerProjectSettings.Get
	 * 		Flags  -> ()
	 */
	class UCHydroneerProjectSettings* UCHydroneerProjectSettings::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerProjectSettings.Get");
		
		UCHydroneerProjectSettings_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCHydroneerProjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCHydroneerProjectSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mining.CHydroneerProjectSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CModdingSubsystem.UnloadMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCModdingSubsystem::UnloadMod(const class FString& ModName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.UnloadMod");
		
		UCModdingSubsystem_UnloadMod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CModdingSubsystem.UninstallUnsubscribedMods
	 * 		Flags  -> ()
	 */
	void UCModdingSubsystem::UninstallUnsubscribedMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.UninstallUnsubscribedMods");
		
		UCModdingSubsystem_UninstallUnsubscribedMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CModdingSubsystem.LoadMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCModdingSubsystem::LoadMod(const class FString& ModName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.LoadMod");
		
		UCModdingSubsystem_LoadMod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CModdingSubsystem.InstallAllPending
	 * 		Flags  -> ()
	 */
	void UCModdingSubsystem::InstallAllPending()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.InstallAllPending");
		
		UCModdingSubsystem_InstallAllPending_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CModdingSubsystem.GetModdingSubsystem
	 * 		Flags  -> ()
	 */
	class UCModdingSubsystem* UCModdingSubsystem::GetModdingSubsystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.GetModdingSubsystem");
		
		UCModdingSubsystem_GetModdingSubsystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CModdingSubsystem.GetLoadedMods
	 * 		Flags  -> ()
	 */
	TArray<class FString> UCModdingSubsystem::GetLoadedMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.GetLoadedMods");
		
		UCModdingSubsystem_GetLoadedMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CModdingSubsystem.GetInstalledMods
	 * 		Flags  -> ()
	 */
	TArray<class FString> UCModdingSubsystem::GetInstalledMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.GetInstalledMods");
		
		UCModdingSubsystem_GetInstalledMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Mining.CModdingSubsystem.GetAllSubscribedMods
	 * 		Flags  -> ()
	 */
	TArray<struct FPublishedFileID> UCModdingSubsystem::GetAllSubscribedMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.GetAllSubscribedMods");
		
		UCModdingSubsystem_GetAllSubscribedMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCModdingSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCModdingSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mining.CModdingSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULocalCableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalCableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mining.LocalCableComponent");
		return ptr;
	}

}


