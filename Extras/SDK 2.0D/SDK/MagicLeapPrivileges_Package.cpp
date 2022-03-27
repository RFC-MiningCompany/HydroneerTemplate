/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapPrivileges_EMagicLeapPrivilege            Privilege                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilegeAsync(MagicLeapPrivileges_EMagicLeapPrivilege Privilege, const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync");
		
		struct
		{
			MagicLeapPrivileges_EMagicLeapPrivilege            Privilege;
			class FScriptDelegate                              ResultDelegate;
			bool                                               ReturnValue;
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapPrivileges_EMagicLeapPrivilege            Privilege                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege");
		
		struct
		{
			MagicLeapPrivileges_EMagicLeapPrivilege            Privilege;
			bool                                               ReturnValue;
		} params;
		params.Privilege = Privilege;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapPrivileges_EMagicLeapPrivilege            Privilege                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapPrivilegesFunctionLibrary::CheckPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege");
		
		struct
		{
			MagicLeapPrivileges_EMagicLeapPrivilege            Privilege;
			bool                                               ReturnValue;
		} params;
		params.Privilege = Privilege;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
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


