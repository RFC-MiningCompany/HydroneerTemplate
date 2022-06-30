#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
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
	 * BlueprintGeneratedClass BP_ToolBag.BP_ToolBag_C
	 * Size -> 0x0047 (FullSize[0x0390] - InheritedSize[0x0349])
	 */
	class ABP_ToolBag_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_6FBC[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_Animator_C*                                      AC_Animator;                                             // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_Finite_C*                                        AC_Finite;                                               // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh5;                                             // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh4;                                             // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh3;                                             // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh2;                                             // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_);
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		void TryRepair(class ABP_ParentItem_C* RepairingTool);
		void FindDurability(class ABP_ParentItem_C* Item);
		void ReturnDurability(float DurabilityAmount);
		void RefreshTools();
		void DoneRepair();
		void OverrideAnimFinished();
		void ActorLoaded();
		void ExecuteUbergraph_BP_ToolBag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
