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
	 * BlueprintGeneratedClass GM_Hydroneer.GM_Hydroneer_C
	 * Size -> 0x0050 (FullSize[0x0358] - InheritedSize[0x0308])
	 */
	class AGM_Hydroneer_C : public AGameMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       InGame_;                                                 // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z0HJ[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_MainMenu_C*                                      UI_MainMenu;                                             // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPublishedFileID>                            DisabledModIDs;                                          // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnPlayerAdded;                                           // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerRemoved;                                         // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		bool CanAddPlayer_();
		class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
		class ABP_Character_HydroGuy_C* SpawnHydroguy(const struct FTransform& SpawnTransform, class AController* PlayerController);
		class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);
		void UpdateMPC_Highlight();
		void SpawnInitialItems();
		void Try_Load_Creative_Mode();
		void AddDebugPlayer(bool Add_);
		void RemovePlayer(const struct FSteamRemotePlaySessionDisconnected& Data);
		void RemoveLocalPlayer();
		void AddLocalPlayer();
		void AddRemotePlayer(const struct FSteamRemotePlaySessionConnected& Data);
		void AddPlayer(const struct FSteamRemotePlaySessionConnected& Data, bool isRemote, class ABP_GameController_C** PlayerController);
		void MultiplayerStart();
		void InitGameplay(bool UseCameraLerp_);
		void InitMainMenu(bool SkipMainMenu_);
		void OnCompleted_04443C294CDB96DED26005BF09499B5C();
		void OnCompleted_3F15BCF84DC8092F8F59C584D5404462();
		void ContinueGame(bool Creative_, bool CloudSaving_);
		void NewGame();
		void DevNewGame();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_GM_Hydroneer(int32_t EntryPoint);
		void OnPlayerRemoved__DelegateSignature();
		void OnPlayerAdded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
