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
	 * BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
	 * Size -> 0x0030 (FullSize[0x0379] - InheritedSize[0x0349])
	 */
	class ABP_Lantern_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_G4XA[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPointLightComponent*                                PointLight;                                              // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_NewTrack_0_00491F854B0649577EAED7B7FFAF6AED;  // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_00491F854B0649577EAED7B7FFAF6AED;  // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4MCM[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       On_;                                                     // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_);
		void CreateProxyItem();
		void UserConstructionScript();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void WaterParticleHit();
		void OverrideLoaded();
		void InWater();
		void ToggleLight(bool TurnOn_);
		void ExecuteUbergraph_BP_Lantern(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
