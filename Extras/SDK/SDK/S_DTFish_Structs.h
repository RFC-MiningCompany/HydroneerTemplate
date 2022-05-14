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
	 * UserDefinedStruct S_DTFish.S_DTFish
	 * Size -> 0x0048
	 */
	struct FS_DTFish
	{
	public:
		E_FishType                                                 Type_4_0BC375574CB011A04F011A80D3B0B877;                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QC8A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name_14_A74E44DC49472A95C3508585ED17534C;                // 0x0008(0x0018) Edit, BlueprintVisible
		class FText                                                Description_8_B6A3E9DD491F3B8D1CD0C28C9783C569;          // 0x0020(0x0018) Edit, BlueprintVisible
		int32_t                                                    Price_15_8AF2CC804DC195FE706F7997D3222616;               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6P32[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh_18_CCCE00EF4DA316470947819EE1BEE9E7;                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
