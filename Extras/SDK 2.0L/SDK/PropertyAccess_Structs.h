#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * Enum PropertyAccess.EPropertyAccessCopyBatch
	 */
	enum class EPropertyAccessCopyBatch : uint8_t
	{
		InternalUnbatched = 0x0000000000000000,
		ExternalUnbatched = 0x0000000000000001,
		InternalBatched   = 0x0000000000000002,
		ExternalBatched   = 0x0000000000000003,
		Count             = 0x0000000000000004,
		MAX               = 0x0000000000000005
	};

	/**
	 * Enum PropertyAccess.EPropertyAccessCopyType
	 */
	enum class EPropertyAccessCopyType : uint8_t
	{
		None                = 0x0000000000000000,
		Plain               = 0x0000000000000001,
		Complex             = 0x0000000000000002,
		Bool                = 0x0000000000000003,
		Struct              = 0x0000000000000004,
		Object              = 0x0000000000000005,
		Name                = 0x0000000000000006,
		Array               = 0x0000000000000007,
		PromoteBoolToByte   = 0x0000000000000008,
		PromoteBoolToInt32  = 0x0000000000000009,
		PromoteBoolToInt64  = 0x000000000000000A,
		PromoteBoolToFloat  = 0x000000000000000B,
		PromoteByteToInt32  = 0x000000000000000C,
		PromoteByteToInt64  = 0x000000000000000D,
		PromoteByteToFloat  = 0x000000000000000E,
		PromoteInt32ToInt64 = 0x000000000000000F,
		PromoteInt32ToFloat = 0x0000000000000010,
		MAX                 = 0x0000000000000011
	};

	/**
	 * Enum PropertyAccess.EPropertyAccessObjectType
	 */
	enum class EPropertyAccessObjectType : uint8_t
	{
		None       = 0x0000000000000000,
		Object     = 0x0000000000000001,
		WeakObject = 0x0000000000000002,
		SoftObject = 0x0000000000000003,
		MAX        = 0x0000000000000004
	};

	/**
	 * Enum PropertyAccess.EPropertyAccessIndirectionType
	 */
	enum class EPropertyAccessIndirectionType : uint8_t
	{
		Offset         = 0x0000000000000000,
		Object         = 0x0000000000000001,
		Array          = 0x0000000000000002,
		ScriptFunction = 0x0000000000000003,
		NativeFunction = 0x0000000000000004,
		MAX            = 0x0000000000000005
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PropertyAccess.PropertyAccessSegment
	 * Size -> 0x0040
	 */
	struct FPropertyAccessSegment
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStruct*                                             Struct;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Property[0x20];                                          // 0x0010(0x0020) UNKNOWN PROPERTY: FieldPathProperty
		class UFunction*                                           Function;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ArrayIndex;                                              // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   Flags;                                                   // 0x003C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B41A[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessPath
	 * Size -> 0x000C
	 */
	struct FPropertyAccessPath
	{
	public:
		int32_t                                                    PathSegmentStartIndex;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    PathSegmentCount;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bHasEvents : 1;                                          // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MUVO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessCopy
	 * Size -> 0x0010
	 */
	struct FPropertyAccessCopy
	{
	public:
		int32_t                                                    AccessIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DestAccessStartIndex;                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DestAccessEndIndex;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPropertyAccessCopyType                                    Type;                                                    // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LAGR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessCopyBatch
	 * Size -> 0x0010
	 */
	struct FPropertyAccessCopyBatch
	{
	public:
		TArray<struct FPropertyAccessCopy>                         Copies;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
	 * Size -> 0x0030
	 */
	struct FPropertyAccessIndirectionChain
	{
	public:
		unsigned char                                              Property[0x20];                                          // 0x0000(0x0020) UNKNOWN PROPERTY: FieldPathProperty
		int32_t                                                    IndirectionStartIndex;                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    IndirectionEndIndex;                                     // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    EventId;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CVXJ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessIndirection
	 * Size -> 0x0040
	 */
	struct FPropertyAccessIndirection
	{
	public:
		unsigned char                                              ArrayProperty[0x20];                                     // 0x0000(0x0020) UNKNOWN PROPERTY: FieldPathProperty
		class UFunction*                                           Function;                                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ReturnBufferSize;                                        // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ReturnBufferAlignment;                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ArrayIndex;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   Offset;                                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPropertyAccessObjectType                                  ObjectType;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPropertyAccessIndirectionType                             Type;                                                    // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SEPF[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessLibrary
	 * Size -> 0x00C8
	 */
	struct FPropertyAccessLibrary
	{
	public:
		TArray<struct FPropertyAccessSegment>                      PathSegments;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessPath>                         SrcPaths;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessPath>                         DestPaths;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FPropertyAccessCopyBatch                            CopyBatches[0x4];                                        // 0x0030(0x0040) NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessIndirectionChain>             SrcAccesses;                                             // 0x0070(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessIndirectionChain>             DestAccesses;                                            // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessIndirection>                  Indirections;                                            // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            EventAccessIndices;                                      // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_960K[0x18];                                  // 0x00B0(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
