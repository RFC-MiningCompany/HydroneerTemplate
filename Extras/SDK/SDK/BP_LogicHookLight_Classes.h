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
	 * BlueprintGeneratedClass BP_LogicHookLight.BP_LogicHookLight_C
	 * Size -> 0x0048 (FullSize[0x0410] - InheritedSize[0x03C8])
	 */
	class ABP_LogicHookLight_C : public ABP_ParentHook_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight;                                               // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_1_Alpha_57A53BA042C5E263D5C22CBF1D8B8EAA;       // 0x03D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_57A53BA042C5E263D5C22CBF1D8B8EAA;  // 0x03DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6T3Z[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_D9E9CE0D445A7192AE7F4A820EFDA114;  // 0x03E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_D9E9CE0D445A7192AE7F4A820EFDA114;  // 0x03EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D9K2[0x3];                                   // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PreviousLogic;                                           // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void TraceForParents();
		void TurnOffLight();
		void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void RaiseBrightness(bool Up_);
		void ChangeColor(const struct FVector& A);
		void NewLogicInput(class ABP_ParentLogic_C* LogicItem);
		void OverridePickedup();
		void ActorLoaded();
		void ExecuteUbergraph_BP_LogicHookLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
