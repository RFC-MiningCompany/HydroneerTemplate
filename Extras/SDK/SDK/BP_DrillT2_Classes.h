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
	 * BlueprintGeneratedClass BP_DrillT2.BP_DrillT2_C
	 * Size -> 0x002C (FullSize[0x0478] - InheritedSize[0x044C])
	 */
	class ABP_DrillT2_C : public ABP_ParentDrill_C
	{
	public:
		unsigned char                                              UnknownData_IZCF[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                Nub;                                                     // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DrillBit;                                                // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     DrillSound;                                              // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DrillSpinTimerHandle;                                    // 0x0470(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideDrillStart();
		void OverrideDrillStop();
		void AnimTimer();
		void ExecuteUbergraph_BP_DrillT2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
