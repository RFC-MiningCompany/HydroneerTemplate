﻿/**
 * Name: Hydroneer
 * Version: 2.0L
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
	 * 		Name   -> PredefindFunction UAndroidPermissionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAndroidPermissionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AndroidPermission.AndroidPermissionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      permission                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAndroidPermissionFunctionLibrary::CheckPermission(const class FString& permission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission");
		
		UAndroidPermissionFunctionLibrary_CheckPermission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Permissions                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::AcquirePermissions(TArray<class FString> Permissions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions");
		
		UAndroidPermissionFunctionLibrary_AcquirePermissions_Params params {};
		params.Permissions = Permissions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAndroidPermissionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAndroidPermissionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AndroidPermission.AndroidPermissionFunctionLibrary");
		return ptr;
	}

}


