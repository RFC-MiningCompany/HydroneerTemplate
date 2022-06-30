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
	 * BlueprintGeneratedClass BP_ParentLogic.BP_ParentLogic_C
	 * Size -> 0x0030 (FullSize[0x03D8] - InheritedSize[0x03A8])
	 */
	class ABP_ParentLogic_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       OverflowPrevent_;                                        // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QPIA[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Logic;                                                   // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash
		bool                                                       ReceivedOverflow_;                                       // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BL0J[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        OverflowWaitTimer;                                       // 0x03D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void AttachmentFunctionalityCheck(class USceneComponent* Component, bool* CanPass_);
		void CastLogicOut(class USceneComponent* OutComponent, const class FString& Logic);
		void OverrideLogicIn(class USceneComponent* Component);
		void SpawnLogic(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
		void StackOverflowPrevention();
		void LogicIn(class USceneComponent* Component, const class FString& Logic);
		void OverrideWaterIn(class USceneComponent* Component, int32_t Quality, float Pressure);
		void OverridePickedup();
		void ExecuteUbergraph_BP_ParentLogic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
