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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ST_NPC_Request.ST_NPC_Request
	 * Size -> 0x002C
	 */
	struct FST_NPC_Request
	{
	public:
		class UClass*                                              Class_10_80A531EB46F42A7ED8590D93FB1F14F6;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_NPC_RequestContents>                     Contents_14_BD5E0B104B757ED9799FEB9092188800;            // 0x0008(0x0010) Edit, BlueprintVisible
		float                                                      RelativeProbability_23_833F8AD8445B579584293ABA5BBBCC28; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G6TE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RewardClass_27_DAB8154045BCA9D59E6400A11909536B;         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RewardAmount_24_899F79E442EF8D44271F2DAE131A9071;        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
