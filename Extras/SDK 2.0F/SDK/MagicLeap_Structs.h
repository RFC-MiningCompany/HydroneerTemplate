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
	 * Enum MagicLeap.PurchaseType
	 */
	enum class MagicLeap_EPurchaseType : uint8_t
	{
		PurchaseType__Consumable       = 0,
		PurchaseType__Nonconsumable    = 1,
		PurchaseType__Undefined        = 2,
		PurchaseType__PurchaseType_MAX = 3
	};

	/**
	 * Enum MagicLeap.EFocusLostReason
	 */
	enum class MagicLeap_EFocusLostReason : uint8_t
	{
		EFocusLostReason__EFocusLostReason_Invalid = 0,
		EFocusLostReason__EFocusLostReason_System  = 1,
		EFocusLostReason__EFocusLostReason_MAX     = 2
	};

	/**
	 * Enum MagicLeap.EMagicLeapMeshLOD
	 */
	enum class MagicLeap_EMagicLeapMeshLOD : uint8_t
	{
		EMagicLeapMeshLOD__Minimum               = 0,
		EMagicLeapMeshLOD__Medium                = 1,
		EMagicLeapMeshLOD__Maximum               = 2,
		EMagicLeapMeshLOD__EMagicLeapMeshLOD_MAX = 3
	};

	/**
	 * Enum MagicLeap.EMagicLeapMeshState
	 */
	enum class MagicLeap_EMagicLeapMeshState : uint8_t
	{
		EMagicLeapMeshState__New                     = 0,
		EMagicLeapMeshState__Updated                 = 1,
		EMagicLeapMeshState__Deleted                 = 2,
		EMagicLeapMeshState__Unchanged               = 3,
		EMagicLeapMeshState__EMagicLeapMeshState_MAX = 4
	};

	/**
	 * Enum MagicLeap.EMagicLeapMeshVertexColorMode
	 */
	enum class MagicLeap_EMagicLeapMeshVertexColorMode : uint8_t
	{
		EMagicLeapMeshVertexColorMode__None                              = 0,
		EMagicLeapMeshVertexColorMode__Confidence                        = 1,
		EMagicLeapMeshVertexColorMode__Block                             = 2,
		EMagicLeapMeshVertexColorMode__LOD                               = 3,
		EMagicLeapMeshVertexColorMode__EMagicLeapMeshVertexColorMode_MAX = 4
	};

	/**
	 * Enum MagicLeap.EMagicLeapMeshType
	 */
	enum class MagicLeap_EMagicLeapMeshType : uint8_t
	{
		EMagicLeapMeshType__Triangles              = 0,
		EMagicLeapMeshType__PointCloud             = 1,
		EMagicLeapMeshType__EMagicLeapMeshType_MAX = 2
	};

	/**
	 * Enum MagicLeap.EMagicLeapRaycastResultState
	 */
	enum class MagicLeap_EMagicLeapRaycastResultState : uint8_t
	{
		EMagicLeapRaycastResultState__RequestFailed                    = 0,
		EMagicLeapRaycastResultState__NoCollision                      = 1,
		EMagicLeapRaycastResultState__HitUnobserved                    = 2,
		EMagicLeapRaycastResultState__HitObserved                      = 3,
		EMagicLeapRaycastResultState__EMagicLeapRaycastResultState_MAX = 4
	};

	/**
	 * Enum MagicLeap.CloudStatus
	 */
	enum class MagicLeap_ECloudStatus : uint8_t
	{
		CloudStatus__CloudStatus_NotDone = 0,
		CloudStatus__CloudStatus_Done    = 1,
		CloudStatus__CloudStatus_MAX     = 2
	};

	/**
	 * Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
	 */
	enum class MagicLeap_EMagicLeapHeadTrackingMapEvent : uint8_t
	{
		EMagicLeapHeadTrackingMapEvent__Lost                               = 0,
		EMagicLeapHeadTrackingMapEvent__Recovered                          = 1,
		EMagicLeapHeadTrackingMapEvent__RecoveryFailed                     = 2,
		EMagicLeapHeadTrackingMapEvent__NewSession                         = 3,
		EMagicLeapHeadTrackingMapEvent__EMagicLeapHeadTrackingMapEvent_MAX = 4
	};

	/**
	 * Enum MagicLeap.EMagicLeapHeadTrackingMode
	 */
	enum class MagicLeap_EMagicLeapHeadTrackingMode : uint8_t
	{
		EMagicLeapHeadTrackingMode__PositionAndOrientation         = 0,
		EMagicLeapHeadTrackingMode__Unavailable                    = 1,
		EMagicLeapHeadTrackingMode__Unknown                        = 2,
		EMagicLeapHeadTrackingMode__EMagicLeapHeadTrackingMode_MAX = 3
	};

	/**
	 * Enum MagicLeap.EMagicLeapHeadTrackingError
	 */
	enum class MagicLeap_EMagicLeapHeadTrackingError : uint8_t
	{
		EMagicLeapHeadTrackingError__None                            = 0,
		EMagicLeapHeadTrackingError__NotEnoughFeatures               = 1,
		EMagicLeapHeadTrackingError__LowLight                        = 2,
		EMagicLeapHeadTrackingError__Unknown                         = 3,
		EMagicLeapHeadTrackingError__EMagicLeapHeadTrackingError_MAX = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeap.PurchaseItemDetails
	 * Size -> 0x0040
	 */
	struct FPurchaseItemDetails
	{
	public:
		unsigned char                                              UnknownData_QE1X[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Price;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MagicLeap_EPurchaseType                                    Type;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLTX[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MagicLeap.PurchaseConfirmation
	 * Size -> 0x0050
	 */
	struct FPurchaseConfirmation
	{
	public:
		unsigned char                                              UnknownData_2HIS[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PackageName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I77V[0x28];                                  // 0x0020(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		MagicLeap_EPurchaseType                                    Type;                                                    // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRAN[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
	 * Size -> 0x0014
	 */
	struct FMagicLeapMeshBlockRequest
	{
	public:
		struct FGuid                                               BlockID;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MagicLeap_EMagicLeapMeshLOD                                LevelOfDetail;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5YM[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
	 * Size -> 0x0048
	 */
	struct FMagicLeapMeshBlockInfo
	{
	public:
		struct FGuid                                               BlockID;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BlockPosition;                                           // 0x0010(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            BlockOrientation;                                        // 0x001C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             BlockDimensions;                                         // 0x0028(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0N1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           Timestamp;                                               // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MagicLeap_EMagicLeapMeshState                              BlockState;                                              // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJ54[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
	 * Size -> 0x0018
	 */
	struct FMagicLeapTrackingMeshInfo
	{
	public:
		struct FTimespan                                           Timestamp;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMagicLeapMeshBlockInfo>                     BlockData;                                               // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapRaycastHitResult
	 * Size -> 0x0024
	 */
	struct FMagicLeapRaycastHitResult
	{
	public:
		MagicLeap_EMagicLeapRaycastResultState                     HitState;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KI9T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitPoint;                                                // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Confidence;                                              // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserData;                                                // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
	 * Size -> 0x0038
	 */
	struct FMagicLeapRaycastQueryParams
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UpVector;                                                // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalFovDegrees;                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CollideWithUnobserved;                                   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A45G[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UserData;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
	 * Size -> 0x001C
	 */
	struct FMagicLeapGraphicsClientPerformanceInfo
	{
	public:
		float                                                      FrameStartCPUCompAcquireCPUTimeMs;                       // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameStartCPUFrameEndGPUTimeMs;                          // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameStartCPUFrameStartCPUTimeMs;                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameDurationCPUTimeMs;                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameDurationGPUTimeMs;                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameInternalDurationCPUTimeMs;                          // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameInternalDurationGPUTimeMs;                          // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapHeadTrackingState
	 * Size -> 0x0008
	 */
	struct FMagicLeapHeadTrackingState
	{
	public:
		MagicLeap_EMagicLeapHeadTrackingMode                       Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MagicLeap_EMagicLeapHeadTrackingError                      Error;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31FA[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Confidence;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MagicLeap.MagicLeapResult
	 * Size -> 0x0018
	 */
	struct FMagicLeapResult
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82QU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdditionalInfo;                                          // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
