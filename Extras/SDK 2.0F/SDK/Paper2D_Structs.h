#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Paper2D.EFlipbookCollisionMode
	 */
	enum class Paper2D_EFlipbookCollisionMode : uint8_t
	{
		EFlipbookCollisionMode__NoCollision                = 0,
		EFlipbookCollisionMode__FirstFrameCollision        = 1,
		EFlipbookCollisionMode__EachFrameCollision         = 2,
		EFlipbookCollisionMode__EFlipbookCollisionMode_MAX = 3
	};

	/**
	 * Enum Paper2D.EPaperSpriteAtlasPadding
	 */
	enum class Paper2D_EPaperSpriteAtlasPadding : uint8_t
	{
		EPaperSpriteAtlasPadding__DilateBorder                 = 0,
		EPaperSpriteAtlasPadding__PadWithZero                  = 1,
		EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX = 2
	};

	/**
	 * Enum Paper2D.ETileMapProjectionMode
	 */
	enum class Paper2D_ETileMapProjectionMode : uint8_t
	{
		ETileMapProjectionMode__Orthogonal                 = 0,
		ETileMapProjectionMode__IsometricDiamond           = 1,
		ETileMapProjectionMode__IsometricStaggered         = 2,
		ETileMapProjectionMode__HexagonalStaggered         = 3,
		ETileMapProjectionMode__ETileMapProjectionMode_MAX = 4
	};

	/**
	 * Enum Paper2D.ESpritePivotMode
	 */
	enum class Paper2D_ESpritePivotMode : uint8_t
	{
		ESpritePivotMode__Top_Left             = 0,
		ESpritePivotMode__Top_Center           = 1,
		ESpritePivotMode__Top_Right            = 2,
		ESpritePivotMode__Center_Left          = 3,
		ESpritePivotMode__Center_Center        = 4,
		ESpritePivotMode__Center_Right         = 5,
		ESpritePivotMode__Bottom_Left          = 6,
		ESpritePivotMode__Bottom_Center        = 7,
		ESpritePivotMode__Bottom_Right         = 8,
		ESpritePivotMode__Custom               = 9,
		ESpritePivotMode__ESpritePivotMode_MAX = 10
	};

	/**
	 * Enum Paper2D.ESpritePolygonMode
	 */
	enum class Paper2D_ESpritePolygonMode : uint8_t
	{
		ESpritePolygonMode__SourceBoundingBox      = 0,
		ESpritePolygonMode__TightBoundingBox       = 1,
		ESpritePolygonMode__ShrinkWrapped          = 2,
		ESpritePolygonMode__FullyCustom            = 3,
		ESpritePolygonMode__Diced                  = 4,
		ESpritePolygonMode__ESpritePolygonMode_MAX = 5
	};

	/**
	 * Enum Paper2D.ESpriteShapeType
	 */
	enum class Paper2D_ESpriteShapeType : uint8_t
	{
		ESpriteShapeType__Box                  = 0,
		ESpriteShapeType__Circle               = 1,
		ESpriteShapeType__Polygon              = 2,
		ESpriteShapeType__ESpriteShapeType_MAX = 3
	};

	/**
	 * Enum Paper2D.ESpriteCollisionMode
	 */
	enum class Paper2D_ESpriteCollisionMode : uint8_t
	{
		ESpriteCollisionMode__None                     = 0,
		ESpriteCollisionMode__Use2DPhysics             = 1,
		ESpriteCollisionMode__Use3DPhysics             = 2,
		ESpriteCollisionMode__ESpriteCollisionMode_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Paper2D.PaperFlipbookKeyFrame
	 * Size -> 0x0010
	 */
	struct FPaperFlipbookKeyFrame
	{
	public:
		class UPaperSprite*                                        Sprite;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameRun;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RO1V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.SpriteInstanceData
	 * Size -> 0x0050
	 */
	struct FSpriteInstanceData
	{
	public:
		struct FMatrix                                             Transform;                                               // 0x0000(0x0040) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UPaperSprite*                                        SourceSprite;                                            // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VertexColor;                                             // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaterialIndex;                                           // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Paper2D.PaperSpriteSocket
	 * Size -> 0x0040
	 */
	struct FPaperSpriteSocket
	{
	public:
		struct FTransform                                          LocalTransform;                                          // 0x0000(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZ8S[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.PaperTerrainMaterialRule
	 * Size -> 0x0038
	 */
	struct FPaperTerrainMaterialRule
	{
	public:
		class UPaperSprite*                                        StartCap;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPaperSprite*>                                Body;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UPaperSprite*                                        EndCap;                                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumAngle;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumAngle;                                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XII3[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionOffset;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DrawOrder;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NU6R[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.PaperTileInfo
	 * Size -> 0x0010
	 */
	struct FPaperTileInfo
	{
	public:
		class UPaperTileSet*                                       TileSet;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PackedTileIndex;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVZA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.IntMargin
	 * Size -> 0x0010
	 */
	struct FIntMargin
	{
	public:
		int32_t                                                    Left;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Top;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Right;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Bottom;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Paper2D.PaperTileSetTerrain
	 * Size -> 0x0018
	 */
	struct FPaperTileSetTerrain
	{
	public:
		class FString                                              TerrainName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CenterTileIndex;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0S8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.SpriteGeometryShape
	 * Size -> 0x0030
	 */
	struct FSpriteGeometryShape
	{
	public:
		Paper2D_ESpriteShapeType                                   ShapeType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I89S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   Vertices;                                                // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           BoxSize;                                                 // 0x0018(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BoxPosition;                                             // 0x0020(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNegativeWinding;                                        // 0x002C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07IF[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.SpriteGeometryCollection
	 * Size -> 0x0030
	 */
	struct FSpriteGeometryCollection
	{
	public:
		TArray<struct FSpriteGeometryShape>                        Shapes;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		Paper2D_ESpritePolygonMode                                 GeometryType;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V46U[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PixelsPerSubdivisionX;                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PixelsPerSubdivisionY;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAvoidVertexMerging;                                     // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBV3[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlphaThreshold;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DetailAmount;                                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimplifyEpsilon;                                         // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VC8A[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.PaperTileMetadata
	 * Size -> 0x0040
	 */
	struct FPaperTileMetadata
	{
	public:
		class FName                                                UserDataName;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSpriteGeometryCollection                           CollisionData;                                           // 0x0008(0x0030) Edit, NativeAccessSpecifierPublic
		unsigned char                                              TerrainMembership[0x4];                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9G6N[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.PaperSpriteAtlasSlot
	 * Size -> 0x0040
	 */
	struct FPaperSpriteAtlasSlot
	{
	public:
		unsigned char                                              SpriteRef[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    AtlasIndex;                                              // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    X;                                                       // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NVY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.SpriteDrawCallRecord
	 * Size -> 0x00D0
	 */
	struct FSpriteDrawCallRecord
	{
	public:
		struct FVector                                             Destination;                                             // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YOJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            BaseTexture;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4S3[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Color;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNY4[0x84];                                  // 0x004C(0x0084) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Paper2D.SpriteAssetInitParameters
	 * Size -> 0x0040
	 */
	struct FSpriteAssetInitParameters
	{
	public:
		unsigned char                                              UnknownData_SNKL[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
