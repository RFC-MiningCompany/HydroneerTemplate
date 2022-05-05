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
	 * Function Paper2D.TileMapBlueprintLibrary.MakeTile
	 */
	struct UTileMapBlueprintLibrary_MakeTile_Params
	{
	public:
		int32_t                                                    TileIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPaperTileSet*                                       TileSet;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlipH;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlipV;                                                  // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlipD;                                                  // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPaperTileInfo                                      ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
	 */
	struct UTileMapBlueprintLibrary_GetTileUserData_Params
	{
	public:
		struct FPaperTileInfo                                      Tile;                                                    // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
	 */
	struct UTileMapBlueprintLibrary_GetTileTransform_Params
	{
	public:
		struct FPaperTileInfo                                      Tile;                                                    // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Paper2D.TileMapBlueprintLibrary.BreakTile
	 */
	struct UTileMapBlueprintLibrary_BreakTile_Params
	{
	public:
		struct FPaperTileInfo                                      Tile;                                                    // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    TileIndex;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPaperTileSet*                                       TileSet;                                                 // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlipH;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlipV;                                                  // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlipD;                                                  // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
