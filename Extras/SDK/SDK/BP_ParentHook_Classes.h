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
	 * BlueprintGeneratedClass BP_ParentHook.BP_ParentHook_C
	 * Size -> 0x0020 (FullSize[0x03C8] - InheritedSize[0x03A8])
	 */
	class ABP_ParentHook_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_ParentBuild_C*                                   HookedParent;                                            // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      AllowedToHookTo;                                         // 0x03B8(0x0010) Edit, BlueprintVisible

	public:
		void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool* CanPass_);
		void PartHooked(class ABP_ParentBuild_C* HookedTo);
		void Unhook_from_Parent();
		void TraceForParents();
		void OverridePlacedDown(class ABP_GameCharacter_C* Character);
		void OverridePickedup();
		void OverrideParentNoWater();
		void OverridePartHooked(class ABP_ParentBuild_C* HookedTo);
		void OverrideLogicIn(const class FString& Logic);
		void OverrideHookCheckRot();
		void LoadCompleted();
		void ExecuteUbergraph_BP_ParentHook(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
