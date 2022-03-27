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
	 * Enum MovieScene.EMovieSceneKeyInterpolation
	 */
	enum class MovieScene_EMovieSceneKeyInterpolation : uint8_t
	{
		EMovieSceneKeyInterpolation__Auto                            = 0,
		EMovieSceneKeyInterpolation__User                            = 1,
		EMovieSceneKeyInterpolation__Break                           = 2,
		EMovieSceneKeyInterpolation__Linear                          = 3,
		EMovieSceneKeyInterpolation__Constant                        = 4,
		EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5
	};

	/**
	 * Enum MovieScene.EMovieSceneBlendType
	 */
	enum class MovieScene_EMovieSceneBlendType : uint8_t
	{
		EMovieSceneBlendType__Invalid                  = 0,
		EMovieSceneBlendType__Absolute                 = 1,
		EMovieSceneBlendType__Additive                 = 2,
		EMovieSceneBlendType__Relative                 = 3,
		EMovieSceneBlendType__AdditiveFromBase         = 4,
		EMovieSceneBlendType__EMovieSceneBlendType_MAX = 5
	};

	/**
	 * Enum MovieScene.EMovieSceneCompletionMode
	 */
	enum class MovieScene_EMovieSceneCompletionMode : uint8_t
	{
		EMovieSceneCompletionMode__KeepState                     = 0,
		EMovieSceneCompletionMode__RestoreState                  = 1,
		EMovieSceneCompletionMode__ProjectDefault                = 2,
		EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 3
	};

	/**
	 * Enum MovieScene.EMovieSceneBuiltInEasing
	 */
	enum class MovieScene_EMovieSceneBuiltInEasing : uint8_t
	{
		EMovieSceneBuiltInEasing__Linear                       = 0,
		EMovieSceneBuiltInEasing__SinIn                        = 1,
		EMovieSceneBuiltInEasing__SinOut                       = 2,
		EMovieSceneBuiltInEasing__SinInOut                     = 3,
		EMovieSceneBuiltInEasing__QuadIn                       = 4,
		EMovieSceneBuiltInEasing__QuadOut                      = 5,
		EMovieSceneBuiltInEasing__QuadInOut                    = 6,
		EMovieSceneBuiltInEasing__CubicIn                      = 7,
		EMovieSceneBuiltInEasing__CubicOut                     = 8,
		EMovieSceneBuiltInEasing__CubicInOut                   = 9,
		EMovieSceneBuiltInEasing__QuartIn                      = 10,
		EMovieSceneBuiltInEasing__QuartOut                     = 11,
		EMovieSceneBuiltInEasing__QuartInOut                   = 12,
		EMovieSceneBuiltInEasing__QuintIn                      = 13,
		EMovieSceneBuiltInEasing__QuintOut                     = 14,
		EMovieSceneBuiltInEasing__QuintInOut                   = 15,
		EMovieSceneBuiltInEasing__ExpoIn                       = 16,
		EMovieSceneBuiltInEasing__ExpoOut                      = 17,
		EMovieSceneBuiltInEasing__ExpoInOut                    = 18,
		EMovieSceneBuiltInEasing__CircIn                       = 19,
		EMovieSceneBuiltInEasing__CircOut                      = 20,
		EMovieSceneBuiltInEasing__CircInOut                    = 21,
		EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22
	};

	/**
	 * Enum MovieScene.EEvaluationMethod
	 */
	enum class MovieScene_EEvaluationMethod : uint8_t
	{
		EEvaluationMethod__Static                = 0,
		EEvaluationMethod__Swept                 = 1,
		EEvaluationMethod__EEvaluationMethod_MAX = 2
	};

	/**
	 * Enum MovieScene.EMovieSceneSequenceFlags
	 */
	enum class MovieScene_EMovieSceneSequenceFlags : uint8_t
	{
		EMovieSceneSequenceFlags__None                         = 0,
		EMovieSceneSequenceFlags__Volatile                     = 1,
		EMovieSceneSequenceFlags__BlockingEvaluation           = 2,
		EMovieSceneSequenceFlags__InheritedFlags               = 3,
		EMovieSceneSequenceFlags__EMovieSceneSequenceFlags_MAX = 4
	};

	/**
	 * Enum MovieScene.EUpdateClockSource
	 */
	enum class MovieScene_EUpdateClockSource : uint8_t
	{
		EUpdateClockSource__Tick                   = 0,
		EUpdateClockSource__Platform               = 1,
		EUpdateClockSource__Audio                  = 2,
		EUpdateClockSource__RelativeTimecode       = 3,
		EUpdateClockSource__Timecode               = 4,
		EUpdateClockSource__Custom                 = 5,
		EUpdateClockSource__EUpdateClockSource_MAX = 6
	};

	/**
	 * Enum MovieScene.EMovieSceneEvaluationType
	 */
	enum class MovieScene_EMovieSceneEvaluationType : uint8_t
	{
		EMovieSceneEvaluationType__FrameLocked                   = 0,
		EMovieSceneEvaluationType__WithSubFrames                 = 1,
		EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 2
	};

	/**
	 * Enum MovieScene.EMovieScenePlayerStatus
	 */
	enum class MovieScene_EMovieScenePlayerStatus : uint8_t
	{
		EMovieScenePlayerStatus__Stopped   = 0,
		EMovieScenePlayerStatus__Playing   = 1,
		EMovieScenePlayerStatus__Recording = 2,
		EMovieScenePlayerStatus__Scrubbing = 3,
		EMovieScenePlayerStatus__Jumping   = 4,
		EMovieScenePlayerStatus__Stepping  = 5,
		EMovieScenePlayerStatus__Paused    = 6,
		EMovieScenePlayerStatus__MAX       = 7
	};

	/**
	 * Enum MovieScene.EMovieSceneObjectBindingSpace
	 */
	enum class MovieScene_EMovieSceneObjectBindingSpace : uint8_t
	{
		EMovieSceneObjectBindingSpace__Local                             = 0,
		EMovieSceneObjectBindingSpace__Root                              = 1,
		EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2
	};

	/**
	 * Enum MovieScene.ESectionEvaluationFlags
	 */
	enum class MovieScene_ESectionEvaluationFlags : uint8_t
	{
		ESectionEvaluationFlags__None                        = 0,
		ESectionEvaluationFlags__PreRoll                     = 1,
		ESectionEvaluationFlags__PostRoll                    = 2,
		ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3
	};

	/**
	 * Enum MovieScene.EMovieScenePositionType
	 */
	enum class MovieScene_EMovieScenePositionType : uint8_t
	{
		EMovieScenePositionType__Frame                       = 0,
		EMovieScenePositionType__Time                        = 1,
		EMovieScenePositionType__MarkedFrame                 = 2,
		EMovieScenePositionType__EMovieScenePositionType_MAX = 3
	};

	/**
	 * Enum MovieScene.EUpdatePositionMethod
	 */
	enum class MovieScene_EUpdatePositionMethod : uint8_t
	{
		EUpdatePositionMethod__Play                      = 0,
		EUpdatePositionMethod__Jump                      = 1,
		EUpdatePositionMethod__Scrub                     = 2,
		EUpdatePositionMethod__EUpdatePositionMethod_MAX = 3
	};

	/**
	 * Enum MovieScene.ESpawnOwnership
	 */
	enum class MovieScene_ESpawnOwnership : uint8_t
	{
		ESpawnOwnership__InnerSequence       = 0,
		ESpawnOwnership__MasterSequence      = 1,
		ESpawnOwnership__External            = 2,
		ESpawnOwnership__ESpawnOwnership_MAX = 3
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
		unsigned char                                              UnknownData_182Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)

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
		MovieScene_ESectionEvaluationFlags                         Flags;                                                   // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PAK[0x1];                                   // 0x001D(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		MovieScene_EMovieSceneCompletionMode                       CompletionMode;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
		unsigned char                                              UnknownData_A9VC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ManualEaseInDuration;                                    // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EaseOut[0x10];                                           // 0x0020(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       bManualEaseOut;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H296[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ManualEaseOutDuration;                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFrameRange
	 * Size -> 0x0010
	 */
	struct FMovieSceneFrameRange
	{
	public:
		unsigned char                                              UnknownData_SZNW[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.OptionalMovieSceneBlendType
	 * Size -> 0x0002
	 */
	struct FOptionalMovieSceneBlendType
	{
	public:
		MovieScene_EMovieSceneBlendType                            BlendType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
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
		unsigned char                                              UnknownData_KA1T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_JP3X[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

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
	 * ScriptStruct MovieScene.MovieSceneSequenceReplProperties
	 * Size -> 0x0010
	 */
	struct FMovieSceneSequenceReplProperties
	{
	public:
		struct FFrameTime                                          LastKnownPosition;                                       // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MovieScene_EMovieScenePlayerStatus                         LastKnownStatus;                                         // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUWQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastKnownNumLoops;                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
	 * Size -> 0x0088
	 */
	struct FMovieSceneEvalTemplatePtr
	{
	public:
		unsigned char                                              UnknownData_29VH[0x88];                                  // 0x0000(0x0088) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
	 * Size -> 0x0038
	 */
	struct FMovieSceneTrackImplementationPtr
	{
	public:
		unsigned char                                              UnknownData_1T7B[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)

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
		MovieScene_EEvaluationMethod                               EvaluationMethod;                                        // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BBHU[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UMovieSceneTrack>                     SourceTrack;                                             // 0x0014(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N9WH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneEvalTemplatePtr>                  ChildTemplates;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FMovieSceneTrackImplementationPtr                   TrackTemplate;                                           // 0x0030(0x0038) NativeAccessSpecifierPrivate
		class FName                                                EvaluationGroup;                                         // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEvaluateInPreroll : 1;                                  // 0x0070(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEvaluateInPostroll : 1;                                 // 0x0070(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bTearDownPriority : 1;                                   // 0x0070(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CE3R[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

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
	 * ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
	 * Size -> 0x00E8
	 */
	struct FMovieSceneRootEvaluationTemplateInstance
	{
	public:
		TWeakObjectPtr<class UMovieSceneSequence>                  WeakRootSequence;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneCompiledDataManager*                      CompiledDataManager;                                     // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BUXQ[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneEntitySystemLinker*                       EntitySystemLinker;                                      // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1ZA9[0x70];                                  // 0x0020(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FMovieSceneSequenceID, class UObject*>         DirectorInstances;                                       // 0x0090(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0BSG[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_OA2F[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_PU18[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x0044(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9J4X[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             ObjectTemplate;                                          // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGuid>                                       ChildPossessables;                                       // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		MovieScene_ESpawnOwnership                                 Ownership;                                               // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4VM5[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelName;                                               // 0x0084(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RX3[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

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
		MovieScene_EMovieSceneObjectBindingSpace                   Space;                                                   // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0X1R[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneMarkedFrame
	 * Size -> 0x0018
	 */
	struct FMovieSceneMarkedFrame
	{
	public:
		struct FFrameNumber                                        FrameNumber;                                             // 0x0000(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMJN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Label;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
	 * ScriptStruct MovieScene.MovieSceneBindingOverrideData
	 * Size -> 0x0024
	 */
	struct FMovieSceneBindingOverrideData
	{
	public:
		struct FMovieSceneObjectBindingID                          ObjectBindingId;                                         // 0x0000(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              Object;                                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridesDefault;                                       // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5N6B[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneChannel
	 * Size -> 0x0008
	 */
	struct FMovieSceneChannel
	{
	public:
		unsigned char                                              UnknownData_9UKD[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_J6WX[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GAH8[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

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
	 * ScriptStruct MovieScene.MovieSceneSubSequenceTree
	 * Size -> 0x0060
	 */
	struct FMovieSceneSubSequenceTree
	{
	public:
		unsigned char                                              UnknownData_2XD8[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

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
	 * ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
	 * Size -> 0x0018
	 */
	struct FMovieSceneSequenceInstanceDataPtr
	{
	public:
		unsigned char                                              UnknownData_YMEU[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
	 * Size -> 0x0060
	 */
	struct FMovieSceneEvaluationFieldEntityTree
	{
	public:
		unsigned char                                              UnknownData_VKQA[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_FEHU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		MovieScene_ESectionEvaluationFlags                         Flags;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateInSequencePreRoll : 1;                          // 0x0009(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateInSequencePostRoll : 1;                         // 0x0009(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TV4D[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_M8GO[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
	 * Size -> 0x0008
	 */
	struct FMovieSceneFieldEntry_ChildTemplate
	{
	public:
		uint16_t                                                   ChildIndex;                                              // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MovieScene_ESectionEvaluationFlags                         Flags;                                                   // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EGK[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        ForcedTime;                                              // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
	 * ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
	 * Size -> 0x0038
	 */
	struct FMovieSceneEntitySystemGraphNodes
	{
	public:
		unsigned char                                              UnknownData_T8O2[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEntitySystemGraph
	 * Size -> 0x0138
	 */
	struct FMovieSceneEntitySystemGraph
	{
	public:
		unsigned char                                              UnknownData_CZIW[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEntitySystemGraphNodes                   Nodes;                                                   // 0x0080(0x0038) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MZ6G[0x80];                                  // 0x00B8(0x0080) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackInstanceInput
	 * Size -> 0x0010
	 */
	struct FMovieSceneTrackInstanceInput
	{
	public:
		class UMovieSceneSection*                                  Section;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KZ3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplateBase
	 * Size -> 0x0010
	 */
	struct FMovieSceneEvalTemplateBase
	{
	public:
		unsigned char                                              UnknownData_PIN9[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplate
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
	{
	public:
		MovieScene_EMovieSceneCompletionMode                       CompletionMode;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UT9O[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UMovieSceneSection>                   SourceSectionPtr;                                        // 0x0014(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BWWK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

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
		Engine_ERichCurveTangentWeightMode                         TangentWeightMode;                                       // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GO06[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

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
		Engine_ERichCurveInterpMode                                InterpMode;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveTangentMode                               TangentMode;                                             // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PaddingByte;                                             // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18BU[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyHandleMap
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
	{
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFloatChannel
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FMovieSceneFloatChannel : public FMovieSceneChannel
	{
	public:
		Engine_ERichCurveExtrapolation                             PreInfinityExtrap;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveExtrapolation                             PostInfinityExtrap;                                      // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7A9[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneFloatValue>                       Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      DefaultValue;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0M5K[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_XH56[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GJHQ[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackImplementation
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
	{
	};

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
		unsigned char                                              UnknownData_IW51[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_4CQ2[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

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
	 * ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
	 * Size -> 0x0018
	 */
	struct FMovieSceneSequenceHierarchyNode
	{
	public:
		struct FMovieSceneSequenceID                               ParentID;                                                // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDM1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneSequenceID>                       Children;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
	 * Size -> 0x00A8
	 */
	struct FMovieSceneTemplateGenerationLedger
	{
	public:
		struct FMovieSceneTrackIdentifier                          LastTrackIdentifier;                                     // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RC6Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_KL17[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               SequenceSignature;                                       // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneEvaluationTemplateSerialNumber           TemplateSerialNumber;                                    // 0x00B0(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TME[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTemplateGenerationLedger                 TemplateLedger;                                          // 0x00B8(0x00A8) NativeAccessSpecifierPrivate

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
	 * ScriptStruct MovieScene.MovieSceneSequenceTransform
	 * Size -> 0x0020
	 */
	struct FMovieSceneSequenceTransform
	{
	public:
		struct FMovieSceneTimeTransform                            LinearTransform;                                         // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVFA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneNestedSequenceTransform>          NestedTransforms;                                        // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

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
		unsigned char                                              UnknownData_Y8RL[0x1];                                   // 0x0097(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequenceInstanceDataPtr                  InstanceData;                                            // 0x0098(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4O7[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
	 * ScriptStruct MovieScene.MovieSceneByteChannel
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FMovieSceneByteChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              DefaultValue;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I5JH[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UEnum*                                               Enum;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UTGI[0x60];                                  // 0x0038(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
	 * Size -> 0x0028
	 */
	struct FMovieSceneEntitySystemGraphNode
	{
	public:
		unsigned char                                              UnknownData_R74U[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneEntitySystem*                             System;                                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEmptyStruct
	 * Size -> 0x0001
	 */
	struct FMovieSceneEmptyStruct
	{
	public:
		unsigned char                                              UnknownData_OYVG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

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
		MovieScene_ESectionEvaluationFlags                         Flags;                                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36PL[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyStruct
	 * Size -> 0x0008
	 */
	struct FMovieSceneKeyStruct
	{
	public:
		unsigned char                                              UnknownData_7OR3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyTimeStruct
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
	{
	public:
		struct FFrameNumber                                        Time;                                                    // 0x0008(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGU7[0x1C];                                  // 0x000C(0x001C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
	 * Size -> 0x0050
	 */
	struct FGeneratedMovieSceneKeyStruct
	{
	public:
		unsigned char                                              UnknownData_8O2Z[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_6RIM[0x60];                                  // 0x0060(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSegment
	 * Size -> 0x0058
	 */
	struct FMovieSceneSegment
	{
	public:
		unsigned char                                              UnknownData_74O8[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)

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
		MovieScene_ESectionEvaluationFlags                         Flags;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XAO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
	 * Size -> 0x0008
	 */
	struct FMovieSceneSubSequenceTreeEntry
	{
	public:
		unsigned char                                              UnknownData_6B1C[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceInstanceData
	 * Size -> 0x0008
	 */
	struct FMovieSceneSequenceInstanceData
	{
	public:
		unsigned char                                              UnknownData_S5FC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_CXJV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MarkedFrame;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MovieScene_EMovieScenePositionType                         PositionType;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MovieScene_EUpdatePositionMethod                           UpdateMethod;                                            // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYQ7[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)

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
	{
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
	 * Size -> 0x0004
	 */
	struct FMovieSceneTrackDisplayOptions
	{
	public:
		unsigned char                                              bShowVerticalFrames : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YF9J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)

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
