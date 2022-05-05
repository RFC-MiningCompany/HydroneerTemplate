#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	 */
	struct UGizmoBaseComponent_UpdateWorldLocalState_Params
	{
	public:
		bool                                                       bWorldIn;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	 */
	struct UGizmoBaseComponent_UpdateHoverState_Params
	{
	public:
		bool                                                       bHoveringIn;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	 */
	struct UGizmoTransformSource_SetTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
	 */
	struct UGizmoTransformSource_GetTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
