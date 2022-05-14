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
	 * BlueprintGeneratedClass AC_Durability.AC_Durability_C
	 * Size -> 0x000C (FullSize[0x00BC] - InheritedSize[0x00B0])
	 */
	class UAC_Durability_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Durability;                                              // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Repaired(class ABP_ParentItem_C* RepairingTool);
		void TryRepair(class ABP_ParentItem_C* RepairingTool);
		void DoneRepair();
		void FindDurability(class ABP_ParentItem_C* Item);
		void ReturnDurability(float DurabilityAmount);
		void ExecuteUbergraph_AC_Durability(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
