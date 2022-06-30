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
	 * Function Mining.CGameInstance.DiscordRunCallbacks
	 */
	struct UCGameInstance_DiscordRunCallbacks_Params
	{
	};

	/**
	 * Function Mining.CHydroneerLibrary.StringToClassRef
	 */
	struct UCHydroneerLibrary_StringToClassRef_Params
	{
	public:
		class FString                                              ClassStringName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              OutClass;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerLibrary.SanitizeString
	 */
	struct UCHydroneerLibrary_SanitizeString_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerLibrary.RenameSave
	 */
	struct UCHydroneerLibrary_RenameSave_Params
	{
	public:
		class FString                                              OriginalSaveName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewSaveName;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerLibrary.GetSaveDirectory
	 */
	struct UCHydroneerLibrary_GetSaveDirectory_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerLibrary.GetSaveBackupNames
	 */
	struct UCHydroneerLibrary_GetSaveBackupNames_Params
	{
	public:
		class FString                                              SaveName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutBackups;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerLibrary.GetHighestCurrentSaveIndex
	 */
	struct UCHydroneerLibrary_GetHighestCurrentSaveIndex_Params
	{
	public:
		class FString                                              SaveName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerLibrary.GetAppdataLocalDir
	 */
	struct UCHydroneerLibrary_GetAppdataLocalDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerLibrary.FindFolders
	 */
	struct UCHydroneerLibrary_FindFolders_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerLibrary.CopyOverDirectory
	 */
	struct UCHydroneerLibrary_CopyOverDirectory_Params
	{
	public:
		class FString                                              OldDirectory;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewDirectory;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerLibrary.BackupSave
	 */
	struct UCHydroneerLibrary_BackupSave_Params
	{
	public:
		class FString                                              SaveName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncrementSave;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxIncrements;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CHydroneerProjectSettings.Get
	 */
	struct UCHydroneerProjectSettings_Get_Params
	{
	public:
		class UCHydroneerProjectSettings*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CModdingSubsystem.UnloadMod
	 */
	struct UCModdingSubsystem_UnloadMod_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CModdingSubsystem.UninstallUnsubscribedMods
	 */
	struct UCModdingSubsystem_UninstallUnsubscribedMods_Params
	{
	};

	/**
	 * Function Mining.CModdingSubsystem.LoadMod
	 */
	struct UCModdingSubsystem_LoadMod_Params
	{
	public:
		class FString                                              ModName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CModdingSubsystem.InstallAllPending
	 */
	struct UCModdingSubsystem_InstallAllPending_Params
	{
	};

	/**
	 * Function Mining.CModdingSubsystem.GetModdingSubsystem
	 */
	struct UCModdingSubsystem_GetModdingSubsystem_Params
	{
	public:
		class UCModdingSubsystem*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CModdingSubsystem.GetLoadedMods
	 */
	struct UCModdingSubsystem_GetLoadedMods_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CModdingSubsystem.GetInstalledMods
	 */
	struct UCModdingSubsystem_GetInstalledMods_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Mining.CModdingSubsystem.GetAllSubscribedMods
	 */
	struct UCModdingSubsystem_GetAllSubscribedMods_Params
	{
	public:
		TArray<struct FPublishedFileID>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
