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
	 * BlueprintGeneratedClass BP_LogicDualGreaterThan.BP_LogicDualGreaterThan_C
	 * Size -> 0x0008 (FullSize[0x0410] - InheritedSize[0x0408])
	 */
	class ABP_LogicDualGreaterThan_C : public ABP_ParentDualLogic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverrideLogicIn(class USceneComponent* Component);
		void ExecuteUbergraph_BP_LogicDualGreaterThan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
