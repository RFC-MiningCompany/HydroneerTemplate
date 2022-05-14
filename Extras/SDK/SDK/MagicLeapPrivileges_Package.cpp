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
	 * 		Name   -> Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapPrivilege                                Privilege                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilegeAsync(EMagicLeapPrivilege Privilege, const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync");
		
		struct
		{
			EMagicLeapPrivilege                                Privilege;
			class FScriptDelegate                              ResultDelegate;
		} params;
		params.Privilege = Privilege;
		params.ResultDelegate = ResultDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapPrivilege                                Privilege                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilege(EMagicLeapPrivilege Privilege)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege");
		
		struct
		{
			EMagicLeapPrivilege                                Privilege;
		} params;
		params.Privilege = Privilege;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapPrivilege                                Privilege                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapPrivilegesFunctionLibrary::CheckPrivilege(EMagicLeapPrivilege Privilege)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege");
		
		struct
		{
			EMagicLeapPrivilege                                Privilege;
		} params;
		params.Privilege = Privilege;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapPrivilegesFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapPrivilegesFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary");
		return ptr;
	}

}


