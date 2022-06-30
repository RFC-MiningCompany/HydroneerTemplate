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
	 * BlueprintGeneratedClass BP_ParentPipe.BP_ParentPipe_C
	 * Size -> 0x0038 (FullSize[0x03E0] - InheritedSize[0x03A8])
	 */
	class ABP_ParentPipe_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		int32_t                                                    Quality;                                                 // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Pressure;                                                // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverflowPrevent_;                                        // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LAMH[0x3];                                   // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PressureDecrement;                                       // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReceivedOverflow_;                                       // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GMH9[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        EmptyPipeTimerHandle;                                    // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      TimeoutEmpty;                                            // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaximumPressure;                                         // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        OverflowWaitTimer;                                       // 0x03D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void PipeDebug(const struct FVector& DebugLoc, const struct FLinearColor& LineColor);
		void ConveyPressure(float Pressure);
		void Pressure_Check(class ABP_ParentPipe_C* Pipe, float PressureToPass, class USceneComponent* WaterOut);
		void AttachmentFunctionalityCheck(class USceneComponent* Component, bool* CanPass_);
		void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
		void SpawnWater(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
		void StackOverflowPrevention();
		void TimerTillEmpty();
		void OverrideEmptyWaterPipe();
		void WaterIn(class USceneComponent* Component, float RootPressure);
		void CastWaterOut(class USceneComponent* OutComponent, int32_t Quality, float Pressure, float RootPressure);
		void ReceiveOverflowWait();
		void ExecuteUbergraph_BP_ParentPipe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
