#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0R
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
	 * Enum Foliage.EFoliageScaling
	 */
	enum class EFoliageScaling : uint8_t
	{
		Uniform = 0x0000000000000000,
		Free    = 0x0000000000000001,
		LockXY  = 0x0000000000000002,
		LockXZ  = 0x0000000000000003,
		LockYZ  = 0x0000000000000004,
		MAX     = 0x0000000000000005
	};

	/**
	 * Enum Foliage.EVertexColorMaskChannel
	 */
	enum class EVertexColorMaskChannel : uint8_t
	{
		Red      = 0x0000000000000000,
		Green    = 0x0000000000000001,
		Blue     = 0x0000000000000002,
		Alpha    = 0x0000000000000003,
		MAX_None = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum Foliage.FoliageVertexColorMask
	 */
	enum class EFoliageVertexColorMask : uint8_t
	{
		FOLIAGEVERTEXCOLORMASK_Disabled = 0x0000000000000000,
		FOLIAGEVERTEXCOLORMASK_Red      = 0x0000000000000001,
		FOLIAGEVERTEXCOLORMASK_Green    = 0x0000000000000002,
		FOLIAGEVERTEXCOLORMASK_Blue     = 0x0000000000000003,
		FOLIAGEVERTEXCOLORMASK_Alpha    = 0x0000000000000004,
		FOLIAGEVERTEXCOLORMASK_MAX      = 0x0000000000000005
	};

	/**
	 * Enum Foliage.ESimulationQuery
	 */
	enum class ESimulationQuery : uint8_t
	{
		None             = 0x0000000000000000,
		CollisionOverlap = 0x0000000000000001,
		ShadeOverlap     = 0x0000000000000002,
		AnyOverlap       = 0x0000000000000003,
		MAX              = 0x0000000000000004
	};

	/**
	 * Enum Foliage.ESimulationOverlap
	 */
	enum class ESimulationOverlap : uint8_t
	{
		CollisionOverlap = 0x0000000000000000,
		ShadeOverlap     = 0x0000000000000001,
		None             = 0x0000000000000002,
		MAX              = 0x0000000000000003
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Foliage.FoliageVertexColorChannelMask
	 * Size -> 0x000C
	 */
	struct FFoliageVertexColorChannelMask
	{
	public:
		unsigned char                                              UseMask : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JF4V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaskThreshold;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InvertMask : 1;                                          // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87HT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Foliage.FoliageTypeObject
	 * Size -> 0x0020
	 */
	struct FFoliageTypeObject
	{
	public:
		class UObject*                                             FoliageTypeObject;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFoliageType*                                        TypeInstance;                                            // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsAsset;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UDE8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Type;                                                    // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Foliage.ProceduralFoliageInstance
	 * Size -> 0x0050
	 */
	struct FProceduralFoliageInstance
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Age;                                                     // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFoliageType*                                        Type;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91ND[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
