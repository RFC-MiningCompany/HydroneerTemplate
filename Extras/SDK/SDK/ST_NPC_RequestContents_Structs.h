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
	 * UserDefinedStruct ST_NPC_RequestContents.ST_NPC_RequestContents
	 * Size -> 0x0010
	 */
	struct FST_NPC_RequestContents
	{
	public:
		class UClass*                                              ResourceClass_7_8BA7D30443F7EA5F6F8316ABB9630A3B;        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinWeight_8_C293B4BF470664CB0CAE28875C56AD31;            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxWeight_9_18103AB640F8EF8C822192BAFE555602;            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
