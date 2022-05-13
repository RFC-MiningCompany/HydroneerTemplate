/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnyButtonInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnyButtonInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractiveGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAxisAngleGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisAngleGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractiveGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAxisAngleGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisAngleGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAxisPositionGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisPositionGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAxisPositionGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisPositionGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoConstantAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoConstantAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoConstantFrameAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoConstantFrameAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantFrameAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoWorldAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoWorldAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoComponentAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoComponentAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractiveToolPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBrushBaseProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushBaseProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushBaseProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USingleSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSurfacePointTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSurfacePointTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseBrushTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseBrushTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BaseBrushTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBrushStampIndicatorBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushStampIndicatorBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicatorBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBrushStampIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushStampIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClickDragInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClickDragInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULocalClickDragInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalClickDragInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.LocalClickDragInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractiveToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClickDragToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClickDragToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UClickDragTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClickDragTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AInternalToolFrameworkActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInternalToolFrameworkActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGizmoActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWorldIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState");
		
		struct
		{
			bool                                               bWorldIn;
		} params;
		params.bWorldIn = bWorldIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHoveringIn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState");
		
		struct
		{
			bool                                               bHoveringIn;
		} params;
		params.bHoveringIn = bHoveringIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoArrowComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoArrowComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoArrowComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoCircleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoCircleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoCircleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.SetTransform");
		
		struct
		{
			struct FTransform                                  NewTransform;
		} params;
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UGizmoTransformSource::GetTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.GetTransform");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	 * 		Flags  -> ()
	 */
	bool UGizmoAxisSource::HasTangentVectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TangentXOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TangentYOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors");
		
		struct
		{
			struct FVector                                     TangentXOut;
			struct FVector                                     TangentYOut;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TangentXOut != nullptr)
			*TangentXOut = params.TangentXOut;
		if (TangentYOut != nullptr)
			*TangentYOut = params.TangentYOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	 * 		Flags  -> ()
	 */
	struct FVector UGizmoAxisSource::GetOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
	 * 		Flags  -> ()
	 */
	struct FVector UGizmoAxisSource::GetDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetDirection");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHovering                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoClickTarget::UpdateHoverState(bool bHovering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState");
		
		struct
		{
			bool                                               bHovering;
		} params;
		params.bHovering = bHovering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoClickTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoClickTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoClickTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	 * 		Flags  -> ()
	 */
	void UGizmoStateTarget::EndUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	 * 		Flags  -> ()
	 */
	void UGizmoStateTarget::BeginUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoFloatParameterSource::SetParameter(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter");
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	 * 		Flags  -> ()
	 */
	float UGizmoFloatParameterSource::GetParameter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	 * 		Flags  -> ()
	 */
	void UGizmoFloatParameterSource::EndModify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	 * 		Flags  -> ()
	 */
	void UGizmoFloatParameterSource::BeginModify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoFloatParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoFloatParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter");
		
		struct
		{
			struct FVector2D                                   NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	 * 		Flags  -> ()
	 */
	struct FVector2D UGizmoVec2ParameterSource::GetParameter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	 * 		Flags  -> ()
	 */
	void UGizmoVec2ParameterSource::EndModify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	 * 		Flags  -> ()
	 */
	void UGizmoVec2ParameterSource::BeginModify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoVec2ParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoVec2ParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoLineHandleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLineHandleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLineHandleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoRectangleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoRectangleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRectangleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoLambdaHitTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLambdaHitTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoComponentHitTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoComponentHitTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInputBehaviorSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputBehaviorSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInputBehaviorSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputBehaviorSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInputRouter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputRouter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputRouter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractionMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractionMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractiveGizmoManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveGizmoManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UToolContextTransactionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolContextTransactionProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractiveToolManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UToolFrameworkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolFrameworkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolFrameworkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractiveToolsContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolsContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolsContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AIntervalGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIntervalGizmoActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIntervalGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntervalGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIntervalGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntervalGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoBaseFloatParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBaseFloatParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoAxisIntervalParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisIntervalParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKeyAsModifierInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyAsModifierInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSurfacePointToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSurfacePointToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMouseHoverBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMouseHoverBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MouseHoverBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMultiClickSequenceInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiClickSequenceInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMultiSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoLocalFloatParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLocalFloatParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoBaseVec2ParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBaseVec2ParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoLocalVec2ParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLocalVec2ParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoAxisTranslationParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisTranslationParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoPlaneTranslationParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoPlaneTranslationParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoAxisRotationParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisRotationParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoUniformScaleParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoUniformScaleParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoUniformScaleParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoAxisScaleParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisScaleParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisScaleParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoPlaneScaleParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoPlaneScaleParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlanePositionGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlanePositionGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlanePositionGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlanePositionGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USelectionSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectionSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SelectionSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSelectionSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSelectionSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USingleClickInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleClickInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USingleClickToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleClickToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USingleClickTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleClickTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoNilStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoNilStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoNilStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoLambdaStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLambdaStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoObjectModifyStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoObjectModifyStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoTransformChangeStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoTransformChangeStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATransformGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATransformGizmoActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTransformGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTransformGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTransformProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoBaseTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBaseTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoComponentWorldTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoComponentWorldTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoScaledTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoScaledTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoScaledTransformSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGizmoTransformProxyTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoTransformProxyTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		return ptr;
	}

}


