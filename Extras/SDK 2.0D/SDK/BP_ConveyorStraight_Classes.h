#pragma once

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
	 * BlueprintGeneratedClass BP_ConveyorStraight.BP_ConveyorStraight_C
	 * Size -> 0x0028 (FullSize[0x0400] - InheritedSize[0x03D8])
	 */
	class ABP_ConveyorStraight_C : public ABP_ParentConveyor_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_ParentItem_C*>                            ItemsToMove;                                             // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        ConveyorTimerHandle;                                     // 0x03F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void BeltTimer();
		void NewItemInBelt(class AActor* OtherActor);
		void ItemRemovedFromBelt(class AActor* InputPin);
		void ExecuteUbergraph_BP_ConveyorStraight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
