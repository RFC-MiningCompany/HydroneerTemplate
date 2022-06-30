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
	 * BlueprintGeneratedClass BP_MiningHelmet.BP_MiningHelmet_C
	 * Size -> 0x0031 (FullSize[0x03C1] - InheritedSize[0x0390])
	 */
	class ABP_MiningHelmet_C : public ABP_ParentHat_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0390(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class URectLightComponent*                                 RectLight;                                               // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URectLightComponent*                                 RectLight1;                                              // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_D5296FD143D2ED95CD7316B9842BF492;  // 0x03A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_D5296FD143D2ED95CD7316B9842BF492;  // 0x03AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P20R[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       On_;                                                     // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void WaterParticleHit();
		void OverrideHatOn(class ABP_GameCharacter_C* Character);
		void OverrideHatOff(class ABP_GameCharacter_C* Character);
		void InWater();
		void ExecuteUbergraph_BP_MiningHelmet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
