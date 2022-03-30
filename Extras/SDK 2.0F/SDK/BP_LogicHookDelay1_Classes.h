﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0F
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
	 * BlueprintGeneratedClass BP_LogicHookDelay1.BP_LogicHookDelay1_C
	 * Size -> 0x0009 (FullSize[0x03B1] - InheritedSize[0x03A8])
	 */
	class ABP_LogicHookDelay1_C : public ABP_ParentHook_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       DelayOver_;                                              // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_);
		void WaitForDelay(class ABP_ParentLogic_C* Logic, class USceneComponent* Component);
		void ExecuteUbergraph_BP_LogicHookDelay1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
