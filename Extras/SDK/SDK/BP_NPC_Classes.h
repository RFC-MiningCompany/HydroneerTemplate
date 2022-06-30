#pragma once

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
	 * BlueprintGeneratedClass BP_NPC.BP_NPC_C
	 * Size -> 0x0052 (FullSize[0x072A] - InheritedSize[0x06D8])
	 */
	class ABP_NPC_C : public ABP_Character_HydroGuy_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<class UDataTable*>                                  RequestTables;                                           // 0x06E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FST_NPC_Request                                     Request;                                                 // 0x06F0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FRandomStream                                       RequestStream;                                           // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NoDestructor
		bool                                                       HasRequest_;                                             // 0x0728(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor
		bool                                                       RequestResult;                                           // 0x0729(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		void ClearRequest();
		void SetRewardAmount(class ABP_ParentItem_C* Reward);
		void PickUpItem(class ABP_ParentItem_C* Item);
		void SpawnReward();
		void ConsumeItem();
		void DropItem();
		void ToggleDropDecal(class UStaticMeshComponent* ValidMeshIfTrue);
		bool Has_Valid_Request_();
		void MaterialsToContents(TArray<struct FS_ResourceClassAndWeight>* CraftedMaterials, TArray<struct FST_NPC_RequestContents>* RequestContents);
		void EvalReceivedContent(TArray<struct FS_ResourceClassAndWeight>* Contents, bool* Result);
		void EvalReceivedItem(class ABP_ParentItem_C* Item, bool* Result);
		void ReceiveItem(class ABP_ParentItem_C* Item, bool* Result);
		void SetRequestContents(const struct FST_NPC_Request& RequestIn, struct FST_NPC_Request* Request);
		void RollRequest(class FName* DebugName);
		void RollNewRequest();
		void UserConstructionScript();
		void OnNotifyEnd_731509EF45769C0577121694BD873863(const class FName& NotifyName);
		void OnNotifyBegin_731509EF45769C0577121694BD873863(const class FName& NotifyName);
		void OnInterrupted_731509EF45769C0577121694BD873863(const class FName& NotifyName);
		void OnBlendOut_731509EF45769C0577121694BD873863(const class FName& NotifyName);
		void OnCompleted_731509EF45769C0577121694BD873863(const class FName& NotifyName);
		void OnNotifyEnd_25A083C14E323A971D60D5963C246BF2(const class FName& NotifyName);
		void OnNotifyBegin_25A083C14E323A971D60D5963C246BF2(const class FName& NotifyName);
		void OnInterrupted_25A083C14E323A971D60D5963C246BF2(const class FName& NotifyName);
		void OnBlendOut_25A083C14E323A971D60D5963C246BF2(const class FName& NotifyName);
		void OnCompleted_25A083C14E323A971D60D5963C246BF2(const class FName& NotifyName);
		void OnNotifyEnd_364C0FBF4337767BB253D08BC93C2C0B(const class FName& NotifyName);
		void OnNotifyBegin_364C0FBF4337767BB253D08BC93C2C0B(const class FName& NotifyName);
		void OnInterrupted_364C0FBF4337767BB253D08BC93C2C0B(const class FName& NotifyName);
		void OnBlendOut_364C0FBF4337767BB253D08BC93C2C0B(const class FName& NotifyName);
		void OnCompleted_364C0FBF4337767BB253D08BC93C2C0B(const class FName& NotifyName);
		void ItemStored(class ABP_ParentItem_C* Item);
		void ActorPreSave();
		void ActorSaved();
		void ActorLoaded();
		void RejectItem();
		void AcceptItem();
		void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
		void ReceiveBeginPlay();
		void UseItem();
		void ExecuteUbergraph_BP_NPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
