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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_GameController.BP_GameController_C
	 * Size -> 0x0290 (FullSize[0x0800] - InheritedSize[0x0570])
	 */
	class ABP_GameController_C : public APlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		float                                                      MoveTimeline_NewTrack_0_637096C0404CFE678CE754B416A1F939; // 0x0578(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         MoveTimeline__Direction_637096C0404CFE678CE754B416A1F939; // 0x057C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FGRG[0x3];                                   // 0x057D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MoveTimeline;                                            // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UUI_HUD_C*                                           HUD;                                                     // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_Crosshairs                                               CurrentCrosshair;                                        // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7DZN[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_HydroVoxelWorld_C*                               VoxelWorld;                                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_GameCharacter_C*                                 Game_Character;                                          // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ParentItem_C*                                    CarryingItem;                                            // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InStore_;                                                // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GBDH[0x7];                                   // 0x05B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ParentItem_C*                                    PlacingItem;                                             // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuildingZRotation;                                       // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuildingLength;                                          // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LastThingLookingAt;                                      // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuildingXRotation;                                       // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4F4V[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         OpenUI;                                                  // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          MenuLocation;                                            // 0x05E0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          Player1Location;                                         // 0x0610(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		struct FTimerHandle                                        AutoSaverHandle;                                         // 0x0640(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_DayNightCycle_C*                                 DayNight;                                                // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CurrentVehicle;                                          // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MovementMode                                             CurrentMovementMode;                                     // 0x0658(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_45R2[0x3];                                   // 0x0659(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Building_YRotation;                                      // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Soundtrack;                                              // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuildingLengthOffset;                                    // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DNLD[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           StartingUTC;                                             // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       AutosaveToggle;                                          // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KPV5[0x7];                                   // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     HighlightedObjects;                                      // 0x0680(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_ScreenshotCam_C*                                 ScreenshotCam;                                           // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_ScreenshotCam_C*                                 ScreenshotCamUI;                                         // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeScreenshotCam;                                 // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X3DW[0xC];                                   // 0x06A4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartingTrans;                                           // 0x06B0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          TargetTrans;                                             // 0x06E0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PickupTimerLerp;                                         // 0x0710(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerVoicePitch;                                        // 0x0714(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              NearestVehicle;                                          // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_DoubleVec                                        PreviousPlacementLocRot;                                 // 0x0720(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4Z9X[0x8];                                   // 0x0738(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Player2Location;                                         // 0x0740(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		struct FTransform                                          Player3Location;                                         // 0x0770(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		struct FTransform                                          Player4Location;                                         // 0x07A0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		struct FTimerHandle                                        PickupLerpTimerHandle;                                   // 0x07D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        MenuFocusTimer;                                          // 0x07D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_Dummy_HydroGuy_C*                                Dummy;                                                   // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       IsCreativeMode_;                                         // 0x07E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		bool                                                       IsCloudSave_;                                            // 0x07E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0MKB[0x6];                                   // 0x07EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerName;                                              // 0x07F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		void UnhighlightCleanup();
		struct FTransform FindSpawnTransform();
		void DeleteSaveFile(const class FString& SaveSlot);
		class FString FormatCloudPathToLocalPath(const class FString& SourceString);
		void FormatSaveSlotCloudPath(const class FString& SaveSlot, const class FString& FilePath, class FString* CloudPath);
		void GetFileDataFromCloud(const class FString& CloudFilePath, const class FString& LocalFilePath, bool* Conflict_, TArray<unsigned char>* Data);
		bool IsMainController_();
		void PropagateCloudSaves();
		void GetSaveSlotFiles(const class FString& SaveSlot, TArray<class FString>* Files);
		class FString GetSaveSlotDirectory(const class FString& SaveSlot);
		class FString GetSaveDirectory();
		void LoadCurrentFilesFromCloud(bool Override_, bool* Conflict_, class FText* CloudTime, class FText* LocalTime);
		void WriteCurrentFilesToCloud();
		void MenuFocusTick();
		void ToggleMenuFocusTimer(bool On_);
		void ScanForItemsOnTop(const struct FVector& Location, float ExtentX, float ExtentY);
		void SetHUD_Crosshair(E_Crosshairs Crosshair);
		void BoxTraceForRelics(const struct FVector& Location);
		void SetStartPosition();
		void MoveVehicleToNearestUnstickPoint();
		void Hrrm();
		void InitController();
		void PlayerIsThief(class ABP_WorldStore_C* Store);
		void Spawn_Store_Item(class ABP_ParentItem_C* Item);
		void ChangeBuildRotation(int32_t XYZ_);
		void TryPickupItem();
		bool LineTraceFromCharacter(struct FHitResult* OutHit);
		void SetDiscordNote();
		void StartFreeplacing();
		void DeniedDrop();
		void PickUpItem(class ABP_ParentItem_C* Item);
		void DigCheckForRelics(class AActor* ActorHit);
		void GetSaveSlotX(int32_t Slot, class FString* SlotName, bool* IsCloud_);
		void SpawnMusic();
		void RecallVehicle();
		void RemoveDirtVehicle(const struct FVector& Location1, const struct FVector& Location2);
		void CameraShake(E_CameraShakes Type);
		void RemoveDirtLine(const struct FVector& Position, float Radius);
		void ExitVehicle(class AActor* Vehicle);
		void EnterNewVehicle(class AActor* Vehicle);
		void UnhighlightObject();
		void HighlightObject(class AActor* Actor);
		void TryHighlightObject(const struct FHitResult& Hit, bool* Result);
		void SpawnInitialItems();
		void MovePlayerToNearestUnstickPoint();
		void PostOpenUI(class UUserWidget* OpenUI);
		void CloseAllUI();
		void DropItem(bool* TrueDrop);
		void PositionItemTimer();
		void CrosshairTrace();
		void MoveTimeline__FinishedFunc();
		void MoveTimeline__UpdateFunc();
		void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Rotate_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_Rotate2_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_Pickup_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_Pickup_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_VehicleKey_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Rotate3_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Wiki_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_RMB_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_RMB_K2Node_InputActionEvent_4(const struct FKey& Key);
		void OnCompleted_9EE0ABC14602C7545F03D1AF77EC46FC();
		void InpActEvt_LMB_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_LMB_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_EscMenu_K2Node_InputActionEvent_1(const struct FKey& Key);
		void MoveDirt(bool PickUp_, float Radius);
		void FreePlayer();
		void autosave();
		void LevelTerrain(const struct FVoxelIntBox& Remove, const struct FVoxelIntBox& Add);
		void RemoveDirtByLocation(const struct FVector& Location, float Radius);
		void VehicleRemoveDirt(const struct FVector& Location1, const struct FVector& Location2);
		void HudAlertDropped();
		void NoLongerPlacingItem();
		void PlaceDownItem();
		void PositioningItem(class ABP_ParentItem_C* Item);
		void ToggleScreenshotCam();
		void ReceiveTick(float DeltaSeconds);
		void ChangeTime(float Amount);
		void ReceiveBeginPlay();
		void PauseTime();
		void ActorSaved();
		void LerpToCharacter(class ABP_ParentItem_C* Item, class USceneComponent* Socket_Component);
		void PickupLerpTimer();
		void EMS_Save();
		void StartAutosaverTimer();
		void StartGameLerp();
		void ActorPreSave();
		void ReceivePossess(class APawn* PossessedPawn);
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void SaveToCloud();
		void SensitivityChanged(float NewValue);
		void ToggleAutosaveChanged(bool NewValue);
		void ReceiveDestroyed();
		void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_1(float AxisValue);
		void ActorLoaded();
		void ExecuteUbergraph_BP_GameController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
