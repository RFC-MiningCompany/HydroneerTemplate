#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * BlueprintGeneratedClass GM_Hydroneer.GM_Hydroneer_C
	 * Size -> 0x0030 (FullSize[0x0338] - InheritedSize[0x0308])
	 */
	class AGM_Hydroneer_C : public AGameMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       InGame_;                                                 // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z02F[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_MainMenu_C*                                      UI_MainMenu;                                             // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPublishedFileID>                            DisabledModIDs;                                          // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
		class ABP_Character_HydroGuy_C* SpawnHydroguy(const struct FTransform& SpawnTransform, class AController* PlayerController);
		class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);
		void UpdateMPC_Highlight();
		void SpawnInitialItems();
		void Try_Load_Creative_Mode();
		void AddDebugPlayer(bool Add_);
		void RemovePlayer(const struct FSteamRemotePlaySessionDisconnected& Data);
		void AddPlayer(const struct FSteamRemotePlaySessionConnected& Data);
		void MultiplayerStart();
		void InitGameplay(bool UseCameraLerp_);
		void InitMainMenu(bool SkipMainMenu_);
		void OnCompleted_04443C294CDB96DED26005BF09499B5C();
		void OnCompleted_3F15BCF84DC8092F8F59C584D5404462();
		void ContinueGame(bool Creative_, bool CloudSaving_);
		void NewGame();
		void DevNewGame();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_GM_Hydroneer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
