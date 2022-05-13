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
	 * BlueprintGeneratedClass BP_CreativeMenu.BP_CreativeMenu_C
	 * Size -> 0x004C (FullSize[0x026C] - InheritedSize[0x0220])
	 */
	class ABP_CreativeMenu_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMenuVisible;                                          // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLoaded;                                                 // 0x0231(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6LWZ[0x6];                                   // 0x0232(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_CreativeMenu_C*                                  UICreativeMenu;                                          // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FS_Item>                                     AllItems;                                                // 0x0240(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bBlackListed;                                            // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_383E[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CreativeItems;                                           // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    LoadedTimes;                                             // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RegisterItems(TArray<struct FS_Item>* Items);
		void RegisterStoreItems(TArray<struct FS_StoreItem>* Items);
		void SetUIVisibility(bool bIsVisible);
		void GetItemByClass(class UClass* ItemClass, struct FS_Item* Item);
		void DestroyActor();
		void LoadModItems();
		void GetTagBasedOnItemParent(class UClass* Item, TArray<class FString>* Tags);
		void LoadGameItems();
		void LoadAllItems();
		void InpActEvt_F7_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Ctrl_MiddleMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_EscMenu_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Ctrl_C_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ModStartup(const struct FS_Mod& ModInfo, const struct FS_ModLoaderConfig& ModLoader_Config);
		void ModsLoaded(E_ModTypes ModTypes);
		void ExecuteUbergraph_BP_CreativeMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
