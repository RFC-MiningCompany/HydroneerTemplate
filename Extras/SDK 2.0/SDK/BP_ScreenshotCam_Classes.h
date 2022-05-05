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
	 * BlueprintGeneratedClass BP_ScreenshotCam.BP_ScreenshotCam_C
	 * Size -> 0x0080 (FullSize[0x0300] - InheritedSize[0x0280])
	 */
	class ABP_ScreenshotCam_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UVoxelSimpleInvokerComponent*                        VoxelInvoker;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFloatingPawnMovement*                               FloatingPawnMovement;                                    // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUI_ScreenshotCam_C*                                 UI;                                                      // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ForwardMovementTimer;                                    // 0x02B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RightMovementTimer;                                      // 0x02B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DownTimer;                                               // 0x02C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_GameController_C*                                PlayerController;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FKey                                                E_Key;                                                   // 0x02D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		E_CameraFilters                                            CurrentFilter;                                           // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4J4Q[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedModifier;                                           // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ScreenshotBoundary_C*                            Boundary;                                                // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Greenscreen_C*                                   GreenScreen;                                             // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InpActEvt_Crouch_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ToggleCinematicBars();
		void DownTime();
		void UpTime();
		void ChangeTime(float Amount);
		void ReceiveBeginPlay();
		void ChangeFilter(bool Next_);
		void ResetFilters();
		void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3(float AxisValue);
		void ChangeFOV(float Amount);
		void ChangeSpeed(float Amount);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ToggleGreenscreen();
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
		void ExecuteUbergraph_BP_ScreenshotCam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
