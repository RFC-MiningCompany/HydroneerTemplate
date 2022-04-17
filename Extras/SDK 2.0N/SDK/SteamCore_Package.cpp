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
	 * 		Name   -> PredefindFunction USteamCoreSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreSubsystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreSubsystem"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.AppList.GetNumInstalledApps"));
		
		UAppList_GetNumInstalledApps_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.AppList.GetInstalledApps"));
		
		UAppList_GetInstalledApps_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.AppList.GetAppName"));
		
		UAppList_GetAppName_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.AppList.GetAppInstallDir"));
		
		UAppList_GetAppInstallDir_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.AppList.GetAppBuildId"));
		
		UAppList_GetAppBuildId_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.AppList"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.UninstallDLC"));
		
		UApps_UninstallDLC_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.MarkContentCorrupt"));
		
		UApps_MarkContentCorrupt_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.InstallDLC"));
		
		UApps_InstallDLC_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetLaunchQueryParam"));
		
		UApps_GetLaunchQueryParam_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetLaunchCommandLine"));
		
		UApps_GetLaunchCommandLine_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetInstalledDepots"));
		
		UApps_GetInstalledDepots_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetFileDetails"));
		
		UApps_GetFileDetails_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetEarliestPurchaseUnixTime"));
		
		UApps_GetEarliestPurchaseUnixTime_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetDlcDownloadProgress"));
		
		UApps_GetDlcDownloadProgress_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetDLCCount"));
		
		UApps_GetDLCCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetCurrentGameLanguage"));
		
		UApps_GetCurrentGameLanguage_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetCurrentBetaName"));
		
		UApps_GetCurrentBetaName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetAvailableGameLanguages"));
		
		UApps_GetAvailableGameLanguages_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetAppOwner"));
		
		UApps_GetAppOwner_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetAppInstallDir"));
		
		UApps_GetAppInstallDir_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.GetAppBuildId"));
		
		UApps_GetAppBuildId_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsVACBanned"));
		
		UApps_BIsVACBanned_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsTimedTrial"));
		
		UApps_BIsTimedTrial_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsSubscribedFromFreeWeekend"));
		
		UApps_BIsSubscribedFromFreeWeekend_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsSubscribedFromFamilySharing"));
		
		UApps_BIsSubscribedFromFamilySharing_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsSubscribedApp"));
		
		UApps_BIsSubscribedApp_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsSubscribed"));
		
		UApps_BIsSubscribed_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsLowViolence"));
		
		UApps_BIsLowViolence_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsDlcInstalled"));
		
		UApps_BIsDlcInstalled_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsCybercafe"));
		
		UApps_BIsCybercafe_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BIsAppInstalled"));
		
		UApps_BIsAppInstalled_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Apps.BGetDLCDataByIndex"));
		
		UApps_BGetDLCDataByIndex_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Apps"));
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreAsyncAction"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback"));
		
		USteamCoreAppsAsyncActionGetFileDetails_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync"));
		
		USteamCoreAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Params params {};
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
	 * 		Name   -> PredefindFunction USteamCoreAppsAsyncActionGetFileDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreAppsAsyncActionGetFileDetails::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreAppsAsyncActionGetFileDetails"));
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreGameMode"));
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCore"));
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreSettings"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.SetRichPresence"));
		
		UFriends_SetRichPresence_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.SetPlayedWith"));
		
		UFriends_SetPlayedWith_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.SetPersonaName"));
		
		UFriends_SetPersonaName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.SetListenForFriendsMessages"));
		
		UFriends_SetListenForFriendsMessages_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.SetInGameVoiceSpeaking"));
		
		UFriends_SetInGameVoiceSpeaking_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.SendClanChatMessage"));
		
		UFriends_SendClanChatMessage_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.RequestUserInformation"));
		
		UFriends_RequestUserInformation_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.RequestFriendRichPresence"));
		
		UFriends_RequestFriendRichPresence_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.RequestClanOfficerList"));
		
		UFriends_RequestClanOfficerList_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.ReplyToFriendMessage"));
		
		UFriends_ReplyToFriendMessage_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.RegisterProtocolInOverlayBrowser"));
		
		UFriends_RegisterProtocolInOverlayBrowser_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.OpenClanChatWindowInSteam"));
		
		UFriends_OpenClanChatWindowInSteam_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.LeaveClanChatRoom"));
		
		UFriends_LeaveClanChatRoom_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.JoinClanChatRoom"));
		
		UFriends_JoinClanChatRoom_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.IsUserInSource"));
		
		UFriends_IsUserInSource_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.IsFollowing"));
		
		UFriends_IsFollowing_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.IsClanPublic"));
		
		UFriends_IsClanPublic_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.IsClanOfficialGameGroup"));
		
		UFriends_IsClanOfficialGameGroup_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.IsClanChatWindowOpenInSteam"));
		
		UFriends_IsClanChatWindowOpenInSteam_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.IsClanChatAdmin"));
		
		UFriends_IsClanChatAdmin_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.InviteUserToGame"));
		
		UFriends_InviteUserToGame_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.HasFriend"));
		
		UFriends_HasFriend_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetUserRestrictions"));
		
		UFriends_GetUserRestrictions_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetSmallFriendAvatar"));
		
		UFriends_GetSmallFriendAvatar_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetPlayerNickname_Pure"));
		
		UFriends_GetPlayerNickname_Pure_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetPlayerNickname"));
		
		UFriends_GetPlayerNickname_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetPersonaState_Pure"));
		
		UFriends_GetPersonaState_Pure_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetPersonaState"));
		
		UFriends_GetPersonaState_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetPersonaName_Pure"));
		
		UFriends_GetPersonaName_Pure_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetPersonaName"));
		
		UFriends_GetPersonaName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetMediumFriendAvatar"));
		
		UFriends_GetMediumFriendAvatar_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetLargeFriendAvatar"));
		
		UFriends_GetLargeFriendAvatar_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendSteamLevel"));
		
		UFriends_GetFriendSteamLevel_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendsGroupName"));
		
		UFriends_GetFriendsGroupName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendsGroupMembersList"));
		
		UFriends_GetFriendsGroupMembersList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendsGroupMembersCount"));
		
		UFriends_GetFriendsGroupMembersCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendsGroupIDByIndex"));
		
		UFriends_GetFriendsGroupIDByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendsGroupCount"));
		
		UFriends_GetFriendsGroupCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendRichPresenceKeyCount"));
		
		UFriends_GetFriendRichPresenceKeyCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendRichPresenceKeyByIndex"));
		
		UFriends_GetFriendRichPresenceKeyByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendRichPresence"));
		
		UFriends_GetFriendRichPresence_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendRelationship"));
		
		UFriends_GetFriendRelationship_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendPersonaState"));
		
		UFriends_GetFriendPersonaState_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendPersonaNameHistory"));
		
		UFriends_GetFriendPersonaNameHistory_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendPersonaName"));
		
		UFriends_GetFriendPersonaName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendMessage"));
		
		UFriends_GetFriendMessage_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendGamePlayed"));
		
		UFriends_GetFriendGamePlayed_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendFromSourceByIndex"));
		
		UFriends_GetFriendFromSourceByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendCountFromSource"));
		
		UFriends_GetFriendCountFromSource_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendCount"));
		
		UFriends_GetFriendCount_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendCoplayTime"));
		
		UFriends_GetFriendCoplayTime_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendCoplayGame"));
		
		UFriends_GetFriendCoplayGame_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFriendByIndex"));
		
		UFriends_GetFriendByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetFollowerCount"));
		
		UFriends_GetFollowerCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetCoplayFriendCount"));
		
		UFriends_GetCoplayFriendCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetCoplayFriend"));
		
		UFriends_GetCoplayFriend_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanTag"));
		
		UFriends_GetClanTag_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanOwner"));
		
		UFriends_GetClanOwner_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanOfficerCount"));
		
		UFriends_GetClanOfficerCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanOfficerByIndex"));
		
		UFriends_GetClanOfficerByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanName"));
		
		UFriends_GetClanName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanCount"));
		
		UFriends_GetClanCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanChatMessage"));
		
		UFriends_GetClanChatMessage_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanChatMemberCount"));
		
		UFriends_GetClanChatMemberCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanByIndex"));
		
		UFriends_GetClanByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetClanActivityCounts"));
		
		UFriends_GetClanActivityCounts_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.GetChatMemberByIndex"));
		
		UFriends_GetChatMemberByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.EnumerateFollowingList"));
		
		UFriends_EnumerateFollowingList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.DownloadClanActivityCounts"));
		
		UFriends_DownloadClanActivityCounts_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.CloseClanChatWindowInSteam"));
		
		UFriends_CloseClanChatWindowInSteam_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.ClearRichPresence"));
		
		UFriends_ClearRichPresence_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.ActivateGameOverlayToWebPage"));
		
		UFriends_ActivateGameOverlayToWebPage_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.ActivateGameOverlayToUser"));
		
		UFriends_ActivateGameOverlayToUser_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.ActivateGameOverlayToStore"));
		
		UFriends_ActivateGameOverlayToStore_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.ActivateGameOverlayInviteDialogConnectString"));
		
		UFriends_ActivateGameOverlayInviteDialogConnectString_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.ActivateGameOverlayInvitedialog"));
		
		UFriends_ActivateGameOverlayInvitedialog_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Friends.ActivateGameOverlay"));
		
		UFriends_ActivateGameOverlay_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Friends"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync"));
		
		USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSetPersonaNameResponse                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionSetPersonaName::HandleCallback(const struct FSetPersonaNameResponse& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback"));
		
		USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreFriendsAsyncActionSetPersonaName"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback"));
		
		USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync"));
		
		USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync"));
		
		USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClanOfficerListResponse                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionRequestClanOfficerList::HandleCallback(const struct FClanOfficerListResponse& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback"));
		
		USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync"));
		
		USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJoinClanChatRoomCompletionResult           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionJoinClanChatRoom::HandleCallback(const struct FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback"));
		
		USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback"));
		
		USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync"));
		
		USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync"));
		
		USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFriendsIsFollowing                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreFriendsAsyncActionIsFollowing::HandleCallback(const struct FFriendsIsFollowing& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback"));
		
		USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreFriendsAsyncActionIsFollowing"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback"));
		
		USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync"));
		
		USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Params params {};
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
	 * 		Name   -> PredefindFunction USteamCoreFriendsAsyncActionGetFollowerCount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreFriendsAsyncActionGetFollowerCount::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync"));
		
		USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback"));
		
		USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.SubmitPlayerResult"));
		
		USteamGameSearch_SubmitPlayerResult_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.SetGameHostParams"));
		
		USteamGameSearch_SetGameHostParams_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.SetConnectionDetails"));
		
		USteamGameSearch_SetConnectionDetails_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.SearchForGameWithLobby"));
		
		USteamGameSearch_SearchForGameWithLobby_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.SearchForGameSolo"));
		
		USteamGameSearch_SearchForGameSolo_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.RetrieveConnectionDetails"));
		
		USteamGameSearch_RetrieveConnectionDetails_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.RequestPlayersForGame"));
		
		USteamGameSearch_RequestPlayersForGame_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.HostConfirmGameStart"));
		
		USteamGameSearch_HostConfirmGameStart_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.EndGameSearch"));
		
		USteamGameSearch_EndGameSearch_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.EndGame"));
		
		USteamGameSearch_EndGame_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.DeclineGame"));
		
		USteamGameSearch_DeclineGame_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.CancelRequestPlayersForGame"));
		
		USteamGameSearch_CancelRequestPlayersForGame_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.AddGameSearchParams"));
		
		USteamGameSearch_AddGameSearchParams_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameSearch.AcceptGame"));
		
		USteamGameSearch_AcceptGame_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamGameSearch"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.WasRestartRequested"));
		
		USteamGameServer_WasRestartRequested_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.UserHasLicenseForApp"));
		
		USteamGameServer_UserHasLicenseForApp_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetSpectatorServerName"));
		
		USteamGameServer_SetSpectatorServerName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetSpectatorPort"));
		
		USteamGameServer_SetSpectatorPort_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetServerName"));
		
		USteamGameServer_SetServerName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetRegion"));
		
		USteamGameServer_SetRegion_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetProduct"));
		
		USteamGameServer_SetProduct_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetPasswordProtected"));
		
		USteamGameServer_SetPasswordProtected_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetModDir"));
		
		USteamGameServer_SetModDir_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetMaxPlayerCount"));
		
		USteamGameServer_SetMaxPlayerCount_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetMapName"));
		
		USteamGameServer_SetMapName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetKeyValue"));
		
		USteamGameServer_SetKeyValue_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetHeartbeatInterval"));
		
		USteamGameServer_SetHeartbeatInterval_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetGameTags"));
		
		USteamGameServer_SetGameTags_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetGameDescription"));
		
		USteamGameServer_SetGameDescription_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetGameData"));
		
		USteamGameServer_SetGameData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetDedicatedServer"));
		
		USteamGameServer_SetDedicatedServer_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.SetBotPlayerCount"));
		
		USteamGameServer_SetBotPlayerCount_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.RequestUserGroupStatus"));
		
		USteamGameServer_RequestUserGroupStatus_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.LogOnAnonymous"));
		
		USteamGameServer_LogOnAnonymous_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.LogOn"));
		
		USteamGameServer_LogOn_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.LogOff"));
		
		USteamGameServer_LogOff_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.GetServerSteamID_PureCompact"));
		
		USteamGameServer_GetServerSteamID_PureCompact_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.GetServerSteamID_Pure"));
		
		USteamGameServer_GetServerSteamID_Pure_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.GetServerSteamID"));
		
		USteamGameServer_GetServerSteamID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.GetServerPublicIP_PureCompact"));
		
		USteamGameServer_GetServerPublicIP_PureCompact_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.GetServerPublicIP_Pure"));
		
		USteamGameServer_GetServerPublicIP_Pure_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.GetServerPublicIP"));
		
		USteamGameServer_GetServerPublicIP_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.GetAuthSessionTicket"));
		
		USteamGameServer_GetAuthSessionTicket_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.ForceHeartbeat"));
		
		USteamGameServer_ForceHeartbeat_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.EndAuthSession"));
		
		USteamGameServer_EndAuthSession_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.EnableHeartbeats"));
		
		USteamGameServer_EnableHeartbeats_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.CreateUnauthenticatedUserConnection"));
		
		USteamGameServer_CreateUnauthenticatedUserConnection_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.ComputeNewPlayerCompatibility"));
		
		USteamGameServer_ComputeNewPlayerCompatibility_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.ClearAllKeyValues"));
		
		USteamGameServer_ClearAllKeyValues_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.CancelAuthTicket"));
		
		USteamGameServer_CancelAuthTicket_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.BUpdateUserData"));
		
		USteamGameServer_BUpdateUserData_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.BSecure"));
		
		USteamGameServer_BSecure_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.BLoggedOn"));
		
		USteamGameServer_BLoggedOn_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.BeginAuthSession"));
		
		USteamGameServer_BeginAuthSession_Params params {};
		params.Ticket = Ticket;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamGameServer.AssociateWithClan"));
		
		USteamGameServer_AssociateWithClan_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamGameServer"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.UpdateUserAvgRateStat"));
		
		UGameServerStats_UpdateUserAvgRateStat_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.SetUserStatInt"));
		
		UGameServerStats_SetUserStatInt_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.SetUserStatFloat"));
		
		UGameServerStats_SetUserStatFloat_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.SetUserAchievement"));
		
		UGameServerStats_SetUserAchievement_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.ServerStoreUserStats"));
		
		UGameServerStats_ServerStoreUserStats_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.ServerRequestUserStats"));
		
		UGameServerStats_ServerRequestUserStats_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.GetUserStatInt"));
		
		UGameServerStats_GetUserStatInt_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.GetUserStatFloat"));
		
		UGameServerStats_GetUserStatFloat_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.GetUserAchievement"));
		
		UGameServerStats_GetUserAchievement_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.GameServerStats.ClearUserAchievement"));
		
		UGameServerStats_ClearUserAchievement_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.GameServerStats"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.TriggerVibration"));
		
		UInput_TriggerVibration_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.TriggerRepeatedHapticPulse"));
		
		UInput_TriggerRepeatedHapticPulse_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.TriggerHapticPulse"));
		
		UInput_TriggerHapticPulse_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.TranslateActionOrigin"));
		
		UInput_TranslateActionOrigin_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.StopAnalogActionMomentum"));
		
		UInput_StopAnalogActionMomentum_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.Shutdown"));
		
		UInput_Shutdown_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.ShowBindingPanel"));
		
		UInput_ShowBindingPanel_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.SetLEDColor"));
		
		UInput_SetLEDColor_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.Init"));
		
		UInput_Init_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetStringForXboxOrigin"));
		
		UInput_GetStringForXboxOrigin_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetStringForActionOrigin"));
		
		UInput_GetStringForActionOrigin_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetRemotePlaySessionID"));
		
		UInput_GetRemotePlaySessionID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetMotionData"));
		
		UInput_GetMotionData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetInputTypeForHandle"));
		
		UInput_GetInputTypeForHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetGlyphForXboxOrigin"));
		
		UInput_GetGlyphForXboxOrigin_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetGlyphForActionOrigin"));
		
		UInput_GetGlyphForActionOrigin_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetGamepadIndexForController"));
		
		UInput_GetGamepadIndexForController_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetDigitalActionOrigins"));
		
		UInput_GetDigitalActionOrigins_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetDigitalActionHandle"));
		
		UInput_GetDigitalActionHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetDigitalActionData"));
		
		UInput_GetDigitalActionData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetDeviceBindingRevision"));
		
		UInput_GetDeviceBindingRevision_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetCurrentActionSet"));
		
		UInput_GetCurrentActionSet_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetControllerForGamepadIndex"));
		
		UInput_GetControllerForGamepadIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetConnectedControllers"));
		
		UInput_GetConnectedControllers_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetAnalogActionOrigins"));
		
		UInput_GetAnalogActionOrigins_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetAnalogActionHandle"));
		
		UInput_GetAnalogActionHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetAnalogActionData"));
		
		UInput_GetAnalogActionData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetActiveActionSetLayers"));
		
		UInput_GetActiveActionSetLayers_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetActionSetHandle"));
		
		UInput_GetActionSetHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.GetActionOriginFromXboxOrigin"));
		
		UInput_GetActionOriginFromXboxOrigin_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.DeactivateAllActionSetLayers"));
		
		UInput_DeactivateAllActionSetLayers_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.DeactivateActionSetLayer"));
		
		UInput_DeactivateActionSetLayer_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.ActivateActionSetLayer"));
		
		UInput_ActivateActionSetLayer_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Input.ActivateActionSet"));
		
		UInput_ActivateActionSet_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Input"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.TriggerItemDrop"));
		
		UInventory_TriggerItemDrop_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.TransferItemQuantity"));
		
		UInventory_TransferItemQuantity_Params params {};
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
	 * 		Name   -> Function SteamCore.Inventory.SubmitUpdateProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryUpdateHandle                 Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamInventoryResult                       ResultHandle                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventory::SubmitUpdateProperties(const struct FSteamInventoryUpdateHandle& Handle, struct FSteamInventoryResult* ResultHandle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.SubmitUpdateProperties"));
		
		UInventory_SubmitUpdateProperties_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.StartUpdateProperties"));
		
		UInventory_StartUpdateProperties_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.StartPurchase"));
		
		UInventory_StartPurchase_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.SetPropertyString"));
		
		UInventory_SetPropertyString_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.SetPropertyInt"));
		
		UInventory_SetPropertyInt_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.SetPropertyFloat"));
		
		UInventory_SetPropertyFloat_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.SetPropertyBool"));
		
		UInventory_SetPropertyBool_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.SerializeResult"));
		
		UInventory_SerializeResult_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.RequestPrices"));
		
		UInventory_RequestPrices_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs"));
		
		UInventory_RequestEligiblePromoItemDefinitionsIDs_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.RemoveProperty"));
		
		UInventory_RemoveProperty_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.LoadItemDefinitions"));
		
		UInventory_LoadItemDefinitions_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GrantPromoItems"));
		
		UInventory_GrantPromoItems_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetResultTimestamp"));
		
		UInventory_GetResultTimestamp_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetResultStatus"));
		
		UInventory_GetResultStatus_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetResultItems"));
		
		UInventory_GetResultItems_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetResultItemProperty"));
		
		UInventory_GetResultItemProperty_Params params {};
		params.ItemIndex = ItemIndex;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetNumItemsWithPrices"));
		
		UInventory_GetNumItemsWithPrices_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetItemsWithPrices"));
		
		UInventory_GetItemsWithPrices_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetItemsByID"));
		
		UInventory_GetItemsByID_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetItemPrice"));
		
		UInventory_GetItemPrice_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetItemDefinitionProperty"));
		
		UInventory_GetItemDefinitionProperty_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetItemDefinitionIDs"));
		
		UInventory_GetItemDefinitionIDs_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs"));
		
		UInventory_GetEligiblePromoItemDefinitionIDs_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GetAllItems"));
		
		UInventory_GetAllItems_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.GenerateItems"));
		
		UInventory_GenerateItems_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.ExchangeItems"));
		
		UInventory_ExchangeItems_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.DestroyResult"));
		
		UInventory_DestroyResult_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.DeserializeResult"));
		
		UInventory_DeserializeResult_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.ConsumeItem"));
		
		UInventory_ConsumeItem_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.CheckResultSteamID"));
		
		UInventory_CheckResultSteamID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.AddPromoItems"));
		
		UInventory_AddPromoItems_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Inventory.AddPromoItem"));
		
		UInventory_AddPromoItem_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Inventory"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync"));
		
		USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamInventoryEligiblePromoItemDefIDs      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::HandleCallback(const struct FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback"));
		
		USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync"));
		
		USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback"));
		
		USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync"));
		
		USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback"));
		
		USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.SetLobbyType"));
		
		UMatchmaking_SetLobbyType_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.SetLobbyOwner"));
		
		UMatchmaking_SetLobbyOwner_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.SetLobbyMemberLimit"));
		
		UMatchmaking_SetLobbyMemberLimit_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.SetLobbyMemberData"));
		
		UMatchmaking_SetLobbyMemberData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.SetLobbyJoinable"));
		
		UMatchmaking_SetLobbyJoinable_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.SetLobbyGameServer"));
		
		UMatchmaking_SetLobbyGameServer_Params params {};
		params.GameServerPort = GameServerPort;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.SetLobbyData"));
		
		UMatchmaking_SetLobbyData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.SetLinkedLobby"));
		
		UMatchmaking_SetLinkedLobby_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.SendLobbyChatMsg"));
		
		UMatchmaking_SendLobbyChatMsg_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.RequestLobbyList"));
		
		UMatchmaking_RequestLobbyList_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.RequestLobbyData"));
		
		UMatchmaking_RequestLobbyData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.RemoveFavoriteGame"));
		
		UMatchmaking_RemoveFavoriteGame_Params params {};
		params.AppID = AppID;
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.LeaveLobby"));
		
		UMatchmaking_LeaveLobby_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.JoinLobby"));
		
		UMatchmaking_JoinLobby_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.InviteUserToLobby"));
		
		UMatchmaking_InviteUserToLobby_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetNumLobbyMembers"));
		
		UMatchmaking_GetNumLobbyMembers_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyOwner"));
		
		UMatchmaking_GetLobbyOwner_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyMemberLimit"));
		
		UMatchmaking_GetLobbyMemberLimit_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyMemberData"));
		
		UMatchmaking_GetLobbyMemberData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyMemberByIndex"));
		
		UMatchmaking_GetLobbyMemberByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyGameServer"));
		
		UMatchmaking_GetLobbyGameServer_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyDataCount"));
		
		UMatchmaking_GetLobbyDataCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyDataByIndex"));
		
		UMatchmaking_GetLobbyDataByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyData"));
		
		UMatchmaking_GetLobbyData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyChatEntry"));
		
		UMatchmaking_GetLobbyChatEntry_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetLobbyByIndex"));
		
		UMatchmaking_GetLobbyByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetFavoriteGameCount"));
		
		UMatchmaking_GetFavoriteGameCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.GetFavoriteGame"));
		
		UMatchmaking_GetFavoriteGame_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.DeleteLobbyData"));
		
		UMatchmaking_DeleteLobbyData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.CreateLobby"));
		
		UMatchmaking_CreateLobby_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.AddRequestLobbyListStringFilter"));
		
		UMatchmaking_AddRequestLobbyListStringFilter_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter"));
		
		UMatchmaking_AddRequestLobbyListResultCountFilter_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter"));
		
		UMatchmaking_AddRequestLobbyListNumericalFilter_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter"));
		
		UMatchmaking_AddRequestLobbyListNearValueFilter_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable"));
		
		UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter"));
		
		UMatchmaking_AddRequestLobbyListDistanceFilter_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter"));
		
		UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Matchmaking.AddFavoriteGame"));
		
		UMatchmaking_AddFavoriteGame_Params params {};
		params.AppID = AppID;
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Matchmaking"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback"));
		
		USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync"));
		
		USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync"));
		
		USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback"));
		
		USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync"));
		
		USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJoinLobbyData                              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreMatchmakingAsyncActionJoinLobby::HandleCallback(const struct FJoinLobbyData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback"));
		
		USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreCreateSession.CreateSteamCoreSession"));
		
		USteamCoreCreateSession_CreateSteamCoreSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionSettings = SessionSettings;
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreCreateSession"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFindSession.OnCompleted"));
		
		USteamCoreFindSession_OnCompleted_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreFindSession.FindSteamCoreSessions"));
		
		USteamCoreFindSession_FindSteamCoreSessions_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreFindSession"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreDestroySession.OnCompleted"));
		
		USteamCoreDestroySession_OnCompleted_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreDestroySession.DestroySteamCoreSession"));
		
		USteamCoreDestroySession_DestroySteamCoreSession_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreDestroySession"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUpdateSession.UpdateSteamCoreSession"));
		
		USteamCoreUpdateSession_UpdateSteamCoreSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Settings = Settings;
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUpdateSession.OnCompleted"));
		
		USteamCoreUpdateSession_OnCompleted_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUpdateSession"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.MatchmakingServers.ServerRules"));
		
		UMatchmakingServers_ServerRules_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.MatchmakingServers.RequestSpectatorServerList"));
		
		UMatchmakingServers_RequestSpectatorServerList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.MatchmakingServers.RequestLANServerList"));
		
		UMatchmakingServers_RequestLANServerList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.MatchmakingServers.RequestInternetServerList"));
		
		UMatchmakingServers_RequestInternetServerList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.MatchmakingServers.RequestHistoryServerList"));
		
		UMatchmakingServers_RequestHistoryServerList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.MatchmakingServers.RequestFriendsServerList"));
		
		UMatchmakingServers_RequestFriendsServerList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.MatchmakingServers.RequestFavoritesServerList"));
		
		UMatchmakingServers_RequestFavoritesServerList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.MatchmakingServers.PingServer"));
		
		UMatchmakingServers_PingServer_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.MatchmakingServers"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync"));
		
		USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback"));
		
		USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync"));
		
		USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync"));
		
		USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync"));
		
		USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync"));
		
		USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync"));
		
		USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync"));
		
		USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished"));
		
		USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback"));
		
		USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync"));
		
		USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback"));
		
		USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.GetFilters"));
		
		UServerFilter_GetFilters_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterWhitelisted"));
		
		UServerFilter_AddFilterWhitelisted_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterVersion"));
		
		UServerFilter_AddFilterVersion_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterSecure"));
		
		UServerFilter_AddFilterSecure_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterProxy"));
		
		UServerFilter_AddFilterProxy_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterPassword"));
		
		UServerFilter_AddFilterPassword_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterOr"));
		
		UServerFilter_AddFilterOr_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterNotFull"));
		
		UServerFilter_AddFilterNotFull_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterNotAppId"));
		
		UServerFilter_AddFilterNotAppId_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterNor"));
		
		UServerFilter_AddFilterNor_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterNoPlayers"));
		
		UServerFilter_AddFilterNoPlayers_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterNand"));
		
		UServerFilter_AddFilterNand_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterName"));
		
		UServerFilter_AddFilterName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterMap"));
		
		UServerFilter_AddFilterMap_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterLinux"));
		
		UServerFilter_AddFilterLinux_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterHasPlayers"));
		
		UServerFilter_AddFilterHasPlayers_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterGameTagsNor"));
		
		UServerFilter_AddFilterGameTagsNor_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterGameTagsAnd"));
		
		UServerFilter_AddFilterGameTagsAnd_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterGameDataOr"));
		
		UServerFilter_AddFilterGameDataOr_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterGameDataNor"));
		
		UServerFilter_AddFilterGameDataNor_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterGameDataAnd"));
		
		UServerFilter_AddFilterGameDataAnd_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterGameAddr"));
		
		UServerFilter_AddFilterGameAddr_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterDedicated"));
		
		UServerFilter_AddFilterDedicated_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ServerFilter.AddFilterAnd"));
		
		UServerFilter_AddFilterAnd_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.ServerFilter"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Music.SetVolume"));
		
		UMusic_SetVolume_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Music.PlayPrevious"));
		
		UMusic_PlayPrevious_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Music.PlayNext"));
		
		UMusic_PlayNext_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Music.Play"));
		
		UMusic_Play_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Music.Pause"));
		
		UMusic_Pause_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Music.GetVolume"));
		
		UMusic_GetVolume_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Music.GetPlaybackStatus"));
		
		UMusic_GetPlaybackStatus_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Music.BIsPlaying"));
		
		UMusic_BIsPlaying_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Music.BIsEnabled"));
		
		UMusic_BIsEnabled_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Music"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Networking.SendP2PPacket"));
		
		UNetworking_SendP2PPacket_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Networking.ReadP2PPacket"));
		
		UNetworking_ReadP2PPacket_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Networking.IsP2PPacketAvailable"));
		
		UNetworking_IsP2PPacketAvailable_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Networking.GetP2PSessionState"));
		
		UNetworking_GetP2PSessionState_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Networking.CloseP2PSessionWithUser"));
		
		UNetworking_CloseP2PSessionWithUser_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Networking.CloseP2PChannelWithUser"));
		
		UNetworking_CloseP2PChannelWithUser_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Networking.AllowP2PPacketRelay"));
		
		UNetworking_AllowP2PPacketRelay_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Networking.AcceptP2PSessionWithUser"));
		
		UNetworking_AcceptP2PSessionWithUser_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Networking"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.NetworkingUtils.ParsePingLocationString"));
		
		UNetworkingUtils_ParsePingLocationString_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.NetworkingUtils.InitRelayNetworkAccess"));
		
		UNetworkingUtils_InitRelayNetworkAccess_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.NetworkingUtils.GetLocalPingLocation"));
		
		UNetworkingUtils_GetLocalPingLocation_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost"));
		
		UNetworkingUtils_EstimatePingTimeFromLocalHost_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations"));
		
		UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.NetworkingUtils.ConvertPingLocationToString"));
		
		UNetworkingUtils_ConvertPingLocationToString_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.NetworkingUtils.CheckPingDataUpToDate"));
		
		UNetworkingUtils_CheckPingDataUpToDate_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.NetworkingUtils"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ParentalSettings.BIsParentalLockLocked"));
		
		UParentalSettings_BIsParentalLockLocked_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ParentalSettings.BIsParentalLockEnabled"));
		
		UParentalSettings_BIsParentalLockEnabled_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ParentalSettings.BIsFeatureInBlockList"));
		
		UParentalSettings_BIsFeatureInBlockList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ParentalSettings.BIsFeatureBlocked"));
		
		UParentalSettings_BIsFeatureBlocked_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ParentalSettings.BIsAppInBlockList"));
		
		UParentalSettings_BIsAppInBlockList_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.ParentalSettings.BIsAppBlocked"));
		
		UParentalSettings_BIsAppBlocked_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.ParentalSettings"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.OnReservationCompleted"));
		
		USteamParties_OnReservationCompleted_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.JoinParty"));
		
		USteamParties_JoinParty_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.GetNumAvailableBeaconLocations"));
		
		USteamParties_GetNumAvailableBeaconLocations_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.GetNumActiveBeacons"));
		
		USteamParties_GetNumActiveBeacons_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.GetBeaconLocationData"));
		
		USteamParties_GetBeaconLocationData_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.GetBeaconDetails"));
		
		USteamParties_GetBeaconDetails_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.GetBeaconByIndex"));
		
		USteamParties_GetBeaconByIndex_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.GetAvailableBeaconLocations"));
		
		USteamParties_GetAvailableBeaconLocations_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.DestroyBeacon"));
		
		USteamParties_DestroyBeacon_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.CreateBeacon"));
		
		USteamParties_CreateBeacon_Params params {};
		params.OpenSlots = OpenSlots;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.ChangeNumOpenSlots"));
		
		USteamParties_ChangeNumOpenSlots_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamParties.CancelReservation"));
		
		USteamParties_CancelReservation_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamParties"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync"));
		
		USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJoinPartyData                              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreSteamPartiesAsyncActionJoinParty::HandleCallback(const struct FJoinPartyData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback"));
		
		USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback"));
		
		USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync"));
		
		USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
	 * 		Name   -> PredefindFunction USteamCoreSteamPartiesAsyncActionCreateBeacon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreSteamPartiesAsyncActionCreateBeacon::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback"));
		
		USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync"));
		
		USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemotePlay.GetSessionSteamID"));
		
		URemotePlay_GetSessionSteamID_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemotePlay.GetSessionID"));
		
		URemotePlay_GetSessionID_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemotePlay.GetSessionCount"));
		
		URemotePlay_GetSessionCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemotePlay.GetSessionClientName"));
		
		URemotePlay_GetSessionClientName_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemotePlay.GetSessionClientFormFactor"));
		
		URemotePlay_GetSessionClientFormFactor_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemotePlay.BSendRemotePlayTogetherInvite"));
		
		URemotePlay_BSendRemotePlayTogetherInvite_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemotePlay.BGetSessionClientResolution"));
		
		URemotePlay_BGetSessionClientResolution_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.RemotePlay"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.UGCRead"));
		
		URemoteStorage_UGCRead_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.UGCDownloadToLocation"));
		
		URemoteStorage_UGCDownloadToLocation_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.UGCDownload"));
		
		URemoteStorage_UGCDownload_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.SetSyncPlatforms"));
		
		URemoteStorage_SetSyncPlatforms_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.SetCloudEnabledForApp"));
		
		URemoteStorage_SetCloudEnabledForApp_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.IsCloudEnabledForApp"));
		
		URemoteStorage_IsCloudEnabledForApp_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.IsCloudEnabledForAccount"));
		
		URemoteStorage_IsCloudEnabledForAccount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetUGCDownloadProgress"));
		
		URemoteStorage_GetUGCDownloadProgress_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetUGCDetails"));
		
		URemoteStorage_GetUGCDetails_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetSyncPlatforms"));
		
		URemoteStorage_GetSyncPlatforms_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetQuota"));
		
		URemoteStorage_GetQuota_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetFileTimestamp"));
		
		URemoteStorage_GetFileTimestamp_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetFileSize"));
		
		URemoteStorage_GetFileSize_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetFileNameAndSize"));
		
		URemoteStorage_GetFileNameAndSize_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetFileCount"));
		
		URemoteStorage_GetFileCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetCachedUGCHandle"));
		
		URemoteStorage_GetCachedUGCHandle_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.GetCachedUGCCount"));
		
		URemoteStorage_GetCachedUGCCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileWriteStreamWriteChunk"));
		
		URemoteStorage_FileWriteStreamWriteChunk_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileWriteStreamOpen"));
		
		URemoteStorage_FileWriteStreamOpen_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileWriteStreamClose"));
		
		URemoteStorage_FileWriteStreamClose_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileWriteStreamCancel"));
		
		URemoteStorage_FileWriteStreamCancel_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileWriteAsync"));
		
		URemoteStorage_FileWriteAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileWrite"));
		
		URemoteStorage_FileWrite_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileShare"));
		
		URemoteStorage_FileShare_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileReadAsyncComplete"));
		
		URemoteStorage_FileReadAsyncComplete_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileReadAsync"));
		
		URemoteStorage_FileReadAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileRead"));
		
		URemoteStorage_FileRead_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FilePersisted"));
		
		URemoteStorage_FilePersisted_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileForget"));
		
		URemoteStorage_FileForget_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileExists"));
		
		URemoteStorage_FileExists_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.RemoteStorage.FileDelete"));
		
		URemoteStorage_FileDelete_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.RemoteStorage"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Screenshots.WriteScreenshot"));
		
		UScreenshots_WriteScreenshot_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Screenshots.TriggerScreenshot"));
		
		UScreenshots_TriggerScreenshot_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Screenshots.TagUser"));
		
		UScreenshots_TagUser_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Screenshots.TagPublishedFile"));
		
		UScreenshots_TagPublishedFile_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Screenshots.SetLocation"));
		
		UScreenshots_SetLocation_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Screenshots.IsScreenshotsHooked"));
		
		UScreenshots_IsScreenshotsHooked_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Screenshots.HookScreenshots"));
		
		UScreenshots_HookScreenshots_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Screenshots.AddVRScreenshotToLibrary"));
		
		UScreenshots_AddVRScreenshotToLibrary_Params params {};
		params.EType = EType;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Screenshots.AddScreenshotToLibrary"));
		
		UScreenshots_AddScreenshotToLibrary_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Screenshots"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.UpdateItemPreviewVideo"));
		
		UUGC_UpdateItemPreviewVideo_Params params {};
		params.Index = Index;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.UpdateItemPreviewFile"));
		
		UUGC_UpdateItemPreviewFile_Params params {};
		params.Index = Index;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.UnsubscribeItem"));
		
		UUGC_UnsubscribeItem_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SuspendDownloads"));
		
		UUGC_SuspendDownloads_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SubscribeItem"));
		
		UUGC_SubscribeItem_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SubmitItemUpdate"));
		
		UUGC_SubmitItemUpdate_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.StopPlaytimeTrackingForAllItems"));
		
		UUGC_StopPlaytimeTrackingForAllItems_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.StopPlaytimeTracking"));
		
		UUGC_StopPlaytimeTracking_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.StartPlaytimeTracking"));
		
		UUGC_StartPlaytimeTracking_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.StartItemUpdate"));
		
		UUGC_StartItemUpdate_Params params {};
		params.ConsumerAppID = ConsumerAppID;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetUserItemVote"));
		
		UUGC_SetUserItemVote_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetSearchText"));
		
		UUGC_SetSearchText_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetReturnTotalOnly"));
		
		UUGC_SetReturnTotalOnly_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetReturnPlaytimeStats"));
		
		UUGC_SetReturnPlaytimeStats_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetReturnOnlyIDs"));
		
		UUGC_SetReturnOnlyIDs_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetReturnMetadata"));
		
		UUGC_SetReturnMetadata_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetReturnLongDescription"));
		
		UUGC_SetReturnLongDescription_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetReturnKeyValueTags"));
		
		UUGC_SetReturnKeyValueTags_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetReturnChildren"));
		
		UUGC_SetReturnChildren_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetReturnAdditionalPreviews"));
		
		UUGC_SetReturnAdditionalPreviews_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetRankedByTrendDays"));
		
		UUGC_SetRankedByTrendDays_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetMatchAnyTag"));
		
		UUGC_SetMatchAnyTag_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetLanguage"));
		
		UUGC_SetLanguage_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetItemVisibility"));
		
		UUGC_SetItemVisibility_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetItemUpdateLanguage"));
		
		UUGC_SetItemUpdateLanguage_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetItemTitle"));
		
		UUGC_SetItemTitle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetItemTags"));
		
		UUGC_SetItemTags_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetItemPreview"));
		
		UUGC_SetItemPreview_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetItemMetadata"));
		
		UUGC_SetItemMetadata_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetItemDescription"));
		
		UUGC_SetItemDescription_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetItemContent"));
		
		UUGC_SetItemContent_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetCloudFileNameFilter"));
		
		UUGC_SetCloudFileNameFilter_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetAllowLegacyUpload"));
		
		UUGC_SetAllowLegacyUpload_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SetAllowCachedResponse"));
		
		UUGC_SetAllowCachedResponse_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.SendQueryUGCRequest"));
		
		UUGC_SendQueryUGCRequest_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.RemoveItemPreview"));
		
		UUGC_RemoveItemPreview_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.RemoveItemKeyValueTags"));
		
		UUGC_RemoveItemKeyValueTags_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.RemoveItemFromFavorites"));
		
		UUGC_RemoveItemFromFavorites_Params params {};
		params.AppID = AppID;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.RemoveDependency"));
		
		UUGC_RemoveDependency_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.RemoveAppDependency"));
		
		UUGC_RemoveAppDependency_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.ReleaseQueryUGCRequest"));
		
		UUGC_ReleaseQueryUGCRequest_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetUserItemVote"));
		
		UUGC_GetUserItemVote_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetSubscribedItems"));
		
		UUGC_GetSubscribedItems_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCTagDisplayName"));
		
		UUGC_GetQueryUGCTagDisplayName_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCTag"));
		
		UUGC_GetQueryUGCTag_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCStatistic"));
		
		UUGC_GetQueryUGCStatistic_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCResult"));
		
		UUGC_GetQueryUGCResult_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCPreviewURL"));
		
		UUGC_GetQueryUGCPreviewURL_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCNumTags"));
		
		UUGC_GetQueryUGCNumTags_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCNumKeyValueTags"));
		
		UUGC_GetQueryUGCNumKeyValueTags_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCNumAdditionalPreviews"));
		
		UUGC_GetQueryUGCNumAdditionalPreviews_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCMetadata"));
		
		UUGC_GetQueryUGCMetadata_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCKeyValueTag"));
		
		UUGC_GetQueryUGCKeyValueTag_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCChildren"));
		
		UUGC_GetQueryUGCChildren_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetQueryUGCAdditionalPreview"));
		
		UUGC_GetQueryUGCAdditionalPreview_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetNumSubscribedItems"));
		
		UUGC_GetNumSubscribedItems_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetItemUpdateProgress"));
		
		UUGC_GetItemUpdateProgress_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetItemState"));
		
		UUGC_GetItemState_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetItemInstallInfo"));
		
		UUGC_GetItemInstallInfo_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetItemDownloadInfo"));
		
		UUGC_GetItemDownloadInfo_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.GetAppDependencies"));
		
		UUGC_GetAppDependencies_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.DownloadItem"));
		
		UUGC_DownloadItem_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.DeleteItem"));
		
		UUGC_DeleteItem_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.CreateQueryUserUGCRequest"));
		
		UUGC_CreateQueryUserUGCRequest_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.CreateQueryUGCDetailsRequest"));
		
		UUGC_CreateQueryUGCDetailsRequest_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.CreateQueryAllUGCRequest"));
		
		UUGC_CreateQueryAllUGCRequest_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.CreateItem"));
		
		UUGC_CreateItem_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.BInitWorkshopForGameServer"));
		
		UUGC_BInitWorkshopForGameServer_Params params {};
		params.WorkshopDepotID = WorkshopDepotID;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddRequiredTagGroup"));
		
		UUGC_AddRequiredTagGroup_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddRequiredTag"));
		
		UUGC_AddRequiredTag_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddRequiredKeyValueTag"));
		
		UUGC_AddRequiredKeyValueTag_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddItemToFavorites"));
		
		UUGC_AddItemToFavorites_Params params {};
		params.AppID = AppID;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddItemPreviewVideo"));
		
		UUGC_AddItemPreviewVideo_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddItemPreviewFile"));
		
		UUGC_AddItemPreviewFile_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddItemKeyValueTag"));
		
		UUGC_AddItemKeyValueTag_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddExcludedTag"));
		
		UUGC_AddExcludedTag_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddDependency"));
		
		UUGC_AddDependency_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UGC.AddAppDependency"));
		
		UUGC_AddAppDependency_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.UGC"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync"));
		
		USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_StopPlaytimeTrackingForAllItemsAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback"));
		
		USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync"));
		
		USteamCoreUGCAsyncActionStopPlaytimeTracking_StopPlaytimeTrackingAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback"));
		
		USteamCoreUGCAsyncActionStopPlaytimeTracking_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync"));
		
		USteamCoreUGCAsyncActionStartPlaytimeTracking_StartPlaytimeTrackingAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback"));
		
		USteamCoreUGCAsyncActionStartPlaytimeTracking_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync"));
		
		USteamCoreUGCAsyncActionUnsubscribeItem_UnsubscribeItemAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteStorageSubscribePublishedFileResult  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionUnsubscribeItem::HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback"));
		
		USteamCoreUGCAsyncActionUnsubscribeItem_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync"));
		
		USteamCoreUGCAsyncActionSubscribeItem_SubscribeItemAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoteStorageSubscribePublishedFileResult  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionSubscribeItem::HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback"));
		
		USteamCoreUGCAsyncActionSubscribeItem_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionSubscribeItem"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync"));
		
		USteamCoreUGCAsyncActionRemoveItemFromFavorites_RemoveItemFromFavoritesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserFavoriteItemsListChanged               Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionRemoveItemFromFavorites::HandleCallback(const struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback"));
		
		USteamCoreUGCAsyncActionRemoveItemFromFavorites_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback"));
		
		USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync"));
		
		USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionAddItemToFavorites.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionAddItemToFavorites::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback"));
		
		USteamCoreUGCAsyncActionGetUserItemVote_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync"));
		
		USteamCoreUGCAsyncActionGetUserItemVote_GetUserItemVoteAsync_Params params {};
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionGetUserItemVote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionGetUserItemVote::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionGetUserItemVote"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync"));
		
		USteamCoreUGCAsyncActionSetUserItemVote_SetUserItemVoteAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback"));
		
		USteamCoreUGCAsyncActionSetUserItemVote_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionSetUserItemVote"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync"));
		
		USteamCoreUGCAsyncActionSubmitItemUpdate_SubmitItemUpdateAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubmitItemUpdateResult                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionSubmitItemUpdate::HandleCallback(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback"));
		
		USteamCoreUGCAsyncActionSubmitItemUpdate_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback"));
		
		USteamCoreUGCAsyncActionCreateItem_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync"));
		
		USteamCoreUGCAsyncActionCreateItem_CreateItemAsync_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionCreateItem"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync"));
		
		USteamCoreUGCAsyncActionSendQueryUGCRequest_SendQueryUGCRequestAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamUGCQueryCompleted                     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionSendQueryUGCRequest::HandleCallback(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback"));
		
		USteamCoreUGCAsyncActionSendQueryUGCRequest_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback"));
		
		USteamCoreUGCAsyncActionAddAppDependency_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync"));
		
		USteamCoreUGCAsyncActionAddAppDependency_AddAppDependencyAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionAddAppDependency"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync"));
		
		USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback"));
		
		USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback"));
		
		USteamCoreUGCAsyncActionAddUGCDependency_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync"));
		
		USteamCoreUGCAsyncActionAddUGCDependency_AddDependencyAsync_Params params {};
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionAddUGCDependency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionAddUGCDependency::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionAddUGCDependency"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync"));
		
		USteamCoreUGCAsyncActionRemoveUGCDependency_RemoveDependencyAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRemoveUGCDependencyResult                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUGCAsyncActionRemoveUGCDependency::HandleCallback(const struct FRemoveUGCDependencyResult& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback"));
		
		USteamCoreUGCAsyncActionRemoveUGCDependency_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback"));
		
		USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync"));
		
		USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Params params {};
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionDeleteItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionDeleteItem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionDeleteItem"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback"));
		
		USteamCoreUGCAsyncActionGetAppDependencies_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync"));
		
		USteamCoreUGCAsyncActionGetAppDependencies_GetAppDependenciesAsync_Params params {};
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
	 * 		Name   -> PredefindFunction USteamCoreUGCAsyncActionGetAppDependencies.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUGCAsyncActionGetAppDependencies::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionGetAppDependencies"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback"));
		
		USteamCoreUGCAsyncActionDownloadItem_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync"));
		
		USteamCoreUGCAsyncActionDownloadItem_DownloadItemAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUGCAsyncActionDownloadItem"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.UserHasLicenseForApp"));
		
		UUser_UserHasLicenseForApp_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.StopVoiceRecording"));
		
		UUser_StopVoiceRecording_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.StartVoiceRecording"));
		
		UUser_StartVoiceRecording_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.RequestStoreAuthURL"));
		
		UUser_RequestStoreAuthURL_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.RequestEncryptedAppTicket"));
		
		UUser_RequestEncryptedAppTicket_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.GetVoiceOptimalSampleRate"));
		
		UUser_GetVoiceOptimalSampleRate_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.GetVoice"));
		
		UUser_GetVoice_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.GetSteamID_Pure"));
		
		UUser_GetSteamID_Pure_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.GetSteamID"));
		
		UUser_GetSteamID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.GetPlayerSteamLevel"));
		
		UUser_GetPlayerSteamLevel_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.GetGameBadgeLevel"));
		
		UUser_GetGameBadgeLevel_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.GetEncryptedAppTicket"));
		
		UUser_GetEncryptedAppTicket_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.GetAvailableVoice"));
		
		UUser_GetAvailableVoice_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.GetAuthSessionTicket"));
		
		UUser_GetAuthSessionTicket_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.EndAuthSession"));
		
		UUser_EndAuthSession_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.DecompressVoice"));
		
		UUser_DecompressVoice_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.CancelAuthTicket"));
		
		UUser_CancelAuthTicket_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.BLoggedOn"));
		
		UUser_BLoggedOn_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.BIsTwoFactorEnabled"));
		
		UUser_BIsTwoFactorEnabled_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.BIsPhoneVerified"));
		
		UUser_BIsPhoneVerified_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.BIsPhoneRequiringVerification"));
		
		UUser_BIsPhoneRequiringVerification_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.BIsPhoneIdentifying"));
		
		UUser_BIsPhoneIdentifying_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.BIsBehindNAT"));
		
		UUser_BIsBehindNAT_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.BeginAuthSession"));
		
		UUser_BeginAuthSession_Params params {};
		params.Ticket = Ticket;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.User.AdvertiseGame"));
		
		UUser_AdvertiseGame_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.User"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync"));
		
		USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback"));
		
		USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync"));
		
		USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStoreAuthURLResponse                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserAsyncActionRequestStoreAuthURL::HandleCallback(const struct FStoreAuthURLResponse& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback"));
		
		USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.UploadLeaderboardScore"));
		
		UUserStats_UploadLeaderboardScore_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.UpdateAvgRateStat"));
		
		UUserStats_UpdateAvgRateStat_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.StoreStats"));
		
		UUserStats_StoreStats_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.SetStatInt"));
		
		UUserStats_SetStatInt_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.SetStatFloat"));
		
		UUserStats_SetStatFloat_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.SetAchievement"));
		
		UUserStats_SetAchievement_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.ResetAllStats"));
		
		UUserStats_ResetAllStats_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.RequestUserStats"));
		
		UUserStats_RequestUserStats_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.RequestGlobalStats"));
		
		UUserStats_RequestGlobalStats_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.RequestGlobalAchievementPercentages"));
		
		UUserStats_RequestGlobalAchievementPercentages_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.RequestCurrentStats"));
		
		UUserStats_RequestCurrentStats_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.IndicateAchievementProgress"));
		
		UUserStats_IndicateAchievementProgress_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetUserStatInteger"));
		
		UUserStats_GetUserStatInteger_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetUserStatFloat"));
		
		UUserStats_GetUserStatFloat_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetUserAchievementAndUnlockTime"));
		
		UUserStats_GetUserAchievementAndUnlockTime_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetUserAchievement"));
		
		UUserStats_GetUserAchievement_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetStatInt"));
		
		UUserStats_GetStatInt_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetStatFloat"));
		
		UUserStats_GetStatFloat_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetNumberOfCurrentPlayers"));
		
		UUserStats_GetNumberOfCurrentPlayers_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetNumAchievements"));
		
		UUserStats_GetNumAchievements_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetNextMostAchievedAchievementInfo"));
		
		UUserStats_GetNextMostAchievedAchievementInfo_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetMostAchievedAchievementInfo"));
		
		UUserStats_GetMostAchievedAchievementInfo_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetLeaderboardSortMethod"));
		
		UUserStats_GetLeaderboardSortMethod_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetLeaderboardName"));
		
		UUserStats_GetLeaderboardName_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetLeaderboardEntryCount"));
		
		UUserStats_GetLeaderboardEntryCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetLeaderboardDisplayType"));
		
		UUserStats_GetLeaderboardDisplayType_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetGlobalStatInt"));
		
		UUserStats_GetGlobalStatInt_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetGlobalStatHistoryInt"));
		
		UUserStats_GetGlobalStatHistoryInt_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetGlobalStatHistoryFloat"));
		
		UUserStats_GetGlobalStatHistoryFloat_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetGlobalStatFloat"));
		
		UUserStats_GetGlobalStatFloat_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetDownloadedLeaderboardEntry"));
		
		UUserStats_GetDownloadedLeaderboardEntry_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetAchievementProgressLimitsFloat"));
		
		UUserStats_GetAchievementProgressLimitsFloat_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetAchievementProgressLimits"));
		
		UUserStats_GetAchievementProgressLimits_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetAchievementName"));
		
		UUserStats_GetAchievementName_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetAchievementIcon"));
		
		UUserStats_GetAchievementIcon_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetAchievementDisplayAttribute"));
		
		UUserStats_GetAchievementDisplayAttribute_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetAchievementAndUnlockTime"));
		
		UUserStats_GetAchievementAndUnlockTime_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetAchievementAchievedPercent"));
		
		UUserStats_GetAchievementAchievedPercent_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.GetAchievement"));
		
		UUserStats_GetAchievement_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.FindOrCreateLeaderboard"));
		
		UUserStats_FindOrCreateLeaderboard_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.FindLeaderboard"));
		
		UUserStats_FindLeaderboard_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.DownloadLeaderboardEntriesForUsers"));
		
		UUserStats_DownloadLeaderboardEntriesForUsers_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.DownloadLeaderboardEntries"));
		
		UUserStats_DownloadLeaderboardEntries_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.ClearAchievement"));
		
		UUserStats_ClearAchievement_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.UserStats.AttachLeaderboardUGC"));
		
		UUserStats_AttachLeaderboardUGC_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.UserStats"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync"));
		
		USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Params params {};
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
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionFindLeaderboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionFindLeaderboard::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync"));
		
		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync"));
		
		USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync"));
		
		USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync"));
		
		USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync"));
		
		USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync"));
		
		USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync"));
		
		USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Params params {};
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
	 * 		Name   -> Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRequestUserStatsData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamCoreUserStatsAsyncActionRequestUserStats::HandleCallback(const struct FRequestUserStatsData& Data, bool bWasSuccessful)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync"));
		
		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback"));
		
		USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync"));
		
		USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Params params {};
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
	 * 		Name   -> PredefindFunction USteamCoreUserStatsAsyncActionAttachLeaderboardUGC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreVoice.DestroySteamCoreVoice"));
		
		USteamCoreVoice_DestroySteamCoreVoice_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreVoice.ConstructSteamCoreVoice"));
		
		USteamCoreVoice_ConstructSteamCoreVoice_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamCoreVoice.AddAudioBuffer"));
		
		USteamCoreVoice_AddAudioBuffer_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamCoreVoice"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.WriteBytesToFile"));
		
		USteamUtilities_WriteBytesToFile_Params params {};
		params.bOverwriteIfExists = bOverwriteIfExists;
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec"));
		
		USteamUtilities_SteamItemInstanceID_Equals_Exec_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals"));
		
		USteamUtilities_SteamItemInstanceID_Equals_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.ReleaseRequest"));
		
		USteamUtilities_ReleaseRequest_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.ReadFileToBytes"));
		
		USteamUtilities_ReadFileToBytes_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.PublishedFileID_NotEquals"));
		
		USteamUtilities_PublishedFileID_NotEquals_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.PublishedFileID_Equals_Exec"));
		
		USteamUtilities_PublishedFileID_Equals_Exec_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.PublishedFileID_Equals"));
		
		USteamUtilities_PublishedFileID_Equals_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.NotEqual"));
		
		USteamUtilities_NotEqual_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeUGCHandle"));
		
		USteamUtilities_MakeUGCHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeTicketHandle"));
		
		USteamUtilities_MakeTicketHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeString"));
		
		USteamUtilities_MakeString_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeSteamID"));
		
		USteamUtilities_MakeSteamID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeSteamGameID"));
		
		USteamUtilities_MakeSteamGameID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeSearchString"));
		
		USteamUtilities_MakeSearchString_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeSearchInteger"));
		
		USteamUtilities_MakeSearchInteger_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeSearchBool"));
		
		USteamUtilities_MakeSearchBool_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakePublishedFileID"));
		
		USteamUtilities_MakePublishedFileID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeInventoryUpdateHandle"));
		
		USteamUtilities_MakeInventoryUpdateHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeInteger"));
		
		USteamUtilities_MakeInteger_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.MakeBool"));
		
		USteamUtilities_MakeBool_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.ListenForSteamMessages"));
		
		USteamUtilities_ListenForSteamMessages_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsValid"));
		
		USteamUtilities_IsValid_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsUsingP2PRelays"));
		
		USteamUtilities_IsUsingP2PRelays_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsUGCHandleValid_Exec"));
		
		USteamUtilities_IsUGCHandleValid_Exec_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsUGCHandleValid"));
		
		USteamUtilities_IsUGCHandleValid_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec"));
		
		USteamUtilities_IsSteamTicketHandleValid_Exec_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsSteamTicketHandleValid"));
		
		USteamUtilities_IsSteamTicketHandleValid_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsSteamServerInitialized"));
		
		USteamUtilities_IsSteamServerInitialized_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec"));
		
		USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid"));
		
		USteamUtilities_IsSteamInventoryUpdateHandleValid_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsSteamIDValid_Exec"));
		
		USteamUtilities_IsSteamIDValid_Exec_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsSteamAvailable"));
		
		USteamUtilities_IsSteamAvailable_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsRecalculatingPing"));
		
		USteamUtilities_IsRecalculatingPing_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec"));
		
		USteamUtilities_IsPublishedFileIDValid_Exec_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsPublishedFileIDValid"));
		
		USteamUtilities_IsPublishedFileIDValid_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsLobby"));
		
		USteamUtilities_IsLobby_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsGameIDValid_Exec"));
		
		USteamUtilities_IsGameIDValid_Exec_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.IsGameIDValid"));
		
		USteamUtilities_IsGameIDValid_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.GetString"));
		
		USteamUtilities_GetString_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.GetSteamIdFromPlayerState"));
		
		USteamUtilities_GetSteamIdFromPlayerState_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.GetPublicIp"));
		
		USteamUtilities_GetPublicIp_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.GetPingFromHostData"));
		
		USteamUtilities_GetPingFromHostData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.GetInteger"));
		
		USteamUtilities_GetInteger_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.GetHostPingData"));
		
		USteamUtilities_GetHostPingData_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.GetBool"));
		
		USteamUtilities_GetBool_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.GetAccountType"));
		
		USteamUtilities_GetAccountType_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.FromUnixTimestamp"));
		
		USteamUtilities_FromUnixTimestamp_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.Equal_Exec"));
		
		USteamUtilities_Equal_Exec_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.Equal"));
		
		USteamUtilities_Equal_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.EncryptString"));
		
		USteamUtilities_EncryptString_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.ConstructServerFilter"));
		
		USteamUtilities_ConstructServerFilter_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.CancelQuery"));
		
		USteamUtilities_CancelQuery_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.BreakUGCHandle"));
		
		USteamUtilities_BreakUGCHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.BreakTicketHandle"));
		
		USteamUtilities_BreakTicketHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.BreakSteamID"));
		
		USteamUtilities_BreakSteamID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.BreakSteamGameID"));
		
		USteamUtilities_BreakSteamGameID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.BreakPublishedFileID"));
		
		USteamUtilities_BreakPublishedFileID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.BreakInventoryUpdateHandle"));
		
		USteamUtilities_BreakInventoryUpdateHandle_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.BP_StringToBytes"));
		
		USteamUtilities_BP_StringToBytes_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.SteamUtilities.BP_BytesToString"));
		
		USteamUtilities_BP_BytesToString_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.SteamUtilities"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.StartVRDashboard"));
		
		UUtils_StartVRDashboard_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.ShowGamepadTextInput"));
		
		UUtils_ShowGamepadTextInput_Params params {};
		params.InputMode = InputMode;
		params.LineInputMode = LineInputMode;
		params.CharMax = CharMax;
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.SetVRHeadsetStreamingEnabled"));
		
		UUtils_SetVRHeadsetStreamingEnabled_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.SetOverlayNotificationPosition"));
		
		UUtils_SetOverlayNotificationPosition_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.SetOverlayNotificationInset"));
		
		UUtils_SetOverlayNotificationInset_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.IsVRHeadsetStreamingEnabled"));
		
		UUtils_IsVRHeadsetStreamingEnabled_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.IsSteamRunningInVR"));
		
		UUtils_IsSteamRunningInVR_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.IsSteamInBigPictureMode"));
		
		UUtils_IsSteamInBigPictureMode_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.IsSteamChinaLauncher"));
		
		UUtils_IsSteamChinaLauncher_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.IsOverlayEnabled"));
		
		UUtils_IsOverlayEnabled_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.InitFilterText"));
		
		UUtils_InitFilterText_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetSteamUILanguage"));
		
		UUtils_GetSteamUILanguage_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetServerRealTime"));
		
		UUtils_GetServerRealTime_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetSecondsSinceComputerActive"));
		
		UUtils_GetSecondsSinceComputerActive_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetSecondsSinceAppActive"));
		
		UUtils_GetSecondsSinceAppActive_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetIPCountry"));
		
		UUtils_GetIPCountry_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetIPCCallCount"));
		
		UUtils_GetIPCCallCount_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetImageSize"));
		
		UUtils_GetImageSize_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetImageRGBA"));
		
		UUtils_GetImageRGBA_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetEnteredGamepadTextLength"));
		
		UUtils_GetEnteredGamepadTextLength_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetEnteredGamepadTextInput"));
		
		UUtils_GetEnteredGamepadTextInput_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetCurrentBatteryPower"));
		
		UUtils_GetCurrentBatteryPower_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetConnectedUniverse"));
		
		UUtils_GetConnectedUniverse_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetAppID_Pure"));
		
		UUtils_GetAppID_Pure_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.GetAppID"));
		
		UUtils_GetAppID_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Utils.BOverlayNeedsPresent"));
		
		UUtils_BOverlayNeedsPresent_Params params {};
		
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Utils"));
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Video.IsBroadcasting"));
		
		UVideo_IsBroadcasting_Params params {};
		
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Video.GetVideoURL"));
		
		UVideo_GetVideoURL_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Video.GetOPFStringForApp"));
		
		UVideo_GetOPFStringForApp_Params params {};
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
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SteamCore.Video.GetOPFSettings"));
		
		UVideo_GetOPFSettings_Params params {};
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
		static UClass* ptr = UObject::FindClass(_xor_("Class SteamCore.Video"));
		return ptr;
	}

}


