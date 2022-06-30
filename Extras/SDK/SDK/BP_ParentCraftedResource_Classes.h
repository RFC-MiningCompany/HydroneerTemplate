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
	 * BlueprintGeneratedClass BP_ParentCraftedResource.BP_ParentCraftedResource_C
	 * Size -> 0x0023 (FullSize[0x039C] - InheritedSize[0x0379])
	 */
	class ABP_ParentCraftedResource_C : public ABP_ParentResource_C
	{
	public:
		unsigned char                                              UnknownData_W26E[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<struct FS_ResourceClassAndWeight>                   CraftedMaterials;                                        // 0x0388(0x0010) Edit, BlueprintVisible, SaveGame, ExposeOnSpawn
		float                                                      PercentModifyer;                                         // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetCraftedScale();
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void ActorLoaded();
		void ExecuteUbergraph_BP_ParentCraftedResource(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
