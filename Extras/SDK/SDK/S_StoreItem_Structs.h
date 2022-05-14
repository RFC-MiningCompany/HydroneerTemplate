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
	 * UserDefinedStruct S_StoreItem.S_StoreItem
	 * Size -> 0x0040
	 */
	struct FS_StoreItem
	{
	public:
		class UClass*                                              ItemClass_3_EDF4138943CBA2889E5D21B2C42A3803;            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      Tags_7_06A068D443746806E59CF488433892D9;                 // 0x0008(0x0010) Edit, BlueprintVisible
		bool                                                       OverrideSpawn_13_202E2A5A42718C569283FFAEFE572426;       // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DAYV[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location_16_1E8318D048386B28BB537B9CCF0B58AA;            // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Rotation_20_A3DBA82E4B546AD7F5F9F69912E3C079;            // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Scale_21_FF04B8D74EF42AB28B6D6293B4C47DE9;               // 0x0034(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
