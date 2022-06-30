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
	 * BlueprintGeneratedClass BP_ShelfRodStorage.BP_ShelfRodStorage_C
	 * Size -> 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
	 */
	class ABP_ShelfRodStorage_C : public ABP_ParentShelf_C
	{
	public:
		class USC_ShelfLocation_C*                                 SC_ShelfLocation7;                                       // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USC_ShelfLocation_C*                                 SC_ShelfLocation6;                                       // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USC_ShelfLocation_C*                                 SC_ShelfLocation5;                                       // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USC_ShelfLocation_C*                                 SC_ShelfLocation4;                                       // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USC_ShelfLocation_C*                                 SC_ShelfLocation3;                                       // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USC_ShelfLocation_C*                                 SC_ShelfLocation2;                                       // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USC_ShelfLocation_C*                                 SC_ShelfLocation1;                                       // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USC_ShelfLocation_C*                                 SC_ShelfLocation;                                        // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
