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
	 * BlueprintGeneratedClass BP_LogicSmelter.BP_LogicSmelter_C
	 * Size -> 0x00B8 (FullSize[0x0460] - InheritedSize[0x03A8])
	 */
	class ABP_LogicSmelter_C : public ABP_ParentLogic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                LogicNub;                                                // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_Durability_C*                                    AC_Durability;                                           // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Bar;                                                     // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ARM;                                                     // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PourParticle;                                            // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LiquidMesh;                                              // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       OreBox;                                                  // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FlameParticles;                                          // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Door2;                                                   // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Door1;                                                   // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Y_Box;                                                   // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Tip_94E748E74C0F968A13398B83E95E002C;         // 0x0410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_94E748E74C0F968A13398B83E95E002C;  // 0x0414(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KP0Y[0x3];                                   // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_09EEB7DC4D40DA927DF839A36F849DCE;  // 0x0420(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_09EEB7DC4D40DA927DF839A36F849DCE;  // 0x0424(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MHTW[0x3];                                   // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MetalType                                                CurrentLiquidType;                                       // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NS9O[0x3];                                   // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OreContent;                                              // 0x0434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      AllowedItems;                                            // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		E_LogicSmelterStages                                       SmelterStage;                                            // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DPZ3[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     FlameSound;                                              // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ParentBar_C*                                     SpawnedBar;                                              // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ComponentsToSave(TArray<class UActorComponent*>* Components);
		void SetNewLiquidType(E_MetalType InputPin);
		void FindLiquidClass(class ABP_ParentResource_C* NewParam, E_MetalType* Type);
		void SetLiquidHeight();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_0__Create_Bar__EventFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void NewItemInPot(class ABP_ParentResource_C* Item);
		void RotateDoors(bool Open_);
		void CreateBar();
		void TipBar(bool Up_);
		void PourParticles();
		void OverrideLoaded();
		void ToggleFlame(bool On_);
		void DropBar();
		void OverridePickedup();
		void TestForSparks();
		void ReturnDurability(float DurabilityAmount);
		void TryRepair(class ABP_ParentItem_C* RepairingTool);
		void DoneRepair();
		void FindDurability(class ABP_ParentItem_C* Item);
		void OverrideLogicIn(class USceneComponent* Component);
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void ExecuteUbergraph_BP_LogicSmelter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
