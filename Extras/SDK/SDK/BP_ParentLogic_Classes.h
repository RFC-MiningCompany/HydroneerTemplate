#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * Size -> 0x0020 (FullSize[0x03A8] - InheritedSize[0x0388])
	 */
	class ABP_ParentLogic_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       OverflowPrevent_;                                        // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A7XW[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Logic;                                                   // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash

	public:
		void AttachmentFunctionalityCheck(class USceneComponent* Component, bool* CanPass_);
		void CastLogicOut(class USceneComponent* OutComponent, const class FString& Logic);
		void OverrideLogicIn(class USceneComponent* Component);
		void SpawnLogic(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
		void StackOverflowPrevention();
		void LogicIn(class USceneComponent* Component, const class FString& Logic);
		void OverrideWaterIn(class USceneComponent* Component, int32_t Quality, float Pressure);
		void ExecuteUbergraph_BP_ParentLogic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
