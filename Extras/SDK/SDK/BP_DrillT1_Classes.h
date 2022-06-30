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
	 * BlueprintGeneratedClass BP_DrillT1.BP_DrillT1_C
	 * Size -> 0x001C (FullSize[0x0438] - InheritedSize[0x041C])
	 */
	class ABP_DrillT1_C : public ABP_ParentDrill_C
	{
	public:
		unsigned char                                              UnknownData_9TA5[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                Nub;                                                     // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Ram;                                                     // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OverridePlayOneShotAnim();
		void ExecuteUbergraph_BP_DrillT1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
