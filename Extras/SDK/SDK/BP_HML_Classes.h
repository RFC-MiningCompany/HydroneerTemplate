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
	 * BlueprintGeneratedClass BP_HML.BP_HML_C
	 * Size -> 0x00B9 (FullSize[0x02D9] - InheritedSize[0x0220])
	 */
	class ABP_HML_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUI_HML_C*                                           HMLUI;                                                   // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUIVisible;                                              // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85LR[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LoadedMods[0x50];                                        // 0x0239(0x0050) UNKNOWN PROPERTY: MapProperty
		class FString                                              LoaderVersion;                                           // 0x0290(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FS_Item>                                     ModItems;                                                // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FS_StoreItem>                                StoreItems;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FS_ModLoaderConfig                                  ModLoaderConfig;                                         // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UY6A[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ResetRegisterTimout;                                     // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       LoadWorkshopMods;                                        // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void LoadWorkhopMods();
		void RegisterMod();
		void SpawnStoreItems();
		void RegisterModStoreItems(const struct FS_Mod& Mod);
		void GetStoreItems(TArray<struct FS_StoreItem>* StoreItems);
		void GetRegistedItems(TArray<struct FS_Item>* Items);
		void GetLoadedMods();
		void RegisterModItems(const struct FS_Mod& Mod);
		void LoadMods();
		void WriteLog(const class FString& Line);
		void InpActEvt_F6_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_J_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_HML(int32_t EntryPoint);
		void ResetRegisterTimout__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
