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
	 * BlueprintGeneratedClass BP_ParentPipe.BP_ParentPipe_C
	 * Size -> 0x0020 (FullSize[0x03A8] - InheritedSize[0x0388])
	 */
	class ABP_ParentPipe_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		int32_t                                                    Quality;                                                 // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Pressure;                                                // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverflowPrevent_;                                        // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XIO1[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PressureDecrement;                                       // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        EmptyPipeTimerHandle;                                    // 0x03A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void AttachmentFunctionalityCheck(class USceneComponent* Component, bool* CanPass_);
		void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
		void SpawnWater(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
		void StackOverflowPrevention();
		void TimerTillEmpty();
		void OverrideEmptyWaterPipe();
		void WaterIn(class USceneComponent* Component, float RootPressure);
		void CastWaterOut(class USceneComponent* OutComponent, int32_t Quality, float Pressure, float RootPressure);
		void ExecuteUbergraph_BP_ParentPipe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
