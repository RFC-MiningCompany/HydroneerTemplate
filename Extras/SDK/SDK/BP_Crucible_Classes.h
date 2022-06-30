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
	 * BlueprintGeneratedClass BP_Crucible.BP_Crucible_C
	 * Size -> 0x0067 (FullSize[0x03B0] - InheritedSize[0x0349])
	 */
	class ABP_Crucible_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_QIA4[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_Storage_C*                                       AC_Storage;                                              // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_Heat_C*                                          AC_Heat;                                                 // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_Animator_C*                                      AC_Animator;                                             // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LiquidMesh;                                              // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cylinder;                                                // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalOreContentSize;                                     // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_81DP[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TestClass;                                               // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_MetalType                                                CurrentLiquidType;                                       // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4VZP[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AllowedResources;                                        // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_);
		void LoopResourcesForTargets(class UClass* Ore, class UClass* Bar, TArray<class ABP_ParentResource_C*>* Items);
		void FindTestClass(E_MetalType CurrentMoltenType, TArray<class ABP_ParentResource_C*>* Class, int32_t* BarOut);
		void UserConstructionScript();
		void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
		void WaterParticleHit();
		void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void SpawnBar(class ABP_Mould_C* Mould);
		void PlayPourAnim();
		void OverrideLoaded();
		void UpdateVisuals();
		void HeatUpdated(float Heat);
		void FullHeat();
		void InFire();
		void OutOfFire();
		void InWater();
		void ItemStored(class ABP_ParentItem_C* Item);
		void BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ExecuteUbergraph_BP_Crucible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
