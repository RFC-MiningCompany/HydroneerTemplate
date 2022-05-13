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
	 * BlueprintGeneratedClass BP_ParentShovel.BP_ParentShovel_C
	 * Size -> 0x002F (FullSize[0x0378] - InheritedSize[0x0349])
	 */
	class ABP_ParentShovel_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_VBHJ[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAC_ResourceSpawn_C*                                 AC_ResourceSpawn;                                        // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAC_Animator_C*                                      AC_Animator;                                             // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                Dirt;                                                    // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    DirtQuality;                                             // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxDepth;                                                // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_);
		void DirtFX(bool ShowDirt_);
		void HitActorItem(class ABP_GameController_C* Controller, class AActor* HitActor, bool* Success_);
		void HitActorSpecialDig(class ABP_GameController_C* Controller, class AActor* HitActor);
		void CantMine(const struct FVector& HitLocation);
		void SetDirt(bool Making_Hole_, int32_t Quality);
		void ExecuteUbergraph_BP_ParentShovel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
