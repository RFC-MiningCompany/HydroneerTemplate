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
	 * Enum CoreUObject.EInterpCurveMode
	 */
	enum class EInterpCurveMode : uint8_t
	{
		CIM_Linear           = 0x0000000000000000,
		CIM_CurveAuto        = 0x0000000000000001,
		CIM_Constant         = 0x0000000000000002,
		CIM_CurveUser        = 0x0000000000000003,
		CIM_CurveBreak       = 0x0000000000000004,
		CIM_CurveAutoClamped = 0x0000000000000005,
		CIM_MAX              = 0x0000000000000006
	};

	/**
	 * Enum CoreUObject.ERangeBoundTypes
	 */
	enum class ERangeBoundTypes : uint8_t
	{
		Exclusive = 0x0000000000000000,
		Inclusive = 0x0000000000000001,
		Open      = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum CoreUObject.ELocalizedTextSourceCategory
	 */
	enum class ELocalizedTextSourceCategory : uint8_t
	{
		Game   = 0x0000000000000000,
		Engine = 0x0000000000000001,
		Editor = 0x0000000000000002,
		MAX    = 0x0000000000000003
	};

	/**
	 * Enum CoreUObject.EAutomationEventType
	 */
	enum class EAutomationEventType : uint8_t
	{
		Info    = 0x0000000000000000,
		Warning = 0x0000000000000001,
		Error   = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum CoreUObject.ELifetimeCondition
	 */
	enum class ELifetimeCondition : uint8_t
	{
		COND_None                       = 0x0000000000000000,
		COND_InitialOnly                = 0x0000000000000001,
		COND_OwnerOnly                  = 0x0000000000000002,
		COND_SkipOwner                  = 0x0000000000000003,
		COND_SimulatedOnly              = 0x0000000000000004,
		COND_AutonomousOnly             = 0x0000000000000005,
		COND_SimulatedOrPhysics         = 0x0000000000000006,
		COND_InitialOrOwner             = 0x0000000000000007,
		COND_Custom                     = 0x0000000000000008,
		COND_ReplayOrOwner              = 0x0000000000000009,
		COND_ReplayOnly                 = 0x000000000000000A,
		COND_SimulatedOnlyNoReplay      = 0x000000000000000B,
		COND_SimulatedOrPhysicsNoReplay = 0x000000000000000C,
		COND_SkipReplay                 = 0x000000000000000D,
		COND_Never                      = 0x000000000000000E,
		COND_Max                        = 0x000000000000000F
	};

	/**
	 * Enum CoreUObject.EDataValidationResult
	 */
	enum class EDataValidationResult : uint8_t
	{
		Invalid      = 0x0000000000000000,
		Valid        = 0x0000000000000001,
		NotValidated = 0x0000000000000002,
		MAX          = 0x0000000000000003
	};

	/**
	 * Enum CoreUObject.EAppMsgType
	 */
	enum class EAppMsgType : uint8_t
	{
		Ok                     = 0x0000000000000000,
		YesNo                  = 0x0000000000000001,
		OkCancel               = 0x0000000000000002,
		YesNoCancel            = 0x0000000000000003,
		CancelRetryContinue    = 0x0000000000000004,
		YesNoYesAllNoAll       = 0x0000000000000005,
		YesNoYesAllNoAllCancel = 0x0000000000000006,
		YesNoYesAll            = 0x0000000000000007,
		MAX                    = 0x0000000000000008
	};

	/**
	 * Enum CoreUObject.EAppReturnType
	 */
	enum class EAppReturnType : uint8_t
	{
		No       = 0x0000000000000000,
		Yes      = 0x0000000000000001,
		YesAll   = 0x0000000000000002,
		NoAll    = 0x0000000000000003,
		Cancel   = 0x0000000000000004,
		Ok       = 0x0000000000000005,
		Retry    = 0x0000000000000006,
		Continue = 0x0000000000000007,
		MAX      = 0x0000000000000008
	};

	/**
	 * Enum CoreUObject.EPropertyAccessChangeNotifyMode
	 */
	enum class EPropertyAccessChangeNotifyMode : uint8_t
	{
		Default = 0x0000000000000000,
		Never   = 0x0000000000000001,
		Always  = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum CoreUObject.EUnit
	 */
	enum class EUnit : uint8_t
	{
		Micrometers          = 0x0000000000000000,
		Millimeters          = 0x0000000000000001,
		Centimeters          = 0x0000000000000002,
		Meters               = 0x0000000000000003,
		Kilometers           = 0x0000000000000004,
		Inches               = 0x0000000000000005,
		Feet                 = 0x0000000000000006,
		Yards                = 0x0000000000000007,
		Miles                = 0x0000000000000008,
		Lightyears           = 0x0000000000000009,
		Degrees              = 0x000000000000000A,
		Radians              = 0x000000000000000B,
		MetersPerSecond      = 0x000000000000000C,
		KilometersPerHour    = 0x000000000000000D,
		MilesPerHour         = 0x000000000000000E,
		Celsius              = 0x000000000000000F,
		Farenheit            = 0x0000000000000010,
		Kelvin               = 0x0000000000000011,
		Micrograms           = 0x0000000000000012,
		Milligrams           = 0x0000000000000013,
		Grams                = 0x0000000000000014,
		Kilograms            = 0x0000000000000015,
		MetricTons           = 0x0000000000000016,
		Ounces               = 0x0000000000000017,
		Pounds               = 0x0000000000000018,
		Stones               = 0x0000000000000019,
		Newtons              = 0x000000000000001A,
		PoundsForce          = 0x000000000000001B,
		KilogramsForce       = 0x000000000000001C,
		Hertz                = 0x000000000000001D,
		Kilohertz            = 0x000000000000001E,
		Megahertz            = 0x000000000000001F,
		Gigahertz            = 0x0000000000000020,
		RevolutionsPerMinute = 0x0000000000000021,
		Bytes                = 0x0000000000000022,
		Kilobytes            = 0x0000000000000023,
		Megabytes            = 0x0000000000000024,
		Gigabytes            = 0x0000000000000025,
		Terabytes            = 0x0000000000000026,
		Lumens               = 0x0000000000000027,
		Milliseconds         = 0x0000000000000028,
		Seconds              = 0x0000000000000029,
		Minutes              = 0x000000000000002A,
		Hours                = 0x000000000000002B,
		Days                 = 0x000000000000002C,
		Months               = 0x000000000000002D,
		Years                = 0x000000000000002E,
		Multiplier           = 0x000000000000002F,
		Percentage           = 0x0000000000000030,
		Unspecified          = 0x0000000000000031,
		MAX                  = 0x0000000000000032
	};

	/**
	 * Enum CoreUObject.EMouseCursor
	 */
	enum class EMouseCursor : uint8_t
	{
		None            = 0x0000000000000000,
		Default         = 0x0000000000000001,
		TextEditBeam    = 0x0000000000000002,
		ResizeLeftRight = 0x0000000000000003,
		ResizeUpDown    = 0x0000000000000004,
		ResizeSouthEast = 0x0000000000000005,
		ResizeSouthWest = 0x0000000000000006,
		CardinalCross   = 0x0000000000000007,
		Crosshairs      = 0x0000000000000008,
		Hand            = 0x0000000000000009,
		GrabHand        = 0x000000000000000A,
		GrabHandClosed  = 0x000000000000000B,
		SlashedCircle   = 0x000000000000000C,
		EyeDropper      = 0x000000000000000D,
		MAX             = 0x000000000000000E
	};

	/**
	 * Enum CoreUObject.EPixelFormat
	 */
	enum class EPixelFormat : uint8_t
	{
		PF_Unknown            = 0x0000000000000000,
		PF_A32B32G32R32F      = 0x0000000000000001,
		PF_B8G8R8A8           = 0x0000000000000002,
		PF_G8                 = 0x0000000000000003,
		PF_G16                = 0x0000000000000004,
		PF_DXT1               = 0x0000000000000005,
		PF_DXT3               = 0x0000000000000006,
		PF_DXT5               = 0x0000000000000007,
		PF_UYVY               = 0x0000000000000008,
		PF_FloatRGB           = 0x0000000000000009,
		PF_FloatRGBA          = 0x000000000000000A,
		PF_DepthStencil       = 0x000000000000000B,
		PF_ShadowDepth        = 0x000000000000000C,
		PF_R32_FLOAT          = 0x000000000000000D,
		PF_G16R16             = 0x000000000000000E,
		PF_G16R16F            = 0x000000000000000F,
		PF_G16R16F_FILTER     = 0x0000000000000010,
		PF_G32R32F            = 0x0000000000000011,
		PF_A2B10G10R10        = 0x0000000000000012,
		PF_A16B16G16R16       = 0x0000000000000013,
		PF_D24                = 0x0000000000000014,
		PF_R16F               = 0x0000000000000015,
		PF_R16F_FILTER        = 0x0000000000000016,
		PF_BC5                = 0x0000000000000017,
		PF_V8U8               = 0x0000000000000018,
		PF_A1                 = 0x0000000000000019,
		PF_FloatR11G11B10     = 0x000000000000001A,
		PF_A8                 = 0x000000000000001B,
		PF_R32_UINT           = 0x000000000000001C,
		PF_R32_SINT           = 0x000000000000001D,
		PF_PVRTC2             = 0x000000000000001E,
		PF_PVRTC4             = 0x000000000000001F,
		PF_R16_UINT           = 0x0000000000000020,
		PF_R16_SINT           = 0x0000000000000021,
		PF_R16G16B16A16_UINT  = 0x0000000000000022,
		PF_R16G16B16A16_SINT  = 0x0000000000000023,
		PF_R5G6B5_UNORM       = 0x0000000000000024,
		PF_R8G8B8A8           = 0x0000000000000025,
		PF_A8R8G8B8           = 0x0000000000000026,
		PF_BC4                = 0x0000000000000027,
		PF_R8G8               = 0x0000000000000028,
		PF_ATC_RGB            = 0x0000000000000029,
		PF_ATC_RGBA_E         = 0x000000000000002A,
		PF_ATC_RGBA_I         = 0x000000000000002B,
		PF_X24_G8             = 0x000000000000002C,
		PF_ETC1               = 0x000000000000002D,
		PF_ETC2_RGB           = 0x000000000000002E,
		PF_ETC2_RGBA          = 0x000000000000002F,
		PF_R32G32B32A32_UINT  = 0x0000000000000030,
		PF_R16G16_UINT        = 0x0000000000000031,
		PF_ASTC_4x4           = 0x0000000000000032,
		PF_ASTC_6x6           = 0x0000000000000033,
		PF_ASTC_8x8           = 0x0000000000000034,
		PF_ASTC_10x10         = 0x0000000000000035,
		PF_ASTC_12x12         = 0x0000000000000036,
		PF_BC6H               = 0x0000000000000037,
		PF_BC7                = 0x0000000000000038,
		PF_R8_UINT            = 0x0000000000000039,
		PF_L8                 = 0x000000000000003A,
		PF_XGXR8              = 0x000000000000003B,
		PF_R8G8B8A8_UINT      = 0x000000000000003C,
		PF_R8G8B8A8_SNORM     = 0x000000000000003D,
		PF_R16G16B16A16_UNORM = 0x000000000000003E,
		PF_R16G16B16A16_SNORM = 0x000000000000003F,
		PF_PLATFORM_HDR       = 0x0000000000000040,
		PF_PLATFORM_HDR01     = 0x0000000000000041,
		PF_PLATFORM_HDR02     = 0x0000000000000042,
		PF_NV12               = 0x0000000000000043,
		PF_R32G32_UINT        = 0x0000000000000044,
		PF_ETC2_R11_EAC       = 0x0000000000000045,
		PF_ETC2_RG11_EAC      = 0x0000000000000046,
		_PF_MAX_              = 0x0000000000000047
	};

	/**
	 * Enum CoreUObject.EAxis
	 */
	enum class EAxis : uint8_t
	{
		None = 0x0000000000000000,
		X    = 0x0000000000000001,
		Y    = 0x0000000000000002,
		Z    = 0x0000000000000003,
		MAX  = 0x0000000000000004
	};

	/**
	 * Enum CoreUObject.ELogTimes
	 */
	enum class ELogTimes : uint8_t
	{
		None            = 0x0000000000000000,
		UTC             = 0x0000000000000001,
		SinceGStartTime = 0x0000000000000002,
		Local           = 0x0000000000000003,
		MAX             = 0x0000000000000004
	};

	/**
	 * Enum CoreUObject.ESearchDir
	 */
	enum class ESearchDir : uint8_t
	{
		FromStart = 0x0000000000000000,
		FromEnd   = 0x0000000000000001,
		MAX       = 0x0000000000000002
	};

	/**
	 * Enum CoreUObject.ESearchCase
	 */
	enum class ESearchCase : uint8_t
	{
		CaseSensitive = 0x0000000000000000,
		IgnoreCase    = 0x0000000000000001,
		MAX           = 0x0000000000000002
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CoreUObject.JoinabilitySettings
	 * Size -> 0x0014
	 */
	struct FJoinabilitySettings
	{
	public:
		class FName                                                SessionName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPublicSearchable;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInvites;                                           // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJoinViaPresence;                                        // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJoinViaPresenceFriendsOnly;                             // 0x000B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPartySize;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.UniqueNetIdWrapper
	 * Size -> 0x0001
	 */
	struct FUniqueNetIdWrapper
	{
	public:
		unsigned char                                              UnknownData_YUNM[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Guid
	 * Size -> 0x0010
	 */
	struct FGuid
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    C;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    D;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Rotator
	 * Size -> 0x000C
	 */
	struct FRotator
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Yaw;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FRotator();
		FRotator(float pitch, float yaw, float roll);
		FRotator operator +(const FRotator& other) const;
		FRotator operator -(const FRotator& other) const;
		FRotator operator *(float scalar) const;
		FRotator operator *(const FRotator& other) const;
		FRotator operator /(float scalar) const;
		FRotator operator /(const FRotator& other) const;
		FRotator& operator =(const FRotator& other);
		FRotator& operator +=(const FRotator& other);
		FRotator& operator -=(const FRotator& other);
		FRotator& operator *=(const float other);
		float Size() const;
		FRotator Clamp() const;
	};

	/**
	 * ScriptStruct CoreUObject.Vector
	 * Size -> 0x000C
	 */
	struct FVector
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FVector();
		FVector(float x, float y, float z);
		FVector operator +(const FVector& other) const;
		FVector operator -(const FVector& other) const;
		FVector operator *(float scalar) const;
		FVector operator *(const FVector& other) const;
		FVector operator /(float scalar) const;
		FVector operator /(const FVector& other) const;
		FVector& operator =(const FVector& other);
		FVector& operator +=(const FVector& other);
		FVector& operator -=(const FVector& other);
		FVector& operator *=(const float other);
		float Dot(const FVector& b) const;
		float MagnitudeSqr() const;
		float Magnitude() const;
		FVector Unit() const;
		FRotator ToRotator() const;
		float Distance(const FVector& v) const;
		friend bool operator ==(const FVector& first, const FVector& second)
		{
			return first.X == second.X && first.Y == second.Y && first.Z == second.Z;
		}

		friend bool operator !=(const FVector& first, const FVector& second)
		{
			return !(first == second);
		}

	};

	/**
	 * ScriptStruct CoreUObject.Vector4
	 * Size -> 0x0010
	 */
	struct FVector4
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Vector2D
	 * Size -> 0x0008
	 */
	struct FVector2D
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FVector2D();
		FVector2D(float x, float y);
		FVector2D operator +(const FVector2D& other) const;
		FVector2D operator -(const FVector2D& other) const;
		FVector2D operator *(float scalar) const;
		FVector2D operator *(const FVector2D& other) const;
		FVector2D operator /(float scalar) const;
		FVector2D operator /(const FVector2D& other) const;
		FVector2D& operator =(const FVector2D& other);
		FVector2D& operator +=(const FVector2D& other);
		FVector2D& operator -=(const FVector2D& other);
		FVector2D& operator *=(const float other);
	};

	/**
	 * ScriptStruct CoreUObject.TwoVectors
	 * Size -> 0x0018
	 */
	struct FTwoVectors
	{
	public:
		struct FVector                                             v1;                                                      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             v2;                                                      // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Plane
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FPlane : public FVector
	{
	public:
		float                                                      W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Quat
	 * Size -> 0x0010
	 */
	struct FQuat
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PackedNormal
	 * Size -> 0x0004
	 */
	struct FPackedNormal
	{
	public:
		unsigned char                                              X;                                                       // 0x0000(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Y;                                                       // 0x0001(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Z;                                                       // 0x0002(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              W;                                                       // 0x0003(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PackedRGB10A2N
	 * Size -> 0x0004
	 */
	struct FPackedRGB10A2N
	{
	public:
		int32_t                                                    Packed;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PackedRGBA16N
	 * Size -> 0x0008
	 */
	struct FPackedRGBA16N
	{
	public:
		int32_t                                                    XY;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZW;                                                      // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.IntPoint
	 * Size -> 0x0008
	 */
	struct FIntPoint
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.IntVector
	 * Size -> 0x000C
	 */
	struct FIntVector
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Color
	 * Size -> 0x0004
	 */
	struct FColor
	{
	public:
		unsigned char                                              B;                                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              G;                                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              R;                                                       // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              A;                                                       // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.LinearColor
	 * Size -> 0x0010
	 */
	struct FLinearColor
	{
	public:
		float                                                      R;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      G;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      A;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FLinearColor();
		FLinearColor(float r, float g, float b, float a);
	};

	/**
	 * ScriptStruct CoreUObject.Box
	 * Size -> 0x001C
	 */
	struct FBox
	{
	public:
		struct FVector                                             Min;                                                     // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Max;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IsValid;                                                 // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JL2[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Box2D
	 * Size -> 0x0014
	 */
	struct FBox2D
	{
	public:
		struct FVector2D                                           Min;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Max;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsValid;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WY1J[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.BoxSphereBounds
	 * Size -> 0x001C
	 */
	struct FBoxSphereBounds
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoxExtent;                                               // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SphereRadius;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.OrientedBox
	 * Size -> 0x003C
	 */
	struct FOrientedBox
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AxisX;                                                   // 0x000C(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AxisY;                                                   // 0x0018(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AxisZ;                                                   // 0x0024(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentX;                                                 // 0x0030(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentY;                                                 // 0x0034(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentZ;                                                 // 0x0038(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Matrix
	 * Size -> 0x0040
	 */
	struct FMatrix
	{
	public:
		struct FPlane                                              XPlane;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane                                              YPlane;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane                                              ZPlane;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane                                              WPlane;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FMatrix operator *(const FMatrix& other) const;
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointFloat
	 * Size -> 0x0014
	 */
	struct FInterpCurvePointFloat
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutVal;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArriveTangent;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0DU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveFloat
	 * Size -> 0x0018
	 */
	struct FInterpCurveFloat
	{
	public:
		TArray<struct FInterpCurvePointFloat>                      Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3549[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointVector2D
	 * Size -> 0x0020
	 */
	struct FInterpCurvePointVector2D
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           OutVal;                                                  // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ArriveTangent;                                           // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LeaveTangent;                                            // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RWM[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveVector2D
	 * Size -> 0x0018
	 */
	struct FInterpCurveVector2D
	{
	public:
		TArray<struct FInterpCurvePointVector2D>                   Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MGS6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointVector
	 * Size -> 0x002C
	 */
	struct FInterpCurvePointVector
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OutVal;                                                  // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ArriveTangent;                                           // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeaveTangent;                                            // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FXQ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveVector
	 * Size -> 0x0018
	 */
	struct FInterpCurveVector
	{
	public:
		TArray<struct FInterpCurvePointVector>                     Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KJ9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointQuat
	 * Size -> 0x0050
	 */
	struct FInterpCurvePointQuat
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRBB[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               OutVal;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               ArriveTangent;                                           // 0x0020(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               LeaveTangent;                                            // 0x0030(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1KT[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveQuat
	 * Size -> 0x0018
	 */
	struct FInterpCurveQuat
	{
	public:
		TArray<struct FInterpCurvePointQuat>                       Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WG3[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointTwoVectors
	 * Size -> 0x0050
	 */
	struct FInterpCurvePointTwoVectors
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTwoVectors                                         OutVal;                                                  // 0x0004(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTwoVectors                                         ArriveTangent;                                           // 0x001C(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTwoVectors                                         LeaveTangent;                                            // 0x0034(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5VF[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveTwoVectors
	 * Size -> 0x0018
	 */
	struct FInterpCurveTwoVectors
	{
	public:
		TArray<struct FInterpCurvePointTwoVectors>                 Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHIZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointLinearColor
	 * Size -> 0x0038
	 */
	struct FInterpCurvePointLinearColor
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OutVal;                                                  // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ArriveTangent;                                           // 0x0014(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LeaveTangent;                                            // 0x0024(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Q7V[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveLinearColor
	 * Size -> 0x0018
	 */
	struct FInterpCurveLinearColor
	{
	public:
		TArray<struct FInterpCurvePointLinearColor>                Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YWMZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Transform
	 * Size -> 0x0030
	 */
	struct FTransform
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0010) Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRFL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale3D;                                                 // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNKV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		FMatrix ToMatrixWithScale() const;
	};

	/**
	 * ScriptStruct CoreUObject.RandomStream
	 * Size -> 0x0008
	 */
	struct FRandomStream
	{
	public:
		int32_t                                                    InitialSeed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.DateTime
	 * Size -> 0x0008
	 */
	struct FDateTime
	{
	public:
		unsigned char                                              UnknownData_JP1U[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.FrameNumber
	 * Size -> 0x0004
	 */
	struct FFrameNumber
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FrameRate
	 * Size -> 0x0008
	 */
	struct FFrameRate
	{
	public:
		int32_t                                                    Numerator;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Denominator;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FrameTime
	 * Size -> 0x0008
	 */
	struct FFrameTime
	{
	public:
		struct FFrameNumber                                        FrameNumber;                                             // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubFrame;                                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.QualifiedFrameTime
	 * Size -> 0x0010
	 */
	struct FQualifiedFrameTime
	{
	public:
		struct FFrameTime                                          Time;                                                    // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameRate                                          Rate;                                                    // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Timecode
	 * Size -> 0x0014
	 */
	struct FTimecode
	{
	public:
		int32_t                                                    Hours;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minutes;                                                 // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seconds;                                                 // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Frames;                                                  // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDropFrameFormat;                                        // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I07T[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Timespan
	 * Size -> 0x0008
	 */
	struct FTimespan
	{
	public:
		unsigned char                                              UnknownData_G0JX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.SoftObjectPath
	 * Size -> 0x0018
	 */
	struct FSoftObjectPath
	{
	public:
		class FName                                                AssetPathName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubPathString;                                           // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.SoftClassPath
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FSoftClassPath : public FSoftObjectPath
	{	};

	/**
	 * ScriptStruct CoreUObject.PrimaryAssetType
	 * Size -> 0x0008
	 */
	struct FPrimaryAssetType
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PrimaryAssetId
	 * Size -> 0x0010
	 */
	struct FPrimaryAssetId
	{
	public:
		struct FPrimaryAssetType                                   PrimaryAssetType;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PrimaryAssetName;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FallbackStruct
	 * Size -> 0x0001
	 */
	struct FFallbackStruct
	{
	public:
		unsigned char                                              UnknownData_CGNR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.FloatRangeBound
	 * Size -> 0x0008
	 */
	struct FFloatRangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJP6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FloatRange
	 * Size -> 0x0010
	 */
	struct FFloatRange
	{
	public:
		struct FFloatRangeBound                                    LowerBound;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRangeBound                                    UpperBound;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int32RangeBound
	 * Size -> 0x0008
	 */
	struct FInt32RangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TUW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int32Range
	 * Size -> 0x0010
	 */
	struct FInt32Range
	{
	public:
		struct FInt32RangeBound                                    LowerBound;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInt32RangeBound                                    UpperBound;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FrameNumberRangeBound
	 * Size -> 0x0008
	 */
	struct FFrameNumberRangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DX8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FrameNumberRange
	 * Size -> 0x0010
	 */
	struct FFrameNumberRange
	{
	public:
		struct FFrameNumberRangeBound                              LowerBound;                                              // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumberRangeBound                              UpperBound;                                              // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FloatInterval
	 * Size -> 0x0008
	 */
	struct FFloatInterval
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int32Interval
	 * Size -> 0x0008
	 */
	struct FInt32Interval
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PolyglotTextData
	 * Size -> 0x00B8
	 */
	struct FPolyglotTextData
	{
	public:
		ELocalizedTextSourceCategory                               Category;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7YL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NativeCulture;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Namespace;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NativeString;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         LocalizedStrings;                                        // 0x0048(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsMinimalPatch;                                         // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIKM[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CachedText;                                              // 0x00A0(0x0018) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.AutomationEvent
	 * Size -> 0x0038
	 */
	struct FAutomationEvent
	{
	public:
		EAutomationEventType                                       Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNPV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Context;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Artifact;                                                // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.AutomationExecutionEntry
	 * Size -> 0x0058
	 */
	struct FAutomationExecutionEntry
	{
	public:
		struct FAutomationEvent                                    Event;                                                   // 0x0000(0x0038) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LineNumber;                                              // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFFM[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           Timestamp;                                               // 0x0050(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.ARFilter
	 * Size -> 0x00F0
	 */
	struct FARFilter
	{
	public:
		TArray<class FName>                                        PackageNames;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        PackagePaths;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        ObjectPaths;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        ClassNames;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXK0[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RecursiveClassesExclusionSet[0x50];                      // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bRecursivePaths;                                         // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursiveClasses;                                       // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeOnlyOnDiskAssets;                                // 0x00E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACU3[0xD];                                   // 0x00E3(0x000D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.AssetBundleEntry
	 * Size -> 0x0028
	 */
	struct FAssetBundleEntry
	{
	public:
		struct FPrimaryAssetId                                     BundleScope;                                             // 0x0000(0x0010) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BundleName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             BundleAssets;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.AssetBundleData
	 * Size -> 0x0010
	 */
	struct FAssetBundleData
	{
	public:
		TArray<struct FAssetBundleEntry>                           Bundles;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.AssetData
	 * Size -> 0x0050
	 */
	struct FAssetData
	{
	public:
		class FName                                                ObjectPath;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PackageName;                                             // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PackagePath;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AssetName;                                               // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AssetClass;                                              // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3O84[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
