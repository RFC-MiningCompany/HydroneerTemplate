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
	 * Class SteamCore.SteamCoreSubsystem
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class USteamCoreSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_PF7I[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.AppList
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UAppList : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             SteamAppInstalled;                                       // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamAppUninstalled;                                     // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4GQ[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		int32_t GetNumInstalledApps();
		int32_t GetInstalledApps(TArray<int32_t>* AppIDs, int32_t MaxAppIDs);
		int32_t GetAppName(int32_t AppID, class FString* Name);
		int32_t GetAppInstallDir(int32_t AppID, class FString* Directory);
		int32_t GetAppBuildId(int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Apps
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UApps : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             DLCInstalled;                                            // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             FileDetailsResultDelegate;                               // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACPM[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		void UninstallDLC(int32_t AppID);
		bool MarkContentCorrupt(bool bMissingFilesOnly);
		void InstallDLC(int32_t AppID);
		class FString GetLaunchQueryParam(const class FString& Key);
		int32_t GetLaunchCommandLine(class FString* CommandLine);
		int32_t GetInstalledDepots(int32_t AppID, int32_t MaxDepots, TArray<int32_t>* Depots);
		void GetFileDetails(const class FScriptDelegate& Callback, const class FString& Filename);
		int32_t GetEarliestPurchaseUnixTime(int32_t AppID);
		bool GetDlcDownloadProgress(int32_t AppID, int32_t* BytesDownloaded, int32_t* BytesTotal);
		int32_t GetDLCCount();
		class FString GetCurrentGameLanguage();
		bool GetCurrentBetaName(class FString* Name);
		class FString GetAvailableGameLanguages();
		struct FSteamID GetAppOwner();
		int32_t GetAppInstallDir(int32_t AppID, class FString* Folder);
		int32_t GetAppBuildId();
		bool BIsVACBanned();
		bool BIsTimedTrial(int32_t* SecondsAllowed, int32_t* SecondsPlayed);
		bool BIsSubscribedFromFreeWeekend();
		bool BIsSubscribedFromFamilySharing();
		bool BIsSubscribedApp(int32_t AppID);
		bool BIsSubscribed();
		bool BIsLowViolence();
		bool BIsDlcInstalled(int32_t AppID);
		bool BIsCybercafe();
		bool BIsAppInstalled(int32_t AppID);
		bool BGetDLCDataByIndex(int32_t DLC, int32_t* AppID, bool* bAvailable, class FString* Name);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreAsyncAction
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class USteamCoreAsyncAction : public UBlueprintAsyncActionBase
	{
	public:
		TWeakObjectPtr<class UObject>                              m_WorldContextObject;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreAppsAsyncActionGetFileDetails
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FFileDetailsResult& Data, bool bWasSuccessful);
		class USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(class UObject* WorldContextObject, const class FString& Filename, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreGameMode
	 * Size -> 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
	 */
	class ASteamCoreGameMode : public AGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCore
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamCore : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreSettings
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class USteamCoreSettings : public UDeveloperSettings
	{
	public:
		int32_t                                                    DisabledSubsystems;                                      // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelaunchInSteam;                                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVACEnabled;                                             // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowP2PPacketRelay;                                    // 0x003F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    P2PConnectionTimeout;                                    // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SteamAppId;                                              // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SteamDevAppId;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameServerQueryPort;                                     // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VU6[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameVersion;                                             // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Friends
	 * Size -> 0x02D0 (FullSize[0x0318] - InheritedSize[0x0048])
	 */
	class UFriends : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             AvatarImageLoaded;                                       // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             FriendRichPresenceUpdate;                                // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameConnectedChatJoin;                                   // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameConnectedChatLeave;                                  // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameConnectedClanChatMsg;                                // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameConnectedFriendChatMsg;                              // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameLobbyJoinRequested;                                  // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameOverlayActivated;                                    // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameRichPresenceJoinRequested;                           // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameServerChangeRequested;                               // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PersonaStateChange;                                      // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SetPersonaNameResponse;                                  // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             JoinClanChatRoomCompletionResult;                        // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ClanOfficerListResponse;                                 // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DownloadClanActivityCountsResult;                        // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HAR[0x1E0];                                 // 0x0138(0x01E0) MISSED OFFSET (PADDING)

	public:
		bool SetRichPresence(const class FString& Key, const class FString& Value);
		void SetPlayedWith(const struct FSteamID& SteamIDUserPlayedWith);
		void SetPersonaName(const class FScriptDelegate& Callback, const class FString& Name);
		bool SetListenForFriendsMessages(bool bInterceptEnabled);
		void SetInGameVoiceSpeaking(const struct FSteamID& SteamIDUser, bool bSpeaking);
		bool SendClanChatMessage(const struct FSteamID& SteamIDClanChat, const class FString& Text);
		bool RequestUserInformation(const struct FSteamID& SteamIDUser, bool bRequireNameOnly);
		void RequestFriendRichPresence(const struct FSteamID& SteamIDFriend);
		void RequestClanOfficerList(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDClan);
		bool ReplyToFriendMessage(const struct FSteamID& SteamIDFriend, const class FString& MsgToSend);
		bool RegisterProtocolInOverlayBrowser(const class FString& Protocol);
		bool OpenClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat);
		bool LeaveClanChatRoom(const struct FSteamID& SteamIDClan);
		void JoinClanChatRoom(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDClan);
		bool IsUserInSource(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDSource);
		void IsFollowing(const class FScriptDelegate& Callback, const struct FSteamID& SteamID);
		bool IsClanPublic(const struct FSteamID& SteamIDClan);
		bool IsClanOfficialGameGroup(const struct FSteamID& SteamIDClan);
		bool IsClanChatWindowOpenInSteam(const struct FSteamID& SteamIDClanChat);
		bool IsClanChatAdmin(const struct FSteamID& SteamIDClanChat, const struct FSteamID& SteamIDUser);
		bool InviteUserToGame(const struct FSteamID& SteamIDFriend, const class FString& ConnectString);
		bool HasFriend(const struct FSteamID& SteamIDFriend, TArray<ESteamFriendFlags> Flags);
		TArray<ESteamUserRestriction> GetUserRestrictions();
		class UTexture2D* GetSmallFriendAvatar(const struct FSteamID& SteamIDFriend);
		class FString GetPlayerNickname_Pure(const struct FSteamID& SteamIDPlayer);
		class FString GetPlayerNickname(const struct FSteamID& SteamIDPlayer);
		ESteamPersonaState GetPersonaState_Pure();
		ESteamPersonaState GetPersonaState();
		class FString GetPersonaName_Pure();
		class FString GetPersonaName();
		class UTexture2D* GetMediumFriendAvatar(const struct FSteamID& SteamIDFriend);
		class UTexture2D* GetLargeFriendAvatar(const struct FSteamID& SteamIDFriend);
		int32_t GetFriendSteamLevel(const struct FSteamID& SteamIDFriend);
		class FString GetFriendsGroupName(const struct FSteamFriendsGroupID& FriendsGroupID);
		void GetFriendsGroupMembersList(const struct FSteamFriendsGroupID& FriendsGroupID, TArray<struct FSteamID>* SteamIDMembers, int32_t MembersCount);
		int32_t GetFriendsGroupMembersCount(const struct FSteamFriendsGroupID& FriendsGroupID);
		struct FSteamFriendsGroupID GetFriendsGroupIDByIndex(int32_t FriendGroup);
		int32_t GetFriendsGroupCount();
		int32_t GetFriendRichPresenceKeyCount(const struct FSteamID& SteamIDFriend);
		class FString GetFriendRichPresenceKeyByIndex(const struct FSteamID& SteamIDFriend, int32_t Key);
		class FString GetFriendRichPresence(const struct FSteamID& SteamIDFriend, const class FString& Key);
		ESteamFriendRelationship GetFriendRelationship(const struct FSteamID& SteamIDFriend);
		ESteamPersonaState GetFriendPersonaState(const struct FSteamID& SteamIDFriend);
		class FString GetFriendPersonaNameHistory(const struct FSteamID& SteamIDFriend, int32_t PersonaName);
		class FString GetFriendPersonaName(const struct FSteamID& SteamIDFriend);
		int32_t GetFriendMessage(const struct FSteamID& SteamIDFriend, int32_t MessageID, class FString* Text, ESteamChatEntryType* ChatEntryType);
		bool GetFriendGamePlayed(const struct FSteamID& SteamIDFriend, struct FSteamGameID* GameID, class FString* GameIP, int32_t* ConnectionPort, int32_t* QueryPort, struct FSteamID* SteamIDLobby);
		struct FSteamID GetFriendFromSourceByIndex(const struct FSteamID& SteamIDSource, int32_t Ifriend);
		int32_t GetFriendCountFromSource(const struct FSteamID& SteamIDSource);
		int32_t GetFriendCount(TArray<ESteamFriendFlags> Flags);
		int32_t GetFriendCoplayTime(const struct FSteamID& SteamIDFriend);
		int32_t GetFriendCoplayGame(const struct FSteamID& SteamIDFriend);
		struct FSteamID GetFriendByIndex(int32_t Ifriend, TArray<ESteamFriendFlags> Flags);
		void GetFollowerCount(const class FScriptDelegate& Callback, const struct FSteamID& SteamID);
		int32_t GetCoplayFriendCount();
		struct FSteamID GetCoplayFriend(int32_t CoplayFriend);
		class FString GetClanTag(const struct FSteamID& SteamIDClan);
		struct FSteamID GetClanOwner(const struct FSteamID& SteamIDClan);
		int32_t GetClanOfficerCount(const struct FSteamID& SteamIDClan);
		struct FSteamID GetClanOfficerByIndex(const struct FSteamID& SteamIDClan, int32_t Officer);
		class FString GetClanName(const struct FSteamID& SteamIDClan);
		int32_t GetClanCount();
		int32_t GetClanChatMessage(const struct FSteamID& SteamIDClanChat, int32_t MessageID, class FString* Text, ESteamChatEntryType* ChatEntryType, struct FSteamID* SteamIDChatter);
		int32_t GetClanChatMemberCount(const struct FSteamID& SteamIDClan);
		struct FSteamID GetClanByIndex(int32_t Clan);
		bool GetClanActivityCounts(const struct FSteamID& SteamIDClan, int32_t* Online, int32_t* InGame, int32_t* Chatting);
		struct FSteamID GetChatMemberByIndex(const struct FSteamID& SteamIDClan, int32_t User);
		void EnumerateFollowingList(const class FScriptDelegate& Callback, int32_t StartIndex);
		void DownloadClanActivityCounts(const class FScriptDelegate& Callback, TArray<struct FSteamID> SteamIDClans);
		bool CloseClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat);
		void ClearRichPresence();
		void ActivateGameOverlayToWebPage(const class FString& URL, ESteamActivateGameOverlayToWebPageMode Mode);
		void ActivateGameOverlayToUser(const class FString& Dialog, const struct FSteamID& SteamID);
		void ActivateGameOverlayToStore(int32_t AppID, ESteamOverlayToStoreFlag Flag);
		void ActivateGameOverlayInviteDialogConnectString(const class FString& ConnectString);
		void ActivateGameOverlayInvitedialog(const struct FSteamID& SteamIDLobby);
		void ActivateGameOverlay(const class FString& Dialog);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreFriendsAsyncActionSetPersonaName
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(class UObject* WorldContextObject, const class FString& Name, float Timeout);
		void HandleCallback(const struct FSetPersonaNameResponse& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);
		class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(class UObject* WorldContextObject, TArray<struct FSteamID> SteamIDClans, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan, float Timeout);
		void HandleCallback(const struct FClanOfficerListResponse& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan, float Timeout);
		void HandleCallback(const struct FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);
		class USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(class UObject* WorldContextObject, int32_t StartIndex, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreFriendsAsyncActionIsFollowing
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout);
		void HandleCallback(const struct FFriendsIsFollowing& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FFriendsGetFollowerCount& Data, bool bWasSuccessful);
		class USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class USteamCoreFriendsAsyncActionRequestUserInformation : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVFI[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		class USteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDUser, bool bRequireNameOnly, float Timeout);
		void HandleCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamGameSearch
	 * Size -> 0x0150 (FullSize[0x0198] - InheritedSize[0x0048])
	 */
	class USteamGameSearch : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             SearchForGameProgressDelegate;                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SearchForGameResultDelegate;                             // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RequestPlayersForGameProgressDelegate;                   // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RequestPlayersForGameResultDelegate;                     // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RequestPlayersForGameFinalResultDelegate;                // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SubmitPlayerResultResultDelegate;                        // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EndGameResultDelegate;                                   // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZD0[0xE0];                                  // 0x00B8(0x00E0) MISSED OFFSET (PADDING)

	public:
		ESteamGameSearchErrorCode SubmitPlayerResult(const class FString& UniqueGameID, const struct FSteamID& SteamIDPlayer, ESteamPlayerResult PlayerResult);
		ESteamGameSearchErrorCode SetGameHostParams(const class FString& Key, TArray<class FString> Values);
		ESteamGameSearchErrorCode SetConnectionDetails(const class FString& ConnectionDetails);
		ESteamGameSearchErrorCode SearchForGameWithLobby(const struct FSteamID& SteamIDLobby, int32_t PlayerMin, int32_t PlayerMax);
		ESteamGameSearchErrorCode SearchForGameSolo(int32_t PlayerMin, int32_t PlayerMax);
		ESteamGameSearchErrorCode RetrieveConnectionDetails(const struct FSteamID& SteamIDHost, class FString* ConnectionDetails, int32_t NumConnectionDetails);
		ESteamGameSearchErrorCode RequestPlayersForGame(int32_t PlayerMin, int32_t PlayerMax, int32_t MaxTeamSize);
		ESteamGameSearchErrorCode HostConfirmGameStart(const class FString& UniqueGameID);
		ESteamGameSearchErrorCode EndGameSearch();
		ESteamGameSearchErrorCode EndGame(const class FString& UniqueGameID);
		ESteamGameSearchErrorCode DeclineGame();
		ESteamGameSearchErrorCode CancelRequestPlayersForGame();
		ESteamGameSearchErrorCode AddGameSearchParams(const class FString& KeyToFind, TArray<class FString> ValuesToFind);
		ESteamGameSearchErrorCode AcceptGame();
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamGameServer
	 * Size -> 0x00F0 (FullSize[0x0138] - InheritedSize[0x0048])
	 */
	class USteamGameServer : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             GSPolicyResponse;                                        // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GSClientGroupStatus;                                     // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GSValidateAuthTicketResponse;                            // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GSClientApprove;                                         // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GSClientDeny;                                            // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96GC[0xA0];                                  // 0x0098(0x00A0) MISSED OFFSET (PADDING)

	public:
		bool WasRestartRequested();
		ESteamUserHasLicenseForAppResult UserHasLicenseForApp(const struct FSteamID& SteamID, int32_t AppID);
		void SetSpectatorServerName(const class FString& SpectatorServerName);
		void SetSpectatorPort(int32_t SpectatorPort);
		void SetServerName(const class FString& ServerName);
		void SetRegion(const class FString& Region);
		void SetProduct(const class FString& Product);
		void SetPasswordProtected(bool bPasswordProtected);
		void SetModDir(const class FString& ModDir);
		void SetMaxPlayerCount(int32_t PlayersMax);
		void SetMapName(const class FString& MapName);
		void SetKeyValue(const class FString& Key, const class FString& Value);
		void SetHeartbeatInterval(int32_t HeartbeatInterval);
		void SetGameTags(const class FString& GameTags);
		void SetGameDescription(const class FString& GameDescription);
		void SetGameData(const class FString& GameData);
		void SetDedicatedServer(bool bDedicated);
		void SetBotPlayerCount(int32_t BotPlayers);
		bool RequestUserGroupStatus(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDGroup);
		void LogOnAnonymous();
		void LogOn(const class FString& Token);
		void LogOff();
		struct FSteamID GetServerSteamID_PureCompact();
		struct FSteamID GetServerSteamID_Pure();
		struct FSteamID GetServerSteamID();
		class FString GetServerPublicIP_PureCompact();
		class FString GetServerPublicIP_Pure();
		class FString GetServerPublicIP();
		struct FSteamTicketHandle GetAuthSessionTicket(TArray<unsigned char>* Ticket);
		void ForceHeartbeat();
		void EndAuthSession(const struct FSteamID& SteamID);
		void EnableHeartbeats(bool bActive);
		struct FSteamID CreateUnauthenticatedUserConnection();
		void ComputeNewPlayerCompatibility(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDNewPlayer);
		void ClearAllKeyValues();
		void CancelAuthTicket(const struct FSteamTicketHandle& TicketHandle);
		bool BUpdateUserData(const struct FSteamID& SteamIDUser, const class FString& PlayerName, int32_t Score);
		bool BSecure();
		bool BLoggedOn();
		ESteamBeginAuthSessionResult BeginAuthSession(TArray<unsigned char> Ticket, const struct FSteamID& SteamID);
		void AssociateWithClan(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDClan);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.GameServerStats
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	class UGameServerStats : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             GSStatsUnloaded;                                         // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7I0E[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (PADDING)

	public:
		bool UpdateUserAvgRateStat(const struct FSteamID& SteamIDUser, const class FString& Name, float CountThisSession, float SessionLength);
		bool SetUserStatInt(const struct FSteamID& SteamIDUser, const class FString& Name, int32_t Data);
		bool SetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float Data);
		bool SetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name);
		void ServerStoreUserStats(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDUser);
		void ServerRequestUserStats(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDUser);
		bool GetUserStatInt(const struct FSteamID& SteamIDUser, const class FString& Name, int32_t* Data);
		bool GetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float* Data);
		bool GetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved);
		bool ClearUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Input
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UInput : public USteamCoreSubsystem
	{
	public:
		void TriggerVibration(const struct FInputHandle& Handle, unsigned char LeftSpeed, unsigned char RightSpeed);
		void TriggerRepeatedHapticPulse(const struct FInputHandle& Handle, ESteamCoreControllerPad TargetPad, unsigned char DurationMicroSec, unsigned char OffMicroSec, unsigned char Repeat, unsigned char Flags);
		void TriggerHapticPulse(const struct FInputHandle& Handle, ESteamCoreControllerPad TargetPad, unsigned char DurationMicroSec);
		ESteamCoreInputActionOrigin TranslateActionOrigin(ESteamCoreInputType DestinationInputType, ESteamCoreInputActionOrigin SourceOrigin);
		void StopAnalogActionMomentum(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& EAction);
		bool Shutdown();
		bool ShowBindingPanel(const struct FInputHandle& Handle);
		void SetLEDColor(const struct FInputHandle& Handle, unsigned char ColorR, unsigned char ColorG, unsigned char ColorB, ESteamCoreInputLEDFlag Flags);
		bool Init();
		class FString GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin);
		class FString GetStringForActionOrigin(ESteamCoreInputActionOrigin Origin);
		int32_t GetRemotePlaySessionID(const struct FInputHandle& Handle);
		struct FInputMotionData GetMotionData(const struct FInputHandle& Handle);
		ESteamCoreInputType GetInputTypeForHandle(const struct FInputHandle& Handle);
		class FString GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin);
		class FString GetGlyphForActionOrigin(ESteamCoreInputActionOrigin Origin);
		int32_t GetGamepadIndexForController(const struct FInputHandle& Handle);
		int32_t GetDigitalActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle, const struct FInputDigitalActionHandle& DigitalActionHandle, TArray<ESteamCoreInputActionOrigin>* OriginsOut);
		struct FInputDigitalActionHandle GetDigitalActionHandle(const class FString& PszActionName);
		struct FInputDigitalActionData GetDigitalActionData(const struct FInputHandle& Handle, const struct FInputDigitalActionHandle& DigitalActionHandle);
		bool GetDeviceBindingRevision(const struct FInputHandle& Handle, int32_t* Major, int32_t* Minor);
		struct FInputActionSetHandle GetCurrentActionSet(const struct FInputHandle& Handle);
		struct FInputHandle GetControllerForGamepadIndex(int32_t Index);
		int32_t GetConnectedControllers(TArray<struct FInputHandle>* OutHandles);
		int32_t GetAnalogActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle, const struct FInputAnalogActionHandle& AnalogActionHandle, TArray<ESteamCoreInputActionOrigin>* OriginsOut);
		struct FInputAnalogActionHandle GetAnalogActionHandle(const class FString& PszActionName);
		struct FInputAnalogActionData GetAnalogActionData(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& AnalogActionHandle);
		int32_t GetActiveActionSetLayers(const struct FInputHandle& Handle, TArray<struct FInputActionSetHandle>* Data);
		struct FInputActionSetHandle GetActionSetHandle(const class FString& ActionSetName);
		ESteamCoreInputActionOrigin GetActionOriginFromXboxOrigin(const struct FInputHandle& Handle, ESteamCoreXboxOrigin Origin);
		void DeactivateAllActionSetLayers(const struct FInputHandle& Handle);
		void DeactivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetLayerHandle);
		void ActivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetLayerHandle);
		void ActivateActionSet(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Inventory
	 * Size -> 0x0120 (FullSize[0x0168] - InheritedSize[0x0048])
	 */
	class UInventory : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             SteamInventoryResultReady;                               // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamInventoryDefinitionUpdate;                          // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamInventoryFullUpdate;                                // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamInventoryStartPurchaseResult;                       // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamInventoryRequestPricesResultDelegate;               // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamInventoryEligiblePromoItemDefIDs;                   // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFRW[0xC0];                                  // 0x00A8(0x00C0) MISSED OFFSET (PADDING)

	public:
		bool TriggerItemDrop(struct FSteamInventoryResult* Result, const struct FSteamItemDef& ListDefinition);
		bool TransferItemQuantity(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& ItemIDSource, int32_t Quantity, const struct FSteamItemInstanceID& ItemIDDest);
		bool SubmitUpdateProperties(const struct FSteamInventoryUpdateHandle& Handle, struct FSteamInventoryResult* ResultHandle);
		struct FSteamInventoryUpdateHandle StartUpdateProperties();
		void StartPurchase(const class FScriptDelegate& Callback, TArray<struct FSteamItemDef> ItemDefs, TArray<int32_t> Quantity);
		bool SetPropertyString(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, const class FString& Value);
		bool SetPropertyInt(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, int32_t Value);
		bool SetPropertyFloat(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, float Value);
		bool SetPropertyBool(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, bool bValue);
		bool SerializeResult(const struct FSteamInventoryResult& Handle, TArray<unsigned char>* Buffer);
		void RequestPrices(const class FScriptDelegate& Callback);
		void RequestEligiblePromoItemDefinitionsIDs(const class FScriptDelegate& Callback, const struct FSteamID& SteamID);
		bool RemoveProperty(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName);
		bool LoadItemDefinitions();
		bool GrantPromoItems(struct FSteamInventoryResult* Result);
		int32_t GetResultTimestamp(const struct FSteamInventoryResult& Handle);
		ESteamResult GetResultStatus(const struct FSteamInventoryResult& Handle);
		bool GetResultItems(const struct FSteamInventoryResult& Handle, TArray<struct FSteamItemDetails>* Items);
		bool GetResultItemProperty(const struct FSteamInventoryResult& Handle, int32_t ItemIndex, const class FString& PropertyName, class FString* Value);
		int32_t GetNumItemsWithPrices();
		bool GetItemsWithPrices(TArray<struct FSteamItemDef>* ItemDefs, TArray<int32_t>* Prices, TArray<int32_t>* BasePrices);
		bool GetItemsByID(struct FSteamInventoryResult* InventoryResult, TArray<struct FSteamItemInstanceID> InstanceIDs);
		bool GetItemPrice(const struct FSteamItemDef& ItemDef, int32_t* Price, int32_t* BasePrice);
		bool GetItemDefinitionProperty(const struct FSteamItemDef& ItemDef, const class FString& PropertyName, class FString* Value);
		bool GetItemDefinitionIDs(TArray<struct FSteamItemDef>* ItemDefs);
		bool GetEligiblePromoItemDefinitionIDs(const struct FSteamID& SteamID, TArray<struct FSteamItemDef>* ItemDefs);
		bool GetAllItems(struct FSteamInventoryResult* Handle);
		bool GenerateItems(struct FSteamInventoryResult* Result, TArray<struct FSteamItemDef> ItemDefs, TArray<int32_t> Quantity);
		bool ExchangeItems(struct FSteamInventoryResult* Result, TArray<struct FSteamItemDef> ArrayGenerate, TArray<int32_t> ArrayGenerateQuantity, TArray<struct FSteamItemInstanceID> ArrayDestroy, TArray<int32_t> ArrayDestroyQuantity);
		void DestroyResult(const struct FSteamInventoryResult& Handle);
		bool DeserializeResult(struct FSteamInventoryResult* Result, TArray<unsigned char> Buffer, bool bReservedMustBeFalse);
		bool ConsumeItem(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& ItemConsume, int32_t Quantity);
		bool CheckResultSteamID(const struct FSteamInventoryResult& Handle, const struct FSteamID& SteamIDExpected);
		bool AddPromoItems(struct FSteamInventoryResult* OutResult, TArray<struct FSteamItemDef> ItemDefs);
		bool AddPromoItem(struct FSteamInventoryResult* Result, const struct FSteamItemDef& ItemDef);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout);
		void HandleCallback(const struct FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(class UObject* WorldContextObject, float Timeout);
		void HandleCallback(const struct FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreInventoryAsyncActionStartPurchaseResult : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(class UObject* WorldContextObject, TArray<struct FSteamItemDef> ItemDefs, TArray<int32_t> Quantity, float Timeout);
		void HandleCallback(const struct FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Matchmaking
	 * Size -> 0x01B0 (FullSize[0x01F8] - InheritedSize[0x0048])
	 */
	class UMatchmaking : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             FavoritesListAccountsUpdated;                            // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             FavoritesListChanged;                                    // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyChatMsg;                                            // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyChatUpdate;                                         // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyDataUpdate;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyEnter;                                              // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyGameCreated;                                        // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyInvite;                                             // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyKicked;                                             // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SARS[0x120];                                 // 0x00D8(0x0120) MISSED OFFSET (PADDING)

	public:
		bool SetLobbyType(const struct FSteamID& SteamIDLobby, ESteamLobbyType LobbyType);
		bool SetLobbyOwner(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDNewOwner);
		bool SetLobbyMemberLimit(const struct FSteamID& SteamIDLobby, int32_t MaxMembers);
		void SetLobbyMemberData(const struct FSteamID& SteamIDLobby, const class FString& Key, const class FString& Value);
		bool SetLobbyJoinable(const struct FSteamID& SteamIDLobby, bool bLobbyJoinable);
		void SetLobbyGameServer(const struct FSteamID& SteamIDLobby, const class FString& GameServerIP, int32_t GameServerPort, const struct FSteamID& SteamIDGameServer);
		bool SetLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key, const class FString& Value);
		bool SetLinkedLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDLobbyDependent);
		bool SendLobbyChatMsg(const struct FSteamID& SteamIDLobby, const class FString& Message);
		void RequestLobbyList(const class FScriptDelegate& Callback);
		bool RequestLobbyData(const struct FSteamID& SteamIDLobby);
		bool RemoveFavoriteGame(int32_t AppID, const class FString& IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags);
		void LeaveLobby(const struct FSteamID& SteamIDLobby);
		void JoinLobby(const class FScriptDelegate& Callback, const struct FSteamID& SteamIDLobby);
		bool InviteUserToLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDInvitee);
		int32_t GetNumLobbyMembers(const struct FSteamID& SteamIDLobby);
		struct FSteamID GetLobbyOwner(const struct FSteamID& SteamIDLobby);
		int32_t GetLobbyMemberLimit(const struct FSteamID& SteamIDLobby);
		class FString GetLobbyMemberData(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDUser, const class FString& Key);
		struct FSteamID GetLobbyMemberByIndex(const struct FSteamID& SteamIDLobby, int32_t Member);
		bool GetLobbyGameServer(const struct FSteamID& SteamIDLobby, class FString* GameServerIP, int32_t* GameServerPort, struct FSteamID* SteamIDGameServer);
		int32_t GetLobbyDataCount(const struct FSteamID& SteamIDLobby);
		bool GetLobbyDataByIndex(const struct FSteamID& SteamIDLobby, int32_t LobbyData, class FString* Key, class FString* Value);
		class FString GetLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key);
		int32_t GetLobbyChatEntry(const struct FSteamID& SteamIDLobby, int32_t MessageID, struct FSteamID* SteamIDUser, class FString* Message, ESteamChatEntryType* ChatEntryType);
		struct FSteamID GetLobbyByIndex(int32_t Lobby);
		int32_t GetFavoriteGameCount();
		bool GetFavoriteGame(int32_t Game, int32_t* AppID, class FString* IP, int32_t* ConnectionPort, int32_t* QueryPort, TArray<ESteamFavoriteFlags>* Flags, int32_t* TimeLastPlayedOnServer);
		bool DeleteLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key);
		void CreateLobby(const class FScriptDelegate& Callback, ESteamLobbyType LobbyType, int32_t MaxMembers);
		void AddRequestLobbyListStringFilter(const class FString& KeyToMatch, const class FString& ValueToMatch, ESteamLobbyComparison ComparisonType);
		void AddRequestLobbyListResultCountFilter(int32_t MaxResults);
		void AddRequestLobbyListNumericalFilter(const class FString& KeyToMatch, int32_t ValueToMatch, ESteamLobbyComparison ComparisonType);
		void AddRequestLobbyListNearValueFilter(const class FString& KeyToMatch, int32_t ValueToBeCloseTo);
		void AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable);
		void AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter);
		void AddRequestLobbyListCompatibleMembersFilter(const struct FSteamID& SteamIDLobby);
		int32_t AddFavoriteGame(int32_t AppID, const class FString& IP, int32_t ConnectionPort, int32_t QueryPort, TArray<ESteamFavoriteFlags> Flags, int32_t TimeLastPlayedOnServer);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreMatchmakingAsyncActionCreateLobby : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FCreateLobbyData& Data, bool bWasSuccessful);
		class USteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(class UObject* WorldContextObject, ESteamLobbyType LobbyType, int32_t MaxMembers, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(class UObject* WorldContextObject, float Timeout);
		void HandleCallback(const struct FLobbyMatchList& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDLobby, float Timeout);
		void HandleCallback(const struct FJoinLobbyData& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreCreateSession
	 * Size -> 0x0108 (FullSize[0x0140] - InheritedSize[0x0038])
	 */
	class USteamCoreCreateSession : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I620[0xE8];                                  // 0x0058(0x00E8) MISSED OFFSET (PADDING)

	public:
		class USteamCoreCreateSession* CreateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSetting> SessionSettings, const class FString& SessionName, int32_t MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreFindSession
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class USteamCoreFindSession : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IXG4[0x90];                                  // 0x0048(0x0090) MISSED OFFSET (PADDING)

	public:
		void OnCompleted(bool bSuccessful);
		class USteamCoreFindSession* FindSteamCoreSessions(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSearchSetting> SearchSettings, int32_t MaxResults, bool bUseLAN, ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreDestroySession
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class USteamCoreDestroySession : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OSE2[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnCompleted(const class FName& SessionName, bool bWasSuccessful);
		class USteamCoreDestroySession* DestroySteamCoreSession(class UObject* WorldContextObject, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUpdateSession
	 * Size -> 0x00F0 (FullSize[0x0128] - InheritedSize[0x0038])
	 */
	class USteamCoreUpdateSession : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9QD[0xE0];                                  // 0x0048(0x00E0) MISSED OFFSET (PADDING)

	public:
		class USteamCoreUpdateSession* UpdateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSearchSetting> Settings, const class FString& SessionName, int32_t MaxPlayers);
		void OnCompleted(const class FName& SessionName, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.MatchmakingServers
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMatchmakingServers : public USteamCoreSubsystem
	{
	public:
		void ServerRules(const class FScriptDelegate& Callback, const class FString& IP, int32_t QueryPort);
		void RequestSpectatorServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		void RequestLANServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		void RequestInternetServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		void RequestHistoryServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		void RequestFriendsServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		void RequestFavoritesServerList(const class FScriptDelegate& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		void PingServer(const class FScriptDelegate& Callback, const class FString& IP, int32_t QueryPort);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(class UObject* WorldContextObject, const class FString& IP, int32_t Port, float Timeout);
		void HandleCallback(const struct FGameServerItem& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRefreshCompleted;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(class UObject* WorldContextObject, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
		void HandleServerListFinished();
		void HandleCallback(const struct FGameServerItem& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(class UObject* WorldContextObject, const class FString& IP, int32_t QueryPort, float Timeout);
		void HandleCallback(TArray<struct FGameServerRule> Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.ServerFilter
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UServerFilter : public UObject
	{
	public:
		unsigned char                                              UnknownData_8PAH[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		TMap<class FString, class FString> GetFilters();
		void AddFilterWhitelisted();
		void AddFilterVersion(const class FString& Value);
		void AddFilterSecure();
		void AddFilterProxy();
		void AddFilterPassword();
		void AddFilterOr(const class FString& Value);
		void AddFilterNotFull();
		void AddFilterNotAppId(const class FString& Value);
		void AddFilterNor(const class FString& Value);
		void AddFilterNoPlayers();
		void AddFilterNand(const class FString& Value);
		void AddFilterName(const class FString& Value);
		void AddFilterMap(const class FString& Value);
		void AddFilterLinux();
		void AddFilterHasPlayers();
		void AddFilterGameTagsNor(const class FString& Value);
		void AddFilterGameTagsAnd(const class FString& Value);
		void AddFilterGameDataOr(const class FString& Value);
		void AddFilterGameDataNor(const class FString& Value);
		void AddFilterGameDataAnd(const class FString& Value);
		void AddFilterGameAddr(const class FString& Value);
		void AddFilterDedicated();
		void AddFilterAnd(const class FString& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Music
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UMusic : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             PlaybackStatusHasChanged;                                // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             VolumeHasChanged;                                        // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5J50[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetVolume(float flVolume);
		void PlayPrevious();
		void PlayNext();
		void Play();
		void Pause();
		float GetVolume();
		ESteamAudioPlaybackStatus GetPlaybackStatus();
		bool BIsPlaying();
		bool BIsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Networking
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UNetworking : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnP2PSessionRequestDelegate;                             // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnP2PSessionConnectFailDelegate;                         // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AWG[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		bool SendP2PPacket(const struct FSteamID& SteamIDRemote, TArray<unsigned char> Data, ESteamP2PSend P2PSendType, int32_t Channel);
		bool ReadP2PPacket(TArray<unsigned char>* Data, struct FSteamID* OutSteamIdRemote, int32_t MessageSize, int32_t Channel);
		bool IsP2PPacketAvailable(int32_t* MessageSize, int32_t Channel);
		bool GetP2PSessionState(const struct FSteamID& SteamIDRemote, struct FSteamP2PSessionState* ConnectionState);
		bool CloseP2PSessionWithUser(const struct FSteamID& SteamIDRemote);
		bool CloseP2PChannelWithUser(const struct FSteamID& SteamIDRemote, int32_t Channel);
		bool AllowP2PPacketRelay(bool bAllow);
		bool AcceptP2PSessionWithUser(const struct FSteamID& SteamIDRemote);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.NetworkingUtils
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNetworkingUtils : public USteamCoreSubsystem
	{
	public:
		bool ParsePingLocationString(const class FString& String, struct FSteamNetworkPingLocation* Result);
		void InitRelayNetworkAccess();
		float GetLocalPingLocation(struct FSteamNetworkPingLocation* Result);
		int32_t EstimatePingTimeFromLocalHost(const struct FSteamNetworkPingLocation& RemoteLocation);
		int32_t EstimatePingTimeBetweenTwoLocations(const struct FSteamNetworkPingLocation& Location1, const struct FSteamNetworkPingLocation& Location2);
		void ConvertPingLocationToString(const struct FSteamNetworkPingLocation& Location, class FString* String);
		bool CheckPingDataUpToDate(float MaxAgeSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.ParentalSettings
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UParentalSettings : public USteamCoreSubsystem
	{
	public:
		bool BIsParentalLockLocked();
		bool BIsParentalLockEnabled();
		bool BIsFeatureInBlockList(ESteamParentalFeature Feature);
		bool BIsFeatureBlocked(ESteamParentalFeature Feature);
		bool BIsAppInBlockList(int32_t AppID);
		bool BIsAppBlocked(int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamParties
	 * Size -> 0x0120 (FullSize[0x0168] - InheritedSize[0x0048])
	 */
	class USteamParties : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             JoinPartyDelegate;                                       // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             CreateBeaconDelegate;                                    // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ReservationNotificationDelegate;                         // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ChangeNumOpenSlotsDelegate;                              // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AvailableBeaconLocationsDelegate;                        // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ActiveBeaconsDelegate;                                   // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFO9[0xC0];                                  // 0x00A8(0x00C0) MISSED OFFSET (PADDING)

	public:
		void OnReservationCompleted(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser);
		void JoinParty(const class FScriptDelegate& Callback, const struct FPartyBeaconID& BeaconID);
		bool GetNumAvailableBeaconLocations(int32_t* NumLocations);
		int32_t GetNumActiveBeacons();
		bool GetBeaconLocationData(const struct FSteamPartyBeaconLocation& BeaconLocation, ESteamPartiesBeaconLocationData EData, class FString* PCHDataStringOut);
		bool GetBeaconDetails(const struct FPartyBeaconID& BeaconID, struct FSteamID* SteamIDBeaconOwner, struct FSteamPartyBeaconLocation* Location, class FString* OutMetadata);
		struct FPartyBeaconID GetBeaconByIndex(int32_t Index);
		bool GetAvailableBeaconLocations(TArray<struct FSteamPartyBeaconLocation>* LocationList, int32_t MaxNumLocations);
		bool DestroyBeacon(const struct FPartyBeaconID& BeaconID);
		void CreateBeacon(const class FScriptDelegate& Callback, int32_t OpenSlots, const struct FSteamPartyBeaconLocation& BeaconLocation, const class FString& ConnectString, const class FString& MetaData);
		void ChangeNumOpenSlots(const class FScriptDelegate& Callback, const struct FPartyBeaconID& BeaconID, int32_t OpenSlots);
		void CancelReservation(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, float Timeout);
		void HandleCallback(const struct FJoinPartyData& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FCreateBeaconData& Data, bool bWasSuccessful);
		class USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(class UObject* WorldContextObject, int32_t OpenSlots, const struct FSteamPartyBeaconLocation& BeaconLocation, const class FString& ConnectString, const class FString& MetaData, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FChangeNumOpenSlotsData& Data, bool bWasSuccessful);
		class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, int32_t OpenSlots, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.RemotePlay
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class URemotePlay : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             SteamRemotePlaySessionConnected;                         // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamRemotePlaySessionDisconnected;                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1K9Q[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		struct FSteamID GetSessionSteamID(int32_t SessionID);
		int32_t GetSessionID(int32_t SessionIndex);
		int32_t GetSessionCount();
		class FString GetSessionClientName(int32_t SessionID);
		ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32_t SessionID);
		bool BSendRemotePlayTogetherInvite(const struct FSteamID& SteamIDFriend);
		bool BGetSessionClientResolution(int32_t SessionID, int32_t* ResolutionX, int32_t* ResolutionY);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.RemoteStorage
	 * Size -> 0x00C0 (FullSize[0x0108] - InheritedSize[0x0048])
	 */
	class URemoteStorage : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             RemoteStorageUnsubscribePublishedFileResult;             // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RemoteStorageSubscribePublishedFileResult;               // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RemoteStoragePublishedFileUnsubscribed;                  // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RemoteStoragePublishedFileSubscribed;                    // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFCC[0x80];                                  // 0x0088(0x0080) MISSED OFFSET (PADDING)

	public:
		int32_t UGCRead(const struct FSteamUGCHandle& Content, TArray<unsigned char>* OutData, int32_t DataToRead, int32_t Offset, ESteamUGCReadAction Action);
		void UGCDownloadToLocation(const class FScriptDelegate& Callback, const struct FSteamUGCHandle& Content, const class FString& Location, int32_t Priority);
		void UGCDownload(const class FScriptDelegate& Callback, const struct FSteamUGCHandle& Content, int32_t Priority);
		bool SetSyncPlatforms(const class FString& File, ESteamRemoteStoragePlatform RemoteStoragePlatform);
		void SetCloudEnabledForApp(bool bEnabled);
		bool IsCloudEnabledForApp();
		bool IsCloudEnabledForAccount();
		bool GetUGCDownloadProgress(const struct FSteamUGCHandle& Handle, int32_t* BytesDownloaded, int32_t* BytesExpected);
		bool GetUGCDetails(const struct FSteamUGCHandle& Handle, int32_t* AppID, class FString* Name, int32_t* FileSizeInBytes, struct FSteamID* SteamIDOwner);
		ESteamRemoteStoragePlatform GetSyncPlatforms(const class FString& File);
		bool GetQuota(int32_t* TotalBytes, int32_t* AvailableBytes);
		int32_t GetFileTimestamp(const class FString& File);
		int32_t GetFileSize(const class FString& File);
		class FString GetFileNameAndSize(int32_t File, int32_t* FileSizeInBytes);
		int32_t GetFileCount();
		struct FSteamUGCHandle GetCachedUGCHandle(int32_t ICachedContent);
		int32_t GetCachedUGCCount();
		bool FileWriteStreamWriteChunk(const struct FUGCFileWriteStreamHandle& Handle, TArray<unsigned char> Data);
		struct FUGCFileWriteStreamHandle FileWriteStreamOpen(const class FString& File);
		bool FileWriteStreamClose(const struct FUGCFileWriteStreamHandle& Handle);
		bool FileWriteStreamCancel(const struct FUGCFileWriteStreamHandle& Handle);
		void FileWriteAsync(const class FScriptDelegate& Callback, const class FString& File, TArray<unsigned char> Data);
		bool FileWrite(const class FString& File, TArray<unsigned char> Data);
		void FileShare(const class FScriptDelegate& Callback, const class FString& File);
		bool FileReadAsyncComplete(const struct FRemoteStorageFileReadAsyncComplete& ReadCall, TArray<unsigned char>* Buffer, int32_t BytesToRead);
		void FileReadAsync(const class FScriptDelegate& Callback, const class FString& File, int32_t Offset, int32_t BytesToRead);
		int32_t FileRead(const class FString& File, TArray<unsigned char>* Buffer, int32_t DataToRead);
		bool FilePersisted(const class FString& File);
		bool FileForget(const class FString& File);
		bool FileExists(const class FString& File);
		bool FileDelete(const class FString& File);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Screenshots
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UScreenshots : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             ScreenshotReady;                                         // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ScreenshotRequested;                                     // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QREK[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		struct FScreenshotHandle WriteScreenshot(TArray<unsigned char> PubRGB, int32_t Width, int32_t Height);
		void TriggerScreenshot();
		bool TagUser(const struct FScreenshotHandle& Handle, const struct FSteamID& SteamID);
		bool TagPublishedFile(const struct FScreenshotHandle& Handle, const struct FPublishedFileID& PublishedFileID);
		bool SetLocation(const struct FScreenshotHandle& Handle, const class FString& Location);
		bool IsScreenshotsHooked();
		void HookScreenshots(bool bHook);
		struct FScreenshotHandle AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, const class FString& Filename, const class FString& VRFileName);
		struct FScreenshotHandle AddScreenshotToLibrary(const class FString& Filename, const class FString& ThumbnailFilename, int32_t Width, int32_t Height);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.UGC
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UUGC : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             ItemInstalled;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DownloadItemResult;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LV1W[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		bool UpdateItemPreviewVideo(const struct FUGCUpdateHandle& Handle, int32_t Index, const class FString& PreviewVideo);
		bool UpdateItemPreviewFile(const struct FUGCUpdateHandle& Handle, int32_t Index, const class FString& PreviewFile);
		void UnsubscribeItem(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID);
		void SuspendDownloads(bool bSuspend);
		void SubscribeItem(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID);
		void SubmitItemUpdate(const class FScriptDelegate& Callback, const struct FUGCUpdateHandle& Handle, const class FString& ChangeNote);
		void StopPlaytimeTrackingForAllItems(const class FScriptDelegate& Callback);
		void StopPlaytimeTracking(const class FScriptDelegate& Callback, TArray<struct FPublishedFileID> PublishedFileIDs);
		void StartPlaytimeTracking(const class FScriptDelegate& Callback, TArray<struct FPublishedFileID> PublishedFileID);
		struct FUGCUpdateHandle StartItemUpdate(int32_t ConsumerAppID, const struct FPublishedFileID& PublishedFileID);
		void SetUserItemVote(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID, bool bVoteUp);
		bool SetSearchText(const struct FUGCQueryHandle& Handle, const class FString& SearchText);
		bool SetReturnTotalOnly(const struct FUGCQueryHandle& Handle, bool bReturnTotalOnly);
		bool SetReturnPlaytimeStats(const struct FUGCQueryHandle& Handle, int32_t Days);
		bool SetReturnOnlyIDs(const struct FUGCQueryHandle& Handle, bool bReturnOnlyIDs);
		bool SetReturnMetadata(const struct FUGCQueryHandle& Handle, bool bReturnMetadata);
		bool SetReturnLongDescription(const struct FUGCQueryHandle& Handle, bool bReturnLongDescription);
		bool SetReturnKeyValueTags(const struct FUGCQueryHandle& Handle, bool bReturnKeyValueTags);
		bool SetReturnChildren(const struct FUGCQueryHandle& Handle, bool bReturnChildren);
		bool SetReturnAdditionalPreviews(const struct FUGCQueryHandle& Handle, bool bReturnAdditionalPreviews);
		bool SetRankedByTrendDays(const struct FUGCQueryHandle& Handle, int32_t Days);
		bool SetMatchAnyTag(const struct FUGCQueryHandle& Handle, bool bMatchAnyTag);
		bool SetLanguage(const struct FUGCQueryHandle& Handle, const class FString& Language);
		bool SetItemVisibility(const struct FUGCUpdateHandle& Handle, ESteamRemoteStoragePublishedFileVisibility Visibility);
		bool SetItemUpdateLanguage(const struct FUGCUpdateHandle& Handle, const class FString& Language);
		bool SetItemTitle(const struct FUGCUpdateHandle& Handle, const class FString& Title);
		bool SetItemTags(const struct FUGCUpdateHandle& Handle, TArray<class FString> Tags);
		bool SetItemPreview(const struct FUGCUpdateHandle& Handle, const class FString& PreviewFile);
		bool SetItemMetadata(const struct FUGCUpdateHandle& Handle, const class FString& MetaData);
		bool SetItemDescription(const struct FUGCUpdateHandle& Handle, const class FString& Description);
		bool SetItemContent(const struct FUGCUpdateHandle& Handle, const class FString& ContentFolder);
		bool SetCloudFileNameFilter(const struct FUGCQueryHandle& Handle, const class FString& MatchCloudFileName);
		bool SetAllowLegacyUpload(const struct FUGCUpdateHandle& Handle, bool bAllowLegacyUpload);
		bool SetAllowCachedResponse(const struct FUGCQueryHandle& Handle, int32_t MaxAgeSeconds);
		void SendQueryUGCRequest(const class FScriptDelegate& Callback, const struct FUGCQueryHandle& Handle);
		bool RemoveItemPreview(const struct FUGCUpdateHandle& Handle, int32_t Index);
		bool RemoveItemKeyValueTags(const struct FUGCUpdateHandle& Handle, const class FString& Key);
		void RemoveItemFromFavorites(const class FScriptDelegate& Callback, int32_t AppID, const struct FPublishedFileID& PublishedFileID);
		void RemoveDependency(const class FScriptDelegate& Callback, const struct FPublishedFileID& ParentPublishedFileID, const struct FPublishedFileID& ChildPublishedFileId);
		void RemoveAppDependency(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID, int32_t AppID);
		bool ReleaseQueryUGCRequest(const struct FUGCQueryHandle& Handle);
		void GetUserItemVote(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID);
		int32_t GetSubscribedItems(TArray<struct FPublishedFileID>* PublishedFileIDs, int32_t MaxEntries);
		bool GetQueryUGCTagDisplayName(const struct FUGCQueryHandle& Handle, int32_t Index, int32_t IndexTag, class FString* Value);
		bool GetQueryUGCTag(const struct FUGCQueryHandle& Handle, int32_t Index, int32_t IndexTag, class FString* Value);
		bool GetQueryUGCStatistic(const struct FUGCQueryHandle& Handle, int32_t Index, ESteamItemStatistic StatType, class FString* StatValue);
		bool GetQueryUGCResult(const struct FUGCQueryHandle& Handle, int32_t Index, struct FSteamUGCDetails* Details);
		bool GetQueryUGCPreviewURL(const struct FUGCQueryHandle& Handle, int32_t Index, class FString* URL);
		int32_t GetQueryUGCNumTags(const struct FUGCQueryHandle& Handle, int32_t Index);
		int32_t GetQueryUGCNumKeyValueTags(const struct FUGCQueryHandle& Handle, int32_t Index);
		int32_t GetQueryUGCNumAdditionalPreviews(const struct FUGCQueryHandle& Handle, int32_t Index);
		bool GetQueryUGCMetadata(const struct FUGCQueryHandle& Handle, int32_t Index, class FString* MetaData, int32_t MetadataSize);
		bool GetQueryUGCKeyValueTag(const struct FUGCQueryHandle& Handle, int32_t Index, int32_t KeyValueTagIndex, class FString* Key, class FString* Value);
		bool GetQueryUGCChildren(const struct FUGCQueryHandle& Handle, int32_t Index, TArray<struct FPublishedFileID>* PublishedFileIDs, int32_t MaxEntries);
		bool GetQueryUGCAdditionalPreview(const struct FUGCQueryHandle& Handle, int32_t Index, int32_t PreviewIndex, class FString* URLOrVideoID, class FString* OriginalFileName, ESteamItemPreviewType* PreviewType);
		int32_t GetNumSubscribedItems();
		ESteamItemUpdateStatus GetItemUpdateProgress(const struct FUGCUpdateHandle& Handle, int32_t* BytesProcessed, int32_t* BytesTotal);
		int32_t GetItemState(const struct FPublishedFileID& PublishedFileID, TArray<ESteamItemState>* States);
		bool GetItemInstallInfo(const struct FPublishedFileID& PublishedFileID, int32_t* SizeOnDisk, class FString* Folder, int32_t* Timestamp);
		bool GetItemDownloadInfo(const struct FPublishedFileID& PublishedFileID, int32_t* BytesDownloaded, int32_t* BytesTotal);
		void GetAppDependencies(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID);
		bool DownloadItem(const struct FPublishedFileID& PublishedFileID, bool bHighPriority);
		void DeleteItem(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID);
		struct FUGCQueryHandle CreateQueryUserUGCRequest(const struct FSteamID& SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page);
		struct FUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<struct FPublishedFileID> PublishedFileIDs);
		struct FUGCQueryHandle CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page);
		void CreateItem(const class FScriptDelegate& Callback, int32_t ConsumerAppID, ESteamWorkshopFileType FileType);
		bool BInitWorkshopForGameServer(int32_t WorkshopDepotID, const class FString& Folder);
		bool AddRequiredTagGroup(const struct FUGCQueryHandle& Handle, TArray<class FString> TagGroups);
		bool AddRequiredTag(const struct FUGCQueryHandle& Handle, const class FString& TagName);
		bool AddRequiredKeyValueTag(const struct FUGCQueryHandle& Handle, const class FString& Key, const class FString& Value);
		void AddItemToFavorites(const class FScriptDelegate& Callback, int32_t AppID, const struct FPublishedFileID& PublishedFileID);
		bool AddItemPreviewVideo(const struct FUGCUpdateHandle& Handle, const class FString& VideoID);
		bool AddItemPreviewFile(const struct FUGCUpdateHandle& Handle, const class FString& PreviewFile, ESteamItemPreviewType Type);
		bool AddItemKeyValueTag(const struct FUGCUpdateHandle& Handle, const class FString& Key, const class FString& Value);
		bool AddExcludedTag(const struct FUGCQueryHandle& Handle, const class FString& TagName);
		void AddDependency(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId);
		void AddAppDependency(const class FScriptDelegate& Callback, const struct FPublishedFileID& PublishedFileID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(class UObject* WorldContextObject, float Timeout);
		void HandleCallback(const struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<struct FPublishedFileID> PublishedFileIDs, float Timeout);
		void HandleCallback(const struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<struct FPublishedFileID> PublishedFileIDs, float Timeout);
		void HandleCallback(const struct FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileIDs, float Timeout);
		void HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionSubscribeItem
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileIDs, float Timeout);
		void HandleCallback(const struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(class UObject* WorldContextObject, int32_t AppID, const struct FPublishedFileID& PublishedFileID, float Timeout);
		void HandleCallback(const struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
		class USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(class UObject* WorldContextObject, int32_t AppID, const struct FPublishedFileID& PublishedFileID, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionGetUserItemVote
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FGetUserItemVoteResult& Data, bool bWasSuccessful);
		class USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionSetUserItemVote
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bVoteUp, float Timeout);
		void HandleCallback(const struct FSetUserItemVoteResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(class UObject* WorldContextObject, const struct FUGCUpdateHandle& Handle, const class FString& ChangeNote, float Timeout);
		void HandleCallback(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionCreateItem
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FCreateItemResult& Data, bool bWasSuccessful);
		class USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(class UObject* WorldContextObject, int32_t ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(class UObject* WorldContextObject, const struct FUGCQueryHandle& Handle, float Timeout);
		void HandleCallback(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionAddAppDependency
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FAddAppDependencyResult& Data, bool bWasSuccessful);
		class USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int32_t AppID, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int32_t AppID, float Timeout);
		void HandleCallback(const struct FRemoveAppDependencyResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionAddUGCDependency
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FAddUGCDependencyResult& Data, bool bWasSuccessful);
		class USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId, float Timeout);
		void HandleCallback(const struct FRemoveUGCDependencyResult& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionDeleteItem
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FUGCDeleteItemResult& Data, bool bWasSuccessful);
		class USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionGetAppDependencies
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FGetAppDependenciesResult& Data, bool bWasSuccessful);
		class USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUGCAsyncActionDownloadItem
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FDownloadItemResult& Data, bool bWasSuccessful);
		class USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bHighPriority, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.User
	 * Size -> 0x0210 (FullSize[0x0258] - InheritedSize[0x0048])
	 */
	class UUser : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             ClientGameServerDeny;                                    // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameWebCallback;                                         // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GetAuthSessionTicketResponse;                            // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             IPCFailure;                                              // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LicensesUpdated;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MicroTxnAuthorizationResponse;                           // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamServerConnectFailure;                               // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamServersConnected;                                   // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamServersDisconnected;                                // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ValidateAuthTicketResponse;                              // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EncryptedAppTicketResponse;                              // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ4E[0x160];                                 // 0x00F8(0x0160) MISSED OFFSET (PADDING)

	public:
		ESteamUserHasLicenseForAppResult UserHasLicenseForApp(const struct FSteamID& SteamID, int32_t AppID);
		void StopVoiceRecording();
		void StartVoiceRecording();
		void RequestStoreAuthURL(const class FScriptDelegate& Callback, const class FString& RedirectURL);
		void RequestEncryptedAppTicket(const class FScriptDelegate& Callback, TArray<unsigned char> DataToInclude);
		int32_t GetVoiceOptimalSampleRate();
		ESteamVoiceResult GetVoice(TArray<unsigned char>* DestBuffer, int32_t* BytesWritten);
		struct FSteamID GetSteamID_Pure();
		struct FSteamID GetSteamID();
		int32_t GetPlayerSteamLevel();
		int32_t GetGameBadgeLevel(int32_t Series, bool bFoil);
		bool GetEncryptedAppTicket(TArray<unsigned char>* Ticket);
		ESteamVoiceResult GetAvailableVoice(int32_t* CompressedBytes, int32_t* UncompressedBytes, int32_t UncompressedVoiceDesiredSampleRate);
		struct FSteamTicketHandle GetAuthSessionTicket(TArray<unsigned char>* Ticket);
		void EndAuthSession(const struct FSteamID& SteamID);
		ESteamVoiceResult DecompressVoice(TArray<unsigned char> CompressedBuffer, int32_t DesiredSampleRate, TArray<unsigned char>* DestBuffer);
		void CancelAuthTicket(const struct FSteamTicketHandle& TicketHandle);
		bool BLoggedOn();
		bool BIsTwoFactorEnabled();
		bool BIsPhoneVerified();
		bool BIsPhoneRequiringVerification();
		bool BIsPhoneIdentifying();
		bool BIsBehindNAT();
		ESteamBeginAuthSessionResult BeginAuthSession(TArray<unsigned char> Ticket, const struct FSteamID& SteamID);
		void AdvertiseGame(const struct FSteamID& SteamIDGameServer, const class FString& ServerIP, int32_t ServerPort);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(class UObject* WorldContextObject, TArray<unsigned char> DataToInclude, float Timeout);
		void HandleCallback(const struct FEncryptedAppTicketResponse& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(class UObject* WorldContextObject, const class FString& RedirectURL, float Timeout);
		void HandleCallback(const struct FStoreAuthURLResponse& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.UserStats
	 * Size -> 0x00F0 (FullSize[0x0138] - InheritedSize[0x0048])
	 */
	class UUserStats : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             UserAchievementIconFetched;                              // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UserAchievementStored;                                   // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UserStatsReceived;                                       // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UserStatsStored;                                         // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UserStatsUnloaded;                                       // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHHF[0xA0];                                  // 0x0098(0x00A0) MISSED OFFSET (PADDING)

	public:
		void UploadLeaderboardScore(const class FScriptDelegate& Callback, const struct FSteamLeaderboard& SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails);
		bool UpdateAvgRateStat(const class FString& Name, float CountThisSession, float SessionLength);
		bool StoreStats();
		bool SetStatInt(const class FString& Name, int32_t Data);
		bool SetStatFloat(const class FString& Name, float Data);
		bool SetAchievement(const class FString& Name);
		bool ResetAllStats(bool bAchievementsToo);
		void RequestUserStats(const class FScriptDelegate& Callback, const struct FSteamID& SteamID);
		void RequestGlobalStats(const class FScriptDelegate& Callback, int32_t HistoryDays);
		void RequestGlobalAchievementPercentages(const class FScriptDelegate& Callback);
		bool RequestCurrentStats();
		bool IndicateAchievementProgress(const class FString& Name, int32_t CurrentProgress, int32_t MaxProgress);
		bool GetUserStatInteger(const struct FSteamID& SteamIDUser, const class FString& Name, int32_t* Data);
		bool GetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float* Data);
		bool GetUserAchievementAndUnlockTime(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved, int32_t* UnlockTime);
		bool GetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved);
		bool GetStatInt(const class FString& Name, int32_t* Data);
		bool GetStatFloat(const class FString& Name, float* Data);
		void GetNumberOfCurrentPlayers(const class FScriptDelegate& Callback);
		int32_t GetNumAchievements();
		int32_t GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, class FString* Name, float* Percent, bool* bAchieved);
		int32_t GetMostAchievedAchievementInfo(class FString* Name, float* Percent, bool* bAchieved);
		ESteamLeaderboardSortMethod GetLeaderboardSortMethod(const struct FSteamLeaderboard& SteamLeaderboard);
		class FString GetLeaderboardName(const struct FSteamLeaderboard& SteamLeaderboard);
		int32_t GetLeaderboardEntryCount(const struct FSteamLeaderboard& SteamLeaderboard);
		ESteamLeaderboardDisplayType GetLeaderboardDisplayType(const struct FSteamLeaderboard& SteamLeaderboard);
		bool GetGlobalStatInt(const class FString& StatName, int32_t* Data);
		int32_t GetGlobalStatHistoryInt(const class FString& StatName, int32_t HistoryDays, TArray<int32_t>* Data);
		int32_t GetGlobalStatHistoryFloat(const class FString& StatName, int32_t HistoryDays, TArray<float>* Data);
		bool GetGlobalStatFloat(const class FString& StatName, float* Data);
		bool GetDownloadedLeaderboardEntry(const struct FSteamLeaderboardEntries& LeaderboardEntries, int32_t Index, struct FSteamLeaderboardEntry* LeaderboardEntry, TArray<int32_t> Details, TArray<int32_t>* outDetails);
		bool GetAchievementProgressLimitsFloat(const class FString& Name, float* MinProgress, float* MaxProgress);
		bool GetAchievementProgressLimits(const class FString& Name, int32_t* MinProgress, int32_t* MaxProgress);
		class FString GetAchievementName(int32_t Achievement);
		class UTexture2D* GetAchievementIcon(const class FString& Name);
		class FString GetAchievementDisplayAttribute(const class FString& Name, const class FString& Key);
		bool GetAchievementAndUnlockTime(const class FString& Name, bool* bAchieved, int32_t* UnlockTime);
		bool GetAchievementAchievedPercent(const class FString& Name, float* Percent);
		bool GetAchievement(const class FString& Name, bool* bAchieved);
		void FindOrCreateLeaderboard(const class FScriptDelegate& Callback, const class FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType);
		void FindLeaderboard(const class FScriptDelegate& Callback, const class FString& LeaderboardName);
		void DownloadLeaderboardEntriesForUsers(const class FScriptDelegate& Callback, const struct FSteamLeaderboard& SteamLeaderboard, TArray<struct FSteamID> Users);
		void DownloadLeaderboardEntries(const class FScriptDelegate& Callback, const struct FSteamLeaderboard& SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32_t RangeStart, int32_t RangeEnd);
		bool ClearAchievement(const class FString& Name);
		void AttachLeaderboardUGC(const class FScriptDelegate& Callback, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionFindLeaderboard : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FLeaderboardFindResult& Data, bool bWasSuccessful);
		class USteamCoreUserStatsAsyncActionFindLeaderboard* FindLeaderboardAsync(class UObject* WorldContextObject, const class FString& LeaderboardName, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
		class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, ESteamLeaderboardDataRequest Request, int32_t RangeStart, int32_t RangeEnd, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* RequestGlobalStatsAsync(class UObject* WorldContextObject, int32_t HistoryDays, float Timeout);
		void HandleCallback(const struct FGlobalStatsReceived& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(class UObject* WorldContextObject, float Timeout);
		void HandleCallback(const struct FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FNumberOfCurrentPlayers& Data, bool bWasSuccessful);
		class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32_t Score, TArray<int32_t> ScoreDetails, float Timeout);
		void HandleCallback(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);
		class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const class FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionRequestUserStats : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USteamCoreUserStatsAsyncActionRequestUserStats* RequestUserStatsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout);
		void HandleCallback(const struct FRequestUserStatsData& Data, bool bWasSuccessful);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);
		class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, TArray<struct FSteamID> Users, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC : public USteamCoreAsyncAction
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void HandleCallback(const struct FAttachLeaderboardUGCData& Data, bool bWasSuccessful);
		class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle, float Timeout);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamCoreVoice
	 * Size -> 0x0000 (FullSize[0x03C0] - InheritedSize[0x03C0])
	 */
	class USteamCoreVoice : public USoundWaveProcedural
	{
	public:
		void DestroySteamCoreVoice(class USteamCoreVoice* Obj);
		class USteamCoreVoice* ConstructSteamCoreVoice(int32_t AudioSampleRate);
		void AddAudioBuffer(TArray<unsigned char> Buffer);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.SteamUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool WriteBytesToFile(bool bOverwriteIfExists, const class FString& AbsoluteFilePath, TArray<unsigned char> DataBuffer);
		void SteamItemInstanceID_Equals_Exec(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B, ESteamCoreIdentical* Result);
		bool SteamItemInstanceID_Equals(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B);
		void ReleaseRequest();
		TArray<unsigned char> ReadFileToBytes(const class FString& AbsoluteFilePath);
		bool PublishedFileID_NotEquals(const struct FPublishedFileID& A, const struct FPublishedFileID& B);
		void PublishedFileID_Equals_Exec(const struct FPublishedFileID& A, const struct FPublishedFileID& B, ESteamCoreIdentical* Result);
		bool PublishedFileID_Equals(const struct FPublishedFileID& A, const struct FPublishedFileID& B);
		bool NotEqual(const struct FSteamID& A, const struct FSteamID& B);
		struct FSteamUGCHandle MakeUGCHandle(const class FString& Value);
		struct FSteamTicketHandle MakeTicketHandle(const class FString& Value);
		struct FSteamSessionSetting MakeString(const class FString& Value);
		struct FSteamID MakeSteamID(const class FString& Value);
		struct FSteamGameID MakeSteamGameID(const class FString& Value);
		struct FSteamSessionSearchSetting MakeSearchString(const class FString& Value);
		struct FSteamSessionSearchSetting MakeSearchInteger(ESteamComparisonOp ComparisonOperator, int32_t Value);
		struct FSteamSessionSearchSetting MakeSearchBool(bool bValue);
		struct FPublishedFileID MakePublishedFileID(const class FString& Value);
		struct FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(const class FString& Value);
		struct FSteamSessionSetting MakeInteger(int32_t Value);
		struct FSteamSessionSetting MakeBool(bool bValue);
		void ListenForSteamMessages(const class FScriptDelegate& Callback);
		bool IsValid(const struct FSteamID& SteamID);
		bool IsUsingP2PRelays();
		void IsUGCHandleValid_Exec(const struct FSteamUGCHandle& Handle, ESteamCoreValid* Result);
		bool IsUGCHandleValid(const struct FSteamUGCHandle& Handle);
		void IsSteamTicketHandleValid_Exec(const struct FSteamTicketHandle& Handle, ESteamCoreValid* Result);
		bool IsSteamTicketHandleValid(const struct FSteamTicketHandle& Handle);
		bool IsSteamServerInitialized();
		void IsSteamInventoryUpdateHandleValid_Exec(const struct FSteamInventoryUpdateHandle& Handle, ESteamCoreValid* Result);
		bool IsSteamInventoryUpdateHandleValid(const struct FSteamInventoryUpdateHandle& Handle);
		void IsSteamIDValid_Exec(const struct FSteamID& SteamID, ESteamCoreValid* Result);
		bool IsSteamAvailable();
		bool IsRecalculatingPing();
		void IsPublishedFileIDValid_Exec(const struct FPublishedFileID& Handle, ESteamCoreValid* Result);
		bool IsPublishedFileIDValid(const struct FPublishedFileID& PublishedFileID);
		bool IsLobby(const struct FSteamID& SteamID);
		void IsGameIDValid_Exec(const struct FSteamGameID& GameID, ESteamCoreValid* Result);
		bool IsGameIDValid(const struct FSteamGameID& GameID);
		class FString GetString(const struct FSteamSessionSetting& Settings, class FString* Key);
		struct FSteamID GetSteamIdFromPlayerState(class APlayerState* PlayerState);
		void GetPublicIp(const class FScriptDelegate& Callback);
		int32_t GetPingFromHostData(const struct FHostPingData& Data);
		int32_t GetInteger(const struct FSteamSessionSetting& Settings, class FString* Key);
		struct FHostPingData GetHostPingData();
		bool GetBool(const struct FSteamSessionSetting& Settings, class FString* Key);
		ESteamAccountType GetAccountType(const struct FSteamID& SteamID);
		struct FDateTime FromUnixTimestamp(const class FString& Timestamp);
		void Equal_Exec(const struct FSteamID& A, const struct FSteamID& B, ESteamCoreIdentical* Result);
		bool Equal(const struct FSteamID& A, const struct FSteamID& B);
		class FString EncryptString(const class FString& String);
		class UServerFilter* ConstructServerFilter(class UObject* WorldContextObject);
		void CancelQuery();
		class FString BreakUGCHandle(const struct FSteamUGCHandle& Handle);
		class FString BreakTicketHandle(const struct FSteamTicketHandle& Handle);
		class FString BreakSteamID(const struct FSteamID& SteamID);
		class FString BreakSteamGameID(const struct FSteamGameID& SteamID);
		class FString BreakPublishedFileID(const struct FPublishedFileID& FileID);
		class FString BreakInventoryUpdateHandle(const struct FSteamInventoryUpdateHandle& Handle);
		TArray<unsigned char> BP_StringToBytes(const class FString& String);
		class FString BP_BytesToString(TArray<unsigned char> Array);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Utils
	 * Size -> 0x00F0 (FullSize[0x0138] - InheritedSize[0x0048])
	 */
	class UUtils : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             CheckFileSignature;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GamepadTextInputDismissed;                               // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             IPCountry;                                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LowBatteryPower;                                         // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamShutdown;                                           // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILMV[0xA0];                                  // 0x0098(0x00A0) MISSED OFFSET (PADDING)

	public:
		void StartVRDashboard();
		bool ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, const class FString& Description, int32_t CharMax, const class FString& ExistingText);
		void SetVRHeadsetStreamingEnabled(bool bEnabled);
		void SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition);
		void SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset);
		bool IsVRHeadsetStreamingEnabled();
		bool IsSteamRunningInVR();
		bool IsSteamInBigPictureMode();
		bool IsSteamChinaLauncher();
		bool IsOverlayEnabled();
		bool InitFilterText();
		class FString GetSteamUILanguage();
		int32_t GetServerRealTime();
		int32_t GetSecondsSinceComputerActive();
		int32_t GetSecondsSinceAppActive();
		class FString GetIPCountry();
		int32_t GetIPCCallCount();
		bool GetImageSize(int32_t iImage, int32_t* Width, int32_t* Height);
		bool GetImageRGBA(int32_t iImage, TArray<unsigned char>* OutBuffer);
		int32_t GetEnteredGamepadTextLength();
		bool GetEnteredGamepadTextInput(class FString* Text);
		int32_t GetCurrentBatteryPower();
		ESteamUniverse GetConnectedUniverse();
		int32_t GetAppID_Pure();
		int32_t GetAppID();
		bool BOverlayNeedsPresent();
		static UClass* StaticClass();
	};

	/**
	 * Class SteamCore.Video
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UVideo : public USteamCoreSubsystem
	{
	public:
		class FScriptMulticastDelegate                             GetOPFSettingsResult;                                    // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GetVideoURLResult;                                       // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HLV[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		bool IsBroadcasting(int32_t* NumViewers);
		void GetVideoURL(int32_t VideoAppID);
		bool GetOPFStringForApp(int32_t VideoAppID, class FString* OutBuffer);
		void GetOPFSettings(int32_t VideoAppID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
