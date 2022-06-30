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
	 * BlueprintGeneratedClass BP_HookPressureGauge.BP_HookPressureGauge_C
	 * Size -> 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
	 */
	class ABP_HookPressureGauge_C : public ABP_ParentHook_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                TextRender;                                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_HookPressureGauge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
