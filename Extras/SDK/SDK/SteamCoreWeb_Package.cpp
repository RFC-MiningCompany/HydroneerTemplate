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
	 * 		Name   -> PredefindFunction USteamCoreWeb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWeb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWeb");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebSubsystem");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback");
		
		struct
		{
			class FString                                      Data;
			bool                                               bWasSuccessful;
		} params;
		params.Data = Data;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncAction");
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebSettings");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.ParseJson");
		
		struct
		{
			class FString                                      JsonString;
			TArray<struct FSteamCoreJson>                      Data;
		} params;
		params.JsonString = JsonString;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.GetProjectKey");
		
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
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.GetProjectAppID
	 * 		Flags  -> ()
	 */
	int32_t USteamWebUtilities::GetProjectAppID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.GetProjectAppID");
		
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
	 * 		Name   -> Function SteamCoreWeb.SteamWebUtilities.GetDevSteamID
	 * 		Flags  -> ()
	 */
	class FString USteamWebUtilities::GetDevSteamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.GetDevSteamID");
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonStrings");
		
		struct
		{
			class FString                                      JsonString;
			class FString                                      Key;
			TArray<class FString>                              Values;
			ESteamJsonResult                                   Result;
		} params;
		params.JsonString = JsonString;
		params.Key = Key;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonString");
		
		struct
		{
			class FString                                      JsonString;
			class FString                                      Key;
			class FString                                      Value;
			ESteamJsonResult                                   Result;
		} params;
		params.JsonString = JsonString;
		params.Key = Key;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonNumbers");
		
		struct
		{
			class FString                                      JsonString;
			class FString                                      Key;
			TArray<int32_t>                                    Values;
			ESteamJsonResult                                   Result;
		} params;
		params.JsonString = JsonString;
		params.Key = Key;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonNumber");
		
		struct
		{
			class FString                                      JsonString;
			class FString                                      Key;
			int32_t                                            Value;
			ESteamJsonResult                                   Result;
		} params;
		params.JsonString = JsonString;
		params.Key = Key;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonBools");
		
		struct
		{
			class FString                                      JsonString;
			class FString                                      Key;
			TArray<bool>                                       bValues;
			ESteamJsonResult                                   Result;
		} params;
		params.JsonString = JsonString;
		params.Key = Key;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamWebUtilities.FindJsonBool");
		
		struct
		{
			class FString                                      JsonString;
			class FString                                      Key;
			bool                                               bValue;
			ESteamJsonResult                                   Result;
		} params;
		params.JsonString = JsonString;
		params.Key = Key;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamWebUtilities");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.UpToDateCheck");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            AppID;
			int32_t                                            Version;
		} params;
		params.Callback = Callback;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.SetAppBuildLive");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            BuildID;
			class FString                                      BetaKey;
			class FString                                      Description;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.BuildID = BuildID;
		params.BetaKey = BetaKey;
		params.Description = Description;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetServersAtAddress");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Addr;
		} params;
		params.Callback = Callback;
		params.Addr = Addr;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetServerList");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      Filter;
			int32_t                                            Limit;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.Filter = Filter;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetPlayersBanned");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetCheatingReports");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            TimeBegin;
			int32_t                                            TimeEnd;
			bool                                               bIncludeReports;
			bool                                               bIncludeBans;
			int32_t                                            ReportidMin;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetAppList");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetAppDepotVersions");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetAppBuilds");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            Count;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebApps.GetAppBetas");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebApps");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            Count;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            TimeBegin;
			int32_t                                            TimeEnd;
			bool                                               bIncludeReports;
			bool                                               bIncludeBans;
			int32_t                                            ReportidMin;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      Filter;
			int32_t                                            Limit;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.Filter = Filter;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Addr;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Addr = Addr;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            BuildID;
			class FString                                      BetaKey;
			class FString                                      Description;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.BuildID = BuildID;
		params.BetaKey = BetaKey;
		params.Description = Description;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			int32_t                                            Version;
		} params;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebBroadcastService.PostGameDataFrame");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      BroadcastId;
			class FString                                      FrameData;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.BroadcastId = BroadcastId;
		params.FrameData = FrameData;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebBroadcastService");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      BroadcastId;
			class FString                                      FrameData;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.BroadcastId = BroadcastId;
		params.FrameData = FrameData;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      SessionID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.SessionID = SessionID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      ReportID;
			class FString                                      CheatDescription;
			int32_t                                            Duration;
			bool                                               bDelayBan;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.ReportID = ReportID;
		params.CheatDescription = CheatDescription;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.ReportPlayerCheating");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      SteamIdReporter;
			class FString                                      AppData;
			bool                                               bHeuristic;
			bool                                               bDetection;
			bool                                               bPlayerReport;
			bool                                               bNoReportID;
			int32_t                                            GameMode;
			int32_t                                            SuspicionStartTime;
			int32_t                                            Severity;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.SteamIdReporter = SteamIdReporter;
		params.AppData = AppData;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.ReportCheatData");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      PathAndFileName;
			class FString                                      WebCheatURL;
			class FString                                      TimeNow;
			class FString                                      TimeStarted;
			class FString                                      TimeStopped;
			class FString                                      CheatName;
			int32_t                                            GameProcessId;
			int32_t                                            CheatProcessId;
			class FString                                      CheatParam1;
			class FString                                      CheatParam2;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.PathAndFileName = PathAndFileName;
		params.WebCheatURL = WebCheatURL;
		params.TimeNow = TimeNow;
		params.TimeStarted = TimeStarted;
		params.TimeStopped = TimeStopped;
		params.CheatName = CheatName;
		params.GameProcessId = GameProcessId;
		params.CheatProcessId = CheatProcessId;
		params.CheatParam1 = CheatParam1;
		params.CheatParam2 = CheatParam2;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.GetCheatingReports");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            TimeEnd;
			int32_t                                            TimeBegin;
			class FString                                      ReportidMin;
			bool                                               bIncludeReports;
			bool                                               bIncludeBans;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.TimeEnd = TimeEnd;
		params.TimeBegin = TimeBegin;
		params.ReportidMin = ReportidMin;
		params.bIncludeReports = bIncludeReports;
		params.bIncludeBans = bIncludeBans;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      SessionID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.SessionID = SessionID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebCheatReporting");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      SteamIdReporter;
			class FString                                      AppData;
			bool                                               bHeuristic;
			bool                                               bDetection;
			bool                                               bPlayerReport;
			bool                                               bNoReportID;
			int32_t                                            GameMode;
			int32_t                                            SuspicionStartTime;
			int32_t                                            Severity;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.SteamIdReporter = SteamIdReporter;
		params.AppData = AppData;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      ReportID;
			class FString                                      CheatDescription;
			int32_t                                            Duration;
			bool                                               bDelayBan;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.ReportID = ReportID;
		params.CheatDescription = CheatDescription;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            TimeEnd;
			int32_t                                            TimeBegin;
			class FString                                      ReportidMin;
			bool                                               bIncludeReports;
			bool                                               bIncludeBans;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.TimeEnd = TimeEnd;
		params.TimeBegin = TimeBegin;
		params.ReportidMin = ReportidMin;
		params.bIncludeReports = bIncludeReports;
		params.bIncludeBans = bIncludeBans;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      PathAndFileName;
			class FString                                      WebCheatURL;
			class FString                                      TimeNow;
			class FString                                      TimeStarted;
			class FString                                      TimeStopped;
			class FString                                      CheatName;
			int32_t                                            GameProcessId;
			int32_t                                            CheatProcessId;
			class FString                                      CheatParam1;
			class FString                                      CheatParam2;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.PathAndFileName = PathAndFileName;
		params.WebCheatURL = WebCheatURL;
		params.TimeNow = TimeNow;
		params.TimeStarted = TimeStarted;
		params.TimeStopped = TimeStopped;
		params.CheatName = CheatName;
		params.GameProcessId = GameProcessId;
		params.CheatProcessId = CheatProcessId;
		params.CheatParam1 = CheatParam1;
		params.CheatParam2 = CheatParam2;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      SessionID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.SessionID = SessionID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      SessionID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.SessionID = SessionID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconMarketService.GetPopular");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      Language;
			int32_t                                            Rows;
			int32_t                                            Start;
			int32_t                                            FilterAppId;
			int32_t                                            ECurrency;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.Language = Language;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconMarketService.GetMarketEligibility");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconMarketService.GetAssetID");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      ListingId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.ListingId = ListingId;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			bool                                               bSynchronous;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebEconMarketService");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			bool                                               bSynchronous;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      ListingId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.ListingId = ListingId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      Language;
			int32_t                                            Rows;
			int32_t                                            Start;
			int32_t                                            FilterAppId;
			int32_t                                            ECurrency;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.Language = Language;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPopular");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.GetTradeOffersSummary");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            TimeLastVisit;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.GetTradeOffers");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			bool                                               bGetSentOffers;
			bool                                               bGetReceivedOffers;
			bool                                               bGetDescriptions;
			class FString                                      Language;
			bool                                               bActiveOnly;
			bool                                               bHistoricalOnly;
			int32_t                                            TimeHistoricalCutoff;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.bGetSentOffers = bGetSentOffers;
		params.bGetReceivedOffers = bGetReceivedOffers;
		params.bGetDescriptions = bGetDescriptions;
		params.Language = Language;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.GetTradeOffer");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      TradeOfferId;
			class FString                                      Language;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.TradeOfferId = TradeOfferId;
		params.Language = Language;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.GetTradeHistory");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            MaxTrades;
			int32_t                                            StartAfterTime;
			class FString                                      StartAfterTradeId;
			bool                                               bNavigatingBack;
			bool                                               bGetDescriptions;
			class FString                                      Language;
			bool                                               bIncludeFailed;
			bool                                               bIncludeTotal;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.MaxTrades = MaxTrades;
		params.StartAfterTime = StartAfterTime;
		params.StartAfterTradeId = StartAfterTradeId;
		params.bNavigatingBack = bNavigatingBack;
		params.bGetDescriptions = bGetDescriptions;
		params.Language = Language;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.FlushInventoryCache");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      ContextId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.ContextId = ContextId;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.FlushContextCache");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.FlushAssetAppearanceCache");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.DeclineTradeOffer");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      TradeOfferId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.TradeOfferId = TradeOfferId;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebEconService.CancelTradeOffer");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      TradeOfferId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.TradeOfferId = TradeOfferId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebEconService");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            MaxTrades;
			int32_t                                            StartAfterTime;
			class FString                                      StartAfterTradeId;
			bool                                               bNavigatingBack;
			bool                                               bGetDescriptions;
			class FString                                      Language;
			bool                                               bIncludeFailed;
			bool                                               bIncludeTotal;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.MaxTrades = MaxTrades;
		params.StartAfterTime = StartAfterTime;
		params.StartAfterTradeId = StartAfterTradeId;
		params.bNavigatingBack = bNavigatingBack;
		params.bGetDescriptions = bGetDescriptions;
		params.Language = Language;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      ContextId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.ContextId = ContextId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			bool                                               bGetSentOffers;
			bool                                               bGetReceivedOffers;
			bool                                               bGetDescriptions;
			class FString                                      Language;
			bool                                               bActiveOnly;
			bool                                               bHistoricalOnly;
			int32_t                                            TimeHistoricalCutoff;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.bGetSentOffers = bGetSentOffers;
		params.bGetReceivedOffers = bGetReceivedOffers;
		params.bGetDescriptions = bGetDescriptions;
		params.Language = Language;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      TradeOfferId;
			class FString                                      Language;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.TradeOfferId = TradeOfferId;
		params.Language = Language;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            TimeLastVisit;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      TradeOfferId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.TradeOfferId = TradeOfferId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      TradeOfferId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.TradeOfferId = TradeOfferId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.UpdateItemDefs");
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.SupportGetAssetHistory");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      AssetId;
			class FString                                      ContextId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.AssetId = AssetId;
		params.ContextId = ContextId;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.HistoryExecuteCommands");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      ContextId;
			int32_t                                            ActorId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.ContextId = ContextId;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.GetUserHistory");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      ContextId;
			int32_t                                            StartTime;
			int32_t                                            EndTime;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.ContextId = ContextId;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      Command;
			class FString                                      ContextId;
			class FString                                      Arguments;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.Command = Command;
		params.ContextId = ContextId;
		params.Arguments = Arguments;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebGameInventory");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      Command;
			class FString                                      ContextId;
			class FString                                      Arguments;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.Command = Command;
		params.ContextId = ContextId;
		params.Arguments = Arguments;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      ContextId;
			int32_t                                            StartTime;
			int32_t                                            EndTime;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.ContextId = ContextId;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      ContextId;
			int32_t                                            ActorId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.ContextId = ContextId;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      AssetId;
			class FString                                      ContextId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.AssetId = AssetId;
		params.ContextId = ContextId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.UpdateSession");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SessionID;
			int32_t                                            AppID;
			class FString                                      Title;
			class FString                                      Users;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SessionID = SessionID;
		params.AppID = AppID;
		params.Title = Title;
		params.Users = Users;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.RequestNotifications");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      Sessions;
			int32_t                                            AppID;
			class FString                                      Language;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.Sessions = Sessions;
		params.AppID = AppID;
		params.Language = Language;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			bool                                               bIncludeAllUserMessages;
			bool                                               bIncludeAuthUserMessage;
			class FString                                      Language;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.bIncludeAllUserMessages = bIncludeAllUserMessages;
		params.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
		params.Language = Language;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SessionID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SessionID = SessionID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.DeleteSession");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SessionID;
			int32_t                                            AppID;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SessionID = SessionID;
		params.AppID = AppID;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameNotificationsService.CreateSession");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Context;
			class FString                                      Title;
			class FString                                      Users;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.Context = Context;
		params.Title = Title;
		params.Users = Users;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebGameNotificationsService");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Context;
			class FString                                      Title;
			class FString                                      Users;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.Context = Context;
		params.Title = Title;
		params.Users = Users;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCreateSession");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SessionID;
			int32_t                                            AppID;
			class FString                                      Title;
			class FString                                      Users;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SessionID = SessionID;
		params.AppID = AppID;
		params.Title = Title;
		params.Users = Users;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			bool                                               bIncludeAllUserMessages;
			bool                                               bIncludeAuthUserMessage;
			class FString                                      Language;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.bIncludeAllUserMessages = bIncludeAllUserMessages;
		params.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
		params.Language = Language;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      Sessions;
			int32_t                                            AppID;
			class FString                                      Language;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.Sessions = Sessions;
		params.AppID = AppID;
		params.Language = Language;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SessionID;
			int32_t                                            AppID;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SessionID = SessionID;
		params.AppID = AppID;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SessionID;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SessionID = SessionID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.SetMemo");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      Memo;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.Memo = Memo;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.SetBanStatus");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			bool                                               bBanned;
			int32_t                                            banSeconds;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.ResetLoginToken");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.QueryLoginToken");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      LoginToken;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.LoginToken = LoginToken;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      ServerIP;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.ServerIP = ServerIP;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      ServerSteamId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.ServerSteamId = ServerSteamId;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.GetAccountPublicInfo");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.GetAccountList");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.DeleteAccount");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebGameServersService.CreateAccount");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Memo;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.Memo = Memo;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebGameServersService");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.ModifyItems");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      InputJson;
			class FString                                      SteamID;
			int32_t                                            Timestamp;
			class FString                                      Updates;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.InputJson = InputJson;
		params.SteamID = SteamID;
		params.Timestamp = Timestamp;
		params.Updates = Updates;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.GetQuantity");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			TArray<int32_t>                                    ItemdefIDs;
			bool                                               bForce;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.GetPriceSheet");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            Currency;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.GetItemDefs");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      ModifiedSince;
			TArray<int32_t>                                    ItemdefIDs;
			TArray<int32_t>                                    WorkshopIDs;
			int32_t                                            CacheMaxAgeSeconds;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.ModifiedSince = ModifiedSince;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.GetInventory");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.ExchangeItem");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			TArray<int32_t>                                    MaterialsItemID;
			TArray<int32_t>                                    MaterialsQuantity;
			class FString                                      OutputItemdefId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.MaterialsItemID = MaterialsItemID;
		params.MaterialsQuantity = MaterialsQuantity;
		params.OutputItemdefId = OutputItemdefId;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.ConsumeItem");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      ItemId;
			class FString                                      Quantity;
			class FString                                      SteamID;
			class FString                                      RequestID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.ItemId = ItemId;
		params.Quantity = Quantity;
		params.SteamID = SteamID;
		params.RequestID = RequestID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.Consolidate");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			TArray<int32_t>                                    ItemdefIDs;
			bool                                               bForce;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.AddPromoItem");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            ItemdefId;
			class FString                                      ItemPropsJson;
			class FString                                      SteamID;
			bool                                               bNotify;
			class FString                                      RequestID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.ItemdefId = ItemdefId;
		params.ItemPropsJson = ItemPropsJson;
		params.SteamID = SteamID;
		params.bNotify = bNotify;
		params.RequestID = RequestID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebInventoryService.AddItem");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			TArray<int32_t>                                    ItemdefId;
			class FString                                      ItemPropsJson;
			class FString                                      SteamID;
			bool                                               bNotify;
			class FString                                      RequestID;
			bool                                               bTradeRestriction;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.ItemdefId = ItemdefId;
		params.ItemPropsJson = ItemPropsJson;
		params.SteamID = SteamID;
		params.bNotify = bNotify;
		params.RequestID = RequestID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebInventoryService");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			TArray<int32_t>                                    ItemdefId;
			class FString                                      ItemPropsJson;
			class FString                                      SteamID;
			bool                                               bNotify;
			class FString                                      RequestID;
			bool                                               bTradeRestriction;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.ItemdefId = ItemdefId;
		params.ItemPropsJson = ItemPropsJson;
		params.SteamID = SteamID;
		params.bNotify = bNotify;
		params.RequestID = RequestID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAddItem");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            ItemdefId;
			class FString                                      ItemPropsJson;
			class FString                                      SteamID;
			bool                                               bNotify;
			class FString                                      RequestID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.ItemdefId = ItemdefId;
		params.ItemPropsJson = ItemPropsJson;
		params.SteamID = SteamID;
		params.bNotify = bNotify;
		params.RequestID = RequestID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      ItemId;
			class FString                                      Quantity;
			class FString                                      SteamID;
			class FString                                      RequestID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.ItemId = ItemId;
		params.Quantity = Quantity;
		params.SteamID = SteamID;
		params.RequestID = RequestID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			TArray<int32_t>                                    MaterialsItemID;
			TArray<int32_t>                                    MaterialsQuantity;
			class FString                                      OutputItemdefId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.MaterialsItemID = MaterialsItemID;
		params.MaterialsQuantity = MaterialsQuantity;
		params.OutputItemdefId = OutputItemdefId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetInventory");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      ModifiedSince;
			TArray<int32_t>                                    ItemdefIDs;
			TArray<int32_t>                                    WorkshopIDs;
			int32_t                                            CacheMaxAgeSeconds;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.ModifiedSince = ModifiedSince;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            Currency;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			TArray<int32_t>                                    ItemdefIDs;
			bool                                               bForce;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionConsolidate");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			TArray<int32_t>                                    ItemdefIDs;
			bool                                               bForce;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      InputJson;
			class FString                                      SteamID;
			int32_t                                            Timestamp;
			class FString                                      Updates;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.InputJson = InputJson;
		params.SteamID = SteamID;
		params.Timestamp = Timestamp;
		params.Updates = Updates;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionModifyItems");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.SetLeaderboardScore");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            LeaderbordId;
			class FString                                      SteamID;
			int32_t                                            Score;
			TArray<unsigned char>                              Details;
			class FString                                      ScoreMethod;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.LeaderbordId = LeaderbordId;
		params.SteamID = SteamID;
		params.Score = Score;
		params.Details = Details;
		params.ScoreMethod = ScoreMethod;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.ResetLeaderboard");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            LeaderboardId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            RangeStart;
			int32_t                                            RangeEnd;
			int32_t                                            LeaderboardId;
			int32_t                                            DataRequest;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		params.LeaderboardId = LeaderboardId;
		params.DataRequest = DataRequest;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Name;
			class FString                                      SortMethod;
			class FString                                      DisplayType;
			bool                                               bCreateIfNotFound;
			bool                                               bOnlyTrustedWrites;
			bool                                               bOnlyFriendsReads;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.Name = Name;
		params.SortMethod = SortMethod;
		params.DisplayType = DisplayType;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLeaderboards.DeleteLeaderboard");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Name;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.Name = Name;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebLeaderboards");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Name;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.Name = Name;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Name;
			class FString                                      SortMethod;
			class FString                                      DisplayType;
			bool                                               bCreateIfNotFound;
			bool                                               bOnlyTrustedWrites;
			bool                                               bOnlyFriendsReads;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.Name = Name;
		params.SortMethod = SortMethod;
		params.DisplayType = DisplayType;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            RangeStart;
			int32_t                                            RangeEnd;
			int32_t                                            LeaderboardId;
			int32_t                                            DataRequest;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		params.LeaderboardId = LeaderboardId;
		params.DataRequest = DataRequest;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            LeaderboardId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            LeaderboardId;
			class FString                                      SteamID;
			int32_t                                            Score;
			TArray<unsigned char>                              Details;
			class FString                                      ScoreMethod;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.LeaderboardId = LeaderboardId;
		params.SteamID = SteamID;
		params.Score = Score;
		params.Details = Details;
		params.ScoreMethod = ScoreMethod;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamIdToRemove;
			class FString                                      SteamIDLobby;
			class FString                                      InputJson;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamIdToRemove = SteamIdToRemove;
		params.SteamIDLobby = SteamIDLobby;
		params.InputJson = InputJson;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            MaxMembers;
			ESteamCoreWebLobbyType                             LobbyType;
			class FString                                      LobbyName;
			class FString                                      InputJson;
			TArray<class FString>                              SteamIdInvitedMembers;
			class FString                                      LobbyMetaData;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.MaxMembers = MaxMembers;
		params.LobbyType = LobbyType;
		params.LobbyName = LobbyName;
		params.InputJson = InputJson;
		params.SteamIdInvitedMembers = SteamIdInvitedMembers;
		params.LobbyMetaData = LobbyMetaData;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebLobbyMatchmakingService");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.RefundTxn");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      OrderId;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.OrderId = OrderId;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.QueryTxn");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      OrderId;
			class FString                                      TransId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.OrderId = OrderId;
		params.TransId = TransId;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.ProcessAgreement");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      OrderId;
			class FString                                      SteamID;
			class FString                                      AgreementId;
			int32_t                                            AppID;
			int32_t                                            Amount;
			class FString                                      Currency;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.OrderId = OrderId;
		params.SteamID = SteamID;
		params.AgreementId = AgreementId;
		params.AppID = AppID;
		params.Amount = Amount;
		params.Currency = Currency;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.MakeTransactionID");
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.InitTxn");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      OrderId;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      Language;
			class FString                                      Currency;
			class FString                                      UserSession;
			class FString                                      Ipaddress;
			TArray<int32_t>                                    ItemId;
			TArray<int32_t>                                    Quantity;
			TArray<class FString>                              Amount;
			TArray<class FString>                              Description;
			TArray<class FString>                              Category;
			TArray<int32_t>                                    AssociatedBundle;
			TArray<class FString>                              BillingType;
			TArray<class FString>                              StartDate;
			TArray<class FString>                              EndDate;
			TArray<class FString>                              Period;
			TArray<int32_t>                                    Frequency;
			TArray<class FString>                              RecurringAmt;
			TArray<int32_t>                                    BundleCount;
			TArray<int32_t>                                    BundleId;
			TArray<int32_t>                                    BundleQty;
			TArray<class FString>                              BundleDesc;
			TArray<class FString>                              BundleCategory;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.OrderId = OrderId;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.Language = Language;
		params.Currency = Currency;
		params.UserSession = UserSession;
		params.Ipaddress = Ipaddress;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.GetUserInfo");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            Ipaddress;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.GetReport");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Time;
			class FString                                      Type;
			int32_t                                            MaxResults;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.Time = Time;
		params.Type = Type;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.FinalizeTxn");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      OrderId;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.OrderId = OrderId;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.CancelAgreement");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      AgreementId;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AgreementId = AgreementId;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebMicroTxn.AdjustAgreement");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      AgreementId;
			int32_t                                            AppID;
			class FString                                      NextProcessDate;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AgreementId = AgreementId;
		params.AppID = AppID;
		params.NextProcessDate = NextProcessDate;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebMicroTxn");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      AgreementId;
			int32_t                                            AppID;
			class FString                                      NextProcessDate;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AgreementId = AgreementId;
		params.AppID = AppID;
		params.NextProcessDate = NextProcessDate;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      AgreementId;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AgreementId = AgreementId;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      OrderId;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.OrderId = OrderId;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Time;
			class FString                                      Type;
			int32_t                                            MaxResults;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.Time = Time;
		params.Type = Type;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetReport");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            Ipaddress;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      OrderId;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      Language;
			class FString                                      Currency;
			class FString                                      UserSession;
			class FString                                      Ipaddress;
			TArray<int32_t>                                    ItemId;
			TArray<int32_t>                                    Quantity;
			TArray<class FString>                              Amount;
			TArray<class FString>                              Description;
			TArray<class FString>                              Category;
			TArray<int32_t>                                    AssociatedBundle;
			TArray<class FString>                              BillingType;
			TArray<class FString>                              StartDate;
			TArray<class FString>                              EndDate;
			TArray<class FString>                              Period;
			TArray<int32_t>                                    Frequency;
			TArray<class FString>                              RecurringAmt;
			TArray<int32_t>                                    BundleCount;
			TArray<int32_t>                                    BundleId;
			TArray<int32_t>                                    BundleQty;
			TArray<class FString>                              BundleDesc;
			TArray<class FString>                              BundleCategory;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.OrderId = OrderId;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.Language = Language;
		params.Currency = Currency;
		params.UserSession = UserSession;
		params.Ipaddress = Ipaddress;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionInitTxn");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      OrderId;
			class FString                                      SteamID;
			class FString                                      AgreementId;
			int32_t                                            AppID;
			int32_t                                            Amount;
			class FString                                      Currency;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.OrderId = OrderId;
		params.SteamID = SteamID;
		params.AgreementId = AgreementId;
		params.AppID = AppID;
		params.Amount = Amount;
		params.Currency = Currency;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      OrderId;
			class FString                                      TransId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.OrderId = OrderId;
		params.TransId = TransId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      OrderId;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.OrderId = OrderId;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.IsPlayingSharedGame");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppIdPlaying;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetSteamLevel");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            Count;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetOwnedGames");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			bool                                               bIncludeAppInfo;
			bool                                               bIncludePlayedFreeGames;
			TArray<int32_t>                                    Filter;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            BadgeId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPlayerService.GetBadges");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebPlayerService");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            Count;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			bool                                               bIncludeAppInfo;
			bool                                               bIncludePlayedFreeGames;
			TArray<int32_t>                                    Filter;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetBadges");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            BadgeId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppIdPlaying;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.UpdateTags");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      PublishedFileID;
			int32_t                                            AppID;
			class FString                                      AddTags;
			class FString                                      RemoveTags;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.PublishedFileID = PublishedFileID;
		params.AppID = AppID;
		params.AddTags = AddTags;
		params.RemoveTags = RemoveTags;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      PublishedFileID;
			int32_t                                            AppID;
			bool                                               bIncompatible;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.PublishedFileID = PublishedFileID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.UpdateBanStatus");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      PublishedFileID;
			int32_t                                            AppID;
			bool                                               bBanned;
			class FString                                      Reason;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.PublishedFileID = PublishedFileID;
		params.AppID = AppID;
		params.bBanned = bBanned;
		params.Reason = Reason;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      PublishedFileID;
			int32_t                                            AppID;
			class FString                                      MetaData;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.PublishedFileID = PublishedFileID;
		params.AppID = AppID;
		params.MetaData = MetaData;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedFileService.QueryFiles");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            QueryType;
			int32_t                                            Page;
			class FString                                      Cursor;
			int32_t                                            NumPerPage;
			int32_t                                            CreatorAppID;
			int32_t                                            AppID;
			class FString                                      RequiredTags;
			class FString                                      ExcludedTags;
			bool                                               bMatchAllTags;
			class FString                                      RequiredFlags;
			class FString                                      OmittedFlags;
			class FString                                      SearchText;
			int32_t                                            FileType;
			class FString                                      ChildPublishedFileId;
			int32_t                                            Days;
			bool                                               bIncludeRecentVotesOnly;
			int32_t                                            CacheMaxAgeSeconds;
			int32_t                                            Language;
			class FString                                      RequiredKvTags;
			bool                                               bTotalOnly;
			bool                                               bIDsOnly;
			bool                                               bReturnVoteData;
			bool                                               bReturnTags;
			bool                                               bReturnKvTags;
			bool                                               bReturnPreviews;
			bool                                               bReturnChildren;
			bool                                               bReturnShortDescription;
			bool                                               bReturnForSaleData;
			bool                                               bReturnMetadata;
			int32_t                                            ReturnPlaytimeStats;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.QueryType = QueryType;
		params.Page = Page;
		params.Cursor = Cursor;
		params.NumPerPage = NumPerPage;
		params.CreatorAppID = CreatorAppID;
		params.AppID = AppID;
		params.RequiredTags = RequiredTags;
		params.ExcludedTags = ExcludedTags;
		params.bMatchAllTags = bMatchAllTags;
		params.RequiredFlags = RequiredFlags;
		params.OmittedFlags = OmittedFlags;
		params.SearchText = SearchText;
		params.FileType = FileType;
		params.ChildPublishedFileId = ChildPublishedFileId;
		params.Days = Days;
		params.bIncludeRecentVotesOnly = bIncludeRecentVotesOnly;
		params.CacheMaxAgeSeconds = CacheMaxAgeSeconds;
		params.Language = Language;
		params.RequiredKvTags = RequiredKvTags;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebPublishedFileService");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            StartId;
			bool                                               bHasAppAdminAccess;
			int32_t                                            FileType;
			TArray<class FString>                              Tag;
			TArray<class FString>                              UserTag;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            StartId;
			int32_t                                            Count;
			bool                                               bHasAppAdminAccess;
			int32_t                                            FileType;
			TArray<class FString>                              Tag;
			TArray<class FString>                              UserTag;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            StartId;
			int32_t                                            Count;
			bool                                               bHasAppAdminAccess;
			int32_t                                            FileType;
			int32_t                                            Days;
			TArray<class FString>                              Tag;
			TArray<class FString>                              UserTag;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            StartId;
			int32_t                                            Count;
			bool                                               bHasAppAdminAccess;
			int32_t                                            FileType;
			TArray<class FString>                              Tag;
			TArray<class FString>                              UserTag;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamPublishedItemSearch");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            StartId;
			int32_t                                            Count;
			bool                                               bHasAppAdminAccess;
			int32_t                                            FileType;
			TArray<class FString>                              Tag;
			TArray<class FString>                              UserTag;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            StartId;
			int32_t                                            Count;
			bool                                               bHasAppAdminAccess;
			int32_t                                            FileType;
			int32_t                                            Days;
			TArray<class FString>                              Tag;
			TArray<class FString>                              UserTag;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            StartId;
			int32_t                                            Count;
			bool                                               bHasAppAdminAccess;
			int32_t                                            FileType;
			TArray<class FString>                              Tag;
			TArray<class FString>                              UserTag;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            StartId;
			bool                                               bHasAppAdminAccess;
			int32_t                                            FileType;
			TArray<class FString>                              Tag;
			TArray<class FString>                              UserTag;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			TArray<class FString>                              PublishedFileIDs;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			TArray<class FString>                              PublishedFileIDs;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebPublishedItemVoting");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			TArray<class FString>                              PublishedFileIDs;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			TArray<class FString>                              PublishedFileIDs;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      PublishedFileIDs;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.PublishedFileIDs = PublishedFileIDs;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      PublishedFileIDs;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.PublishedFileIDs = PublishedFileIDs;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      UGCID;
			int32_t                                            AppID;
			bool                                               bUsed;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.UGCID = UGCID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      UGCID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.UGCID = UGCID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      PublishedFileIDs;
		} params;
		params.Callback = Callback;
		params.PublishedFileIDs = PublishedFileIDs;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.GetCollectionDetails");
		
		struct
		{
			class FScriptDelegate                              Callback;
			TArray<class FString>                              PublishedFileIDs;
		} params;
		params.Callback = Callback;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            ListType;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebRemoteStorage");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			int32_t                                            ListType;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<class FString>                              PublishedFileIDs;
		} params;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      PublishedFileIDs;
		} params;
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
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionGetPublishedFileDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      UGCID;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.UGCID = UGCID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      UGCID;
			int32_t                                            AppID;
			bool                                               bUsed;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.UGCID = UGCID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      PublishedFileIDs;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionSubscribePublishedFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      PublishedFileIDs;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
	 * 		Name   -> PredefindFunction USteamCoreWebAsyncActionUnsubscribePublishedFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamCommunity.ReportAbuse");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamIdActor;
			class FString                                      SteamIdTarget;
			int32_t                                            AppID;
			int32_t                                            AbuseType;
			int32_t                                            ContentType;
			class FString                                      Description;
			class FString                                      Gid;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamIdActor = SteamIdActor;
		params.SteamIdTarget = SteamIdTarget;
		params.AppID = AppID;
		params.AbuseType = AbuseType;
		params.ContentType = ContentType;
		params.Description = Description;
		params.Gid = Gid;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamCommunity");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamIdActor;
			class FString                                      SteamIdTarget;
			int32_t                                            AppID;
			int32_t                                            AbuseType;
			int32_t                                            ContentType;
			class FString                                      Description;
			class FString                                      Gid;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamIdActor = SteamIdActor;
		params.SteamIdTarget = SteamIdTarget;
		params.AppID = AppID;
		params.AbuseType = AbuseType;
		params.ContentType = ContentType;
		params.Description = Description;
		params.Gid = Gid;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.StartTrade");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamIDd;
			class FString                                      SteamId2;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamIDd = SteamIDd;
		params.SteamId2 = SteamId2;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.StartAssetTransaction");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      AssetId;
			int32_t                                            AssetQuantity;
			class FString                                      Currency;
			class FString                                      Language;
			class FString                                      Ipaddress;
			class FString                                      Referer;
			bool                                               bClientAuth;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.AssetId = AssetId;
		params.AssetQuantity = AssetQuantity;
		params.Currency = Currency;
		params.Language = Language;
		params.Ipaddress = Ipaddress;
		params.Referer = Referer;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.GetMarketPrices");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      ContextId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.ContextId = ContextId;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.GetAssetPrices");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Currency;
			class FString                                      Language;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.Currency = Currency;
		params.Language = Language;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Language;
			int32_t                                            ClassCount;
			class FString                                      ClassId;
			class FString                                      InstanceID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.Language = Language;
		params.ClassCount = ClassCount;
		params.ClassId = ClassId;
		params.InstanceID = InstanceID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      TxnId;
			class FString                                      Language;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.TxnId = TxnId;
		params.Language = Language;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamEconomy.CanTrade");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      TargetId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.TargetId = TargetId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamEconomy");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      TargetId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.TargetId = TargetId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCanTrade");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      TxnId;
			class FString                                      Language;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.TxnId = TxnId;
		params.Language = Language;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Language;
			int32_t                                            ClassCount;
			class FString                                      ClassId;
			class FString                                      InstanceID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.Language = Language;
		params.ClassCount = ClassCount;
		params.ClassId = ClassId;
		params.InstanceID = InstanceID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Currency;
			class FString                                      Language;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.Currency = Currency;
		params.Language = Language;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      ContextId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.ContextId = ContextId;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamID;
			class FString                                      AssetId;
			int32_t                                            AssetQuantity;
			class FString                                      Currency;
			class FString                                      Language;
			class FString                                      Ipaddress;
			class FString                                      Referer;
			bool                                               bClientAuth;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamID = SteamID;
		params.AssetId = AssetId;
		params.AssetQuantity = AssetQuantity;
		params.Currency = Currency;
		params.Language = Language;
		params.Ipaddress = Ipaddress;
		params.Referer = Referer;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      SteamId1;
			class FString                                      SteamId2;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.SteamId1 = SteamId1;
		params.SteamId2 = SteamId2;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionStartTrade");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      GameID;
			int32_t                                            AppID;
			class FString                                      RangeStart;
			class FString                                      RangeEnd;
			int32_t                                            MaxResults;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.GameID = GameID;
		params.AppID = AppID;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamGameServerStats");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            MaxLength;
			TArray<class FString>                              Feeds;
			int32_t                                            EndDate;
			int32_t                                            Count;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamNews.GetNewsForApp");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            AppID;
			int32_t                                            MaxLength;
			TArray<class FString>                              Feeds;
			int32_t                                            EndDate;
			int32_t                                            Count;
		} params;
		params.Callback = Callback;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamNews");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			int32_t                                            MaxLength;
			TArray<class FString>                              Feeds;
			int32_t                                            EndDate;
			int32_t                                            Count;
		} params;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			int32_t                                            MaxLength;
			TArray<class FString>                              Feeds;
			int32_t                                            EndDate;
			int32_t                                            Count;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.ResolveVanityURL");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      VanityURL;
			EVanityUrlType                                     URLType;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.VanityURL = VanityURL;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GrantPackage");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            PackageId;
			class FString                                      Ipaddress;
			class FString                                      ThirdPartyKey;
			int32_t                                            ThirdPartyAppId;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.PackageId = PackageId;
		params.Ipaddress = Ipaddress;
		params.ThirdPartyKey = ThirdPartyKey;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetUserGroupList");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      PackageRowVersion;
			class FString                                      CDKeyRowVersion;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.PackageRowVersion = PackageRowVersion;
		params.CDKeyRowVersion = CDKeyRowVersion;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetPlayerSummaries");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			TArray<class FString>                              SteamIDs;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetPlayerBans");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			TArray<class FString>                              SteamIDs;
		} params;
		params.Callback = Callback;
		params.Key = Key;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetFriendList");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      Relationship;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.Relationship = Relationship;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.GetAppPriceInfo");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			TArray<int32_t>                                    AppIDs;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebSteamUser.CheckAppOwnership");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebSteamUser");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			TArray<int32_t>                                    AppIDs;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			class FString                                      Relationship;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.Relationship = Relationship;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			TArray<class FString>                              SteamIDs;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			TArray<class FString>                              SteamIDs;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      PackageRowVersion;
			class FString                                      CDKeyRowVersion;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.PackageRowVersion = PackageRowVersion;
		params.CDKeyRowVersion = CDKeyRowVersion;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            PackageId;
			class FString                                      Ipaddress;
			class FString                                      ThirdPartyKey;
			int32_t                                            ThirdPartyAppId;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.PackageId = PackageId;
		params.Ipaddress = Ipaddress;
		params.ThirdPartyKey = ThirdPartyKey;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      VanityURL;
			EVanityUrlType                                     URLType;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.VanityURL = VanityURL;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserAuth.AuthenticateUserTicket");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Ticket;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.AppID = AppID;
		params.Ticket = Ticket;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserAuth.AuthenticateUser");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      SteamID;
			TArray<unsigned char>                              SessionKey;
			TArray<unsigned char>                              EncryptedLoginKey;
		} params;
		params.Callback = Callback;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebUserAuth");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      SteamID;
			TArray<unsigned char>                              SessionKey;
			TArray<unsigned char>                              EncryptedLoginKey;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			int32_t                                            AppID;
			class FString                                      Ticket;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.AppID = AppID;
		params.Ticket = Ticket;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.SetUserStatsForGame");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			TArray<class FString>                              Names;
			TArray<int32_t>                                    Values;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetUserStatsForGame");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetSchemaForGame");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      Language;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.Language = Language;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetPlayerAchievements");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      Language;
		} params;
		params.Callback = Callback;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.Language = Language;
		
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetGlobalStatsForGame");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            AppID;
			TArray<class FString>                              Names;
			int32_t                                            StartDate;
			int32_t                                            EndDate;
		} params;
		params.Callback = Callback;
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      GameID;
		} params;
		params.Callback = Callback;
		params.GameID = GameID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.WebUserStats");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      GameID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.GameID = GameID;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			TArray<class FString>                              Names;
			int32_t                                            StartDate;
			int32_t                                            EndDate;
		} params;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
		} params;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      Language;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.Language = Language;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			class FString                                      Language;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
		params.AppID = AppID;
		params.Language = Language;
		
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame");
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
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Key;
			class FString                                      SteamID;
			int32_t                                            AppID;
			TArray<class FString>                              Names;
			TArray<int32_t>                                    Values;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Key = Key;
		params.SteamID = SteamID;
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
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame");
		return ptr;
	}

}


