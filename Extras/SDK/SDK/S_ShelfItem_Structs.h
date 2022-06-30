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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_ShelfItem.S_ShelfItem
	 * Size -> 0x0040
	 */
	struct FS_ShelfItem
	{
	public:
		class UClass*                                              Class_3_721954DC4A7EDC6A044AE491E61B2705;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SYCQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_8_947E21CF4814A6A670189EAEC7632598;            // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
