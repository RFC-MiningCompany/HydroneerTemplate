#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SteamCoreWeb.SteamCoreWeb
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamCoreWeb : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebSubsystem
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class USteamCoreWebSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_FIAK[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncAction
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class USteamCoreWebAsyncAction : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ATQ[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		void HandleCallback(const class FString& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebSettings
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class USteamCoreWebSettings : public UDeveloperSettings
	{
	public:
		float                                                      AsyncTaskTimeout;                                        // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisabledSubsystems;                                      // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugging;                                              // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDevMode;                                                // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QK2G[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Key;                                                     // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVB1[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DevSteamID;                                              // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSandboxMode;                                            // 0x0070(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRWN[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamWebUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamWebUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool ParseJson(const class FString& JsonString, TArray<struct FSteamCoreJson>* Data);
		class FString GetProjectKey();
		int32_t GetProjectAppID();
		class FString GetDevSteamID();
		void FindJsonStrings(const class FString& JsonString, const class FString& Key, TArray<class FString>* Values, ESteamJsonResult* Result);
		void FindJsonString(const class FString& JsonString, const class FString& Key, class FString* Value, ESteamJsonResult* Result);
		void FindJsonNumbers(const class FString& JsonString, const class FString& Key, TArray<int32_t>* Values, ESteamJsonResult* Result);
		void FindJsonNumber(const class FString& JsonString, const class FString& Key, int32_t* Value, ESteamJsonResult* Result);
		void FindJsonBools(const class FString& JsonString, const class FString& Key, TArray<bool>* bValues, ESteamJsonResult* Result);
		void FindJsonBool(const class FString& JsonString, const class FString& Key, bool* bValue, ESteamJsonResult* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebApps
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebApps : public USteamCoreWebSubsystem
	{
	public:
		void UpToDateCheck(const class FScriptDelegate& Callback, int32_t AppID, int32_t Version);
		void SetAppBuildLive(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t BuildID, const class FString& BetaKey, const class FString& Description);
		void GetServersAtAddress(const class FScriptDelegate& Callback, const class FString& Addr);
		void GetServerList(const class FScriptDelegate& Callback, const class FString& Key, const class FString& Filter, int32_t Limit);
		void GetPlayersBanned(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID);
		void GetCheatingReports(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin);
		void GetAppList(const class FScriptDelegate& Callback, const class FString& Key);
		void GetAppDepotVersions(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID);
		void GetAppBuilds(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t Count);
		void GetAppBetas(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionGetAppBuilds : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t Count);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionGetAppDepotVersions : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionGetAppList : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(class UObject* WorldContextObject, const class FString& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionGetPlayersBanned : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Filter, int32_t Limit);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(class UObject* WorldContextObject, const class FString& Addr);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionSetAppBuildLive : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t BuildID, const class FString& BetaKey, const class FString& Description);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(class UObject* WorldContextObject, int32_t AppID, int32_t Version);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebBroadcastService
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebBroadcastService : public USteamCoreWebSubsystem
	{
	public:
		void PostGameDataFrame(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& BroadcastId, const class FString& FrameData);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& BroadcastId, const class FString& FrameData);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebCheatReporting
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebCheatReporting : public USteamCoreWebSubsystem
	{
	public:
		void StartSecureMultiplayerSession(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID);
		void RequestVacStatusForUser(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& SessionID);
		void RequestPlayerGameBan(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ReportID, const class FString& CheatDescription, int32_t Duration, bool bDelayBan);
		void ReportPlayerCheating(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& SteamIdReporter, const class FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity);
		void ReportCheatData(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32_t GameProcessId, int32_t CheatProcessId, const class FString& CheatParam1, const class FString& CheatParam2);
		void RemovePlayerGameBan(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID);
		void GetCheatingReports(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, const class FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const class FString& SteamID);
		void EndSecureMultiplayerSession(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& SessionID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionReportPlayerCheating : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionReportPlayerCheating* ReportPlayerCheatingAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& SteamIdReporter, const class FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionRequestPlayerGameBan : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionRequestPlayerGameBan* RequestPlayerGameBanAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ReportID, const class FString& CheatDescription, int32_t Duration, bool bDelayBan);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionRemovePlayerGameBan : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionRemovePlayerGameBan* RemovePlayerGameBanAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, const class FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionReportCheatData : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32_t GameProcessId, int32_t CheatProcessId, const class FString& CheatParam1, const class FString& CheatParam2);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionRequestVacStatusForUser : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionRequestVacStatusForUser* RequestVacStatusForUserAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& SessionID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionStartSecureMultiplayerSession : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionStartSecureMultiplayerSession* StartSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionEndSecureMultiplayerSession : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionEndSecureMultiplayerSession* EndSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& SessionID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebEconMarketService
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebEconMarketService : public USteamCoreWebSubsystem
	{
	public:
		void GetPopular(const class FScriptDelegate& Callback, const class FString& Key, const class FString& Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency);
		void GetMarketEligibility(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID);
		void GetAssetID(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& ListingId);
		void CancelAppListingsForUser(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, bool bSynchronous);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionCancelAppListingsForUser : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, bool bSynchronous);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetAssetID : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetAssetID* GetAssetIDAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& ListingId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetPopular
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetPopular* GetPopularAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebEconService
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebEconService : public USteamCoreWebSubsystem
	{
	public:
		void GetTradeOffersSummary(const class FScriptDelegate& Callback, const class FString& Key, int32_t TimeLastVisit);
		void GetTradeOffers(const class FScriptDelegate& Callback, const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff);
		void GetTradeOffer(const class FScriptDelegate& Callback, const class FString& Key, const class FString& TradeOfferId, const class FString& Language);
		void GetTradeHistory(const class FScriptDelegate& Callback, const class FString& Key, int32_t MaxTrades, int32_t StartAfterTime, const class FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal);
		void FlushInventoryCache(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ContextId);
		void FlushContextCache(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID);
		void FlushAssetAppearanceCache(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID);
		void DeclineTradeOffer(const class FScriptDelegate& Callback, const class FString& Key, const class FString& TradeOfferId);
		void CancelTradeOffer(const class FScriptDelegate& Callback, const class FString& Key, const class FString& TradeOfferId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t MaxTrades, int32_t StartAfterTime, const class FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionFlushInventoryCache : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ContextId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetTradeOffers : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetTradeOffers* GetTradeOffersAsync(class UObject* WorldContextObject, const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t TimeLastVisit);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionDeclineTradeOffer : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionCancelTradeOffer : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionCancelTradeOffer* CancelTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebGameInventory
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebGameInventory : public USteamCoreWebSubsystem
	{
	public:
		void UpdateItemDefs();
		void SupportGetAssetHistory(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& AssetId, const class FString& ContextId);
		void HistoryExecuteCommands(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& ContextId, int32_t ActorId);
		void GetUserHistory(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& ContextId, int32_t StartTime, int32_t EndTime);
		void GetHistoryCommandDetails(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& Command, const class FString& ContextId, const class FString& Arguments);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& Command, const class FString& ContextId, const class FString& Arguments);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& ContextId, int32_t StartTime, int32_t EndTime);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& ContextId, int32_t ActorId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& AssetId, const class FString& ContextId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebGameNotificationsService
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebGameNotificationsService : public USteamCoreWebSubsystem
	{
	public:
		void UpdateSession(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SessionID, int32_t AppID, const class FString& Title, const class FString& Users, const class FString& SteamID);
		void RequestNotifications(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID);
		void GetSessionDetailsForApp(const class FScriptDelegate& Callback, const class FString& Key, const class FString& Sessions, int32_t AppID, const class FString& Language);
		void EnumerateSessionsForApp(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language);
		void DeleteSessionBatch(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SessionID, int32_t AppID);
		void DeleteSession(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SessionID, int32_t AppID, const class FString& SteamID);
		void CreateSession(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Context, const class FString& Title, const class FString& Users, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionCreateSession
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionCreateSession : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionCreateSession* CreateSessionAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Context, const class FString& Title, const class FString& Users, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionUpdateSession : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionUpdateSession* UpdateSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionID, int32_t AppID, const class FString& Title, const class FString& Users, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionEnumerateSessionsForApp : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionEnumerateSessionsForApp* EnumerateSessionsForAppAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetSessionDetailsForApp : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetSessionDetailsForApp* GetSessionDetailsForAppAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Sessions, int32_t AppID, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionRequestNotifications : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionRequestNotifications* RequestNotificationsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionDeleteSession : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionDeleteSession* DeleteSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionID, int32_t AppID, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionDeleteSessionBatch : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionDeleteSessionBatch* DeleteSessionBatchAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebGameServersService
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebGameServersService : public USteamCoreWebSubsystem
	{
	public:
		void SetMemo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& Memo);
		void SetBanStatus(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, bool bBanned, int32_t banSeconds);
		void ResetLoginToken(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID);
		void QueryLoginToken(const class FScriptDelegate& Callback, const class FString& Key, const class FString& LoginToken);
		void GetServerSteamIDsByIP(const class FScriptDelegate& Callback, const class FString& Key, const class FString& ServerIP);
		void GetServerIPsBySteamID(const class FScriptDelegate& Callback, const class FString& Key, const class FString& ServerSteamId);
		void GetAccountPublicInfo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID);
		void GetAccountList(const class FScriptDelegate& Callback, const class FString& Key);
		void DeleteAccount(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID);
		void CreateAccount(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Memo);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebInventoryService
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebInventoryService : public USteamCoreWebSubsystem
	{
	public:
		void ModifyItems(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& InputJson, const class FString& SteamID, int32_t Timestamp, const class FString& Updates);
		void GetQuantity(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> ItemdefIDs, bool bForce);
		void GetPriceSheet(const class FScriptDelegate& Callback, const class FString& Key, int32_t Currency);
		void GetItemDefs(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds);
		void GetInventory(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID);
		void ExchangeItem(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, const class FString& OutputItemdefId);
		void ConsumeItem(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& ItemId, const class FString& Quantity, const class FString& SteamID, const class FString& RequestID);
		void Consolidate(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> ItemdefIDs, bool bForce);
		void AddPromoItem(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestID);
		void AddItem(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, TArray<int32_t> ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestID, bool bTradeRestriction);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionAddItem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionAddItem : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionAddItem* AddItemAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, TArray<int32_t> ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestID, bool bTradeRestriction);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionAddPromoItem : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionAddPromoItem* AddPromoItemAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionConsumeItem : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionConsumeItem* ConsumeItemAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& ItemId, const class FString& Quantity, const class FString& SteamID, const class FString& RequestID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionExchangeItem : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionExchangeItem* ExchangeItemAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, const class FString& OutputItemdefId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetInventory
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetPriceSheet : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetPriceSheet* GetPriceSheetAsync(class UObject* WorldContextObject, const class FString& Key, int32_t Currency);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionConsolidate
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionConsolidate : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionConsolidate* ConsolidateAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> ItemdefIDs, bool bForce);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetQuantity : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetQuantity* GetQuantityAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, TArray<int32_t> ItemdefIDs, bool bForce);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionModifyItems
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionModifyItems : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionModifyItems* ModifyItemsAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& InputJson, const class FString& SteamID, int32_t Timestamp, const class FString& Updates);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebLeaderboards
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebLeaderboards : public USteamCoreWebSubsystem
	{
	public:
		void SetLeaderboardScore(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t LeaderbordId, const class FString& SteamID, int32_t Score, TArray<unsigned char> Details, const class FString& ScoreMethod);
		void ResetLeaderboard(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t LeaderboardId);
		void GetLeaderboardsForGame(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID);
		void GetLeaderboardEntries(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, const class FString& SteamID);
		void FindOrCreateLeaderboard(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
		void DeleteLeaderboard(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionDeleteLeaderboard : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionFindOrCreateLeaderboard : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetLeaderboardEntries : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t LeaderboardId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionSetLeaderboardScore : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t LeaderboardId, const class FString& SteamID, int32_t Score, TArray<unsigned char> Details, const class FString& ScoreMethod);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebLobbyMatchmakingService
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebLobbyMatchmakingService : public USteamCoreWebSubsystem
	{
	public:
		void RemoveUserFromLobby(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamIdToRemove, const class FString& SteamIDLobby, const class FString& InputJson);
		void CreateLobby(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t MaxMembers, ESteamCoreWebLobbyType LobbyType, const class FString& LobbyName, const class FString& InputJson, TArray<class FString> SteamIdInvitedMembers, const class FString& LobbyMetaData);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebMicroTxn
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebMicroTxn : public USteamCoreWebSubsystem
	{
	public:
		void RefundTxn(const class FScriptDelegate& Callback, const class FString& Key, const class FString& OrderId, int32_t AppID);
		void QueryTxn(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& OrderId, const class FString& TransId);
		void ProcessAgreement(const class FScriptDelegate& Callback, const class FString& Key, const class FString& OrderId, const class FString& SteamID, const class FString& AgreementId, int32_t AppID, int32_t Amount, const class FString& Currency);
		class FString MakeTransactionID();
		void InitTxn(const class FScriptDelegate& Callback, const class FString& Key, const class FString& OrderId, const class FString& SteamID, int32_t AppID, const class FString& Language, const class FString& Currency, const class FString& UserSession, const class FString& Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<class FString> Amount, TArray<class FString> Description, TArray<class FString> Category, TArray<int32_t> AssociatedBundle, TArray<class FString> BillingType, TArray<class FString> StartDate, TArray<class FString> EndDate, TArray<class FString> Period, TArray<int32_t> Frequency, TArray<class FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<class FString> BundleDesc, TArray<class FString> BundleCategory);
		void GetUserInfo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t Ipaddress);
		void GetUserAgreementInfo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID);
		void GetReport(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Time, const class FString& Type, int32_t MaxResults);
		void FinalizeTxn(const class FScriptDelegate& Callback, const class FString& Key, const class FString& OrderId, int32_t AppID);
		void CancelAgreement(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32_t AppID);
		void AdjustAgreement(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32_t AppID, const class FString& NextProcessDate);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionAdjustAgreement : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionAdjustAgreement* AdjustAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32_t AppID, const class FString& NextProcessDate);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionCancelAgreement : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionCancelAgreement* CancelAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderId, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetReport
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetReport : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetReport* GetReportAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Time, const class FString& Type, int32_t MaxResults);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t Ipaddress);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionInitTxn
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionInitTxn* InitTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderId, const class FString& SteamID, int32_t AppID, const class FString& Language, const class FString& Currency, const class FString& UserSession, const class FString& Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<class FString> Amount, TArray<class FString> Description, TArray<class FString> Category, TArray<int32_t> AssociatedBundle, TArray<class FString> BillingType, TArray<class FString> StartDate, TArray<class FString> EndDate, TArray<class FString> Period, TArray<int32_t> Frequency, TArray<class FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<class FString> BundleDesc, TArray<class FString> BundleCategory);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderId, const class FString& SteamID, const class FString& AgreementId, int32_t AppID, int32_t Amount, const class FString& Currency);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionQueryTxn : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionQueryTxn* QueryTxnAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& OrderId, const class FString& TransId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderId, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebPlayerService
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebPlayerService : public USteamCoreWebSubsystem
	{
	public:
		void IsPlayingSharedGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppIdPlaying);
		void GetSteamLevel(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID);
		void GetRecentlyPlayedGames(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t Count);
		void GetOwnedGames(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter);
		void GetCommunityBadgeProgress(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t BadgeId);
		void GetBadges(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetRecentlyPlayedGames : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetRecentlyPlayedGames* GetRecentlyPlayedGamesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t Count);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetOwnedGames : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetOwnedGames* GetOwnedGamesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetSteamLevel : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetSteamLevel* GetSteamLevelAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetBadges
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetBadges : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetBadges* GetBadgesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetCommunityBadgeProgress : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetCommunityBadgeProgress* GetCommunityBadgeProgressAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t BadgeId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionIsPlayingSharedGame : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionIsPlayingSharedGame* IsPlayingSharedGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppIdPlaying);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebPublishedFileService
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebPublishedFileService : public USteamCoreWebSubsystem
	{
	public:
		void UpdateTags(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PublishedFileID, int32_t AppID, const class FString& AddTags, const class FString& RemoveTags);
		void UpdateIncompatibleStatus(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PublishedFileID, int32_t AppID, bool bIncompatible);
		void UpdateBanStatus(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PublishedFileID, int32_t AppID, bool bBanned, const class FString& Reason);
		void SetDeveloperMetadata(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PublishedFileID, int32_t AppID, const class FString& MetaData);
		void QueryFiles(const class FScriptDelegate& Callback, const class FString& Key, int32_t QueryType, int32_t Page, const class FString& Cursor, int32_t NumPerPage, int32_t CreatorAppID, int32_t AppID, const class FString& RequiredTags, const class FString& ExcludedTags, bool bMatchAllTags, const class FString& RequiredFlags, const class FString& OmittedFlags, const class FString& SearchText, int32_t FileType, const class FString& ChildPublishedFileId, int32_t Days, bool bIncludeRecentVotesOnly, int32_t CacheMaxAgeSeconds, int32_t Language, const class FString& RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32_t ReturnPlaytimeStats);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebSteamPublishedItemSearch
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebSteamPublishedItemSearch : public USteamCoreWebSubsystem
	{
	public:
		void ResultSetSummary(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag);
		void RankedByVote(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag);
		void RankedByTrend(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<class FString> Tag, TArray<class FString> UserTag);
		void RankedByPublicationOrder(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionRankedByPublicationOrder : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionRankedByTrend : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionRankedByTrend* RankedByTrendAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<class FString> Tag, TArray<class FString> UserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionRankedByVote : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionRankedByVote* RankedByVoteAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<class FString> Tag, TArray<class FString> UserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebPublishedItemVoting
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebPublishedItemVoting : public USteamCoreWebSubsystem
	{
	public:
		void UserVoteSummary(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, TArray<class FString> PublishedFileIDs);
		void ItemVoteSummary(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, TArray<class FString> PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, TArray<class FString> PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, TArray<class FString> PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebRemoteStorage
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebRemoteStorage : public USteamCoreWebSubsystem
	{
	public:
		void UnsubscribePublishedFile(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PublishedFileIDs);
		void SubscribePublishedFile(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PublishedFileIDs);
		void SetUGCUsedByGC(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32_t AppID, bool bUsed);
		void GetUGCFileDetails(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32_t AppID);
		void GetPublishedFileDetails(const class FScriptDelegate& Callback, const class FString& PublishedFileIDs);
		void GetCollectionDetails(const class FScriptDelegate& Callback, TArray<class FString> PublishedFileIDs);
		void EnumerateUserSubscribedFiles(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t ListType);
		void EnumerateUserPublishedFiles(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* EnumerateUserSubscribedFilesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, int32_t ListType);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(class UObject* WorldContextObject, TArray<class FString> PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(class UObject* WorldContextObject, const class FString& PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetUGCFileDetails : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetUGCFileDetails* GetUGCFileDetailsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionSetUGCUsedByGC : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionSetUGCUsedByGC* SetUGCUsedByGCAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32_t AppID, bool bUsed);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionSubscribePublishedFile : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionSubscribePublishedFile* SubscribePublishedFileAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebSteamCommunity
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebSteamCommunity : public USteamCoreWebSubsystem
	{
	public:
		void ReportAbuse(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamIdActor, const class FString& SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, const class FString& Description, const class FString& Gid);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionReportAbuse : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionReportAbuse* ReportAbuseAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamIdActor, const class FString& SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, const class FString& Description, const class FString& Gid);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebSteamEconomy
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebSteamEconomy : public USteamCoreWebSubsystem
	{
	public:
		void StartTrade(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamIDd, const class FString& SteamId2);
		void StartAssetTransaction(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& AssetId, int32_t AssetQuantity, const class FString& Currency, const class FString& Language, const class FString& Ipaddress, const class FString& Referer, bool bClientAuth);
		void GetMarketPrices(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID);
		void GetExportedAssetsForUser(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ContextId);
		void GetAssetPrices(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Currency, const class FString& Language);
		void GetAssetClassInfo(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Language, int32_t ClassCount, const class FString& ClassId, const class FString& InstanceID);
		void FinalizeAssetTransaction(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& TxnId, const class FString& Language);
		void CanTrade(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& TargetId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionCanTrade
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionCanTrade : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionCanTrade* CanTradeAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& TargetId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionFinalizeAssetTransaction : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& TxnId, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetAssetClassInfo : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Language, int32_t ClassCount, const class FString& ClassId, const class FString& InstanceID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetAssetPrices : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetAssetPrices* GetAssetPricesAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Currency, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetExportedAssetsForUser : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& ContextId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionStartAssetTransaction : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionStartAssetTransaction* StartAssetTransactionAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamID, const class FString& AssetId, int32_t AssetQuantity, const class FString& Currency, const class FString& Language, const class FString& Ipaddress, const class FString& Referer, bool bClientAuth);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionStartTrade
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionStartTrade* StartTradeAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& SteamId1, const class FString& SteamId2);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebSteamGameServerStats
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebSteamGameServerStats : public USteamCoreWebSubsystem
	{
	public:
		void GetGameServerPlayerStatsForGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& GameID, int32_t AppID, const class FString& RangeStart, const class FString& RangeEnd, int32_t MaxResults);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebSteamNews
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebSteamNews : public USteamCoreWebSubsystem
	{
	public:
		void GetNewsForAppAuthed(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, int32_t MaxLength, TArray<class FString> Feeds, int32_t EndDate, int32_t Count);
		void GetNewsForApp(const class FScriptDelegate& Callback, int32_t AppID, int32_t MaxLength, TArray<class FString> Feeds, int32_t EndDate, int32_t Count);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetNewsForApp : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(class UObject* WorldContextObject, int32_t AppID, int32_t MaxLength, TArray<class FString> Feeds, int32_t EndDate, int32_t Count);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetNewsForAppAuthed : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, int32_t MaxLength, TArray<class FString> Feeds, int32_t EndDate, int32_t Count);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebSteamUser
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebSteamUser : public USteamCoreWebSubsystem
	{
	public:
		void ResolveVanityURL(const class FScriptDelegate& Callback, const class FString& Key, const class FString& VanityURL, EVanityUrlType URLType);
		void GrantPackage(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t PackageId, const class FString& Ipaddress, const class FString& ThirdPartyKey, int32_t ThirdPartyAppId);
		void GetUserGroupList(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID);
		void GetPublisherAppOwnershipChanges(const class FScriptDelegate& Callback, const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion);
		void GetPublisherAppOwnership(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID);
		void GetPlayerSummaries(const class FScriptDelegate& Callback, const class FString& Key, TArray<class FString> SteamIDs);
		void GetPlayerBans(const class FScriptDelegate& Callback, const class FString& Key, TArray<class FString> SteamIDs);
		void GetFriendList(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, const class FString& Relationship);
		void GetAppPriceInfo(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, TArray<int32_t> AppIDs);
		void CheckAppOwnership(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionCheckAppOwnership : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetAppPriceInfo : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, TArray<int32_t> AppIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& Relationship);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetPlayerBans : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetPlayerBans* GetPlayerBansAsync(class UObject* WorldContextObject, const class FString& Key, TArray<class FString> SteamIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(class UObject* WorldContextObject, const class FString& Key, TArray<class FString> SteamIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGrantPackage : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGrantPackage* GrantPackageAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t PackageId, const class FString& Ipaddress, const class FString& ThirdPartyKey, int32_t ThirdPartyAppId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionResolveVanityURL : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionResolveVanityURL* ResolveVanityURLAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& VanityURL, EVanityUrlType URLType);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebUserAuth
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebUserAuth : public USteamCoreWebSubsystem
	{
	public:
		void AuthenticateUserTicket(const class FScriptDelegate& Callback, const class FString& Key, int32_t AppID, const class FString& Ticket);
		void AuthenticateUser(const class FScriptDelegate& Callback, const class FString& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(class UObject* WorldContextObject, const class FString& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(class UObject* WorldContextObject, const class FString& Key, int32_t AppID, const class FString& Ticket);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.WebUserStats
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWebUserStats : public USteamCoreWebSubsystem
	{
	public:
		void SetUserStatsForGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, TArray<class FString> Names, TArray<int32_t> Values);
		void GetUserStatsForGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID);
		void GetSchemaForGame(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& Language);
		void GetPlayerAchievements(const class FScriptDelegate& Callback, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& Language);
		void GetNumberOfCurrentPlayers(const class FScriptDelegate& Callback, int32_t AppID);
		void GetGlobalStatsForGame(const class FScriptDelegate& Callback, int32_t AppID, TArray<class FString> Names, int32_t StartDate, int32_t EndDate);
		void GetGlobalAchievementPercentagesForApp(const class FScriptDelegate& Callback, const class FString& GameID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, const class FString& GameID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetGlobalStatsForGame : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(class UObject* WorldContextObject, int32_t AppID, TArray<class FString> Names, int32_t StartDate, int32_t EndDate);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetPlayerAchievements : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetSchemaForGame : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetSchemaForGame* GetSchemaForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction
	{
	public:
		class USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32_t AppID, TArray<class FString> Names, TArray<int32_t> Values);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
