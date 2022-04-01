#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0H
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
	 * BlueprintGeneratedClass BP_ParentShelf.BP_ParentShelf_C
	 * Size -> 0x0038 (FullSize[0x03C0] - InheritedSize[0x0388])
	 */
	class ABP_ParentShelf_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<struct FS_ShelfItem>                                Accepted_Items;                                          // 0x0390(0x0010) Edit, BlueprintVisible
		struct FVector                                             StoredItemBoxTrace;                                      // 0x03A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LYWF[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      StoredSavedItems;                                        // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame

	public:
		void Shelf_Trace(TArray<struct FHitResult>* Hits);
		void TraceForStoredItems();
		void CanStore_(class ABP_ParentItem_C* Item, bool* CanStore_, class USC_ShelfLocation_C** Location, struct FS_ShelfItem* ItemData);
		void NewItemToShelf(class ABP_ParentItem_C* Item);
		void ActorLoaded();
		void ActorPreSave();
		void ExecuteUbergraph_BP_ParentShelf(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
