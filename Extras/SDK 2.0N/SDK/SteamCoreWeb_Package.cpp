/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> PredefindFunction USteamCoreWeb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWeb::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWeb"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebSubsystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebSubsystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreWebAsyncAction::HandleCallback(const class FString& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback"));
		
		USteamCoreWebAsyncAction_HandleCallback_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncAction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncAction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.ParseJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamCoreJson>                      Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool USteamWebUtilities::ParseJson(const class FString& JsonString, TArray<struct FSteamCoreJson>* Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.ParseJson"));
		
		USteamWebUtilities_ParseJson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.GetProjectKey
	 * 		Flags  -> ()
	 */
	class FString USteamWebUtilities::GetProjectKey()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.GetProjectKey"));
		
		USteamWebUtilities_GetProjectKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.GetProjectAppID
	 * 		Flags  -> ()
	 */
	int32_t USteamWebUtilities::GetProjectAppID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.GetProjectAppID"));
		
		USteamWebUtilities_GetProjectAppID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.GetDevSteamID
	 * 		Flags  -> ()
	 */
	class FString USteamWebUtilities::GetDevSteamID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.GetDevSteamID"));
		
		USteamWebUtilities_GetDevSteamID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.FindJsonStrings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Values                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ESteamJsonResult                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamWebUtilities::FindJsonStrings(const class FString& JsonString, const class FString& Key, TArray<class FString>* Values, ESteamJsonResult* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.FindJsonStrings"));
		
		USteamWebUtilities_FindJsonStrings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Values != nullptr)
			*Values = params.Values;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.FindJsonString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamJsonResult                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamWebUtilities::FindJsonString(const class FString& JsonString, const class FString& Key, class FString* Value, ESteamJsonResult* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.FindJsonString"));
		
		USteamWebUtilities_FindJsonString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.FindJsonNumbers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Values                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ESteamJsonResult                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamWebUtilities::FindJsonNumbers(const class FString& JsonString, const class FString& Key, TArray<int32_t>* Values, ESteamJsonResult* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.FindJsonNumbers"));
		
		USteamWebUtilities_FindJsonNumbers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Values != nullptr)
			*Values = params.Values;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.FindJsonNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamJsonResult                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamWebUtilities::FindJsonNumber(const class FString& JsonString, const class FString& Key, int32_t* Value, ESteamJsonResult* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.FindJsonNumber"));
		
		USteamWebUtilities_FindJsonNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.FindJsonBools
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       bValues                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ESteamJsonResult                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamWebUtilities::FindJsonBools(const class FString& JsonString, const class FString& Key, TArray<bool>* bValues, ESteamJsonResult* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.FindJsonBools"));
		
		USteamWebUtilities_FindJsonBools_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValues != nullptr)
			*bValues = params.bValues;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.FindJsonBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamJsonResult                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamWebUtilities::FindJsonBool(const class FString& JsonString, const class FString& Key, bool* bValue, ESteamJsonResult* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamWebUtilities.FindJsonBool"));
		
		USteamWebUtilities_FindJsonBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValue != nullptr)
			*bValue = params.bValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamWebUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamWebUtilities::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamWebUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.UpToDateCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Version                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::UpToDateCheck(const class FScriptDelegate& Callback, int32_t AppID, int32_t Version)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.UpToDateCheck"));
		
		UWebApps_UpToDateCheck_Params params {};
		params.AppID = AppID;
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.SetAppBuildLive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BuildID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BetaKey                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::SetAppBuildLive(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t BuildID, const class FString& BetaKey, const class FString& Description)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.SetAppBuildLive"));
		
		UWebApps_SetAppBuildLive_Params params {};
		params.AppID = AppID;
		params.BuildID = BuildID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.GetServersAtAddress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Addr                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::GetServersAtAddress(const class FScriptDelegate& Callback, const class FString& Addr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.GetServersAtAddress"));
		
		UWebApps_GetServersAtAddress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.GetServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filter                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::GetServerList(const class FScriptDelegate& Callback, const class FString& Key, const class FString& Filter, int32_t Limit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.GetServerList"));
		
		UWebApps_GetServerList_Params params {};
		params.Limit = Limit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.GetPlayersBanned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::GetPlayersBanned(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.GetPlayersBanned"));
		
		UWebApps_GetPlayersBanned_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.GetCheatingReports
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeBegin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeReports                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeBans                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReportidMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::GetCheatingReports(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.GetCheatingReports"));
		
		UWebApps_GetCheatingReports_Params params {};
		params.AppID = AppID;
		params.TimeBegin = TimeBegin;
		params.TimeEnd = TimeEnd;
		params.bIncludeReports = bIncludeReports;
		params.bIncludeBans = bIncludeBans;
		params.ReportidMin = ReportidMin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.GetAppList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::GetAppList(const class FScriptDelegate& Callback, const class FString& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.GetAppList"));
		
		UWebApps_GetAppList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.GetAppDepotVersions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::GetAppDepotVersions(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.GetAppDepotVersions"));
		
		UWebApps_GetAppDepotVersions_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.GetAppBuilds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::GetAppBuilds(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.GetAppBuilds"));
		
		UWebApps_GetAppBuilds_Params params {};
		params.AppID = AppID;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebApps.GetAppBetas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebApps::GetAppBetas(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebApps.GetAppBetas"));
		
		UWebApps_GetAppBetas_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebApps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebApps::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebApps"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionGetAppBetas* USteamCoreAppsAsyncActionGetAppBetas::GetAppBetasAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync"));
		
		USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetAppBetas.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetAppBetas::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionGetAppBuilds* USteamCoreAppsAsyncActionGetAppBuilds::GetAppBuildsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync"));
		
		USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetAppBuilds.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetAppBuilds::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionGetAppDepotVersions* USteamCoreAppsAsyncActionGetAppDepotVersions::GetAppDepotVersionsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync"));
		
		USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetAppDepotVersions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetAppDepotVersions::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionGetAppList* USteamCoreAppsAsyncActionGetAppList::GetAppListAsync(class UObject* WorldContextObject, const class FString& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync"));
		
		USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetAppList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetAppList::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeBegin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeReports                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeBans                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReportidMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionGetCheatingReports* USteamCoreAppsAsyncActionGetCheatingReports::GetCheatingReportsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync"));
		
		USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.TimeBegin = TimeBegin;
		params.TimeEnd = TimeEnd;
		params.bIncludeReports = bIncludeReports;
		params.bIncludeBans = bIncludeBans;
		params.ReportidMin = ReportidMin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetCheatingReports.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetCheatingReports::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionGetPlayersBanned* USteamCoreAppsAsyncActionGetPlayersBanned::GetPlayersBannedAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync"));
		
		USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetPlayersBanned.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetPlayersBanned::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filter                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionGetServerList* USteamCoreAppsAsyncActionGetServerList::GetServerListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Filter, int32_t Limit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync"));
		
		USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Limit = Limit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetServerList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetServerList::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Addr                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionGetServersAtAddress* USteamCoreAppsAsyncActionGetServersAtAddress::GetServersAtAddressAsync(class UObject* WorldContextObject, const class FString& Addr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync"));
		
		USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetServersAtAddress.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BuildID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BetaKey                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionSetAppBuildLive* USteamCoreAppsAsyncActionSetAppBuildLive::SetAppBuildLiveAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t BuildID, const class FString& BetaKey, const class FString& Description)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync"));
		
		USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.BuildID = BuildID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionSetAppBuildLive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionSetAppBuildLive::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Version                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionUpToDateCheck* USteamCoreAppsAsyncActionUpToDateCheck::UpToDateCheckAsync(class UObject* WorldContextObject, int32_t AppID, int32_t Version)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync"));
		
		USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionUpToDateCheck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionUpToDateCheck::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebBroadcastService.PostGameDataFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BroadcastId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FrameData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBroadcastService::PostGameDataFrame(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& BroadcastId, const class FString& FrameData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebBroadcastService.PostGameDataFrame"));
		
		UWebBroadcastService_PostGameDataFrame_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebBroadcastService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebBroadcastService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebBroadcastService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BroadcastId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FrameData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionPostGameDataFrame* USteamCoreWebAsyncActionPostGameDataFrame::PostGameDataFrameAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& BroadcastId, const class FString& FrameData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync"));
		
		USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionPostGameDataFrame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionPostGameDataFrame::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebCheatReporting::StartSecureMultiplayerSession(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession"));
		
		UWebCheatReporting_StartSecureMultiplayerSession_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebCheatReporting::RequestVacStatusForUser(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& SessionID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser"));
		
		UWebCheatReporting_RequestVacStatusForUser_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CheatDescription                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDelayBan                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebCheatReporting::RequestPlayerGameBan(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ReportID, const class FString& CheatDescription, int32_t Duration, bool bDelayBan)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan"));
		
		UWebCheatReporting_RequestPlayerGameBan_Params params {};
		params.AppID = AppID;
		params.Duration = Duration;
		params.bDelayBan = bDelayBan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebCheatReporting.ReportPlayerCheating
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamIdReporter                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppData                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHeuristic                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDetection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlayerReport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoReportID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SuspicionStartTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Severity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebCheatReporting::ReportPlayerCheating(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& SteamIdReporter, const class FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebCheatReporting.ReportPlayerCheating"));
		
		UWebCheatReporting_ReportPlayerCheating_Params params {};
		params.AppID = AppID;
		params.bHeuristic = bHeuristic;
		params.bDetection = bDetection;
		params.bPlayerReport = bPlayerReport;
		params.bNoReportID = bNoReportID;
		params.GameMode = GameMode;
		params.SuspicionStartTime = SuspicionStartTime;
		params.Severity = Severity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebCheatReporting.ReportCheatData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PathAndFileName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      WebCheatURL                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TimeNow                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TimeStarted                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TimeStopped                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CheatName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameProcessId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CheatProcessId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CheatParam1                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CheatParam2                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebCheatReporting::ReportCheatData(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32_t GameProcessId, int32_t CheatProcessId, const class FString& CheatParam1, const class FString& CheatParam2)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebCheatReporting.ReportCheatData"));
		
		UWebCheatReporting_ReportCheatData_Params params {};
		params.AppID = AppID;
		params.GameProcessId = GameProcessId;
		params.CheatProcessId = CheatProcessId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebCheatReporting::RemovePlayerGameBan(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan"));
		
		UWebCheatReporting_RemovePlayerGameBan_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebCheatReporting.GetCheatingReports
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeBegin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportidMin                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeReports                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeBans                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebCheatReporting::GetCheatingReports(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, const class FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebCheatReporting.GetCheatingReports"));
		
		UWebCheatReporting_GetCheatingReports_Params params {};
		params.AppID = AppID;
		params.TimeEnd = TimeEnd;
		params.TimeBegin = TimeBegin;
		params.bIncludeReports = bIncludeReports;
		params.bIncludeBans = bIncludeBans;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebCheatReporting::EndSecureMultiplayerSession(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& SessionID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession"));
		
		UWebCheatReporting_EndSecureMultiplayerSession_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebCheatReporting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebCheatReporting::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebCheatReporting"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamIdReporter                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppData                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHeuristic                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDetection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlayerReport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoReportID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SuspicionStartTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Severity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionReportPlayerCheating* USteamCoreWebAsyncActionReportPlayerCheating::ReportPlayerCheatingAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& SteamIdReporter, const class FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync"));
		
		USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.bHeuristic = bHeuristic;
		params.bDetection = bDetection;
		params.bPlayerReport = bPlayerReport;
		params.bNoReportID = bNoReportID;
		params.GameMode = GameMode;
		params.SuspicionStartTime = SuspicionStartTime;
		params.Severity = Severity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionReportPlayerCheating.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionReportPlayerCheating::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CheatDescription                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDelayBan                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionRequestPlayerGameBan* USteamCoreWebAsyncActionRequestPlayerGameBan::RequestPlayerGameBanAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ReportID, const class FString& CheatDescription, int32_t Duration, bool bDelayBan)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync"));
		
		USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Duration = Duration;
		params.bDelayBan = bDelayBan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionRequestPlayerGameBan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionRemovePlayerGameBan* USteamCoreWebAsyncActionRemovePlayerGameBan::RemovePlayerGameBanAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync"));
		
		USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionRemovePlayerGameBan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeBegin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReportidMin                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeReports                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeBans                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetCheatingReports* USteamCoreWebAsyncActionGetCheatingReports::GetCheatingReportsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, const class FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync"));
		
		USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.TimeEnd = TimeEnd;
		params.TimeBegin = TimeBegin;
		params.bIncludeReports = bIncludeReports;
		params.bIncludeBans = bIncludeBans;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetCheatingReports.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetCheatingReports::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PathAndFileName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      WebCheatURL                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TimeNow                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TimeStarted                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TimeStopped                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CheatName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameProcessId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CheatProcessId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CheatParam1                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CheatParam2                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionReportCheatData* USteamCoreWebAsyncActionReportCheatData::ReportCheatDataAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32_t GameProcessId, int32_t CheatProcessId, const class FString& CheatParam1, const class FString& CheatParam2)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync"));
		
		USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.GameProcessId = GameProcessId;
		params.CheatProcessId = CheatProcessId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionReportCheatData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionReportCheatData::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionRequestVacStatusForUser* USteamCoreWebAsyncActionRequestVacStatusForUser::RequestVacStatusForUserAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& SessionID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync"));
		
		USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionRequestVacStatusForUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionStartSecureMultiplayerSession* USteamCoreWebAsyncActionStartSecureMultiplayerSession::StartSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync"));
		
		USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionStartSecureMultiplayerSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionEndSecureMultiplayerSession* USteamCoreWebAsyncActionEndSecureMultiplayerSession::EndSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& SessionID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync"));
		
		USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionEndSecureMultiplayerSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconMarketService.GetPopular
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Rows                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FilterAppId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ECurrency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconMarketService::GetPopular(const class FScriptDelegate& Callback, const class FString& Key, const class FString& Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconMarketService.GetPopular"));
		
		UWebEconMarketService_GetPopular_Params params {};
		params.Rows = Rows;
		params.Start = Start;
		params.FilterAppId = FilterAppId;
		params.ECurrency = ECurrency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconMarketService.GetMarketEligibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconMarketService::GetMarketEligibility(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconMarketService.GetMarketEligibility"));
		
		UWebEconMarketService_GetMarketEligibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconMarketService.GetAssetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ListingId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconMarketService::GetAssetID(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& ListingId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconMarketService.GetAssetID"));
		
		UWebEconMarketService_GetAssetID_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSynchronous                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconMarketService::CancelAppListingsForUser(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, bool bSynchronous)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser"));
		
		UWebEconMarketService_CancelAppListingsForUser_Params params {};
		params.AppID = AppID;
		params.bSynchronous = bSynchronous;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebEconMarketService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebEconMarketService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebEconMarketService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetMarketEligibility* USteamCoreWebAsyncActionGetMarketEligibility::GetMarketEligibilityAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync"));
		
		USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetMarketEligibility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetMarketEligibility::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSynchronous                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionCancelAppListingsForUser* USteamCoreWebAsyncActionCancelAppListingsForUser::CancelAppListingsForUserAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, bool bSynchronous)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync"));
		
		USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.bSynchronous = bSynchronous;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionCancelAppListingsForUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionCancelAppListingsForUser::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ListingId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetAssetID* USteamCoreWebAsyncActionGetAssetID::GetAssetIDAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& ListingId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync"));
		
		USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetAssetID.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetAssetID::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Rows                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FilterAppId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ECurrency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetPopular* USteamCoreWebAsyncActionGetPopular::GetPopularAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync"));
		
		USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Rows = Rows;
		params.Start = Start;
		params.FilterAppId = FilterAppId;
		params.ECurrency = ECurrency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetPopular.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetPopular::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPopular"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconService.GetTradeOffersSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeLastVisit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconService::GetTradeOffersSummary(const class FScriptDelegate& Callback, const class FString& Key, int32_t TimeLastVisit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconService.GetTradeOffersSummary"));
		
		UWebEconService_GetTradeOffersSummary_Params params {};
		params.TimeLastVisit = TimeLastVisit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconService.GetTradeOffers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGetSentOffers                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGetReceivedOffers                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGetDescriptions                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bActiveOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHistoricalOnly                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeHistoricalCutoff                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconService::GetTradeOffers(const class FScriptDelegate& Callback, const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconService.GetTradeOffers"));
		
		UWebEconService_GetTradeOffers_Params params {};
		params.bGetSentOffers = bGetSentOffers;
		params.bGetReceivedOffers = bGetReceivedOffers;
		params.bGetDescriptions = bGetDescriptions;
		params.bActiveOnly = bActiveOnly;
		params.bHistoricalOnly = bHistoricalOnly;
		params.TimeHistoricalCutoff = TimeHistoricalCutoff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconService.GetTradeOffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TradeOfferId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconService::GetTradeOffer(const class FScriptDelegate& Callback, const class FString& Key, const class FString& TradeOfferId, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconService.GetTradeOffer"));
		
		UWebEconService_GetTradeOffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconService.GetTradeHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxTrades                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartAfterTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StartAfterTradeId                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNavigatingBack                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGetDescriptions                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeFailed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeTotal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconService::GetTradeHistory(const class FScriptDelegate& Callback, const class FString& Key, int32_t MaxTrades, int32_t StartAfterTime, const class FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconService.GetTradeHistory"));
		
		UWebEconService_GetTradeHistory_Params params {};
		params.MaxTrades = MaxTrades;
		params.StartAfterTime = StartAfterTime;
		params.bNavigatingBack = bNavigatingBack;
		params.bGetDescriptions = bGetDescriptions;
		params.bIncludeFailed = bIncludeFailed;
		params.bIncludeTotal = bIncludeTotal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconService.FlushInventoryCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconService::FlushInventoryCache(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ContextId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconService.FlushInventoryCache"));
		
		UWebEconService_FlushInventoryCache_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconService.FlushContextCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconService::FlushContextCache(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconService.FlushContextCache"));
		
		UWebEconService_FlushContextCache_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconService.FlushAssetAppearanceCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconService::FlushAssetAppearanceCache(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconService.FlushAssetAppearanceCache"));
		
		UWebEconService_FlushAssetAppearanceCache_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconService.DeclineTradeOffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TradeOfferId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconService::DeclineTradeOffer(const class FScriptDelegate& Callback, const class FString& Key, const class FString& TradeOfferId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconService.DeclineTradeOffer"));
		
		UWebEconService_DeclineTradeOffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebEconService.CancelTradeOffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TradeOfferId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebEconService::CancelTradeOffer(const class FScriptDelegate& Callback, const class FString& Key, const class FString& TradeOfferId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebEconService.CancelTradeOffer"));
		
		UWebEconService_CancelTradeOffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebEconService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebEconService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebEconService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxTrades                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartAfterTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StartAfterTradeId                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNavigatingBack                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGetDescriptions                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeFailed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeTotal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetTradeHistory* USteamCoreWebAsyncActionGetTradeHistory::GetTradeHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t MaxTrades, int32_t StartAfterTime, const class FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync"));
		
		USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MaxTrades = MaxTrades;
		params.StartAfterTime = StartAfterTime;
		params.bNavigatingBack = bNavigatingBack;
		params.bGetDescriptions = bGetDescriptions;
		params.bIncludeFailed = bIncludeFailed;
		params.bIncludeTotal = bIncludeTotal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetTradeHistory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetTradeHistory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionFlushInventoryCache* USteamCoreWebAsyncActionFlushInventoryCache::FlushInventoryCacheAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ContextId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync"));
		
		USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionFlushInventoryCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionFlushInventoryCache::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionFlushAssetAppearanceCache* USteamCoreWebAsyncActionFlushAssetAppearanceCache::FlushAssetAppearanceCacheAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync"));
		
		USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionFlushAssetAppearanceCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionFlushContextCache* USteamCoreWebAsyncActionFlushContextCache::FlushContextCacheAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync"));
		
		USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionFlushContextCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionFlushContextCache::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGetSentOffers                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGetReceivedOffers                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGetDescriptions                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bActiveOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHistoricalOnly                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeHistoricalCutoff                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetTradeOffers* USteamCoreWebAsyncActionGetTradeOffers::GetTradeOffersAsync(class UObject* WorldContextObject, const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync"));
		
		USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bGetSentOffers = bGetSentOffers;
		params.bGetReceivedOffers = bGetReceivedOffers;
		params.bGetDescriptions = bGetDescriptions;
		params.bActiveOnly = bActiveOnly;
		params.bHistoricalOnly = bHistoricalOnly;
		params.TimeHistoricalCutoff = TimeHistoricalCutoff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetTradeOffers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetTradeOffers::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TradeOfferId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetTradeOffer* USteamCoreWebAsyncActionGetTradeOffer::GetTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync"));
		
		USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetTradeOffer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetTradeOffer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeLastVisit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetTradeOffersSummary* USteamCoreWebAsyncActionGetTradeOffersSummary::GetTradeOffersSummaryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t TimeLastVisit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync"));
		
		USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TimeLastVisit = TimeLastVisit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetTradeOffersSummary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TradeOfferId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionDeclineTradeOffer* USteamCoreWebAsyncActionDeclineTradeOffer::DeclineTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync"));
		
		USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionDeclineTradeOffer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TradeOfferId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionCancelTradeOffer* USteamCoreWebAsyncActionCancelTradeOffer::CancelTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync"));
		
		USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionCancelTradeOffer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionCancelTradeOffer::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameInventory.UpdateItemDefs
	 * 		Flags  -> ()
	 */
	void UWebGameInventory::UpdateItemDefs()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameInventory.UpdateItemDefs"));
		
		UWebGameInventory_UpdateItemDefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameInventory.SupportGetAssetHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameInventory::SupportGetAssetHistory(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& AssetId, const class FString& ContextId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameInventory.SupportGetAssetHistory"));
		
		UWebGameInventory_SupportGetAssetHistory_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameInventory.HistoryExecuteCommands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ActorId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameInventory::HistoryExecuteCommands(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& ContextId, int32_t ActorId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameInventory.HistoryExecuteCommands"));
		
		UWebGameInventory_HistoryExecuteCommands_Params params {};
		params.AppID = AppID;
		params.ActorId = ActorId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameInventory.GetUserHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameInventory::GetUserHistory(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& ContextId, int32_t StartTime, int32_t EndTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameInventory.GetUserHistory"));
		
		UWebGameInventory_GetUserHistory_Params params {};
		params.AppID = AppID;
		params.StartTime = StartTime;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Arguments                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameInventory::GetHistoryCommandDetails(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& Command, const class FString& ContextId, const class FString& Arguments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails"));
		
		UWebGameInventory_GetHistoryCommandDetails_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebGameInventory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebGameInventory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebGameInventory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Arguments                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetHistoryCommandDetails* USteamCoreWebAsyncActionGetHistoryCommandDetails::GetHistoryCommandDetailsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& Command, const class FString& ContextId, const class FString& Arguments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync"));
		
		USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetHistoryCommandDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetUserHistory* USteamCoreWebAsyncActionGetUserHistory::GetUserHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& ContextId, int32_t StartTime, int32_t EndTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync"));
		
		USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.StartTime = StartTime;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetUserHistory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetUserHistory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ActorId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionHistoryExecuteCommand* USteamCoreWebAsyncActionHistoryExecuteCommand::HistoryExecuteCommandAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& ContextId, int32_t ActorId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync"));
		
		USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.ActorId = ActorId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionHistoryExecuteCommand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionHistoryExecuteCommand::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionSupportGetAssetHistory* USteamCoreWebAsyncActionSupportGetAssetHistory::SupportGetAssetHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& AssetId, const class FString& ContextId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync"));
		
		USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionSupportGetAssetHistory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameNotificationsService.UpdateSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Users                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameNotificationsService::UpdateSession(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SessionID, int32_t AppID, const class FString& Title, const class FString& Users, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameNotificationsService.UpdateSession"));
		
		UWebGameNotificationsService_UpdateSession_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameNotificationsService.RequestNotifications
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameNotificationsService::RequestNotifications(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameNotificationsService.RequestNotifications"));
		
		UWebGameNotificationsService_RequestNotifications_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Sessions                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameNotificationsService::GetSessionDetailsForApp(const class FScriptDelegate& Callback, const class FString& Key, const class FString& Sessions, int32_t AppID, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp"));
		
		UWebGameNotificationsService_GetSessionDetailsForApp_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeAllUserMessages                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeAuthUserMessage                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameNotificationsService::EnumerateSessionsForApp(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp"));
		
		UWebGameNotificationsService_EnumerateSessionsForApp_Params params {};
		params.AppID = AppID;
		params.bIncludeAllUserMessages = bIncludeAllUserMessages;
		params.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameNotificationsService::DeleteSessionBatch(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SessionID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch"));
		
		UWebGameNotificationsService_DeleteSessionBatch_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameNotificationsService.DeleteSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameNotificationsService::DeleteSession(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SessionID, int32_t AppID, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameNotificationsService.DeleteSession"));
		
		UWebGameNotificationsService_DeleteSession_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameNotificationsService.CreateSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Context                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Users                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameNotificationsService::CreateSession(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Context, const class FString& Title, const class FString& Users, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameNotificationsService.CreateSession"));
		
		UWebGameNotificationsService_CreateSession_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebGameNotificationsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebGameNotificationsService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebGameNotificationsService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Context                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Users                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionCreateSession* USteamCoreWebAsyncActionCreateSession::CreateSessionAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Context, const class FString& Title, const class FString& Users, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync"));
		
		USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionCreateSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionCreateSession::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionCreateSession"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Users                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionUpdateSession* USteamCoreWebAsyncActionUpdateSession::UpdateSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionID, int32_t AppID, const class FString& Title, const class FString& Users, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync"));
		
		USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionUpdateSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionUpdateSession::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeAllUserMessages                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeAuthUserMessage                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionEnumerateSessionsForApp* USteamCoreWebAsyncActionEnumerateSessionsForApp::EnumerateSessionsForAppAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync"));
		
		USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.bIncludeAllUserMessages = bIncludeAllUserMessages;
		params.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionEnumerateSessionsForApp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Sessions                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetSessionDetailsForApp* USteamCoreWebAsyncActionGetSessionDetailsForApp::GetSessionDetailsForAppAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Sessions, int32_t AppID, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync"));
		
		USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetSessionDetailsForApp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetSessionDetailsForApp::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionRequestNotifications* USteamCoreWebAsyncActionRequestNotifications::RequestNotificationsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync"));
		
		USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionRequestNotifications.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionRequestNotifications::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionDeleteSession* USteamCoreWebAsyncActionDeleteSession::DeleteSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionID, int32_t AppID, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync"));
		
		USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionDeleteSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionDeleteSession::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionDeleteSessionBatch* USteamCoreWebAsyncActionDeleteSessionBatch::DeleteSessionBatchAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync"));
		
		USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionDeleteSessionBatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionDeleteSessionBatch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.SetMemo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Memo                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::SetMemo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& Memo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.SetMemo"));
		
		UWebGameServersService_SetMemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.SetBanStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBanned                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            banSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::SetBanStatus(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, bool bBanned, int32_t banSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.SetBanStatus"));
		
		UWebGameServersService_SetBanStatus_Params params {};
		params.bBanned = bBanned;
		params.banSeconds = banSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.ResetLoginToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::ResetLoginToken(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.ResetLoginToken"));
		
		UWebGameServersService_ResetLoginToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.QueryLoginToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LoginToken                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::QueryLoginToken(const class FScriptDelegate& Callback, const class FString& Key, const class FString& LoginToken)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.QueryLoginToken"));
		
		UWebGameServersService_QueryLoginToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ServerIP                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::GetServerSteamIDsByIP(const class FScriptDelegate& Callback, const class FString& Key, const class FString& ServerIP)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP"));
		
		UWebGameServersService_GetServerSteamIDsByIP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ServerSteamId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::GetServerIPsBySteamID(const class FScriptDelegate& Callback, const class FString& Key, const class FString& ServerSteamId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID"));
		
		UWebGameServersService_GetServerIPsBySteamID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.GetAccountPublicInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::GetAccountPublicInfo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.GetAccountPublicInfo"));
		
		UWebGameServersService_GetAccountPublicInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.GetAccountList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::GetAccountList(const class FScriptDelegate& Callback, const class FString& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.GetAccountList"));
		
		UWebGameServersService_GetAccountList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.DeleteAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::DeleteAccount(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.DeleteAccount"));
		
		UWebGameServersService_DeleteAccount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebGameServersService.CreateAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Memo                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebGameServersService::CreateAccount(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Memo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebGameServersService.CreateAccount"));
		
		UWebGameServersService_CreateAccount_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebGameServersService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebGameServersService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebGameServersService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.ModifyItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputJson                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Updates                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::ModifyItems(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& InputJson, const class FString& SteamID, int32_t Timestamp, const class FString& Updates)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.ModifyItems"));
		
		UWebInventoryService_ModifyItems_Params params {};
		params.AppID = AppID;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.GetQuantity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemdefIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::GetQuantity(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> ItemdefIDs, bool bForce)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.GetQuantity"));
		
		UWebInventoryService_GetQuantity_Params params {};
		params.AppID = AppID;
		params.ItemdefIDs = ItemdefIDs;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.GetPriceSheet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Currency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::GetPriceSheet(const class FScriptDelegate& Callback, const class FString& Key, int32_t Currency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.GetPriceSheet"));
		
		UWebInventoryService_GetPriceSheet_Params params {};
		params.Currency = Currency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.GetItemDefs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ModifiedSince                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemdefIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    WorkshopIDs                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CacheMaxAgeSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::GetItemDefs(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.GetItemDefs"));
		
		UWebInventoryService_GetItemDefs_Params params {};
		params.AppID = AppID;
		params.ItemdefIDs = ItemdefIDs;
		params.WorkshopIDs = WorkshopIDs;
		params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.GetInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::GetInventory(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.GetInventory"));
		
		UWebInventoryService_GetInventory_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.ExchangeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    MaterialsItemID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    MaterialsQuantity                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutputItemdefId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::ExchangeItem(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, const class FString& OutputItemdefId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.ExchangeItem"));
		
		UWebInventoryService_ExchangeItem_Params params {};
		params.AppID = AppID;
		params.MaterialsItemID = MaterialsItemID;
		params.MaterialsQuantity = MaterialsQuantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.ConsumeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Quantity                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequestID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::ConsumeItem(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& ItemId, const class FString& Quantity, const class FString& SteamID, const class FString& RequestID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.ConsumeItem"));
		
		UWebInventoryService_ConsumeItem_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.Consolidate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemdefIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::Consolidate(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> ItemdefIDs, bool bForce)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.Consolidate"));
		
		UWebInventoryService_Consolidate_Params params {};
		params.AppID = AppID;
		params.ItemdefIDs = ItemdefIDs;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.AddPromoItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemdefId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemPropsJson                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequestID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::AddPromoItem(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.AddPromoItem"));
		
		UWebInventoryService_AddPromoItem_Params params {};
		params.AppID = AppID;
		params.ItemdefId = ItemdefId;
		params.bNotify = bNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebInventoryService.AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemdefId                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemPropsJson                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequestID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTradeRestriction                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebInventoryService::AddItem(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, TArray<int32_t> ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestID, bool bTradeRestriction)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebInventoryService.AddItem"));
		
		UWebInventoryService_AddItem_Params params {};
		params.AppID = AppID;
		params.ItemdefId = ItemdefId;
		params.bNotify = bNotify;
		params.bTradeRestriction = bTradeRestriction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebInventoryService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebInventoryService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebInventoryService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemdefId                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemPropsJson                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequestID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTradeRestriction                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionAddItem* USteamCoreWebAsyncActionAddItem::AddItemAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, TArray<int32_t> ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestID, bool bTradeRestriction)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync"));
		
		USteamCoreWebAsyncActionAddItem_AddItemAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.ItemdefId = ItemdefId;
		params.bNotify = bNotify;
		params.bTradeRestriction = bTradeRestriction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionAddItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionAddItem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionAddItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemdefId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemPropsJson                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequestID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionAddPromoItem* USteamCoreWebAsyncActionAddPromoItem::AddPromoItemAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync"));
		
		USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.ItemdefId = ItemdefId;
		params.bNotify = bNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionAddPromoItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionAddPromoItem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Quantity                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequestID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionConsumeItem* USteamCoreWebAsyncActionConsumeItem::ConsumeItemAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& ItemId, const class FString& Quantity, const class FString& SteamID, const class FString& RequestID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync"));
		
		USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionConsumeItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionConsumeItem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    MaterialsItemID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    MaterialsQuantity                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutputItemdefId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionExchangeItem* USteamCoreWebAsyncActionExchangeItem::ExchangeItemAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, const class FString& OutputItemdefId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync"));
		
		USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.MaterialsItemID = MaterialsItemID;
		params.MaterialsQuantity = MaterialsQuantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionExchangeItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionExchangeItem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetInventory* USteamCoreWebAsyncActionGetInventory::GetInventoryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync"));
		
		USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetInventory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetInventory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetInventory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ModifiedSince                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemdefIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    WorkshopIDs                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CacheMaxAgeSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetItemDefs* USteamCoreWebAsyncActionGetItemDefs::GetItemDefsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync"));
		
		USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.ItemdefIDs = ItemdefIDs;
		params.WorkshopIDs = WorkshopIDs;
		params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetItemDefs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetItemDefs::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Currency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetPriceSheet* USteamCoreWebAsyncActionGetPriceSheet::GetPriceSheetAsync(class UObject* WorldContextObject, const class FString& Key, int32_t Currency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync"));
		
		USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Currency = Currency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetPriceSheet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetPriceSheet::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemdefIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionConsolidate* USteamCoreWebAsyncActionConsolidate::ConsolidateAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> ItemdefIDs, bool bForce)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync"));
		
		USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.ItemdefIDs = ItemdefIDs;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionConsolidate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionConsolidate::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionConsolidate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemdefIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetQuantity* USteamCoreWebAsyncActionGetQuantity::GetQuantityAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> ItemdefIDs, bool bForce)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync"));
		
		USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.ItemdefIDs = ItemdefIDs;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetQuantity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetQuantity::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputJson                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Updates                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionModifyItems* USteamCoreWebAsyncActionModifyItems::ModifyItemsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& InputJson, const class FString& SteamID, int32_t Timestamp, const class FString& Updates)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync"));
		
		USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionModifyItems.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionModifyItems::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionModifyItems"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebLeaderboards.SetLeaderboardScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LeaderbordId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Details                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ScoreMethod                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebLeaderboards::SetLeaderboardScore(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t LeaderbordId, const class FString& SteamID, int32_t Score, TArray<unsigned char> Details, const class FString& ScoreMethod)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebLeaderboards.SetLeaderboardScore"));
		
		UWebLeaderboards_SetLeaderboardScore_Params params {};
		params.AppID = AppID;
		params.LeaderbordId = LeaderbordId;
		params.Score = Score;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebLeaderboards.ResetLeaderboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LeaderboardId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebLeaderboards::ResetLeaderboard(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t LeaderboardId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebLeaderboards.ResetLeaderboard"));
		
		UWebLeaderboards_ResetLeaderboard_Params params {};
		params.AppID = AppID;
		params.LeaderboardId = LeaderboardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebLeaderboards::GetLeaderboardsForGame(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame"));
		
		UWebLeaderboards_GetLeaderboardsForGame_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LeaderboardId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataRequest                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebLeaderboards::GetLeaderboardEntries(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries"));
		
		UWebLeaderboards_GetLeaderboardEntries_Params params {};
		params.AppID = AppID;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		params.LeaderboardId = LeaderboardId;
		params.DataRequest = DataRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SortMethod                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DisplayType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateIfNotFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyTrustedWrites                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyFriendsReads                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebLeaderboards::FindOrCreateLeaderboard(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard"));
		
		UWebLeaderboards_FindOrCreateLeaderboard_Params params {};
		params.AppID = AppID;
		params.bCreateIfNotFound = bCreateIfNotFound;
		params.bOnlyTrustedWrites = bOnlyTrustedWrites;
		params.bOnlyFriendsReads = bOnlyFriendsReads;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebLeaderboards.DeleteLeaderboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebLeaderboards::DeleteLeaderboard(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebLeaderboards.DeleteLeaderboard"));
		
		UWebLeaderboards_DeleteLeaderboard_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebLeaderboards.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebLeaderboards::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebLeaderboards"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionDeleteLeaderboard* USteamCoreWebAsyncActionDeleteLeaderboard::DeleteLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync"));
		
		USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionDeleteLeaderboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionDeleteLeaderboard::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SortMethod                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DisplayType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateIfNotFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyTrustedWrites                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyFriendsReads                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionFindOrCreateLeaderboard* USteamCoreWebAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync"));
		
		USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.bCreateIfNotFound = bCreateIfNotFound;
		params.bOnlyTrustedWrites = bOnlyTrustedWrites;
		params.bOnlyFriendsReads = bOnlyFriendsReads;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionFindOrCreateLeaderboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LeaderboardId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataRequest                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetLeaderboardEntries* USteamCoreWebAsyncActionGetLeaderboardEntries::GetLeaderboardEntriesAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync"));
		
		USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		params.LeaderboardId = LeaderboardId;
		params.DataRequest = DataRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetLeaderboardEntries.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetLeaderboardEntries::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetLeaderboardsForGame* USteamCoreWebAsyncActionGetLeaderboardsForGame::GetLeaderboardsForGameAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync"));
		
		USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetLeaderboardsForGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetLeaderboardsForGame::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LeaderboardId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionResetLeaderboard* USteamCoreWebAsyncActionResetLeaderboard::ResetLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t LeaderboardId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync"));
		
		USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.LeaderboardId = LeaderboardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionResetLeaderboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionResetLeaderboard::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LeaderboardId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Details                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ScoreMethod                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionSetLeaderboardScore* USteamCoreWebAsyncActionSetLeaderboardScore::SetLeaderboardScoreAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t LeaderboardId, const class FString& SteamID, int32_t Score, TArray<unsigned char> Details, const class FString& ScoreMethod)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync"));
		
		USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.LeaderboardId = LeaderboardId;
		params.Score = Score;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionSetLeaderboardScore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamIdToRemove                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamIDLobby                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputJson                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebLobbyMatchmakingService::RemoveUserFromLobby(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamIdToRemove, const class FString& SteamIDLobby, const class FString& InputJson)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby"));
		
		UWebLobbyMatchmakingService_RemoveUserFromLobby_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreWebLobbyType                             LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LobbyName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputJson                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SteamIdInvitedMembers                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      LobbyMetaData                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebLobbyMatchmakingService::CreateLobby(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t MaxMembers, ESteamCoreWebLobbyType LobbyType, const class FString& LobbyName, const class FString& InputJson, TArray<class FString> SteamIdInvitedMembers, const class FString& LobbyMetaData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby"));
		
		UWebLobbyMatchmakingService_CreateLobby_Params params {};
		params.AppID = AppID;
		params.MaxMembers = MaxMembers;
		params.LobbyType = LobbyType;
		params.SteamIdInvitedMembers = SteamIdInvitedMembers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebLobbyMatchmakingService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebLobbyMatchmakingService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebLobbyMatchmakingService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.RefundTxn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::RefundTxn(const class FScriptDelegate& Callback, const class FString& Key, const class FString& OrderId, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.RefundTxn"));
		
		UWebMicroTxn_RefundTxn_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.QueryTxn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TransId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::QueryTxn(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& OrderId, const class FString& TransId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.QueryTxn"));
		
		UWebMicroTxn_QueryTxn_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.ProcessAgreement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AgreementId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::ProcessAgreement(const class FScriptDelegate& Callback, const class FString& Key, const class FString& OrderId, const class FString& SteamID, const class FString& AgreementId, int32_t AppID, int32_t Amount, const class FString& Currency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.ProcessAgreement"));
		
		UWebMicroTxn_ProcessAgreement_Params params {};
		params.AppID = AppID;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.MakeTransactionID
	 * 		Flags  -> ()
	 */
	class FString UWebMicroTxn::MakeTransactionID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.MakeTransactionID"));
		
		UWebMicroTxn_MakeTransactionID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.InitTxn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserSession                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ipaddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemId                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Quantity                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Amount                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Description                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Category                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    AssociatedBundle                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              BillingType                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              StartDate                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              EndDate                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Period                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Frequency                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              RecurringAmt                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    BundleCount                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    BundleId                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    BundleQty                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              BundleDesc                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              BundleCategory                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::InitTxn(const class FScriptDelegate& Callback, const class FString& Key, const class FString& OrderId, const class FString& SteamID, int32_t AppID, const class FString& Language, const class FString& Currency, const class FString& UserSession, const class FString& Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<class FString> Amount, TArray<class FString> Description, TArray<class FString> Category, TArray<int32_t> AssociatedBundle, TArray<class FString> BillingType, TArray<class FString> StartDate, TArray<class FString> EndDate, TArray<class FString> Period, TArray<int32_t> Frequency, TArray<class FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<class FString> BundleDesc, TArray<class FString> BundleCategory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.InitTxn"));
		
		UWebMicroTxn_InitTxn_Params params {};
		params.AppID = AppID;
		params.ItemId = ItemId;
		params.Quantity = Quantity;
		params.Amount = Amount;
		params.Description = Description;
		params.Category = Category;
		params.AssociatedBundle = AssociatedBundle;
		params.BillingType = BillingType;
		params.StartDate = StartDate;
		params.EndDate = EndDate;
		params.Period = Period;
		params.Frequency = Frequency;
		params.RecurringAmt = RecurringAmt;
		params.BundleCount = BundleCount;
		params.BundleId = BundleId;
		params.BundleQty = BundleQty;
		params.BundleDesc = BundleDesc;
		params.BundleCategory = BundleCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.GetUserInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Ipaddress                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::GetUserInfo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t Ipaddress)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.GetUserInfo"));
		
		UWebMicroTxn_GetUserInfo_Params params {};
		params.Ipaddress = Ipaddress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::GetUserAgreementInfo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo"));
		
		UWebMicroTxn_GetUserAgreementInfo_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.GetReport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Time                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::GetReport(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Time, const class FString& Type, int32_t MaxResults)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.GetReport"));
		
		UWebMicroTxn_GetReport_Params params {};
		params.AppID = AppID;
		params.MaxResults = MaxResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.FinalizeTxn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::FinalizeTxn(const class FScriptDelegate& Callback, const class FString& Key, const class FString& OrderId, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.FinalizeTxn"));
		
		UWebMicroTxn_FinalizeTxn_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.CancelAgreement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AgreementId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::CancelAgreement(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.CancelAgreement"));
		
		UWebMicroTxn_CancelAgreement_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebMicroTxn.AdjustAgreement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AgreementId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NextProcessDate                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebMicroTxn::AdjustAgreement(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32_t AppID, const class FString& NextProcessDate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebMicroTxn.AdjustAgreement"));
		
		UWebMicroTxn_AdjustAgreement_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebMicroTxn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebMicroTxn::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebMicroTxn"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AgreementId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NextProcessDate                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionAdjustAgreement* USteamCoreWebAsyncActionAdjustAgreement::AdjustAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32_t AppID, const class FString& NextProcessDate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync"));
		
		USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionAdjustAgreement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionAdjustAgreement::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AgreementId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionCancelAgreement* USteamCoreWebAsyncActionCancelAgreement::CancelAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync"));
		
		USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionCancelAgreement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionCancelAgreement::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionFinalizeTxn* USteamCoreWebAsyncActionFinalizeTxn::FinalizeTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderId, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync"));
		
		USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionFinalizeTxn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionFinalizeTxn::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Time                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetReport* USteamCoreWebAsyncActionGetReport::GetReportAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Time, const class FString& Type, int32_t MaxResults)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync"));
		
		USteamCoreWebAsyncActionGetReport_GetReportAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.MaxResults = MaxResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetReport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetReport::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetReport"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetUserAgreementInfo* USteamCoreWebAsyncActionGetUserAgreementInfo::GetUserAgreementInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync"));
		
		USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetUserAgreementInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Ipaddress                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetUserInfo* USteamCoreWebAsyncActionGetUserInfo::GetUserInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t Ipaddress)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync"));
		
		USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Ipaddress = Ipaddress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetUserInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetUserInfo::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserSession                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ipaddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ItemId                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Quantity                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Amount                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Description                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Category                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    AssociatedBundle                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              BillingType                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              StartDate                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              EndDate                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Period                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Frequency                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              RecurringAmt                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    BundleCount                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    BundleId                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    BundleQty                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              BundleDesc                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              BundleCategory                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionInitTxn* USteamCoreWebAsyncActionInitTxn::InitTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderId, const class FString& SteamID, int32_t AppID, const class FString& Language, const class FString& Currency, const class FString& UserSession, const class FString& Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<class FString> Amount, TArray<class FString> Description, TArray<class FString> Category, TArray<int32_t> AssociatedBundle, TArray<class FString> BillingType, TArray<class FString> StartDate, TArray<class FString> EndDate, TArray<class FString> Period, TArray<int32_t> Frequency, TArray<class FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<class FString> BundleDesc, TArray<class FString> BundleCategory)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync"));
		
		USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.ItemId = ItemId;
		params.Quantity = Quantity;
		params.Amount = Amount;
		params.Description = Description;
		params.Category = Category;
		params.AssociatedBundle = AssociatedBundle;
		params.BillingType = BillingType;
		params.StartDate = StartDate;
		params.EndDate = EndDate;
		params.Period = Period;
		params.Frequency = Frequency;
		params.RecurringAmt = RecurringAmt;
		params.BundleCount = BundleCount;
		params.BundleId = BundleId;
		params.BundleQty = BundleQty;
		params.BundleDesc = BundleDesc;
		params.BundleCategory = BundleCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionInitTxn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionInitTxn::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionInitTxn"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AgreementId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionProcessAgreement* USteamCoreWebAsyncActionProcessAgreement::ProcessAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderId, const class FString& SteamID, const class FString& AgreementId, int32_t AppID, int32_t Amount, const class FString& Currency)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync"));
		
		USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionProcessAgreement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionProcessAgreement::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TransId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionQueryTxn* USteamCoreWebAsyncActionQueryTxn::QueryTxnAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& OrderId, const class FString& TransId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync"));
		
		USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionQueryTxn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionQueryTxn::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OrderId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionRefundTxn* USteamCoreWebAsyncActionRefundTxn::RefundTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderId, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync"));
		
		USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionRefundTxn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionRefundTxn::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPlayerService.IsPlayingSharedGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppIdPlaying                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPlayerService::IsPlayingSharedGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppIdPlaying)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPlayerService.IsPlayingSharedGame"));
		
		UWebPlayerService_IsPlayingSharedGame_Params params {};
		params.AppIdPlaying = AppIdPlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPlayerService.GetSteamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPlayerService::GetSteamLevel(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPlayerService.GetSteamLevel"));
		
		UWebPlayerService_GetSteamLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPlayerService::GetRecentlyPlayedGames(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames"));
		
		UWebPlayerService_GetRecentlyPlayedGames_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPlayerService.GetOwnedGames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeAppInfo                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludePlayedFreeGames                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Filter                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebPlayerService::GetOwnedGames(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPlayerService.GetOwnedGames"));
		
		UWebPlayerService_GetOwnedGames_Params params {};
		params.bIncludeAppInfo = bIncludeAppInfo;
		params.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BadgeId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPlayerService::GetCommunityBadgeProgress(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t BadgeId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress"));
		
		UWebPlayerService_GetCommunityBadgeProgress_Params params {};
		params.BadgeId = BadgeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPlayerService.GetBadges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPlayerService::GetBadges(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPlayerService.GetBadges"));
		
		UWebPlayerService_GetBadges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebPlayerService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebPlayerService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebPlayerService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetRecentlyPlayedGames* USteamCoreWebAsyncActionGetRecentlyPlayedGames::GetRecentlyPlayedGamesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync"));
		
		USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetRecentlyPlayedGames.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetRecentlyPlayedGames::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeAppInfo                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludePlayedFreeGames                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Filter                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetOwnedGames* USteamCoreWebAsyncActionGetOwnedGames::GetOwnedGamesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync"));
		
		USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bIncludeAppInfo = bIncludeAppInfo;
		params.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetOwnedGames.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetOwnedGames::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetSteamLevel* USteamCoreWebAsyncActionGetSteamLevel::GetSteamLevelAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync"));
		
		USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetSteamLevel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetSteamLevel::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetBadges* USteamCoreWebAsyncActionGetBadges::GetBadgesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync"));
		
		USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetBadges.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetBadges::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetBadges"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BadgeId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetCommunityBadgeProgress* USteamCoreWebAsyncActionGetCommunityBadgeProgress::GetCommunityBadgeProgressAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t BadgeId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync"));
		
		USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.BadgeId = BadgeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetCommunityBadgeProgress.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetCommunityBadgeProgress::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppIdPlaying                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionIsPlayingSharedGame* USteamCoreWebAsyncActionIsPlayingSharedGame::IsPlayingSharedGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppIdPlaying)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync"));
		
		USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppIdPlaying = AppIdPlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionIsPlayingSharedGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionIsPlayingSharedGame::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPublishedFileService.UpdateTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileID                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AddTags                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RemoveTags                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPublishedFileService::UpdateTags(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PublishedFileID, int32_t AppID, const class FString& AddTags, const class FString& RemoveTags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPublishedFileService.UpdateTags"));
		
		UWebPublishedFileService_UpdateTags_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileID                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncompatible                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPublishedFileService::UpdateIncompatibleStatus(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PublishedFileID, int32_t AppID, bool bIncompatible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus"));
		
		UWebPublishedFileService_UpdateIncompatibleStatus_Params params {};
		params.AppID = AppID;
		params.bIncompatible = bIncompatible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPublishedFileService.UpdateBanStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileID                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBanned                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPublishedFileService::UpdateBanStatus(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PublishedFileID, int32_t AppID, bool bBanned, const class FString& Reason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPublishedFileService.UpdateBanStatus"));
		
		UWebPublishedFileService_UpdateBanStatus_Params params {};
		params.AppID = AppID;
		params.bBanned = bBanned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileID                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPublishedFileService::SetDeveloperMetadata(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PublishedFileID, int32_t AppID, const class FString& MetaData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata"));
		
		UWebPublishedFileService_SetDeveloperMetadata_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPublishedFileService.QueryFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Cursor                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPerPage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CreatorAppID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequiredTags                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExcludedTags                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchAllTags                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequiredFlags                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OmittedFlags                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SearchText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ChildPublishedFileId                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Days                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeRecentVotesOnly                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CacheMaxAgeSeconds                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Language                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RequiredKvTags                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTotalOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIDsOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnVoteData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnTags                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnKvTags                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnPreviews                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnShortDescription                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnForSaleData                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnMetadata                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnPlaytimeStats                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebPublishedFileService::QueryFiles(const class FScriptDelegate& Callback, const class FString& Key, int32_t QueryType, int32_t Page, const class FString& Cursor, int32_t NumPerPage, int32_t CreatorAppID, int32_t AppID, const class FString& RequiredTags, const class FString& ExcludedTags, bool bMatchAllTags, const class FString& RequiredFlags, const class FString& OmittedFlags, const class FString& SearchText, int32_t FileType, const class FString& ChildPublishedFileId, int32_t Days, bool bIncludeRecentVotesOnly, int32_t CacheMaxAgeSeconds, int32_t Language, const class FString& RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32_t ReturnPlaytimeStats)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPublishedFileService.QueryFiles"));
		
		UWebPublishedFileService_QueryFiles_Params params {};
		params.QueryType = QueryType;
		params.Page = Page;
		params.NumPerPage = NumPerPage;
		params.CreatorAppID = CreatorAppID;
		params.AppID = AppID;
		params.bMatchAllTags = bMatchAllTags;
		params.FileType = FileType;
		params.Days = Days;
		params.bIncludeRecentVotesOnly = bIncludeRecentVotesOnly;
		params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;
		params.Language = Language;
		params.bTotalOnly = bTotalOnly;
		params.bIDsOnly = bIDsOnly;
		params.bReturnVoteData = bReturnVoteData;
		params.bReturnTags = bReturnTags;
		params.bReturnKvTags = bReturnKvTags;
		params.bReturnPreviews = bReturnPreviews;
		params.bReturnChildren = bReturnChildren;
		params.bReturnShortDescription = bReturnShortDescription;
		params.bReturnForSaleData = bReturnForSaleData;
		params.bReturnMetadata = bReturnMetadata;
		params.ReturnPlaytimeStats = ReturnPlaytimeStats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebPublishedFileService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebPublishedFileService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebPublishedFileService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAppAdminAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tag                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              UserTag                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebSteamPublishedItemSearch::ResultSetSummary(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary"));
		
		UWebSteamPublishedItemSearch_ResultSetSummary_Params params {};
		params.AppID = AppID;
		params.StartId = StartId;
		params.bHasAppAdminAccess = bHasAppAdminAccess;
		params.FileType = FileType;
		params.Tag = Tag;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAppAdminAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tag                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              UserTag                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebSteamPublishedItemSearch::RankedByVote(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote"));
		
		UWebSteamPublishedItemSearch_RankedByVote_Params params {};
		params.AppID = AppID;
		params.StartId = StartId;
		params.Count = Count;
		params.bHasAppAdminAccess = bHasAppAdminAccess;
		params.FileType = FileType;
		params.Tag = Tag;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAppAdminAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Days                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tag                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              UserTag                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebSteamPublishedItemSearch::RankedByTrend(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<class FString> Tag, TArray<class FString> UserTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend"));
		
		UWebSteamPublishedItemSearch_RankedByTrend_Params params {};
		params.AppID = AppID;
		params.StartId = StartId;
		params.Count = Count;
		params.bHasAppAdminAccess = bHasAppAdminAccess;
		params.FileType = FileType;
		params.Days = Days;
		params.Tag = Tag;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAppAdminAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tag                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              UserTag                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebSteamPublishedItemSearch::RankedByPublicationOrder(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder"));
		
		UWebSteamPublishedItemSearch_RankedByPublicationOrder_Params params {};
		params.AppID = AppID;
		params.StartId = StartId;
		params.Count = Count;
		params.bHasAppAdminAccess = bHasAppAdminAccess;
		params.FileType = FileType;
		params.Tag = Tag;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSteamPublishedItemSearch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSteamPublishedItemSearch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebSteamPublishedItemSearch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAppAdminAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tag                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              UserTag                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionRankedByPublicationOrder* USteamCoreWebAsyncActionRankedByPublicationOrder::RankedByPublicationOrderAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync"));
		
		USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.StartId = StartId;
		params.Count = Count;
		params.bHasAppAdminAccess = bHasAppAdminAccess;
		params.FileType = FileType;
		params.Tag = Tag;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionRankedByPublicationOrder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAppAdminAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Days                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tag                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              UserTag                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionRankedByTrend* USteamCoreWebAsyncActionRankedByTrend::RankedByTrendAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<class FString> Tag, TArray<class FString> UserTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync"));
		
		USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.StartId = StartId;
		params.Count = Count;
		params.bHasAppAdminAccess = bHasAppAdminAccess;
		params.FileType = FileType;
		params.Days = Days;
		params.Tag = Tag;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionRankedByTrend.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionRankedByTrend::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAppAdminAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tag                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              UserTag                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionRankedByVote* USteamCoreWebAsyncActionRankedByVote::RankedByVoteAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync"));
		
		USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.StartId = StartId;
		params.Count = Count;
		params.bHasAppAdminAccess = bHasAppAdminAccess;
		params.FileType = FileType;
		params.Tag = Tag;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionRankedByVote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionRankedByVote::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasAppAdminAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tag                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              UserTag                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionResultSetSummary* USteamCoreWebAsyncActionResultSetSummary::ResultSetSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync"));
		
		USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.StartId = StartId;
		params.bHasAppAdminAccess = bHasAppAdminAccess;
		params.FileType = FileType;
		params.Tag = Tag;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionResultSetSummary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionResultSetSummary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebPublishedItemVoting::UserVoteSummary(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, TArray<class FString> PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary"));
		
		UWebPublishedItemVoting_UserVoteSummary_Params params {};
		params.PublishedFileIDs = PublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebPublishedItemVoting::ItemVoteSummary(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, TArray<class FString> PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary"));
		
		UWebPublishedItemVoting_ItemVoteSummary_Params params {};
		params.AppID = AppID;
		params.PublishedFileIDs = PublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebPublishedItemVoting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebPublishedItemVoting::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebPublishedItemVoting"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionItemVoteSummary* USteamCoreWebAsyncActionItemVoteSummary::ItemVoteSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, TArray<class FString> PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync"));
		
		USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.PublishedFileIDs = PublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionItemVoteSummary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionItemVoteSummary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionUserVoteSummary* USteamCoreWebAsyncActionUserVoteSummary::UserVoteSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, TArray<class FString> PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync"));
		
		USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileIDs = PublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionUserVoteSummary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionUserVoteSummary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileIDs                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebRemoteStorage::UnsubscribePublishedFile(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile"));
		
		UWebRemoteStorage_UnsubscribePublishedFile_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileIDs                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebRemoteStorage::SubscribePublishedFile(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile"));
		
		UWebRemoteStorage_SubscribePublishedFile_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UGCID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebRemoteStorage::SetUGCUsedByGC(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32_t AppID, bool bUsed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC"));
		
		UWebRemoteStorage_SetUGCUsedByGC_Params params {};
		params.AppID = AppID;
		params.bUsed = bUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UGCID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebRemoteStorage::GetUGCFileDetails(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails"));
		
		UWebRemoteStorage_GetUGCFileDetails_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileIDs                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebRemoteStorage::GetPublishedFileDetails(const class FScriptDelegate& Callback, const class FString& PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails"));
		
		UWebRemoteStorage_GetPublishedFileDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebRemoteStorage.GetCollectionDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebRemoteStorage::GetCollectionDetails(const class FScriptDelegate& Callback, TArray<class FString> PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebRemoteStorage.GetCollectionDetails"));
		
		UWebRemoteStorage_GetCollectionDetails_Params params {};
		params.PublishedFileIDs = PublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ListType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebRemoteStorage::EnumerateUserSubscribedFiles(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t ListType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles"));
		
		UWebRemoteStorage_EnumerateUserSubscribedFiles_Params params {};
		params.AppID = AppID;
		params.ListType = ListType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebRemoteStorage::EnumerateUserPublishedFiles(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles"));
		
		UWebRemoteStorage_EnumerateUserPublishedFiles_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebRemoteStorage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebRemoteStorage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebRemoteStorage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* USteamCoreWebAsyncActionEnumerateUserPublishedFiles::EnumerateUserPublishedFilesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync"));
		
		USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionEnumerateUserPublishedFiles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ListType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::EnumerateUserSubscribedFilesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t ListType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync"));
		
		USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.ListType = ListType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionEnumerateUserSubscribedFiles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetCollectionDetails* USteamCoreWebAsyncActionGetCollectionDetails::GetCollectionDetailsAsync(class UObject* WorldContextObject, TArray<class FString> PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync"));
		
		USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileIDs = PublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetCollectionDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetCollectionDetails::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileIDs                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetPublishedFileDetails* USteamCoreWebAsyncActionGetPublishedFileDetails::GetPublishedFileDetailsAsync(class UObject* WorldContextObject, const class FString& PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync"));
		
		USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetPublishedFileDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UGCID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetUGCFileDetails* USteamCoreWebAsyncActionGetUGCFileDetails::GetUGCFileDetailsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync"));
		
		USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetUGCFileDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UGCID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionSetUGCUsedByGC* USteamCoreWebAsyncActionSetUGCUsedByGC::SetUGCUsedByGCAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32_t AppID, bool bUsed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync"));
		
		USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.bUsed = bUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionSetUGCUsedByGC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileIDs                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionSubscribePublishedFile* USteamCoreWebAsyncActionSubscribePublishedFile::SubscribePublishedFileAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync"));
		
		USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionSubscribePublishedFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PublishedFileIDs                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionUnsubscribePublishedFile* USteamCoreWebAsyncActionUnsubscribePublishedFile::UnsubscribePublishedFileAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PublishedFileIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync"));
		
		USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionUnsubscribePublishedFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamCommunity.ReportAbuse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamIdActor                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamIdTarget                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AbuseType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Gid                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamCommunity::ReportAbuse(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamIdActor, const class FString& SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, const class FString& Description, const class FString& Gid)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamCommunity.ReportAbuse"));
		
		UWebSteamCommunity_ReportAbuse_Params params {};
		params.AppID = AppID;
		params.AbuseType = AbuseType;
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSteamCommunity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSteamCommunity::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebSteamCommunity"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamIdActor                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamIdTarget                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AbuseType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Gid                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionReportAbuse* USteamCoreWebAsyncActionReportAbuse::ReportAbuseAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamIdActor, const class FString& SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, const class FString& Description, const class FString& Gid)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync"));
		
		USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.AbuseType = AbuseType;
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionReportAbuse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionReportAbuse::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamEconomy.StartTrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamIDd                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamId2                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamEconomy::StartTrade(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamIDd, const class FString& SteamId2)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamEconomy.StartTrade"));
		
		UWebSteamEconomy_StartTrade_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamEconomy.StartAssetTransaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AssetQuantity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ipaddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Referer                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClientAuth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamEconomy::StartAssetTransaction(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& AssetId, int32_t AssetQuantity, const class FString& Currency, const class FString& Language, const class FString& Ipaddress, const class FString& Referer, bool bClientAuth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamEconomy.StartAssetTransaction"));
		
		UWebSteamEconomy_StartAssetTransaction_Params params {};
		params.AppID = AppID;
		params.AssetQuantity = AssetQuantity;
		params.bClientAuth = bClientAuth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamEconomy.GetMarketPrices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamEconomy::GetMarketPrices(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamEconomy.GetMarketPrices"));
		
		UWebSteamEconomy_GetMarketPrices_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamEconomy::GetExportedAssetsForUser(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ContextId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser"));
		
		UWebSteamEconomy_GetExportedAssetsForUser_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamEconomy.GetAssetPrices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamEconomy::GetAssetPrices(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Currency, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamEconomy.GetAssetPrices"));
		
		UWebSteamEconomy_GetAssetPrices_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClassCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ClassId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InstanceID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamEconomy::GetAssetClassInfo(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Language, int32_t ClassCount, const class FString& ClassId, const class FString& InstanceID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo"));
		
		UWebSteamEconomy_GetAssetClassInfo_Params params {};
		params.AppID = AppID;
		params.ClassCount = ClassCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TxnId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamEconomy::FinalizeAssetTransaction(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& TxnId, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction"));
		
		UWebSteamEconomy_FinalizeAssetTransaction_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamEconomy.CanTrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TargetId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamEconomy::CanTrade(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& TargetId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamEconomy.CanTrade"));
		
		UWebSteamEconomy_CanTrade_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSteamEconomy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSteamEconomy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebSteamEconomy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TargetId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionCanTrade* USteamCoreWebAsyncActionCanTrade::CanTradeAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& TargetId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync"));
		
		USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionCanTrade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionCanTrade::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionCanTrade"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TxnId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionFinalizeAssetTransaction* USteamCoreWebAsyncActionFinalizeAssetTransaction::FinalizeAssetTransactionAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& TxnId, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync"));
		
		USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionFinalizeAssetTransaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClassCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ClassId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InstanceID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetAssetClassInfo* USteamCoreWebAsyncActionGetAssetClassInfo::GetAssetClassInfoAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Language, int32_t ClassCount, const class FString& ClassId, const class FString& InstanceID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync"));
		
		USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.ClassCount = ClassCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetAssetClassInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetAssetPrices* USteamCoreWebAsyncActionGetAssetPrices::GetAssetPricesAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Currency, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync"));
		
		USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetAssetPrices.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetAssetPrices::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContextId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetExportedAssetsForUser* USteamCoreWebAsyncActionGetExportedAssetsForUser::GetExportedAssetsForUserAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ContextId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync"));
		
		USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetExportedAssetsForUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetMarketPrices* USteamCoreWebAsyncActionGetMarketPrices::GetMarketPricesAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync"));
		
		USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetMarketPrices.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetMarketPrices::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AssetQuantity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ipaddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Referer                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClientAuth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionStartAssetTransaction* USteamCoreWebAsyncActionStartAssetTransaction::StartAssetTransactionAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& AssetId, int32_t AssetQuantity, const class FString& Currency, const class FString& Language, const class FString& Ipaddress, const class FString& Referer, bool bClientAuth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync"));
		
		USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.AssetQuantity = AssetQuantity;
		params.bClientAuth = bClientAuth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionStartAssetTransaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionStartAssetTransaction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamId1                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamId2                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionStartTrade* USteamCoreWebAsyncActionStartTrade::StartTradeAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamId1, const class FString& SteamId2)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync"));
		
		USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionStartTrade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionStartTrade::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionStartTrade"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RangeStart                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RangeEnd                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamGameServerStats::GetGameServerPlayerStatsForGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& GameID, int32_t AppID, const class FString& RangeStart, const class FString& RangeEnd, int32_t MaxResults)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame"));
		
		UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Params params {};
		params.AppID = AppID;
		params.MaxResults = MaxResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSteamGameServerStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSteamGameServerStats::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebSteamGameServerStats"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Feeds                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndDate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamNews::GetNewsForAppAuthed(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t MaxLength, TArray<class FString> Feeds, int32_t EndDate, int32_t Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed"));
		
		UWebSteamNews_GetNewsForAppAuthed_Params params {};
		params.AppID = AppID;
		params.MaxLength = MaxLength;
		params.Feeds = Feeds;
		params.EndDate = EndDate;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamNews.GetNewsForApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Feeds                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndDate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamNews::GetNewsForApp(const class FScriptDelegate& Callback, int32_t AppID, int32_t MaxLength, TArray<class FString> Feeds, int32_t EndDate, int32_t Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamNews.GetNewsForApp"));
		
		UWebSteamNews_GetNewsForApp_Params params {};
		params.AppID = AppID;
		params.MaxLength = MaxLength;
		params.Feeds = Feeds;
		params.EndDate = EndDate;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSteamNews.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSteamNews::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebSteamNews"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Feeds                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndDate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetNewsForApp* USteamCoreWebAsyncActionGetNewsForApp::GetNewsForAppAsync(class UObject* WorldContextObject, int32_t AppID, int32_t MaxLength, TArray<class FString> Feeds, int32_t EndDate, int32_t Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync"));
		
		USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.MaxLength = MaxLength;
		params.Feeds = Feeds;
		params.EndDate = EndDate;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetNewsForApp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetNewsForApp::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Feeds                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndDate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetNewsForAppAuthed* USteamCoreWebAsyncActionGetNewsForAppAuthed::GetNewsForAppAuthedAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t MaxLength, TArray<class FString> Feeds, int32_t EndDate, int32_t Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync"));
		
		USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.MaxLength = MaxLength;
		params.Feeds = Feeds;
		params.EndDate = EndDate;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetNewsForAppAuthed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.ResolveVanityURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VanityURL                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVanityUrlType                                     URLType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::ResolveVanityURL(const class FScriptDelegate& Callback, const class FString& Key, const class FString& VanityURL, EVanityUrlType URLType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.ResolveVanityURL"));
		
		UWebSteamUser_ResolveVanityURL_Params params {};
		params.URLType = URLType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.GrantPackage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PackageId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ipaddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ThirdPartyKey                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ThirdPartyAppId                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::GrantPackage(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t PackageId, const class FString& Ipaddress, const class FString& ThirdPartyKey, int32_t ThirdPartyAppId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.GrantPackage"));
		
		UWebSteamUser_GrantPackage_Params params {};
		params.PackageId = PackageId;
		params.ThirdPartyAppId = ThirdPartyAppId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.GetUserGroupList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::GetUserGroupList(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.GetUserGroupList"));
		
		UWebSteamUser_GetUserGroupList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PackageRowVersion                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CDKeyRowVersion                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::GetPublisherAppOwnershipChanges(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges"));
		
		UWebSteamUser_GetPublisherAppOwnershipChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::GetPublisherAppOwnership(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership"));
		
		UWebSteamUser_GetPublisherAppOwnership_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.GetPlayerSummaries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SteamIDs                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::GetPlayerSummaries(const class FScriptDelegate& Callback, const class FString& Key, TArray<class FString> SteamIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.GetPlayerSummaries"));
		
		UWebSteamUser_GetPlayerSummaries_Params params {};
		params.SteamIDs = SteamIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.GetPlayerBans
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SteamIDs                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::GetPlayerBans(const class FScriptDelegate& Callback, const class FString& Key, TArray<class FString> SteamIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.GetPlayerBans"));
		
		UWebSteamUser_GetPlayerBans_Params params {};
		params.SteamIDs = SteamIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.GetFriendList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Relationship                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::GetFriendList(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& Relationship)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.GetFriendList"));
		
		UWebSteamUser_GetFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.GetAppPriceInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    AppIDs                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::GetAppPriceInfo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, TArray<int32_t> AppIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.GetAppPriceInfo"));
		
		UWebSteamUser_GetAppPriceInfo_Params params {};
		params.AppIDs = AppIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebSteamUser.CheckAppOwnership
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebSteamUser::CheckAppOwnership(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebSteamUser.CheckAppOwnership"));
		
		UWebSteamUser_CheckAppOwnership_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSteamUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSteamUser::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebSteamUser"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionCheckAppOwnership* USteamCoreWebAsyncActionCheckAppOwnership::CheckAppOwnershipAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync"));
		
		USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionCheckAppOwnership.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionCheckAppOwnership::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    AppIDs                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetAppPriceInfo* USteamCoreWebAsyncActionGetAppPriceInfo::GetAppPriceInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, TArray<int32_t> AppIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync"));
		
		USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppIDs = AppIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetAppPriceInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Relationship                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetFriendList* USteamCoreWebAsyncActionGetFriendList::GetFriendListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& Relationship)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync"));
		
		USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetFriendList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetFriendList::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SteamIDs                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetPlayerBans* USteamCoreWebAsyncActionGetPlayerBans::GetPlayerBansAsync(class UObject* WorldContextObject, const class FString& Key, TArray<class FString> SteamIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync"));
		
		USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SteamIDs = SteamIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetPlayerBans.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetPlayerBans::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SteamIDs                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetPlayerSummaries* USteamCoreWebAsyncActionGetPlayerSummaries::GetPlayerSummariesAsync(class UObject* WorldContextObject, const class FString& Key, TArray<class FString> SteamIDs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync"));
		
		USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SteamIDs = SteamIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetPlayerSummaries.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetPublisherAppOwnership* USteamCoreWebAsyncActionGetPublisherAppOwnership::GetPublisherAppOwnershipAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync"));
		
		USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetPublisherAppOwnership.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PackageRowVersion                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CDKeyRowVersion                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::GetPublisherAppOwnershipChangesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync"));
		
		USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetUserGroupList* USteamCoreWebAsyncActionGetUserGroupList::GetUserGroupListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync"));
		
		USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetUserGroupList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetUserGroupList::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PackageId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ipaddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ThirdPartyKey                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ThirdPartyAppId                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGrantPackage* USteamCoreWebAsyncActionGrantPackage::GrantPackageAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t PackageId, const class FString& Ipaddress, const class FString& ThirdPartyKey, int32_t ThirdPartyAppId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync"));
		
		USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PackageId = PackageId;
		params.ThirdPartyAppId = ThirdPartyAppId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGrantPackage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGrantPackage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VanityURL                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVanityUrlType                                     URLType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionResolveVanityURL* USteamCoreWebAsyncActionResolveVanityURL::ResolveVanityURLAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& VanityURL, EVanityUrlType URLType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync"));
		
		USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.URLType = URLType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionResolveVanityURL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionResolveVanityURL::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebUserAuth.AuthenticateUserTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ticket                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebUserAuth::AuthenticateUserTicket(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Ticket)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebUserAuth.AuthenticateUserTicket"));
		
		UWebUserAuth_AuthenticateUserTicket_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebUserAuth.AuthenticateUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              SessionKey                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              EncryptedLoginKey                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebUserAuth::AuthenticateUser(const class FScriptDelegate& Callback, const class FString& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebUserAuth.AuthenticateUser"));
		
		UWebUserAuth_AuthenticateUser_Params params {};
		params.SessionKey = SessionKey;
		params.EncryptedLoginKey = EncryptedLoginKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebUserAuth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebUserAuth::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebUserAuth"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              SessionKey                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              EncryptedLoginKey                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionAuthenticateUser* USteamCoreWebAsyncActionAuthenticateUser::AuthenticateUserAsync(class UObject* WorldContextObject, const class FString& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync"));
		
		USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionKey = SessionKey;
		params.EncryptedLoginKey = EncryptedLoginKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionAuthenticateUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionAuthenticateUser::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ticket                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionAuthenticateUserTicket* USteamCoreWebAsyncActionAuthenticateUserTicket::AuthenticateUserTicketAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Ticket)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync"));
		
		USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionAuthenticateUserTicket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionAuthenticateUserTicket::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebUserStats.SetUserStatsForGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Names                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Values                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWebUserStats::SetUserStatsForGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, TArray<class FString> Names, TArray<int32_t> Values)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebUserStats.SetUserStatsForGame"));
		
		UWebUserStats_SetUserStatsForGame_Params params {};
		params.AppID = AppID;
		params.Names = Names;
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebUserStats.GetUserStatsForGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebUserStats::GetUserStatsForGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebUserStats.GetUserStatsForGame"));
		
		UWebUserStats_GetUserStatsForGame_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebUserStats.GetSchemaForGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebUserStats::GetSchemaForGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebUserStats.GetSchemaForGame"));
		
		UWebUserStats_GetSchemaForGame_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebUserStats.GetPlayerAchievements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebUserStats::GetPlayerAchievements(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebUserStats.GetPlayerAchievements"));
		
		UWebUserStats_GetPlayerAchievements_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebUserStats::GetNumberOfCurrentPlayers(const class FScriptDelegate& Callback, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers"));
		
		UWebUserStats_GetNumberOfCurrentPlayers_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebUserStats.GetGlobalStatsForGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Names                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartDate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndDate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebUserStats::GetGlobalStatsForGame(const class FScriptDelegate& Callback, int32_t AppID, TArray<class FString> Names, int32_t StartDate, int32_t EndDate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebUserStats.GetGlobalStatsForGame"));
		
		UWebUserStats_GetGlobalStatsForGame_Params params {};
		params.AppID = AppID;
		params.Names = Names;
		params.StartDate = StartDate;
		params.EndDate = EndDate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebUserStats::GetGlobalAchievementPercentagesForApp(const class FScriptDelegate& Callback, const class FString& GameID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp"));
		
		UWebUserStats_GetGlobalAchievementPercentagesForApp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebUserStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebUserStats::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.WebUserStats"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, const class FString& GameID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync"));
		
		USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Names                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartDate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EndDate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetGlobalStatsForGame* USteamCoreWebAsyncActionGetGlobalStatsForGame::GetGlobalStatsForGameAsync(class UObject* WorldContextObject, int32_t AppID, TArray<class FString> Names, int32_t StartDate, int32_t EndDate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync"));
		
		USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Names = Names;
		params.StartDate = StartDate;
		params.EndDate = EndDate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetGlobalStatsForGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync"));
		
		USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetNumberOfCurrentPlayers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetPlayerAchievements* USteamCoreWebAsyncActionGetPlayerAchievements::GetPlayerAchievementsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync"));
		
		USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetPlayerAchievements.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetPlayerAchievements::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetSchemaForGame* USteamCoreWebAsyncActionGetSchemaForGame::GetSchemaForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& Language)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync"));
		
		USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetSchemaForGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetSchemaForGame::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionGetUserStatsForGame* USteamCoreWebAsyncActionGetUserStatsForGame::GetUserStatsForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync"));
		
		USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetUserStatsForGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetUserStatsForGame::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Names                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Values                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USteamCoreWebAsyncActionSetUserStatsForGame* USteamCoreWebAsyncActionSetUserStatsForGame::SetUserStatsForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, TArray<class FString> Names, TArray<int32_t> Values)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync"));
		
		USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Names = Names;
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionSetUserStatsForGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionSetUserStatsForGame::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame"));
		return ptr;
	}

}


