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
	 * BlueprintGeneratedClass BP_ParentPipeElbow.BP_ParentPipeElbow_C
	 * Size -> 0x0018 (FullSize[0x03F8] - InheritedSize[0x03E0])
	 */
	class ABP_ParentPipeElbow_C : public ABP_ParentPipe_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBoxComponent*                                       Y_Box;                                                   // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       X_Box;                                                   // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
		void ExecuteUbergraph_BP_ParentPipeElbow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
