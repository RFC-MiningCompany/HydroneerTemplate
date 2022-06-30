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
	 * BlueprintGeneratedClass BP_ParentLogicExplosives.BP_ParentLogicExplosives_C
	 * Size -> 0x0020 (FullSize[0x03C8] - InheritedSize[0x03A8])
	 */
	class ABP_ParentLogicExplosives_C : public ABP_ParentLogic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_Explosive_C*                                     AC_Explosive;                                            // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAC_ResourceSpawn_C*                                 AC_ResourceSpawn;                                        // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       X_Box;                                                   // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void OverrideLogicIn(class USceneComponent* Component);
		void ExecuteUbergraph_BP_ParentLogicExplosives(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
