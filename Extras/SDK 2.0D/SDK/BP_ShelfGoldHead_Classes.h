#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
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
	 * BlueprintGeneratedClass BP_ShelfGoldHead.BP_ShelfGoldHead_C
	 * Size -> 0x0008 (FullSize[0x03A8] - InheritedSize[0x03A0])
	 */
	class ABP_ShelfGoldHead_C : public ABP_ParentShelf_C
	{
	public:
		class USC_ShelfLocation_C*                                 SC_ShelfLocation;                                        // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
