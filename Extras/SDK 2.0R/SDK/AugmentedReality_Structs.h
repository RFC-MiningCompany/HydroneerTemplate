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
	 * Enum AugmentedReality.EARTrackingState
	 */
	enum class EARTrackingState : uint8_t
	{
		Unknown         = 0x0000000000000000,
		Tracking        = 0x0000000000000001,
		NotTracking     = 0x0000000000000002,
		StoppedTracking = 0x0000000000000003,
		MAX             = 0x0000000000000004
	};

	/**
	 * Enum AugmentedReality.EGeoAnchorComponentDebugMode
	 */
	enum class EGeoAnchorComponentDebugMode : uint8_t
	{
		None        = 0x0000000000000000,
		ShowGeoData = 0x0000000000000001,
		MAX         = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EPoseComponentDebugMode
	 */
	enum class EPoseComponentDebugMode : uint8_t
	{
		None         = 0x0000000000000000,
		ShowSkeleton = 0x0000000000000001,
		MAX          = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EQRCodeComponentDebugMode
	 */
	enum class EQRCodeComponentDebugMode : uint8_t
	{
		None       = 0x0000000000000000,
		ShowQRCode = 0x0000000000000001,
		MAX        = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EImageComponentDebugMode
	 */
	enum class EImageComponentDebugMode : uint8_t
	{
		None              = 0x0000000000000000,
		ShowDetectedImage = 0x0000000000000001,
		MAX               = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EARFaceTransformMixing
	 */
	enum class EARFaceTransformMixing : uint8_t
	{
		ComponentOnly                    = 0x0000000000000000,
		ComponentLocationTrackedRotation = 0x0000000000000001,
		ComponentWithTracked             = 0x0000000000000002,
		TrackingOnly                     = 0x0000000000000003,
		MAX                              = 0x0000000000000004
	};

	/**
	 * Enum AugmentedReality.EFaceComponentDebugMode
	 */
	enum class EFaceComponentDebugMode : uint8_t
	{
		None           = 0x0000000000000000,
		ShowEyeVectors = 0x0000000000000001,
		ShowFaceMesh   = 0x0000000000000002,
		MAX            = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EPlaneComponentDebugMode
	 */
	enum class EPlaneComponentDebugMode : uint8_t
	{
		None               = 0x0000000000000000,
		ShowNetworkRole    = 0x0000000000000001,
		ShowClassification = 0x0000000000000002,
		MAX                = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARSessionConfigFlags
	 */
	enum class EARSessionConfigFlags : uint8_t
	{
		None                         = 0x0000000000000000,
		GenerateMeshData             = 0x0000000000000001,
		RenderMeshDataInWireframe    = 0x0000000000000002,
		GenerateCollisionForMeshData = 0x0000000000000003,
		GenerateNavMeshForMeshData   = 0x0000000000000004,
		UseMeshDataForOcclusion      = 0x0000000000000005,
		MAX                          = 0x0000000000000006
	};

	/**
	 * Enum AugmentedReality.EARServicePermissionRequestResult
	 */
	enum class EARServicePermissionRequestResult : uint8_t
	{
		Granted = 0x0000000000000000,
		Denied  = 0x0000000000000001,
		MAX     = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EARServiceInstallRequestResult
	 */
	enum class EARServiceInstallRequestResult : uint8_t
	{
		Installed                = 0x0000000000000000,
		DeviceNotCompatible      = 0x0000000000000001,
		UserDeclinedInstallation = 0x0000000000000002,
		FatalError               = 0x0000000000000003,
		MAX                      = 0x0000000000000004
	};

	/**
	 * Enum AugmentedReality.EARServiceAvailability
	 */
	enum class EARServiceAvailability : uint8_t
	{
		UnknownError                = 0x0000000000000000,
		UnknownChecking             = 0x0000000000000001,
		UnknownTimedOut             = 0x0000000000000002,
		UnsupportedDeviceNotCapable = 0x0000000000000003,
		SupportedNotInstalled       = 0x0000000000000004,
		SupportedVersionTooOld      = 0x0000000000000005,
		SupportedInstalled          = 0x0000000000000006,
		MAX                         = 0x0000000000000007
	};

	/**
	 * Enum AugmentedReality.EARGeoTrackingAccuracy
	 */
	enum class EARGeoTrackingAccuracy : uint8_t
	{
		Undetermined = 0x0000000000000000,
		Low          = 0x0000000000000001,
		Medium       = 0x0000000000000002,
		High         = 0x0000000000000003,
		MAX          = 0x0000000000000004
	};

	/**
	 * Enum AugmentedReality.EARGeoTrackingStateReason
	 */
	enum class EARGeoTrackingStateReason : uint8_t
	{
		None                        = 0x0000000000000000,
		NotAvailableAtLocation      = 0x0000000000000001,
		NeedLocationPermissions     = 0x0000000000000002,
		DevicePointedTooLow         = 0x0000000000000003,
		WorldTrackingUnstable       = 0x0000000000000004,
		WaitingForLocation          = 0x0000000000000005,
		GeoDataNotLoaded            = 0x0000000000000006,
		VisualLocalizationFailed    = 0x0000000000000007,
		WaitingForAvailabilityCheck = 0x0000000000000008,
		MAX                         = 0x0000000000000009
	};

	/**
	 * Enum AugmentedReality.EARGeoTrackingState
	 */
	enum class EARGeoTrackingState : uint8_t
	{
		Initializing = 0x0000000000000000,
		Localized    = 0x0000000000000001,
		Localizing   = 0x0000000000000002,
		NotAvailable = 0x0000000000000003,
		MAX          = 0x0000000000000004
	};

	/**
	 * Enum AugmentedReality.EARSceneReconstruction
	 */
	enum class EARSceneReconstruction : uint8_t
	{
		None                   = 0x0000000000000000,
		MeshOnly               = 0x0000000000000001,
		MeshWithClassification = 0x0000000000000002,
		MAX                    = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARSessionTrackingFeature
	 */
	enum class EARSessionTrackingFeature : uint8_t
	{
		None                        = 0x0000000000000000,
		PoseDetection2D             = 0x0000000000000001,
		PersonSegmentation          = 0x0000000000000002,
		PersonSegmentationWithDepth = 0x0000000000000003,
		SceneDepth                  = 0x0000000000000004,
		SmoothedSceneDepth          = 0x0000000000000005,
		MAX                         = 0x0000000000000006
	};

	/**
	 * Enum AugmentedReality.EARFaceTrackingUpdate
	 */
	enum class EARFaceTrackingUpdate : uint8_t
	{
		CurvesAndGeo = 0x0000000000000000,
		CurvesOnly   = 0x0000000000000001,
		MAX          = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EAREnvironmentCaptureProbeType
	 */
	enum class EAREnvironmentCaptureProbeType : uint8_t
	{
		None      = 0x0000000000000000,
		Manual    = 0x0000000000000001,
		Automatic = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARFrameSyncMode
	 */
	enum class EARFrameSyncMode : uint8_t
	{
		SyncTickWithCameraImage    = 0x0000000000000000,
		SyncTickWithoutCameraImage = 0x0000000000000001,
		MAX                        = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EARLightEstimationMode
	 */
	enum class EARLightEstimationMode : uint8_t
	{
		None                     = 0x0000000000000000,
		AmbientLightEstimate     = 0x0000000000000001,
		DirectionalLightEstimate = 0x0000000000000002,
		MAX                      = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARPlaneDetectionMode
	 */
	enum class EARPlaneDetectionMode : uint8_t
	{
		None                     = 0x0000000000000000,
		HorizontalPlaneDetection = 0x0000000000000001,
		VerticalPlaneDetection   = 0x0000000000000002,
		MAX                      = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARSessionType
	 */
	enum class EARSessionType : uint8_t
	{
		None           = 0x0000000000000000,
		Orientation    = 0x0000000000000001,
		World          = 0x0000000000000002,
		Face           = 0x0000000000000003,
		Image          = 0x0000000000000004,
		ObjectScanning = 0x0000000000000005,
		PoseTracking   = 0x0000000000000006,
		GeoTracking    = 0x0000000000000007,
		MAX            = 0x0000000000000008
	};

	/**
	 * Enum AugmentedReality.EARWorldAlignment
	 */
	enum class EARWorldAlignment : uint8_t
	{
		Gravity           = 0x0000000000000000,
		GravityAndHeading = 0x0000000000000001,
		Camera            = 0x0000000000000002,
		MAX               = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARDepthAccuracy
	 */
	enum class EARDepthAccuracy : uint8_t
	{
		Unkown      = 0x0000000000000000,
		Approximate = 0x0000000000000001,
		Accurate    = 0x0000000000000002,
		MAX         = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARDepthQuality
	 */
	enum class EARDepthQuality : uint8_t
	{
		Unkown = 0x0000000000000000,
		Low    = 0x0000000000000001,
		High   = 0x0000000000000002,
		MAX    = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARTextureType
	 */
	enum class EARTextureType : uint8_t
	{
		Unknown                 = 0x0000000000000000,
		CameraImage             = 0x0000000000000001,
		CameraDepth             = 0x0000000000000002,
		EnvironmentCapture      = 0x0000000000000003,
		PersonSegmentationImage = 0x0000000000000004,
		PersonSegmentationDepth = 0x0000000000000005,
		SceneDepthMap           = 0x0000000000000006,
		SceneDepthConfidenceMap = 0x0000000000000007,
		MAX                     = 0x0000000000000008
	};

	/**
	 * Enum AugmentedReality.EAREye
	 */
	enum class EAREye : uint8_t
	{
		LeftEye  = 0x0000000000000000,
		RightEye = 0x0000000000000001,
		MAX      = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EARFaceBlendShape
	 */
	enum class EARFaceBlendShape : uint8_t
	{
		EyeBlinkLeft        = 0x0000000000000000,
		EyeLookDownLeft     = 0x0000000000000001,
		EyeLookInLeft       = 0x0000000000000002,
		EyeLookOutLeft      = 0x0000000000000003,
		EyeLookUpLeft       = 0x0000000000000004,
		EyeSquintLeft       = 0x0000000000000005,
		EyeWideLeft         = 0x0000000000000006,
		EyeBlinkRight       = 0x0000000000000007,
		EyeLookDownRight    = 0x0000000000000008,
		EyeLookInRight      = 0x0000000000000009,
		EyeLookOutRight     = 0x000000000000000A,
		EyeLookUpRight      = 0x000000000000000B,
		EyeSquintRight      = 0x000000000000000C,
		EyeWideRight        = 0x000000000000000D,
		JawForward          = 0x000000000000000E,
		JawLeft             = 0x000000000000000F,
		JawRight            = 0x0000000000000010,
		JawOpen             = 0x0000000000000011,
		MouthClose          = 0x0000000000000012,
		MouthFunnel         = 0x0000000000000013,
		MouthPucker         = 0x0000000000000014,
		MouthLeft           = 0x0000000000000015,
		MouthRight          = 0x0000000000000016,
		MouthSmileLeft      = 0x0000000000000017,
		MouthSmileRight     = 0x0000000000000018,
		MouthFrownLeft      = 0x0000000000000019,
		MouthFrownRight     = 0x000000000000001A,
		MouthDimpleLeft     = 0x000000000000001B,
		MouthDimpleRight    = 0x000000000000001C,
		MouthStretchLeft    = 0x000000000000001D,
		MouthStretchRight   = 0x000000000000001E,
		MouthRollLower      = 0x000000000000001F,
		MouthRollUpper      = 0x0000000000000020,
		MouthShrugLower     = 0x0000000000000021,
		MouthShrugUpper     = 0x0000000000000022,
		MouthPressLeft      = 0x0000000000000023,
		MouthPressRight     = 0x0000000000000024,
		MouthLowerDownLeft  = 0x0000000000000025,
		MouthLowerDownRight = 0x0000000000000026,
		MouthUpperUpLeft    = 0x0000000000000027,
		MouthUpperUpRight   = 0x0000000000000028,
		BrowDownLeft        = 0x0000000000000029,
		BrowDownRight       = 0x000000000000002A,
		BrowInnerUp         = 0x000000000000002B,
		BrowOuterUpLeft     = 0x000000000000002C,
		BrowOuterUpRight    = 0x000000000000002D,
		CheekPuff           = 0x000000000000002E,
		CheekSquintLeft     = 0x000000000000002F,
		CheekSquintRight    = 0x0000000000000030,
		NoseSneerLeft       = 0x0000000000000031,
		NoseSneerRight      = 0x0000000000000032,
		TongueOut           = 0x0000000000000033,
		HeadYaw             = 0x0000000000000034,
		HeadPitch           = 0x0000000000000035,
		HeadRoll            = 0x0000000000000036,
		LeftEyeYaw          = 0x0000000000000037,
		LeftEyePitch        = 0x0000000000000038,
		LeftEyeRoll         = 0x0000000000000039,
		RightEyeYaw         = 0x000000000000003A,
		RightEyePitch       = 0x000000000000003B,
		RightEyeRoll        = 0x000000000000003C,
		MAX                 = 0x000000000000003D
	};

	/**
	 * Enum AugmentedReality.EARFaceTrackingDirection
	 */
	enum class EARFaceTrackingDirection : uint8_t
	{
		FaceRelative = 0x0000000000000000,
		FaceMirrored = 0x0000000000000001,
		MAX          = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EARCandidateImageOrientation
	 */
	enum class EARCandidateImageOrientation : uint8_t
	{
		Landscape = 0x0000000000000000,
		Portrait  = 0x0000000000000001,
		MAX       = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EARAltitudeSource
	 */
	enum class EARAltitudeSource : uint8_t
	{
		Precise     = 0x0000000000000000,
		Coarse      = 0x0000000000000001,
		UserDefined = 0x0000000000000002,
		Unknown     = 0x0000000000000003,
		MAX         = 0x0000000000000004
	};

	/**
	 * Enum AugmentedReality.EARJointTransformSpace
	 */
	enum class EARJointTransformSpace : uint8_t
	{
		Model       = 0x0000000000000000,
		ParentJoint = 0x0000000000000001,
		MAX         = 0x0000000000000002
	};

	/**
	 * Enum AugmentedReality.EARObjectClassification
	 */
	enum class EARObjectClassification : uint8_t
	{
		NotApplicable = 0x0000000000000000,
		Unknown       = 0x0000000000000001,
		Wall          = 0x0000000000000002,
		Ceiling       = 0x0000000000000003,
		Floor         = 0x0000000000000004,
		Table         = 0x0000000000000005,
		Seat          = 0x0000000000000006,
		Face          = 0x0000000000000007,
		Image         = 0x0000000000000008,
		World         = 0x0000000000000009,
		SceneObject   = 0x000000000000000A,
		HandMesh      = 0x000000000000000B,
		Door          = 0x000000000000000C,
		Window        = 0x000000000000000D,
		MAX           = 0x000000000000000E
	};

	/**
	 * Enum AugmentedReality.EARPlaneOrientation
	 */
	enum class EARPlaneOrientation : uint8_t
	{
		Horizontal = 0x0000000000000000,
		Vertical   = 0x0000000000000001,
		Diagonal   = 0x0000000000000002,
		MAX        = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARWorldMappingState
	 */
	enum class EARWorldMappingState : uint8_t
	{
		NotAvailable                 = 0x0000000000000000,
		StillMappingNotRelocalizable = 0x0000000000000001,
		StillMappingRelocalizable    = 0x0000000000000002,
		Mapped                       = 0x0000000000000003,
		MAX                          = 0x0000000000000004
	};

	/**
	 * Enum AugmentedReality.EARSessionStatus
	 */
	enum class EARSessionStatus : uint8_t
	{
		NotStarted               = 0x0000000000000000,
		Running                  = 0x0000000000000001,
		NotSupported             = 0x0000000000000002,
		FatalError               = 0x0000000000000003,
		PermissionNotGranted     = 0x0000000000000004,
		UnsupportedConfiguration = 0x0000000000000005,
		Other                    = 0x0000000000000006,
		MAX                      = 0x0000000000000007
	};

	/**
	 * Enum AugmentedReality.EARTrackingQualityReason
	 */
	enum class EARTrackingQualityReason : uint8_t
	{
		None                 = 0x0000000000000000,
		Initializing         = 0x0000000000000001,
		Relocalizing         = 0x0000000000000002,
		ExcessiveMotion      = 0x0000000000000003,
		InsufficientFeatures = 0x0000000000000004,
		InsufficientLight    = 0x0000000000000005,
		BadState             = 0x0000000000000006,
		MAX                  = 0x0000000000000007
	};

	/**
	 * Enum AugmentedReality.EARTrackingQuality
	 */
	enum class EARTrackingQuality : uint8_t
	{
		NotTracking            = 0x0000000000000000,
		OrientationOnly        = 0x0000000000000001,
		OrientationAndPosition = 0x0000000000000002,
		MAX                    = 0x0000000000000003
	};

	/**
	 * Enum AugmentedReality.EARLineTraceChannels
	 */
	enum class EARLineTraceChannels : uint8_t
	{
		None                      = 0x0000000000000000,
		FeaturePoint              = 0x0000000000000001,
		GroundPlane               = 0x0000000000000002,
		PlaneUsingExtent          = 0x0000000000000003,
		PlaneUsingBoundaryPolygon = 0x0000000000000004,
		MAX                       = 0x0000000000000005
	};

	/**
	 * Enum AugmentedReality.EARCaptureType
	 */
	enum class EARCaptureType : uint8_t
	{
		Camera             = 0x0000000000000000,
		QRCode             = 0x0000000000000001,
		SpatialMapping     = 0x0000000000000002,
		SceneUnderstanding = 0x0000000000000003,
		MAX                = 0x0000000000000004
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AugmentedReality.ARVideoFormat
	 * Size -> 0x000C
	 */
	struct FARVideoFormat
	{
	public:
		int32_t                                                    FPS;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARSessionPayload
	 * Size -> 0x0018
	 */
	struct FARSessionPayload
	{
	public:
		int32_t                                                    ConfigFlags;                                             // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGJO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  DefaultMeshMaterial;                                     // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  DefaultWireframeMeshMaterial;                            // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARPlaneUpdatePayload
	 * Size -> 0x0080
	 */
	struct FARPlaneUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KV4[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Center;                                                  // 0x0050(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Extents;                                                 // 0x005C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     BoundaryVertices;                                        // 0x0068(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EARObjectClassification                                    ObjectClassification;                                    // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSVL[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARPointUpdatePayload
	 * Size -> 0x0001
	 */
	struct FARPointUpdatePayload
	{
	public:
		unsigned char                                              UnknownData_B72O[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARFaceUpdatePayload
	 * Size -> 0x0040
	 */
	struct FARFaceUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LeftEyePosition;                                         // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RightEyePosition;                                        // 0x0024(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookAtTarget;                                            // 0x0030(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R0U1[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARImageUpdatePayload
	 * Size -> 0x0060
	 */
	struct FARImageUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KJ3[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UARCandidateImage*                                   DetectedImage;                                           // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           EstimatedSize;                                           // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
	 * Size -> 0x0070
	 */
	struct FARQRCodeUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GRT[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Extents;                                                 // 0x0050(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDGX[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              QRCode;                                                  // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARPoseUpdatePayload
	 * Size -> 0x0040
	 */
	struct FARPoseUpdatePayload
	{
	public:
		struct FTransform                                          WorldTransform;                                          // 0x0000(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  JointTransforms;                                         // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
	 * Size -> 0x0030
	 */
	struct FAREnvironmentProbeUpdatePayload
	{
	public:
		struct FTransform                                          WorldTransform;                                          // 0x0000(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARObjectUpdatePayload
	 * Size -> 0x0030
	 */
	struct FARObjectUpdatePayload
	{
	public:
		struct FTransform                                          WorldTransform;                                          // 0x0000(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARMeshUpdatePayload
	 * Size -> 0x0060
	 */
	struct FARMeshUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6O69[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EARObjectClassification                                    ObjectClassification;                                    // 0x0050(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58Z3[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
	 * Size -> 0x0070
	 */
	struct FARGeoAnchorUpdatePayload
	{
	public:
		struct FARSessionPayload                                   SessionPayload;                                          // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3H9O[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldTransform;                                          // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Longitude;                                               // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Latitude;                                                // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AltitudeMeters;                                          // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARAltitudeSource                                          AltitudeSource;                                          // 0x005C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQIC[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnchorName;                                              // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARSkeletonDefinition
	 * Size -> 0x0028
	 */
	struct FARSkeletonDefinition
	{
	public:
		int32_t                                                    NumJoints;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FAU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        JointNames;                                              // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARPose3D
	 * Size -> 0x0050
	 */
	struct FARPose3D
	{
	public:
		struct FARSkeletonDefinition                               SkeletonDefinition;                                      // 0x0000(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  JointTransforms;                                         // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               IsJointTracked;                                          // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EARJointTransformSpace                                     JointTransformSpace;                                     // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79P6[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.TrackedGeometryGroup
	 * Size -> 0x0018
	 */
	struct FTrackedGeometryGroup
	{
	public:
		class AARActor*                                            ARActor;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UARComponent*                                        ARComponent;                                             // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARSharedWorldReplicationState
	 * Size -> 0x0008
	 */
	struct FARSharedWorldReplicationState
	{
	public:
		int32_t                                                    PreviewImageOffset;                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ARWorldOffset;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARTraceResult
	 * Size -> 0x0060
	 */
	struct FARTraceResult
	{
	public:
		float                                                      DistanceFromCamera;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EARLineTraceChannels                                       TraceChannel;                                            // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QRML[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalTransform;                                          // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7UMM[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AugmentedReality.ARCameraIntrinsics
	 * Size -> 0x0018
	 */
	struct FARCameraIntrinsics
	{
	public:
		struct FIntPoint                                           ImageResolution;                                         // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           FocalLength;                                             // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PrincipalPoint;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARPose2D
	 * Size -> 0x0048
	 */
	struct FARPose2D
	{
	public:
		struct FARSkeletonDefinition                               SkeletonDefinition;                                      // 0x0000(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   JointLocations;                                          // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               IsJointTracked;                                          // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AugmentedReality.ARSessionStatus
	 * Size -> 0x0018
	 */
	struct FARSessionStatus
	{
	public:
		class FString                                              AdditionalInfo;                                          // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARSessionStatus                                           Status;                                                  // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYAP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
