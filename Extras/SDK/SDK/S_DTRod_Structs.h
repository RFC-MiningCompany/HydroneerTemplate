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
	 * UserDefinedStruct S_DTRod.S_DTRod
	 * Size -> 0x0058
	 */
	struct FS_DTRod
	{
	public:
		E_Rod                                                      Type_25_0BC375574CB011A04F011A80D3B0B877;                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VR06[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name_14_A74E44DC49472A95C3508585ED17534C;                // 0x0008(0x0018) Edit, BlueprintVisible
		class FText                                                Description_8_B6A3E9DD491F3B8D1CD0C28C9783C569;          // 0x0020(0x0018) Edit, BlueprintVisible
		int32_t                                                    Luck_32_7BAF4BEF4D241621F91E3DA2BE535D24;                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KE0C[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh_18_CCCE00EF4DA316470947819EE1BEE9E7;                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LineColor_29_3D848A784259CAA3A1117DA7691D4EB1;           // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
