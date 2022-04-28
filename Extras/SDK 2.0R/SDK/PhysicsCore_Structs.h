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
	 * Enum PhysicsCore.ECollisionTraceFlag
	 */
	enum class ECollisionTraceFlag : uint8_t
	{
		CTF_UseDefault          = 0x0000000000000000,
		CTF_UseSimpleAndComplex = 0x0000000000000001,
		CTF_UseSimpleAsComplex  = 0x0000000000000002,
		CTF_UseComplexAsSimple  = 0x0000000000000003,
		CTF_MAX                 = 0x0000000000000004
	};

	/**
	 * Enum PhysicsCore.ESleepFamily
	 */
	enum class ESleepFamily : uint8_t
	{
		Normal    = 0x0000000000000000,
		Sensitive = 0x0000000000000001,
		Custom    = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum PhysicsCore.EBodyCollisionResponse
	 */
	enum class EBodyCollisionResponse : uint8_t
	{
		BodyCollision_Enabled  = 0x0000000000000000,
		BodyCollision_Disabled = 0x0000000000000001,
		BodyCollision_MAX      = 0x0000000000000002
	};

	/**
	 * Enum PhysicsCore.EPhysicsType
	 */
	enum class EPhysicsType : uint8_t
	{
		PhysType_Default   = 0x0000000000000000,
		PhysType_Kinematic = 0x0000000000000001,
		PhysType_Simulated = 0x0000000000000002,
		PhysType_MAX       = 0x0000000000000003
	};

	/**
	 * Enum PhysicsCore.ELinearConstraintMotion
	 */
	enum class ELinearConstraintMotion : uint8_t
	{
		LCM_Free    = 0x0000000000000000,
		LCM_Limited = 0x0000000000000001,
		LCM_Locked  = 0x0000000000000002,
		LCM_MAX     = 0x0000000000000003
	};

	/**
	 * Enum PhysicsCore.EConstraintFrame
	 */
	enum class EConstraintFrame : uint8_t
	{
		Frame1 = 0x0000000000000000,
		Frame2 = 0x0000000000000001,
		MAX    = 0x0000000000000002
	};

	/**
	 * Enum PhysicsCore.EAngularConstraintMotion
	 */
	enum class EAngularConstraintMotion : uint8_t
	{
		ACM_Free    = 0x0000000000000000,
		ACM_Limited = 0x0000000000000001,
		ACM_Locked  = 0x0000000000000002,
		ACM_MAX     = 0x0000000000000003
	};

	/**
	 * Enum PhysicsCore.ERadialImpulseFalloff
	 */
	enum class ERadialImpulseFalloff : uint8_t
	{
		RIF_Constant = 0x0000000000000000,
		RIF_Linear   = 0x0000000000000001,
		RIF_MAX      = 0x0000000000000002
	};

	/**
	 * Enum PhysicsCore.EPhysicalSurface
	 */
	enum class EPhysicalSurface : uint8_t
	{
		SurfaceType_Default = 0x0000000000000000,
		SurfaceType1        = 0x0000000000000001,
		SurfaceType2        = 0x0000000000000002,
		SurfaceType3        = 0x0000000000000003,
		SurfaceType4        = 0x0000000000000004,
		SurfaceType5        = 0x0000000000000005,
		SurfaceType6        = 0x0000000000000006,
		SurfaceType7        = 0x0000000000000007,
		SurfaceType8        = 0x0000000000000008,
		SurfaceType9        = 0x0000000000000009,
		SurfaceType10       = 0x000000000000000A,
		SurfaceType11       = 0x000000000000000B,
		SurfaceType12       = 0x000000000000000C,
		SurfaceType13       = 0x000000000000000D,
		SurfaceType14       = 0x000000000000000E,
		SurfaceType15       = 0x000000000000000F,
		SurfaceType16       = 0x0000000000000010,
		SurfaceType17       = 0x0000000000000011,
		SurfaceType18       = 0x0000000000000012,
		SurfaceType19       = 0x0000000000000013,
		SurfaceType20       = 0x0000000000000014,
		SurfaceType21       = 0x0000000000000015,
		SurfaceType22       = 0x0000000000000016,
		SurfaceType23       = 0x0000000000000017,
		SurfaceType24       = 0x0000000000000018,
		SurfaceType25       = 0x0000000000000019,
		SurfaceType26       = 0x000000000000001A,
		SurfaceType27       = 0x000000000000001B,
		SurfaceType28       = 0x000000000000001C,
		SurfaceType29       = 0x000000000000001D,
		SurfaceType30       = 0x000000000000001E,
		SurfaceType31       = 0x000000000000001F,
		SurfaceType32       = 0x0000000000000020,
		SurfaceType33       = 0x0000000000000021,
		SurfaceType34       = 0x0000000000000022,
		SurfaceType35       = 0x0000000000000023,
		SurfaceType36       = 0x0000000000000024,
		SurfaceType37       = 0x0000000000000025,
		SurfaceType38       = 0x0000000000000026,
		SurfaceType39       = 0x0000000000000027,
		SurfaceType40       = 0x0000000000000028,
		SurfaceType41       = 0x0000000000000029,
		SurfaceType42       = 0x000000000000002A,
		SurfaceType43       = 0x000000000000002B,
		SurfaceType44       = 0x000000000000002C,
		SurfaceType45       = 0x000000000000002D,
		SurfaceType46       = 0x000000000000002E,
		SurfaceType47       = 0x000000000000002F,
		SurfaceType48       = 0x0000000000000030,
		SurfaceType49       = 0x0000000000000031,
		SurfaceType50       = 0x0000000000000032,
		SurfaceType51       = 0x0000000000000033,
		SurfaceType52       = 0x0000000000000034,
		SurfaceType53       = 0x0000000000000035,
		SurfaceType54       = 0x0000000000000036,
		SurfaceType55       = 0x0000000000000037,
		SurfaceType56       = 0x0000000000000038,
		SurfaceType57       = 0x0000000000000039,
		SurfaceType58       = 0x000000000000003A,
		SurfaceType59       = 0x000000000000003B,
		SurfaceType60       = 0x000000000000003C,
		SurfaceType61       = 0x000000000000003D,
		SurfaceType62       = 0x000000000000003E,
		SurfaceType_Max     = 0x000000000000003F,
		MAX                 = 0x0000000000000040
	};

	/**
	 * Enum PhysicsCore.EFrictionCombineMode
	 */
	enum class EFrictionCombineMode : uint8_t
	{
		Average  = 0x0000000000000000,
		Min      = 0x0000000000000001,
		Multiply = 0x0000000000000002,
		Max      = 0x0000000000000003
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PhysicsCore.BodyInstanceCore
	 * Size -> 0x0018
	 */
	struct FBodyInstanceCore
	{
	public:
		unsigned char                                              UnknownData_2O78[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bSimulatePhysics : 1;                                    // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideMass : 1;                                       // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableGravity : 1;                                      // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoWeld : 1;                                           // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStartAwake : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateWakeEvents : 1;                                 // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdateMassWhenScaleChanges : 1;                         // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V4Y3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
