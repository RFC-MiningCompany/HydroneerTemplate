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
	 * BlueprintGeneratedClass BP_ParentBed.BP_ParentBed_C
	 * Size -> 0x004C (FullSize[0x03D4] - InheritedSize[0x0388])
	 */
	class ABP_ParentBed_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UCameraComponent*                                    Camera;                                                  // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_V330[0x8];                                   // 0x0398(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OriginalPlayerTransform;                                 // 0x03A0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EyeFade;                                                 // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FadeEyesOut();
		void Deactivated(class ABP_GameController_C* Controller);
		void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
		void ExecuteUbergraph_BP_ParentBed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
