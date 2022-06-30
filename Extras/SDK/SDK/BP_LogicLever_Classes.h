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
	 * BlueprintGeneratedClass BP_LogicLever.BP_LogicLever_C
	 * Size -> 0x0030 (FullSize[0x0419] - InheritedSize[0x03E9])
	 */
	class ABP_LogicLever_C : public ABP_ParentLogicSymbol_C
	{
	public:
		unsigned char                                              UnknownData_N88A[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_Animator_C*                                      AC_Animator;                                             // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Lever;                                                   // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       X_Box;                                                   // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       CanUse_;                                                 // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OverrideLoaded();
		void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
		void OverrideAnimFinished();
		void ExecuteUbergraph_BP_LogicLever(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
