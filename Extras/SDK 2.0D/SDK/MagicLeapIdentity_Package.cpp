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
	 * 		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapIdentity_EMagicLeapIdentityError          ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMagicLeapIdentityAttribute>         AttributeValue                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapIdentity::RequestIdentityAttributeValueDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature");
		
		struct
		{
			MagicLeapIdentity_EMagicLeapIdentityError          ResultCode;
			TArray<struct FMagicLeapIdentityAttribute>         AttributeValue;
		} params;
		params.ResultCode = ResultCode;
		params.AttributeValue = AttributeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    RequestedAttributeList                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValueAsync(TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync");
		
		struct
		{
			TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    RequestedAttributeList;
			class FScriptDelegate                              ResultDelegate;
			MagicLeapIdentity_EMagicLeapIdentityError          ReturnValue;
		} params;
		params.RequestedAttributeList = RequestedAttributeList;
		params.ResultDelegate = ResultDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    RequestedAttributeList                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMagicLeapIdentityAttribute>         RequestedAttributeValues                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValue(TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue");
		
		struct
		{
			TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    RequestedAttributeList;
			TArray<struct FMagicLeapIdentityAttribute>         RequestedAttributeValues;
			MagicLeapIdentity_EMagicLeapIdentityError          ReturnValue;
		} params;
		params.RequestedAttributeList = RequestedAttributeList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequestedAttributeValues != nullptr)
			*RequestedAttributeValues = params.RequestedAttributeValues;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapIdentity_EMagicLeapIdentityError          ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AttributesUpdatedSuccessfully                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapIdentity::ModifyIdentityAttributeValueDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AttributesUpdatedSuccessfully)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature");
		
		struct
		{
			MagicLeapIdentity_EMagicLeapIdentityError          ResultCode;
			TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AttributesUpdatedSuccessfully;
		} params;
		params.ResultCode = ResultCode;
		params.AttributesUpdatedSuccessfully = AttributesUpdatedSuccessfully;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapIdentity::GetAllAvailableAttributesAsync(const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync");
		
		struct
		{
			class FScriptDelegate                              ResultDelegate;
		} params;
		params.ResultDelegate = ResultDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AvailableAttributes                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity::GetAllAvailableAttributes(TArray<MagicLeapIdentity_EMagicLeapIdentityKey>* AvailableAttributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes");
		
		struct
		{
			TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AvailableAttributes;
			MagicLeapIdentity_EMagicLeapIdentityError          ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableAttributes != nullptr)
			*AvailableAttributes = params.AvailableAttributes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		MagicLeapIdentity_EMagicLeapIdentityError          ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AvailableAttributes                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapIdentity::AvailableIdentityAttributesDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature");
		
		struct
		{
			MagicLeapIdentity_EMagicLeapIdentityError          ResultCode;
			TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AvailableAttributes;
		} params;
		params.ResultCode = ResultCode;
		params.AvailableAttributes = AvailableAttributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapIdentity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapIdentity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapIdentity.MagicLeapIdentity");
		return ptr;
	}

}


