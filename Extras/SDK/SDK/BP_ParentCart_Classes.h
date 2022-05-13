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
	 * BlueprintGeneratedClass BP_ParentCart.BP_ParentCart_C
	 * Size -> 0x0050 (FullSize[0x0390] - InheritedSize[0x0340])
	 */
	class ABP_ParentCart_C : public ABP_ParentItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAC_Storage_C*                                       AC_Storage;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       StorageBox;                                              // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Wheels;                                                  // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerMovementSpeed;                                     // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CartRotSpeed;                                            // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     MovementSoundRef;                                        // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        MovementTimerRef;                                        // 0x0370(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            WheelsDynamicMaterial;                                   // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastLocation;                                            // 0x0380(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationAngle;                                           // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CalculateWheelTurn(float DeltaSeconds);
		void ScanForDropCollision(bool* Can_Drop_);
		void ToggleProxyItem(bool Enabled_);
		void UserConstructionScript();
		void OnCompleted_2BE4533747F6C74629003980D5B62B52();
		void ItemStored(class ABP_ParentItem_C* Item);
		void Movement_Sound();
		void ToggleMovementSound(bool Condition);
		void BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OverridePickedup();
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void OverrideLockedPhysics();
		void ChangeAttachedReactionss(E_PhyReact New_Reaction);
		void BndEvt__BP_ParentCart_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
		void ReceiveDestroyed();
		void ReceiveTick(float DeltaSeconds);
		void ActorLoaded();
		void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature();
		void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature();
		void ResetMass();
		void ExecuteUbergraph_BP_ParentCart(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
