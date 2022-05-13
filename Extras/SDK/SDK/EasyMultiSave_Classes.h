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
	 * Class EasyMultiSave.EMSActorSaveInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEMSActorSaveInterface : public UInterface
	{
	public:
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		void ActorSaved();
		void ActorPreSave();
		void ActorLoaded();
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSAsyncLoadGame
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UEMSAsyncLoadGame : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTHL[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (PADDING)

	public:
		class UEMSAsyncLoadGame* AsyncLoadActors(class UObject* WorldContextObject, int32_t Data, bool bFullReload);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSAsyncSaveGame
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UEMSAsyncSaveGame : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLFA[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		class UEMSAsyncSaveGame* AsyncSaveActors(class UObject* WorldContextObject, int32_t Data);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSAsyncWait
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UEMSAsyncWait : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7Q1[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class UEMSAsyncWait* AsyncWaitForOperation(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSCustomSaveGame
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEMSCustomSaveGame : public USaveGame
	{
	public:
		class FString                                              SaveGameName;                                            // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSaveSlot;                                            // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSBC[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEMSFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetCurrentSaveUserName(class UObject* WorldContextObject, const class FString& Username);
		void SetCurrentSaveGameName(class UObject* WorldContextObject, const class FString& SaveGameName);
		void SetActorSaveProperties(class UObject* WorldContextObject, bool bSkipSave, bool bPersistent, bool bSkipTransform);
		bool SavePersistentObject(class UObject* WorldContextObject);
		bool SaveLocalProfile(class UObject* WorldContextObject);
		bool SaveCustom(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame);
		bool IsSavingOrLoading(class UObject* WorldContextObject);
		class UTexture2D* ImportSaveThumbnail(class UObject* WorldContextObject, const class FString& SaveGameName);
		TArray<class FString> GetSortedSaveSlots(class UObject* WorldContextObject);
		class UEMSInfoSaveGame* GetSlotInfoSaveGame(class UObject* WorldContextObject, class FString* SaveGameName);
		class UEMSPersistentSaveGame* GetPersistentSave(class UObject* WorldContextObject);
		class UEMSInfoSaveGame* GetNamedSlotInfo(class UObject* WorldContextObject, const class FString& SaveGameName);
		class UEMSProfileSaveGame* GetLocalProfileSaveGame(class UObject* WorldContextObject);
		class UEMSCustomSaveGame* GetCustomSave(class UObject* WorldContextObject, class UClass* SaveGameClass);
		TArray<class FString> GetAllSaveUsers(class UObject* WorldContextObject);
		void ExportSaveThumbnail(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const class FString& SaveGameName);
		bool DoesSaveSlotExist(class UObject* WorldContextObject, const class FString& SaveGameName);
		void DeleteSaveUser(class UObject* WorldContextObject, const class FString& Username);
		void DeleteLocalProfile(class UObject* WorldContextObject);
		void DeleteCustomSave(class UObject* WorldContextObject, class UEMSCustomSaveGame* SaveGame);
		void DeleteAllSaveDataForSlot(class UObject* WorldContextObject, const class FString& SaveGameName);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSInfoSaveGame
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UEMSInfoSaveGame : public USaveGame
	{
	public:
		struct FSaveSlotInfo                                       SlotInfo;                                                // 0x0028(0x0030) BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSObject
	 * Size -> 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
	 */
	class UEMSObject : public UObject
	{
	public:
		class UWorld*                                              World;                                                   // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentSaveGameName;                                     // 0x0030(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentSaveUserName;                                     // 0x0040(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEMSInfoSaveGame*                                    CachedSlotInfoSave;                                      // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEMSPersistentSaveGame*                              CachedPersistentSave;                                    // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEMSProfileSaveGame*                                 CachedProfileSave;                                       // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UEMSCustomSaveGame*>             CachedCustomSaves;                                       // 0x0068(0x0050) Transient, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorList;                                               // 0x00B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PC60[0x108];                                 // 0x00C8(0x0108) MISSED OFFSET (PADDING)

	public:
		void OuterActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSPersistentSaveGame
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UEMSPersistentSaveGame : public USaveGame
	{
	public:
		struct FSaveSlotInfo                                       SlotInfo;                                                // 0x0028(0x0030) BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSPluginSettings
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UEMSPluginSettings : public UObject
	{
	public:
		class FString                                              DefaultSaveGameName;                                     // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      SlotInfoSaveGameClass;                                   // 0x0038(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPersistentPlayer;                                       // 0x0050(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPersistentGameMode;                                     // 0x0051(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdvancedSpawnCheck;                                     // 0x0052(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSaveActorAffiliation;                                   // 0x0053(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSaveStructs;                                        // 0x0054(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMultiThreadSaving;                                      // 0x0055(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoadMethod                                                LoadMethod;                                              // 0x0056(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFileSaveMethod                                            FileNamingType;                                          // 0x0057(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyPersistentSave;                                     // 0x0058(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTQ2[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      PersistentSaveGameClass;                                 // 0x0060(0x0018) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      ProfileSaveGameClass;                                    // 0x0078(0x0018) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EasyMultiSave.EMSProfileSaveGame
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEMSProfileSaveGame : public USaveGame
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
