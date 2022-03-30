﻿/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
	 * 		Flags  -> ()
	 */
	bool UMagicLeapPlanesComponent::RequestPlanesAsync()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapPlanesComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapPlanesComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapPlanes.MagicLeapPlanesComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InPriority                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InFlagsToReorder                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  OutReorderedFlags                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapPlanesFunctionLibrary::ReorderPlaneFlags(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutReorderedFlags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags"));
		
		struct
		{
			TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InPriority;
			TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InFlagsToReorder;
			TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  OutReorderedFlags;
		} params;
		params.InPriority = InPriority;
		params.InFlagsToReorder = InFlagsToReorder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReorderedFlags != nullptr)
			*OutReorderedFlags = params.OutReorderedFlags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       Handle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapPlanesFunctionLibrary::RemovePersistentQuery(const struct FGuid& Handle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery"));
		
		struct
		{
			struct FGuid                                       Handle;
			bool                                               ReturnValue;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InQueryFlags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InResultFlags                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  OutFlags                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapPlanesFunctionLibrary::RemoveFlagsNotInQuery(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutFlags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery"));
		
		struct
		{
			TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InQueryFlags;
			TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InResultFlags;
			TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  OutFlags;
		} params;
		params.InQueryFlags = InQueryFlags;
		params.InResultFlags = InResultFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFlags != nullptr)
			*OutFlags = params.OutFlags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapPlanesQuery                       Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapPlanesFunctionLibrary::PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync"));
		
		struct
		{
			struct FMagicLeapPlanesQuery                       Query;
			class FScriptDelegate                              ResultDelegate;
			bool                                               ReturnValue;
		} params;
		params.Query = Query;
		params.ResultDelegate = ResultDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapPlanesQuery                       Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Handle                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapPlanesFunctionLibrary::PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync"));
		
		struct
		{
			struct FMagicLeapPlanesQuery                       Query;
			struct FGuid                                       Handle;
			class FScriptDelegate                              ResultDelegate;
			bool                                               ReturnValue;
		} params;
		params.Query = Query;
		params.Handle = Handle;
		params.ResultDelegate = ResultDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
	 * 		Flags  -> ()
	 */
	bool UMagicLeapPlanesFunctionLibrary::IsTrackerValid()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContentActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMagicLeapPlaneResult                       PlaneResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UMagicLeapPlanesFunctionLibrary::GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale"));
		
		struct
		{
			class AActor*                                      ContentActor;
			struct FMagicLeapPlaneResult                       PlaneResult;
			struct FTransform                                  ReturnValue;
		} params;
		params.ContentActor = ContentActor;
		params.PlaneResult = PlaneResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
	 * 		Flags  -> ()
	 */
	bool UMagicLeapPlanesFunctionLibrary::DestroyTracker()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
	 * 		Flags  -> ()
	 */
	bool UMagicLeapPlanesFunctionLibrary::CreateTracker()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapPlanes_EMagicLeapPlaneQueryType           PersistentQueryType                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UMagicLeapPlanesFunctionLibrary::AddPersistentQuery(MagicLeapPlanes_EMagicLeapPlaneQueryType PersistentQueryType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery"));
		
		struct
		{
			MagicLeapPlanes_EMagicLeapPlaneQueryType           PersistentQueryType;
			struct FGuid                                       ReturnValue;
		} params;
		params.PersistentQueryType = PersistentQueryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapPlanesFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapPlanesFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary"));
		return ptr;
	}

}


