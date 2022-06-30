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
	 * BlueprintGeneratedClass BP_LogicButton.BP_LogicButton_C
	 * Size -> 0x0020 (FullSize[0x03D9] - InheritedSize[0x03B9])
	 */
	class ABP_LogicButton_C : public ABP_ParentLogicSymbol_C
	{
	public:
		unsigned char                                              UnknownData_WRE4[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Button;                                                  // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       X_Box;                                                   // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       CanUse_;                                                 // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
		void ExecuteUbergraph_BP_LogicButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
