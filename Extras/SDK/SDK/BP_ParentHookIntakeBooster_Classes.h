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
	 * BlueprintGeneratedClass BP_ParentHookIntakeBooster.BP_ParentHookIntakeBooster_C
	 * Size -> 0x0004 (FullSize[0x03AC] - InheritedSize[0x03A8])
	 */
	class ABP_ParentHookIntakeBooster_C : public ABP_ParentHook_C
	{
	public:
		float                                                      PressureBoost;                                           // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
