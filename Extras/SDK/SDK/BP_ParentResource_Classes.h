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
	 * BlueprintGeneratedClass BP_ParentResource.BP_ParentResource_C
	 * Size -> 0x0019 (FullSize[0x0379] - InheritedSize[0x0360])
	 */
	class ABP_ParentResource_C : public ABP_ParentItem_C
	{
	public:
		float                                                      Weight;                                                  // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    BaseValue;                                               // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBoxComponent*>                               ConveyorsColliding;                                      // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       DoNotClear;                                              // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor

	public:
		void SetDoNotClear(bool DoNotClear);
		void CreateProxyItem();
		void SetResourceSize();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
