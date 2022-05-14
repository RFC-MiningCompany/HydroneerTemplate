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
	 * BlueprintGeneratedClass BP_ShelfFishTrophy.BP_ShelfFishTrophy_C
	 * Size -> 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
	 */
	class ABP_ShelfFishTrophy_C : public ABP_ParentShelf_C
	{
	public:
		class USC_ShelfLocation_C*                                 SC_ShelfLocation;                                        // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
