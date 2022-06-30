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
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ComponentsToSave
	 */
	struct ABP_ParentVehicle_C_ComponentsToSave_Params
	{
	public:
		TArray<class UActorComponent*>                             Components;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.CanEnter?
	 */
	struct ABP_ParentVehicle_C_CanEnter__Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.FreezePhysics
	 */
	struct ABP_ParentVehicle_C_FreezePhysics_Params
	{
	public:
		bool                                                       bNewState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ForceWheelsToRestLength
	 */
	struct ABP_ParentVehicle_C_ForceWheelsToRestLength_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyFriction
	 */
	struct ABP_ParentVehicle_C_ApplyFriction_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.RecalculateCargoWeight
	 */
	struct ABP_ParentVehicle_C_RecalculateCargoWeight_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyCargoWeight
	 */
	struct ABP_ParentVehicle_C_ApplyCargoWeight_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.RemoveCargo
	 */
	struct ABP_ParentVehicle_C_RemoveCargo_Params
	{
	public:
		E_CargoType_E_CargoType                                    Cargo_Type;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.AddCargo
	 */
	struct ABP_ParentVehicle_C_AddCargo_Params
	{
	public:
		E_CargoType_E_CargoType                                    Cargo_Type;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.OnLand
	 */
	struct ABP_ParentVehicle_C_OnLand_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.TickCameraZoom
	 */
	struct ABP_ParentVehicle_C_TickCameraZoom_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.DetachPawnFromVehicle
	 */
	struct ABP_ParentVehicle_C_DetachPawnFromVehicle_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.AttachPawnToVehicle
	 */
	struct ABP_ParentVehicle_C_AttachPawnToVehicle_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.SetHeadlights
	 */
	struct ABP_ParentVehicle_C_SetHeadlights_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ToggleHeadlights
	 */
	struct ABP_ParentVehicle_C_ToggleHeadlights_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.DrawDebugForces
	 */
	struct ABP_ParentVehicle_C_DrawDebugForces_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyWheelRotation
	 */
	struct ABP_ParentVehicle_C_ApplyWheelRotation_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyTireForce
	 */
	struct ABP_ParentVehicle_C_ApplyTireForce_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.GetTireForce
	 */
	struct ABP_ParentVehicle_C_GetTireForce_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.GetWheelLinearVelocityLocal
	 */
	struct ABP_ParentVehicle_C_GetWheelLinearVelocityLocal_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateWheelLocation
	 */
	struct ABP_ParentVehicle_C_UpdateWheelLocation_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ApplySuspensionForce
	 */
	struct ABP_ParentVehicle_C_ApplySuspensionForce_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.GetSuspensionForce
	 */
	struct ABP_ParentVehicle_C_GetSuspensionForce_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateSuspensionLength
	 */
	struct ABP_ParentVehicle_C_UpdateSuspensionLength_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.SuspensionInit
	 */
	struct ABP_ParentVehicle_C_SuspensionInit_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.SetupReferences
	 */
	struct ABP_ParentVehicle_C_SetupReferences_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.RayInit
	 */
	struct ABP_ParentVehicle_C_RayInit_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.RayCast
	 */
	struct ABP_ParentVehicle_C_RayCast_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.UserConstructionScript
	 */
	struct ABP_ParentVehicle_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__FinishedFunc
	 */
	struct ABP_ParentVehicle_C_TurnOnHeadlights__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__UpdateFunc
	 */
	struct ABP_ParentVehicle_C_TurnOnHeadlights__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__FinishedFunc
	 */
	struct ABP_ParentVehicle_C_BlendFuelSFX__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__UpdateFunc
	 */
	struct ABP_ParentVehicle_C_BlendFuelSFX__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__FinishedFunc
	 */
	struct ABP_ParentVehicle_C_Fuel_Light_Bleep__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__UpdateFunc
	 */
	struct ABP_ParentVehicle_C_Fuel_Light_Bleep__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__FinishedFunc
	 */
	struct ABP_ParentVehicle_C_CamTransition__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__UpdateFunc
	 */
	struct ABP_ParentVehicle_C_CamTransition__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
	 */
	struct ABP_ParentVehicle_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_2
	 */
	struct ABP_ParentVehicle_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_1
	 */
	struct ABP_ParentVehicle_C_InpActEvt_Jump_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.HornFinishCooldown
	 */
	struct ABP_ParentVehicle_C_HornFinishCooldown_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.EnterVehicle
	 */
	struct ABP_ParentVehicle_C_EnterVehicle_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveBeginPlay
	 */
	struct ABP_ParentVehicle_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.StartCamTransition
	 */
	struct ABP_ParentVehicle_C_StartCamTransition_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveTick
	 */
	struct ABP_ParentVehicle_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
	 */
	struct ABP_ParentVehicle_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
	 */
	struct ABP_ParentVehicle_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ExitVehicle
	 */
	struct ABP_ParentVehicle_C_ExitVehicle_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 */
	struct ABP_ParentVehicle_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.Yeet
	 */
	struct ABP_ParentVehicle_C_Yeet_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ActorSaved
	 */
	struct ABP_ParentVehicle_C_ActorSaved_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ActorPreSave
	 */
	struct ABP_ParentVehicle_C_ActorPreSave_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5
	 */
	struct ABP_ParentVehicle_C_InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6
	 */
	struct ABP_ParentVehicle_C_InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ActorLoaded
	 */
	struct ABP_ParentVehicle_C_ActorLoaded_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_Accelerate_K2Node_InputAxisEvent_3
	 */
	struct ABP_ParentVehicle_C_InpAxisEvt_Accelerate_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.FOVChanged
	 */
	struct ABP_ParentVehicle_C_FOVChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.BndEvt__BP_ParentVehicle_AC_Highlight_K2Node_ComponentBoundEvent_0_OnHighlighted__DelegateSignature
	 */
	struct ABP_ParentVehicle_C_BndEvt__BP_ParentVehicle_AC_Highlight_K2Node_ComponentBoundEvent_0_OnHighlighted__DelegateSignature_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.BndEvt__BP_ParentVehicle_AC_Highlight_K2Node_ComponentBoundEvent_1_OnUnhighlighted__DelegateSignature
	 */
	struct ABP_ParentVehicle_C_BndEvt__BP_ParentVehicle_AC_Highlight_K2Node_ComponentBoundEvent_1_OnUnhighlighted__DelegateSignature_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.BndEvt__BP_ParentVehicle_RefuelBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ParentVehicle_C_BndEvt__BP_ParentVehicle_RefuelBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.FuelVisualHeight
	 */
	struct ABP_ParentVehicle_C_FuelVisualHeight_Params
	{
	};

	/**
	 * Function BP_ParentVehicle.BP_ParentVehicle_C.ExecuteUbergraph_BP_ParentVehicle
	 */
	struct ABP_ParentVehicle_C_ExecuteUbergraph_BP_ParentVehicle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
