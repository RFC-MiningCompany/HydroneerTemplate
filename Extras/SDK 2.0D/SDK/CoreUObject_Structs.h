#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
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
	enum class CoreUObject_EInterpCurveMode : uint8_t
	{
		CIM_Linear           = 0,
		CIM_CurveAuto        = 1,
		CIM_Constant         = 2,
		CIM_CurveUser        = 3,
		CIM_CurveBreak       = 4,
		CIM_CurveAutoClamped = 5,
		CIM_MAX              = 6
	};

	/**
	 * Enum CoreUObject.ERangeBoundTypes
	 */
	enum class CoreUObject_ERangeBoundTypes : uint8_t
	{
		ERangeBoundTypes__Exclusive            = 0,
		ERangeBoundTypes__Inclusive            = 1,
		ERangeBoundTypes__Open                 = 2,
		ERangeBoundTypes__ERangeBoundTypes_MAX = 3
	};

	/**
	 * Enum CoreUObject.ELocalizedTextSourceCategory
	 */
	enum class CoreUObject_ELocalizedTextSourceCategory : uint8_t
	{
		ELocalizedTextSourceCategory__Game                             = 0,
		ELocalizedTextSourceCategory__Engine                           = 1,
		ELocalizedTextSourceCategory__Editor                           = 2,
		ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX = 3
	};

	/**
	 * Enum CoreUObject.EAutomationEventType
	 */
	enum class CoreUObject_EAutomationEventType : uint8_t
	{
		EAutomationEventType__Info                     = 0,
		EAutomationEventType__Warning                  = 1,
		EAutomationEventType__Error                    = 2,
		EAutomationEventType__EAutomationEventType_MAX = 3
	};

	/**
	 * Enum CoreUObject.ELifetimeCondition
	 */
	enum class CoreUObject_ELifetimeCondition : uint8_t
	{
		COND_None                       = 0,
		COND_InitialOnly                = 1,
		COND_OwnerOnly                  = 2,
		COND_SkipOwner                  = 3,
		COND_SimulatedOnly              = 4,
		COND_AutonomousOnly             = 5,
		COND_SimulatedOrPhysics         = 6,
		COND_InitialOrOwner             = 7,
		COND_Custom                     = 8,
		COND_ReplayOrOwner              = 9,
		COND_ReplayOnly                 = 10,
		COND_SimulatedOnlyNoReplay      = 11,
		COND_SimulatedOrPhysicsNoReplay = 12,
		COND_SkipReplay                 = 13,
		COND_Never                      = 14,
		COND_Max                        = 15
	};

	/**
	 * Enum CoreUObject.EDataValidationResult
	 */
	enum class CoreUObject_EDataValidationResult : uint8_t
	{
		EDataValidationResult__Invalid                   = 0,
		EDataValidationResult__Valid                     = 1,
		EDataValidationResult__NotValidated              = 2,
		EDataValidationResult__EDataValidationResult_MAX = 3
	};

	/**
	 * Enum CoreUObject.EAppMsgType
	 */
	enum class CoreUObject_EAppMsgType : uint8_t
	{
		EAppMsgType__Ok                     = 0,
		EAppMsgType__YesNo                  = 1,
		EAppMsgType__OkCancel               = 2,
		EAppMsgType__YesNoCancel            = 3,
		EAppMsgType__CancelRetryContinue    = 4,
		EAppMsgType__YesNoYesAllNoAll       = 5,
		EAppMsgType__YesNoYesAllNoAllCancel = 6,
		EAppMsgType__YesNoYesAll            = 7,
		EAppMsgType__EAppMsgType_MAX        = 8
	};

	/**
	 * Enum CoreUObject.EAppReturnType
	 */
	enum class CoreUObject_EAppReturnType : uint8_t
	{
		EAppReturnType__No                 = 0,
		EAppReturnType__Yes                = 1,
		EAppReturnType__YesAll             = 2,
		EAppReturnType__NoAll              = 3,
		EAppReturnType__Cancel             = 4,
		EAppReturnType__Ok                 = 5,
		EAppReturnType__Retry              = 6,
		EAppReturnType__Continue           = 7,
		EAppReturnType__EAppReturnType_MAX = 8
	};

	/**
	 * Enum CoreUObject.EPropertyAccessChangeNotifyMode
	 */
	enum class CoreUObject_EPropertyAccessChangeNotifyMode : uint8_t
	{
		EPropertyAccessChangeNotifyMode__Default                             = 0,
		EPropertyAccessChangeNotifyMode__Never                               = 1,
		EPropertyAccessChangeNotifyMode__Always                              = 2,
		EPropertyAccessChangeNotifyMode__EPropertyAccessChangeNotifyMode_MAX = 3
	};

	/**
	 * Enum CoreUObject.EUnit
	 */
	enum class CoreUObject_EUnit : uint8_t
	{
		EUnit__Micrometers          = 0,
		EUnit__Millimeters          = 1,
		EUnit__Centimeters          = 2,
		EUnit__Meters               = 3,
		EUnit__Kilometers           = 4,
		EUnit__Inches               = 5,
		EUnit__Feet                 = 6,
		EUnit__Yards                = 7,
		EUnit__Miles                = 8,
		EUnit__Lightyears           = 9,
		EUnit__Degrees              = 10,
		EUnit__Radians              = 11,
		EUnit__MetersPerSecond      = 12,
		EUnit__KilometersPerHour    = 13,
		EUnit__MilesPerHour         = 14,
		EUnit__Celsius              = 15,
		EUnit__Farenheit            = 16,
		EUnit__Kelvin               = 17,
		EUnit__Micrograms           = 18,
		EUnit__Milligrams           = 19,
		EUnit__Grams                = 20,
		EUnit__Kilograms            = 21,
		EUnit__MetricTons           = 22,
		EUnit__Ounces               = 23,
		EUnit__Pounds               = 24,
		EUnit__Stones               = 25,
		EUnit__Newtons              = 26,
		EUnit__PoundsForce          = 27,
		EUnit__KilogramsForce       = 28,
		EUnit__Hertz                = 29,
		EUnit__Kilohertz            = 30,
		EUnit__Megahertz            = 31,
		EUnit__Gigahertz            = 32,
		EUnit__RevolutionsPerMinute = 33,
		EUnit__Bytes                = 34,
		EUnit__Kilobytes            = 35,
		EUnit__Megabytes            = 36,
		EUnit__Gigabytes            = 37,
		EUnit__Terabytes            = 38,
		EUnit__Lumens               = 39,
		EUnit__Milliseconds         = 40,
		EUnit__Seconds              = 41,
		EUnit__Minutes              = 42,
		EUnit__Hours                = 43,
		EUnit__Days                 = 44,
		EUnit__Months               = 45,
		EUnit__Years                = 46,
		EUnit__Multiplier           = 47,
		EUnit__Percentage           = 48,
		EUnit__Unspecified          = 49,
		EUnit__EUnit_MAX            = 50
	};

	/**
	 * Enum CoreUObject.EMouseCursor
	 */
	enum class CoreUObject_EMouseCursor : uint8_t
	{
		EMouseCursor__None             = 0,
		EMouseCursor__Default          = 1,
		EMouseCursor__TextEditBeam     = 2,
		EMouseCursor__ResizeLeftRight  = 3,
		EMouseCursor__ResizeUpDown     = 4,
		EMouseCursor__ResizeSouthEast  = 5,
		EMouseCursor__ResizeSouthWest  = 6,
		EMouseCursor__CardinalCross    = 7,
		EMouseCursor__Crosshairs       = 8,
		EMouseCursor__Hand             = 9,
		EMouseCursor__GrabHand         = 10,
		EMouseCursor__GrabHandClosed   = 11,
		EMouseCursor__SlashedCircle    = 12,
		EMouseCursor__EyeDropper       = 13,
		EMouseCursor__EMouseCursor_MAX = 14
	};

	/**
	 * Enum CoreUObject.EPixelFormat
	 */
	enum class CoreUObject_EPixelFormat : uint8_t
	{
		PF_Unknown            = 0,
		PF_A32B32G32R32F      = 1,
		PF_B8G8R8A8           = 2,
		PF_G8                 = 3,
		PF_G16                = 4,
		PF_DXT1               = 5,
		PF_DXT3               = 6,
		PF_DXT5               = 7,
		PF_UYVY               = 8,
		PF_FloatRGB           = 9,
		PF_FloatRGBA          = 10,
		PF_DepthStencil       = 11,
		PF_ShadowDepth        = 12,
		PF_R32_FLOAT          = 13,
		PF_G16R16             = 14,
		PF_G16R16F            = 15,
		PF_G16R16F_FILTER     = 16,
		PF_G32R32F            = 17,
		PF_A2B10G10R10        = 18,
		PF_A16B16G16R16       = 19,
		PF_D24                = 20,
		PF_R16F               = 21,
		PF_R16F_FILTER        = 22,
		PF_BC5                = 23,
		PF_V8U8               = 24,
		PF_A1                 = 25,
		PF_FloatR11G11B10     = 26,
		PF_A8                 = 27,
		PF_R32_UINT           = 28,
		PF_R32_SINT           = 29,
		PF_PVRTC2             = 30,
		PF_PVRTC4             = 31,
		PF_R16_UINT           = 32,
		PF_R16_SINT           = 33,
		PF_R16G16B16A16_UINT  = 34,
		PF_R16G16B16A16_SINT  = 35,
		PF_R5G6B5_UNORM       = 36,
		PF_R8G8B8A8           = 37,
		PF_A8R8G8B8           = 38,
		PF_BC4                = 39,
		PF_R8G8               = 40,
		PF_ATC_RGB            = 41,
		PF_ATC_RGBA_E         = 42,
		PF_ATC_RGBA_I         = 43,
		PF_X24_G8             = 44,
		PF_ETC1               = 45,
		PF_ETC2_RGB           = 46,
		PF_ETC2_RGBA          = 47,
		PF_R32G32B32A32_UINT  = 48,
		PF_R16G16_UINT        = 49,
		PF_ASTC_4x4           = 50,
		PF_ASTC_6x6           = 51,
		PF_ASTC_8x8           = 52,
		PF_ASTC_10x10         = 53,
		PF_ASTC_12x12         = 54,
		PF_BC6H               = 55,
		PF_BC7                = 56,
		PF_R8_UINT            = 57,
		PF_L8                 = 58,
		PF_XGXR8              = 59,
		PF_R8G8B8A8_UINT      = 60,
		PF_R8G8B8A8_SNORM     = 61,
		PF_R16G16B16A16_UNORM = 62,
		PF_R16G16B16A16_SNORM = 63,
		PF_PLATFORM_HDR       = 64,
		PF_PLATFORM_HDR01     = 65,
		PF_PLATFORM_HDR02     = 66,
		PF_NV12               = 67,
		PF_R32G32_UINT        = 68,
		PF_ETC2_R11_EAC       = 69,
		PF_ETC2_RG11_EAC      = 70,
		PF_MAX_VALUE          = 71
	};

	/**
	 * Enum CoreUObject.EAxis
	 */
	enum class CoreUObject_EAxis : uint8_t
	{
		EAxis__None      = 0,
		EAxis__X         = 1,
		EAxis__Y         = 2,
		EAxis__Z         = 3,
		EAxis__EAxis_MAX = 4
	};

	/**
	 * Enum CoreUObject.ELogTimes
	 */
	enum class CoreUObject_ELogTimes : uint8_t
	{
		ELogTimes__None            = 0,
		ELogTimes__UTC             = 1,
		ELogTimes__SinceGStartTime = 2,
		ELogTimes__Local           = 3,
		ELogTimes__ELogTimes_MAX   = 4
	};

	/**
	 * Enum CoreUObject.ESearchDir
	 */
	enum class CoreUObject_ESearchDir : uint8_t
	{
		ESearchDir__FromStart      = 0,
		ESearchDir__FromEnd        = 1,
		ESearchDir__ESearchDir_MAX = 2
	};

	/**
	 * Enum CoreUObject.ESearchCase
	 */
	enum class CoreUObject_ESearchCase : uint8_t
	{
		ESearchCase__CaseSensitive   = 0,
		ESearchCase__IgnoreCase      = 1,
		ESearchCase__ESearchCase_MAX = 2
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
		unsigned char                                              UnknownData_18AC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_ODDH[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_H3UZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

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
		CoreUObject_EInterpCurveMode                               InterpMode;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66UD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_2T2U[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		CoreUObject_EInterpCurveMode                               InterpMode;                                              // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VG5Z[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_3HPQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		CoreUObject_EInterpCurveMode                               InterpMode;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPND[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_NHG3[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_4P62[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               OutVal;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               ArriveTangent;                                           // 0x0020(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               LeaveTangent;                                            // 0x0030(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		CoreUObject_EInterpCurveMode                               InterpMode;                                              // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBHN[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_BFRI[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		CoreUObject_EInterpCurveMode                               InterpMode;                                              // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2HJ[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_CE1O[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		CoreUObject_EInterpCurveMode                               InterpMode;                                              // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZOI[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_N8TJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_63B3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale3D;                                                 // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9T7G[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_HXOS[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_P4HN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct CoreUObject.Timespan
	 * Size -> 0x0008
	 */
	struct FTimespan
	{
	public:
		unsigned char                                              UnknownData_A93D[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

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
	{
	};

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
		unsigned char                                              UnknownData_VD35[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct CoreUObject.FloatRangeBound
	 * Size -> 0x0008
	 */
	struct FFloatRangeBound
	{
	public:
		CoreUObject_ERangeBoundTypes                               Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTXU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		CoreUObject_ERangeBoundTypes                               Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OEF9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		CoreUObject_ERangeBoundTypes                               Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLG9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		CoreUObject_ELocalizedTextSourceCategory                   Category;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ASQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NativeCulture;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Namespace;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NativeString;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         LocalizedStrings;                                        // 0x0048(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsMinimalPatch;                                         // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UE15[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CachedText;                                              // 0x00A0(0x0018) Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct CoreUObject.AutomationEvent
	 * Size -> 0x0038
	 */
	struct FAutomationEvent
	{
	public:
		CoreUObject_EAutomationEventType                           Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXID[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_URC2[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_CAFO[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RecursiveClassesExclusionSet[0x50];                      // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bRecursivePaths;                                         // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursiveClasses;                                       // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeOnlyOnDiskAssets;                                // 0x00E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LS40[0xD];                                   // 0x00E3(0x000D) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_DC5T[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
