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
	 * BlueprintGeneratedClass BP_LogicHookDisplay.BP_LogicHookDisplay_C
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class ABP_LogicHookDisplay_C : public ABP_ParentHook_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                TextRender;                                              // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void TraceForParents();
		void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_);
		void OverridePickedup();
		void ExecuteUbergraph_BP_LogicHookDisplay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
