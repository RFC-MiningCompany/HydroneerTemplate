#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * Enum InteractiveToolsFramework.EInputCaptureState
	 */
	enum class EInputCaptureState : uint8_t
	{
		Begin    = 0x0000000000000000,
		Continue = 0x0000000000000001,
		End      = 0x0000000000000002,
		Ignore   = 0x0000000000000003,
		MAX      = 0x0000000000000004
	};

	/**
	 * Enum InteractiveToolsFramework.EInputCaptureRequestType
	 */
	enum class EInputCaptureRequestType : uint8_t
	{
		Begin  = 0x0000000000000000,
		Ignore = 0x0000000000000001,
		MAX    = 0x0000000000000002
	};

	/**
	 * Enum InteractiveToolsFramework.EInputCaptureSide
	 */
	enum class EInputCaptureSide : uint8_t
	{
		None  = 0x0000000000000000,
		Left  = 0x0000000000000001,
		Right = 0x0000000000000002,
		Both  = 0x0000000000000003,
		Any   = 0x0000000000000004,
		MAX   = 0x0000000000000005
	};

	/**
	 * Enum InteractiveToolsFramework.EInputDevices
	 */
	enum class EInputDevices : uint8_t
	{
		None             = 0x0000000000000000,
		Keyboard         = 0x0000000000000001,
		Mouse            = 0x0000000000000002,
		Gamepad          = 0x0000000000000003,
		OculusTouch      = 0x0000000000000004,
		HTCViveWands     = 0x0000000000000005,
		AnySpatialDevice = 0x0000000000000006,
		TabletFingers    = 0x0000000000000007,
		MAX              = 0x0000000000000008
	};

	/**
	 * Enum InteractiveToolsFramework.ETransformGizmoSubElements
	 */
	enum class ETransformGizmoSubElements : uint8_t
	{
		None                        = 0x0000000000000000,
		TranslateAxisX              = 0x0000000000000001,
		TranslateAxisY              = 0x0000000000000002,
		TranslateAxisZ              = 0x0000000000000003,
		TranslateAllAxes            = 0x0000000000000004,
		TranslatePlaneXY            = 0x0000000000000005,
		TranslatePlaneXZ            = 0x0000000000000006,
		TranslatePlaneYZ            = 0x0000000000000007,
		TranslateAllPlanes          = 0x0000000000000008,
		RotateAxisX                 = 0x0000000000000009,
		RotateAxisY                 = 0x000000000000000A,
		RotateAxisZ                 = 0x000000000000000B,
		RotateAllAxes               = 0x000000000000000C,
		ScaleAxisX                  = 0x000000000000000D,
		ScaleAxisY                  = 0x000000000000000E,
		ScaleAxisZ                  = 0x000000000000000F,
		ScaleAllAxes                = 0x0000000000000010,
		ScalePlaneYZ                = 0x0000000000000011,
		ScalePlaneXZ                = 0x0000000000000012,
		ScalePlaneXY                = 0x0000000000000013,
		ScaleAllPlanes              = 0x0000000000000014,
		ScaleUniform                = 0x0000000000000015,
		StandardTranslateRotate     = 0x0000000000000016,
		TranslateRotateUniformScale = 0x0000000000000017,
		FullTranslateRotateScale    = 0x0000000000000018,
		MAX                         = 0x0000000000000019
	};

	/**
	 * Enum InteractiveToolsFramework.EToolChangeTrackingMode
	 */
	enum class EToolChangeTrackingMode : uint8_t
	{
		NoChangeTracking = 0x0000000000000000,
		UndoToExit       = 0x0000000000000001,
		FullUndoRedo     = 0x0000000000000002,
		MAX              = 0x0000000000000003
	};

	/**
	 * Enum InteractiveToolsFramework.EToolSide
	 */
	enum class EToolSide : uint8_t
	{
		Left  = 0x0000000000000000,
		Mouse = 0x0000000000000001,
		Right = 0x0000000000000002,
		MAX   = 0x0000000000000003
	};

	/**
	 * Enum InteractiveToolsFramework.EViewInteractionState
	 */
	enum class EViewInteractionState : uint8_t
	{
		None    = 0x0000000000000000,
		Hovered = 0x0000000000000001,
		Focused = 0x0000000000000002,
		MAX     = 0x0000000000000003
	};

	/**
	 * Enum InteractiveToolsFramework.ESelectedObjectsModificationType
	 */
	enum class ESelectedObjectsModificationType : uint8_t
	{
		Replace = 0x0000000000000000,
		Add     = 0x0000000000000001,
		Remove  = 0x0000000000000002,
		Clear   = 0x0000000000000003,
		MAX     = 0x0000000000000004
	};

	/**
	 * Enum InteractiveToolsFramework.EToolMessageLevel
	 */
	enum class EToolMessageLevel : uint8_t
	{
		Internal         = 0x0000000000000000,
		UserMessage      = 0x0000000000000001,
		UserNotification = 0x0000000000000002,
		UserWarning      = 0x0000000000000003,
		UserError        = 0x0000000000000004,
		MAX              = 0x0000000000000005
	};

	/**
	 * Enum InteractiveToolsFramework.EToolContextCoordinateSystem
	 */
	enum class EToolContextCoordinateSystem : uint8_t
	{
		World = 0x0000000000000000,
		Local = 0x0000000000000001,
		MAX   = 0x0000000000000002
	};

	/**
	 * Enum InteractiveToolsFramework.EStandardToolContextMaterials
	 */
	enum class EStandardToolContextMaterials : uint8_t
	{
		VertexColorMaterial = 0x0000000000000000,
		MAX                 = 0x0000000000000001
	};

	/**
	 * Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
	 */
	enum class ESceneSnapQueryTargetType : uint8_t
	{
		None       = 0x0000000000000000,
		MeshVertex = 0x0000000000000001,
		MeshEdge   = 0x0000000000000002,
		Grid       = 0x0000000000000003,
		All        = 0x0000000000000004,
		MAX        = 0x0000000000000005
	};

	/**
	 * Enum InteractiveToolsFramework.ESceneSnapQueryType
	 */
	enum class ESceneSnapQueryType : uint8_t
	{
		Position = 0x0000000000000000,
		Rotation = 0x0000000000000001,
		MAX      = 0x0000000000000002
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InteractiveToolsFramework.BrushStampData
	 * Size -> 0x00AC
	 */
	struct FBrushStampData
	{
	public:
		unsigned char                                              UnknownData_2T51[0xAC];                                  // 0x0000(0x00AC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.BehaviorInfo
	 * Size -> 0x0020
	 */
	struct FBehaviorInfo
	{
	public:
		class UInputBehavior*                                      Behavior;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYQN[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.ActiveGizmo
	 * Size -> 0x0030
	 */
	struct FActiveGizmo
	{
	public:
		unsigned char                                              UnknownData_C3NA[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
	 * Size -> 0x0008
	 */
	struct FGizmoFloatParameterChange
	{
	public:
		float                                                      InitialValue;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentValue;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
	 * Size -> 0x0010
	 */
	struct FGizmoVec2ParameterChange
	{
	public:
		struct FVector2D                                           InitialValue;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CurrentValue;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.InputRayHit
	 * Size -> 0x0028
	 */
	struct FInputRayHit
	{
	public:
		unsigned char                                              UnknownData_8W01[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
