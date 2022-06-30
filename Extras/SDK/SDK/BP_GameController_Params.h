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
	 * Function BP_GameController.BP_GameController_C.ComponentsToSave
	 */
	struct ABP_GameController_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.MenuFocusTick
	 */
	struct ABP_GameController_C_MenuFocusTick_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ToggleMenuFocusTimer
	 */
	struct ABP_GameController_C_ToggleMenuFocusTimer_Params
	{
	public:
		bool                                                       On_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ScanForItemsOnTop
	 */
	struct ABP_GameController_C_ScanForItemsOnTop_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExtentX;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExtentY;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SetHUD_Crosshair
	 */
	struct ABP_GameController_C_SetHUD_Crosshair_Params
	{
	public:
		E_Crosshairs_E_Crosshairs                                  Crosshair;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.BoxTraceForRelics
	 */
	struct ABP_GameController_C_BoxTraceForRelics_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SetStartPosition
	 */
	struct ABP_GameController_C_SetStartPosition_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.MoveVehicleToNearestUnstickPoint
	 */
	struct ABP_GameController_C_MoveVehicleToNearestUnstickPoint_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.Hrrm
	 */
	struct ABP_GameController_C_Hrrm_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.InitController
	 */
	struct ABP_GameController_C_InitController_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.PlayerIsThief
	 */
	struct ABP_GameController_C_PlayerIsThief_Params
	{
	public:
		class ABP_WorldStore_C*                                    Store;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.Spawn Store Item
	 */
	struct ABP_GameController_C_Spawn_Store_Item_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ChangeBuildRotation
	 */
	struct ABP_GameController_C_ChangeBuildRotation_Params
	{
	public:
		int32_t                                                    XYZ_;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.TryPickupItem
	 */
	struct ABP_GameController_C_TryPickupItem_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.LineTraceFromCharacter
	 */
	struct ABP_GameController_C_LineTraceFromCharacter_Params
	{
	public:
		struct FHitResult                                          OutHit;                                                  // 0x0000(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x008C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SetDiscordNote
	 */
	struct ABP_GameController_C_SetDiscordNote_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.StartFreeplacing
	 */
	struct ABP_GameController_C_StartFreeplacing_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.DeniedDrop
	 */
	struct ABP_GameController_C_DeniedDrop_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.PickUpItem
	 */
	struct ABP_GameController_C_PickUpItem_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.DigCheckForRelics
	 */
	struct ABP_GameController_C_DigCheckForRelics_Params
	{
	public:
		class AActor*                                              ActorHit;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.GetSaveSlot
	 */
	struct ABP_GameController_C_GetSaveSlot_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              SlotName;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsCloud_;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SpawnMusic
	 */
	struct ABP_GameController_C_SpawnMusic_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.RecallVehicle
	 */
	struct ABP_GameController_C_RecallVehicle_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.RemoveDirtVehicle
	 */
	struct ABP_GameController_C_RemoveDirtVehicle_Params
	{
	public:
		struct FVector                                             Location1;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location2;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.CameraShake
	 */
	struct ABP_GameController_C_CameraShake_Params
	{
	public:
		E_CameraShakes_E_CameraShakes                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.RemoveDirtLine
	 */
	struct ABP_GameController_C_RemoveDirtLine_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ExitVehicle
	 */
	struct ABP_GameController_C_ExitVehicle_Params
	{
	public:
		class AActor*                                              Vehicle;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.EnterNewVehicle
	 */
	struct ABP_GameController_C_EnterNewVehicle_Params
	{
	public:
		class AActor*                                              Vehicle;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.UnhighlightObject
	 */
	struct ABP_GameController_C_UnhighlightObject_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.HighlightObject
	 */
	struct ABP_GameController_C_HighlightObject_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.TryHighlightObject
	 */
	struct ABP_GameController_C_TryHighlightObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       Result;                                                  // 0x008C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SpawnInitialItems
	 */
	struct ABP_GameController_C_SpawnInitialItems_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.MovePlayerToNearestUnstickPoint
	 */
	struct ABP_GameController_C_MovePlayerToNearestUnstickPoint_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.PostOpenUI
	 */
	struct ABP_GameController_C_PostOpenUI_Params
	{
	public:
		class UUserWidget*                                         OpenUI;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.CloseAllUI
	 */
	struct ABP_GameController_C_CloseAllUI_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.DropItem
	 */
	struct ABP_GameController_C_DropItem_Params
	{
	public:
		bool                                                       TrueDrop;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.PositionItemTimer
	 */
	struct ABP_GameController_C_PositionItemTimer_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.CrosshairTrace
	 */
	struct ABP_GameController_C_CrosshairTrace_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.MoveTimeline__FinishedFunc
	 */
	struct ABP_GameController_C_MoveTimeline__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.MoveTimeline__UpdateFunc
	 */
	struct ABP_GameController_C_MoveTimeline__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_4
	 */
	struct ABP_GameController_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3
	 */
	struct ABP_GameController_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Rotate_K2Node_InputActionEvent_12
	 */
	struct ABP_GameController_C_InpActEvt_Rotate_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Rotate2_K2Node_InputActionEvent_11
	 */
	struct ABP_GameController_C_InpActEvt_Rotate2_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_10
	 */
	struct ABP_GameController_C_InpActEvt_Pickup_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Pickup_K2Node_InputActionEvent_9
	 */
	struct ABP_GameController_C_InpActEvt_Pickup_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_VehicleKey_K2Node_InputActionEvent_8
	 */
	struct ABP_GameController_C_InpActEvt_VehicleKey_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Rotate3_K2Node_InputActionEvent_7
	 */
	struct ABP_GameController_C_InpActEvt_Rotate3_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Wiki_K2Node_InputActionEvent_6
	 */
	struct ABP_GameController_C_InpActEvt_Wiki_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_5
	 */
	struct ABP_GameController_C_InpActEvt_RMB_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_RMB_K2Node_InputActionEvent_4
	 */
	struct ABP_GameController_C_InpActEvt_RMB_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.OnCompleted_9EE0ABC14602C7545F03D1AF77EC46FC
	 */
	struct ABP_GameController_C_OnCompleted_9EE0ABC14602C7545F03D1AF77EC46FC_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_LMB_K2Node_InputActionEvent_3
	 */
	struct ABP_GameController_C_InpActEvt_LMB_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_LMB_K2Node_InputActionEvent_2
	 */
	struct ABP_GameController_C_InpActEvt_LMB_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_Zero_K2Node_InputKeyEvent_2
	 */
	struct ABP_GameController_C_InpActEvt_Zero_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
	 */
	struct ABP_GameController_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpActEvt_EscMenu_K2Node_InputActionEvent_1
	 */
	struct ABP_GameController_C_InpActEvt_EscMenu_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.MoveDirt
	 */
	struct ABP_GameController_C_MoveDirt_Params
	{
	public:
		bool                                                       PickUp_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.FreePlayer
	 */
	struct ABP_GameController_C_FreePlayer_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.autosave
	 */
	struct ABP_GameController_C_autosave_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.NoLongerPlacingItem
	 */
	struct ABP_GameController_C_NoLongerPlacingItem_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.LevelTerrain
	 */
	struct ABP_GameController_C_LevelTerrain_Params
	{
	public:
		struct FVoxelIntBox                                        Remove;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FVoxelIntBox                                        Add;                                                     // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.PlaceDownItem
	 */
	struct ABP_GameController_C_PlaceDownItem_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.PositioningItem
	 */
	struct ABP_GameController_C_PositioningItem_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.RemoveDirtByLocation
	 */
	struct ABP_GameController_C_RemoveDirtByLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.VehicleRemoveDirt
	 */
	struct ABP_GameController_C_VehicleRemoveDirt_Params
	{
	public:
		struct FVector                                             Location1;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location2;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.HudAlertDropped
	 */
	struct ABP_GameController_C_HudAlertDropped_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ReceiveTick
	 */
	struct ABP_GameController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ReceiveBeginPlay
	 */
	struct ABP_GameController_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ActorSaved
	 */
	struct ABP_GameController_C_ActorSaved_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ActorLoaded
	 */
	struct ABP_GameController_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ToggleScreenshotCam
	 */
	struct ABP_GameController_C_ToggleScreenshotCam_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ChangeTime
	 */
	struct ABP_GameController_C_ChangeTime_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.PauseTime
	 */
	struct ABP_GameController_C_PauseTime_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.LerpToCharacter
	 */
	struct ABP_GameController_C_LerpToCharacter_Params
	{
	public:
		class ABP_ParentItem_C*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Socket_Component;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.PickupLerpTimer
	 */
	struct ABP_GameController_C_PickupLerpTimer_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.EMS Save
	 */
	struct ABP_GameController_C_EMS_Save_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.StartAutosaverTimer
	 */
	struct ABP_GameController_C_StartAutosaverTimer_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.StartGameLerp
	 */
	struct ABP_GameController_C_StartGameLerp_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ActorPreSave
	 */
	struct ABP_GameController_C_ActorPreSave_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.ReceivePossess
	 */
	struct ABP_GameController_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ReceiveUnPossess
	 */
	struct ABP_GameController_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.SaveToCloud
	 */
	struct ABP_GameController_C_SaveToCloud_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.SensitivityChanged
	 */
	struct ABP_GameController_C_SensitivityChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ToggleAutosaveChanged
	 */
	struct ABP_GameController_C_ToggleAutosaveChanged_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ReceiveDestroyed
	 */
	struct ABP_GameController_C_ReceiveDestroyed_Params
	{
	};

	/**
	 * Function BP_GameController.BP_GameController_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_1
	 */
	struct ABP_GameController_C_InpAxisEvt_MouseRight_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_GameController.BP_GameController_C.ExecuteUbergraph_BP_GameController
	 */
	struct ABP_GameController_C_ExecuteUbergraph_BP_GameController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
