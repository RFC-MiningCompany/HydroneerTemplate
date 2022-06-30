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
	 * BlueprintGeneratedClass BP_LogicWeightReader.BP_LogicWeightReader_C
	 * Size -> 0x003C (FullSize[0x03E4] - InheritedSize[0x03A8])
	 */
	class ABP_LogicWeightReader_C : public ABP_ParentLogic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       X_Box;                                                   // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Z_Box;                                                   // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Arrow;                                                // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       WeightDetectBox;                                         // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender;                                              // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Arrow2;                                               // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Counter;                                                 // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void OverrideLoaded();
		void OverrideStartPlacing();
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void OverridePickedup();
		void BndEvt__BP_LogicWeightReader_WeightDetectBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OverrideLogicIn(class USceneComponent* Component);
		void ExecuteUbergraph_BP_LogicWeightReader(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
