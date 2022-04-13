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
	 * Enum MovieScene.EMovieSceneKeyInterpolation
	 */
	enum class EMovieSceneKeyInterpolation : uint8_t
	{
		Auto     = 0x0000000000000000,
		User     = 0x0000000000000001,
		Break    = 0x0000000000000002,
		Linear   = 0x0000000000000003,
		Constant = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum MovieScene.EMovieSceneBlendType
	 */
	enum class EMovieSceneBlendType : uint8_t
	{
		Invalid          = 0x0000000000000000,
		Absolute         = 0x0000000000000001,
		Additive         = 0x0000000000000002,
		Relative         = 0x0000000000000003,
		AdditiveFromBase = 0x0000000000000004,
		MAX              = 0x0000000000000005
	};

	/**
	 * Enum MovieScene.EMovieSceneCompletionMode
	 */
	enum class EMovieSceneCompletionMode : uint8_t
	{
		KeepState      = 0x0000000000000000,
		RestoreState   = 0x0000000000000001,
		ProjectDefault = 0x0000000000000002,
		MAX            = 0x0000000000000003
	};

	/**
	 * Enum MovieScene.EMovieSceneBuiltInEasing
	 */
	enum class EMovieSceneBuiltInEasing : uint8_t
	{
		Linear     = 0x0000000000000000,
		SinIn      = 0x0000000000000001,
		SinOut     = 0x0000000000000002,
		SinInOut   = 0x0000000000000003,
		QuadIn     = 0x0000000000000004,
		QuadOut    = 0x0000000000000005,
		QuadInOut  = 0x0000000000000006,
		CubicIn    = 0x0000000000000007,
		CubicOut   = 0x0000000000000008,
		CubicInOut = 0x0000000000000009,
		QuartIn    = 0x000000000000000A,
		QuartOut   = 0x000000000000000B,
		QuartInOut = 0x000000000000000C,
		QuintIn    = 0x000000000000000D,
		QuintOut   = 0x000000000000000E,
		QuintInOut = 0x000000000000000F,
		ExpoIn     = 0x0000000000000010,
		ExpoOut    = 0x0000000000000011,
		ExpoInOut  = 0x0000000000000012,
		CircIn     = 0x0000000000000013,
		CircOut    = 0x0000000000000014,
		CircInOut  = 0x0000000000000015,
		MAX        = 0x0000000000000016
	};

	/**
	 * Enum MovieScene.EEvaluationMethod
	 */
	enum class EEvaluationMethod : uint8_t
	{
		Static = 0x0000000000000000,
		Swept  = 0x0000000000000001,
		MAX    = 0x0000000000000002
	};

	/**
	 * Enum MovieScene.EMovieSceneSequenceFlags
	 */
	enum class EMovieSceneSequenceFlags : uint8_t
	{
		None               = 0x0000000000000000,
		Volatile           = 0x0000000000000001,
		BlockingEvaluation = 0x0000000000000002,
		InheritedFlags     = 0x0000000000000003,
		MAX                = 0x0000000000000004
	};

	/**
	 * Enum MovieScene.EUpdateClockSource
	 */
	enum class EUpdateClockSource : uint8_t
	{
		Tick             = 0x0000000000000000,
		Platform         = 0x0000000000000001,
		Audio            = 0x0000000000000002,
		RelativeTimecode = 0x0000000000000003,
		Timecode         = 0x0000000000000004,
		Custom           = 0x0000000000000005,
		MAX              = 0x0000000000000006
	};

	/**
	 * Enum MovieScene.EMovieSceneEvaluationType
	 */
	enum class EMovieSceneEvaluationType : uint8_t
	{
		FrameLocked   = 0x0000000000000000,
		WithSubFrames = 0x0000000000000001,
		MAX           = 0x0000000000000002
	};

	/**
	 * Enum MovieScene.EMovieScenePlayerStatus
	 */
	enum class EMovieScenePlayerStatus : uint8_t
	{
		Stopped   = 0x0000000000000000,
		Playing   = 0x0000000000000001,
		Recording = 0x0000000000000002,
		Scrubbing = 0x0000000000000003,
		Jumping   = 0x0000000000000004,
		Stepping  = 0x0000000000000005,
		Paused    = 0x0000000000000006,
		MAX       = 0x0000000000000007
	};

	/**
	 * Enum MovieScene.EMovieSceneObjectBindingSpace
	 */
	enum class EMovieSceneObjectBindingSpace : uint8_t
	{
		Local = 0x0000000000000000,
		Root  = 0x0000000000000001,
		MAX   = 0x0000000000000002
	};

	/**
	 * Enum MovieScene.ESectionEvaluationFlags
	 */
	enum class ESectionEvaluationFlags : uint8_t
	{
		None     = 0x0000000000000000,
		PreRoll  = 0x0000000000000001,
		PostRoll = 0x0000000000000002,
		MAX      = 0x0000000000000003
	};

	/**
	 * Enum MovieScene.EMovieScenePositionType
	 */
	enum class EMovieScenePositionType : uint8_t
	{
		Frame       = 0x0000000000000000,
		Time        = 0x0000000000000001,
		MarkedFrame = 0x0000000000000002,
		MAX         = 0x0000000000000003
	};

	/**
	 * Enum MovieScene.EUpdatePositionMethod
	 */
	enum class EUpdatePositionMethod : uint8_t
	{
		Play  = 0x0000000000000000,
		Jump  = 0x0000000000000001,
		Scrub = 0x0000000000000002,
		MAX   = 0x0000000000000003
	};

	/**
	 * Enum MovieScene.ESpawnOwnership
	 */
	enum class ESpawnOwnership : uint8_t
	{
		InnerSequence  = 0x0000000000000000,
		MasterSequence = 0x0000000000000001,
		External       = 0x0000000000000002,
		MAX            = 0x0000000000000003
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieScene.MovieSceneTrackEvalOptions
	 * Size -> 0x0004
	 */
	struct FMovieSceneTrackEvalOptions
	{
	public:
		unsigned char                                              bCanEvaluateNearestSection : 1;                          // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvalNearestSection : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateInPreroll : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateInPostroll : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateNearestSection : 1;                             // 0x0000(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9N7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
	 * Size -> 0x0020
	 */
	struct FMovieSceneTrackEvaluationFieldEntry
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumberRange                                   Range;                                                   // 0x0008(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        ForcedTime;                                              // 0x0018(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESectionEvaluationFlags                                    Flags;                                                   // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRW4[0x1];                                   // 0x001D(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    LegacySortOrder;                                         // 0x001E(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackEvaluationField
	 * Size -> 0x0010
	 */
	struct FMovieSceneTrackEvaluationField
	{
	public:
		TArray<struct FMovieSceneTrackEvaluationFieldEntry>        Entries;                                                 // 0x0000(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSectionEvalOptions
	 * Size -> 0x0002
	 */
	struct FMovieSceneSectionEvalOptions
	{
	public:
		bool                                                       bCanEditCompletionMode;                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovieSceneCompletionMode                                  CompletionMode;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEasingSettings
	 * Size -> 0x0038
	 */
	struct FMovieSceneEasingSettings
	{
	public:
		int32_t                                                    AutoEaseInDuration;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AutoEaseOutDuration;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EaseIn[0x10];                                            // 0x0008(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       bManualEaseIn;                                           // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AXI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ManualEaseInDuration;                                    // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EaseOut[0x10];                                           // 0x0020(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       bManualEaseOut;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LA6R[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ManualEaseOutDuration;                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFrameRange
	 * Size -> 0x0010
	 */
	struct FMovieSceneFrameRange
	{
	public:
		unsigned char                                              UnknownData_HMIN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.OptionalMovieSceneBlendType
	 * Size -> 0x0002
	 */
	struct FOptionalMovieSceneBlendType
	{
	public:
		EMovieSceneBlendType                                       BlendType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsValid;                                                // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceLoopCount
	 * Size -> 0x0004
	 */
	struct FMovieSceneSequenceLoopCount
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
	 * Size -> 0x0014
	 */
	struct FMovieSceneSequencePlaybackSettings
	{
	public:
		unsigned char                                              bAutoPlay : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VAC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequenceLoopCount                        LoopCount;                                               // 0x0004(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRandomStartTime : 1;                                    // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRestoreState : 1;                                       // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableMovementInput : 1;                               // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableLookAtInput : 1;                                 // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHidePlayer : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHideHud : 1;                                            // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableCameraCuts : 1;                                  // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPauseAtEnd : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZSS[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceID
	 * Size -> 0x0004
	 */
	struct FMovieSceneSequenceID
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
	 * Size -> 0x00E8
	 */
	struct FMovieSceneRootEvaluationTemplateInstance
	{
	public:
		TWeakObjectPtr<class UMovieSceneSequence>                  WeakRootSequence;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneCompiledDataManager*                      CompiledDataManager;                                     // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WQH3[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneEntitySystemLinker*                       EntitySystemLinker;                                      // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VFOP[0x70];                                  // 0x0020(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FMovieSceneSequenceID, class UObject*>         DirectorInstances;                                       // 0x0090(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PLBW[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceReplProperties
	 * Size -> 0x0010
	 */
	struct FMovieSceneSequenceReplProperties
	{
	public:
		struct FFrameTime                                          LastKnownPosition;                                       // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovieScenePlayerStatus                                    LastKnownStatus;                                         // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCCD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastKnownNumLoops;                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSectionParameters
	 * Size -> 0x0024
	 */
	struct FMovieSceneSectionParameters
	{
	public:
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x0000(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanLoop;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLAT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        EndFrameOffset;                                          // 0x0008(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        FirstLoopStartFrameOffset;                               // 0x000C(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeScale;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HierarchicalBias;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartOffset;                                             // 0x0018(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrerollTime;                                             // 0x001C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostrollTime;                                            // 0x0020(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSpawnable
	 * Size -> 0x0090
	 */
	struct FMovieSceneSpawnable
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<class FName>                                        Tags;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bContinuouslyRespawn;                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvaluateTracksWhenNotSpawned;                           // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLP2[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x0044(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8FCI[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             ObjectTemplate;                                          // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGuid>                                       ChildPossessables;                                       // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		ESpawnOwnership                                            Ownership;                                               // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_518N[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelName;                                               // 0x0084(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKMU[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieScenePossessable
	 * Size -> 0x0048
	 */
	struct FMovieScenePossessable
	{
	public:
		TArray<class FName>                                        Tags;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Name;                                                    // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              PossessedObjectClass;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ParentGuid;                                              // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneBinding
	 * Size -> 0x0030
	 */
	struct FMovieSceneBinding
	{
	public:
		struct FGuid                                               ObjectGuid;                                              // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              BindingName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneTrack*>                            Tracks;                                                  // 0x0020(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneObjectBindingID
	 * Size -> 0x0018
	 */
	struct FMovieSceneObjectBindingID
	{
	public:
		int32_t                                                    SequenceID;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMovieSceneObjectBindingSpace                              Space;                                                   // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y67N[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneObjectBindingIDs
	 * Size -> 0x0010
	 */
	struct FMovieSceneObjectBindingIDs
	{
	public:
		TArray<struct FMovieSceneObjectBindingID>                  IDs;                                                     // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneMarkedFrame
	 * Size -> 0x0018
	 */
	struct FMovieSceneMarkedFrame
	{
	public:
		struct FFrameNumber                                        FrameNumber;                                             // 0x0000(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHXP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Label;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneBindingOverrideData
	 * Size -> 0x0024
	 */
	struct FMovieSceneBindingOverrideData
	{
	public:
		struct FMovieSceneObjectBindingID                          ObjectBindingId;                                         // 0x0000(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              Object;                                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridesDefault;                                       // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86EP[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneChannel
	 * Size -> 0x0008
	 */
	struct FMovieSceneChannel
	{
	public:
		unsigned char                                              UnknownData_5MVC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneBoolChannel
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FMovieSceneBoolChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       DefaultValue;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YJWI[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T2FF[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackIdentifier
	 * Size -> 0x0004
	 */
	struct FMovieSceneTrackIdentifier
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
	 * Size -> 0x0088
	 */
	struct FMovieSceneEvalTemplatePtr
	{
	public:
		unsigned char                                              UnknownData_99ID[0x88];                                  // 0x0000(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
	 * Size -> 0x0038
	 */
	struct FMovieSceneTrackImplementationPtr
	{
	public:
		unsigned char                                              UnknownData_6OPU[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTrack
	 * Size -> 0x0078
	 */
	struct FMovieSceneEvaluationTrack
	{
	public:
		struct FGuid                                               ObjectBindingId;                                         // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   EvaluationPriority;                                      // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EEvaluationMethod                                          EvaluationMethod;                                        // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HN4Z[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UMovieSceneTrack>                     SourceTrack;                                             // 0x0014(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ARI0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneEvalTemplatePtr>                  ChildTemplates;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FMovieSceneTrackImplementationPtr                   TrackTemplate;                                           // 0x0030(0x0038) NativeAccessSpecifierPrivate
		class FName                                                EvaluationGroup;                                         // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEvaluateInPreroll : 1;                                  // 0x0070(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEvaluateInPostroll : 1;                                 // 0x0070(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bTearDownPriority : 1;                                   // 0x0070(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2CJ9[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
	 * Size -> 0x0004
	 */
	struct FMovieSceneEvaluationTemplateSerialNumber
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
	 * Size -> 0x00A8
	 */
	struct FMovieSceneTemplateGenerationLedger
	{
	public:
		struct FMovieSceneTrackIdentifier                          LastTrackIdentifier;                                     // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CUF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, struct FMovieSceneTrackIdentifier>      TrackSignatureToTrackIdentifier;                         // 0x0008(0x0050) NativeAccessSpecifierPublic
		TMap<struct FGuid, struct FMovieSceneFrameRange>           SubSectionRanges;                                        // 0x0058(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTemplate
	 * Size -> 0x0160
	 */
	struct FMovieSceneEvaluationTemplate
	{
	public:
		TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                                  // 0x0000(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CNFN[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               SequenceSignature;                                       // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneEvaluationTemplateSerialNumber           TemplateSerialNumber;                                    // 0x00B0(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AU7H[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTemplateGenerationLedger                 TemplateLedger;                                          // 0x00B8(0x00A8) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
	 * Size -> 0x0018
	 */
	struct FMovieSceneSequenceHierarchyNode
	{
	public:
		struct FMovieSceneSequenceID                               ParentID;                                                // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3X46[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneSequenceID>                       Children;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSequenceTree
	 * Size -> 0x0060
	 */
	struct FMovieSceneSubSequenceTree
	{
	public:
		unsigned char                                              UnknownData_3M4F[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTimeTransform
	 * Size -> 0x000C
	 */
	struct FMovieSceneTimeTransform
	{
	public:
		float                                                      TimeScale;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameTime                                          Offset;                                                  // 0x0004(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTimeWarping
	 * Size -> 0x0008
	 */
	struct FMovieSceneTimeWarping
	{
	public:
		struct FFrameNumber                                        Start;                                                   // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        End;                                                     // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
	 * Size -> 0x0014
	 */
	struct FMovieSceneNestedSequenceTransform
	{
	public:
		struct FMovieSceneTimeTransform                            LinearTransform;                                         // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneTimeWarping                              Warping;                                                 // 0x000C(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceTransform
	 * Size -> 0x0020
	 */
	struct FMovieSceneSequenceTransform
	{
	public:
		struct FMovieSceneTimeTransform                            LinearTransform;                                         // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRU2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneNestedSequenceTransform>          NestedTransforms;                                        // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
	 * Size -> 0x0018
	 */
	struct FMovieSceneSequenceInstanceDataPtr
	{
	public:
		unsigned char                                              UnknownData_XV8H[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSequenceData
	 * Size -> 0x00E8
	 */
	struct FMovieSceneSubSequenceData
	{
	public:
		struct FSoftObjectPath                                     Sequence;                                                // 0x0000(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceTransform                        RootToSequenceTransform;                                 // 0x0018(0x0020) NativeAccessSpecifierPublic
		struct FFrameRate                                          TickResolution;                                          // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceID                               DeterministicSequenceID;                                 // 0x0040(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               PlayRange;                                               // 0x0044(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               FullPlayRange;                                           // 0x0054(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               UnwarpedPlayRange;                                       // 0x0064(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               PreRollRange;                                            // 0x0074(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               PostRollRange;                                           // 0x0084(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int16_t                                                    HierarchicalBias;                                        // 0x0094(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasHierarchicalEasing;                                  // 0x0096(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HIF[0x1];                                   // 0x0097(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequenceInstanceDataPtr                  InstanceData;                                            // 0x0098(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BKI[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               SubSectionSignature;                                     // 0x00B8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneSequenceTransform                        OuterToInnerTransform;                                   // 0x00C8(0x0020) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceHierarchy
	 * Size -> 0x0118
	 */
	struct FMovieSceneSequenceHierarchy
	{
	public:
		struct FMovieSceneSequenceHierarchyNode                    RootNode;                                                // 0x0000(0x0018) NativeAccessSpecifierPrivate
		struct FMovieSceneSubSequenceTree                          Tree;                                                    // 0x0018(0x0060) NativeAccessSpecifierPrivate
		TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                            // 0x0078(0x0050) NativeAccessSpecifierPrivate
		TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                               // 0x00C8(0x0050) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
	 * Size -> 0x0060
	 */
	struct FMovieSceneEvaluationFieldEntityTree
	{
	public:
		unsigned char                                              UnknownData_7IXC[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
	 * Size -> 0x000C
	 */
	struct FMovieSceneEvaluationFieldEntityKey
	{
	public:
		TWeakObjectPtr<class UObject>                              EntityOwner;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   EntityID;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
	 * Size -> 0x0010
	 */
	struct FMovieSceneEvaluationFieldEntity
	{
	public:
		struct FMovieSceneEvaluationFieldEntityKey                 Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SharedMetaDataIndex;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
	 * Size -> 0x000C
	 */
	struct FMovieSceneEvaluationFieldEntityMetaData
	{
	public:
		struct FFrameNumber                                        ForcedTime;                                              // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VWM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESectionEvaluationFlags                                    Flags;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateInSequencePreRoll : 1;                          // 0x0009(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateInSequencePostRoll : 1;                         // 0x0009(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4LOC[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
	 * Size -> 0x0010
	 */
	struct FMovieSceneEvaluationFieldSharedEntityMetaData
	{
	public:
		struct FGuid                                               ObjectBindingId;                                         // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEntityComponentField
	 * Size -> 0x00F0
	 */
	struct FMovieSceneEntityComponentField
	{
	public:
		struct FMovieSceneEvaluationFieldEntityTree                PersistentEntityTree;                                    // 0x0000(0x0060) NativeAccessSpecifierPrivate
		struct FMovieSceneEvaluationFieldEntityTree                OneShotEntityTree;                                       // 0x0060(0x0060) NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvaluationFieldEntity>            Entities;                                                // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvaluationFieldEntityMetaData>    EntityMetaData;                                          // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                          // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
	 * Size -> 0x0008
	 */
	struct FMovieSceneEvaluationGroupLUTIndex
	{
	public:
		int32_t                                                    NumInitPtrs;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumEvalPtrs;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
	 * Size -> 0x0008
	 */
	struct FMovieSceneEvaluationFieldTrackPtr
	{
	public:
		struct FMovieSceneSequenceID                               SequenceID;                                              // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneTrackIdentifier                          TrackIdentifier;                                         // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
	 * Size -> 0x000C
	 */
	struct FMovieSceneFieldEntry_EvaluationTrack
	{
	public:
		struct FMovieSceneEvaluationFieldTrackPtr                  TrackPtr;                                                // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   NumChildren;                                             // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4IQD[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
	 * Size -> 0x0008
	 */
	struct FMovieSceneFieldEntry_ChildTemplate
	{
	public:
		uint16_t                                                   ChildIndex;                                              // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESectionEvaluationFlags                                    Flags;                                                   // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFX3[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        ForcedTime;                                              // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationGroup
	 * Size -> 0x0030
	 */
	struct FMovieSceneEvaluationGroup
	{
	public:
		TArray<struct FMovieSceneEvaluationGroupLUTIndex>          LUTIndices;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneFieldEntry_EvaluationTrack>       TrackLUT;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneFieldEntry_ChildTemplate>         SectionLUT;                                              // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationKey
	 * Size -> 0x000C
	 */
	struct FMovieSceneEvaluationKey
	{
	public:
		struct FMovieSceneSequenceID                               SequenceID;                                              // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneTrackIdentifier                          TrackIdentifier;                                         // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SectionIndex;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
	 * Size -> 0x0010
	 */
	struct FMovieSceneOrderedEvaluationKey
	{
	public:
		struct FMovieSceneEvaluationKey                            Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   SetupIndex;                                              // 0x000C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   TearDownIndex;                                           // 0x000E(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationMetaData
	 * Size -> 0x0020
	 */
	struct FMovieSceneEvaluationMetaData
	{
	public:
		TArray<struct FMovieSceneSequenceID>                       ActiveSequences;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneOrderedEvaluationKey>             ActiveEntities;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationField
	 * Size -> 0x0030
	 */
	struct FMovieSceneEvaluationField
	{
	public:
		TArray<struct FMovieSceneFrameRange>                       Ranges;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvaluationGroup>                  Groups;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvaluationMetaData>               MetaData;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
	 * Size -> 0x0001
	 */
	struct FMovieSceneSequenceCompilerMaskStruct
	{
	public:
		unsigned char                                              bHierarchy : 1;                                          // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluationTemplate : 1;                                 // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluationTemplateField : 1;                            // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEntityComponentField : 1;                               // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
	 * Size -> 0x0038
	 */
	struct FMovieSceneEntitySystemGraphNodes
	{
	public:
		unsigned char                                              UnknownData_GHS1[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEntitySystemGraph
	 * Size -> 0x0138
	 */
	struct FMovieSceneEntitySystemGraph
	{
	public:
		unsigned char                                              UnknownData_F43B[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEntitySystemGraphNodes                   Nodes;                                                   // 0x0080(0x0038) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VJPY[0x80];                                  // 0x00B8(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackInstanceInput
	 * Size -> 0x0010
	 */
	struct FMovieSceneTrackInstanceInput
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXLT[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplateBase
	 * Size -> 0x0010
	 */
	struct FMovieSceneEvalTemplateBase
	{
	public:
		unsigned char                                              UnknownData_8DES[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplate
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
	{
	public:
		EMovieSceneCompletionMode                                  CompletionMode;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5M33[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UMovieSceneSection>                   SourceSectionPtr;                                        // 0x0014(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_233Y[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTangentData
	 * Size -> 0x0014
	 */
	struct FMovieSceneTangentData
	{
	public:
		float                                                      ArriveTangent;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArriveTangentWeight;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangentWeight;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentWeightMode                                TangentWeightMode;                                       // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LS0X[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFloatValue
	 * Size -> 0x001C
	 */
	struct FMovieSceneFloatValue
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneTangentData                              Tangent;                                                 // 0x0004(0x0014) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERichCurveInterpMode                                       InterpMode;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentMode                                      TangentMode;                                             // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PaddingByte;                                             // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHTG[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyHandleMap
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
	{	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFloatChannel
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FMovieSceneFloatChannel : public FMovieSceneChannel
	{
	public:
		ERichCurveExtrapolation                                    PreInfinityExtrap;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveExtrapolation                                    PostInfinityExtrap;                                      // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTZC[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneFloatValue>                       Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      DefaultValue;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VVE9[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneKeyHandleMap                             KeyHandles;                                              // 0x0038(0x0060) Transient, NativeAccessSpecifierPrivate
		struct FFrameRate                                          TickResolution;                                          // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneIntegerChannel
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FMovieSceneIntegerChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    DefaultValue;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BRS6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3O4B[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackImplementation
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
	{	};

	/**
	 * ScriptStruct MovieScene.MovieScenePropertySectionData
	 * Size -> 0x0018
	 */
	struct FMovieScenePropertySectionData
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PropertyPath;                                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieScenePropertySectionTemplate
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0020(0x0018) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct MovieScene.TrackInstanceInputComponent
	 * Size -> 0x0010
	 */
	struct FTrackInstanceInputComponent
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputIndex;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4L19[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
	 * Size -> 0x0010
	 */
	struct FMovieSceneTrackInstanceComponent
	{
	public:
		class UMovieSceneSection*                                  Owner;                                                   // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TrackInstanceClass;                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.EasingComponentData
	 * Size -> 0x0008
	 */
	struct FEasingComponentData
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieScenePropertyBinding
	 * Size -> 0x0014
	 */
	struct FMovieScenePropertyBinding
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PropertyPath;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUseClassLookup;                                      // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNSV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSectionGroup
	 * Size -> 0x0010
	 */
	struct FMovieSceneSectionGroup
	{
	public:
		TArray<TWeakObjectPtr<class UMovieSceneSection>>           Sections;                                                // 0x0000(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackLabels
	 * Size -> 0x0010
	 */
	struct FMovieSceneTrackLabels
	{
	public:
		TArray<class FString>                                      Strings;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneExpansionState
	 * Size -> 0x0001
	 */
	struct FMovieSceneExpansionState
	{
	public:
		bool                                                       bExpanded;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEditorData
	 * Size -> 0x00F0
	 */
	struct FMovieSceneEditorData
	{
	public:
		TMap<class FString, struct FMovieSceneExpansionState>      ExpansionStates;                                         // 0x0000(0x0050) NativeAccessSpecifierPublic
		TArray<class FString>                                      PinnedNodes;                                             // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     ViewStart;                                               // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ViewEnd;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     WorkStart;                                               // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     WorkEnd;                                                 // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MarkedFrames[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FFloatRange                                         WorkingRange;                                            // 0x00D0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         ViewRange;                                               // 0x00E0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTimecodeSource
	 * Size -> 0x0018
	 */
	struct FMovieSceneTimecodeSource
	{
	public:
		struct FTimecode                                           Timecode;                                                // 0x0000(0x0014) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        DeltaFrame;                                              // 0x0014(0x0004) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneByteChannel
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FMovieSceneByteChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              DefaultValue;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D7UD[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UEnum*                                               Enum;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8ZWM[0x60];                                  // 0x0038(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
	 * Size -> 0x0028
	 */
	struct FMovieSceneEntitySystemGraphNode
	{
	public:
		unsigned char                                              UnknownData_I524[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneEntitySystem*                             System;                                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEmptyStruct
	 * Size -> 0x0001
	 */
	struct FMovieSceneEmptyStruct
	{
	public:
		unsigned char                                              UnknownData_GWLJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSegmentIdentifier
	 * Size -> 0x0004
	 */
	struct FMovieSceneSegmentIdentifier
	{
	public:
		int32_t                                                    IdentifierIndex;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
	 * Size -> 0x0004 (FullSize[0x000C] - InheritedSize[0x0008])
	 */
	struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
	{
	public:
		struct FMovieSceneSegmentIdentifier                        SegmentID;                                               // 0x0008(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationOperand
	 * Size -> 0x0014
	 */
	struct FMovieSceneEvaluationOperand
	{
	public:
		struct FGuid                                               ObjectBindingId;                                         // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceID                               SequenceID;                                              // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSectionData
	 * Size -> 0x001C
	 */
	struct FMovieSceneSubSectionData
	{
	public:
		TWeakObjectPtr<class UMovieSceneSubSection>                Section;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ObjectBindingId;                                         // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESectionEvaluationFlags                                    Flags;                                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZPE[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyStruct
	 * Size -> 0x0008
	 */
	struct FMovieSceneKeyStruct
	{
	public:
		unsigned char                                              UnknownData_M2BX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyTimeStruct
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
	{
	public:
		struct FFrameNumber                                        Time;                                                    // 0x0008(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DG5[0x1C];                                  // 0x000C(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
	 * Size -> 0x0050
	 */
	struct FGeneratedMovieSceneKeyStruct
	{
	public:
		unsigned char                                              UnknownData_6M4B[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
	 * Size -> 0x0030
	 */
	struct FMovieSceneObjectPathChannelKeyValue
	{
	public:
		unsigned char                                              SoftPtr[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UObject*                                             HardPtr;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneObjectPathChannel
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
	{
	public:
		class UClass*                                              PropertyClass;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneObjectPathChannelKeyValue>        Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FMovieSceneObjectPathChannelKeyValue                DefaultValue;                                            // 0x0030(0x0030) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G0VT[0x60];                                  // 0x0060(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSegment
	 * Size -> 0x0058
	 */
	struct FMovieSceneSegment
	{
	public:
		unsigned char                                              UnknownData_XGT0[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.SectionEvaluationData
	 * Size -> 0x000C
	 */
	struct FSectionEvaluationData
	{
	public:
		int32_t                                                    ImplIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        ForcedTime;                                              // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESectionEvaluationFlags                                    Flags;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDPW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
	 * Size -> 0x0008
	 */
	struct FMovieSceneSubSequenceTreeEntry
	{
	public:
		unsigned char                                              UnknownData_SLA4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceInstanceData
	 * Size -> 0x0008
	 */
	struct FMovieSceneSequenceInstanceData
	{
	public:
		unsigned char                                              UnknownData_LRXJ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
	 * Size -> 0x0028
	 */
	struct FMovieSceneSequencePlaybackParams
	{
	public:
		struct FFrameTime                                          Frame;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVL2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MarkedFrame;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovieScenePositionType                                    PositionType;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUpdatePositionMethod                                      UpdateMethod;                                            // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LKB[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneWarpCounter
	 * Size -> 0x0010
	 */
	struct FMovieSceneWarpCounter
	{
	public:
		TArray<uint32_t>                                           WarpCounts;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.TestMovieSceneEvalTemplate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
	 * Size -> 0x0004
	 */
	struct FMovieSceneTrackDisplayOptions
	{
	public:
		unsigned char                                              bShowVerticalFrames : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTBP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
	 * Size -> 0x0010
	 */
	struct FMovieSceneTrackInstanceEntry
	{
	public:
		class UObject*                                             BoundObject;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovieSceneTrackInstance*                            TrackInstance;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
