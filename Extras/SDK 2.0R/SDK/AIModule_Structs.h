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
	 * Enum AIModule.EPathFollowingResult
	 */
	enum class EPathFollowingResult : uint8_t
	{
		Success            = 0x0000000000000000,
		Blocked            = 0x0000000000000001,
		OffPath            = 0x0000000000000002,
		Aborted            = 0x0000000000000003,
		Skipped_DEPRECATED = 0x0000000000000004,
		Invalid            = 0x0000000000000005,
		MAX                = 0x0000000000000006
	};

	/**
	 * Enum AIModule.EEnvQueryStatus
	 */
	enum class EEnvQueryStatus : uint8_t
	{
		Processing   = 0x0000000000000000,
		Success      = 0x0000000000000001,
		Failed       = 0x0000000000000002,
		Aborted      = 0x0000000000000003,
		OwnerLost    = 0x0000000000000004,
		MissingParam = 0x0000000000000005,
		MAX          = 0x0000000000000006
	};

	/**
	 * Enum AIModule.EAISenseNotifyType
	 */
	enum class EAISenseNotifyType : uint8_t
	{
		OnEveryPerception  = 0x0000000000000000,
		OnPerceptionChange = 0x0000000000000001,
		MAX                = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EAITaskPriority
	 */
	enum class EAITaskPriority : uint8_t
	{
		Lowest       = 0x0000000000000000,
		Low          = 0x0000000000000001,
		AutonomousAI = 0x0000000000000002,
		High         = 0x0000000000000003,
		Ultimate     = 0x0000000000000004,
		MAX          = 0x0000000000000005
	};

	/**
	 * Enum AIModule.EGenericAICheck
	 */
	enum class EGenericAICheck : uint8_t
	{
		Less           = 0x0000000000000000,
		LessOrEqual    = 0x0000000000000001,
		Equal          = 0x0000000000000002,
		NotEqual       = 0x0000000000000003,
		GreaterOrEqual = 0x0000000000000004,
		Greater        = 0x0000000000000005,
		IsTrue         = 0x0000000000000006,
		MAX            = 0x0000000000000007
	};

	/**
	 * Enum AIModule.EAILockSource
	 */
	enum class EAILockSource : uint8_t
	{
		Animation = 0x0000000000000000,
		Logic     = 0x0000000000000001,
		Script    = 0x0000000000000002,
		Gameplay  = 0x0000000000000003,
		MAX       = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EAIRequestPriority
	 */
	enum class EAIRequestPriority : uint8_t
	{
		SoftScript = 0x0000000000000000,
		Logic      = 0x0000000000000001,
		HardScript = 0x0000000000000002,
		Reaction   = 0x0000000000000003,
		Ultimate   = 0x0000000000000004,
		MAX        = 0x0000000000000005
	};

	/**
	 * Enum AIModule.EPawnActionEventType
	 */
	enum class EPawnActionEventType : uint8_t
	{
		Invalid           = 0x0000000000000000,
		FailedToStart     = 0x0000000000000001,
		InstantAbort      = 0x0000000000000002,
		FinishedAborting  = 0x0000000000000003,
		FinishedExecution = 0x0000000000000004,
		Push              = 0x0000000000000005,
		MAX               = 0x0000000000000006
	};

	/**
	 * Enum AIModule.EPawnActionResult
	 */
	enum class EPawnActionResult : uint8_t
	{
		NotStarted = 0x0000000000000000,
		InProgress = 0x0000000000000001,
		Success    = 0x0000000000000002,
		Failed     = 0x0000000000000003,
		Aborted    = 0x0000000000000004,
		MAX        = 0x0000000000000005
	};

	/**
	 * Enum AIModule.EPawnActionAbortState
	 */
	enum class EPawnActionAbortState : uint8_t
	{
		NeverStarted          = 0x0000000000000000,
		NotBeingAborted       = 0x0000000000000001,
		MarkPendingAbort      = 0x0000000000000002,
		LatentAbortInProgress = 0x0000000000000003,
		AbortDone             = 0x0000000000000004,
		MAX                   = 0x0000000000000005
	};

	/**
	 * Enum AIModule.FAIDistanceType
	 */
	enum class EFAIDistanceType : uint8_t
	{
		FAIDistanceType__Distance3D = 0x0000000000000000,
		FAIDistanceType__Distance2D = 0x0000000000000001,
		FAIDistanceType__DistanceZ  = 0x0000000000000002,
		FAIDistanceType__MAX        = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EAIOptionFlag
	 */
	enum class EAIOptionFlag : uint8_t
	{
		Default = 0x0000000000000000,
		Enable  = 0x0000000000000001,
		Disable = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EBTFlowAbortMode
	 */
	enum class EBTFlowAbortMode : uint8_t
	{
		None          = 0x0000000000000000,
		LowerPriority = 0x0000000000000001,
		Self          = 0x0000000000000002,
		Both          = 0x0000000000000003,
		MAX           = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EBTNodeResult
	 */
	enum class EBTNodeResult : uint8_t
	{
		Succeeded  = 0x0000000000000000,
		Failed     = 0x0000000000000001,
		Aborted    = 0x0000000000000002,
		InProgress = 0x0000000000000003,
		MAX        = 0x0000000000000004
	};

	/**
	 * Enum AIModule.ETextKeyOperation
	 */
	enum class ETextKeyOperation : uint8_t
	{
		Equal      = 0x0000000000000000,
		NotEqual   = 0x0000000000000001,
		Contain    = 0x0000000000000002,
		NotContain = 0x0000000000000003,
		MAX        = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EArithmeticKeyOperation
	 */
	enum class EArithmeticKeyOperation : uint8_t
	{
		Equal          = 0x0000000000000000,
		NotEqual       = 0x0000000000000001,
		Less           = 0x0000000000000002,
		LessOrEqual    = 0x0000000000000003,
		Greater        = 0x0000000000000004,
		GreaterOrEqual = 0x0000000000000005,
		MAX            = 0x0000000000000006
	};

	/**
	 * Enum AIModule.EBasicKeyOperation
	 */
	enum class EBasicKeyOperation : uint8_t
	{
		Set    = 0x0000000000000000,
		NotSet = 0x0000000000000001,
		MAX    = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EBTParallelMode
	 */
	enum class EBTParallelMode : uint8_t
	{
		AbortBackground   = 0x0000000000000000,
		WaitForBackground = 0x0000000000000001,
		MAX               = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EBTDecoratorLogic
	 */
	enum class EBTDecoratorLogic : uint8_t
	{
		Invalid = 0x0000000000000000,
		Test    = 0x0000000000000001,
		And     = 0x0000000000000002,
		Or      = 0x0000000000000003,
		Not     = 0x0000000000000004,
		MAX     = 0x0000000000000005
	};

	/**
	 * Enum AIModule.EBTChildIndex
	 */
	enum class EBTChildIndex : uint8_t
	{
		FirstNode = 0x0000000000000000,
		TaskNode  = 0x0000000000000001,
		MAX       = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EBTBlackboardRestart
	 */
	enum class EBTBlackboardRestart : uint8_t
	{
		ValueChange  = 0x0000000000000000,
		ResultChange = 0x0000000000000001,
		MAX          = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EBlackBoardEntryComparison
	 */
	enum class EBlackBoardEntryComparison : uint8_t
	{
		Equal    = 0x0000000000000000,
		NotEqual = 0x0000000000000001,
		MAX      = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EPathExistanceQueryType
	 */
	enum class EPathExistanceQueryType : uint8_t
	{
		NavmeshRaycast2D   = 0x0000000000000000,
		HierarchicalQuery  = 0x0000000000000001,
		RegularPathFinding = 0x0000000000000002,
		MAX                = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EPointOnCircleSpacingMethod
	 */
	enum class EPointOnCircleSpacingMethod : uint8_t
	{
		BySpaceBetween   = 0x0000000000000000,
		ByNumberOfPoints = 0x0000000000000001,
		MAX              = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EEQSNormalizationType
	 */
	enum class EEQSNormalizationType : uint8_t
	{
		Absolute         = 0x0000000000000000,
		RelativeToScores = 0x0000000000000001,
		MAX              = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EEnvTestDistance
	 */
	enum class EEnvTestDistance : uint8_t
	{
		Distance3D        = 0x0000000000000000,
		Distance2D        = 0x0000000000000001,
		DistanceZ         = 0x0000000000000002,
		DistanceAbsoluteZ = 0x0000000000000003,
		MAX               = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EEnvTestDot
	 */
	enum class EEnvTestDot : uint8_t
	{
		Dot3D = 0x0000000000000000,
		Dot2D = 0x0000000000000001,
		MAX   = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EEnvTestPathfinding
	 */
	enum class EEnvTestPathfinding : uint8_t
	{
		PathExist  = 0x0000000000000000,
		PathCost   = 0x0000000000000001,
		PathLength = 0x0000000000000002,
		MAX        = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EEnvQueryTestClamping
	 */
	enum class EEnvQueryTestClamping : uint8_t
	{
		None            = 0x0000000000000000,
		SpecifiedValue  = 0x0000000000000001,
		FilterThreshold = 0x0000000000000002,
		MAX             = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EEnvDirection
	 */
	enum class EEnvDirection : uint8_t
	{
		TwoPoints = 0x0000000000000000,
		Rotation  = 0x0000000000000001,
		MAX       = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EEnvOverlapShape
	 */
	enum class EEnvOverlapShape : uint8_t
	{
		Box     = 0x0000000000000000,
		Sphere  = 0x0000000000000001,
		Capsule = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EEnvTraceShape
	 */
	enum class EEnvTraceShape : uint8_t
	{
		Line    = 0x0000000000000000,
		Box     = 0x0000000000000001,
		Sphere  = 0x0000000000000002,
		Capsule = 0x0000000000000003,
		MAX     = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EEnvQueryTrace
	 */
	enum class EEnvQueryTrace : uint8_t
	{
		None                 = 0x0000000000000000,
		Navigation           = 0x0000000000000001,
		Geometry             = 0x0000000000000002,
		NavigationOverLedges = 0x0000000000000003,
		MAX                  = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EAIParamType
	 */
	enum class EAIParamType : uint8_t
	{
		Float = 0x0000000000000000,
		Int   = 0x0000000000000001,
		Bool  = 0x0000000000000002,
		MAX   = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EEnvQueryParam
	 */
	enum class EEnvQueryParam : uint8_t
	{
		Float = 0x0000000000000000,
		Int   = 0x0000000000000001,
		Bool  = 0x0000000000000002,
		MAX   = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EEnvQueryRunMode
	 */
	enum class EEnvQueryRunMode : uint8_t
	{
		SingleResult    = 0x0000000000000000,
		RandomBest5Pct  = 0x0000000000000001,
		RandomBest25Pct = 0x0000000000000002,
		AllMatching     = 0x0000000000000003,
		MAX             = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EEnvTestScoreOperator
	 */
	enum class EEnvTestScoreOperator : uint8_t
	{
		AverageScore = 0x0000000000000000,
		MinScore     = 0x0000000000000001,
		MaxScore     = 0x0000000000000002,
		Multiply     = 0x0000000000000003,
		MAX          = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EEnvTestFilterOperator
	 */
	enum class EEnvTestFilterOperator : uint8_t
	{
		AllPass = 0x0000000000000000,
		AnyPass = 0x0000000000000001,
		MAX     = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EEnvTestCost
	 */
	enum class EEnvTestCost : uint8_t
	{
		Low    = 0x0000000000000000,
		Medium = 0x0000000000000001,
		High   = 0x0000000000000002,
		MAX    = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EEnvTestWeight
	 */
	enum class EEnvTestWeight : uint8_t
	{
		None     = 0x0000000000000000,
		Square   = 0x0000000000000001,
		Inverse  = 0x0000000000000002,
		Unused   = 0x0000000000000003,
		Constant = 0x0000000000000004,
		Skip     = 0x0000000000000005,
		MAX      = 0x0000000000000006
	};

	/**
	 * Enum AIModule.EEnvTestScoreEquation
	 */
	enum class EEnvTestScoreEquation : uint8_t
	{
		Linear        = 0x0000000000000000,
		Square        = 0x0000000000000001,
		InverseLinear = 0x0000000000000002,
		SquareRoot    = 0x0000000000000003,
		Constant      = 0x0000000000000004,
		MAX           = 0x0000000000000005
	};

	/**
	 * Enum AIModule.EEnvTestFilterType
	 */
	enum class EEnvTestFilterType : uint8_t
	{
		Minimum = 0x0000000000000000,
		Maximum = 0x0000000000000001,
		Range   = 0x0000000000000002,
		Match   = 0x0000000000000003,
		MAX     = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EEnvTestPurpose
	 */
	enum class EEnvTestPurpose : uint8_t
	{
		Filter         = 0x0000000000000000,
		Score          = 0x0000000000000001,
		FilterAndScore = 0x0000000000000002,
		MAX            = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EEnvQueryHightlightMode
	 */
	enum class EEnvQueryHightlightMode : uint8_t
	{
		All       = 0x0000000000000000,
		Best5Pct  = 0x0000000000000001,
		Best25Pct = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum AIModule.ETeamAttitude
	 */
	enum class ETeamAttitude : uint8_t
	{
		Friendly = 0x0000000000000000,
		Neutral  = 0x0000000000000001,
		Hostile  = 0x0000000000000002,
		MAX      = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EPathFollowingRequestResult
	 */
	enum class EPathFollowingRequestResult : uint8_t
	{
		Failed            = 0x0000000000000000,
		AlreadyAtGoal     = 0x0000000000000001,
		RequestSuccessful = 0x0000000000000002,
		MAX               = 0x0000000000000003
	};

	/**
	 * Enum AIModule.EPathFollowingAction
	 */
	enum class EPathFollowingAction : uint8_t
	{
		Error       = 0x0000000000000000,
		NoMove      = 0x0000000000000001,
		DirectMove  = 0x0000000000000002,
		PartialPath = 0x0000000000000003,
		PathToGoal  = 0x0000000000000004,
		MAX         = 0x0000000000000005
	};

	/**
	 * Enum AIModule.EPathFollowingStatus
	 */
	enum class EPathFollowingStatus : uint8_t
	{
		Idle    = 0x0000000000000000,
		Waiting = 0x0000000000000001,
		Paused  = 0x0000000000000002,
		Moving  = 0x0000000000000003,
		MAX     = 0x0000000000000004
	};

	/**
	 * Enum AIModule.EPawnActionFailHandling
	 */
	enum class EPawnActionFailHandling : uint8_t
	{
		RequireSuccess = 0x0000000000000000,
		IgnoreFailure  = 0x0000000000000001,
		MAX            = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EPawnSubActionTriggeringPolicy
	 */
	enum class EPawnSubActionTriggeringPolicy : uint8_t
	{
		CopyBeforeTriggering = 0x0000000000000000,
		ReuseInstances       = 0x0000000000000001,
		MAX                  = 0x0000000000000002
	};

	/**
	 * Enum AIModule.EPawnActionMoveMode
	 */
	enum class EPawnActionMoveMode : uint8_t
	{
		UsePathfinding = 0x0000000000000000,
		StraightLine   = 0x0000000000000001,
		MAX            = 0x0000000000000002
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AIModule.AIDamageEvent
	 * Size -> 0x0030
	 */
	struct FAIDamageEvent
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNOD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AINoiseEvent
	 * Size -> 0x0030
	 */
	struct FAINoiseEvent
	{
	public:
		unsigned char                                              UnknownData_KVW4[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NoiseLocation;                                           // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Loudness;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAZS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIPredictionEvent
	 * Size -> 0x0018
	 */
	struct FAIPredictionEvent
	{
	public:
		class AActor*                                              Requestor;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              PredictedActor;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIM7[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AITeamStimulusEvent
	 * Size -> 0x0038
	 */
	struct FAITeamStimulusEvent
	{
	public:
		unsigned char                                              UnknownData_C9NB[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Broadcaster;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              Enemy;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AITouchEvent
	 * Size -> 0x0020
	 */
	struct FAITouchEvent
	{
	public:
		unsigned char                                              UnknownData_8KRN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TouchReceiver;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              OtherActor;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AISenseAffiliationFilter
	 * Size -> 0x0004
	 */
	struct FAISenseAffiliationFilter
	{
	public:
		unsigned char                                              bDetectEnemies : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDetectNeutrals : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDetectFriendlies : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEGR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIMoveRequest
	 * Size -> 0x0040
	 */
	struct FAIMoveRequest
	{
	public:
		class AActor*                                              GoalActor;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SYIR[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.BTDecoratorLogic
	 * Size -> 0x0004
	 */
	struct FBTDecoratorLogic
	{
	public:
		EBTDecoratorLogic                                          Operation;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O79C[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   Number;                                                  // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.BehaviorTreeTemplateInfo
	 * Size -> 0x0018
	 */
	struct FBehaviorTreeTemplateInfo
	{
	public:
		class UBehaviorTree*                                       Asset;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBTCompositeNode*                                    Template;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CG1[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.BlackboardEntry
	 * Size -> 0x0018
	 */
	struct FBlackboardEntry
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlackboardKeyType*                                  KeyType;                                                 // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInstanceSynced : 1;                                     // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GL00[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.BTCompositeChild
	 * Size -> 0x0030
	 */
	struct FBTCompositeChild
	{
	public:
		class UBTCompositeNode*                                    ChildComposite;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBTTaskNode*                                         ChildTask;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UBTDecorator*>                                Decorators;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBTDecoratorLogic>                           DecoratorOps;                                            // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.BlackboardKeySelector
	 * Size -> 0x0028
	 */
	struct FBlackboardKeySelector
	{
	public:
		TArray<class UBlackboardKeyType*>                          AllowedTypes;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FName                                                SelectedKeyName;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SelectedKeyType;                                         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SelectedKeyID;                                           // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4SOT[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bNoneIsAllowedValue : 1;                                 // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RQJZ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderValue
	 * Size -> 0x0020
	 */
	struct FAIDataProviderValue
	{
	public:
		unsigned char                                              UnknownData_UE9H[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIDataProvider*                                     DataBinding;                                             // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DataField;                                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderTypedValue
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FAIDataProviderTypedValue : public FAIDataProviderValue
	{
	public:
		class UClass*                                              PropertyType;                                            // 0x0020(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTCL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderFloatValue
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
	{
	public:
		float                                                      DefaultValue;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLJE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDynamicParam
	 * Size -> 0x0038
	 */
	struct FAIDynamicParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIParamType                                               ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUQ4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBKey;                                                   // 0x0010(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
	 * Size -> 0x0048
	 */
	struct FEQSParametrizedQueryExecutionRequest
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIDynamicParam>                             QueryConfig;                                             // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              EQSQueryBlackboardKey;                                   // 0x0018(0x0028) Edit, NativeAccessSpecifierPublic
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KH3E[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseBBKeyForQueryTemplate : 1;                           // 0x0044(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFW2[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.IntervalCountdown
	 * Size -> 0x0008
	 */
	struct FIntervalCountdown
	{
	public:
		float                                                      Interval;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6AG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvNamedValue
	 * Size -> 0x0010
	 */
	struct FEnvNamedValue
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIParamType                                               ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SGD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.CrowdAvoidanceConfig
	 * Size -> 0x001C
	 */
	struct FCrowdAvoidanceConfig
	{
	public:
		float                                                      VelocityBias;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredVelocityWeight;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentVelocityWeight;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SideBiasWeight;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactTimeWeight;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactTimeRange;                                         // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomPatternIdx;                                        // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdaptiveDivisions;                                       // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdaptiveRings;                                           // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdaptiveDepth;                                           // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
	 * Size -> 0x0020
	 */
	struct FCrowdAvoidanceSamplingPattern
	{
	public:
		TArray<float>                                              Angles;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Radii;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderBoolValue
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
	{
	public:
		bool                                                       DefaultValue;                                            // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V311[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvTraceData
	 * Size -> 0x0030
	 */
	struct FEnvTraceData
	{
	public:
		int32_t                                                    VersionNum;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEBS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NavigationFilter;                                        // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectDown;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectUp;                                               // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentX;                                                 // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentY;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentZ;                                                 // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostProjectionVerticalOffset;                            // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          SerializedChannel;                                       // 0x0029(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTraceShape                                             TraceShape;                                              // 0x002A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvQueryTrace                                             TraceMode;                                               // 0x002B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTraceComplex : 1;                                       // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyBlockingHits : 1;                                   // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanTraceOnNavMesh : 1;                                  // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanTraceOnGeometry : 1;                                 // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanDisableTrace : 1;                                    // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanProjectDown : 1;                                     // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D38Q[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderIntValue
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
	{
	public:
		int32_t                                                    DefaultValue;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMZJ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvDirection
	 * Size -> 0x0020
	 */
	struct FEnvDirection
	{
	public:
		class UClass*                                              LineFrom;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LineTo;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Rotation;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvDirection                                              DirMode;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Z8R[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvQueryInstanceCache
	 * Size -> 0x0178
	 */
	struct FEnvQueryInstanceCache
	{
	public:
		class UEnvQuery*                                           Template;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSR5[0x170];                                 // 0x0008(0x0170) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvOverlapData
	 * Size -> 0x0020
	 */
	struct FEnvOverlapData
	{
	public:
		float                                                      ExtentX;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentY;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentZ;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ShapeOffset;                                             // 0x000C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          OverlapChannel;                                          // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvOverlapShape                                           OverlapShape;                                            // 0x0019(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0X1N[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOnlyBlockingHits : 1;                                   // 0x001C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverlapComplex : 1;                                     // 0x001C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSkipOverlapQuerier : 1;                                 // 0x001C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4IWR[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.PawnActionStack
	 * Size -> 0x0008
	 */
	struct FPawnActionStack
	{
	public:
		class UPawnAction*                                         TopAction;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct AIModule.PawnActionEvent
	 * Size -> 0x0018
	 */
	struct FPawnActionEvent
	{
	public:
		class UPawnAction*                                         Action;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3D68[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AIRequestID
	 * Size -> 0x0004
	 */
	struct FAIRequestID
	{
	public:
		uint32_t                                                   RequestID;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct AIModule.AIStimulus
	 * Size -> 0x003C
	 */
	struct FAIStimulus
	{
	public:
		float                                                      Age;                                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ExpirationAge;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Strength;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StimulusLocation;                                        // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ReceiverLocation;                                        // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0024(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUFZ[0xC];                                   // 0x002C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UnknownData_WXRA : 1;                                    // 0x0038(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bSuccessfullySensed : 1;                                 // 0x0038(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8KXX[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.ActorPerceptionUpdateInfo
	 * Size -> 0x0048
	 */
	struct FActorPerceptionUpdateInfo
	{
	public:
		int32_t                                                    TargetId;                                                // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Target;                                                  // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIStimulus                                         Stimulus;                                                // 0x000C(0x003C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.AIDataProviderStructValue
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FAIDataProviderStructValue : public FAIDataProviderValue
	{
	public:
		unsigned char                                              UnknownData_CS2Z[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.ActorPerceptionBlueprintInfo
	 * Size -> 0x0020
	 */
	struct FActorPerceptionBlueprintInfo
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIStimulus>                                 LastSensedStimuli;                                       // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsHostile : 1;                                          // 0x0018(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BN37[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.AISightEvent
	 * Size -> 0x0018
	 */
	struct FAISightEvent
	{
	public:
		unsigned char                                              UnknownData_87S7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SeenActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Observer;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIModule.EnvQueryRequest
	 * Size -> 0x0068
	 */
	struct FEnvQueryRequest
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWorld*                                              World;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RGC3[0x50];                                  // 0x0018(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.EnvQueryResult
	 * Size -> 0x0040
	 */
	struct FEnvQueryResult
	{
	public:
		unsigned char                                              UnknownData_UXAQ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemType;                                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IUD[0x14];                                  // 0x0018(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OptionIndex;                                             // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QueryID;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWQR[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIModule.GenericTeamId
	 * Size -> 0x0001
	 */
	struct FGenericTeamId
	{
	public:
		unsigned char                                              TeamID;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
