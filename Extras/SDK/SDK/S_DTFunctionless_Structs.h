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
	 * UserDefinedStruct S_DTFunctionless.S_DTFunctionless
	 * Size -> 0x0070
	 */
	struct FS_DTFunctionless
	{
	public:
		class FText                                                Name_6_F7DF8D9644204240F823B7957E99127A;                 // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                Description_7_72D3ABB040B2D309AE8AD38B9F03198C;          // 0x0018(0x0018) Edit, BlueprintVisible
		int32_t                                                    StoreSellPrice_9_87B7F9F340952C3B014CF5888331009B;       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B10B[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                URL_12_BDEBE72747BFD50FEFDAE89565A18D38;                 // 0x0038(0x0018) Edit, BlueprintVisible
		E_PlacementType                                            PlacementType_21_B2C702A846D4FE4D7F584D9AB4CEB3D9;       // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanRTY__25_290FAB484E0C0DDA5BC2429A81A6197A;             // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RWMH[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh_30_7E1891BD4211200E9F0BCAB8D7DD4452;                // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          DropSound_15_047AD14B493506B16705209C6E5046F5;           // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         GridSquare_31_5D24B1F0427187E5917B3694993C9A72;          // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
