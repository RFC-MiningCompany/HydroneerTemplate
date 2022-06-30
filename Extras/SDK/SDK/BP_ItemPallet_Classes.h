﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * BlueprintGeneratedClass BP_ItemPallet.BP_ItemPallet_C
	 * Size -> 0x0028 (FullSize[0x03D0] - InheritedSize[0x03A8])
	 */
	class ABP_ItemPallet_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_Storage_C*                                       AC_Storage;                                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       StorageBox;                                              // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      BannedItems;                                             // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ItemStored(class ABP_ParentItem_C* Item);
		void BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OverridePickedup();
		void OverrideStartPlacing();
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void OverrideLockedPhysics();
		void ChangeAttachedReactions(E_PhyReact New_Reaction);
		void BndEvt__BP_ItemPallet_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ActorLoaded();
		void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature();
		void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature();
		void MassReset();
		void AttachedItemDropReaction();
		void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
		void ExecuteUbergraph_BP_ItemPallet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
