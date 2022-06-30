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
	 * BlueprintGeneratedClass BP_GrindingWheel.BP_GrindingWheel_C
	 * Size -> 0x0018 (FullSize[0x03A0] - InheritedSize[0x0388])
	 */
	class ABP_GrindingWheel_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_Animator_C*                                      AC_Animator;                                             // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                GrindWheel;                                              // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GrindGem(class ABP_ParentResource_C* UncutGem);
		void SpinWheel();
		void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
		void ExecuteUbergraph_BP_GrindingWheel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
