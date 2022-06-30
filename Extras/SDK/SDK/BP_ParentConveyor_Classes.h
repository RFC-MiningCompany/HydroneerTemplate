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
	 * BlueprintGeneratedClass BP_ParentConveyor.BP_ParentConveyor_C
	 * Size -> 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
	 */
	class ABP_ParentConveyor_C : public ABP_ParentHook_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAudioComponent*                                     S_Conveyor_Running;                                      // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                Belt;                                                    // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                Arrow;                                                   // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            BeltMaterial;                                            // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MoveYMaterial_;                                          // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BXDD[0x3];                                   // 0x03F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeltPressure;                                            // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_GameCharacter_C*>                         CharactersToMove;                                        // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void GetHookedParentPressure(class ABP_ParentItem_C* HookedParent);
		void ConveyActors(TArray<class AActor*>* ItemsToMove, TArray<class AActor*>* CharactersToMove, const struct FVector& DeltaLocation, float DeltaTime);
		void ExitBelt(class AActor* Actor, TArray<class ABP_ParentItem_C*> MovingItems, TArray<class ABP_GameCharacter_C*> MovingCharacters, class UBoxComponent* ConveyorBox, bool* BeltEmpty_);
		void EnterBelt(class AActor* Actor, TArray<class ABP_ParentItem_C*>* MovingItems, TArray<class ABP_GameCharacter_C*> MovingCharacters, class UBoxComponent* ConveyorBox, bool* Result);
		void FindBeltSpeed(class USceneComponent* Component, struct FVector* DeltaLocationToAdd);
		void CanMoveItem_(class AActor* Actor, TArray<class ABP_ParentItem_C*>* CurrentlyMovingItems, TArray<class ABP_GameCharacter_C*> MovingCharacters, bool* CanMove_, class ABP_ParentResource_C** ResourceRef);
		void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_);
		void ChangeBeltSpeed();
		void UserConstructionScript();
		void ItemPickedUp(class ABP_GameCharacter_C* Player);
		void OverrideParentNoWater();
		void ShovelOnToConveyor(int32_t Quality, float Size);
		void ItemExitConveyor(class ABP_ParentItem_C* Item, const struct FVector& ForwardVec);
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void OverrideHookCheckRot();
		void OverrideStartPlacing();
		void ExecuteUbergraph_BP_ParentConveyor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
