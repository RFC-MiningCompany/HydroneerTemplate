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
	 * BlueprintGeneratedClass BP_WorldMap.BP_WorldMap_C
	 * Size -> 0x0017 (FullSize[0x0380] - InheritedSize[0x0369])
	 */
	class ABP_WorldMap_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_KV5C[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetComponent*                                    Widget;                                                  // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OverridePickedup();
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void ExecuteUbergraph_BP_WorldMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
