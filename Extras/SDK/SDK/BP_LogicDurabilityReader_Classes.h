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
	 * BlueprintGeneratedClass BP_LogicDurabilityReader.BP_LogicDurabilityReader_C
	 * Size -> 0x0020 (FullSize[0x03F8] - InheritedSize[0x03D8])
	 */
	class ABP_LogicDurabilityReader_C : public ABP_ParentLogic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       X_Box;                                                   // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Lazer;                                                   // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ReadTimer;                                               // 0x03F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void TryRepair(class ABP_ParentItem_C* RepairingTool);
		void DoneRepair();
		void FindDurability(class ABP_ParentItem_C* Item);
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void OverridePickedup();
		void ReadTime();
		void ReturnDurability(float DurabilityAmount);
		void LoadCompleted();
		void ExecuteUbergraph_BP_LogicDurabilityReader(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
