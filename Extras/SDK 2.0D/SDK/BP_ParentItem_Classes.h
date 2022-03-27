#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
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
	 * BlueprintGeneratedClass BP_ParentItem.BP_ParentItem_C
	 * Size -> 0x0120 (FullSize[0x0340] - InheritedSize[0x0220])
	 */
	class ABP_ParentItem_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_Highlight_C*                                     AC_Highlight;                                            // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    StoreSellPrice;                                          // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PaidFor_;                                                // 0x023C(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn
		E_ItemType_E_ItemType                                      ItemType;                                                // 0x023D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HXWW[0x2];                                   // 0x023E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              BeingStoredBy;                                           // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Name;                                                    // 0x0248(0x0018) Edit, BlueprintVisible
		class FText                                                Description;                                             // 0x0260(0x0018) Edit, BlueprintVisible
		bool                                                       PreventLock_;                                            // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4CLQ[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                URL_Extension;                                           // 0x0280(0x0018) Edit, BlueprintVisible
		bool                                                       InWater_;                                                // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4PV9[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FS_MeshMaterials>                            MeshMats;                                                // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class USoundBase*                                          DropSound;                                               // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_GameCharacter_C*                                 BeingCarriedBy;                                          // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<E_Badges_E_Badges>                                  Badges;                                                  // 0x02C0(0x0010) Edit, BlueprintVisible
		bool                                                       PreventPickup_;                                          // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_ItemSpawnType_E_ItemSpawnType                            SpawnType;                                               // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_T0QU[0x6];                                   // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ParentItem_C*                                    ProxyItem;                                               // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Socket;                                                  // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       HoldPose;                                                // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        PrimaryUseAnim;                                          // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        SecondaryUseAnim;                                        // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CreateProxy_;                                            // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_INA5[0xF];                                   // 0x0301(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ProxyOffset;                                             // 0x0310(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		void ToggleHighlight(bool Highlight_);
		void PlaySecondaryUseAnim();
		void PlayPrimaryUseAnim();
		void ToggleOnlyOwnerSee(bool OnlyOwnerSee);
		void SetProxyCollisionVisibility();
		void ToggleProxyItem(bool Enabled_);
		void CreateProxyItem();
		void SetMeshPhysicalReaction(E_PhyReact_E_PhyReact New_Reaction, class UStaticMeshComponent* Mesh);
		void RevertMaterials();
		void Change_Materials(class UMaterialInterface* Material, bool Temporary_);
		void LockPhysics();
		void PhysicsLockTimer();
		void Set_Item_Physical_Reactions(E_PhyReact_E_PhyReact New_Reaction);
		void SetAllResponseToChannel(Engine_ECollisionResponse NewResponse, Engine_ECollisionChannel Channel);
		void ScanForDropCollision(bool* Can_Drop_);
		void Scan_for_Items_on_Top();
		void UserConstructionScript();
		void OverrideLoaded();
		void OverridePickedup();
		void ItemPrecisionPlace(class ABP_GameCharacter_C* Player);
		void OverrideHighlighted();
		void OverrideUnhighlighted();
		void TriggerPhysics();
		void OverrideLockedPhysics();
		void FlashRed();
		void FlashRedTimer();
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void Cooldown();
		void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OverrideAnimFinished();
		void OverrideHit(class AActor* OtherActor);
		void ShelfItem(class AActor* BeingStoredBy);
		void ReceiveBeginPlay();
		void PaidForItem();
		void ActorLoaded();
		void ItemDropped();
		void ReceiveDestroyed();
		void BndEvt__BP_ParentItem_AC_Highlight_K2Node_ComponentBoundEvent_0_OnHighlighted__DelegateSignature(class ABP_GameController_C* Controller);
		void BndEvt__BP_ParentItem_AC_Highlight_K2Node_ComponentBoundEvent_1_OnUnhighlighted__DelegateSignature(class ABP_GameController_C* Controller);
		void ItemPickedUp(class ABP_GameCharacter_C* Player);
		void ActorSaved();
		void ActorPreSave();
		void ExecuteUbergraph_BP_ParentItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
