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
	 * UserDefinedStruct S_SaveGenericVehicle.S_SaveGenericVehicle
	 * Size -> 0x0044
	 */
	struct FS_SaveGenericVehicle
	{
	public:
		class UClass*                                              Vehicle_2_4D024F97495B2D37C6BF659480232C6E;              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5TMR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Trans_5_1FCEAA98434951214AAC6EB444B18B64;                // 0x0010(0x0030) Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor
		float                                                      Fuel_8_1E613F04478EFF4550E7548ACEF353B6;                 // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
