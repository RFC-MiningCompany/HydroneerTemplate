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
	 * BlueprintGeneratedClass BP_ParentSeedBag.BP_ParentSeedBag_C
	 * Size -> 0x0037 (FullSize[0x03A0] - InheritedSize[0x0369])
	 */
	class ABP_ParentSeedBag_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_ZIUH[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FTimerHandle                                        TraceTimerHandle;                                        // 0x0378(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              PlacingCrop[0x8];                                        // 0x0380(0x0008) UNKNOWN PROPERTY: ObjectProperty
		class UClass*                                              Crop;                                                    // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanPlace_;                                               // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9PYX[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              FoundationCurrentlyLookingAt[0x8];                       // 0x0391(0x0008) UNKNOWN PROPERTY: ObjectProperty

	public:
		void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_);
		void TraceTimer();
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void LMBUpWhileCarrying();
		void ExecuteUbergraph_BP_ParentSeedBag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
