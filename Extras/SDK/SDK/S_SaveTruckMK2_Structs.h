#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * UserDefinedStruct S_SaveTruckMK2.S_SaveTruckMK2
	 * Size -> 0x0045
	 */
	struct FS_SaveTruckMK2
	{
	public:
		class UClass*                                              Vehicle_9_4D024F97495B2D37C6BF659480232C6E;              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CNW4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Trans_5_1FCEAA98434951214AAC6EB444B18B64;                // 0x0010(0x0030) Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Fuel_12_D858E7C3473209BAF2BF548068060773;                // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_PaintTruck                                               PaintType_8_EDBD4AE642ABBE1A3F2EF0A819CA1BB3;            // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
