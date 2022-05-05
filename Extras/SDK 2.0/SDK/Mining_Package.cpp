/**
 * Name: Hydroneer
 * Version: 2.0
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
		static UClass* ptr = UObject::FindClass("Class Mining.CGameEngine");
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CGameInstance.DiscordRunCallbacks");
		
		struct
		{
		} params;
		
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
		static UClass* ptr = UObject::FindClass("Class Mining.CGameInstance");
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.StringToClassRef");
		
		struct
		{
			class FString                                      ClassStringName;
			class UClass*                                      OutClass;
		} params;
		params.ClassStringName = ClassStringName;
		
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
	 * 		Name   -> Function Mining.CHydroneerLibrary.SetHiddenShadow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCastHiddenShadow                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCHydroneerLibrary::SetHiddenShadow(bool bNewCastHiddenShadow, class UPrimitiveComponent* Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.SetHiddenShadow");
		
		struct
		{
			bool                                               bNewCastHiddenShadow;
			class UPrimitiveComponent*                         Target;
		} params;
		params.bNewCastHiddenShadow = bNewCastHiddenShadow;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.SanitizeString");
		
		struct
		{
			class FString                                      Filename;
		} params;
		params.Filename = Filename;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.RenameSave");
		
		struct
		{
			class FString                                      OriginalSaveName;
			class FString                                      NewSaveName;
		} params;
		params.OriginalSaveName = OriginalSaveName;
		params.NewSaveName = NewSaveName;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.ReloadInput");
		
		struct
		{
			bool                                               bReload;
		} params;
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetSaveDirectory");
		
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
	 * 		Name   -> Function Mining.CHydroneerLibrary.GetSaveBackupNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutBackups                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCHydroneerLibrary::GetSaveBackupNames(const class FString& SaveName, TArray<class FString>* OutBackups)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetSaveBackupNames");
		
		struct
		{
			class FString                                      SaveName;
			TArray<class FString>                              OutBackups;
		} params;
		params.SaveName = SaveName;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetHighestCurrentSaveIndex");
		
		struct
		{
			class FString                                      SaveName;
		} params;
		params.SaveName = SaveName;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetAppdataLocalDir");
		
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
	 * 		Name   -> Function Mining.CHydroneerLibrary.FindFolders
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UCHydroneerLibrary::FindFolders(const class FString& FilePath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.FindFolders");
		
		struct
		{
			class FString                                      FilePath;
		} params;
		params.FilePath = FilePath;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.CopyOverDirectory");
		
		struct
		{
			class FString                                      OldDirectory;
			class FString                                      NewDirectory;
		} params;
		params.OldDirectory = OldDirectory;
		params.NewDirectory = NewDirectory;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.BackupSave");
		
		struct
		{
			class FString                                      SaveName;
			bool                                               bIncrementSave;
			int32_t                                            MaxIncrements;
		} params;
		params.SaveName = SaveName;
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
		static UClass* ptr = UObject::FindClass("Class Mining.CHydroneerLibrary");
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerProjectSettings.Get");
		
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
	 * 		Name   -> PredefindFunction UCHydroneerProjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCHydroneerProjectSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Mining.CHydroneerProjectSettings");
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.UnloadMod");
		
		struct
		{
			class FString                                      ModName;
		} params;
		params.ModName = ModName;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.UninstallUnsubscribedMods");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.LoadMod");
		
		struct
		{
			class FString                                      ModName;
		} params;
		params.ModName = ModName;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.InstallAllPending");
		
		struct
		{
		} params;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.GetModdingSubsystem");
		
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
	 * 		Name   -> Function Mining.CModdingSubsystem.GetLoadedMods
	 * 		Flags  -> ()
	 */
	TArray<class FString> UCModdingSubsystem::GetLoadedMods()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.GetLoadedMods");
		
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
	 * 		Name   -> Function Mining.CModdingSubsystem.GetInstalledMods
	 * 		Flags  -> ()
	 */
	TArray<class FString> UCModdingSubsystem::GetInstalledMods()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.GetInstalledMods");
		
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
	 * 		Name   -> Function Mining.CModdingSubsystem.GetAllSubscribedMods
	 * 		Flags  -> ()
	 */
	TArray<struct FPublishedFileID> UCModdingSubsystem::GetAllSubscribedMods()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CModdingSubsystem.GetAllSubscribedMods");
		
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
	 * 		Name   -> PredefindFunction UCModdingSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCModdingSubsystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Mining.CModdingSubsystem");
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
		static UClass* ptr = UObject::FindClass("Class Mining.LocalCableComponent");
		return ptr;
	}

}


