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
	 * Class Mining.CGameEngine
	 * Size -> 0x0000 (FullSize[0x0E30] - InheritedSize[0x0E30])
	 */
	class UCGameEngine : public UGameEngine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Mining.CGameInstance
	 * Size -> 0x0008 (FullSize[0x01B0] - InheritedSize[0x01A8])
	 */
	class UCGameInstance : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_HLSE[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void DiscordRunCallbacks();
		static UClass* StaticClass();
	};

	/**
	 * Class Mining.CHydroneerLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCHydroneerLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool StringToClassRef(const class FString& ClassStringName, class UClass** OutClass);
		void SetHiddenShadow(bool bNewCastHiddenShadow, class UPrimitiveComponent* Target);
		class FString SanitizeString(const class FString& Filename);
		bool RenameSave(const class FString& OriginalSaveName, const class FString& NewSaveName);
		void ReloadInput(bool bReload);
		class FString GetSaveDirectory();
		void GetSaveBackupNames(const class FString& SaveName, TArray<class FString>* OutBackups);
		int32_t GetHighestCurrentSaveIndex(const class FString& SaveName);
		class FString GetAppdataLocalDir();
		TArray<class FString> FindFolders(const class FString& FilePath);
		void CopyOverDirectory(const class FString& OldDirectory, const class FString& NewDirectory);
		void BackupSave(const class FString& SaveName, bool bIncrementSave, int32_t MaxIncrements);
		static UClass* StaticClass();
	};

	/**
	 * Class Mining.CHydroneerProjectSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UCHydroneerProjectSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bDebugMainMenu;                                          // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CC3[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		class UCHydroneerProjectSettings* Get();
		static UClass* StaticClass();
	};

	/**
	 * Class Mining.CModdingSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCModdingSubsystem : public UEngineSubsystem
	{
	public:
		void UnloadMod(const class FString& ModName);
		void UninstallUnsubscribedMods();
		void LoadMod(const class FString& ModName);
		void InstallAllPending();
		class UCModdingSubsystem* GetModdingSubsystem();
		TArray<class FString> GetLoadedMods();
		TArray<class FString> GetInstalledMods();
		TArray<struct FPublishedFileID> GetAllSubscribedMods();
		static UClass* StaticClass();
	};

	/**
	 * Class Mining.LocalCableComponent
	 * Size -> 0x0010 (FullSize[0x0510] - InheritedSize[0x0500])
	 */
	class ULocalCableComponent : public UCableComponent
	{
	public:
		unsigned char                                              UnknownData_9CLU[0x10];                                  // 0x0500(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
