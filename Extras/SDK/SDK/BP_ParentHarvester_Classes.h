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
	 * BlueprintGeneratedClass BP_ParentHarvester.BP_ParentHarvester_C
	 * Size -> 0x0080 (FullSize[0x0460] - InheritedSize[0x03E0])
	 */
	class ABP_ParentHarvester_C : public ABP_ParentPipe_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                Drum2;                                                   // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Drum1;                                                   // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SpawnLocation;                                           // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_ResourceSpawn_C*                                 AC_ResourceSpawn;                                        // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Harvesting;                                              // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SparksLocation;                                          // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       IntakeBox;                                               // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_Durability_C*                                    AC_Durability;                                           // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SpinTimerHandle;                                         // 0x0428(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     HarvesterSound;                                          // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxDrillingDepth;                                        // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IEO6[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Harvesting_Sound;                                        // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Crushing_Sound;                                          // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            HarvestingDirtCloud;                                     // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   HarvestingParticles;                                     // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CalcPressureBoost(float Weight, int32_t* DirtLoads);
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		void DoneRepair();
		void ReturnDurability(float DurabilityAmount);
		void TryRepair(class ABP_ParentItem_C* RepairingTool);
		void FindDurability(class ABP_ParentItem_C* Item);
		void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
		void OverrideEmptyWaterPipe();
		void OverridePickedup();
		void ToggleHarvester(bool On_);
		void SpinTimer();
		void BndEvt__Harvesting_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void RefreshHarvestingCollision();
		void ExecuteUbergraph_BP_ParentHarvester(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
