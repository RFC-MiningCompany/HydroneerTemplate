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
	 * BlueprintGeneratedClass BP_FiniteStoreItem.BP_FiniteStoreItem_C
	 * Size -> 0x0029 (FullSize[0x0249] - InheritedSize[0x0220])
	 */
	class ABP_FiniteStoreItem_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ItemLocks;                                               // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ItemToSell;                                              // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ABP_ParentItem_C*                                    SpawnedStoreItem;                                        // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SoldItem_;                                               // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor

	public:
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		void ActorPreSave();
		void ActorSaved();
		void ItemStored(class ABP_ParentItem_C* Item);
		void ReceiveBeginPlay();
		void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
		void RestockItem();
		void CheckIfItemSold(TArray<class ABP_ParentItem_C*> Items);
		void ActorLoaded();
		void ExecuteUbergraph_BP_FiniteStoreItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
