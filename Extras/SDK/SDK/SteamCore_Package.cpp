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
	 * 		Name   -> PredefindFunction USteamCoreSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.AppList.GetNumInstalledApps
	 * 		Flags  -> ()
	 */
	int32_t UAppList::GetNumInstalledApps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetNumInstalledApps");
		
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
	 * 		Name   -> Function SteamCore.AppList.GetInstalledApps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    AppIDs                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxAppIDs                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAppList::GetInstalledApps(TArray<int32_t>* AppIDs, int32_t MaxAppIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetInstalledApps");
		
		struct
		{
			TArray<int32_t>                                    AppIDs;
			int32_t                                            MaxAppIDs;
		} params;
		params.MaxAppIDs = MaxAppIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppIDs != nullptr)
			*AppIDs = params.AppIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.AppList.GetAppName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAppList::GetAppName(int32_t AppID, class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetAppName");
		
		struct
		{
			int32_t                                            AppID;
			class FString                                      Name;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.AppList.GetAppInstallDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Directory                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAppList::GetAppInstallDir(int32_t AppID, class FString* Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetAppInstallDir");
		
		struct
		{
			int32_t                                            AppID;
			class FString                                      Directory;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Directory != nullptr)
			*Directory = params.Directory;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.AppList.GetAppBuildId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAppList::GetAppBuildId(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.AppList.GetAppBuildId");
		
		struct
		{
			int32_t                                            AppID;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAppList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.AppList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.UninstallDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UApps::UninstallDLC(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.UninstallDLC");
		
		struct
		{
			int32_t                                            AppID;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.MarkContentCorrupt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMissingFilesOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UApps::MarkContentCorrupt(bool bMissingFilesOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.MarkContentCorrupt");
		
		struct
		{
			bool                                               bMissingFilesOnly;
		} params;
		params.bMissingFilesOnly = bMissingFilesOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.InstallDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UApps::InstallDLC(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.InstallDLC");
		
		struct
		{
			int32_t                                            AppID;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.GetLaunchQueryParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UApps::GetLaunchQueryParam(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetLaunchQueryParam");
		
		struct
		{
			class FString                                      Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.GetLaunchCommandLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CommandLine                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UApps::GetLaunchCommandLine(class FString* CommandLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetLaunchCommandLine");
		
		struct
		{
			class FString                                      CommandLine;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CommandLine != nullptr)
			*CommandLine = params.CommandLine;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.GetInstalledDepots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxDepots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Depots                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UApps::GetInstalledDepots(int32_t AppID, int32_t MaxDepots, TArray<int32_t>* Depots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetInstalledDepots");
		
		struct
		{
			int32_t                                            AppID;
			int32_t                                            MaxDepots;
			TArray<int32_t>                                    Depots;
		} params;
		params.AppID = AppID;
		params.MaxDepots = MaxDepots;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Depots != nullptr)
			*Depots = params.Depots;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.GetFileDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UApps::GetFileDetails(const class FScriptDelegate& Callback, const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetFileDetails");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Filename;
		} params;
		params.Callback = Callback;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.GetEarliestPurchaseUnixTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UApps::GetEarliestPurchaseUnixTime(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetEarliestPurchaseUnixTime");
		
		struct
		{
			int32_t                                            AppID;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.GetDlcDownloadProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesDownloaded                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesTotal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UApps::GetDlcDownloadProgress(int32_t AppID, int32_t* BytesDownloaded, int32_t* BytesTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetDlcDownloadProgress");
		
		struct
		{
			int32_t                                            AppID;
			int32_t                                            BytesDownloaded;
			int32_t                                            BytesTotal;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BytesDownloaded != nullptr)
			*BytesDownloaded = params.BytesDownloaded;
		if (BytesTotal != nullptr)
			*BytesTotal = params.BytesTotal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.GetDLCCount
	 * 		Flags  -> ()
	 */
	int32_t UApps::GetDLCCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetDLCCount");
		
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
	 * 		Name   -> Function SteamCore.Apps.GetCurrentGameLanguage
	 * 		Flags  -> ()
	 */
	class FString UApps::GetCurrentGameLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetCurrentGameLanguage");
		
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
	 * 		Name   -> Function SteamCore.Apps.GetCurrentBetaName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UApps::GetCurrentBetaName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetCurrentBetaName");
		
		struct
		{
			class FString                                      Name;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.GetAvailableGameLanguages
	 * 		Flags  -> ()
	 */
	class FString UApps::GetAvailableGameLanguages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetAvailableGameLanguages");
		
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
	 * 		Name   -> Function SteamCore.Apps.GetAppOwner
	 * 		Flags  -> ()
	 */
	struct FSteamID UApps::GetAppOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetAppOwner");
		
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
	 * 		Name   -> Function SteamCore.Apps.GetAppInstallDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Folder                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UApps::GetAppInstallDir(int32_t AppID, class FString* Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetAppInstallDir");
		
		struct
		{
			int32_t                                            AppID;
			class FString                                      Folder;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Folder != nullptr)
			*Folder = params.Folder;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.GetAppBuildId
	 * 		Flags  -> ()
	 */
	int32_t UApps::GetAppBuildId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.GetAppBuildId");
		
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
	 * 		Name   -> Function SteamCore.Apps.BIsVACBanned
	 * 		Flags  -> ()
	 */
	bool UApps::BIsVACBanned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsVACBanned");
		
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
	 * 		Name   -> Function SteamCore.Apps.BIsTimedTrial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SecondsAllowed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SecondsPlayed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UApps::BIsTimedTrial(int32_t* SecondsAllowed, int32_t* SecondsPlayed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsTimedTrial");
		
		struct
		{
			int32_t                                            SecondsAllowed;
			int32_t                                            SecondsPlayed;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SecondsAllowed != nullptr)
			*SecondsAllowed = params.SecondsAllowed;
		if (SecondsPlayed != nullptr)
			*SecondsPlayed = params.SecondsPlayed;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.BIsSubscribedFromFreeWeekend
	 * 		Flags  -> ()
	 */
	bool UApps::BIsSubscribedFromFreeWeekend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsSubscribedFromFreeWeekend");
		
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
	 * 		Name   -> Function SteamCore.Apps.BIsSubscribedFromFamilySharing
	 * 		Flags  -> ()
	 */
	bool UApps::BIsSubscribedFromFamilySharing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsSubscribedFromFamilySharing");
		
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
	 * 		Name   -> Function SteamCore.Apps.BIsSubscribedApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UApps::BIsSubscribedApp(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsSubscribedApp");
		
		struct
		{
			int32_t                                            AppID;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.BIsSubscribed
	 * 		Flags  -> ()
	 */
	bool UApps::BIsSubscribed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsSubscribed");
		
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
	 * 		Name   -> Function SteamCore.Apps.BIsLowViolence
	 * 		Flags  -> ()
	 */
	bool UApps::BIsLowViolence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsLowViolence");
		
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
	 * 		Name   -> Function SteamCore.Apps.BIsDlcInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UApps::BIsDlcInstalled(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsDlcInstalled");
		
		struct
		{
			int32_t                                            AppID;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.BIsCybercafe
	 * 		Flags  -> ()
	 */
	bool UApps::BIsCybercafe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsCybercafe");
		
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
	 * 		Name   -> Function SteamCore.Apps.BIsAppInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UApps::BIsAppInstalled(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BIsAppInstalled");
		
		struct
		{
			int32_t                                            AppID;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Apps.BGetDLCDataByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DLC                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAvailable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UApps::BGetDLCDataByIndex(int32_t DLC, int32_t* AppID, bool* bAvailable, class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Apps.BGetDLCDataByIndex");
		
		struct
		{
			int32_t                                            DLC;
			int32_t                                            AppID;
			bool                                               bAvailable;
			class FString                                      Name;
		} params;
		params.DLC = DLC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppID != nullptr)
			*AppID = params.AppID;
		if (bAvailable != nullptr)
			*bAvailable = params.bAvailable;
		if (Name != nullptr)
			*Name = params.Name;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UApps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UApps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Apps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAsyncAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAsyncAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreAsyncAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFileDetailsResult                          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreAppsAsyncActionGetFileDetails::HandleCallback(const struct FFileDetailsResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback");
		
		struct
		{
			struct FFileDetailsResult                          Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreAppsAsyncActionGetFileDetails* USteamCoreAppsAsyncActionGetFileDetails::GetFileDetailsAsync(class UObject* WorldContextObject, const class FString& Filename, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Filename;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Filename = Filename;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetFileDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetFileDetails::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreAppsAsyncActionGetFileDetails");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASteamCoreGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASteamCoreGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.SetRichPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::SetRichPresence(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetRichPresence");
		
		struct
		{
			class FString                                      Key;
			class FString                                      Value;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.SetPlayedWith
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUserPlayedWith                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::SetPlayedWith(const struct FSteamID& SteamIDUserPlayedWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetPlayedWith");
		
		struct
		{
			struct FSteamID                                    SteamIDUserPlayedWith;
		} params;
		params.SteamIDUserPlayedWith = SteamIDUserPlayedWith;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.SetPersonaName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::SetPersonaName(const class FScriptDelegate& Callback, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetPersonaName");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      Name;
		} params;
		params.Callback = Callback;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.SetListenForFriendsMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInterceptEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetListenForFriendsMessages");
		
		struct
		{
			bool                                               bInterceptEnabled;
		} params;
		params.bInterceptEnabled = bInterceptEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.SetInGameVoiceSpeaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSpeaking                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::SetInGameVoiceSpeaking(const struct FSteamID& SteamIDUser, bool bSpeaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SetInGameVoiceSpeaking");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			bool                                               bSpeaking;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.bSpeaking = bSpeaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.SendClanChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClanChat                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::SendClanChatMessage(const struct FSteamID& SteamIDClanChat, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.SendClanChatMessage");
		
		struct
		{
			struct FSteamID                                    SteamIDClanChat;
			class FString                                      Text;
		} params;
		params.SteamIDClanChat = SteamIDClanChat;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.RequestUserInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRequireNameOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::RequestUserInformation(const struct FSteamID& SteamIDUser, bool bRequireNameOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.RequestUserInformation");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			bool                                               bRequireNameOnly;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.bRequireNameOnly = bRequireNameOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.RequestFriendRichPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::RequestFriendRichPresence(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.RequestFriendRichPresence");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.RequestClanOfficerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::RequestClanOfficerList(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.RequestClanOfficerList");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamIDClan;
		} params;
		params.Callback = Callback;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.ReplyToFriendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MsgToSend                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::ReplyToFriendMessage(const struct FSteamID& SteamIDFriend, const class FString& MsgToSend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ReplyToFriendMessage");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
			class FString                                      MsgToSend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		params.MsgToSend = MsgToSend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.RegisterProtocolInOverlayBrowser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Protocol                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::RegisterProtocolInOverlayBrowser(const class FString& Protocol)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.RegisterProtocolInOverlayBrowser");
		
		struct
		{
			class FString                                      Protocol;
		} params;
		params.Protocol = Protocol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.OpenClanChatWindowInSteam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClanChat                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::OpenClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.OpenClanChatWindowInSteam");
		
		struct
		{
			struct FSteamID                                    SteamIDClanChat;
		} params;
		params.SteamIDClanChat = SteamIDClanChat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.LeaveClanChatRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::LeaveClanChatRoom(const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.LeaveClanChatRoom");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
		} params;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.JoinClanChatRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::JoinClanChatRoom(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.JoinClanChatRoom");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamIDClan;
		} params;
		params.Callback = Callback;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.IsUserInSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDSource                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::IsUserInSource(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsUserInSource");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			struct FSteamID                                    SteamIDSource;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.SteamIDSource = SteamIDSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.IsFollowing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::IsFollowing(const class FScriptDelegate& Callback, const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsFollowing");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamID;
		} params;
		params.Callback = Callback;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.IsClanPublic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::IsClanPublic(const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsClanPublic");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
		} params;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.IsClanOfficialGameGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::IsClanOfficialGameGroup(const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsClanOfficialGameGroup");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
		} params;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.IsClanChatWindowOpenInSteam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClanChat                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::IsClanChatWindowOpenInSteam(const struct FSteamID& SteamIDClanChat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsClanChatWindowOpenInSteam");
		
		struct
		{
			struct FSteamID                                    SteamIDClanChat;
		} params;
		params.SteamIDClanChat = SteamIDClanChat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.IsClanChatAdmin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClanChat                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::IsClanChatAdmin(const struct FSteamID& SteamIDClanChat, const struct FSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.IsClanChatAdmin");
		
		struct
		{
			struct FSteamID                                    SteamIDClanChat;
			struct FSteamID                                    SteamIDUser;
		} params;
		params.SteamIDClanChat = SteamIDClanChat;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.InviteUserToGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConnectString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::InviteUserToGame(const struct FSteamID& SteamIDFriend, const class FString& ConnectString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.InviteUserToGame");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
			class FString                                      ConnectString;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		params.ConnectString = ConnectString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.HasFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ESteamFriendFlags>                          Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UFriends::HasFriend(const struct FSteamID& SteamIDFriend, TArray<ESteamFriendFlags> Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.HasFriend");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
			TArray<ESteamFriendFlags>                          Flags;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetUserRestrictions
	 * 		Flags  -> ()
	 */
	TArray<ESteamUserRestriction> UFriends::GetUserRestrictions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetUserRestrictions");
		
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
	 * 		Name   -> Function SteamCore.Friends.GetSmallFriendAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UFriends::GetSmallFriendAvatar(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetSmallFriendAvatar");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetPlayerNickname_Pure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDPlayer                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFriends::GetPlayerNickname_Pure(const struct FSteamID& SteamIDPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPlayerNickname_Pure");
		
		struct
		{
			struct FSteamID                                    SteamIDPlayer;
		} params;
		params.SteamIDPlayer = SteamIDPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetPlayerNickname
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDPlayer                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFriends::GetPlayerNickname(const struct FSteamID& SteamIDPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPlayerNickname");
		
		struct
		{
			struct FSteamID                                    SteamIDPlayer;
		} params;
		params.SteamIDPlayer = SteamIDPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetPersonaState_Pure
	 * 		Flags  -> ()
	 */
	ESteamPersonaState UFriends::GetPersonaState_Pure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPersonaState_Pure");
		
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
	 * 		Name   -> Function SteamCore.Friends.GetPersonaState
	 * 		Flags  -> ()
	 */
	ESteamPersonaState UFriends::GetPersonaState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPersonaState");
		
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
	 * 		Name   -> Function SteamCore.Friends.GetPersonaName_Pure
	 * 		Flags  -> ()
	 */
	class FString UFriends::GetPersonaName_Pure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPersonaName_Pure");
		
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
	 * 		Name   -> Function SteamCore.Friends.GetPersonaName
	 * 		Flags  -> ()
	 */
	class FString UFriends::GetPersonaName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetPersonaName");
		
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
	 * 		Name   -> Function SteamCore.Friends.GetMediumFriendAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UFriends::GetMediumFriendAvatar(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetMediumFriendAvatar");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetLargeFriendAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UFriends::GetLargeFriendAvatar(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetLargeFriendAvatar");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendSteamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetFriendSteamLevel(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendSteamLevel");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendsGroupName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamFriendsGroupID                        FriendsGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFriends::GetFriendsGroupName(const struct FSteamFriendsGroupID& FriendsGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupName");
		
		struct
		{
			struct FSteamFriendsGroupID                        FriendsGroupID;
		} params;
		params.FriendsGroupID = FriendsGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendsGroupMembersList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamFriendsGroupID                        FriendsGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamID>                            SteamIDMembers                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MembersCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::GetFriendsGroupMembersList(const struct FSteamFriendsGroupID& FriendsGroupID, TArray<struct FSteamID>* SteamIDMembers, int32_t MembersCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupMembersList");
		
		struct
		{
			struct FSteamFriendsGroupID                        FriendsGroupID;
			TArray<struct FSteamID>                            SteamIDMembers;
			int32_t                                            MembersCount;
		} params;
		params.FriendsGroupID = FriendsGroupID;
		params.MembersCount = MembersCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamIDMembers != nullptr)
			*SteamIDMembers = params.SteamIDMembers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendsGroupMembersCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamFriendsGroupID                        FriendsGroupID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetFriendsGroupMembersCount(const struct FSteamFriendsGroupID& FriendsGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupMembersCount");
		
		struct
		{
			struct FSteamFriendsGroupID                        FriendsGroupID;
		} params;
		params.FriendsGroupID = FriendsGroupID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendsGroupIDByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FriendGroup                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamFriendsGroupID UFriends::GetFriendsGroupIDByIndex(int32_t FriendGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupIDByIndex");
		
		struct
		{
			int32_t                                            FriendGroup;
		} params;
		params.FriendGroup = FriendGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendsGroupCount
	 * 		Flags  -> ()
	 */
	int32_t UFriends::GetFriendsGroupCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendsGroupCount");
		
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
	 * 		Name   -> Function SteamCore.Friends.GetFriendRichPresenceKeyCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetFriendRichPresenceKeyCount(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendRichPresenceKeyCount");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendRichPresenceKeyByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFriends::GetFriendRichPresenceKeyByIndex(const struct FSteamID& SteamIDFriend, int32_t Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendRichPresenceKeyByIndex");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
			int32_t                                            Key;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendRichPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFriends::GetFriendRichPresence(const struct FSteamID& SteamIDFriend, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendRichPresence");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
			class FString                                      Key;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendRelationship
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamFriendRelationship UFriends::GetFriendRelationship(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendRelationship");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendPersonaState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamPersonaState UFriends::GetFriendPersonaState(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendPersonaState");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendPersonaNameHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PersonaName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFriends::GetFriendPersonaNameHistory(const struct FSteamID& SteamIDFriend, int32_t PersonaName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendPersonaNameHistory");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
			int32_t                                            PersonaName;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		params.PersonaName = PersonaName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendPersonaName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFriends::GetFriendPersonaName(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendPersonaName");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MessageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamChatEntryType                                ChatEntryType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetFriendMessage(const struct FSteamID& SteamIDFriend, int32_t MessageID, class FString* Text, ESteamChatEntryType* ChatEntryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendMessage");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
			int32_t                                            MessageID;
			class FString                                      Text;
			ESteamChatEntryType                                ChatEntryType;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		params.MessageID = MessageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (ChatEntryType != nullptr)
			*ChatEntryType = params.ChatEntryType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendGamePlayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamGameID                                GameID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameIP                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectionPort                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::GetFriendGamePlayed(const struct FSteamID& SteamIDFriend, struct FSteamGameID* GameID, class FString* GameIP, int32_t* ConnectionPort, int32_t* QueryPort, struct FSteamID* SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendGamePlayed");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
			struct FSteamGameID                                GameID;
			class FString                                      GameIP;
			int32_t                                            ConnectionPort;
			int32_t                                            QueryPort;
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameID != nullptr)
			*GameID = params.GameID;
		if (GameIP != nullptr)
			*GameIP = params.GameIP;
		if (ConnectionPort != nullptr)
			*ConnectionPort = params.ConnectionPort;
		if (QueryPort != nullptr)
			*QueryPort = params.QueryPort;
		if (SteamIDLobby != nullptr)
			*SteamIDLobby = params.SteamIDLobby;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendFromSourceByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDSource                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Ifriend                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UFriends::GetFriendFromSourceByIndex(const struct FSteamID& SteamIDSource, int32_t Ifriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendFromSourceByIndex");
		
		struct
		{
			struct FSteamID                                    SteamIDSource;
			int32_t                                            Ifriend;
		} params;
		params.SteamIDSource = SteamIDSource;
		params.Ifriend = Ifriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendCountFromSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDSource                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetFriendCountFromSource(const struct FSteamID& SteamIDSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendCountFromSource");
		
		struct
		{
			struct FSteamID                                    SteamIDSource;
		} params;
		params.SteamIDSource = SteamIDSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ESteamFriendFlags>                          Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetFriendCount(TArray<ESteamFriendFlags> Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendCount");
		
		struct
		{
			TArray<ESteamFriendFlags>                          Flags;
		} params;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendCoplayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetFriendCoplayTime(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendCoplayTime");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendCoplayGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetFriendCoplayGame(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendCoplayGame");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFriendByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Ifriend                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ESteamFriendFlags>                          Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UFriends::GetFriendByIndex(int32_t Ifriend, TArray<ESteamFriendFlags> Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFriendByIndex");
		
		struct
		{
			int32_t                                            Ifriend;
			TArray<ESteamFriendFlags>                          Flags;
		} params;
		params.Ifriend = Ifriend;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetFollowerCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::GetFollowerCount(const class FScriptDelegate& Callback, const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetFollowerCount");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamID;
		} params;
		params.Callback = Callback;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetCoplayFriendCount
	 * 		Flags  -> ()
	 */
	int32_t UFriends::GetCoplayFriendCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetCoplayFriendCount");
		
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
	 * 		Name   -> Function SteamCore.Friends.GetCoplayFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CoplayFriend                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UFriends::GetCoplayFriend(int32_t CoplayFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetCoplayFriend");
		
		struct
		{
			int32_t                                            CoplayFriend;
		} params;
		params.CoplayFriend = CoplayFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetClanTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFriends::GetClanTag(const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanTag");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
		} params;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetClanOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UFriends::GetClanOwner(const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanOwner");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
		} params;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetClanOfficerCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetClanOfficerCount(const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanOfficerCount");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
		} params;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetClanOfficerByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Officer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UFriends::GetClanOfficerByIndex(const struct FSteamID& SteamIDClan, int32_t Officer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanOfficerByIndex");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
			int32_t                                            Officer;
		} params;
		params.SteamIDClan = SteamIDClan;
		params.Officer = Officer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetClanName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFriends::GetClanName(const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanName");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
		} params;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetClanCount
	 * 		Flags  -> ()
	 */
	int32_t UFriends::GetClanCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanCount");
		
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
	 * 		Name   -> Function SteamCore.Friends.GetClanChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClanChat                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MessageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamChatEntryType                                ChatEntryType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDChatter                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetClanChatMessage(const struct FSteamID& SteamIDClanChat, int32_t MessageID, class FString* Text, ESteamChatEntryType* ChatEntryType, struct FSteamID* SteamIDChatter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanChatMessage");
		
		struct
		{
			struct FSteamID                                    SteamIDClanChat;
			int32_t                                            MessageID;
			class FString                                      Text;
			ESteamChatEntryType                                ChatEntryType;
			struct FSteamID                                    SteamIDChatter;
		} params;
		params.SteamIDClanChat = SteamIDClanChat;
		params.MessageID = MessageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (ChatEntryType != nullptr)
			*ChatEntryType = params.ChatEntryType;
		if (SteamIDChatter != nullptr)
			*SteamIDChatter = params.SteamIDChatter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetClanChatMemberCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFriends::GetClanChatMemberCount(const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanChatMemberCount");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
		} params;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetClanByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Clan                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UFriends::GetClanByIndex(int32_t Clan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanByIndex");
		
		struct
		{
			int32_t                                            Clan;
		} params;
		params.Clan = Clan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetClanActivityCounts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Online                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InGame                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Chatting                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::GetClanActivityCounts(const struct FSteamID& SteamIDClan, int32_t* Online, int32_t* InGame, int32_t* Chatting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetClanActivityCounts");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
			int32_t                                            Online;
			int32_t                                            InGame;
			int32_t                                            Chatting;
		} params;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Online != nullptr)
			*Online = params.Online;
		if (InGame != nullptr)
			*InGame = params.InGame;
		if (Chatting != nullptr)
			*Chatting = params.Chatting;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.GetChatMemberByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UFriends::GetChatMemberByIndex(const struct FSteamID& SteamIDClan, int32_t User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.GetChatMemberByIndex");
		
		struct
		{
			struct FSteamID                                    SteamIDClan;
			int32_t                                            User;
		} params;
		params.SteamIDClan = SteamIDClan;
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.EnumerateFollowingList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::EnumerateFollowingList(const class FScriptDelegate& Callback, int32_t StartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.EnumerateFollowingList");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            StartIndex;
		} params;
		params.Callback = Callback;
		params.StartIndex = StartIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.DownloadClanActivityCounts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamID>                            SteamIDClans                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UFriends::DownloadClanActivityCounts(const class FScriptDelegate& Callback, TArray<struct FSteamID> SteamIDClans)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.DownloadClanActivityCounts");
		
		struct
		{
			class FScriptDelegate                              Callback;
			TArray<struct FSteamID>                            SteamIDClans;
		} params;
		params.Callback = Callback;
		params.SteamIDClans = SteamIDClans;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.CloseClanChatWindowInSteam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDClanChat                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFriends::CloseClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.CloseClanChatWindowInSteam");
		
		struct
		{
			struct FSteamID                                    SteamIDClanChat;
		} params;
		params.SteamIDClanChat = SteamIDClanChat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.ClearRichPresence
	 * 		Flags  -> ()
	 */
	void UFriends::ClearRichPresence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ClearRichPresence");
		
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
	 * 		Name   -> Function SteamCore.Friends.ActivateGameOverlayToWebPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamActivateGameOverlayToWebPageMode             Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::ActivateGameOverlayToWebPage(const class FString& URL, ESteamActivateGameOverlayToWebPageMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlayToWebPage");
		
		struct
		{
			class FString                                      URL;
			ESteamActivateGameOverlayToWebPageMode             Mode;
		} params;
		params.URL = URL;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.ActivateGameOverlayToUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Dialog                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::ActivateGameOverlayToUser(const class FString& Dialog, const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlayToUser");
		
		struct
		{
			class FString                                      Dialog;
			struct FSteamID                                    SteamID;
		} params;
		params.Dialog = Dialog;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.ActivateGameOverlayToStore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamOverlayToStoreFlag                           Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::ActivateGameOverlayToStore(int32_t AppID, ESteamOverlayToStoreFlag Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlayToStore");
		
		struct
		{
			int32_t                                            AppID;
			ESteamOverlayToStoreFlag                           Flag;
		} params;
		params.AppID = AppID;
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.ActivateGameOverlayInviteDialogConnectString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConnectString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::ActivateGameOverlayInviteDialogConnectString(const class FString& ConnectString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlayInviteDialogConnectString");
		
		struct
		{
			class FString                                      ConnectString;
		} params;
		params.ConnectString = ConnectString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.ActivateGameOverlayInvitedialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::ActivateGameOverlayInvitedialog(const struct FSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlayInvitedialog");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Friends.ActivateGameOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Dialog                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFriends::ActivateGameOverlay(const class FString& Dialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Friends.ActivateGameOverlay");
		
		struct
		{
			class FString                                      Dialog;
		} params;
		params.Dialog = Dialog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFriends.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriends::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Friends");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreFriendsAsyncActionSetPersonaName* USteamCoreFriendsAsyncActionSetPersonaName::SetPersonaNameAsync(class UObject* WorldContextObject, const class FString& Name, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      Name;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Name = Name;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSetPersonaNameResponse                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionSetPersonaName::HandleCallback(const struct FSetPersonaNameResponse& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback");
		
		struct
		{
			struct FSetPersonaNameResponse                     Data;
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
	 * 		Name   -> PredefindFunction USteamCoreFriendsAsyncActionSetPersonaName.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFriendsAsyncActionSetPersonaName::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionSetPersonaName");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDownloadClanActivityCountsResult           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionDownloadClanActivityCounts::HandleCallback(const struct FDownloadClanActivityCountsResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback");
		
		struct
		{
			struct FDownloadClanActivityCountsResult           Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamID>                            SteamIDClans                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* USteamCoreFriendsAsyncActionDownloadClanActivityCounts::DownloadClanActivityCountsAsync(class UObject* WorldContextObject, TArray<struct FSteamID> SteamIDClans, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<struct FSteamID>                            SteamIDClans;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamIDClans = SteamIDClans;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreFriendsAsyncActionDownloadClanActivityCounts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFriendsAsyncActionDownloadClanActivityCounts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreFriendsAsyncActionRequestClanOfficerList* USteamCoreFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamID                                    SteamIDClan;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamIDClan = SteamIDClan;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClanOfficerListResponse                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionRequestClanOfficerList::HandleCallback(const struct FClanOfficerListResponse& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback");
		
		struct
		{
			struct FClanOfficerListResponse                    Data;
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
	 * 		Name   -> PredefindFunction USteamCoreFriendsAsyncActionRequestClanOfficerList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFriendsAsyncActionRequestClanOfficerList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreFriendsAsyncActionJoinClanChatRoom* USteamCoreFriendsAsyncActionJoinClanChatRoom::JoinClanChatRoomAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamID                                    SteamIDClan;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamIDClan = SteamIDClan;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJoinClanChatRoomCompletionResult           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionJoinClanChatRoom::HandleCallback(const struct FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback");
		
		struct
		{
			struct FJoinClanChatRoomCompletionResult           Data;
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
	 * 		Name   -> PredefindFunction USteamCoreFriendsAsyncActionJoinClanChatRoom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFriendsAsyncActionJoinClanChatRoom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFriendsEnumerateFollowingList              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionEnumerateFollowingList::HandleCallback(const struct FFriendsEnumerateFollowingList& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback");
		
		struct
		{
			struct FFriendsEnumerateFollowingList              Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreFriendsAsyncActionEnumerateFollowingList* USteamCoreFriendsAsyncActionEnumerateFollowingList::EnumerateFollowingListAsync(class UObject* WorldContextObject, int32_t StartIndex, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            StartIndex;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.StartIndex = StartIndex;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreFriendsAsyncActionEnumerateFollowingList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFriendsAsyncActionEnumerateFollowingList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreFriendsAsyncActionIsFollowing* USteamCoreFriendsAsyncActionIsFollowing::IsFollowingAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamID                                    SteamID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamID = SteamID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFriendsIsFollowing                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionIsFollowing::HandleCallback(const struct FFriendsIsFollowing& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback");
		
		struct
		{
			struct FFriendsIsFollowing                         Data;
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
	 * 		Name   -> PredefindFunction USteamCoreFriendsAsyncActionIsFollowing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFriendsAsyncActionIsFollowing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionIsFollowing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFriendsGetFollowerCount                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionGetFollowerCount::HandleCallback(const struct FFriendsGetFollowerCount& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback");
		
		struct
		{
			struct FFriendsGetFollowerCount                    Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreFriendsAsyncActionGetFollowerCount* USteamCoreFriendsAsyncActionGetFollowerCount::GetFollowerCountAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamID                                    SteamID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamID = SteamID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreFriendsAsyncActionGetFollowerCount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFriendsAsyncActionGetFollowerCount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRequireNameOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreFriendsAsyncActionRequestUserInformation* USteamCoreFriendsAsyncActionRequestUserInformation::RequestUserInformationAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDUser, bool bRequireNameOnly, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamID                                    SteamIDUser;
			bool                                               bRequireNameOnly;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamIDUser = SteamIDUser;
		params.bRequireNameOnly = bRequireNameOnly;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback
	 * 		Flags  -> ()
	 */
	void USteamCoreFriendsAsyncActionRequestUserInformation::HandleCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback");
		
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
	 * 		Name   -> PredefindFunction USteamCoreFriendsAsyncActionRequestUserInformation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.SubmitPlayerResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueGameID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDPlayer                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamPlayerResult                                 PlayerResult                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::SubmitPlayerResult(const class FString& UniqueGameID, const struct FSteamID& SteamIDPlayer, ESteamPlayerResult PlayerResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.SubmitPlayerResult");
		
		struct
		{
			class FString                                      UniqueGameID;
			struct FSteamID                                    SteamIDPlayer;
			ESteamPlayerResult                                 PlayerResult;
		} params;
		params.UniqueGameID = UniqueGameID;
		params.SteamIDPlayer = SteamIDPlayer;
		params.PlayerResult = PlayerResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.SetGameHostParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Values                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::SetGameHostParams(const class FString& Key, TArray<class FString> Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.SetGameHostParams");
		
		struct
		{
			class FString                                      Key;
			TArray<class FString>                              Values;
		} params;
		params.Key = Key;
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.SetConnectionDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConnectionDetails                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::SetConnectionDetails(const class FString& ConnectionDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.SetConnectionDetails");
		
		struct
		{
			class FString                                      ConnectionDetails;
		} params;
		params.ConnectionDetails = ConnectionDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.SearchForGameWithLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::SearchForGameWithLobby(const struct FSteamID& SteamIDLobby, int32_t PlayerMin, int32_t PlayerMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.SearchForGameWithLobby");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			int32_t                                            PlayerMin;
			int32_t                                            PlayerMax;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.PlayerMin = PlayerMin;
		params.PlayerMax = PlayerMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.SearchForGameSolo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::SearchForGameSolo(int32_t PlayerMin, int32_t PlayerMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.SearchForGameSolo");
		
		struct
		{
			int32_t                                            PlayerMin;
			int32_t                                            PlayerMax;
		} params;
		params.PlayerMin = PlayerMin;
		params.PlayerMax = PlayerMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.RetrieveConnectionDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDHost                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConnectionDetails                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumConnectionDetails                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::RetrieveConnectionDetails(const struct FSteamID& SteamIDHost, class FString* ConnectionDetails, int32_t NumConnectionDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.RetrieveConnectionDetails");
		
		struct
		{
			struct FSteamID                                    SteamIDHost;
			class FString                                      ConnectionDetails;
			int32_t                                            NumConnectionDetails;
		} params;
		params.SteamIDHost = SteamIDHost;
		params.NumConnectionDetails = NumConnectionDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConnectionDetails != nullptr)
			*ConnectionDetails = params.ConnectionDetails;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.RequestPlayersForGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxTeamSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::RequestPlayersForGame(int32_t PlayerMin, int32_t PlayerMax, int32_t MaxTeamSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.RequestPlayersForGame");
		
		struct
		{
			int32_t                                            PlayerMin;
			int32_t                                            PlayerMax;
			int32_t                                            MaxTeamSize;
		} params;
		params.PlayerMin = PlayerMin;
		params.PlayerMax = PlayerMax;
		params.MaxTeamSize = MaxTeamSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.HostConfirmGameStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueGameID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::HostConfirmGameStart(const class FString& UniqueGameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.HostConfirmGameStart");
		
		struct
		{
			class FString                                      UniqueGameID;
		} params;
		params.UniqueGameID = UniqueGameID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.EndGameSearch
	 * 		Flags  -> ()
	 */
	ESteamGameSearchErrorCode USteamGameSearch::EndGameSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.EndGameSearch");
		
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
	 * 		Name   -> Function SteamCore.SteamGameSearch.EndGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueGameID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::EndGame(const class FString& UniqueGameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.EndGame");
		
		struct
		{
			class FString                                      UniqueGameID;
		} params;
		params.UniqueGameID = UniqueGameID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.DeclineGame
	 * 		Flags  -> ()
	 */
	ESteamGameSearchErrorCode USteamGameSearch::DeclineGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.DeclineGame");
		
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
	 * 		Name   -> Function SteamCore.SteamGameSearch.CancelRequestPlayersForGame
	 * 		Flags  -> ()
	 */
	ESteamGameSearchErrorCode USteamGameSearch::CancelRequestPlayersForGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.CancelRequestPlayersForGame");
		
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
	 * 		Name   -> Function SteamCore.SteamGameSearch.AddGameSearchParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyToFind                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ValuesToFind                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	ESteamGameSearchErrorCode USteamGameSearch::AddGameSearchParams(const class FString& KeyToFind, TArray<class FString> ValuesToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.AddGameSearchParams");
		
		struct
		{
			class FString                                      KeyToFind;
			TArray<class FString>                              ValuesToFind;
		} params;
		params.KeyToFind = KeyToFind;
		params.ValuesToFind = ValuesToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameSearch.AcceptGame
	 * 		Flags  -> ()
	 */
	ESteamGameSearchErrorCode USteamGameSearch::AcceptGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameSearch.AcceptGame");
		
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
	 * 		Name   -> PredefindFunction USteamGameSearch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamGameSearch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamGameSearch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.WasRestartRequested
	 * 		Flags  -> ()
	 */
	bool USteamGameServer::WasRestartRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.WasRestartRequested");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.UserHasLicenseForApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamUserHasLicenseForAppResult USteamGameServer::UserHasLicenseForApp(const struct FSteamID& SteamID, int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.UserHasLicenseForApp");
		
		struct
		{
			struct FSteamID                                    SteamID;
			int32_t                                            AppID;
		} params;
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
	 * 		Name   -> Function SteamCore.SteamGameServer.SetSpectatorServerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SpectatorServerName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetSpectatorServerName(const class FString& SpectatorServerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetSpectatorServerName");
		
		struct
		{
			class FString                                      SpectatorServerName;
		} params;
		params.SpectatorServerName = SpectatorServerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetSpectatorPort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SpectatorPort                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetSpectatorPort(int32_t SpectatorPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetSpectatorPort");
		
		struct
		{
			int32_t                                            SpectatorPort;
		} params;
		params.SpectatorPort = SpectatorPort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetServerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ServerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetServerName(const class FString& ServerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetServerName");
		
		struct
		{
			class FString                                      ServerName;
		} params;
		params.ServerName = ServerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetRegion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Region                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetRegion(const class FString& Region)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetRegion");
		
		struct
		{
			class FString                                      Region;
		} params;
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetProduct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Product                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetProduct(const class FString& Product)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetProduct");
		
		struct
		{
			class FString                                      Product;
		} params;
		params.Product = Product;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetPasswordProtected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPasswordProtected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetPasswordProtected(bool bPasswordProtected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetPasswordProtected");
		
		struct
		{
			bool                                               bPasswordProtected;
		} params;
		params.bPasswordProtected = bPasswordProtected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetModDir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ModDir                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetModDir(const class FString& ModDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetModDir");
		
		struct
		{
			class FString                                      ModDir;
		} params;
		params.ModDir = ModDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetMaxPlayerCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayersMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetMaxPlayerCount(int32_t PlayersMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetMaxPlayerCount");
		
		struct
		{
			int32_t                                            PlayersMax;
		} params;
		params.PlayersMax = PlayersMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetMapName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetMapName(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetMapName");
		
		struct
		{
			class FString                                      MapName;
		} params;
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetKeyValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetKeyValue(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetKeyValue");
		
		struct
		{
			class FString                                      Key;
			class FString                                      Value;
		} params;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetHeartbeatInterval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HeartbeatInterval                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetHeartbeatInterval(int32_t HeartbeatInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetHeartbeatInterval");
		
		struct
		{
			int32_t                                            HeartbeatInterval;
		} params;
		params.HeartbeatInterval = HeartbeatInterval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetGameTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameTags                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetGameTags(const class FString& GameTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetGameTags");
		
		struct
		{
			class FString                                      GameTags;
		} params;
		params.GameTags = GameTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetGameDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameDescription                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetGameDescription(const class FString& GameDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetGameDescription");
		
		struct
		{
			class FString                                      GameDescription;
		} params;
		params.GameDescription = GameDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetGameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetGameData(const class FString& GameData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetGameData");
		
		struct
		{
			class FString                                      GameData;
		} params;
		params.GameData = GameData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetDedicatedServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDedicated                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetDedicatedServer(bool bDedicated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetDedicatedServer");
		
		struct
		{
			bool                                               bDedicated;
		} params;
		params.bDedicated = bDedicated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.SetBotPlayerCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BotPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::SetBotPlayerCount(int32_t BotPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.SetBotPlayerCount");
		
		struct
		{
			int32_t                                            BotPlayers;
		} params;
		params.BotPlayers = BotPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.RequestUserGroupStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDGroup                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamGameServer::RequestUserGroupStatus(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.RequestUserGroupStatus");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			struct FSteamID                                    SteamIDGroup;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.SteamIDGroup = SteamIDGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.LogOnAnonymous
	 * 		Flags  -> ()
	 */
	void USteamGameServer::LogOnAnonymous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.LogOnAnonymous");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.LogOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Token                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::LogOn(const class FString& Token)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.LogOn");
		
		struct
		{
			class FString                                      Token;
		} params;
		params.Token = Token;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.LogOff
	 * 		Flags  -> ()
	 */
	void USteamGameServer::LogOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.LogOff");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.GetServerSteamID_PureCompact
	 * 		Flags  -> ()
	 */
	struct FSteamID USteamGameServer::GetServerSteamID_PureCompact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.GetServerSteamID_PureCompact");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.GetServerSteamID_Pure
	 * 		Flags  -> ()
	 */
	struct FSteamID USteamGameServer::GetServerSteamID_Pure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.GetServerSteamID_Pure");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.GetServerSteamID
	 * 		Flags  -> ()
	 */
	struct FSteamID USteamGameServer::GetServerSteamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.GetServerSteamID");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.GetServerPublicIP_PureCompact
	 * 		Flags  -> ()
	 */
	class FString USteamGameServer::GetServerPublicIP_PureCompact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.GetServerPublicIP_PureCompact");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.GetServerPublicIP_Pure
	 * 		Flags  -> ()
	 */
	class FString USteamGameServer::GetServerPublicIP_Pure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.GetServerPublicIP_Pure");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.GetServerPublicIP
	 * 		Flags  -> ()
	 */
	class FString USteamGameServer::GetServerPublicIP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.GetServerPublicIP");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.GetAuthSessionTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FSteamTicketHandle USteamGameServer::GetAuthSessionTicket(TArray<unsigned char>* Ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.GetAuthSessionTicket");
		
		struct
		{
			TArray<unsigned char>                              Ticket;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ticket != nullptr)
			*Ticket = params.Ticket;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.ForceHeartbeat
	 * 		Flags  -> ()
	 */
	void USteamGameServer::ForceHeartbeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.ForceHeartbeat");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.EndAuthSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::EndAuthSession(const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.EndAuthSession");
		
		struct
		{
			struct FSteamID                                    SteamID;
		} params;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.EnableHeartbeats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::EnableHeartbeats(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.EnableHeartbeats");
		
		struct
		{
			bool                                               bActive;
		} params;
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.CreateUnauthenticatedUserConnection
	 * 		Flags  -> ()
	 */
	struct FSteamID USteamGameServer::CreateUnauthenticatedUserConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.CreateUnauthenticatedUserConnection");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.ComputeNewPlayerCompatibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDNewPlayer                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::ComputeNewPlayerCompatibility(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDNewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.ComputeNewPlayerCompatibility");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamIDNewPlayer;
		} params;
		params.Callback = Callback;
		params.SteamIDNewPlayer = SteamIDNewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.ClearAllKeyValues
	 * 		Flags  -> ()
	 */
	void USteamGameServer::ClearAllKeyValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.ClearAllKeyValues");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.CancelAuthTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamTicketHandle                          TicketHandle                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::CancelAuthTicket(const struct FSteamTicketHandle& TicketHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.CancelAuthTicket");
		
		struct
		{
			struct FSteamTicketHandle                          TicketHandle;
		} params;
		params.TicketHandle = TicketHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.BUpdateUserData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamGameServer::BUpdateUserData(const struct FSteamID& SteamIDUser, const class FString& PlayerName, int32_t Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.BUpdateUserData");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      PlayerName;
			int32_t                                            Score;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.PlayerName = PlayerName;
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.BSecure
	 * 		Flags  -> ()
	 */
	bool USteamGameServer::BSecure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.BSecure");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.BLoggedOn
	 * 		Flags  -> ()
	 */
	bool USteamGameServer::BLoggedOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.BLoggedOn");
		
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
	 * 		Name   -> Function SteamCore.SteamGameServer.BeginAuthSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamBeginAuthSessionResult USteamGameServer::BeginAuthSession(TArray<unsigned char> Ticket, const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.BeginAuthSession");
		
		struct
		{
			TArray<unsigned char>                              Ticket;
			struct FSteamID                                    SteamID;
		} params;
		params.Ticket = Ticket;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamGameServer.AssociateWithClan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDClan                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamGameServer::AssociateWithClan(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDClan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamGameServer.AssociateWithClan");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamIDClan;
		} params;
		params.Callback = Callback;
		params.SteamIDClan = SteamIDClan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamGameServer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamGameServer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamGameServer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.GameServerStats.UpdateUserAvgRateStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CountThisSession                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SessionLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameServerStats::UpdateUserAvgRateStat(const struct FSteamID& SteamIDUser, const class FString& Name, float CountThisSession, float SessionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.UpdateUserAvgRateStat");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			float                                              CountThisSession;
			float                                              SessionLength;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		params.CountThisSession = CountThisSession;
		params.SessionLength = SessionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.GameServerStats.SetUserStatInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameServerStats::SetUserStatInt(const struct FSteamID& SteamIDUser, const class FString& Name, int32_t Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.SetUserStatInt");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			int32_t                                            Data;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.GameServerStats.SetUserStatFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameServerStats::SetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.SetUserStatFloat");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			float                                              Data;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.GameServerStats.SetUserAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameServerStats::SetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.SetUserAchievement");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.GameServerStats.ServerStoreUserStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerStats::ServerStoreUserStats(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.ServerStoreUserStats");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamIDUser;
		} params;
		params.Callback = Callback;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.GameServerStats.ServerRequestUserStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerStats::ServerRequestUserStats(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.ServerRequestUserStats");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamIDUser;
		} params;
		params.Callback = Callback;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.GameServerStats.GetUserStatInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameServerStats::GetUserStatInt(const struct FSteamID& SteamIDUser, const class FString& Name, int32_t* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.GetUserStatInt");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			int32_t                                            Data;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
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
	 * 		Name   -> Function SteamCore.GameServerStats.GetUserStatFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameServerStats::GetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.GetUserStatFloat");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			float                                              Data;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
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
	 * 		Name   -> Function SteamCore.GameServerStats.GetUserAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameServerStats::GetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.GetUserAchievement");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			bool                                               bAchieved;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.GameServerStats.ClearUserAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameServerStats::ClearUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.GameServerStats.ClearUserAchievement");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGameServerStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameServerStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.GameServerStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.TriggerVibration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      LeftSpeed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      RightSpeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInput::TriggerVibration(const struct FInputHandle& Handle, unsigned char LeftSpeed, unsigned char RightSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.TriggerVibration");
		
		struct
		{
			struct FInputHandle                                Handle;
			unsigned char                                      LeftSpeed;
			unsigned char                                      RightSpeed;
		} params;
		params.Handle = Handle;
		params.LeftSpeed = LeftSpeed;
		params.RightSpeed = RightSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.TriggerRepeatedHapticPulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreControllerPad                            TargetPad                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DurationMicroSec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      OffMicroSec                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Repeat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInput::TriggerRepeatedHapticPulse(const struct FInputHandle& Handle, ESteamCoreControllerPad TargetPad, unsigned char DurationMicroSec, unsigned char OffMicroSec, unsigned char Repeat, unsigned char Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.TriggerRepeatedHapticPulse");
		
		struct
		{
			struct FInputHandle                                Handle;
			ESteamCoreControllerPad                            TargetPad;
			unsigned char                                      DurationMicroSec;
			unsigned char                                      OffMicroSec;
			unsigned char                                      Repeat;
			unsigned char                                      Flags;
		} params;
		params.Handle = Handle;
		params.TargetPad = TargetPad;
		params.DurationMicroSec = DurationMicroSec;
		params.OffMicroSec = OffMicroSec;
		params.Repeat = Repeat;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.TriggerHapticPulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreControllerPad                            TargetPad                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DurationMicroSec                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInput::TriggerHapticPulse(const struct FInputHandle& Handle, ESteamCoreControllerPad TargetPad, unsigned char DurationMicroSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.TriggerHapticPulse");
		
		struct
		{
			struct FInputHandle                                Handle;
			ESteamCoreControllerPad                            TargetPad;
			unsigned char                                      DurationMicroSec;
		} params;
		params.Handle = Handle;
		params.TargetPad = TargetPad;
		params.DurationMicroSec = DurationMicroSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.TranslateActionOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamCoreInputType                                DestinationInputType                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreInputActionOrigin                        SourceOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamCoreInputActionOrigin UInput::TranslateActionOrigin(ESteamCoreInputType DestinationInputType, ESteamCoreInputActionOrigin SourceOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.TranslateActionOrigin");
		
		struct
		{
			ESteamCoreInputType                                DestinationInputType;
			ESteamCoreInputActionOrigin                        SourceOrigin;
		} params;
		params.DestinationInputType = DestinationInputType;
		params.SourceOrigin = SourceOrigin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.StopAnalogActionMomentum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputAnalogActionHandle                    EAction                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInput::StopAnalogActionMomentum(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& EAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.StopAnalogActionMomentum");
		
		struct
		{
			struct FInputHandle                                Handle;
			struct FInputAnalogActionHandle                    EAction;
		} params;
		params.Handle = Handle;
		params.EAction = EAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.Shutdown
	 * 		Flags  -> ()
	 */
	bool UInput::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.Shutdown");
		
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
	 * 		Name   -> Function SteamCore.Input.ShowBindingPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInput::ShowBindingPanel(const struct FInputHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.ShowBindingPanel");
		
		struct
		{
			struct FInputHandle                                Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.SetLEDColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ColorR                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ColorG                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ColorB                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreInputLEDFlag                             Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInput::SetLEDColor(const struct FInputHandle& Handle, unsigned char ColorR, unsigned char ColorG, unsigned char ColorB, ESteamCoreInputLEDFlag Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.SetLEDColor");
		
		struct
		{
			struct FInputHandle                                Handle;
			unsigned char                                      ColorR;
			unsigned char                                      ColorG;
			unsigned char                                      ColorB;
			ESteamCoreInputLEDFlag                             Flags;
		} params;
		params.Handle = Handle;
		params.ColorR = ColorR;
		params.ColorG = ColorG;
		params.ColorB = ColorB;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.Init
	 * 		Flags  -> ()
	 */
	bool UInput::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.Init");
		
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
	 * 		Name   -> Function SteamCore.Input.GetStringForXboxOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamCoreXboxOrigin                               Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UInput::GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetStringForXboxOrigin");
		
		struct
		{
			ESteamCoreXboxOrigin                               Origin;
		} params;
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetStringForActionOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamCoreInputActionOrigin                        Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UInput::GetStringForActionOrigin(ESteamCoreInputActionOrigin Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetStringForActionOrigin");
		
		struct
		{
			ESteamCoreInputActionOrigin                        Origin;
		} params;
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetRemotePlaySessionID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInput::GetRemotePlaySessionID(const struct FInputHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetRemotePlaySessionID");
		
		struct
		{
			struct FInputHandle                                Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetMotionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputMotionData UInput::GetMotionData(const struct FInputHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetMotionData");
		
		struct
		{
			struct FInputHandle                                Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetInputTypeForHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamCoreInputType UInput::GetInputTypeForHandle(const struct FInputHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetInputTypeForHandle");
		
		struct
		{
			struct FInputHandle                                Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetGlyphForXboxOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamCoreXboxOrigin                               Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UInput::GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetGlyphForXboxOrigin");
		
		struct
		{
			ESteamCoreXboxOrigin                               Origin;
		} params;
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetGlyphForActionOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamCoreInputActionOrigin                        Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UInput::GetGlyphForActionOrigin(ESteamCoreInputActionOrigin Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetGlyphForActionOrigin");
		
		struct
		{
			ESteamCoreInputActionOrigin                        Origin;
		} params;
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetGamepadIndexForController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInput::GetGamepadIndexForController(const struct FInputHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetGamepadIndexForController");
		
		struct
		{
			struct FInputHandle                                Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetDigitalActionOrigins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionSetHandle                       ActionSetHandle                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputDigitalActionHandle                   DigitalActionHandle                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ESteamCoreInputActionOrigin>                OriginsOut                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UInput::GetDigitalActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle, const struct FInputDigitalActionHandle& DigitalActionHandle, TArray<ESteamCoreInputActionOrigin>* OriginsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetDigitalActionOrigins");
		
		struct
		{
			struct FInputHandle                                Handle;
			struct FInputActionSetHandle                       ActionSetHandle;
			struct FInputDigitalActionHandle                   DigitalActionHandle;
			TArray<ESteamCoreInputActionOrigin>                OriginsOut;
		} params;
		params.Handle = Handle;
		params.ActionSetHandle = ActionSetHandle;
		params.DigitalActionHandle = DigitalActionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginsOut != nullptr)
			*OriginsOut = params.OriginsOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetDigitalActionHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PszActionName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputDigitalActionHandle UInput::GetDigitalActionHandle(const class FString& PszActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetDigitalActionHandle");
		
		struct
		{
			class FString                                      PszActionName;
		} params;
		params.PszActionName = PszActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetDigitalActionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputDigitalActionHandle                   DigitalActionHandle                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputDigitalActionData UInput::GetDigitalActionData(const struct FInputHandle& Handle, const struct FInputDigitalActionHandle& DigitalActionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetDigitalActionData");
		
		struct
		{
			struct FInputHandle                                Handle;
			struct FInputDigitalActionHandle                   DigitalActionHandle;
		} params;
		params.Handle = Handle;
		params.DigitalActionHandle = DigitalActionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetDeviceBindingRevision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Major                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInput::GetDeviceBindingRevision(const struct FInputHandle& Handle, int32_t* Major, int32_t* Minor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetDeviceBindingRevision");
		
		struct
		{
			struct FInputHandle                                Handle;
			int32_t                                            Major;
			int32_t                                            Minor;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Major != nullptr)
			*Major = params.Major;
		if (Minor != nullptr)
			*Minor = params.Minor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetCurrentActionSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionSetHandle UInput::GetCurrentActionSet(const struct FInputHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetCurrentActionSet");
		
		struct
		{
			struct FInputHandle                                Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetControllerForGamepadIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputHandle UInput::GetControllerForGamepadIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetControllerForGamepadIndex");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetConnectedControllers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInputHandle>                        OutHandles                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UInput::GetConnectedControllers(TArray<struct FInputHandle>* OutHandles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetConnectedControllers");
		
		struct
		{
			TArray<struct FInputHandle>                        OutHandles;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHandles != nullptr)
			*OutHandles = params.OutHandles;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetAnalogActionOrigins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionSetHandle                       ActionSetHandle                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputAnalogActionHandle                    AnalogActionHandle                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ESteamCoreInputActionOrigin>                OriginsOut                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UInput::GetAnalogActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle, const struct FInputAnalogActionHandle& AnalogActionHandle, TArray<ESteamCoreInputActionOrigin>* OriginsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetAnalogActionOrigins");
		
		struct
		{
			struct FInputHandle                                Handle;
			struct FInputActionSetHandle                       ActionSetHandle;
			struct FInputAnalogActionHandle                    AnalogActionHandle;
			TArray<ESteamCoreInputActionOrigin>                OriginsOut;
		} params;
		params.Handle = Handle;
		params.ActionSetHandle = ActionSetHandle;
		params.AnalogActionHandle = AnalogActionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginsOut != nullptr)
			*OriginsOut = params.OriginsOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetAnalogActionHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PszActionName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputAnalogActionHandle UInput::GetAnalogActionHandle(const class FString& PszActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetAnalogActionHandle");
		
		struct
		{
			class FString                                      PszActionName;
		} params;
		params.PszActionName = PszActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetAnalogActionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputAnalogActionHandle                    AnalogActionHandle                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputAnalogActionData UInput::GetAnalogActionData(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& AnalogActionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetAnalogActionData");
		
		struct
		{
			struct FInputHandle                                Handle;
			struct FInputAnalogActionHandle                    AnalogActionHandle;
		} params;
		params.Handle = Handle;
		params.AnalogActionHandle = AnalogActionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetActiveActionSetLayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInputActionSetHandle>               Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UInput::GetActiveActionSetLayers(const struct FInputHandle& Handle, TArray<struct FInputActionSetHandle>* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetActiveActionSetLayers");
		
		struct
		{
			struct FInputHandle                                Handle;
			TArray<struct FInputActionSetHandle>               Data;
		} params;
		params.Handle = Handle;
		
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
	 * 		Name   -> Function SteamCore.Input.GetActionSetHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ActionSetName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionSetHandle UInput::GetActionSetHandle(const class FString& ActionSetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetActionSetHandle");
		
		struct
		{
			class FString                                      ActionSetName;
		} params;
		params.ActionSetName = ActionSetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.GetActionOriginFromXboxOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreXboxOrigin                               Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamCoreInputActionOrigin UInput::GetActionOriginFromXboxOrigin(const struct FInputHandle& Handle, ESteamCoreXboxOrigin Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.GetActionOriginFromXboxOrigin");
		
		struct
		{
			struct FInputHandle                                Handle;
			ESteamCoreXboxOrigin                               Origin;
		} params;
		params.Handle = Handle;
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.DeactivateAllActionSetLayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInput::DeactivateAllActionSetLayers(const struct FInputHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.DeactivateAllActionSetLayers");
		
		struct
		{
			struct FInputHandle                                Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.DeactivateActionSetLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionSetHandle                       ActionSetLayerHandle                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInput::DeactivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetLayerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.DeactivateActionSetLayer");
		
		struct
		{
			struct FInputHandle                                Handle;
			struct FInputActionSetHandle                       ActionSetLayerHandle;
		} params;
		params.Handle = Handle;
		params.ActionSetLayerHandle = ActionSetLayerHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.ActivateActionSetLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionSetHandle                       ActionSetLayerHandle                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInput::ActivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetLayerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.ActivateActionSetLayer");
		
		struct
		{
			struct FInputHandle                                Handle;
			struct FInputActionSetHandle                       ActionSetLayerHandle;
		} params;
		params.Handle = Handle;
		params.ActionSetLayerHandle = ActionSetLayerHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Input.ActivateActionSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputHandle                                Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionSetHandle                       ActionSetHandle                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInput::ActivateActionSet(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Input.ActivateActionSet");
		
		struct
		{
			struct FInputHandle                                Handle;
			struct FInputActionSetHandle                       ActionSetHandle;
		} params;
		params.Handle = Handle;
		params.ActionSetHandle = ActionSetHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Input");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.TriggerItemDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Result                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemDef                               ListDefinition                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::TriggerItemDrop(struct FSteamInventoryResult* Result, const struct FSteamItemDef& ListDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.TriggerItemDrop");
		
		struct
		{
			struct FSteamInventoryResult                       Result;
			struct FSteamItemDef                               ListDefinition;
		} params;
		params.ListDefinition = ListDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.TransferItemQuantity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Result                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        ItemIDSource                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        ItemIDDest                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::TransferItemQuantity(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& ItemIDSource, int32_t Quantity, const struct FSteamItemInstanceID& ItemIDDest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.TransferItemQuantity");
		
		struct
		{
			struct FSteamInventoryResult                       Result;
			struct FSteamItemInstanceID                        ItemIDSource;
			int32_t                                            Quantity;
			struct FSteamItemInstanceID                        ItemIDDest;
		} params;
		params.ItemIDSource = ItemIDSource;
		params.Quantity = Quantity;
		params.ItemIDDest = ItemIDDest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.SubmitUpdateProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamInventoryResult                       ResultHandle                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::SubmitUpdateProperties(const struct FSteamInventoryUpdateHandle& Handle, struct FSteamInventoryResult* ResultHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SubmitUpdateProperties");
		
		struct
		{
			struct FSteamInventoryUpdateHandle                 Handle;
			struct FSteamInventoryResult                       ResultHandle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultHandle != nullptr)
			*ResultHandle = params.ResultHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.StartUpdateProperties
	 * 		Flags  -> ()
	 */
	struct FSteamInventoryUpdateHandle UInventory::StartUpdateProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.StartUpdateProperties");
		
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
	 * 		Name   -> Function SteamCore.Inventory.StartPurchase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamItemDef>                       ItemDefs                                                   (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Quantity                                                   (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventory::StartPurchase(const class FScriptDelegate& Callback, TArray<struct FSteamItemDef> ItemDefs, TArray<int32_t> Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.StartPurchase");
		
		struct
		{
			class FScriptDelegate                              Callback;
			TArray<struct FSteamItemDef>                       ItemDefs;
			TArray<int32_t>                                    Quantity;
		} params;
		params.Callback = Callback;
		params.ItemDefs = ItemDefs;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.SetPropertyString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        ItemId                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::SetPropertyString(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SetPropertyString");
		
		struct
		{
			struct FSteamInventoryUpdateHandle                 Handle;
			struct FSteamItemInstanceID                        ItemId;
			class FString                                      PropertyName;
			class FString                                      Value;
		} params;
		params.Handle = Handle;
		params.ItemId = ItemId;
		params.PropertyName = PropertyName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.SetPropertyInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        ItemId                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::SetPropertyInt(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SetPropertyInt");
		
		struct
		{
			struct FSteamInventoryUpdateHandle                 Handle;
			struct FSteamItemInstanceID                        ItemId;
			class FString                                      PropertyName;
			int32_t                                            Value;
		} params;
		params.Handle = Handle;
		params.ItemId = ItemId;
		params.PropertyName = PropertyName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.SetPropertyFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        ItemId                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::SetPropertyFloat(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SetPropertyFloat");
		
		struct
		{
			struct FSteamInventoryUpdateHandle                 Handle;
			struct FSteamItemInstanceID                        ItemId;
			class FString                                      PropertyName;
			float                                              Value;
		} params;
		params.Handle = Handle;
		params.ItemId = ItemId;
		params.PropertyName = PropertyName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.SetPropertyBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        ItemId                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::SetPropertyBool(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SetPropertyBool");
		
		struct
		{
			struct FSteamInventoryUpdateHandle                 Handle;
			struct FSteamItemInstanceID                        ItemId;
			class FString                                      PropertyName;
			bool                                               bValue;
		} params;
		params.Handle = Handle;
		params.ItemId = ItemId;
		params.PropertyName = PropertyName;
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.SerializeResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventory::SerializeResult(const struct FSteamInventoryResult& Handle, TArray<unsigned char>* Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.SerializeResult");
		
		struct
		{
			struct FSteamInventoryResult                       Handle;
			TArray<unsigned char>                              Buffer;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buffer != nullptr)
			*Buffer = params.Buffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.RequestPrices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInventory::RequestPrices(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.RequestPrices");
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventory::RequestEligiblePromoItemDefinitionsIDs(const class FScriptDelegate& Callback, const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamID;
		} params;
		params.Callback = Callback;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.RemoveProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        ItemId                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::RemoveProperty(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.RemoveProperty");
		
		struct
		{
			struct FSteamInventoryUpdateHandle                 Handle;
			struct FSteamItemInstanceID                        ItemId;
			class FString                                      PropertyName;
		} params;
		params.Handle = Handle;
		params.ItemId = ItemId;
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.LoadItemDefinitions
	 * 		Flags  -> ()
	 */
	bool UInventory::LoadItemDefinitions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.LoadItemDefinitions");
		
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
	 * 		Name   -> Function SteamCore.Inventory.GrantPromoItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Result                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GrantPromoItems(struct FSteamInventoryResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GrantPromoItems");
		
		struct
		{
			struct FSteamInventoryResult                       Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetResultTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventory::GetResultTimestamp(const struct FSteamInventoryResult& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetResultTimestamp");
		
		struct
		{
			struct FSteamInventoryResult                       Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetResultStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamResult UInventory::GetResultStatus(const struct FSteamInventoryResult& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetResultStatus");
		
		struct
		{
			struct FSteamInventoryResult                       Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetResultItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamItemDetails>                   Items                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GetResultItems(const struct FSteamInventoryResult& Handle, TArray<struct FSteamItemDetails>* Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetResultItems");
		
		struct
		{
			struct FSteamInventoryResult                       Handle;
			TArray<struct FSteamItemDetails>                   Items;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetResultItemProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GetResultItemProperty(const struct FSteamInventoryResult& Handle, int32_t ItemIndex, const class FString& PropertyName, class FString* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetResultItemProperty");
		
		struct
		{
			struct FSteamInventoryResult                       Handle;
			int32_t                                            ItemIndex;
			class FString                                      PropertyName;
			class FString                                      Value;
		} params;
		params.Handle = Handle;
		params.ItemIndex = ItemIndex;
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetNumItemsWithPrices
	 * 		Flags  -> ()
	 */
	int32_t UInventory::GetNumItemsWithPrices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetNumItemsWithPrices");
		
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
	 * 		Name   -> Function SteamCore.Inventory.GetItemsWithPrices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamItemDef>                       ItemDefs                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Prices                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    BasePrices                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GetItemsWithPrices(TArray<struct FSteamItemDef>* ItemDefs, TArray<int32_t>* Prices, TArray<int32_t>* BasePrices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemsWithPrices");
		
		struct
		{
			TArray<struct FSteamItemDef>                       ItemDefs;
			TArray<int32_t>                                    Prices;
			TArray<int32_t>                                    BasePrices;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemDefs != nullptr)
			*ItemDefs = params.ItemDefs;
		if (Prices != nullptr)
			*Prices = params.Prices;
		if (BasePrices != nullptr)
			*BasePrices = params.BasePrices;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetItemsByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       InventoryResult                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamItemInstanceID>                InstanceIDs                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GetItemsByID(struct FSteamInventoryResult* InventoryResult, TArray<struct FSteamItemInstanceID> InstanceIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemsByID");
		
		struct
		{
			struct FSteamInventoryResult                       InventoryResult;
			TArray<struct FSteamItemInstanceID>                InstanceIDs;
		} params;
		params.InstanceIDs = InstanceIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryResult != nullptr)
			*InventoryResult = params.InventoryResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetItemPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamItemDef                               ItemDef                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BasePrice                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GetItemPrice(const struct FSteamItemDef& ItemDef, int32_t* Price, int32_t* BasePrice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemPrice");
		
		struct
		{
			struct FSteamItemDef                               ItemDef;
			int32_t                                            Price;
			int32_t                                            BasePrice;
		} params;
		params.ItemDef = ItemDef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
		if (BasePrice != nullptr)
			*BasePrice = params.BasePrice;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetItemDefinitionProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamItemDef                               ItemDef                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GetItemDefinitionProperty(const struct FSteamItemDef& ItemDef, const class FString& PropertyName, class FString* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemDefinitionProperty");
		
		struct
		{
			struct FSteamItemDef                               ItemDef;
			class FString                                      PropertyName;
			class FString                                      Value;
		} params;
		params.ItemDef = ItemDef;
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetItemDefinitionIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamItemDef>                       ItemDefs                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GetItemDefinitionIDs(TArray<struct FSteamItemDef>* ItemDefs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetItemDefinitionIDs");
		
		struct
		{
			TArray<struct FSteamItemDef>                       ItemDefs;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemDefs != nullptr)
			*ItemDefs = params.ItemDefs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamItemDef>                       ItemDefs                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GetEligiblePromoItemDefinitionIDs(const struct FSteamID& SteamID, TArray<struct FSteamItemDef>* ItemDefs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs");
		
		struct
		{
			struct FSteamID                                    SteamID;
			TArray<struct FSteamItemDef>                       ItemDefs;
		} params;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemDefs != nullptr)
			*ItemDefs = params.ItemDefs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GetAllItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Handle                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GetAllItems(struct FSteamInventoryResult* Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GetAllItems");
		
		struct
		{
			struct FSteamInventoryResult                       Handle;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handle != nullptr)
			*Handle = params.Handle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.GenerateItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Result                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamItemDef>                       ItemDefs                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Quantity                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventory::GenerateItems(struct FSteamInventoryResult* Result, TArray<struct FSteamItemDef> ItemDefs, TArray<int32_t> Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.GenerateItems");
		
		struct
		{
			struct FSteamInventoryResult                       Result;
			TArray<struct FSteamItemDef>                       ItemDefs;
			TArray<int32_t>                                    Quantity;
		} params;
		params.ItemDefs = ItemDefs;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.ExchangeItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Result                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamItemDef>                       ArrayGenerate                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ArrayGenerateQuantity                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamItemInstanceID>                ArrayDestroy                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ArrayDestroyQuantity                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventory::ExchangeItems(struct FSteamInventoryResult* Result, TArray<struct FSteamItemDef> ArrayGenerate, TArray<int32_t> ArrayGenerateQuantity, TArray<struct FSteamItemInstanceID> ArrayDestroy, TArray<int32_t> ArrayDestroyQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.ExchangeItems");
		
		struct
		{
			struct FSteamInventoryResult                       Result;
			TArray<struct FSteamItemDef>                       ArrayGenerate;
			TArray<int32_t>                                    ArrayGenerateQuantity;
			TArray<struct FSteamItemInstanceID>                ArrayDestroy;
			TArray<int32_t>                                    ArrayDestroyQuantity;
		} params;
		params.ArrayGenerate = ArrayGenerate;
		params.ArrayGenerateQuantity = ArrayGenerateQuantity;
		params.ArrayDestroy = ArrayDestroy;
		params.ArrayDestroyQuantity = ArrayDestroyQuantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.DestroyResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventory::DestroyResult(const struct FSteamInventoryResult& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.DestroyResult");
		
		struct
		{
			struct FSteamInventoryResult                       Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.DeserializeResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Result                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bReservedMustBeFalse                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::DeserializeResult(struct FSteamInventoryResult* Result, TArray<unsigned char> Buffer, bool bReservedMustBeFalse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.DeserializeResult");
		
		struct
		{
			struct FSteamInventoryResult                       Result;
			TArray<unsigned char>                              Buffer;
			bool                                               bReservedMustBeFalse;
		} params;
		params.Buffer = Buffer;
		params.bReservedMustBeFalse = bReservedMustBeFalse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.ConsumeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Result                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        ItemConsume                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::ConsumeItem(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& ItemConsume, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.ConsumeItem");
		
		struct
		{
			struct FSteamInventoryResult                       Result;
			struct FSteamItemInstanceID                        ItemConsume;
			int32_t                                            Quantity;
		} params;
		params.ItemConsume = ItemConsume;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.CheckResultSteamID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDExpected                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::CheckResultSteamID(const struct FSteamInventoryResult& Handle, const struct FSteamID& SteamIDExpected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.CheckResultSteamID");
		
		struct
		{
			struct FSteamInventoryResult                       Handle;
			struct FSteamID                                    SteamIDExpected;
		} params;
		params.Handle = Handle;
		params.SteamIDExpected = SteamIDExpected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.AddPromoItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       OutResult                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamItemDef>                       ItemDefs                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventory::AddPromoItems(struct FSteamInventoryResult* OutResult, TArray<struct FSteamItemDef> ItemDefs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.AddPromoItems");
		
		struct
		{
			struct FSteamInventoryResult                       OutResult;
			TArray<struct FSteamItemDef>                       ItemDefs;
		} params;
		params.ItemDefs = ItemDefs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Inventory.AddPromoItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryResult                       Result                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemDef                               ItemDef                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::AddPromoItem(struct FSteamInventoryResult* Result, const struct FSteamItemDef& ItemDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Inventory.AddPromoItem");
		
		struct
		{
			struct FSteamInventoryResult                       Result;
			struct FSteamItemDef                               ItemDef;
		} params;
		params.ItemDef = ItemDef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInventory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Inventory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::RequestEligiblePromoItemDefinitionsIDsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamID                                    SteamID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamID = SteamID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryEligiblePromoItemDefIDs      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::HandleCallback(const struct FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback");
		
		struct
		{
			struct FSteamInventoryEligiblePromoItemDefIDs      Data;
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
	 * 		Name   -> PredefindFunction USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreInventoryAsyncActionRequestPricesResult* USteamCoreInventoryAsyncActionRequestPricesResult::RequestPricesAsync(class UObject* WorldContextObject, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryRequestPricesResult          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreInventoryAsyncActionRequestPricesResult::HandleCallback(const struct FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback");
		
		struct
		{
			struct FSteamInventoryRequestPricesResult          Data;
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
	 * 		Name   -> PredefindFunction USteamCoreInventoryAsyncActionRequestPricesResult.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreInventoryAsyncActionRequestPricesResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamItemDef>                       ItemDefs                                                   (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Quantity                                                   (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreInventoryAsyncActionStartPurchaseResult* USteamCoreInventoryAsyncActionStartPurchaseResult::StartPurchaseAsync(class UObject* WorldContextObject, TArray<struct FSteamItemDef> ItemDefs, TArray<int32_t> Quantity, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<struct FSteamItemDef>                       ItemDefs;
			TArray<int32_t>                                    Quantity;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ItemDefs = ItemDefs;
		params.Quantity = Quantity;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryStartPurchaseResult          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreInventoryAsyncActionStartPurchaseResult::HandleCallback(const struct FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback");
		
		struct
		{
			struct FSteamInventoryStartPurchaseResult          Data;
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
	 * 		Name   -> PredefindFunction USteamCoreInventoryAsyncActionStartPurchaseResult.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreInventoryAsyncActionStartPurchaseResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.SetLobbyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLobbyType                                    LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::SetLobbyType(const struct FSteamID& SteamIDLobby, ESteamLobbyType LobbyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyType");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			ESteamLobbyType                                    LobbyType;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.LobbyType = LobbyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.SetLobbyOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDNewOwner                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::SetLobbyOwner(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDNewOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyOwner");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			struct FSteamID                                    SteamIDNewOwner;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.SteamIDNewOwner = SteamIDNewOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.SetLobbyMemberLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::SetLobbyMemberLimit(const struct FSteamID& SteamIDLobby, int32_t MaxMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyMemberLimit");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			int32_t                                            MaxMembers;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.MaxMembers = MaxMembers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.SetLobbyMemberData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::SetLobbyMemberData(const struct FSteamID& SteamIDLobby, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyMemberData");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			class FString                                      Key;
			class FString                                      Value;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.SetLobbyJoinable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLobbyJoinable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::SetLobbyJoinable(const struct FSteamID& SteamIDLobby, bool bLobbyJoinable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyJoinable");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			bool                                               bLobbyJoinable;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.bLobbyJoinable = bLobbyJoinable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.SetLobbyGameServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameServerIP                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameServerPort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDGameServer                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::SetLobbyGameServer(const struct FSteamID& SteamIDLobby, const class FString& GameServerIP, int32_t GameServerPort, const struct FSteamID& SteamIDGameServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyGameServer");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			class FString                                      GameServerIP;
			int32_t                                            GameServerPort;
			struct FSteamID                                    SteamIDGameServer;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.GameServerIP = GameServerIP;
		params.GameServerPort = GameServerPort;
		params.SteamIDGameServer = SteamIDGameServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.SetLobbyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::SetLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLobbyData");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			class FString                                      Key;
			class FString                                      Value;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.SetLinkedLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDLobbyDependent                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::SetLinkedLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDLobbyDependent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SetLinkedLobby");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			struct FSteamID                                    SteamIDLobbyDependent;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.SteamIDLobbyDependent = SteamIDLobbyDependent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.SendLobbyChatMsg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::SendLobbyChatMsg(const struct FSteamID& SteamIDLobby, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.SendLobbyChatMsg");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			class FString                                      Message;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.RequestLobbyList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::RequestLobbyList(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.RequestLobbyList");
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.RequestLobbyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::RequestLobbyData(const struct FSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.RequestLobbyData");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.RemoveFavoriteGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectionPort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ESteamFavoriteFlags>                        Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::RemoveFavoriteGame(int32_t AppID, const class FString& IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.RemoveFavoriteGame");
		
		struct
		{
			int32_t                                            AppID;
			class FString                                      IP;
			int32_t                                            ConnectionPort;
			int32_t                                            QueryPort;
			TArray<ESteamFavoriteFlags>                        Flags;
		} params;
		params.AppID = AppID;
		params.IP = IP;
		params.ConnectionPort = ConnectionPort;
		params.QueryPort = QueryPort;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.LeaveLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::LeaveLobby(const struct FSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.LeaveLobby");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.JoinLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::JoinLobby(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.JoinLobby");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.Callback = Callback;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.InviteUserToLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDInvitee                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::InviteUserToLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDInvitee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.InviteUserToLobby");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			struct FSteamID                                    SteamIDInvitee;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.SteamIDInvitee = SteamIDInvitee;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetNumLobbyMembers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMatchmaking::GetNumLobbyMembers(const struct FSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetNumLobbyMembers");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UMatchmaking::GetLobbyOwner(const struct FSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyOwner");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyMemberLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMatchmaking::GetLobbyMemberLimit(const struct FSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyMemberLimit");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyMemberData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMatchmaking::GetLobbyMemberData(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDUser, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyMemberData");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			struct FSteamID                                    SteamIDUser;
			class FString                                      Key;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.SteamIDUser = SteamIDUser;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyMemberByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Member                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UMatchmaking::GetLobbyMemberByIndex(const struct FSteamID& SteamIDLobby, int32_t Member)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyMemberByIndex");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			int32_t                                            Member;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.Member = Member;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyGameServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameServerIP                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameServerPort                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDGameServer                                          (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::GetLobbyGameServer(const struct FSteamID& SteamIDLobby, class FString* GameServerIP, int32_t* GameServerPort, struct FSteamID* SteamIDGameServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyGameServer");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			class FString                                      GameServerIP;
			int32_t                                            GameServerPort;
			struct FSteamID                                    SteamIDGameServer;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameServerIP != nullptr)
			*GameServerIP = params.GameServerIP;
		if (GameServerPort != nullptr)
			*GameServerPort = params.GameServerPort;
		if (SteamIDGameServer != nullptr)
			*SteamIDGameServer = params.SteamIDGameServer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyDataCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMatchmaking::GetLobbyDataCount(const struct FSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyDataCount");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyDataByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LobbyData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::GetLobbyDataByIndex(const struct FSteamID& SteamIDLobby, int32_t LobbyData, class FString* Key, class FString* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyDataByIndex");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			int32_t                                            LobbyData;
			class FString                                      Key;
			class FString                                      Value;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.LobbyData = LobbyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMatchmaking::GetLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyData");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			class FString                                      Key;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyChatEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MessageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamChatEntryType                                ChatEntryType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMatchmaking::GetLobbyChatEntry(const struct FSteamID& SteamIDLobby, int32_t MessageID, struct FSteamID* SteamIDUser, class FString* Message, ESteamChatEntryType* ChatEntryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyChatEntry");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			int32_t                                            MessageID;
			struct FSteamID                                    SteamIDUser;
			class FString                                      Message;
			ESteamChatEntryType                                ChatEntryType;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.MessageID = MessageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamIDUser != nullptr)
			*SteamIDUser = params.SteamIDUser;
		if (Message != nullptr)
			*Message = params.Message;
		if (ChatEntryType != nullptr)
			*ChatEntryType = params.ChatEntryType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetLobbyByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Lobby                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID UMatchmaking::GetLobbyByIndex(int32_t Lobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetLobbyByIndex");
		
		struct
		{
			int32_t                                            Lobby;
		} params;
		params.Lobby = Lobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.GetFavoriteGameCount
	 * 		Flags  -> ()
	 */
	int32_t UMatchmaking::GetFavoriteGameCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetFavoriteGameCount");
		
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
	 * 		Name   -> Function SteamCore.Matchmaking.GetFavoriteGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Game                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectionPort                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ESteamFavoriteFlags>                        Flags                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeLastPlayedOnServer                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::GetFavoriteGame(int32_t Game, int32_t* AppID, class FString* IP, int32_t* ConnectionPort, int32_t* QueryPort, TArray<ESteamFavoriteFlags>* Flags, int32_t* TimeLastPlayedOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.GetFavoriteGame");
		
		struct
		{
			int32_t                                            Game;
			int32_t                                            AppID;
			class FString                                      IP;
			int32_t                                            ConnectionPort;
			int32_t                                            QueryPort;
			TArray<ESteamFavoriteFlags>                        Flags;
			int32_t                                            TimeLastPlayedOnServer;
		} params;
		params.Game = Game;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppID != nullptr)
			*AppID = params.AppID;
		if (IP != nullptr)
			*IP = params.IP;
		if (ConnectionPort != nullptr)
			*ConnectionPort = params.ConnectionPort;
		if (QueryPort != nullptr)
			*QueryPort = params.QueryPort;
		if (Flags != nullptr)
			*Flags = params.Flags;
		if (TimeLastPlayedOnServer != nullptr)
			*TimeLastPlayedOnServer = params.TimeLastPlayedOnServer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.DeleteLobbyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatchmaking::DeleteLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.DeleteLobbyData");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
			class FString                                      Key;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.CreateLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESteamLobbyType                                    LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::CreateLobby(const class FScriptDelegate& Callback, ESteamLobbyType LobbyType, int32_t MaxMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.CreateLobby");
		
		struct
		{
			class FScriptDelegate                              Callback;
			ESteamLobbyType                                    LobbyType;
			int32_t                                            MaxMembers;
		} params;
		params.Callback = Callback;
		params.LobbyType = LobbyType;
		params.MaxMembers = MaxMembers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.AddRequestLobbyListStringFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ValueToMatch                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLobbyComparison                              ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::AddRequestLobbyListStringFilter(const class FString& KeyToMatch, const class FString& ValueToMatch, ESteamLobbyComparison ComparisonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListStringFilter");
		
		struct
		{
			class FString                                      KeyToMatch;
			class FString                                      ValueToMatch;
			ESteamLobbyComparison                              ComparisonType;
		} params;
		params.KeyToMatch = KeyToMatch;
		params.ValueToMatch = ValueToMatch;
		params.ComparisonType = ComparisonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::AddRequestLobbyListResultCountFilter(int32_t MaxResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter");
		
		struct
		{
			int32_t                                            MaxResults;
		} params;
		params.MaxResults = MaxResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ValueToMatch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLobbyComparison                              ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::AddRequestLobbyListNumericalFilter(const class FString& KeyToMatch, int32_t ValueToMatch, ESteamLobbyComparison ComparisonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter");
		
		struct
		{
			class FString                                      KeyToMatch;
			int32_t                                            ValueToMatch;
			ESteamLobbyComparison                              ComparisonType;
		} params;
		params.KeyToMatch = KeyToMatch;
		params.ValueToMatch = ValueToMatch;
		params.ComparisonType = ComparisonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyToMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ValueToBeCloseTo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::AddRequestLobbyListNearValueFilter(const class FString& KeyToMatch, int32_t ValueToBeCloseTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter");
		
		struct
		{
			class FString                                      KeyToMatch;
			int32_t                                            ValueToBeCloseTo;
		} params;
		params.KeyToMatch = KeyToMatch;
		params.ValueToBeCloseTo = ValueToBeCloseTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotsAvailable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable");
		
		struct
		{
			int32_t                                            SlotsAvailable;
		} params;
		params.SlotsAvailable = SlotsAvailable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamLobbyDistanceFilter                          LobbyDistanceFilter                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter");
		
		struct
		{
			ESteamLobbyDistanceFilter                          LobbyDistanceFilter;
		} params;
		params.LobbyDistanceFilter = LobbyDistanceFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(const struct FSteamID& SteamIDLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter");
		
		struct
		{
			struct FSteamID                                    SteamIDLobby;
		} params;
		params.SteamIDLobby = SteamIDLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Matchmaking.AddFavoriteGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectionPort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ESteamFavoriteFlags>                        Flags                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeLastPlayedOnServer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMatchmaking::AddFavoriteGame(int32_t AppID, const class FString& IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags, int32_t TimeLastPlayedOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Matchmaking.AddFavoriteGame");
		
		struct
		{
			int32_t                                            AppID;
			class FString                                      IP;
			int32_t                                            ConnectionPort;
			int32_t                                            QueryPort;
			TArray<ESteamFavoriteFlags>                        Flags;
			int32_t                                            TimeLastPlayedOnServer;
		} params;
		params.AppID = AppID;
		params.IP = IP;
		params.ConnectionPort = ConnectionPort;
		params.QueryPort = QueryPort;
		params.Flags = Flags;
		params.TimeLastPlayedOnServer = TimeLastPlayedOnServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMatchmaking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchmaking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Matchmaking");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreateLobbyData                            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreMatchmakingAsyncActionCreateLobby::HandleCallback(const struct FCreateLobbyData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback");
		
		struct
		{
			struct FCreateLobbyData                            Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLobbyType                                    LobbyType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxMembers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingAsyncActionCreateLobby* USteamCoreMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(class UObject* WorldContextObject, ESteamLobbyType LobbyType, int32_t MaxMembers, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			ESteamLobbyType                                    LobbyType;
			int32_t                                            MaxMembers;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LobbyType = LobbyType;
		params.MaxMembers = MaxMembers;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreMatchmakingAsyncActionCreateLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingAsyncActionRequestLobbyList* USteamCoreMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(class UObject* WorldContextObject, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLobbyMatchList                             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreMatchmakingAsyncActionRequestLobbyList::HandleCallback(const struct FLobbyMatchList& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback");
		
		struct
		{
			struct FLobbyMatchList                             Data;
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
	 * 		Name   -> PredefindFunction USteamCoreMatchmakingAsyncActionRequestLobbyList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDLobby                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingAsyncActionJoinLobby* USteamCoreMatchmakingAsyncActionJoinLobby::JoinLobbyAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDLobby, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamID                                    SteamIDLobby;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamIDLobby = SteamIDLobby;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJoinLobbyData                              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreMatchmakingAsyncActionJoinLobby::HandleCallback(const struct FJoinLobbyData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback");
		
		struct
		{
			struct FJoinLobbyData                              Data;
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
	 * 		Name   -> PredefindFunction USteamCoreMatchmakingAsyncActionJoinLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreCreateSession.CreateSteamCoreSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FSteamSessionSetting>   SessionSettings                                            (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowInvites                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsesPresence                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinViaPresence                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinViaPresenceFriendsOnly                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAntiCheatProtected                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsesStats                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldAdvertise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLobbiesVoiceChatIfAvailable                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreCreateSession* USteamCoreCreateSession::CreateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSetting> SessionSettings, const class FString& SessionName, int32_t MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreCreateSession.CreateSteamCoreSession");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TMap<class FString, struct FSteamSessionSetting>   SessionSettings;
			class FString                                      SessionName;
			int32_t                                            MaxPlayers;
			bool                                               bUseLAN;
			bool                                               bAllowInvites;
			bool                                               bUsesPresence;
			bool                                               bAllowJoinViaPresence;
			bool                                               bAllowJoinViaPresenceFriendsOnly;
			bool                                               bAntiCheatProtected;
			bool                                               bUsesStats;
			bool                                               bShouldAdvertise;
			bool                                               bUseLobbiesVoiceChatIfAvailable;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SessionSettings = SessionSettings;
		params.SessionName = SessionName;
		params.MaxPlayers = MaxPlayers;
		params.bUseLAN = bUseLAN;
		params.bAllowInvites = bAllowInvites;
		params.bUsesPresence = bUsesPresence;
		params.bAllowJoinViaPresence = bAllowJoinViaPresence;
		params.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
		params.bAntiCheatProtected = bAntiCheatProtected;
		params.bUsesStats = bUsesStats;
		params.bShouldAdvertise = bShouldAdvertise;
		params.bUseLobbiesVoiceChatIfAvailable = bUseLobbiesVoiceChatIfAvailable;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreCreateSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreCreateSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreCreateSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFindSession.OnCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFindSession::OnCompleted(bool bSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFindSession.OnCompleted");
		
		struct
		{
			bool                                               bSuccessful;
		} params;
		params.bSuccessful = bSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreFindSession.FindSteamCoreSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FSteamSessionSearchSetting> SearchSettings                                             (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamSessionFindType                              ServerType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEmptyServersOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSecureServersOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreFindSession* USteamCoreFindSession::FindSteamCoreSessions(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSearchSetting> SearchSettings, int32_t MaxResults, bool bUseLAN, ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreFindSession.FindSteamCoreSessions");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TMap<class FString, struct FSteamSessionSearchSetting> SearchSettings;
			int32_t                                            MaxResults;
			bool                                               bUseLAN;
			ESteamSessionFindType                              ServerType;
			bool                                               bEmptyServersOnly;
			bool                                               bSecureServersOnly;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SearchSettings = SearchSettings;
		params.MaxResults = MaxResults;
		params.bUseLAN = bUseLAN;
		params.ServerType = ServerType;
		params.bEmptyServersOnly = bEmptyServersOnly;
		params.bSecureServersOnly = bSecureServersOnly;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreFindSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFindSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreFindSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreDestroySession.OnCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SessionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreDestroySession::OnCompleted(const class FName& SessionName, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreDestroySession.OnCompleted");
		
		struct
		{
			class FName                                        SessionName;
			bool                                               bWasSuccessful;
		} params;
		params.SessionName = SessionName;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreDestroySession.DestroySteamCoreSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreDestroySession* USteamCoreDestroySession::DestroySteamCoreSession(class UObject* WorldContextObject, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreDestroySession.DestroySteamCoreSession");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreDestroySession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreDestroySession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreDestroySession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUpdateSession.UpdateSteamCoreSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FSteamSessionSearchSetting> Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUpdateSession* USteamCoreUpdateSession::UpdateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSearchSetting> Settings, const class FString& SessionName, int32_t MaxPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUpdateSession.UpdateSteamCoreSession");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TMap<class FString, struct FSteamSessionSearchSetting> Settings;
			class FString                                      SessionName;
			int32_t                                            MaxPlayers;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Settings = Settings;
		params.SessionName = SessionName;
		params.MaxPlayers = MaxPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUpdateSession.OnCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SessionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUpdateSession::OnCompleted(const class FName& SessionName, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUpdateSession.OnCompleted");
		
		struct
		{
			class FName                                        SessionName;
			bool                                               bWasSuccessful;
		} params;
		params.SessionName = SessionName;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUpdateSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUpdateSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUpdateSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.MatchmakingServers.ServerRules
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingServers::ServerRules(const class FScriptDelegate& Callback, const class FString& IP, int32_t QueryPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.ServerRules");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      IP;
			int32_t                                            QueryPort;
		} params;
		params.Callback = Callback;
		params.IP = IP;
		params.QueryPort = QueryPort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.MatchmakingServers.RequestSpectatorServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ServerCallback                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingServers::RequestSpectatorServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestSpectatorServerList");
		
		struct
		{
			class FScriptDelegate                              ServerCallback;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.ServerCallback = ServerCallback;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.MatchmakingServers.RequestLANServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ServerCallback                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingServers::RequestLANServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestLANServerList");
		
		struct
		{
			class FScriptDelegate                              ServerCallback;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.ServerCallback = ServerCallback;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.MatchmakingServers.RequestInternetServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ServerCallback                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingServers::RequestInternetServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestInternetServerList");
		
		struct
		{
			class FScriptDelegate                              ServerCallback;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.ServerCallback = ServerCallback;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.MatchmakingServers.RequestHistoryServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ServerCallback                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingServers::RequestHistoryServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestHistoryServerList");
		
		struct
		{
			class FScriptDelegate                              ServerCallback;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.ServerCallback = ServerCallback;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.MatchmakingServers.RequestFriendsServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ServerCallback                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingServers::RequestFriendsServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestFriendsServerList");
		
		struct
		{
			class FScriptDelegate                              ServerCallback;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.ServerCallback = ServerCallback;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.MatchmakingServers.RequestFavoritesServerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ServerCallback                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingServers::RequestFavoritesServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.RequestFavoritesServerList");
		
		struct
		{
			class FScriptDelegate                              ServerCallback;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.ServerCallback = ServerCallback;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.MatchmakingServers.PingServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchmakingServers::PingServer(const class FScriptDelegate& Callback, const class FString& IP, int32_t QueryPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.MatchmakingServers.PingServer");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      IP;
			int32_t                                            QueryPort;
		} params;
		params.Callback = Callback;
		params.IP = IP;
		params.QueryPort = QueryPort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMatchmakingServers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchmakingServers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.MatchmakingServers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingServersAsyncActionPingServer* USteamCoreMatchmakingServersAsyncActionPingServer::PingServerAsync(class UObject* WorldContextObject, const class FString& IP, int32_t Port, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      IP;
			int32_t                                            Port;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.IP = IP;
		params.Port = Port;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameServerItem                             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreMatchmakingServersAsyncActionPingServer::HandleCallback(const struct FGameServerItem& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback");
		
		struct
		{
			struct FGameServerItem                             Data;
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
	 * 		Name   -> PredefindFunction USteamCoreMatchmakingServersAsyncActionPingServer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreMatchmakingServersAsyncActionPingServer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonResponsive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UServerFilter*                               ServerFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			float                                              Timeout;
			int32_t                                            MaxResults;
			bool                                               bIgnoreNonResponsive;
			class UServerFilter*                               ServerFilter;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.Timeout = Timeout;
		params.MaxResults = MaxResults;
		params.bIgnoreNonResponsive = bIgnoreNonResponsive;
		params.ServerFilter = ServerFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished
	 * 		Flags  -> ()
	 */
	void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleServerListFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished");
		
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
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameServerItem                             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleCallback(const struct FGameServerItem& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback");
		
		struct
		{
			struct FGameServerItem                             Data;
		} params;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreMatchmakingServersAsyncActionRequestServerList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreMatchmakingServersAsyncActionRequestServerList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            QueryPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreMatchmakingServersAsyncActionServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(class UObject* WorldContextObject, const class FString& IP, int32_t QueryPort, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      IP;
			int32_t                                            QueryPort;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.IP = IP;
		params.QueryPort = QueryPort;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameServerRule>                     Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreMatchmakingServersAsyncActionServerRules::HandleCallback(TArray<struct FGameServerRule> Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback");
		
		struct
		{
			TArray<struct FGameServerRule>                     Data;
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
	 * 		Name   -> PredefindFunction USteamCoreMatchmakingServersAsyncActionServerRules.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreMatchmakingServersAsyncActionServerRules::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.GetFilters
	 * 		Flags  -> ()
	 */
	TMap<class FString, class FString> UServerFilter::GetFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.GetFilters");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterWhitelisted
	 * 		Flags  -> ()
	 */
	void UServerFilter::AddFilterWhitelisted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterWhitelisted");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterVersion(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterVersion");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterSecure
	 * 		Flags  -> ()
	 */
	void UServerFilter::AddFilterSecure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterSecure");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterProxy
	 * 		Flags  -> ()
	 */
	void UServerFilter::AddFilterProxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterProxy");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterPassword
	 * 		Flags  -> ()
	 */
	void UServerFilter::AddFilterPassword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterPassword");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterOr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterOr(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterOr");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterNotFull
	 * 		Flags  -> ()
	 */
	void UServerFilter::AddFilterNotFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterNotFull");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterNotAppId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterNotAppId(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterNotAppId");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterNor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterNor(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterNor");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterNoPlayers
	 * 		Flags  -> ()
	 */
	void UServerFilter::AddFilterNoPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterNoPlayers");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterNand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterNand(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterNand");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterName(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterName");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterMap(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterMap");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterLinux
	 * 		Flags  -> ()
	 */
	void UServerFilter::AddFilterLinux()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterLinux");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterHasPlayers
	 * 		Flags  -> ()
	 */
	void UServerFilter::AddFilterHasPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterHasPlayers");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterGameTagsNor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterGameTagsNor(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameTagsNor");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterGameTagsAnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterGameTagsAnd(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameTagsAnd");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterGameDataOr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterGameDataOr(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameDataOr");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterGameDataNor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterGameDataNor(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameDataNor");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterGameDataAnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterGameDataAnd(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameDataAnd");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterGameAddr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterGameAddr(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterGameAddr");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterDedicated
	 * 		Flags  -> ()
	 */
	void UServerFilter::AddFilterDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterDedicated");
		
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
	 * 		Name   -> Function SteamCore.ServerFilter.AddFilterAnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerFilter::AddFilterAnd(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ServerFilter.AddFilterAnd");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UServerFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.ServerFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Music.SetVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              flVolume                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMusic::SetVolume(float flVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Music.SetVolume");
		
		struct
		{
			float                                              flVolume;
		} params;
		params.flVolume = flVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Music.PlayPrevious
	 * 		Flags  -> ()
	 */
	void UMusic::PlayPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Music.PlayPrevious");
		
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
	 * 		Name   -> Function SteamCore.Music.PlayNext
	 * 		Flags  -> ()
	 */
	void UMusic::PlayNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Music.PlayNext");
		
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
	 * 		Name   -> Function SteamCore.Music.Play
	 * 		Flags  -> ()
	 */
	void UMusic::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Music.Play");
		
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
	 * 		Name   -> Function SteamCore.Music.Pause
	 * 		Flags  -> ()
	 */
	void UMusic::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Music.Pause");
		
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
	 * 		Name   -> Function SteamCore.Music.GetVolume
	 * 		Flags  -> ()
	 */
	float UMusic::GetVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Music.GetVolume");
		
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
	 * 		Name   -> Function SteamCore.Music.GetPlaybackStatus
	 * 		Flags  -> ()
	 */
	ESteamAudioPlaybackStatus UMusic::GetPlaybackStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Music.GetPlaybackStatus");
		
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
	 * 		Name   -> Function SteamCore.Music.BIsPlaying
	 * 		Flags  -> ()
	 */
	bool UMusic::BIsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Music.BIsPlaying");
		
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
	 * 		Name   -> Function SteamCore.Music.BIsEnabled
	 * 		Flags  -> ()
	 */
	bool UMusic::BIsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Music.BIsEnabled");
		
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
	 * 		Name   -> PredefindFunction UMusic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Music");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Networking.SendP2PPacket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDRemote                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		ESteamP2PSend                                      P2PSendType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNetworking::SendP2PPacket(const struct FSteamID& SteamIDRemote, TArray<unsigned char> Data, ESteamP2PSend P2PSendType, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.SendP2PPacket");
		
		struct
		{
			struct FSteamID                                    SteamIDRemote;
			TArray<unsigned char>                              Data;
			ESteamP2PSend                                      P2PSendType;
			int32_t                                            Channel;
		} params;
		params.SteamIDRemote = SteamIDRemote;
		params.Data = Data;
		params.P2PSendType = P2PSendType;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Networking.ReadP2PPacket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    OutSteamIdRemote                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MessageSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNetworking::ReadP2PPacket(TArray<unsigned char>* Data, struct FSteamID* OutSteamIdRemote, int32_t MessageSize, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.ReadP2PPacket");
		
		struct
		{
			TArray<unsigned char>                              Data;
			struct FSteamID                                    OutSteamIdRemote;
			int32_t                                            MessageSize;
			int32_t                                            Channel;
		} params;
		params.MessageSize = MessageSize;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		if (OutSteamIdRemote != nullptr)
			*OutSteamIdRemote = params.OutSteamIdRemote;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Networking.IsP2PPacketAvailable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MessageSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNetworking::IsP2PPacketAvailable(int32_t* MessageSize, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.IsP2PPacketAvailable");
		
		struct
		{
			int32_t                                            MessageSize;
			int32_t                                            Channel;
		} params;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MessageSize != nullptr)
			*MessageSize = params.MessageSize;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Networking.GetP2PSessionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDRemote                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamP2PSessionState                       ConnectionState                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UNetworking::GetP2PSessionState(const struct FSteamID& SteamIDRemote, struct FSteamP2PSessionState* ConnectionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.GetP2PSessionState");
		
		struct
		{
			struct FSteamID                                    SteamIDRemote;
			struct FSteamP2PSessionState                       ConnectionState;
		} params;
		params.SteamIDRemote = SteamIDRemote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConnectionState != nullptr)
			*ConnectionState = params.ConnectionState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Networking.CloseP2PSessionWithUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDRemote                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNetworking::CloseP2PSessionWithUser(const struct FSteamID& SteamIDRemote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.CloseP2PSessionWithUser");
		
		struct
		{
			struct FSteamID                                    SteamIDRemote;
		} params;
		params.SteamIDRemote = SteamIDRemote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Networking.CloseP2PChannelWithUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDRemote                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNetworking::CloseP2PChannelWithUser(const struct FSteamID& SteamIDRemote, int32_t Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.CloseP2PChannelWithUser");
		
		struct
		{
			struct FSteamID                                    SteamIDRemote;
			int32_t                                            Channel;
		} params;
		params.SteamIDRemote = SteamIDRemote;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Networking.AllowP2PPacketRelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNetworking::AllowP2PPacketRelay(bool bAllow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.AllowP2PPacketRelay");
		
		struct
		{
			bool                                               bAllow;
		} params;
		params.bAllow = bAllow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Networking.AcceptP2PSessionWithUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDRemote                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNetworking::AcceptP2PSessionWithUser(const struct FSteamID& SteamIDRemote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Networking.AcceptP2PSessionWithUser");
		
		struct
		{
			struct FSteamID                                    SteamIDRemote;
		} params;
		params.SteamIDRemote = SteamIDRemote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNetworking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Networking");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.NetworkingUtils.ParsePingLocationString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamNetworkPingLocation                   Result                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UNetworkingUtils::ParsePingLocationString(const class FString& String, struct FSteamNetworkPingLocation* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.ParsePingLocationString");
		
		struct
		{
			class FString                                      String;
			struct FSteamNetworkPingLocation                   Result;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.NetworkingUtils.InitRelayNetworkAccess
	 * 		Flags  -> ()
	 */
	void UNetworkingUtils::InitRelayNetworkAccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.InitRelayNetworkAccess");
		
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
	 * 		Name   -> Function SteamCore.NetworkingUtils.GetLocalPingLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamNetworkPingLocation                   Result                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	float UNetworkingUtils::GetLocalPingLocation(struct FSteamNetworkPingLocation* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.GetLocalPingLocation");
		
		struct
		{
			struct FSteamNetworkPingLocation                   Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamNetworkPingLocation                   RemoteLocation                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UNetworkingUtils::EstimatePingTimeFromLocalHost(const struct FSteamNetworkPingLocation& RemoteLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost");
		
		struct
		{
			struct FSteamNetworkPingLocation                   RemoteLocation;
		} params;
		params.RemoteLocation = RemoteLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamNetworkPingLocation                   Location1                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSteamNetworkPingLocation                   Location2                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UNetworkingUtils::EstimatePingTimeBetweenTwoLocations(const struct FSteamNetworkPingLocation& Location1, const struct FSteamNetworkPingLocation& Location2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations");
		
		struct
		{
			struct FSteamNetworkPingLocation                   Location1;
			struct FSteamNetworkPingLocation                   Location2;
		} params;
		params.Location1 = Location1;
		params.Location2 = Location2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.NetworkingUtils.ConvertPingLocationToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamNetworkPingLocation                   Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNetworkingUtils::ConvertPingLocationToString(const struct FSteamNetworkPingLocation& Location, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.ConvertPingLocationToString");
		
		struct
		{
			struct FSteamNetworkPingLocation                   Location;
			class FString                                      String;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.NetworkingUtils.CheckPingDataUpToDate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxAgeSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNetworkingUtils::CheckPingDataUpToDate(float MaxAgeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.NetworkingUtils.CheckPingDataUpToDate");
		
		struct
		{
			float                                              MaxAgeSeconds;
		} params;
		params.MaxAgeSeconds = MaxAgeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNetworkingUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkingUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.NetworkingUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ParentalSettings.BIsParentalLockLocked
	 * 		Flags  -> ()
	 */
	bool UParentalSettings::BIsParentalLockLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsParentalLockLocked");
		
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
	 * 		Name   -> Function SteamCore.ParentalSettings.BIsParentalLockEnabled
	 * 		Flags  -> ()
	 */
	bool UParentalSettings::BIsParentalLockEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsParentalLockEnabled");
		
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
	 * 		Name   -> Function SteamCore.ParentalSettings.BIsFeatureInBlockList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamParentalFeature                              Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UParentalSettings::BIsFeatureInBlockList(ESteamParentalFeature Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsFeatureInBlockList");
		
		struct
		{
			ESteamParentalFeature                              Feature;
		} params;
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ParentalSettings.BIsFeatureBlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamParentalFeature                              Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UParentalSettings::BIsFeatureBlocked(ESteamParentalFeature Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsFeatureBlocked");
		
		struct
		{
			ESteamParentalFeature                              Feature;
		} params;
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ParentalSettings.BIsAppInBlockList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UParentalSettings::BIsAppInBlockList(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsAppInBlockList");
		
		struct
		{
			int32_t                                            AppID;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.ParentalSettings.BIsAppBlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UParentalSettings::BIsAppBlocked(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.ParentalSettings.BIsAppBlocked");
		
		struct
		{
			int32_t                                            AppID;
		} params;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UParentalSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParentalSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.ParentalSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.OnReservationCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPartyBeaconID                              BeaconID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamParties::OnReservationCompleted(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.OnReservationCompleted");
		
		struct
		{
			struct FPartyBeaconID                              BeaconID;
			struct FSteamID                                    SteamIDUser;
		} params;
		params.BeaconID = BeaconID;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.JoinParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPartyBeaconID                              BeaconID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamParties::JoinParty(const class FScriptDelegate& Callback, const struct FPartyBeaconID& BeaconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.JoinParty");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPartyBeaconID                              BeaconID;
		} params;
		params.Callback = Callback;
		params.BeaconID = BeaconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.GetNumAvailableBeaconLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumLocations                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamParties::GetNumAvailableBeaconLocations(int32_t* NumLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetNumAvailableBeaconLocations");
		
		struct
		{
			int32_t                                            NumLocations;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumLocations != nullptr)
			*NumLocations = params.NumLocations;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.GetNumActiveBeacons
	 * 		Flags  -> ()
	 */
	int32_t USteamParties::GetNumActiveBeacons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetNumActiveBeacons");
		
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
	 * 		Name   -> Function SteamCore.SteamParties.GetBeaconLocationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamPartyBeaconLocation                   BeaconLocation                                             (Parm, NativeAccessSpecifierPublic)
	 * 		ESteamPartiesBeaconLocationData                    EData                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PCHDataStringOut                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamParties::GetBeaconLocationData(const struct FSteamPartyBeaconLocation& BeaconLocation, ESteamPartiesBeaconLocationData EData, class FString* PCHDataStringOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetBeaconLocationData");
		
		struct
		{
			struct FSteamPartyBeaconLocation                   BeaconLocation;
			ESteamPartiesBeaconLocationData                    EData;
			class FString                                      PCHDataStringOut;
		} params;
		params.BeaconLocation = BeaconLocation;
		params.EData = EData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PCHDataStringOut != nullptr)
			*PCHDataStringOut = params.PCHDataStringOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.GetBeaconDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPartyBeaconID                              BeaconID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDBeaconOwner                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamPartyBeaconLocation                   Location                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutMetadata                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamParties::GetBeaconDetails(const struct FPartyBeaconID& BeaconID, struct FSteamID* SteamIDBeaconOwner, struct FSteamPartyBeaconLocation* Location, class FString* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetBeaconDetails");
		
		struct
		{
			struct FPartyBeaconID                              BeaconID;
			struct FSteamID                                    SteamIDBeaconOwner;
			struct FSteamPartyBeaconLocation                   Location;
			class FString                                      OutMetadata;
		} params;
		params.BeaconID = BeaconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamIDBeaconOwner != nullptr)
			*SteamIDBeaconOwner = params.SteamIDBeaconOwner;
		if (Location != nullptr)
			*Location = params.Location;
		if (OutMetadata != nullptr)
			*OutMetadata = params.OutMetadata;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.GetBeaconByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPartyBeaconID USteamParties::GetBeaconByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetBeaconByIndex");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.GetAvailableBeaconLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamPartyBeaconLocation>           LocationList                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxNumLocations                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamParties::GetAvailableBeaconLocations(TArray<struct FSteamPartyBeaconLocation>* LocationList, int32_t MaxNumLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.GetAvailableBeaconLocations");
		
		struct
		{
			TArray<struct FSteamPartyBeaconLocation>           LocationList;
			int32_t                                            MaxNumLocations;
		} params;
		params.MaxNumLocations = MaxNumLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationList != nullptr)
			*LocationList = params.LocationList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.DestroyBeacon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPartyBeaconID                              BeaconID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamParties::DestroyBeacon(const struct FPartyBeaconID& BeaconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.DestroyBeacon");
		
		struct
		{
			struct FPartyBeaconID                              BeaconID;
		} params;
		params.BeaconID = BeaconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.CreateBeacon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OpenSlots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamPartyBeaconLocation                   BeaconLocation                                             (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConnectString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamParties::CreateBeacon(const class FScriptDelegate& Callback, int32_t OpenSlots, const struct FSteamPartyBeaconLocation& BeaconLocation, const class FString& ConnectString, const class FString& MetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.CreateBeacon");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            OpenSlots;
			struct FSteamPartyBeaconLocation                   BeaconLocation;
			class FString                                      ConnectString;
			class FString                                      MetaData;
		} params;
		params.Callback = Callback;
		params.OpenSlots = OpenSlots;
		params.BeaconLocation = BeaconLocation;
		params.ConnectString = ConnectString;
		params.MetaData = MetaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.ChangeNumOpenSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPartyBeaconID                              BeaconID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OpenSlots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamParties::ChangeNumOpenSlots(const class FScriptDelegate& Callback, const struct FPartyBeaconID& BeaconID, int32_t OpenSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.ChangeNumOpenSlots");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPartyBeaconID                              BeaconID;
			int32_t                                            OpenSlots;
		} params;
		params.Callback = Callback;
		params.BeaconID = BeaconID;
		params.OpenSlots = OpenSlots;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamParties.CancelReservation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPartyBeaconID                              BeaconID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamParties::CancelReservation(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamParties.CancelReservation");
		
		struct
		{
			struct FPartyBeaconID                              BeaconID;
			struct FSteamID                                    SteamIDUser;
		} params;
		params.BeaconID = BeaconID;
		params.SteamIDUser = SteamIDUser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamParties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamParties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamParties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPartyBeaconID                              BeaconID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreSteamPartiesAsyncActionJoinParty* USteamCoreSteamPartiesAsyncActionJoinParty::JoinPartyAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPartyBeaconID                              BeaconID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.BeaconID = BeaconID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJoinPartyData                              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreSteamPartiesAsyncActionJoinParty::HandleCallback(const struct FJoinPartyData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback");
		
		struct
		{
			struct FJoinPartyData                              Data;
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
	 * 		Name   -> PredefindFunction USteamCoreSteamPartiesAsyncActionJoinParty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreSteamPartiesAsyncActionJoinParty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreateBeaconData                           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreSteamPartiesAsyncActionCreateBeacon::HandleCallback(const struct FCreateBeaconData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback");
		
		struct
		{
			struct FCreateBeaconData                           Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OpenSlots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamPartyBeaconLocation                   BeaconLocation                                             (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConnectString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreSteamPartiesAsyncActionCreateBeacon* USteamCoreSteamPartiesAsyncActionCreateBeacon::CreateBeaconAsync(class UObject* WorldContextObject, int32_t OpenSlots, const struct FSteamPartyBeaconLocation& BeaconLocation, const class FString& ConnectString, const class FString& MetaData, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            OpenSlots;
			struct FSteamPartyBeaconLocation                   BeaconLocation;
			class FString                                      ConnectString;
			class FString                                      MetaData;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.OpenSlots = OpenSlots;
		params.BeaconLocation = BeaconLocation;
		params.ConnectString = ConnectString;
		params.MetaData = MetaData;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreSteamPartiesAsyncActionCreateBeacon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChangeNumOpenSlotsData                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::HandleCallback(const struct FChangeNumOpenSlotsData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback");
		
		struct
		{
			struct FChangeNumOpenSlotsData                     Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPartyBeaconID                              BeaconID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OpenSlots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::ChangeNumOpenSlotsAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, int32_t OpenSlots, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPartyBeaconID                              BeaconID;
			int32_t                                            OpenSlots;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.BeaconID = BeaconID;
		params.OpenSlots = OpenSlots;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemotePlay.GetSessionSteamID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SessionID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID URemotePlay::GetSessionSteamID(int32_t SessionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionSteamID");
		
		struct
		{
			int32_t                                            SessionID;
		} params;
		params.SessionID = SessionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemotePlay.GetSessionID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SessionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URemotePlay::GetSessionID(int32_t SessionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionID");
		
		struct
		{
			int32_t                                            SessionIndex;
		} params;
		params.SessionIndex = SessionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemotePlay.GetSessionCount
	 * 		Flags  -> ()
	 */
	int32_t URemotePlay::GetSessionCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionCount");
		
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
	 * 		Name   -> Function SteamCore.RemotePlay.GetSessionClientName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SessionID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString URemotePlay::GetSessionClientName(int32_t SessionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionClientName");
		
		struct
		{
			int32_t                                            SessionID;
		} params;
		params.SessionID = SessionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemotePlay.GetSessionClientFormFactor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SessionID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamCoreDeviceFormFactor URemotePlay::GetSessionClientFormFactor(int32_t SessionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.GetSessionClientFormFactor");
		
		struct
		{
			int32_t                                            SessionID;
		} params;
		params.SessionID = SessionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemotePlay.BSendRemotePlayTogetherInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDFriend                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemotePlay::BSendRemotePlayTogetherInvite(const struct FSteamID& SteamIDFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.BSendRemotePlayTogetherInvite");
		
		struct
		{
			struct FSteamID                                    SteamIDFriend;
		} params;
		params.SteamIDFriend = SteamIDFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemotePlay.BGetSessionClientResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SessionID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ResolutionX                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ResolutionY                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemotePlay::BGetSessionClientResolution(int32_t SessionID, int32_t* ResolutionX, int32_t* ResolutionY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemotePlay.BGetSessionClientResolution");
		
		struct
		{
			int32_t                                            SessionID;
			int32_t                                            ResolutionX;
			int32_t                                            ResolutionY;
		} params;
		params.SessionID = SessionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResolutionX != nullptr)
			*ResolutionX = params.ResolutionX;
		if (ResolutionY != nullptr)
			*ResolutionY = params.ResolutionY;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemotePlay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemotePlay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.RemotePlay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.UGCRead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCHandle                             Content                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              OutData                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataToRead                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamUGCReadAction                                Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URemoteStorage::UGCRead(const struct FSteamUGCHandle& Content, TArray<unsigned char>* OutData, int32_t DataToRead, int32_t Offset, ESteamUGCReadAction Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.UGCRead");
		
		struct
		{
			struct FSteamUGCHandle                             Content;
			TArray<unsigned char>                              OutData;
			int32_t                                            DataToRead;
			int32_t                                            Offset;
			ESteamUGCReadAction                                Action;
		} params;
		params.Content = Content;
		params.DataToRead = DataToRead;
		params.Offset = Offset;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutData != nullptr)
			*OutData = params.OutData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.UGCDownloadToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamUGCHandle                             Content                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Location                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoteStorage::UGCDownloadToLocation(const class FScriptDelegate& Callback, const struct FSteamUGCHandle& Content, const class FString& Location, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.UGCDownloadToLocation");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamUGCHandle                             Content;
			class FString                                      Location;
			int32_t                                            Priority;
		} params;
		params.Callback = Callback;
		params.Content = Content;
		params.Location = Location;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.UGCDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamUGCHandle                             Content                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoteStorage::UGCDownload(const class FScriptDelegate& Callback, const struct FSteamUGCHandle& Content, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.UGCDownload");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamUGCHandle                             Content;
			int32_t                                            Priority;
		} params;
		params.Callback = Callback;
		params.Content = Content;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.SetSyncPlatforms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamRemoteStoragePlatform                        RemoteStoragePlatform                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::SetSyncPlatforms(const class FString& File, ESteamRemoteStoragePlatform RemoteStoragePlatform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.SetSyncPlatforms");
		
		struct
		{
			class FString                                      File;
			ESteamRemoteStoragePlatform                        RemoteStoragePlatform;
		} params;
		params.File = File;
		params.RemoteStoragePlatform = RemoteStoragePlatform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.SetCloudEnabledForApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoteStorage::SetCloudEnabledForApp(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.SetCloudEnabledForApp");
		
		struct
		{
			bool                                               bEnabled;
		} params;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.IsCloudEnabledForApp
	 * 		Flags  -> ()
	 */
	bool URemoteStorage::IsCloudEnabledForApp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.IsCloudEnabledForApp");
		
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
	 * 		Name   -> Function SteamCore.RemoteStorage.IsCloudEnabledForAccount
	 * 		Flags  -> ()
	 */
	bool URemoteStorage::IsCloudEnabledForAccount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.IsCloudEnabledForAccount");
		
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
	 * 		Name   -> Function SteamCore.RemoteStorage.GetUGCDownloadProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesDownloaded                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesExpected                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::GetUGCDownloadProgress(const struct FSteamUGCHandle& Handle, int32_t* BytesDownloaded, int32_t* BytesExpected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetUGCDownloadProgress");
		
		struct
		{
			struct FSteamUGCHandle                             Handle;
			int32_t                                            BytesDownloaded;
			int32_t                                            BytesExpected;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BytesDownloaded != nullptr)
			*BytesDownloaded = params.BytesDownloaded;
		if (BytesExpected != nullptr)
			*BytesExpected = params.BytesExpected;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.GetUGCDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileSizeInBytes                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamIDOwner                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::GetUGCDetails(const struct FSteamUGCHandle& Handle, int32_t* AppID, class FString* Name, int32_t* FileSizeInBytes, struct FSteamID* SteamIDOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetUGCDetails");
		
		struct
		{
			struct FSteamUGCHandle                             Handle;
			int32_t                                            AppID;
			class FString                                      Name;
			int32_t                                            FileSizeInBytes;
			struct FSteamID                                    SteamIDOwner;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppID != nullptr)
			*AppID = params.AppID;
		if (Name != nullptr)
			*Name = params.Name;
		if (FileSizeInBytes != nullptr)
			*FileSizeInBytes = params.FileSizeInBytes;
		if (SteamIDOwner != nullptr)
			*SteamIDOwner = params.SteamIDOwner;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.GetSyncPlatforms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamRemoteStoragePlatform URemoteStorage::GetSyncPlatforms(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetSyncPlatforms");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.GetQuota
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TotalBytes                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AvailableBytes                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::GetQuota(int32_t* TotalBytes, int32_t* AvailableBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetQuota");
		
		struct
		{
			int32_t                                            TotalBytes;
			int32_t                                            AvailableBytes;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalBytes != nullptr)
			*TotalBytes = params.TotalBytes;
		if (AvailableBytes != nullptr)
			*AvailableBytes = params.AvailableBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.GetFileTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URemoteStorage::GetFileTimestamp(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetFileTimestamp");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.GetFileSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URemoteStorage::GetFileSize(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetFileSize");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.GetFileNameAndSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            File                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FileSizeInBytes                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString URemoteStorage::GetFileNameAndSize(int32_t File, int32_t* FileSizeInBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetFileNameAndSize");
		
		struct
		{
			int32_t                                            File;
			int32_t                                            FileSizeInBytes;
		} params;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileSizeInBytes != nullptr)
			*FileSizeInBytes = params.FileSizeInBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.GetFileCount
	 * 		Flags  -> ()
	 */
	int32_t URemoteStorage::GetFileCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetFileCount");
		
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
	 * 		Name   -> Function SteamCore.RemoteStorage.GetCachedUGCHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ICachedContent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamUGCHandle URemoteStorage::GetCachedUGCHandle(int32_t ICachedContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetCachedUGCHandle");
		
		struct
		{
			int32_t                                            ICachedContent;
		} params;
		params.ICachedContent = ICachedContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.GetCachedUGCCount
	 * 		Flags  -> ()
	 */
	int32_t URemoteStorage::GetCachedUGCCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.GetCachedUGCCount");
		
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
	 * 		Name   -> Function SteamCore.RemoteStorage.FileWriteStreamWriteChunk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCFileWriteStreamHandle                   Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::FileWriteStreamWriteChunk(const struct FUGCFileWriteStreamHandle& Handle, TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteStreamWriteChunk");
		
		struct
		{
			struct FUGCFileWriteStreamHandle                   Handle;
			TArray<unsigned char>                              Data;
		} params;
		params.Handle = Handle;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileWriteStreamOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUGCFileWriteStreamHandle URemoteStorage::FileWriteStreamOpen(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteStreamOpen");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileWriteStreamClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCFileWriteStreamHandle                   Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::FileWriteStreamClose(const struct FUGCFileWriteStreamHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteStreamClose");
		
		struct
		{
			struct FUGCFileWriteStreamHandle                   Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileWriteStreamCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCFileWriteStreamHandle                   Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::FileWriteStreamCancel(const struct FUGCFileWriteStreamHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteStreamCancel");
		
		struct
		{
			struct FUGCFileWriteStreamHandle                   Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileWriteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URemoteStorage::FileWriteAsync(const class FScriptDelegate& Callback, const class FString& File, TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWriteAsync");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      File;
			TArray<unsigned char>                              Data;
		} params;
		params.Callback = Callback;
		params.File = File;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileWrite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::FileWrite(const class FString& File, TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileWrite");
		
		struct
		{
			class FString                                      File;
			TArray<unsigned char>                              Data;
		} params;
		params.File = File;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileShare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoteStorage::FileShare(const class FScriptDelegate& Callback, const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileShare");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      File;
		} params;
		params.Callback = Callback;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileReadAsyncComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteStorageFileReadAsyncComplete         ReadCall                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesToRead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::FileReadAsyncComplete(const struct FRemoteStorageFileReadAsyncComplete& ReadCall, TArray<unsigned char>* Buffer, int32_t BytesToRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileReadAsyncComplete");
		
		struct
		{
			struct FRemoteStorageFileReadAsyncComplete         ReadCall;
			TArray<unsigned char>                              Buffer;
			int32_t                                            BytesToRead;
		} params;
		params.ReadCall = ReadCall;
		params.BytesToRead = BytesToRead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buffer != nullptr)
			*Buffer = params.Buffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileReadAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesToRead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoteStorage::FileReadAsync(const class FScriptDelegate& Callback, const class FString& File, int32_t Offset, int32_t BytesToRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileReadAsync");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      File;
			int32_t                                            Offset;
			int32_t                                            BytesToRead;
		} params;
		params.Callback = Callback;
		params.File = File;
		params.Offset = Offset;
		params.BytesToRead = BytesToRead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileRead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataToRead                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URemoteStorage::FileRead(const class FString& File, TArray<unsigned char>* Buffer, int32_t DataToRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileRead");
		
		struct
		{
			class FString                                      File;
			TArray<unsigned char>                              Buffer;
			int32_t                                            DataToRead;
		} params;
		params.File = File;
		params.DataToRead = DataToRead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buffer != nullptr)
			*Buffer = params.Buffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FilePersisted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::FilePersisted(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FilePersisted");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileForget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::FileForget(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileForget");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::FileExists(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileExists");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.RemoteStorage.FileDelete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URemoteStorage::FileDelete(const class FString& File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.RemoteStorage.FileDelete");
		
		struct
		{
			class FString                                      File;
		} params;
		params.File = File;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoteStorage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteStorage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.RemoteStorage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Screenshots.WriteScreenshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              PubRGB                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FScreenshotHandle UScreenshots::WriteScreenshot(TArray<unsigned char> PubRGB, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.WriteScreenshot");
		
		struct
		{
			TArray<unsigned char>                              PubRGB;
			int32_t                                            Width;
			int32_t                                            Height;
		} params;
		params.PubRGB = PubRGB;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Screenshots.TriggerScreenshot
	 * 		Flags  -> ()
	 */
	void UScreenshots::TriggerScreenshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.TriggerScreenshot");
		
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
	 * 		Name   -> Function SteamCore.Screenshots.TagUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScreenshotHandle                           Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScreenshots::TagUser(const struct FScreenshotHandle& Handle, const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.TagUser");
		
		struct
		{
			struct FScreenshotHandle                           Handle;
			struct FSteamID                                    SteamID;
		} params;
		params.Handle = Handle;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Screenshots.TagPublishedFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScreenshotHandle                           Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScreenshots::TagPublishedFile(const struct FScreenshotHandle& Handle, const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.TagPublishedFile");
		
		struct
		{
			struct FScreenshotHandle                           Handle;
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.Handle = Handle;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Screenshots.SetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScreenshotHandle                           Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Location                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScreenshots::SetLocation(const struct FScreenshotHandle& Handle, const class FString& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.SetLocation");
		
		struct
		{
			struct FScreenshotHandle                           Handle;
			class FString                                      Location;
		} params;
		params.Handle = Handle;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Screenshots.IsScreenshotsHooked
	 * 		Flags  -> ()
	 */
	bool UScreenshots::IsScreenshotsHooked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.IsScreenshotsHooked");
		
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
	 * 		Name   -> Function SteamCore.Screenshots.HookScreenshots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHook                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScreenshots::HookScreenshots(bool bHook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.HookScreenshots");
		
		struct
		{
			bool                                               bHook;
		} params;
		params.bHook = bHook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Screenshots.AddVRScreenshotToLibrary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamVRScreenshotType                             EType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VRFileName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FScreenshotHandle UScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, const class FString& Filename, const class FString& VRFileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.AddVRScreenshotToLibrary");
		
		struct
		{
			ESteamVRScreenshotType                             EType;
			class FString                                      Filename;
			class FString                                      VRFileName;
		} params;
		params.EType = EType;
		params.Filename = Filename;
		params.VRFileName = VRFileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Screenshots.AddScreenshotToLibrary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ThumbnailFilename                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FScreenshotHandle UScreenshots::AddScreenshotToLibrary(const class FString& Filename, const class FString& ThumbnailFilename, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Screenshots.AddScreenshotToLibrary");
		
		struct
		{
			class FString                                      Filename;
			class FString                                      ThumbnailFilename;
			int32_t                                            Width;
			int32_t                                            Height;
		} params;
		params.Filename = Filename;
		params.ThumbnailFilename = ThumbnailFilename;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScreenshots.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreenshots::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Screenshots");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.UpdateItemPreviewVideo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviewVideo                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::UpdateItemPreviewVideo(const struct FUGCUpdateHandle& Handle, int32_t Index, const class FString& PreviewVideo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.UpdateItemPreviewVideo");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			int32_t                                            Index;
			class FString                                      PreviewVideo;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		params.PreviewVideo = PreviewVideo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.UpdateItemPreviewFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviewFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::UpdateItemPreviewFile(const struct FUGCUpdateHandle& Handle, int32_t Index, const class FString& PreviewFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.UpdateItemPreviewFile");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			int32_t                                            Index;
			class FString                                      PreviewFile;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		params.PreviewFile = PreviewFile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.UnsubscribeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::UnsubscribeItem(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.UnsubscribeItem");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SuspendDownloads
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuspend                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::SuspendDownloads(bool bSuspend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SuspendDownloads");
		
		struct
		{
			bool                                               bSuspend;
		} params;
		params.bSuspend = bSuspend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SubscribeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::SubscribeItem(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SubscribeItem");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SubmitItemUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ChangeNote                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::SubmitItemUpdate(const class FScriptDelegate& Callback, const struct FUGCUpdateHandle& Handle, const class FString& ChangeNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SubmitItemUpdate");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FUGCUpdateHandle                            Handle;
			class FString                                      ChangeNote;
		} params;
		params.Callback = Callback;
		params.Handle = Handle;
		params.ChangeNote = ChangeNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.StopPlaytimeTrackingForAllItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUGC::StopPlaytimeTrackingForAllItems(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.StopPlaytimeTrackingForAllItems");
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.StopPlaytimeTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPublishedFileID>                    PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUGC::StopPlaytimeTracking(const class FScriptDelegate& Callback, TArray<struct FPublishedFileID> PublishedFileIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.StopPlaytimeTracking");
		
		struct
		{
			class FScriptDelegate                              Callback;
			TArray<struct FPublishedFileID>                    PublishedFileIDs;
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
	 * 		Name   -> Function SteamCore.UGC.StartPlaytimeTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPublishedFileID>                    PublishedFileID                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUGC::StartPlaytimeTracking(const class FScriptDelegate& Callback, TArray<struct FPublishedFileID> PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.StartPlaytimeTracking");
		
		struct
		{
			class FScriptDelegate                              Callback;
			TArray<struct FPublishedFileID>                    PublishedFileID;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.StartItemUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUGCUpdateHandle UUGC::StartItemUpdate(int32_t ConsumerAppID, const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.StartItemUpdate");
		
		struct
		{
			int32_t                                            ConsumerAppID;
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.ConsumerAppID = ConsumerAppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetUserItemVote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::SetUserItemVote(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID, bool bVoteUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetUserItemVote");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            PublishedFileID;
			bool                                               bVoteUp;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		params.bVoteUp = bVoteUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetSearchText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SearchText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetSearchText(const struct FUGCQueryHandle& Handle, const class FString& SearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetSearchText");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			class FString                                      SearchText;
		} params;
		params.Handle = Handle;
		params.SearchText = SearchText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetReturnTotalOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnTotalOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetReturnTotalOnly(const struct FUGCQueryHandle& Handle, bool bReturnTotalOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnTotalOnly");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			bool                                               bReturnTotalOnly;
		} params;
		params.Handle = Handle;
		params.bReturnTotalOnly = bReturnTotalOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetReturnPlaytimeStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Days                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetReturnPlaytimeStats(const struct FUGCQueryHandle& Handle, int32_t Days)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnPlaytimeStats");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Days;
		} params;
		params.Handle = Handle;
		params.Days = Days;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetReturnOnlyIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnOnlyIDs                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetReturnOnlyIDs(const struct FUGCQueryHandle& Handle, bool bReturnOnlyIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnOnlyIDs");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			bool                                               bReturnOnlyIDs;
		} params;
		params.Handle = Handle;
		params.bReturnOnlyIDs = bReturnOnlyIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetReturnMetadata
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnMetadata                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetReturnMetadata(const struct FUGCQueryHandle& Handle, bool bReturnMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnMetadata");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			bool                                               bReturnMetadata;
		} params;
		params.Handle = Handle;
		params.bReturnMetadata = bReturnMetadata;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetReturnLongDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnLongDescription                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetReturnLongDescription(const struct FUGCQueryHandle& Handle, bool bReturnLongDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnLongDescription");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			bool                                               bReturnLongDescription;
		} params;
		params.Handle = Handle;
		params.bReturnLongDescription = bReturnLongDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetReturnKeyValueTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnKeyValueTags                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetReturnKeyValueTags(const struct FUGCQueryHandle& Handle, bool bReturnKeyValueTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnKeyValueTags");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			bool                                               bReturnKeyValueTags;
		} params;
		params.Handle = Handle;
		params.bReturnKeyValueTags = bReturnKeyValueTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetReturnChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetReturnChildren(const struct FUGCQueryHandle& Handle, bool bReturnChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnChildren");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			bool                                               bReturnChildren;
		} params;
		params.Handle = Handle;
		params.bReturnChildren = bReturnChildren;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetReturnAdditionalPreviews
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnAdditionalPreviews                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetReturnAdditionalPreviews(const struct FUGCQueryHandle& Handle, bool bReturnAdditionalPreviews)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetReturnAdditionalPreviews");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			bool                                               bReturnAdditionalPreviews;
		} params;
		params.Handle = Handle;
		params.bReturnAdditionalPreviews = bReturnAdditionalPreviews;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetRankedByTrendDays
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Days                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetRankedByTrendDays(const struct FUGCQueryHandle& Handle, int32_t Days)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetRankedByTrendDays");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Days;
		} params;
		params.Handle = Handle;
		params.Days = Days;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetMatchAnyTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchAnyTag                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetMatchAnyTag(const struct FUGCQueryHandle& Handle, bool bMatchAnyTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetMatchAnyTag");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			bool                                               bMatchAnyTag;
		} params;
		params.Handle = Handle;
		params.bMatchAnyTag = bMatchAnyTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetLanguage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetLanguage(const struct FUGCQueryHandle& Handle, const class FString& Language)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetLanguage");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			class FString                                      Language;
		} params;
		params.Handle = Handle;
		params.Language = Language;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetItemVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESteamRemoteStoragePublishedFileVisibility         Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetItemVisibility(const struct FUGCUpdateHandle& Handle, ESteamRemoteStoragePublishedFileVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemVisibility");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			ESteamRemoteStoragePublishedFileVisibility         Visibility;
		} params;
		params.Handle = Handle;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetItemUpdateLanguage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetItemUpdateLanguage(const struct FUGCUpdateHandle& Handle, const class FString& Language)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemUpdateLanguage");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      Language;
		} params;
		params.Handle = Handle;
		params.Language = Language;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetItemTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetItemTitle(const struct FUGCUpdateHandle& Handle, const class FString& Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemTitle");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      Title;
		} params;
		params.Handle = Handle;
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetItemTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Tags                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetItemTags(const struct FUGCUpdateHandle& Handle, TArray<class FString> Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemTags");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			TArray<class FString>                              Tags;
		} params;
		params.Handle = Handle;
		params.Tags = Tags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetItemPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviewFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetItemPreview(const struct FUGCUpdateHandle& Handle, const class FString& PreviewFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemPreview");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      PreviewFile;
		} params;
		params.Handle = Handle;
		params.PreviewFile = PreviewFile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetItemMetadata
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetItemMetadata(const struct FUGCUpdateHandle& Handle, const class FString& MetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemMetadata");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      MetaData;
		} params;
		params.Handle = Handle;
		params.MetaData = MetaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetItemDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetItemDescription(const struct FUGCUpdateHandle& Handle, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemDescription");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      Description;
		} params;
		params.Handle = Handle;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetItemContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentFolder                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetItemContent(const struct FUGCUpdateHandle& Handle, const class FString& ContentFolder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetItemContent");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      ContentFolder;
		} params;
		params.Handle = Handle;
		params.ContentFolder = ContentFolder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetCloudFileNameFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchCloudFileName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetCloudFileNameFilter(const struct FUGCQueryHandle& Handle, const class FString& MatchCloudFileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetCloudFileNameFilter");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			class FString                                      MatchCloudFileName;
		} params;
		params.Handle = Handle;
		params.MatchCloudFileName = MatchCloudFileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetAllowLegacyUpload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowLegacyUpload                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetAllowLegacyUpload(const struct FUGCUpdateHandle& Handle, bool bAllowLegacyUpload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetAllowLegacyUpload");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			bool                                               bAllowLegacyUpload;
		} params;
		params.Handle = Handle;
		params.bAllowLegacyUpload = bAllowLegacyUpload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SetAllowCachedResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxAgeSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::SetAllowCachedResponse(const struct FUGCQueryHandle& Handle, int32_t MaxAgeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SetAllowCachedResponse");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            MaxAgeSeconds;
		} params;
		params.Handle = Handle;
		params.MaxAgeSeconds = MaxAgeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.SendQueryUGCRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::SendQueryUGCRequest(const class FScriptDelegate& Callback, const struct FUGCQueryHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.SendQueryUGCRequest");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FUGCQueryHandle                             Handle;
		} params;
		params.Callback = Callback;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.RemoveItemPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::RemoveItemPreview(const struct FUGCUpdateHandle& Handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveItemPreview");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			int32_t                                            Index;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.RemoveItemKeyValueTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::RemoveItemKeyValueTags(const struct FUGCUpdateHandle& Handle, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveItemKeyValueTags");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      Key;
		} params;
		params.Handle = Handle;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.RemoveItemFromFavorites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::RemoveItemFromFavorites(const class FScriptDelegate& Callback, int32_t AppID, const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveItemFromFavorites");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            AppID;
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.Callback = Callback;
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.RemoveDependency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            ParentPublishedFileID                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            ChildPublishedFileId                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::RemoveDependency(const class FScriptDelegate& Callback, const struct FPublishedFileID& ParentPublishedFileID, const struct FPublishedFileID& ChildPublishedFileId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveDependency");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            ParentPublishedFileID;
			struct FPublishedFileID                            ChildPublishedFileId;
		} params;
		params.Callback = Callback;
		params.ParentPublishedFileID = ParentPublishedFileID;
		params.ChildPublishedFileId = ChildPublishedFileId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.RemoveAppDependency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::RemoveAppDependency(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID, int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.RemoveAppDependency");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            PublishedFileID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.ReleaseQueryUGCRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::ReleaseQueryUGCRequest(const struct FUGCQueryHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.ReleaseQueryUGCRequest");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetUserItemVote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::GetUserItemVote(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetUserItemVote");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetSubscribedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPublishedFileID>                    PublishedFileIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxEntries                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUGC::GetSubscribedItems(TArray<struct FPublishedFileID>* PublishedFileIDs, int32_t MaxEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetSubscribedItems");
		
		struct
		{
			TArray<struct FPublishedFileID>                    PublishedFileIDs;
			int32_t                                            MaxEntries;
		} params;
		params.MaxEntries = MaxEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PublishedFileIDs != nullptr)
			*PublishedFileIDs = params.PublishedFileIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCTagDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetQueryUGCTagDisplayName(const struct FUGCQueryHandle& Handle, int32_t Index, int32_t IndexTag, class FString* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCTagDisplayName");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
			int32_t                                            IndexTag;
			class FString                                      Value;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		params.IndexTag = IndexTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetQueryUGCTag(const struct FUGCQueryHandle& Handle, int32_t Index, int32_t IndexTag, class FString* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCTag");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
			int32_t                                            IndexTag;
			class FString                                      Value;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		params.IndexTag = IndexTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCStatistic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamItemStatistic                                StatType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatValue                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetQueryUGCStatistic(const struct FUGCQueryHandle& Handle, int32_t Index, ESteamItemStatistic StatType, class FString* StatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCStatistic");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
			ESteamItemStatistic                                StatType;
			class FString                                      StatValue;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		params.StatType = StatType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatValue != nullptr)
			*StatValue = params.StatValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamUGCDetails                            Details                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetQueryUGCResult(const struct FUGCQueryHandle& Handle, int32_t Index, struct FSteamUGCDetails* Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCResult");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
			struct FSteamUGCDetails                            Details;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Details != nullptr)
			*Details = params.Details;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCPreviewURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetQueryUGCPreviewURL(const struct FUGCQueryHandle& Handle, int32_t Index, class FString* URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCPreviewURL");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
			class FString                                      URL;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URL != nullptr)
			*URL = params.URL;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCNumTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUGC::GetQueryUGCNumTags(const struct FUGCQueryHandle& Handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCNumTags");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCNumKeyValueTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUGC::GetQueryUGCNumKeyValueTags(const struct FUGCQueryHandle& Handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCNumKeyValueTags");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCNumAdditionalPreviews
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUGC::GetQueryUGCNumAdditionalPreviews(const struct FUGCQueryHandle& Handle, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCNumAdditionalPreviews");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCMetadata
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaData                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MetadataSize                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetQueryUGCMetadata(const struct FUGCQueryHandle& Handle, int32_t Index, class FString* MetaData, int32_t MetadataSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCMetadata");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
			class FString                                      MetaData;
			int32_t                                            MetadataSize;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		params.MetadataSize = MetadataSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MetaData != nullptr)
			*MetaData = params.MetaData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCKeyValueTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            KeyValueTagIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetQueryUGCKeyValueTag(const struct FUGCQueryHandle& Handle, int32_t Index, int32_t KeyValueTagIndex, class FString* Key, class FString* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCKeyValueTag");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
			int32_t                                            KeyValueTagIndex;
			class FString                                      Key;
			class FString                                      Value;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		params.KeyValueTagIndex = KeyValueTagIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPublishedFileID>                    PublishedFileIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxEntries                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetQueryUGCChildren(const struct FUGCQueryHandle& Handle, int32_t Index, TArray<struct FPublishedFileID>* PublishedFileIDs, int32_t MaxEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCChildren");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
			TArray<struct FPublishedFileID>                    PublishedFileIDs;
			int32_t                                            MaxEntries;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		params.MaxEntries = MaxEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PublishedFileIDs != nullptr)
			*PublishedFileIDs = params.PublishedFileIDs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetQueryUGCAdditionalPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PreviewIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URLOrVideoID                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OriginalFileName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamItemPreviewType                              PreviewType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetQueryUGCAdditionalPreview(const struct FUGCQueryHandle& Handle, int32_t Index, int32_t PreviewIndex, class FString* URLOrVideoID, class FString* OriginalFileName, ESteamItemPreviewType* PreviewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetQueryUGCAdditionalPreview");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			int32_t                                            Index;
			int32_t                                            PreviewIndex;
			class FString                                      URLOrVideoID;
			class FString                                      OriginalFileName;
			ESteamItemPreviewType                              PreviewType;
		} params;
		params.Handle = Handle;
		params.Index = Index;
		params.PreviewIndex = PreviewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URLOrVideoID != nullptr)
			*URLOrVideoID = params.URLOrVideoID;
		if (OriginalFileName != nullptr)
			*OriginalFileName = params.OriginalFileName;
		if (PreviewType != nullptr)
			*PreviewType = params.PreviewType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetNumSubscribedItems
	 * 		Flags  -> ()
	 */
	int32_t UUGC::GetNumSubscribedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetNumSubscribedItems");
		
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
	 * 		Name   -> Function SteamCore.UGC.GetItemUpdateProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesProcessed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesTotal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamItemUpdateStatus UUGC::GetItemUpdateProgress(const struct FUGCUpdateHandle& Handle, int32_t* BytesProcessed, int32_t* BytesTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetItemUpdateProgress");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			int32_t                                            BytesProcessed;
			int32_t                                            BytesTotal;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BytesProcessed != nullptr)
			*BytesProcessed = params.BytesProcessed;
		if (BytesTotal != nullptr)
			*BytesTotal = params.BytesTotal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetItemState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ESteamItemState>                            States                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUGC::GetItemState(const struct FPublishedFileID& PublishedFileID, TArray<ESteamItemState>* States)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetItemState");
		
		struct
		{
			struct FPublishedFileID                            PublishedFileID;
			TArray<ESteamItemState>                            States;
		} params;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (States != nullptr)
			*States = params.States;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetItemInstallInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeOnDisk                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Folder                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Timestamp                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetItemInstallInfo(const struct FPublishedFileID& PublishedFileID, int32_t* SizeOnDisk, class FString* Folder, int32_t* Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetItemInstallInfo");
		
		struct
		{
			struct FPublishedFileID                            PublishedFileID;
			int32_t                                            SizeOnDisk;
			class FString                                      Folder;
			int32_t                                            Timestamp;
		} params;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SizeOnDisk != nullptr)
			*SizeOnDisk = params.SizeOnDisk;
		if (Folder != nullptr)
			*Folder = params.Folder;
		if (Timestamp != nullptr)
			*Timestamp = params.Timestamp;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetItemDownloadInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesDownloaded                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesTotal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::GetItemDownloadInfo(const struct FPublishedFileID& PublishedFileID, int32_t* BytesDownloaded, int32_t* BytesTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetItemDownloadInfo");
		
		struct
		{
			struct FPublishedFileID                            PublishedFileID;
			int32_t                                            BytesDownloaded;
			int32_t                                            BytesTotal;
		} params;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BytesDownloaded != nullptr)
			*BytesDownloaded = params.BytesDownloaded;
		if (BytesTotal != nullptr)
			*BytesTotal = params.BytesTotal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.GetAppDependencies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::GetAppDependencies(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.GetAppDependencies");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.DownloadItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHighPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::DownloadItem(const struct FPublishedFileID& PublishedFileID, bool bHighPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.DownloadItem");
		
		struct
		{
			struct FPublishedFileID                            PublishedFileID;
			bool                                               bHighPriority;
		} params;
		params.PublishedFileID = PublishedFileID;
		params.bHighPriority = bHighPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.DeleteItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::DeleteItem(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.DeleteItem");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.CreateQueryUserUGCRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamUserUGCList                                  ListType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamUGCMatchingUGCType                           MatchingUGCType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamUserUGCListSortOrder                         SortOrder                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CreatorAppID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUGCQueryHandle UUGC::CreateQueryUserUGCRequest(const struct FSteamID& SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.CreateQueryUserUGCRequest");
		
		struct
		{
			struct FSteamID                                    SteamID;
			ESteamUserUGCList                                  ListType;
			ESteamUGCMatchingUGCType                           MatchingUGCType;
			ESteamUserUGCListSortOrder                         SortOrder;
			int32_t                                            CreatorAppID;
			int32_t                                            ConsumerAppID;
			int32_t                                            Page;
		} params;
		params.SteamID = SteamID;
		params.ListType = ListType;
		params.MatchingUGCType = MatchingUGCType;
		params.SortOrder = SortOrder;
		params.CreatorAppID = CreatorAppID;
		params.ConsumerAppID = ConsumerAppID;
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.CreateQueryUGCDetailsRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPublishedFileID>                    PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FUGCQueryHandle UUGC::CreateQueryUGCDetailsRequest(TArray<struct FPublishedFileID> PublishedFileIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.CreateQueryUGCDetailsRequest");
		
		struct
		{
			TArray<struct FPublishedFileID>                    PublishedFileIDs;
		} params;
		params.PublishedFileIDs = PublishedFileIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.CreateQueryAllUGCRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamUGCQuery                                     QueryType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamUGCMatchingUGCType                           FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CreatorAppID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUGCQueryHandle UUGC::CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.CreateQueryAllUGCRequest");
		
		struct
		{
			ESteamUGCQuery                                     QueryType;
			ESteamUGCMatchingUGCType                           FileType;
			int32_t                                            CreatorAppID;
			int32_t                                            ConsumerAppID;
			int32_t                                            Page;
		} params;
		params.QueryType = QueryType;
		params.FileType = FileType;
		params.CreatorAppID = CreatorAppID;
		params.ConsumerAppID = ConsumerAppID;
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamWorkshopFileType                             FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::CreateItem(const class FScriptDelegate& Callback, int32_t ConsumerAppID, ESteamWorkshopFileType FileType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.CreateItem");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            ConsumerAppID;
			ESteamWorkshopFileType                             FileType;
		} params;
		params.Callback = Callback;
		params.ConsumerAppID = ConsumerAppID;
		params.FileType = FileType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.BInitWorkshopForGameServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WorkshopDepotID                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Folder                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::BInitWorkshopForGameServer(int32_t WorkshopDepotID, const class FString& Folder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.BInitWorkshopForGameServer");
		
		struct
		{
			int32_t                                            WorkshopDepotID;
			class FString                                      Folder;
		} params;
		params.WorkshopDepotID = WorkshopDepotID;
		params.Folder = Folder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddRequiredTagGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              TagGroups                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUGC::AddRequiredTagGroup(const struct FUGCQueryHandle& Handle, TArray<class FString> TagGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddRequiredTagGroup");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			TArray<class FString>                              TagGroups;
		} params;
		params.Handle = Handle;
		params.TagGroups = TagGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddRequiredTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TagName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::AddRequiredTag(const struct FUGCQueryHandle& Handle, const class FString& TagName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddRequiredTag");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			class FString                                      TagName;
		} params;
		params.Handle = Handle;
		params.TagName = TagName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddRequiredKeyValueTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::AddRequiredKeyValueTag(const struct FUGCQueryHandle& Handle, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddRequiredKeyValueTag");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			class FString                                      Key;
			class FString                                      Value;
		} params;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddItemToFavorites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::AddItemToFavorites(const class FScriptDelegate& Callback, int32_t AppID, const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddItemToFavorites");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            AppID;
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.Callback = Callback;
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddItemPreviewVideo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      VideoID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::AddItemPreviewVideo(const struct FUGCUpdateHandle& Handle, const class FString& VideoID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddItemPreviewVideo");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      VideoID;
		} params;
		params.Handle = Handle;
		params.VideoID = VideoID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddItemPreviewFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviewFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamItemPreviewType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::AddItemPreviewFile(const struct FUGCUpdateHandle& Handle, const class FString& PreviewFile, ESteamItemPreviewType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddItemPreviewFile");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      PreviewFile;
			ESteamItemPreviewType                              Type;
		} params;
		params.Handle = Handle;
		params.PreviewFile = PreviewFile;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddItemKeyValueTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::AddItemKeyValueTag(const struct FUGCUpdateHandle& Handle, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddItemKeyValueTag");
		
		struct
		{
			struct FUGCUpdateHandle                            Handle;
			class FString                                      Key;
			class FString                                      Value;
		} params;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddExcludedTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TagName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUGC::AddExcludedTag(const struct FUGCQueryHandle& Handle, const class FString& TagName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddExcludedTag");
		
		struct
		{
			struct FUGCQueryHandle                             Handle;
			class FString                                      TagName;
		} params;
		params.Handle = Handle;
		params.TagName = TagName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddDependency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            ChildPublishedFileId                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::AddDependency(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddDependency");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            PublishedFileID;
			struct FPublishedFileID                            ChildPublishedFileId;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		params.ChildPublishedFileId = ChildPublishedFileId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UGC.AddAppDependency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUGC::AddAppDependency(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID, int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UGC.AddAppDependency");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FPublishedFileID                            PublishedFileID;
			int32_t                                            AppID;
		} params;
		params.Callback = Callback;
		params.PublishedFileID = PublishedFileID;
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUGC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUGC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.UGC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::StopPlaytimeTrackingForAllItemsAsync(class UObject* WorldContextObject, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStopPlaytimeTrackingResult                 Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::HandleCallback(const struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback");
		
		struct
		{
			struct FStopPlaytimeTrackingResult                 Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPublishedFileID>                    PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionStopPlaytimeTracking* USteamCoreUGCAsyncActionStopPlaytimeTracking::StopPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<struct FPublishedFileID> PublishedFileIDs, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<struct FPublishedFileID>                    PublishedFileIDs;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileIDs = PublishedFileIDs;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStopPlaytimeTrackingResult                 Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionStopPlaytimeTracking::HandleCallback(const struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback");
		
		struct
		{
			struct FStopPlaytimeTrackingResult                 Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionStopPlaytimeTracking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionStopPlaytimeTracking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPublishedFileID>                    PublishedFileIDs                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionStartPlaytimeTracking* USteamCoreUGCAsyncActionStartPlaytimeTracking::StartPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<struct FPublishedFileID> PublishedFileIDs, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<struct FPublishedFileID>                    PublishedFileIDs;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileIDs = PublishedFileIDs;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStartPlaytimeTrackingResult                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionStartPlaytimeTracking::HandleCallback(const struct FStartPlaytimeTrackingResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback");
		
		struct
		{
			struct FStartPlaytimeTrackingResult                Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionStartPlaytimeTracking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionStartPlaytimeTracking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileIDs                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionUnsubscribeItem* USteamCoreUGCAsyncActionUnsubscribeItem::UnsubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileIDs, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileIDs;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileIDs = PublishedFileIDs;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteStorageSubscribePublishedFileResult  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionUnsubscribeItem::HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback");
		
		struct
		{
			struct FRemoteStorageSubscribePublishedFileResult  Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionUnsubscribeItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionUnsubscribeItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileIDs                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionSubscribeItem* USteamCoreUGCAsyncActionSubscribeItem::SubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileIDs, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileIDs;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileIDs = PublishedFileIDs;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteStorageSubscribePublishedFileResult  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionSubscribeItem::HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback");
		
		struct
		{
			struct FRemoteStorageSubscribePublishedFileResult  Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionSubscribeItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionSubscribeItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionSubscribeItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionRemoveItemFromFavorites* USteamCoreUGCAsyncActionRemoveItemFromFavorites::RemoveItemFromFavoritesAsync(class UObject* WorldContextObject, int32_t AppID, const struct FPublishedFileID& PublishedFileID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			struct FPublishedFileID                            PublishedFileID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserFavoriteItemsListChanged               Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionRemoveItemFromFavorites::HandleCallback(const struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback");
		
		struct
		{
			struct FUserFavoriteItemsListChanged               Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionRemoveItemFromFavorites.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionRemoveItemFromFavorites::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserFavoriteItemsListChanged               Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionAddItemToFavorites::HandleCallback(const struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback");
		
		struct
		{
			struct FUserFavoriteItemsListChanged               Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionAddItemToFavorites* USteamCoreUGCAsyncActionAddItemToFavorites::AddItemToFavoritesAsync(class UObject* WorldContextObject, int32_t AppID, const struct FPublishedFileID& PublishedFileID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            AppID;
			struct FPublishedFileID                            PublishedFileID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.AppID = AppID;
		params.PublishedFileID = PublishedFileID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionAddItemToFavorites.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionAddItemToFavorites::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGetUserItemVoteResult                      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionGetUserItemVote::HandleCallback(const struct FGetUserItemVoteResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback");
		
		struct
		{
			struct FGetUserItemVoteResult                      Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionGetUserItemVote* USteamCoreUGCAsyncActionGetUserItemVote::GetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileID = PublishedFileID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionGetUserItemVote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionGetUserItemVote::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionGetUserItemVote");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionSetUserItemVote* USteamCoreUGCAsyncActionSetUserItemVote::SetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bVoteUp, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileID;
			bool                                               bVoteUp;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileID = PublishedFileID;
		params.bVoteUp = bVoteUp;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSetUserItemVoteResult                      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionSetUserItemVote::HandleCallback(const struct FSetUserItemVoteResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback");
		
		struct
		{
			struct FSetUserItemVoteResult                      Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionSetUserItemVote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionSetUserItemVote::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionSetUserItemVote");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUGCUpdateHandle                            Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ChangeNote                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionSubmitItemUpdate* USteamCoreUGCAsyncActionSubmitItemUpdate::SubmitItemUpdateAsync(class UObject* WorldContextObject, const struct FUGCUpdateHandle& Handle, const class FString& ChangeNote, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FUGCUpdateHandle                            Handle;
			class FString                                      ChangeNote;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.ChangeNote = ChangeNote;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmitItemUpdateResult                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionSubmitItemUpdate::HandleCallback(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback");
		
		struct
		{
			struct FSubmitItemUpdateResult                     Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionSubmitItemUpdate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionSubmitItemUpdate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCreateItemResult                           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionCreateItem::HandleCallback(const struct FCreateItemResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback");
		
		struct
		{
			struct FCreateItemResult                           Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConsumerAppID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamWorkshopFileType                             FileType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionCreateItem* USteamCoreUGCAsyncActionCreateItem::CreateItemAsync(class UObject* WorldContextObject, int32_t ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            ConsumerAppID;
			ESteamWorkshopFileType                             FileType;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ConsumerAppID = ConsumerAppID;
		params.FileType = FileType;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionCreateItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionCreateItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionCreateItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUGCQueryHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionSendQueryUGCRequest* USteamCoreUGCAsyncActionSendQueryUGCRequest::SendQueryUGCRequestAsync(class UObject* WorldContextObject, const struct FUGCQueryHandle& Handle, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FUGCQueryHandle                             Handle;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCQueryCompleted                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionSendQueryUGCRequest::HandleCallback(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback");
		
		struct
		{
			struct FSteamUGCQueryCompleted                     Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionSendQueryUGCRequest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionSendQueryUGCRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAddAppDependencyResult                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionAddAppDependency::HandleCallback(const struct FAddAppDependencyResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback");
		
		struct
		{
			struct FAddAppDependencyResult                     Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionAddAppDependency* USteamCoreUGCAsyncActionAddAppDependency::AddAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int32_t AppID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileID;
			int32_t                                            AppID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileID = PublishedFileID;
		params.AppID = AppID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionAddAppDependency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionAddAppDependency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionAddAppDependency");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionRemoveAppDependency* USteamCoreUGCAsyncActionRemoveAppDependency::RemoveAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int32_t AppID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileID;
			int32_t                                            AppID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileID = PublishedFileID;
		params.AppID = AppID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoveAppDependencyResult                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionRemoveAppDependency::HandleCallback(const struct FRemoveAppDependencyResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback");
		
		struct
		{
			struct FRemoveAppDependencyResult                  Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionRemoveAppDependency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionRemoveAppDependency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAddUGCDependencyResult                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionAddUGCDependency::HandleCallback(const struct FAddUGCDependencyResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback");
		
		struct
		{
			struct FAddUGCDependencyResult                     Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            ChildPublishedFileId                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionAddUGCDependency* USteamCoreUGCAsyncActionAddUGCDependency::AddDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileID;
			struct FPublishedFileID                            ChildPublishedFileId;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileID = PublishedFileID;
		params.ChildPublishedFileId = ChildPublishedFileId;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionAddUGCDependency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionAddUGCDependency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionAddUGCDependency");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            ChildPublishedFileId                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionRemoveUGCDependency* USteamCoreUGCAsyncActionRemoveUGCDependency::RemoveDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileID;
			struct FPublishedFileID                            ChildPublishedFileId;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileID = PublishedFileID;
		params.ChildPublishedFileId = ChildPublishedFileId;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoveUGCDependencyResult                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionRemoveUGCDependency::HandleCallback(const struct FRemoveUGCDependencyResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback");
		
		struct
		{
			struct FRemoveUGCDependencyResult                  Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionRemoveUGCDependency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionRemoveUGCDependency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUGCDeleteItemResult                        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionDeleteItem::HandleCallback(const struct FUGCDeleteItemResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback");
		
		struct
		{
			struct FUGCDeleteItemResult                        Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionDeleteItem* USteamCoreUGCAsyncActionDeleteItem::DeleteItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileID = PublishedFileID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionDeleteItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionDeleteItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionDeleteItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGetAppDependenciesResult                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionGetAppDependencies::HandleCallback(const struct FGetAppDependenciesResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback");
		
		struct
		{
			struct FGetAppDependenciesResult                   Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionGetAppDependencies* USteamCoreUGCAsyncActionGetAppDependencies::GetAppDependenciesAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileID = PublishedFileID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionGetAppDependencies.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionGetAppDependencies::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionGetAppDependencies");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDownloadItemResult                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionDownloadItem::HandleCallback(const struct FDownloadItemResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback");
		
		struct
		{
			struct FDownloadItemResult                         Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHighPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUGCAsyncActionDownloadItem* USteamCoreUGCAsyncActionDownloadItem::DownloadItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bHighPriority, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FPublishedFileID                            PublishedFileID;
			bool                                               bHighPriority;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PublishedFileID = PublishedFileID;
		params.bHighPriority = bHighPriority;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionDownloadItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionDownloadItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUGCAsyncActionDownloadItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.UserHasLicenseForApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamUserHasLicenseForAppResult UUser::UserHasLicenseForApp(const struct FSteamID& SteamID, int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.UserHasLicenseForApp");
		
		struct
		{
			struct FSteamID                                    SteamID;
			int32_t                                            AppID;
		} params;
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
	 * 		Name   -> Function SteamCore.User.StopVoiceRecording
	 * 		Flags  -> ()
	 */
	void UUser::StopVoiceRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.StopVoiceRecording");
		
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
	 * 		Name   -> Function SteamCore.User.StartVoiceRecording
	 * 		Flags  -> ()
	 */
	void UUser::StartVoiceRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.StartVoiceRecording");
		
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
	 * 		Name   -> Function SteamCore.User.RequestStoreAuthURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      RedirectURL                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUser::RequestStoreAuthURL(const class FScriptDelegate& Callback, const class FString& RedirectURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.RequestStoreAuthURL");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      RedirectURL;
		} params;
		params.Callback = Callback;
		params.RedirectURL = RedirectURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.RequestEncryptedAppTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              DataToInclude                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUser::RequestEncryptedAppTicket(const class FScriptDelegate& Callback, TArray<unsigned char> DataToInclude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.RequestEncryptedAppTicket");
		
		struct
		{
			class FScriptDelegate                              Callback;
			TArray<unsigned char>                              DataToInclude;
		} params;
		params.Callback = Callback;
		params.DataToInclude = DataToInclude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.GetVoiceOptimalSampleRate
	 * 		Flags  -> ()
	 */
	int32_t UUser::GetVoiceOptimalSampleRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetVoiceOptimalSampleRate");
		
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
	 * 		Name   -> Function SteamCore.User.GetVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              DestBuffer                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BytesWritten                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamVoiceResult UUser::GetVoice(TArray<unsigned char>* DestBuffer, int32_t* BytesWritten)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetVoice");
		
		struct
		{
			TArray<unsigned char>                              DestBuffer;
			int32_t                                            BytesWritten;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DestBuffer != nullptr)
			*DestBuffer = params.DestBuffer;
		if (BytesWritten != nullptr)
			*BytesWritten = params.BytesWritten;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.GetSteamID_Pure
	 * 		Flags  -> ()
	 */
	struct FSteamID UUser::GetSteamID_Pure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetSteamID_Pure");
		
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
	 * 		Name   -> Function SteamCore.User.GetSteamID
	 * 		Flags  -> ()
	 */
	struct FSteamID UUser::GetSteamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetSteamID");
		
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
	 * 		Name   -> Function SteamCore.User.GetPlayerSteamLevel
	 * 		Flags  -> ()
	 */
	int32_t UUser::GetPlayerSteamLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetPlayerSteamLevel");
		
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
	 * 		Name   -> Function SteamCore.User.GetGameBadgeLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Series                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFoil                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUser::GetGameBadgeLevel(int32_t Series, bool bFoil)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetGameBadgeLevel");
		
		struct
		{
			int32_t                                            Series;
			bool                                               bFoil;
		} params;
		params.Series = Series;
		params.bFoil = bFoil;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.GetEncryptedAppTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUser::GetEncryptedAppTicket(TArray<unsigned char>* Ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetEncryptedAppTicket");
		
		struct
		{
			TArray<unsigned char>                              Ticket;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ticket != nullptr)
			*Ticket = params.Ticket;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.GetAvailableVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CompressedBytes                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UncompressedBytes                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UncompressedVoiceDesiredSampleRate                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamVoiceResult UUser::GetAvailableVoice(int32_t* CompressedBytes, int32_t* UncompressedBytes, int32_t UncompressedVoiceDesiredSampleRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetAvailableVoice");
		
		struct
		{
			int32_t                                            CompressedBytes;
			int32_t                                            UncompressedBytes;
			int32_t                                            UncompressedVoiceDesiredSampleRate;
		} params;
		params.UncompressedVoiceDesiredSampleRate = UncompressedVoiceDesiredSampleRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CompressedBytes != nullptr)
			*CompressedBytes = params.CompressedBytes;
		if (UncompressedBytes != nullptr)
			*UncompressedBytes = params.UncompressedBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.GetAuthSessionTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FSteamTicketHandle UUser::GetAuthSessionTicket(TArray<unsigned char>* Ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.GetAuthSessionTicket");
		
		struct
		{
			TArray<unsigned char>                              Ticket;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ticket != nullptr)
			*Ticket = params.Ticket;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.EndAuthSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUser::EndAuthSession(const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.EndAuthSession");
		
		struct
		{
			struct FSteamID                                    SteamID;
		} params;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.DecompressVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              CompressedBuffer                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DesiredSampleRate                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              DestBuffer                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	ESteamVoiceResult UUser::DecompressVoice(TArray<unsigned char> CompressedBuffer, int32_t DesiredSampleRate, TArray<unsigned char>* DestBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.DecompressVoice");
		
		struct
		{
			TArray<unsigned char>                              CompressedBuffer;
			int32_t                                            DesiredSampleRate;
			TArray<unsigned char>                              DestBuffer;
		} params;
		params.CompressedBuffer = CompressedBuffer;
		params.DesiredSampleRate = DesiredSampleRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DestBuffer != nullptr)
			*DestBuffer = params.DestBuffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.CancelAuthTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamTicketHandle                          TicketHandle                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUser::CancelAuthTicket(const struct FSteamTicketHandle& TicketHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.CancelAuthTicket");
		
		struct
		{
			struct FSteamTicketHandle                          TicketHandle;
		} params;
		params.TicketHandle = TicketHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.BLoggedOn
	 * 		Flags  -> ()
	 */
	bool UUser::BLoggedOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.BLoggedOn");
		
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
	 * 		Name   -> Function SteamCore.User.BIsTwoFactorEnabled
	 * 		Flags  -> ()
	 */
	bool UUser::BIsTwoFactorEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsTwoFactorEnabled");
		
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
	 * 		Name   -> Function SteamCore.User.BIsPhoneVerified
	 * 		Flags  -> ()
	 */
	bool UUser::BIsPhoneVerified()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsPhoneVerified");
		
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
	 * 		Name   -> Function SteamCore.User.BIsPhoneRequiringVerification
	 * 		Flags  -> ()
	 */
	bool UUser::BIsPhoneRequiringVerification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsPhoneRequiringVerification");
		
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
	 * 		Name   -> Function SteamCore.User.BIsPhoneIdentifying
	 * 		Flags  -> ()
	 */
	bool UUser::BIsPhoneIdentifying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsPhoneIdentifying");
		
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
	 * 		Name   -> Function SteamCore.User.BIsBehindNAT
	 * 		Flags  -> ()
	 */
	bool UUser::BIsBehindNAT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.BIsBehindNAT");
		
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
	 * 		Name   -> Function SteamCore.User.BeginAuthSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Ticket                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamBeginAuthSessionResult UUser::BeginAuthSession(TArray<unsigned char> Ticket, const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.BeginAuthSession");
		
		struct
		{
			TArray<unsigned char>                              Ticket;
			struct FSteamID                                    SteamID;
		} params;
		params.Ticket = Ticket;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.User.AdvertiseGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDGameServer                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ServerIP                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ServerPort                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUser::AdvertiseGame(const struct FSteamID& SteamIDGameServer, const class FString& ServerIP, int32_t ServerPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.User.AdvertiseGame");
		
		struct
		{
			struct FSteamID                                    SteamIDGameServer;
			class FString                                      ServerIP;
			int32_t                                            ServerPort;
		} params;
		params.SteamIDGameServer = SteamIDGameServer;
		params.ServerIP = ServerIP;
		params.ServerPort = ServerPort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.User");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              DataToInclude                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserAsyncActionRequestEncryptedAppTicket* USteamCoreUserAsyncActionRequestEncryptedAppTicket::RequestEncryptedAppTicketAsync(class UObject* WorldContextObject, TArray<unsigned char> DataToInclude, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<unsigned char>                              DataToInclude;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.DataToInclude = DataToInclude;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEncryptedAppTicketResponse                 Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserAsyncActionRequestEncryptedAppTicket::HandleCallback(const struct FEncryptedAppTicketResponse& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback");
		
		struct
		{
			struct FEncryptedAppTicketResponse                 Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUserAsyncActionRequestEncryptedAppTicket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserAsyncActionRequestEncryptedAppTicket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RedirectURL                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserAsyncActionRequestStoreAuthURL* USteamCoreUserAsyncActionRequestStoreAuthURL::RequestStoreAuthURLAsync(class UObject* WorldContextObject, const class FString& RedirectURL, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      RedirectURL;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.RedirectURL = RedirectURL;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStoreAuthURLResponse                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserAsyncActionRequestStoreAuthURL::HandleCallback(const struct FStoreAuthURLResponse& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback");
		
		struct
		{
			struct FStoreAuthURLResponse                       Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUserAsyncActionRequestStoreAuthURL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserAsyncActionRequestStoreAuthURL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.UploadLeaderboardScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLeaderboardUploadScoreMethod                 UploadScoreMethod                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ScoreDetails                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUserStats::UploadLeaderboardScore(const class FScriptDelegate& Callback, const struct FSteamLeaderboard& SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.UploadLeaderboardScore");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamLeaderboard                           SteamLeaderboard;
			ESteamLeaderboardUploadScoreMethod                 UploadScoreMethod;
			int32_t                                            Score;
			TArray<int32_t>                                    ScoreDetails;
		} params;
		params.Callback = Callback;
		params.SteamLeaderboard = SteamLeaderboard;
		params.UploadScoreMethod = UploadScoreMethod;
		params.Score = Score;
		params.ScoreDetails = ScoreDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.UpdateAvgRateStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CountThisSession                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SessionLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::UpdateAvgRateStat(const class FString& Name, float CountThisSession, float SessionLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.UpdateAvgRateStat");
		
		struct
		{
			class FString                                      Name;
			float                                              CountThisSession;
			float                                              SessionLength;
		} params;
		params.Name = Name;
		params.CountThisSession = CountThisSession;
		params.SessionLength = SessionLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.StoreStats
	 * 		Flags  -> ()
	 */
	bool UUserStats::StoreStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.StoreStats");
		
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
	 * 		Name   -> Function SteamCore.UserStats.SetStatInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::SetStatInt(const class FString& Name, int32_t Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.SetStatInt");
		
		struct
		{
			class FString                                      Name;
			int32_t                                            Data;
		} params;
		params.Name = Name;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.SetStatFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::SetStatFloat(const class FString& Name, float Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.SetStatFloat");
		
		struct
		{
			class FString                                      Name;
			float                                              Data;
		} params;
		params.Name = Name;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.SetAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::SetAchievement(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.SetAchievement");
		
		struct
		{
			class FString                                      Name;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.ResetAllStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAchievementsToo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::ResetAllStats(bool bAchievementsToo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.ResetAllStats");
		
		struct
		{
			bool                                               bAchievementsToo;
		} params;
		params.bAchievementsToo = bAchievementsToo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.RequestUserStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserStats::RequestUserStats(const class FScriptDelegate& Callback, const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.RequestUserStats");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamID                                    SteamID;
		} params;
		params.Callback = Callback;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.RequestGlobalStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserStats::RequestGlobalStats(const class FScriptDelegate& Callback, int32_t HistoryDays)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.RequestGlobalStats");
		
		struct
		{
			class FScriptDelegate                              Callback;
			int32_t                                            HistoryDays;
		} params;
		params.Callback = Callback;
		params.HistoryDays = HistoryDays;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.RequestGlobalAchievementPercentages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserStats::RequestGlobalAchievementPercentages(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.RequestGlobalAchievementPercentages");
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.RequestCurrentStats
	 * 		Flags  -> ()
	 */
	bool UUserStats::RequestCurrentStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.RequestCurrentStats");
		
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
	 * 		Name   -> Function SteamCore.UserStats.IndicateAchievementProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CurrentProgress                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxProgress                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::IndicateAchievementProgress(const class FString& Name, int32_t CurrentProgress, int32_t MaxProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.IndicateAchievementProgress");
		
		struct
		{
			class FString                                      Name;
			int32_t                                            CurrentProgress;
			int32_t                                            MaxProgress;
		} params;
		params.Name = Name;
		params.CurrentProgress = CurrentProgress;
		params.MaxProgress = MaxProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetUserStatInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetUserStatInteger(const struct FSteamID& SteamIDUser, const class FString& Name, int32_t* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetUserStatInteger");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			int32_t                                            Data;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
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
	 * 		Name   -> Function SteamCore.UserStats.GetUserStatFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetUserStatFloat");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			float                                              Data;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
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
	 * 		Name   -> Function SteamCore.UserStats.GetUserAchievementAndUnlockTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UnlockTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetUserAchievementAndUnlockTime(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved, int32_t* UnlockTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetUserAchievementAndUnlockTime");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			bool                                               bAchieved;
			int32_t                                            UnlockTime;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		if (UnlockTime != nullptr)
			*UnlockTime = params.UnlockTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetUserAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamIDUser                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetUserAchievement");
		
		struct
		{
			struct FSteamID                                    SteamIDUser;
			class FString                                      Name;
			bool                                               bAchieved;
		} params;
		params.SteamIDUser = SteamIDUser;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetStatInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetStatInt(const class FString& Name, int32_t* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetStatInt");
		
		struct
		{
			class FString                                      Name;
			int32_t                                            Data;
		} params;
		params.Name = Name;
		
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
	 * 		Name   -> Function SteamCore.UserStats.GetStatFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetStatFloat(const class FString& Name, float* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetStatFloat");
		
		struct
		{
			class FString                                      Name;
			float                                              Data;
		} params;
		params.Name = Name;
		
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
	 * 		Name   -> Function SteamCore.UserStats.GetNumberOfCurrentPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUserStats::GetNumberOfCurrentPlayers(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetNumberOfCurrentPlayers");
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetNumAchievements
	 * 		Flags  -> ()
	 */
	int32_t UUserStats::GetNumAchievements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetNumAchievements");
		
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
	 * 		Name   -> Function SteamCore.UserStats.GetNextMostAchievedAchievementInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IteratorPrevious                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUserStats::GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, class FString* Name, float* Percent, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetNextMostAchievedAchievementInfo");
		
		struct
		{
			int32_t                                            IteratorPrevious;
			class FString                                      Name;
			float                                              Percent;
			bool                                               bAchieved;
		} params;
		params.IteratorPrevious = IteratorPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (Percent != nullptr)
			*Percent = params.Percent;
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetMostAchievedAchievementInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUserStats::GetMostAchievedAchievementInfo(class FString* Name, float* Percent, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetMostAchievedAchievementInfo");
		
		struct
		{
			class FString                                      Name;
			float                                              Percent;
			bool                                               bAchieved;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (Percent != nullptr)
			*Percent = params.Percent;
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetLeaderboardSortMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamLeaderboardSortMethod UUserStats::GetLeaderboardSortMethod(const struct FSteamLeaderboard& SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetLeaderboardSortMethod");
		
		struct
		{
			struct FSteamLeaderboard                           SteamLeaderboard;
		} params;
		params.SteamLeaderboard = SteamLeaderboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetLeaderboardName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUserStats::GetLeaderboardName(const struct FSteamLeaderboard& SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetLeaderboardName");
		
		struct
		{
			struct FSteamLeaderboard                           SteamLeaderboard;
		} params;
		params.SteamLeaderboard = SteamLeaderboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetLeaderboardEntryCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUserStats::GetLeaderboardEntryCount(const struct FSteamLeaderboard& SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetLeaderboardEntryCount");
		
		struct
		{
			struct FSteamLeaderboard                           SteamLeaderboard;
		} params;
		params.SteamLeaderboard = SteamLeaderboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetLeaderboardDisplayType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamLeaderboardDisplayType UUserStats::GetLeaderboardDisplayType(const struct FSteamLeaderboard& SteamLeaderboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetLeaderboardDisplayType");
		
		struct
		{
			struct FSteamLeaderboard                           SteamLeaderboard;
		} params;
		params.SteamLeaderboard = SteamLeaderboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetGlobalStatInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetGlobalStatInt(const class FString& StatName, int32_t* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetGlobalStatInt");
		
		struct
		{
			class FString                                      StatName;
			int32_t                                            Data;
		} params;
		params.StatName = StatName;
		
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
	 * 		Name   -> Function SteamCore.UserStats.GetGlobalStatHistoryInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUserStats::GetGlobalStatHistoryInt(const class FString& StatName, int32_t HistoryDays, TArray<int32_t>* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetGlobalStatHistoryInt");
		
		struct
		{
			class FString                                      StatName;
			int32_t                                            HistoryDays;
			TArray<int32_t>                                    Data;
		} params;
		params.StatName = StatName;
		params.HistoryDays = HistoryDays;
		
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
	 * 		Name   -> Function SteamCore.UserStats.GetGlobalStatHistoryFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Data                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUserStats::GetGlobalStatHistoryFloat(const class FString& StatName, int32_t HistoryDays, TArray<float>* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetGlobalStatHistoryFloat");
		
		struct
		{
			class FString                                      StatName;
			int32_t                                            HistoryDays;
			TArray<float>                                      Data;
		} params;
		params.StatName = StatName;
		params.HistoryDays = HistoryDays;
		
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
	 * 		Name   -> Function SteamCore.UserStats.GetGlobalStatFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetGlobalStatFloat(const class FString& StatName, float* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetGlobalStatFloat");
		
		struct
		{
			class FString                                      StatName;
			float                                              Data;
		} params;
		params.StatName = StatName;
		
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
	 * 		Name   -> Function SteamCore.UserStats.GetDownloadedLeaderboardEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamLeaderboardEntries                    LeaderboardEntries                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamLeaderboardEntry                      LeaderboardEntry                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Details                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    outDetails                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetDownloadedLeaderboardEntry(const struct FSteamLeaderboardEntries& LeaderboardEntries, int32_t Index, struct FSteamLeaderboardEntry* LeaderboardEntry, TArray<int32_t> Details, TArray<int32_t>* outDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetDownloadedLeaderboardEntry");
		
		struct
		{
			struct FSteamLeaderboardEntries                    LeaderboardEntries;
			int32_t                                            Index;
			struct FSteamLeaderboardEntry                      LeaderboardEntry;
			TArray<int32_t>                                    Details;
			TArray<int32_t>                                    outDetails;
		} params;
		params.LeaderboardEntries = LeaderboardEntries;
		params.Index = Index;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeaderboardEntry != nullptr)
			*LeaderboardEntry = params.LeaderboardEntry;
		if (outDetails != nullptr)
			*outDetails = params.outDetails;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetAchievementProgressLimitsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinProgress                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxProgress                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetAchievementProgressLimitsFloat(const class FString& Name, float* MinProgress, float* MaxProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementProgressLimitsFloat");
		
		struct
		{
			class FString                                      Name;
			float                                              MinProgress;
			float                                              MaxProgress;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinProgress != nullptr)
			*MinProgress = params.MinProgress;
		if (MaxProgress != nullptr)
			*MaxProgress = params.MaxProgress;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetAchievementProgressLimits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinProgress                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxProgress                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetAchievementProgressLimits(const class FString& Name, int32_t* MinProgress, int32_t* MaxProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementProgressLimits");
		
		struct
		{
			class FString                                      Name;
			int32_t                                            MinProgress;
			int32_t                                            MaxProgress;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinProgress != nullptr)
			*MinProgress = params.MinProgress;
		if (MaxProgress != nullptr)
			*MaxProgress = params.MaxProgress;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetAchievementName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Achievement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUserStats::GetAchievementName(int32_t Achievement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementName");
		
		struct
		{
			int32_t                                            Achievement;
		} params;
		params.Achievement = Achievement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetAchievementIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UUserStats::GetAchievementIcon(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementIcon");
		
		struct
		{
			class FString                                      Name;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetAchievementDisplayAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUserStats::GetAchievementDisplayAttribute(const class FString& Name, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementDisplayAttribute");
		
		struct
		{
			class FString                                      Name;
			class FString                                      Key;
		} params;
		params.Name = Name;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetAchievementAndUnlockTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UnlockTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetAchievementAndUnlockTime(const class FString& Name, bool* bAchieved, int32_t* UnlockTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementAndUnlockTime");
		
		struct
		{
			class FString                                      Name;
			bool                                               bAchieved;
			int32_t                                            UnlockTime;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		if (UnlockTime != nullptr)
			*UnlockTime = params.UnlockTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetAchievementAchievedPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetAchievementAchievedPercent(const class FString& Name, float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievementAchievedPercent");
		
		struct
		{
			class FString                                      Name;
			float                                              Percent;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.GetAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAchieved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::GetAchievement(const class FString& Name, bool* bAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.GetAchievement");
		
		struct
		{
			class FString                                      Name;
			bool                                               bAchieved;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAchieved != nullptr)
			*bAchieved = params.bAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.FindOrCreateLeaderboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLeaderboardSortMethod                        SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLeaderboardDisplayType                       DisplayType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserStats::FindOrCreateLeaderboard(const class FScriptDelegate& Callback, const class FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.FindOrCreateLeaderboard");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      LeaderboardName;
			ESteamLeaderboardSortMethod                        SortMethod;
			ESteamLeaderboardDisplayType                       DisplayType;
		} params;
		params.Callback = Callback;
		params.LeaderboardName = LeaderboardName;
		params.SortMethod = SortMethod;
		params.DisplayType = DisplayType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.FindLeaderboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserStats::FindLeaderboard(const class FScriptDelegate& Callback, const class FString& LeaderboardName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.FindLeaderboard");
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FString                                      LeaderboardName;
		} params;
		params.Callback = Callback;
		params.LeaderboardName = LeaderboardName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.DownloadLeaderboardEntriesForUsers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamID>                            Users                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUserStats::DownloadLeaderboardEntriesForUsers(const class FScriptDelegate& Callback, const struct FSteamLeaderboard& SteamLeaderboard, TArray<struct FSteamID> Users)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.DownloadLeaderboardEntriesForUsers");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamLeaderboard                           SteamLeaderboard;
			TArray<struct FSteamID>                            Users;
		} params;
		params.Callback = Callback;
		params.SteamLeaderboard = SteamLeaderboard;
		params.Users = Users;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.DownloadLeaderboardEntries
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLeaderboardDataRequest                       DataRequest                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserStats::DownloadLeaderboardEntries(const class FScriptDelegate& Callback, const struct FSteamLeaderboard& SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32_t RangeStart, int32_t RangeEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.DownloadLeaderboardEntries");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamLeaderboard                           SteamLeaderboard;
			ESteamLeaderboardDataRequest                       DataRequest;
			int32_t                                            RangeStart;
			int32_t                                            RangeEnd;
		} params;
		params.Callback = Callback;
		params.SteamLeaderboard = SteamLeaderboard;
		params.DataRequest = DataRequest;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.ClearAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserStats::ClearAchievement(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.ClearAchievement");
		
		struct
		{
			class FString                                      Name;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.UserStats.AttachLeaderboardUGC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamUGCHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserStats::AttachLeaderboardUGC(const class FScriptDelegate& Callback, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.UserStats.AttachLeaderboardUGC");
		
		struct
		{
			class FScriptDelegate                              Callback;
			struct FSteamLeaderboard                           SteamLeaderboard;
			struct FSteamUGCHandle                             Handle;
		} params;
		params.Callback = Callback;
		params.SteamLeaderboard = SteamLeaderboard;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUserStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.UserStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLeaderboardFindResult                      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionFindLeaderboard::HandleCallback(const struct FLeaderboardFindResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback");
		
		struct
		{
			struct FLeaderboardFindResult                      Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionFindLeaderboard* USteamCoreUserStatsAsyncActionFindLeaderboard::FindLeaderboardAsync(class UObject* WorldContextObject, const class FString& LeaderboardName, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      LeaderboardName;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LeaderboardName = LeaderboardName;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionFindLeaderboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionFindLeaderboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLeaderboardScoresDownloaded                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::HandleCallback(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback");
		
		struct
		{
			struct FLeaderboardScoresDownloaded                Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLeaderboardDataRequest                       Request                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RangeEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::DownloadLeaderboardEntriesAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, ESteamLeaderboardDataRequest Request, int32_t RangeStart, int32_t RangeEnd, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamLeaderboard                           SteamLeaderboard;
			ESteamLeaderboardDataRequest                       Request;
			int32_t                                            RangeStart;
			int32_t                                            RangeEnd;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamLeaderboard = SteamLeaderboard;
		params.Request = Request;
		params.RangeStart = RangeStart;
		params.RangeEnd = RangeEnd;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HistoryDays                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::RequestGlobalStatsAsync(class UObject* WorldContextObject, int32_t HistoryDays, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            HistoryDays;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.HistoryDays = HistoryDays;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGlobalStatsReceived                        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::HandleCallback(const struct FGlobalStatsReceived& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback");
		
		struct
		{
			struct FGlobalStatsReceived                        Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::RequestGlobalAchievementPercentagesAsync(class UObject* WorldContextObject, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGlobalAchievementPercentagesReady          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::HandleCallback(const struct FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback");
		
		struct
		{
			struct FGlobalAchievementPercentagesReady          Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNumberOfCurrentPlayers                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::HandleCallback(const struct FNumberOfCurrentPlayers& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback");
		
		struct
		{
			struct FNumberOfCurrentPlayers                     Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLeaderboardUploadScoreMethod                 UploadScoreMethod                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    ScoreDetails                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* USteamCoreUserStatsAsyncActionUploadLeaderboardScore::UploadLeaderboardScoreAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamLeaderboard                           SteamLeaderboard;
			ESteamLeaderboardUploadScoreMethod                 UploadScoreMethod;
			int32_t                                            Score;
			TArray<int32_t>                                    ScoreDetails;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamLeaderboard = SteamLeaderboard;
		params.UploadScoreMethod = UploadScoreMethod;
		params.Score = Score;
		params.ScoreDetails = ScoreDetails;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLeaderboardScoreUploaded                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionUploadLeaderboardScore::HandleCallback(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback");
		
		struct
		{
			struct FLeaderboardScoreUploaded                   Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionUploadLeaderboardScore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFindOrCreateLeaderboardData                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::HandleCallback(const struct FFindOrCreateLeaderboardData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback");
		
		struct
		{
			struct FFindOrCreateLeaderboardData                Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLeaderboardSortMethod                        SortMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamLeaderboardDisplayType                       DisplayType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const class FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class FString                                      LeaderboardName;
			ESteamLeaderboardSortMethod                        SortMethod;
			ESteamLeaderboardDisplayType                       DisplayType;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.LeaderboardName = LeaderboardName;
		params.SortMethod = SortMethod;
		params.DisplayType = DisplayType;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionRequestUserStats* USteamCoreUserStatsAsyncActionRequestUserStats::RequestUserStatsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamID                                    SteamID;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamID = SteamID;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRequestUserStatsData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionRequestUserStats::HandleCallback(const struct FRequestUserStatsData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback");
		
		struct
		{
			struct FRequestUserStatsData                       Data;
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
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionRequestUserStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionRequestUserStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLeaderboardScoresDownloadedForUsers        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::HandleCallback(const struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback");
		
		struct
		{
			struct FLeaderboardScoresDownloadedForUsers        Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamID>                            Users                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::DownloadLeaderboardEntriesForUsersAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, TArray<struct FSteamID> Users, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamLeaderboard                           SteamLeaderboard;
			TArray<struct FSteamID>                            Users;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamLeaderboard = SteamLeaderboard;
		params.Users = Users;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttachLeaderboardUGCData                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::HandleCallback(const struct FAttachLeaderboardUGCData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback");
		
		struct
		{
			struct FAttachLeaderboardUGCData                   Data;
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
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamLeaderboard                           SteamLeaderboard                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamUGCHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::AttachLeaderboardUGCAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle, float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync");
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FSteamLeaderboard                           SteamLeaderboard;
			struct FSteamUGCHandle                             Handle;
			float                                              Timeout;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.SteamLeaderboard = SteamLeaderboard;
		params.Handle = Handle;
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionAttachLeaderboardUGC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreVoice.DestroySteamCoreVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USteamCoreVoice*                             Obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreVoice::DestroySteamCoreVoice(class USteamCoreVoice* Obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreVoice.DestroySteamCoreVoice");
		
		struct
		{
			class USteamCoreVoice*                             Obj;
		} params;
		params.Obj = Obj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreVoice.ConstructSteamCoreVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AudioSampleRate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteamCoreVoice* USteamCoreVoice::ConstructSteamCoreVoice(int32_t AudioSampleRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreVoice.ConstructSteamCoreVoice");
		
		struct
		{
			int32_t                                            AudioSampleRate;
		} params;
		params.AudioSampleRate = AudioSampleRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamCoreVoice.AddAudioBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USteamCoreVoice::AddAudioBuffer(TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamCoreVoice.AddAudioBuffer");
		
		struct
		{
			TArray<unsigned char>                              Buffer;
		} params;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamCoreVoice.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreVoice::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamCoreVoice");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.WriteBytesToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOverwriteIfExists                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AbsoluteFilePath                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              DataBuffer                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::WriteBytesToFile(bool bOverwriteIfExists, const class FString& AbsoluteFilePath, TArray<unsigned char> DataBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.WriteBytesToFile");
		
		struct
		{
			bool                                               bOverwriteIfExists;
			class FString                                      AbsoluteFilePath;
			TArray<unsigned char>                              DataBuffer;
		} params;
		params.bOverwriteIfExists = bOverwriteIfExists;
		params.AbsoluteFilePath = AbsoluteFilePath;
		params.DataBuffer = DataBuffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamItemInstanceID                        A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreIdentical                                Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::SteamItemInstanceID_Equals_Exec(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B, ESteamCoreIdentical* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec");
		
		struct
		{
			struct FSteamItemInstanceID                        A;
			struct FSteamItemInstanceID                        B;
			ESteamCoreIdentical                                Result;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamItemInstanceID                        A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamItemInstanceID                        B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::SteamItemInstanceID_Equals(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals");
		
		struct
		{
			struct FSteamItemInstanceID                        A;
			struct FSteamItemInstanceID                        B;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.ReleaseRequest
	 * 		Flags  -> ()
	 */
	void USteamUtilities::ReleaseRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.ReleaseRequest");
		
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
	 * 		Name   -> Function SteamCore.SteamUtilities.ReadFileToBytes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AbsoluteFilePath                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> USteamUtilities::ReadFileToBytes(const class FString& AbsoluteFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.ReadFileToBytes");
		
		struct
		{
			class FString                                      AbsoluteFilePath;
		} params;
		params.AbsoluteFilePath = AbsoluteFilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.PublishedFileID_NotEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::PublishedFileID_NotEquals(const struct FPublishedFileID& A, const struct FPublishedFileID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.PublishedFileID_NotEquals");
		
		struct
		{
			struct FPublishedFileID                            A;
			struct FPublishedFileID                            B;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.PublishedFileID_Equals_Exec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreIdentical                                Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::PublishedFileID_Equals_Exec(const struct FPublishedFileID& A, const struct FPublishedFileID& B, ESteamCoreIdentical* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.PublishedFileID_Equals_Exec");
		
		struct
		{
			struct FPublishedFileID                            A;
			struct FPublishedFileID                            B;
			ESteamCoreIdentical                                Result;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.PublishedFileID_Equals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPublishedFileID                            B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::PublishedFileID_Equals(const struct FPublishedFileID& A, const struct FPublishedFileID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.PublishedFileID_Equals");
		
		struct
		{
			struct FPublishedFileID                            A;
			struct FPublishedFileID                            B;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.NotEqual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::NotEqual(const struct FSteamID& A, const struct FSteamID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.NotEqual");
		
		struct
		{
			struct FSteamID                                    A;
			struct FSteamID                                    B;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeUGCHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamUGCHandle USteamUtilities::MakeUGCHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeUGCHandle");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeTicketHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamTicketHandle USteamUtilities::MakeTicketHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeTicketHandle");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamSessionSetting USteamUtilities::MakeString(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeString");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeSteamID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID USteamUtilities::MakeSteamID(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSteamID");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeSteamGameID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamGameID USteamUtilities::MakeSteamGameID(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSteamGameID");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeSearchString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamSessionSearchSetting USteamUtilities::MakeSearchString(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSearchString");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeSearchInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamComparisonOp                                 ComparisonOperator                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamSessionSearchSetting USteamUtilities::MakeSearchInteger(ESteamComparisonOp ComparisonOperator, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSearchInteger");
		
		struct
		{
			ESteamComparisonOp                                 ComparisonOperator;
			int32_t                                            Value;
		} params;
		params.ComparisonOperator = ComparisonOperator;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeSearchBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamSessionSearchSetting USteamUtilities::MakeSearchBool(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeSearchBool");
		
		struct
		{
			bool                                               bValue;
		} params;
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakePublishedFileID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPublishedFileID USteamUtilities::MakePublishedFileID(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakePublishedFileID");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeInventoryUpdateHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamInventoryUpdateHandle USteamUtilities::MakeInventoryUpdateHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeInventoryUpdateHandle");
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamSessionSetting USteamUtilities::MakeInteger(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeInteger");
		
		struct
		{
			int32_t                                            Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.MakeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamSessionSetting USteamUtilities::MakeBool(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.MakeBool");
		
		struct
		{
			bool                                               bValue;
		} params;
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.ListenForSteamMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::ListenForSteamMessages(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.ListenForSteamMessages");
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::IsValid(const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsValid");
		
		struct
		{
			struct FSteamID                                    SteamID;
		} params;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsUsingP2PRelays
	 * 		Flags  -> ()
	 */
	bool USteamUtilities::IsUsingP2PRelays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsUsingP2PRelays");
		
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
	 * 		Name   -> Function SteamCore.SteamUtilities.IsUGCHandleValid_Exec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCHandle                             Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreValid                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::IsUGCHandleValid_Exec(const struct FSteamUGCHandle& Handle, ESteamCoreValid* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsUGCHandleValid_Exec");
		
		struct
		{
			struct FSteamUGCHandle                             Handle;
			ESteamCoreValid                                    Result;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsUGCHandleValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCHandle                             Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::IsUGCHandleValid(const struct FSteamUGCHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsUGCHandleValid");
		
		struct
		{
			struct FSteamUGCHandle                             Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamTicketHandle                          Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreValid                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::IsSteamTicketHandleValid_Exec(const struct FSteamTicketHandle& Handle, ESteamCoreValid* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec");
		
		struct
		{
			struct FSteamTicketHandle                          Handle;
			ESteamCoreValid                                    Result;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsSteamTicketHandleValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamTicketHandle                          Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::IsSteamTicketHandleValid(const struct FSteamTicketHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamTicketHandleValid");
		
		struct
		{
			struct FSteamTicketHandle                          Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsSteamServerInitialized
	 * 		Flags  -> ()
	 */
	bool USteamUtilities::IsSteamServerInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamServerInitialized");
		
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
	 * 		Name   -> Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreValid                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::IsSteamInventoryUpdateHandleValid_Exec(const struct FSteamInventoryUpdateHandle& Handle, ESteamCoreValid* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec");
		
		struct
		{
			struct FSteamInventoryUpdateHandle                 Handle;
			ESteamCoreValid                                    Result;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::IsSteamInventoryUpdateHandleValid(const struct FSteamInventoryUpdateHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid");
		
		struct
		{
			struct FSteamInventoryUpdateHandle                 Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsSteamIDValid_Exec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreValid                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::IsSteamIDValid_Exec(const struct FSteamID& SteamID, ESteamCoreValid* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamIDValid_Exec");
		
		struct
		{
			struct FSteamID                                    SteamID;
			ESteamCoreValid                                    Result;
		} params;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsSteamAvailable
	 * 		Flags  -> ()
	 */
	bool USteamUtilities::IsSteamAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsSteamAvailable");
		
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
	 * 		Name   -> Function SteamCore.SteamUtilities.IsRecalculatingPing
	 * 		Flags  -> ()
	 */
	bool USteamUtilities::IsRecalculatingPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsRecalculatingPing");
		
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
	 * 		Name   -> Function SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreValid                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::IsPublishedFileIDValid_Exec(const struct FPublishedFileID& Handle, ESteamCoreValid* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec");
		
		struct
		{
			struct FPublishedFileID                            Handle;
			ESteamCoreValid                                    Result;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsPublishedFileIDValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            PublishedFileID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::IsPublishedFileIDValid(const struct FPublishedFileID& PublishedFileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsPublishedFileIDValid");
		
		struct
		{
			struct FPublishedFileID                            PublishedFileID;
		} params;
		params.PublishedFileID = PublishedFileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::IsLobby(const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsLobby");
		
		struct
		{
			struct FSteamID                                    SteamID;
		} params;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsGameIDValid_Exec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamGameID                                GameID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreValid                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::IsGameIDValid_Exec(const struct FSteamGameID& GameID, ESteamCoreValid* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsGameIDValid_Exec");
		
		struct
		{
			struct FSteamGameID                                GameID;
			ESteamCoreValid                                    Result;
		} params;
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.IsGameIDValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamGameID                                GameID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::IsGameIDValid(const struct FSteamGameID& GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.IsGameIDValid");
		
		struct
		{
			struct FSteamGameID                                GameID;
		} params;
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.GetString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamSessionSetting                        Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USteamUtilities::GetString(const struct FSteamSessionSetting& Settings, class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetString");
		
		struct
		{
			struct FSteamSessionSetting                        Settings;
			class FString                                      Key;
		} params;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.GetSteamIdFromPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSteamID USteamUtilities::GetSteamIdFromPlayerState(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetSteamIdFromPlayerState");
		
		struct
		{
			class APlayerState*                                PlayerState;
		} params;
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.GetPublicIp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::GetPublicIp(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetPublicIp");
		
		struct
		{
			class FScriptDelegate                              Callback;
		} params;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.GetPingFromHostData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHostPingData                               Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USteamUtilities::GetPingFromHostData(const struct FHostPingData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetPingFromHostData");
		
		struct
		{
			struct FHostPingData                               Data;
		} params;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.GetInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamSessionSetting                        Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USteamUtilities::GetInteger(const struct FSteamSessionSetting& Settings, class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetInteger");
		
		struct
		{
			struct FSteamSessionSetting                        Settings;
			class FString                                      Key;
		} params;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.GetHostPingData
	 * 		Flags  -> ()
	 */
	struct FHostPingData USteamUtilities::GetHostPingData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetHostPingData");
		
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
	 * 		Name   -> Function SteamCore.SteamUtilities.GetBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamSessionSetting                        Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::GetBool(const struct FSteamSessionSetting& Settings, class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetBool");
		
		struct
		{
			struct FSteamSessionSetting                        Settings;
			class FString                                      Key;
		} params;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.GetAccountType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESteamAccountType USteamUtilities::GetAccountType(const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.GetAccountType");
		
		struct
		{
			struct FSteamID                                    SteamID;
		} params;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.FromUnixTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Timestamp                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime USteamUtilities::FromUnixTimestamp(const class FString& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.FromUnixTimestamp");
		
		struct
		{
			class FString                                      Timestamp;
		} params;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.Equal_Exec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    B                                                          (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamCoreIdentical                                Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamUtilities::Equal_Exec(const struct FSteamID& A, const struct FSteamID& B, ESteamCoreIdentical* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.Equal_Exec");
		
		struct
		{
			struct FSteamID                                    A;
			struct FSteamID                                    B;
			ESteamCoreIdentical                                Result;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.Equal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamID                                    B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamUtilities::Equal(const struct FSteamID& A, const struct FSteamID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.Equal");
		
		struct
		{
			struct FSteamID                                    A;
			struct FSteamID                                    B;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.EncryptString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USteamUtilities::EncryptString(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.EncryptString");
		
		struct
		{
			class FString                                      String;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.ConstructServerFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UServerFilter* USteamUtilities::ConstructServerFilter(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.ConstructServerFilter");
		
		struct
		{
			class UObject*                                     WorldContextObject;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.CancelQuery
	 * 		Flags  -> ()
	 */
	void USteamUtilities::CancelQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.CancelQuery");
		
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
	 * 		Name   -> Function SteamCore.SteamUtilities.BreakUGCHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCHandle                             Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USteamUtilities::BreakUGCHandle(const struct FSteamUGCHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakUGCHandle");
		
		struct
		{
			struct FSteamUGCHandle                             Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.BreakTicketHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamTicketHandle                          Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USteamUtilities::BreakTicketHandle(const struct FSteamTicketHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakTicketHandle");
		
		struct
		{
			struct FSteamTicketHandle                          Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.BreakSteamID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamID                                    SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USteamUtilities::BreakSteamID(const struct FSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakSteamID");
		
		struct
		{
			struct FSteamID                                    SteamID;
		} params;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.BreakSteamGameID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamGameID                                SteamID                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USteamUtilities::BreakSteamGameID(const struct FSteamGameID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakSteamGameID");
		
		struct
		{
			struct FSteamGameID                                SteamID;
		} params;
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.BreakPublishedFileID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPublishedFileID                            FileID                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USteamUtilities::BreakPublishedFileID(const struct FPublishedFileID& FileID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakPublishedFileID");
		
		struct
		{
			struct FPublishedFileID                            FileID;
		} params;
		params.FileID = FileID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.BreakInventoryUpdateHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USteamUtilities::BreakInventoryUpdateHandle(const struct FSteamInventoryUpdateHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BreakInventoryUpdateHandle");
		
		struct
		{
			struct FSteamInventoryUpdateHandle                 Handle;
		} params;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.BP_StringToBytes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> USteamUtilities::BP_StringToBytes(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BP_StringToBytes");
		
		struct
		{
			class FString                                      String;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.SteamUtilities.BP_BytesToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Array                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class FString USteamUtilities::BP_BytesToString(TArray<unsigned char> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.SteamUtilities.BP_BytesToString");
		
		struct
		{
			TArray<unsigned char>                              Array;
		} params;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USteamUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.SteamUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Utils.StartVRDashboard
	 * 		Flags  -> ()
	 */
	void UUtils::StartVRDashboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.StartVRDashboard");
		
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
	 * 		Name   -> Function SteamCore.Utils.ShowGamepadTextInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamGamepadTextInputMode                         InputMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamGamepadTextInputLineMode                     LineInputMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CharMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExistingText                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, const class FString& Description, int32_t CharMax, const class FString& ExistingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.ShowGamepadTextInput");
		
		struct
		{
			ESteamGamepadTextInputMode                         InputMode;
			ESteamGamepadTextInputLineMode                     LineInputMode;
			class FString                                      Description;
			int32_t                                            CharMax;
			class FString                                      ExistingText;
		} params;
		params.InputMode = InputMode;
		params.LineInputMode = LineInputMode;
		params.Description = Description;
		params.CharMax = CharMax;
		params.ExistingText = ExistingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Utils.SetVRHeadsetStreamingEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUtils::SetVRHeadsetStreamingEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.SetVRHeadsetStreamingEnabled");
		
		struct
		{
			bool                                               bEnabled;
		} params;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Utils.SetOverlayNotificationPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamNotificationPosition                         NotificationPosition                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUtils::SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.SetOverlayNotificationPosition");
		
		struct
		{
			ESteamNotificationPosition                         NotificationPosition;
		} params;
		params.NotificationPosition = NotificationPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Utils.SetOverlayNotificationInset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HorizontalInset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VerticalInset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUtils::SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.SetOverlayNotificationInset");
		
		struct
		{
			int32_t                                            HorizontalInset;
			int32_t                                            VerticalInset;
		} params;
		params.HorizontalInset = HorizontalInset;
		params.VerticalInset = VerticalInset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Utils.IsVRHeadsetStreamingEnabled
	 * 		Flags  -> ()
	 */
	bool UUtils::IsVRHeadsetStreamingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsVRHeadsetStreamingEnabled");
		
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
	 * 		Name   -> Function SteamCore.Utils.IsSteamRunningInVR
	 * 		Flags  -> ()
	 */
	bool UUtils::IsSteamRunningInVR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsSteamRunningInVR");
		
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
	 * 		Name   -> Function SteamCore.Utils.IsSteamInBigPictureMode
	 * 		Flags  -> ()
	 */
	bool UUtils::IsSteamInBigPictureMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsSteamInBigPictureMode");
		
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
	 * 		Name   -> Function SteamCore.Utils.IsSteamChinaLauncher
	 * 		Flags  -> ()
	 */
	bool UUtils::IsSteamChinaLauncher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsSteamChinaLauncher");
		
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
	 * 		Name   -> Function SteamCore.Utils.IsOverlayEnabled
	 * 		Flags  -> ()
	 */
	bool UUtils::IsOverlayEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.IsOverlayEnabled");
		
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
	 * 		Name   -> Function SteamCore.Utils.InitFilterText
	 * 		Flags  -> ()
	 */
	bool UUtils::InitFilterText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.InitFilterText");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetSteamUILanguage
	 * 		Flags  -> ()
	 */
	class FString UUtils::GetSteamUILanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetSteamUILanguage");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetServerRealTime
	 * 		Flags  -> ()
	 */
	int32_t UUtils::GetServerRealTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetServerRealTime");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetSecondsSinceComputerActive
	 * 		Flags  -> ()
	 */
	int32_t UUtils::GetSecondsSinceComputerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetSecondsSinceComputerActive");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetSecondsSinceAppActive
	 * 		Flags  -> ()
	 */
	int32_t UUtils::GetSecondsSinceAppActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetSecondsSinceAppActive");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetIPCountry
	 * 		Flags  -> ()
	 */
	class FString UUtils::GetIPCountry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetIPCountry");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetIPCCallCount
	 * 		Flags  -> ()
	 */
	int32_t UUtils::GetIPCCallCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetIPCCallCount");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetImageSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            iImage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtils::GetImageSize(int32_t iImage, int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetImageSize");
		
		struct
		{
			int32_t                                            iImage;
			int32_t                                            Width;
			int32_t                                            Height;
		} params;
		params.iImage = iImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Utils.GetImageRGBA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            iImage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              OutBuffer                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUtils::GetImageRGBA(int32_t iImage, TArray<unsigned char>* OutBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetImageRGBA");
		
		struct
		{
			int32_t                                            iImage;
			TArray<unsigned char>                              OutBuffer;
		} params;
		params.iImage = iImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBuffer != nullptr)
			*OutBuffer = params.OutBuffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Utils.GetEnteredGamepadTextLength
	 * 		Flags  -> ()
	 */
	int32_t UUtils::GetEnteredGamepadTextLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetEnteredGamepadTextLength");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetEnteredGamepadTextInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtils::GetEnteredGamepadTextInput(class FString* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetEnteredGamepadTextInput");
		
		struct
		{
			class FString                                      Text;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Utils.GetCurrentBatteryPower
	 * 		Flags  -> ()
	 */
	int32_t UUtils::GetCurrentBatteryPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetCurrentBatteryPower");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetConnectedUniverse
	 * 		Flags  -> ()
	 */
	ESteamUniverse UUtils::GetConnectedUniverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetConnectedUniverse");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetAppID_Pure
	 * 		Flags  -> ()
	 */
	int32_t UUtils::GetAppID_Pure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetAppID_Pure");
		
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
	 * 		Name   -> Function SteamCore.Utils.GetAppID
	 * 		Flags  -> ()
	 */
	int32_t UUtils::GetAppID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.GetAppID");
		
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
	 * 		Name   -> Function SteamCore.Utils.BOverlayNeedsPresent
	 * 		Flags  -> ()
	 */
	bool UUtils::BOverlayNeedsPresent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Utils.BOverlayNeedsPresent");
		
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
	 * 		Name   -> PredefindFunction UUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Utils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Video.IsBroadcasting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumViewers                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVideo::IsBroadcasting(int32_t* NumViewers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Video.IsBroadcasting");
		
		struct
		{
			int32_t                                            NumViewers;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumViewers != nullptr)
			*NumViewers = params.NumViewers;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Video.GetVideoURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VideoAppID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVideo::GetVideoURL(int32_t VideoAppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Video.GetVideoURL");
		
		struct
		{
			int32_t                                            VideoAppID;
		} params;
		params.VideoAppID = VideoAppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Video.GetOPFStringForApp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VideoAppID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutBuffer                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVideo::GetOPFStringForApp(int32_t VideoAppID, class FString* OutBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Video.GetOPFStringForApp");
		
		struct
		{
			int32_t                                            VideoAppID;
			class FString                                      OutBuffer;
		} params;
		params.VideoAppID = VideoAppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBuffer != nullptr)
			*OutBuffer = params.OutBuffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamCore.Video.GetOPFSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VideoAppID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVideo::GetOPFSettings(int32_t VideoAppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamCore.Video.GetOPFSettings");
		
		struct
		{
			int32_t                                            VideoAppID;
		} params;
		params.VideoAppID = VideoAppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVideo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVideo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamCore.Video");
		return ptr;
	}

}


