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
	 * BlueprintGeneratedClass BP_Spanner.BP_Spanner_C
	 * Size -> 0x001F (FullSize[0x0368] - InheritedSize[0x0349])
	 */
	class ABP_Spanner_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_9PII[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_Animator_C*                                      AC_Animator;                                             // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_Finite_C*                                        AC_Finite;                                               // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_);
		void TryRepair(class ABP_ParentItem_C* RepairingTool);
		void FindDurability(class ABP_ParentItem_C* Item);
		void ReturnDurability(float DurabilityAmount);
		void DoneRepair();
		void OverrideAnimFinished();
		void OverrideHit(class AActor* OtherActor);
		void ExecuteUbergraph_BP_Spanner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
