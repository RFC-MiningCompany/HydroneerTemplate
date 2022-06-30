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
	 * BlueprintGeneratedClass BP_LogicHookFlipFlop.BP_LogicHookFlipFlop_C
	 * Size -> 0x0001 (FullSize[0x03C9] - InheritedSize[0x03C8])
	 */
	class ABP_LogicHookFlipFlop_C : public ABP_ParentHook_C
	{
	public:
		bool                                                       Flip_;                                                   // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
