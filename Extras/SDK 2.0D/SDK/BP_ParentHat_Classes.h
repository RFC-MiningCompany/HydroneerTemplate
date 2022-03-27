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
	 * BlueprintGeneratedClass BP_ParentHat.BP_ParentHat_C
	 * Size -> 0x000F (FullSize[0x0358] - InheritedSize[0x0349])
	 */
	class ABP_ParentHat_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_6RHS[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void Equip(bool Equiped_, class ABP_GameCharacter_C* Character);
		void OverrideHatOn(class ABP_GameCharacter_C* Character);
		void OverrideHatOff(class ABP_GameCharacter_C* Character);
		void BndEvt__BP_ParentHat_AC_Highlight_K2Node_ComponentBoundEvent_0_OnHighlighted__DelegateSignature(class ABP_GameController_C* Controller);
		void BndEvt__BP_ParentHat_AC_Highlight_K2Node_ComponentBoundEvent_1_OnUnhighlighted__DelegateSignature(class ABP_GameController_C* Controller);
		void ExecuteUbergraph_BP_ParentHat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
