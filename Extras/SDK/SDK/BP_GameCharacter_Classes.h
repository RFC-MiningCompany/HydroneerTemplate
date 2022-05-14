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
	 * BlueprintGeneratedClass BP_GameCharacter.BP_GameCharacter_C
	 * Size -> 0x00D0 (FullSize[0x0590] - InheritedSize[0x04C0])
	 */
	class ABP_GameCharacter_C : public AVoxelCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     CartSocket;                                              // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     CartPivot;                                               // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     BuildSocket;                                             // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     PlayerHand;                                              // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UDecalComponent*                                     Decal;                                                   // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     HeadSocket;                                              // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     RelativeRotSocket;                                       // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     SpringSocket;                                            // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UVoxelSimpleInvokerComponent*                        VoxelInvoker;                                            // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_5B7C34844FE3339F4853FABEAF5B603C;  // 0x0520(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_5B7C34844FE3339F4853FABEAF5B603C;  // 0x0524(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0OP4[0x3];                                   // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      ExplosionTimeLine_NewTrack_0_EC5F789A48CC562531DBFCB24F8D2C78; // 0x0530(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         ExplosionTimeLine__Direction_EC5F789A48CC562531DBFCB24F8D2C78; // 0x0534(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DMN6[0x3];                                   // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ExplosionTimeLine;                                       // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       Free_;                                                   // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D522[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_Water_C*>                                 WaterVolumesImIn;                                        // 0x0548(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       Headbob_;                                                // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P6HW[0x7];                                   // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        WalkingFootstepTimer;                                    // 0x0560(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RunningFootstepTimer;                                    // 0x0568(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       UsingCart_;                                              // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z817[0x3];                                   // 0x0571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CartRotSpeed;                                            // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        FlyingHatVertTimerHandle;                                // 0x0578(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      FlyingVertDirection;                                     // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InvertMouseY;                                            // 0x0584(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsingPallete_;                                           // 0x0585(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DB0A[0x2];                                   // 0x0586(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_GameController_C*                                GameController;                                          // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void UnattachItems();
		void Owchie();
		void CameraShake(E_CameraShakes Selection);
		void ToggleDropDecal(class UStaticMeshComponent* ValidMeshIfTrue);
		void PlaySoundJump();
		void FootstepWood();
		void FootstepDirt();
		void FootstepWater();
		void ExplosionTimeLine__FinishedFunc();
		void ExplosionTimeLine__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void InpActEvt_Jump_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Sprint_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Sprint_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3(float AxisValue);
		void ExplosionVignette();
		void NukeVignette();
		void FlyingHatVertTimer();
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue);
		void ReceivePossessed(class AController* NewController);
		void FOVChanged(float NewValue);
		void InvertMouseYChanged(bool NewValue);
		void HeadbobChanged(bool NewValue);
		void FlashCollision();
		void Destroy(class AActor* DestroyedActor);
		void ExecuteUbergraph_BP_GameCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
