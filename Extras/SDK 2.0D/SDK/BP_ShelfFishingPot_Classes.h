﻿#pragma once

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
	 * BlueprintGeneratedClass BP_ShelfFishingPot.BP_ShelfFishingPot_C
	 * Size -> 0x0020 (FullSize[0x03C0] - InheritedSize[0x03A0])
	 */
	class ABP_ShelfFishingPot_C : public ABP_ParentShelf_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_ResourceSpawn_C*                                 AC_ResourceSpawn;                                        // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USC_ShelfLocation_C*                                 SC_ShelfLocation;                                        // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        FishingTimer;                                            // 0x03B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void CatchFish();
		void OverrideLoaded();
		void ExecuteUbergraph_BP_ShelfFishingPot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
