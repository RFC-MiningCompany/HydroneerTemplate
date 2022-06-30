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
	 * UserDefinedStruct S_PaletteOption.S_PaletteOption
	 * Size -> 0x0020
	 */
	struct FS_PaletteOption
	{
	public:
		struct FLinearColor                                        DisplayColor_4_46D3487040187ACA40E679AE48A56F7C;         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Albedo_6_AAF0416445D1CFFCAB8D2286363EF017;               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
