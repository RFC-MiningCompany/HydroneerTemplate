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
	 * BlueprintGeneratedClass BP_LogicHookFlip.BP_LogicHookFlip_C
	 * Size -> 0x0000 (FullSize[0x03A8] - InheritedSize[0x03A8])
	 */
	class ABP_LogicHookFlip_C : public ABP_ParentHook_C
	{
	public:
		void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
