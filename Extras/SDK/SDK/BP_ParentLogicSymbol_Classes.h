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
	 * BlueprintGeneratedClass BP_ParentLogicSymbol.BP_ParentLogicSymbol_C
	 * Size -> 0x0011 (FullSize[0x03B9] - InheritedSize[0x03A8])
	 */
	class ABP_ParentLogicSymbol_C : public ABP_ParentLogic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Symbol;                                                  // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		E_LogicButtonSymbols                                       CurrentSymbol;                                           // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ChangeSymbol();
		void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
		void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
		void ActorLoaded();
		void ExecuteUbergraph_BP_ParentLogicSymbol(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
