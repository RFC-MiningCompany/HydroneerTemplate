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
	 * BlueprintGeneratedClass BP_ParentCraftedResource.BP_ParentCraftedResource_C
	 * Size -> 0x001B (FullSize[0x0374] - InheritedSize[0x0359])
	 */
	class ABP_ParentCraftedResource_C : public ABP_ParentResource_C
	{
	public:
		unsigned char                                              UnknownData_YSD6[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FS_ResourceClassAndWeight>                   CraftedMaterials;                                        // 0x0360(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                      PercentModifyer;                                         // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
