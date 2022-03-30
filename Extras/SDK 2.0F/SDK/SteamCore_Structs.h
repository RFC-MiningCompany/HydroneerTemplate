#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SteamCore.ESteamResult
	 */
	enum class SteamCore_ESteamResult : uint8_t
	{
		ESteamResult__None                                    = 0,
		ESteamResult__OK                                      = 1,
		ESteamResult__Fail                                    = 2,
		ESteamResult__NoConnection                            = 3,
		ESteamResult__sultNoConnectionRetry                   = 4,
		ESteamResult__InvalidPassword                         = 5,
		ESteamResult__LoggedInElsewhere                       = 6,
		ESteamResult__InvalidProtocolVer                      = 7,
		ESteamResult__InvalidParam                            = 8,
		ESteamResult__FileNotFound                            = 9,
		ESteamResult__Busy                                    = 10,
		ESteamResult__InvalidState                            = 11,
		ESteamResult__InvalidName                             = 12,
		ESteamResult__InvalidEmail                            = 13,
		ESteamResult__DuplicateName                           = 14,
		ESteamResult__AccessDenied                            = 15,
		ESteamResult__Timeout                                 = 16,
		ESteamResult__Banned                                  = 17,
		ESteamResult__AccountNotFound                         = 18,
		ESteamResult__InvalidSteamID                          = 19,
		ESteamResult__ServiceUnavailable                      = 20,
		ESteamResult__NotLoggedOn                             = 21,
		ESteamResult__Pending                                 = 22,
		ESteamResult__EncryptionFailure                       = 23,
		ESteamResult__InsufficientPrivilege                   = 24,
		ESteamResult__LimitExceeded                           = 25,
		ESteamResult__Revoked                                 = 26,
		ESteamResult__Expired                                 = 27,
		ESteamResult__AlreadyRedeemed                         = 28,
		ESteamResult__DuplicateRequest                        = 29,
		ESteamResult__AlreadyOwned                            = 30,
		ESteamResult__IPNotFound                              = 31,
		ESteamResult__PersistFailed                           = 32,
		ESteamResult__LockingFailed                           = 33,
		ESteamResult__LogonSessionReplaced                    = 34,
		ESteamResult__ConnectFailed                           = 35,
		ESteamResult__HandshakeFailed                         = 36,
		ESteamResult__IOFailure                               = 37,
		ESteamResult__RemoteDisconnect                        = 38,
		ESteamResult__ShoppingCartNotFound                    = 39,
		ESteamResult__Blocked                                 = 40,
		ESteamResult__Ignored                                 = 41,
		ESteamResult__NoMatch                                 = 42,
		ESteamResult__AccountDisabled                         = 43,
		ESteamResult__ServiceReadOnly                         = 44,
		ESteamResult__AccountNotFeatured                      = 45,
		ESteamResult__AdministratorOK                         = 46,
		ESteamResult__ContentVersion                          = 47,
		ESteamResult__TryAnotherCM                            = 48,
		ESteamResult__PasswordRequiredToKickSession           = 49,
		ESteamResult__AlreadyLoggedInElsewhere                = 50,
		ESteamResult__Suspended                               = 51,
		ESteamResult__Cancelled                               = 52,
		ESteamResult__DataCorruption                          = 53,
		ESteamResult__DiskFull                                = 54,
		ESteamResult__RemoteCallFailed                        = 55,
		ESteamResult__PasswordUnset                           = 56,
		ESteamResult__ExternalAccountUnlinked                 = 57,
		ESteamResult__PSNTicketInvalid                        = 58,
		ESteamResult__ExternalAccountAlreadyLinked            = 59,
		ESteamResult__RemoteFileConflict                      = 60,
		ESteamResult__IllegalPassword                         = 61,
		ESteamResult__SameAsPreviousValue                     = 62,
		ESteamResult__AccountLogonDenied                      = 63,
		ESteamResult__CannotUseOldPassword                    = 64,
		ESteamResult__InvalidLoginAuthCode                    = 65,
		ESteamResult__AccountLogonDeniedNoMail                = 66,
		ESteamResult__HardwareNotCapableOfIPT                 = 67,
		ESteamResult__IPTInitError                            = 68,
		ESteamResult__ParentalControlRestricted               = 69,
		ESteamResult__FacebookQueryError                      = 70,
		ESteamResult__ExpiredLoginAuthCode                    = 71,
		ESteamResult__IPLoginRestrictionFailed                = 72,
		ESteamResult__AccountLockedDown                       = 73,
		ESteamResult__AccountLogonDeniedVerifiedEmailRequired = 74,
		ESteamResult__NoMatchingURL                           = 75,
		ESteamResult__BadResponse                             = 76,
		ESteamResult__RequirePasswordReEntry                  = 77,
		ESteamResult__ValueOutOfRange                         = 78,
		ESteamResult__UnexpectedError                         = 79,
		ESteamResult__Disabled                                = 80,
		ESteamResult__InvalidCEGSubmission                    = 81,
		ESteamResult__RestrictedDevice                        = 82,
		ESteamResult__RegionLocked                            = 83,
		ESteamResult__RateLimitExceeded                       = 84,
		ESteamResult__AccountLoginDeniedNeedTwoFactor         = 85,
		ESteamResult__ItemDeleted                             = 86,
		ESteamResult__AccountLoginDeniedThrottle              = 87,
		ESteamResult__TwoFactorCodeMismatch                   = 88,
		ESteamResult__TwoFactorActivationCodeMismatch         = 89,
		ESteamResult__AccountAssociatedToMultiplePartners     = 90,
		ESteamResult__NotModified                             = 91,
		ESteamResult__NoMobileDevice                          = 92,
		ESteamResult__TimeNotSynced                           = 93,
		ESteamResult__SmsCodeFailed                           = 94,
		ESteamResult__AccountLimitExceeded                    = 95,
		ESteamResult__AccountActivityLimitExceeded            = 96,
		ESteamResult__PhoneActivityLimitExceeded              = 97,
		ESteamResult__RefundToWallet                          = 98,
		ESteamResult__EmailSendFailure                        = 99,
		ESteamResult__NotSettled                              = 100,
		ESteamResult__NeedCaptcha                             = 101,
		ESteamResult__GSLTDenied                              = 102,
		ESteamResult__GSOwnerDenied                           = 103,
		ESteamResult__InvalidItemType                         = 104,
		ESteamResult__IPBanned                                = 105,
		ESteamResult__GSLTExpired                             = 106,
		ESteamResult__InsufficientFunds                       = 107,
		ESteamResult__TooManyPending                          = 108,
		ESteamResult__NoSiteLicensesFound                     = 109,
		ESteamResult__WGNetworkSendExceeded                   = 110,
		ESteamResult__AccountNotFriends                       = 111,
		ESteamResult__LimitedUserAccount                      = 112,
		ESteamResult__CantRemoveItem                          = 113,
		ESteamResult__ESteamResult_MAX                        = 114
	};

	/**
	 * Enum SteamCore.ESteamMessageType
	 */
	enum class SteamCore_ESteamMessageType : uint8_t
	{
		ESteamMessageType__ENotification         = 0,
		ESteamMessageType__EMessage              = 1,
		ESteamMessageType__EWarning              = 2,
		ESteamMessageType__ESteamMessageType_MAX = 3
	};

	/**
	 * Enum SteamCore.ESteamPersonaChange
	 */
	enum class SteamCore_ESteamPersonaChange : uint8_t
	{
		ESteamPersonaChange__Name                    = 0,
		ESteamPersonaChange__Status                  = 1,
		ESteamPersonaChange__ComeOnline              = 2,
		ESteamPersonaChange__GoneOffline             = 3,
		ESteamPersonaChange__GamePlayed              = 4,
		ESteamPersonaChange__GameServer              = 5,
		ESteamPersonaChange__Avatar                  = 6,
		ESteamPersonaChange__JoinedSource            = 7,
		ESteamPersonaChange__LeftSource              = 8,
		ESteamPersonaChange__RelationshipChanged     = 9,
		ESteamPersonaChange__NameFirstSet            = 10,
		ESteamPersonaChange__FacebookInfo            = 11,
		ESteamPersonaChange__Nickname                = 12,
		ESteamPersonaChange__SteamLevel              = 13,
		ESteamPersonaChange__ESteamPersonaChange_MAX = 14
	};

	/**
	 * Enum SteamCore.ESteamChatRoomEnterResponse
	 */
	enum class SteamCore_ESteamChatRoomEnterResponse : uint8_t
	{
		ESteamChatRoomEnterResponse__None                            = 0,
		ESteamChatRoomEnterResponse__Success                         = 1,
		ESteamChatRoomEnterResponse__DoesntExist                     = 2,
		ESteamChatRoomEnterResponse__NotAllowed                      = 3,
		ESteamChatRoomEnterResponse__Full                            = 4,
		ESteamChatRoomEnterResponse__Error                           = 5,
		ESteamChatRoomEnterResponse__Banned                          = 6,
		ESteamChatRoomEnterResponse__Limited                         = 7,
		ESteamChatRoomEnterResponse__ClanDisabled                    = 8,
		ESteamChatRoomEnterResponse__CommunityBan                    = 9,
		ESteamChatRoomEnterResponse__MemberBlockedYou                = 10,
		ESteamChatRoomEnterResponse__YouBlockedMember                = 11,
		ESteamChatRoomEnterResponse__RatelimitExceeded               = 12,
		ESteamChatRoomEnterResponse__ESteamChatRoomEnterResponse_MAX = 13
	};

	/**
	 * Enum SteamCore.ESteamPlayerAcceptState
	 */
	enum class SteamCore_ESteamPlayerAcceptState : uint8_t
	{
		ESteamPlayerAcceptState__Unknown                     = 0,
		ESteamPlayerAcceptState__PlayerAccepted              = 1,
		ESteamPlayerAcceptState__PlayerDeclined              = 2,
		ESteamPlayerAcceptState__ESteamPlayerAcceptState_MAX = 3
	};

	/**
	 * Enum SteamCore.ESteamAuthSessionResponse
	 */
	enum class SteamCore_ESteamAuthSessionResponse : uint8_t
	{
		ESteamAuthSessionResponse__OK                            = 0,
		ESteamAuthSessionResponse__UserNotConnectedToSteam       = 1,
		ESteamAuthSessionResponse__NoLicenseOrExpired            = 2,
		ESteamAuthSessionResponse__VACBanned                     = 3,
		ESteamAuthSessionResponse__LoggedInElseWhere             = 4,
		ESteamAuthSessionResponse__VACCheckTimedOut              = 5,
		ESteamAuthSessionResponse__AuthTicketCanceled            = 6,
		ESteamAuthSessionResponse__AuthTicketInvalidAlreadyUsed  = 7,
		ESteamAuthSessionResponse__AuthTicketInvalid             = 8,
		ESteamAuthSessionResponse__PublisherIssuedBan            = 9,
		ESteamAuthSessionResponse__ESteamAuthSessionResponse_MAX = 10
	};

	/**
	 * Enum SteamCore.ESteamDenyReason
	 */
	enum class SteamCore_ESteamDenyReason : uint8_t
	{
		ESteamDenyReason__Invalid                 = 0,
		ESteamDenyReason__InvalidVersion          = 1,
		ESteamDenyReason__Generic                 = 2,
		ESteamDenyReason__NotLoggedOn             = 3,
		ESteamDenyReason__NoLicense               = 4,
		ESteamDenyReason__Cheater                 = 5,
		ESteamDenyReason__LoggedInElseWhere       = 6,
		ESteamDenyReason__UnknownText             = 7,
		ESteamDenyReason__IncompatibleAnticheat   = 8,
		ESteamDenyReason__MemoryCorruption        = 9,
		ESteamDenyReason__IncompatibleSoftware    = 10,
		ESteamDenyReason__SteamConnectionLost     = 11,
		ESteamDenyReason__SteamConnectionError    = 12,
		ESteamDenyReason__SteamResponseTimedOut   = 13,
		ESteamDenyReason__SteamValidationStalled  = 14,
		ESteamDenyReason__SteamOwnerLeftGuestUser = 15,
		ESteamDenyReason__ESteamDenyReason_MAX    = 16
	};

	/**
	 * Enum SteamCore.ESteamFavoriteFlags
	 */
	enum class SteamCore_ESteamFavoriteFlags : uint8_t
	{
		ESteamFavoriteFlags__None                    = 0,
		ESteamFavoriteFlags__Favorite                = 1,
		ESteamFavoriteFlags__History                 = 2,
		ESteamFavoriteFlags__ESteamFavoriteFlags_MAX = 3
	};

	/**
	 * Enum SteamCore.ESteamChatEntryType
	 */
	enum class SteamCore_ESteamChatEntryType : uint8_t
	{
		ESteamChatEntryType__Invalid                 = 0,
		ESteamChatEntryType__ChatMsg                 = 1,
		ESteamChatEntryType__Typing                  = 2,
		ESteamChatEntryType__InviteGame              = 3,
		ESteamChatEntryType__Emote                   = 4,
		ESteamChatEntryType__LeftConversation        = 5,
		ESteamChatEntryType__Entered                 = 6,
		ESteamChatEntryType__WasKicked               = 7,
		ESteamChatEntryType__WasBanned               = 8,
		ESteamChatEntryType__Disconnected            = 9,
		ESteamChatEntryType__HistoricalChat          = 10,
		ESteamChatEntryType__LinkBlocked             = 11,
		ESteamChatEntryType__ESteamChatEntryType_MAX = 12
	};

	/**
	 * Enum SteamCore.ESteamChatMemberStateChange
	 */
	enum class SteamCore_ESteamChatMemberStateChange : uint8_t
	{
		ESteamChatMemberStateChange__None                            = 0,
		ESteamChatMemberStateChange__Entered                         = 1,
		ESteamChatMemberStateChange__Left                            = 2,
		ESteamChatMemberStateChange__Disconnected                    = 3,
		ESteamChatMemberStateChange__Kicked                          = 4,
		ESteamChatMemberStateChange__Banned                          = 5,
		ESteamChatMemberStateChange__ESteamChatMemberStateChange_MAX = 6
	};

	/**
	 * Enum SteamCore.ESteamP2PSessionError
	 */
	enum class SteamCore_ESteamP2PSessionError : uint8_t
	{
		ESteamP2PSessionError__None                   = 0,
		ESteamP2PSessionError__NotRunningApp          = 1,
		ESteamP2PSessionError__NoRightsToApp          = 2,
		ESteamP2PSessionError__DestinationNotLoggedIn = 3,
		ESteamP2PSessionError__Timeout                = 4,
		ESteamP2PSessionError__Max                    = 5
	};

	/**
	 * Enum SteamCore.ESteamFailureType
	 */
	enum class SteamCore_ESteamFailureType : uint8_t
	{
		ESteamFailureType__FlushedCallbackQueue  = 0,
		ESteamFailureType__PipeFail              = 1,
		ESteamFailureType__ESteamFailureType_MAX = 2
	};

	/**
	 * Enum SteamCore.ESteamCheckFileSignature
	 */
	enum class SteamCore_ESteamCheckFileSignature : uint8_t
	{
		ESteamCheckFileSignature__InvalidSignature             = 0,
		ESteamCheckFileSignature__ValidSignature               = 1,
		ESteamCheckFileSignature__FileNotFound                 = 2,
		ESteamCheckFileSignature__NoSignaturesFoundForThisApp  = 3,
		ESteamCheckFileSignature__NoSignaturesFoundForThisFile = 4,
		ESteamCheckFileSignature__ESteamCheckFileSignature_MAX = 5
	};

	/**
	 * Enum SteamCore.ESteamSubsystem
	 */
	enum class SteamCore_ESteamSubsystem : uint8_t
	{
		ESteamSubsystem__SteamCore           = 0,
		ESteamSubsystem__AppList             = 1,
		ESteamSubsystem__Apps                = 2,
		ESteamSubsystem__Friends             = 3,
		ESteamSubsystem__GameServer          = 4,
		ESteamSubsystem__GameServerStats     = 5,
		ESteamSubsystem__Inventory           = 6,
		ESteamSubsystem__Input               = 7,
		ESteamSubsystem__Matchmaking         = 8,
		ESteamSubsystem__MatchmakingServers  = 9,
		ESteamSubsystem__Music               = 10,
		ESteamSubsystem__Networking          = 11,
		ESteamSubsystem__NetworkingUtils     = 12,
		ESteamSubsystem__ParentalSettings    = 13,
		ESteamSubsystem__RemoteStorage       = 14,
		ESteamSubsystem__RemotePlay          = 15,
		ESteamSubsystem__Screenshots         = 16,
		ESteamSubsystem__UGC                 = 17,
		ESteamSubsystem__User                = 18,
		ESteamSubsystem__UserStats           = 19,
		ESteamSubsystem__Utils               = 20,
		ESteamSubsystem__Video               = 21,
		ESteamSubsystem__SteamParties        = 22,
		ESteamSubsystem__GameSearch          = 23,
		ESteamSubsystem__ESteamSubsystem_MAX = 24
	};

	/**
	 * Enum SteamCore.ESteamOverlayToStoreFlag
	 */
	enum class SteamCore_ESteamOverlayToStoreFlag : uint8_t
	{
		ESteamOverlayToStoreFlag__None                         = 0,
		ESteamOverlayToStoreFlag__AddToCart                    = 1,
		ESteamOverlayToStoreFlag__AddToCartAndShow             = 2,
		ESteamOverlayToStoreFlag__ESteamOverlayToStoreFlag_MAX = 3
	};

	/**
	 * Enum SteamCore.ESteamUserRestriction
	 */
	enum class SteamCore_ESteamUserRestriction : uint8_t
	{
		ESteamUserRestriction__None                      = 0,
		ESteamUserRestriction__Unknown                   = 1,
		ESteamUserRestriction__AnyChat                   = 2,
		ESteamUserRestriction__VoiceChat                 = 3,
		ESteamUserRestriction__GroupChat                 = 4,
		ESteamUserRestriction__Rating                    = 5,
		ESteamUserRestriction__GameInvites               = 6,
		ESteamUserRestriction__Trading                   = 7,
		ESteamUserRestriction__ESteamUserRestriction_MAX = 8
	};

	/**
	 * Enum SteamCore.ESteamFriendFlags
	 */
	enum class SteamCore_ESteamFriendFlags : uint8_t
	{
		ESteamFriendFlags__None                  = 0,
		ESteamFriendFlags__Blocked               = 1,
		ESteamFriendFlags__FriendshipRequested   = 2,
		ESteamFriendFlags__Immediate             = 3,
		ESteamFriendFlags__ClanMember            = 4,
		ESteamFriendFlags__OnGameServer          = 5,
		ESteamFriendFlags__RequestingFriendship  = 6,
		ESteamFriendFlags__RequestingInfo        = 7,
		ESteamFriendFlags__Ignored               = 8,
		ESteamFriendFlags__IgnoredFriend         = 9,
		ESteamFriendFlags__ChatMember            = 10,
		ESteamFriendFlags__All                   = 11,
		ESteamFriendFlags__ESteamFriendFlags_MAX = 12
	};

	/**
	 * Enum SteamCore.ESteamPersonaState
	 */
	enum class SteamCore_ESteamPersonaState : uint8_t
	{
		ESteamPersonaState__Offline        = 0,
		ESteamPersonaState__Online         = 1,
		ESteamPersonaState__Busy           = 2,
		ESteamPersonaState__Away           = 3,
		ESteamPersonaState__Snooze         = 4,
		ESteamPersonaState__LookingToTrade = 5,
		ESteamPersonaState__LookingToPlay  = 6,
		ESteamPersonaState__Max            = 7
	};

	/**
	 * Enum SteamCore.ESteamFriendRelationship
	 */
	enum class SteamCore_ESteamFriendRelationship : uint8_t
	{
		ESteamFriendRelationship__None                 = 0,
		ESteamFriendRelationship__Blocked              = 1,
		ESteamFriendRelationship__RequestRecipient     = 2,
		ESteamFriendRelationship__Friend               = 3,
		ESteamFriendRelationship__RequestInitiator     = 4,
		ESteamFriendRelationship__Ignored              = 5,
		ESteamFriendRelationship__IgnoredFriend        = 6,
		ESteamFriendRelationship__Suggested_DEPRECATED = 7,
		ESteamFriendRelationship__Max                  = 8
	};

	/**
	 * Enum SteamCore.ESteamActivateGameOverlayToWebPageMode
	 */
	enum class SteamCore_ESteamActivateGameOverlayToWebPageMode : uint8_t
	{
		ESteamActivateGameOverlayToWebPageMode__Default                                    = 0,
		ESteamActivateGameOverlayToWebPageMode__Modal                                      = 1,
		ESteamActivateGameOverlayToWebPageMode__ESteamActivateGameOverlayToWebPageMode_MAX = 2
	};

	/**
	 * Enum SteamCore.ESteamPlayerResult
	 */
	enum class SteamCore_ESteamPlayerResult : uint8_t
	{
		ESteamPlayerResult__Invalid                = 0,
		ESteamPlayerResult__FailedToConnect        = 1,
		ESteamPlayerResult__Abandoned              = 2,
		ESteamPlayerResult__Kicked                 = 3,
		ESteamPlayerResult__Incomplete             = 4,
		ESteamPlayerResult__Completed              = 5,
		ESteamPlayerResult__ESteamPlayerResult_MAX = 6
	};

	/**
	 * Enum SteamCore.ESteamGameSearchErrorCode
	 */
	enum class SteamCore_ESteamGameSearchErrorCode : uint8_t
	{
		ESteamGameSearchErrorCode__Invalid                           = 0,
		ESteamGameSearchErrorCode__OK                                = 1,
		ESteamGameSearchErrorCode__Failed_Search_Already_In_Progress = 2,
		ESteamGameSearchErrorCode__Failed_No_Search_In_Progress      = 3,
		ESteamGameSearchErrorCode__Failed_Not_Lobby_Leader           = 4,
		ESteamGameSearchErrorCode__Failed_No_Host_Available          = 5,
		ESteamGameSearchErrorCode__Failed_Search_Params_Invalid      = 6,
		ESteamGameSearchErrorCode__Failed_Offline                    = 7,
		ESteamGameSearchErrorCode__Failed_NotAuthorized              = 8,
		ESteamGameSearchErrorCode__Failed_Unknown_Error              = 9,
		ESteamGameSearchErrorCode__ESteamGameSearchErrorCode_MAX     = 10
	};

	/**
	 * Enum SteamCore.ESteamCoreInputLEDFlag
	 */
	enum class SteamCore_ESteamCoreInputLEDFlag : uint8_t
	{
		ESteamCoreInputLEDFlag__SetColor                   = 0,
		ESteamCoreInputLEDFlag__RestoreUserDefault         = 1,
		ESteamCoreInputLEDFlag__ESteamCoreInputLEDFlag_MAX = 2
	};

	/**
	 * Enum SteamCore.ESteamCoreInputType
	 */
	enum class SteamCore_ESteamCoreInputType : uint8_t
	{
		ESteamCoreInputType__Unknown                 = 0,
		ESteamCoreInputType__SteamController         = 1,
		ESteamCoreInputType__XBox360Controller       = 2,
		ESteamCoreInputType__XBoxOneController       = 3,
		ESteamCoreInputType__GenericGamepad          = 4,
		ESteamCoreInputType__PS4Controller           = 5,
		ESteamCoreInputType__AppleMFiController      = 6,
		ESteamCoreInputType__AndroidController       = 7,
		ESteamCoreInputType__SwitchJoyConPair        = 8,
		ESteamCoreInputType__SwitchJoyConSingle      = 9,
		ESteamCoreInputType__SwitchProController     = 10,
		ESteamCoreInputType__MobileTouch             = 11,
		ESteamCoreInputType__PS3Controller           = 12,
		ESteamCoreInputType__Count                   = 13,
		ESteamCoreInputType__MaximumPossibleValue    = 14,
		ESteamCoreInputType__ESteamCoreInputType_MAX = 15
	};

	/**
	 * Enum SteamCore.ESteamCoreControllerPad
	 */
	enum class SteamCore_ESteamCoreControllerPad : uint8_t
	{
		ESteamCoreControllerPad__Left                        = 0,
		ESteamCoreControllerPad__Right                       = 1,
		ESteamCoreControllerPad__ESteamCoreControllerPad_MAX = 2
	};

	/**
	 * Enum SteamCore.ESteamCoreXboxOrigin
	 */
	enum class SteamCore_ESteamCoreXboxOrigin : uint8_t
	{
		ESteamCoreXboxOrigin__A                        = 0,
		ESteamCoreXboxOrigin__B                        = 1,
		ESteamCoreXboxOrigin__X                        = 2,
		ESteamCoreXboxOrigin__Y                        = 3,
		ESteamCoreXboxOrigin__LeftBumper               = 4,
		ESteamCoreXboxOrigin__RightBumper              = 5,
		ESteamCoreXboxOrigin__Menu                     = 6,
		ESteamCoreXboxOrigin__View                     = 7,
		ESteamCoreXboxOrigin__LeftTrigger_Pull         = 8,
		ESteamCoreXboxOrigin__LeftTrigger_Click        = 9,
		ESteamCoreXboxOrigin__RightTrigger_Pull        = 10,
		ESteamCoreXboxOrigin__RightTrigger_Click       = 11,
		ESteamCoreXboxOrigin__LeftStick_Move           = 12,
		ESteamCoreXboxOrigin__LeftStick_Click          = 13,
		ESteamCoreXboxOrigin__LeftStick_DPadNorth      = 14,
		ESteamCoreXboxOrigin__LeftStick_DPadSouth      = 15,
		ESteamCoreXboxOrigin__LeftStick_DPadWest       = 16,
		ESteamCoreXboxOrigin__LeftStick_DPadEast       = 17,
		ESteamCoreXboxOrigin__RightStick_Move          = 18,
		ESteamCoreXboxOrigin__RightStick_Click         = 19,
		ESteamCoreXboxOrigin__RightStick_DPadNorth     = 20,
		ESteamCoreXboxOrigin__RightStick_DPadSouth     = 21,
		ESteamCoreXboxOrigin__RightStick_DPadWest      = 22,
		ESteamCoreXboxOrigin__RightStick_DPadEast      = 23,
		ESteamCoreXboxOrigin__DPad_North               = 24,
		ESteamCoreXboxOrigin__DPad_South               = 25,
		ESteamCoreXboxOrigin__DPad_West                = 26,
		ESteamCoreXboxOrigin__DPad_East                = 27,
		ESteamCoreXboxOrigin__Count                    = 28,
		ESteamCoreXboxOrigin__ESteamCoreXboxOrigin_MAX = 29
	};

	/**
	 * Enum SteamCore.ESteamCoreInputActionOrigin
	 */
	enum class SteamCore_ESteamCoreInputActionOrigin : uint8_t
	{
		ESteamCoreInputActionOrigin__None                                = 0,
		ESteamCoreInputActionOrigin__SteamController_A                   = 1,
		ESteamCoreInputActionOrigin__SteamController_B                   = 2,
		ESteamCoreInputActionOrigin__SteamController_X                   = 3,
		ESteamCoreInputActionOrigin__SteamController_Y                   = 4,
		ESteamCoreInputActionOrigin__SteamController_LeftBumper          = 5,
		ESteamCoreInputActionOrigin__SteamController_RightBumper         = 6,
		ESteamCoreInputActionOrigin__SteamController_LeftGrip            = 7,
		ESteamCoreInputActionOrigin__SteamController_RightGrip           = 8,
		ESteamCoreInputActionOrigin__SteamController_Start               = 9,
		ESteamCoreInputActionOrigin__SteamController_Back                = 10,
		ESteamCoreInputActionOrigin__SteamController_LeftPad_Touch       = 11,
		ESteamCoreInputActionOrigin__SteamController_LeftPad_Swipe       = 12,
		ESteamCoreInputActionOrigin__SteamController_LeftPad_Click       = 13,
		ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadNorth   = 14,
		ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadSouth   = 15,
		ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadWest    = 16,
		ESteamCoreInputActionOrigin__SteamController_LeftPad_DPadEast    = 17,
		ESteamCoreInputActionOrigin__SteamController_RightPad_Touch      = 18,
		ESteamCoreInputActionOrigin__SteamController_RightPad_Swipe      = 19,
		ESteamCoreInputActionOrigin__SteamController_RightPad_Click      = 20,
		ESteamCoreInputActionOrigin__SteamController_RightPad_DPadNorth  = 21,
		ESteamCoreInputActionOrigin__SteamController_RightPad_DPadSouth  = 22,
		ESteamCoreInputActionOrigin__SteamController_RightPad_DPadWest   = 23,
		ESteamCoreInputActionOrigin__SteamController_RightPad_DPadEast   = 24,
		ESteamCoreInputActionOrigin__SteamController_LeftTrigger_Pull    = 25,
		ESteamCoreInputActionOrigin__SteamController_LeftTrigger_Click   = 26,
		ESteamCoreInputActionOrigin__SteamController_RightTrigger_Pull   = 27,
		ESteamCoreInputActionOrigin__SteamController_RightTrigger_Click  = 28,
		ESteamCoreInputActionOrigin__SteamController_LeftStick_Move      = 29,
		ESteamCoreInputActionOrigin__SteamController_LeftStick_Click     = 30,
		ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadNorth = 31,
		ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadSouth = 32,
		ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadWest  = 33,
		ESteamCoreInputActionOrigin__SteamController_LeftStick_DPadEast  = 34,
		ESteamCoreInputActionOrigin__SteamController_Gyro_Move           = 35,
		ESteamCoreInputActionOrigin__SteamController_Gyro_Pitch          = 36,
		ESteamCoreInputActionOrigin__SteamController_Gyro_Yaw            = 37,
		ESteamCoreInputActionOrigin__SteamController_Gyro_Roll           = 38,
		ESteamCoreInputActionOrigin__SteamController_Reserved0           = 39,
		ESteamCoreInputActionOrigin__SteamController_Reserved1           = 40,
		ESteamCoreInputActionOrigin__SteamController_Reserved2           = 41,
		ESteamCoreInputActionOrigin__SteamController_Reserved3           = 42,
		ESteamCoreInputActionOrigin__SteamController_Reserved4           = 43,
		ESteamCoreInputActionOrigin__SteamController_Reserved5           = 44,
		ESteamCoreInputActionOrigin__SteamController_Reserved6           = 45,
		ESteamCoreInputActionOrigin__SteamController_Reserved7           = 46,
		ESteamCoreInputActionOrigin__SteamController_Reserved8           = 47,
		ESteamCoreInputActionOrigin__SteamController_Reserved9           = 48,
		ESteamCoreInputActionOrigin__SteamController_Reserved10          = 49,
		ESteamCoreInputActionOrigin__PS4_X                               = 50,
		ESteamCoreInputActionOrigin__PS4_Circle                          = 51,
		ESteamCoreInputActionOrigin__PS4_Triangle                        = 52,
		ESteamCoreInputActionOrigin__PS4_Square                          = 53,
		ESteamCoreInputActionOrigin__PS4_LeftBumper                      = 54,
		ESteamCoreInputActionOrigin__PS4_RightBumper                     = 55,
		ESteamCoreInputActionOrigin__PS4_Options                         = 56,
		ESteamCoreInputActionOrigin__PS4_Share                           = 57,
		ESteamCoreInputActionOrigin__PS4_LeftPad_Touch                   = 58,
		ESteamCoreInputActionOrigin__PS4_LeftPad_Swipe                   = 59,
		ESteamCoreInputActionOrigin__PS4_LeftPad_Click                   = 60,
		ESteamCoreInputActionOrigin__PS4_LeftPad_DPadNorth               = 61,
		ESteamCoreInputActionOrigin__PS4_LeftPad_DPadSouth               = 62,
		ESteamCoreInputActionOrigin__PS4_LeftPad_DPadWest                = 63,
		ESteamCoreInputActionOrigin__PS4_LeftPad_DPadEast                = 64,
		ESteamCoreInputActionOrigin__PS4_RightPad_Touch                  = 65,
		ESteamCoreInputActionOrigin__PS4_RightPad_Swipe                  = 66,
		ESteamCoreInputActionOrigin__PS4_RightPad_Click                  = 67,
		ESteamCoreInputActionOrigin__PS4_RightPad_DPadNorth              = 68,
		ESteamCoreInputActionOrigin__PS4_RightPad_DPadSouth              = 69,
		ESteamCoreInputActionOrigin__PS4_RightPad_DPadWest               = 70,
		ESteamCoreInputActionOrigin__PS4_RightPad_DPadEast               = 71,
		ESteamCoreInputActionOrigin__PS4_CenterPad_Touch                 = 72,
		ESteamCoreInputActionOrigin__PS4_CenterPad_Swipe                 = 73,
		ESteamCoreInputActionOrigin__PS4_CenterPad_Click                 = 74,
		ESteamCoreInputActionOrigin__PS4_CenterPad_DPadNorth             = 75,
		ESteamCoreInputActionOrigin__PS4_CenterPad_DPadSouth             = 76,
		ESteamCoreInputActionOrigin__PS4_CenterPad_DPadWest              = 77,
		ESteamCoreInputActionOrigin__PS4_CenterPad_DPadEast              = 78,
		ESteamCoreInputActionOrigin__PS4_LeftTrigger_Pull                = 79,
		ESteamCoreInputActionOrigin__PS4_LeftTrigger_Click               = 80,
		ESteamCoreInputActionOrigin__PS4_RightTrigger_Pull               = 81,
		ESteamCoreInputActionOrigin__PS4_RightTrigger_Click              = 82,
		ESteamCoreInputActionOrigin__PS4_LeftStick_Move                  = 83,
		ESteamCoreInputActionOrigin__PS4_LeftStick_Click                 = 84,
		ESteamCoreInputActionOrigin__PS4_LeftStick_DPadNorth             = 85,
		ESteamCoreInputActionOrigin__PS4_LeftStick_DPadSouth             = 86,
		ESteamCoreInputActionOrigin__PS4_LeftStick_DPadWest              = 87,
		ESteamCoreInputActionOrigin__PS4_LeftStick_DPadEast              = 88,
		ESteamCoreInputActionOrigin__PS4_RightStick_Move                 = 89,
		ESteamCoreInputActionOrigin__PS4_RightStick_Click                = 90,
		ESteamCoreInputActionOrigin__PS4_RightStick_DPadNorth            = 91,
		ESteamCoreInputActionOrigin__PS4_RightStick_DPadSouth            = 92,
		ESteamCoreInputActionOrigin__PS4_RightStick_DPadWest             = 93,
		ESteamCoreInputActionOrigin__PS4_RightStick_DPadEast             = 94,
		ESteamCoreInputActionOrigin__PS4_DPad_North                      = 95,
		ESteamCoreInputActionOrigin__PS4_DPad_South                      = 96,
		ESteamCoreInputActionOrigin__PS4_DPad_West                       = 97,
		ESteamCoreInputActionOrigin__PS4_DPad_East                       = 98,
		ESteamCoreInputActionOrigin__PS4_Gyro_Move                       = 99,
		ESteamCoreInputActionOrigin__PS4_Gyro_Pitch                      = 100,
		ESteamCoreInputActionOrigin__PS4_Gyro_Yaw                        = 101,
		ESteamCoreInputActionOrigin__PS4_Gyro_Roll                       = 102,
		ESteamCoreInputActionOrigin__PS4_DPad_Move                       = 103,
		ESteamCoreInputActionOrigin__PS4_Reserved1                       = 104,
		ESteamCoreInputActionOrigin__PS4_Reserved2                       = 105,
		ESteamCoreInputActionOrigin__PS4_Reserved3                       = 106,
		ESteamCoreInputActionOrigin__PS4_Reserved4                       = 107,
		ESteamCoreInputActionOrigin__PS4_Reserved5                       = 108,
		ESteamCoreInputActionOrigin__PS4_Reserved6                       = 109,
		ESteamCoreInputActionOrigin__PS4_Reserved7                       = 110,
		ESteamCoreInputActionOrigin__PS4_Reserved8                       = 111,
		ESteamCoreInputActionOrigin__PS4_Reserved9                       = 112,
		ESteamCoreInputActionOrigin__PS4_Reserved10                      = 113,
		ESteamCoreInputActionOrigin__XBoxOne_A                           = 114,
		ESteamCoreInputActionOrigin__XBoxOne_B                           = 115,
		ESteamCoreInputActionOrigin__XBoxOne_X                           = 116,
		ESteamCoreInputActionOrigin__XBoxOne_Y                           = 117,
		ESteamCoreInputActionOrigin__XBoxOne_LeftBumper                  = 118,
		ESteamCoreInputActionOrigin__XBoxOne_RightBumper                 = 119,
		ESteamCoreInputActionOrigin__XBoxOne_Menu                        = 120,
		ESteamCoreInputActionOrigin__XBoxOne_View                        = 121,
		ESteamCoreInputActionOrigin__XBoxOne_LeftTrigger_Pull            = 122,
		ESteamCoreInputActionOrigin__XBoxOne_LeftTrigger_Click           = 123,
		ESteamCoreInputActionOrigin__XBoxOne_RightTrigger_Pull           = 124,
		ESteamCoreInputActionOrigin__XBoxOne_RightTrigger_Click          = 125,
		ESteamCoreInputActionOrigin__XBoxOne_LeftStick_Move              = 126,
		ESteamCoreInputActionOrigin__XBoxOne_LeftStick_Click             = 127,
		ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadNorth         = 128,
		ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadSouth         = 129,
		ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadWest          = 130,
		ESteamCoreInputActionOrigin__XBoxOne_LeftStick_DPadEast          = 131,
		ESteamCoreInputActionOrigin__XBoxOne_RightStick_Move             = 132,
		ESteamCoreInputActionOrigin__XBoxOne_RightStick_Click            = 133,
		ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadNorth        = 134,
		ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadSouth        = 135,
		ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadWest         = 136,
		ESteamCoreInputActionOrigin__XBoxOne_RightStick_DPadEast         = 137,
		ESteamCoreInputActionOrigin__XBoxOne_DPad_North                  = 138,
		ESteamCoreInputActionOrigin__XBoxOne_DPad_South                  = 139,
		ESteamCoreInputActionOrigin__XBoxOne_DPad_West                   = 140,
		ESteamCoreInputActionOrigin__XBoxOne_DPad_East                   = 141,
		ESteamCoreInputActionOrigin__XBoxOne_DPad_Move                   = 142,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved1                   = 143,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved2                   = 144,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved3                   = 145,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved4                   = 146,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved5                   = 147,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved6                   = 148,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved7                   = 149,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved8                   = 150,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved9                   = 151,
		ESteamCoreInputActionOrigin__XBoxOne_Reserved10                  = 152,
		ESteamCoreInputActionOrigin__XBox360_A                           = 153,
		ESteamCoreInputActionOrigin__XBox360_B                           = 154,
		ESteamCoreInputActionOrigin__XBox360_X                           = 155,
		ESteamCoreInputActionOrigin__XBox360_Y                           = 156,
		ESteamCoreInputActionOrigin__XBox360_LeftBumper                  = 157,
		ESteamCoreInputActionOrigin__XBox360_RightBumper                 = 158,
		ESteamCoreInputActionOrigin__XBox360_Start                       = 159,
		ESteamCoreInputActionOrigin__XBox360_Back                        = 160,
		ESteamCoreInputActionOrigin__XBox360_LeftTrigger_Pull            = 161,
		ESteamCoreInputActionOrigin__XBox360_LeftTrigger_Click           = 162,
		ESteamCoreInputActionOrigin__XBox360_RightTrigger_Pull           = 163,
		ESteamCoreInputActionOrigin__XBox360_RightTrigger_Click          = 164,
		ESteamCoreInputActionOrigin__XBox360_LeftStick_Move              = 165,
		ESteamCoreInputActionOrigin__XBox360_LeftStick_Click             = 166,
		ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadNorth         = 167,
		ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadSouth         = 168,
		ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadWest          = 169,
		ESteamCoreInputActionOrigin__XBox360_LeftStick_DPadEast          = 170,
		ESteamCoreInputActionOrigin__XBox360_RightStick_Move             = 171,
		ESteamCoreInputActionOrigin__XBox360_RightStick_Click            = 172,
		ESteamCoreInputActionOrigin__XBox360_RightStick_DPadNorth        = 173,
		ESteamCoreInputActionOrigin__XBox360_RightStick_DPadSouth        = 174,
		ESteamCoreInputActionOrigin__XBox360_RightStick_DPadWest         = 175,
		ESteamCoreInputActionOrigin__XBox360_RightStick_DPadEast         = 176,
		ESteamCoreInputActionOrigin__XBox360_DPad_North                  = 177,
		ESteamCoreInputActionOrigin__XBox360_DPad_South                  = 178,
		ESteamCoreInputActionOrigin__XBox360_DPad_West                   = 179,
		ESteamCoreInputActionOrigin__XBox360_DPad_East                   = 180,
		ESteamCoreInputActionOrigin__XBox360_DPad_Move                   = 181,
		ESteamCoreInputActionOrigin__XBox360_Reserved1                   = 182,
		ESteamCoreInputActionOrigin__XBox360_Reserved2                   = 183,
		ESteamCoreInputActionOrigin__XBox360_Reserved3                   = 184,
		ESteamCoreInputActionOrigin__XBox360_Reserved4                   = 185,
		ESteamCoreInputActionOrigin__XBox360_Reserved5                   = 186,
		ESteamCoreInputActionOrigin__XBox360_Reserved6                   = 187,
		ESteamCoreInputActionOrigin__XBox360_Reserved7                   = 188,
		ESteamCoreInputActionOrigin__XBox360_Reserved8                   = 189,
		ESteamCoreInputActionOrigin__XBox360_Reserved9                   = 190,
		ESteamCoreInputActionOrigin__XBox360_Reserved10                  = 191,
		ESteamCoreInputActionOrigin__Switch_A                            = 192,
		ESteamCoreInputActionOrigin__Switch_B                            = 193,
		ESteamCoreInputActionOrigin__Switch_X                            = 194,
		ESteamCoreInputActionOrigin__Switch_Y                            = 195,
		ESteamCoreInputActionOrigin__Switch_LeftBumper                   = 196,
		ESteamCoreInputActionOrigin__Switch_RightBumper                  = 197,
		ESteamCoreInputActionOrigin__Switch_Plus                         = 198,
		ESteamCoreInputActionOrigin__Switch_Minus                        = 199,
		ESteamCoreInputActionOrigin__Switch_Capture                      = 200,
		ESteamCoreInputActionOrigin__Switch_LeftTrigger_Pull             = 201,
		ESteamCoreInputActionOrigin__Switch_LeftTrigger_Click            = 202,
		ESteamCoreInputActionOrigin__Switch_RightTrigger_Pull            = 203,
		ESteamCoreInputActionOrigin__Switch_RightTrigger_Click           = 204,
		ESteamCoreInputActionOrigin__Switch_LeftStick_Move               = 205,
		ESteamCoreInputActionOrigin__Switch_LeftStick_Click              = 206,
		ESteamCoreInputActionOrigin__Switch_LeftStick_DPadNorth          = 207,
		ESteamCoreInputActionOrigin__Switch_LeftStick_DPadSouth          = 208,
		ESteamCoreInputActionOrigin__Switch_LeftStick_DPadWest           = 209,
		ESteamCoreInputActionOrigin__Switch_LeftStick_DPadEast           = 210,
		ESteamCoreInputActionOrigin__Switch_RightStick_Move              = 211,
		ESteamCoreInputActionOrigin__Switch_RightStick_Click             = 212,
		ESteamCoreInputActionOrigin__Switch_RightStick_DPadNorth         = 213,
		ESteamCoreInputActionOrigin__Switch_RightStick_DPadSouth         = 214,
		ESteamCoreInputActionOrigin__Switch_RightStick_DPadWest          = 215,
		ESteamCoreInputActionOrigin__Switch_RightStick_DPadEast          = 216,
		ESteamCoreInputActionOrigin__Switch_DPad_North                   = 217,
		ESteamCoreInputActionOrigin__Switch_DPad_South                   = 218,
		ESteamCoreInputActionOrigin__Switch_DPad_West                    = 219,
		ESteamCoreInputActionOrigin__Switch_DPad_East                    = 220,
		ESteamCoreInputActionOrigin__Switch_ProGyro_Move                 = 221,
		ESteamCoreInputActionOrigin__Switch_ProGyro_Pitch                = 222,
		ESteamCoreInputActionOrigin__Switch_ProGyro_Yaw                  = 223,
		ESteamCoreInputActionOrigin__Switch_ProGyro_Roll                 = 224,
		ESteamCoreInputActionOrigin__Switch_DPad_Move                    = 225,
		ESteamCoreInputActionOrigin__Switch_Reserved1                    = 226,
		ESteamCoreInputActionOrigin__Switch_Reserved2                    = 227,
		ESteamCoreInputActionOrigin__Switch_Reserved3                    = 228,
		ESteamCoreInputActionOrigin__Switch_Reserved4                    = 229,
		ESteamCoreInputActionOrigin__Switch_Reserved5                    = 230,
		ESteamCoreInputActionOrigin__Switch_Reserved6                    = 231,
		ESteamCoreInputActionOrigin__Switch_Reserved7                    = 232,
		ESteamCoreInputActionOrigin__Switch_Reserved8                    = 233,
		ESteamCoreInputActionOrigin__Switch_Reserved9                    = 234,
		ESteamCoreInputActionOrigin__Switch_Reserved10                   = 235,
		ESteamCoreInputActionOrigin__Switch_RightGyro_Move               = 236,
		ESteamCoreInputActionOrigin__Switch_RightGyro_Pitch              = 237,
		ESteamCoreInputActionOrigin__Switch_RightGyro_Yaw                = 238,
		ESteamCoreInputActionOrigin__Switch_RightGyro_Roll               = 239,
		ESteamCoreInputActionOrigin__Switch_LeftGyro_Move                = 240,
		ESteamCoreInputActionOrigin__Switch_LeftGyro_Pitch               = 241,
		ESteamCoreInputActionOrigin__Switch_LeftGyro_Yaw                 = 242,
		ESteamCoreInputActionOrigin__Switch_LeftGyro_Roll                = 243,
		ESteamCoreInputActionOrigin__Switch_LeftGrip_Lower               = 244,
		ESteamCoreInputActionOrigin__Switch_LeftGrip_Upper               = 245,
		ESteamCoreInputActionOrigin__Switch_RightGrip_Lower              = 246,
		ESteamCoreInputActionOrigin__Switch_RightGrip_Upper              = 247,
		ESteamCoreInputActionOrigin__Switch_Reserved11                   = 248,
		ESteamCoreInputActionOrigin__Switch_Reserved12                   = 249,
		ESteamCoreInputActionOrigin__Switch_Reserved13                   = 250,
		ESteamCoreInputActionOrigin__Switch_Reserved14                   = 251,
		ESteamCoreInputActionOrigin__Switch_Reserved15                   = 252,
		ESteamCoreInputActionOrigin__Switch_Reserved16                   = 253,
		ESteamCoreInputActionOrigin__Switch_Reserved17                   = 254,
		ESteamCoreInputActionOrigin__Switch_Reserved18                   = 255,
		ESteamCoreInputActionOrigin__ESteamCoreInputActionOrigin_MAX     = 256
	};

	/**
	 * Enum SteamCore.ESteamCoreInputSourceMode
	 */
	enum class SteamCore_ESteamCoreInputSourceMode : uint8_t
	{
		ESteamCoreInputSourceMode__None                          = 0,
		ESteamCoreInputSourceMode__Dpad                          = 1,
		ESteamCoreInputSourceMode__Buttons                       = 2,
		ESteamCoreInputSourceMode__FourButtons                   = 3,
		ESteamCoreInputSourceMode__AbsoluteMouse                 = 4,
		ESteamCoreInputSourceMode__RelativeMouse                 = 5,
		ESteamCoreInputSourceMode__JoystickMove                  = 6,
		ESteamCoreInputSourceMode__JoystickMouse                 = 7,
		ESteamCoreInputSourceMode__JoystickCamera                = 8,
		ESteamCoreInputSourceMode__ScrollWheel                   = 9,
		ESteamCoreInputSourceMode__Trigger                       = 10,
		ESteamCoreInputSourceMode__TouchMenu                     = 11,
		ESteamCoreInputSourceMode__MouseJoystick                 = 12,
		ESteamCoreInputSourceMode__MouseRegion                   = 13,
		ESteamCoreInputSourceMode__RadialMenu                    = 14,
		ESteamCoreInputSourceMode__SingleButton                  = 15,
		ESteamCoreInputSourceMode__Switches                      = 16,
		ESteamCoreInputSourceMode__ESteamCoreInputSourceMode_MAX = 17
	};

	/**
	 * Enum SteamCore.ESteamCoreInputSource
	 */
	enum class SteamCore_ESteamCoreInputSource : uint8_t
	{
		ESteamCoreInputSource__None                      = 0,
		ESteamCoreInputSource__LeftTrackpad              = 1,
		ESteamCoreInputSource__RightTrackpad             = 2,
		ESteamCoreInputSource__Joystick                  = 3,
		ESteamCoreInputSource__ABXY                      = 4,
		ESteamCoreInputSource__Switch                    = 5,
		ESteamCoreInputSource__LeftTrigger               = 6,
		ESteamCoreInputSource__RightTrigger              = 7,
		ESteamCoreInputSource__LeftBumper                = 8,
		ESteamCoreInputSource__RightBumper               = 9,
		ESteamCoreInputSource__Gyro                      = 10,
		ESteamCoreInputSource__CenterTrackpad            = 11,
		ESteamCoreInputSource__RightJoystick             = 12,
		ESteamCoreInputSource__DPad                      = 13,
		ESteamCoreInputSource__Key                       = 14,
		ESteamCoreInputSource__Mouse                     = 15,
		ESteamCoreInputSource__LeftGyro                  = 16,
		ESteamCoreInputSource__Count                     = 17,
		ESteamCoreInputSource__ESteamCoreInputSource_MAX = 18
	};

	/**
	 * Enum SteamCore.ESteamCoreItemFlags
	 */
	enum class SteamCore_ESteamCoreItemFlags : uint8_t
	{
		ENoTrade                = 0,
		ERemoved                = 1,
		EConsumed               = 2,
		ESteamCoreItemFlags_MAX = 3
	};

	/**
	 * Enum SteamCore.ESteamLobbyDistanceFilter
	 */
	enum class SteamCore_ESteamLobbyDistanceFilter : uint8_t
	{
		ESteamLobbyDistanceFilter__Close                         = 0,
		ESteamLobbyDistanceFilter__Default                       = 1,
		ESteamLobbyDistanceFilter__Far                           = 2,
		ESteamLobbyDistanceFilter__Worldwide                     = 3,
		ESteamLobbyDistanceFilter__ESteamLobbyDistanceFilter_MAX = 4
	};

	/**
	 * Enum SteamCore.ESteamLobbyComparison
	 */
	enum class SteamCore_ESteamLobbyComparison : uint8_t
	{
		ESteamLobbyComparison__EqualToOrLessThan         = 0,
		ESteamLobbyComparison__LessThan                  = 1,
		ESteamLobbyComparison__Equal                     = 2,
		ESteamLobbyComparison__GreaterThan               = 3,
		ESteamLobbyComparison__EqualToOrGreaterThan      = 4,
		ESteamLobbyComparison__NotEqual                  = 5,
		ESteamLobbyComparison__ESteamLobbyComparison_MAX = 6
	};

	/**
	 * Enum SteamCore.ESteamLobbyType
	 */
	enum class SteamCore_ESteamLobbyType : uint8_t
	{
		ESteamLobbyType__Private             = 0,
		ESteamLobbyType__FriendsOnly         = 1,
		ESteamLobbyType__Public              = 2,
		ESteamLobbyType__Invisible           = 3,
		ESteamLobbyType__ESteamLobbyType_MAX = 4
	};

	/**
	 * Enum SteamCore.ESteamSessionFindType
	 */
	enum class SteamCore_ESteamSessionFindType : uint8_t
	{
		ESteamSessionFindType__Listen                    = 0,
		ESteamSessionFindType__Dedicated                 = 1,
		ESteamSessionFindType__ESteamSessionFindType_MAX = 2
	};

	/**
	 * Enum SteamCore.ESteamAudioPlaybackStatus
	 */
	enum class SteamCore_ESteamAudioPlaybackStatus : uint8_t
	{
		ESteamAudioPlaybackStatus__Undefined                     = 0,
		ESteamAudioPlaybackStatus__Playing                       = 1,
		ESteamAudioPlaybackStatus__Paused                        = 2,
		ESteamAudioPlaybackStatus__Idle                          = 3,
		ESteamAudioPlaybackStatus__ESteamAudioPlaybackStatus_MAX = 4
	};

	/**
	 * Enum SteamCore.ESteamP2PSend
	 */
	enum class SteamCore_ESteamP2PSend : uint8_t
	{
		ESteamP2PSend__Unreliable            = 0,
		ESteamP2PSend__UnreliableNoDelay     = 1,
		ESteamP2PSend__Reliable              = 2,
		ESteamP2PSend__ReliableWithBuffering = 3,
		ESteamP2PSend__ESteamP2PSend_MAX     = 4
	};

	/**
	 * Enum SteamCore.ESteamParentalFeature
	 */
	enum class SteamCore_ESteamParentalFeature : uint8_t
	{
		ESteamParentalFeature__Invalid       = 0,
		ESteamParentalFeature__Store         = 1,
		ESteamParentalFeature__Community     = 2,
		ESteamParentalFeature__Profile       = 3,
		ESteamParentalFeature__Friends       = 4,
		ESteamParentalFeature__News          = 5,
		ESteamParentalFeature__Trading       = 6,
		ESteamParentalFeature__Settings      = 7,
		ESteamParentalFeature__Console       = 8,
		ESteamParentalFeature__Browser       = 9,
		ESteamParentalFeature__ParentalSetup = 10,
		ESteamParentalFeature__Library       = 11,
		ESteamParentalFeature__Test          = 12,
		ESteamParentalFeature__Max           = 13
	};

	/**
	 * Enum SteamCore.ESteamPartiesBeaconLocationData
	 */
	enum class SteamCore_ESteamPartiesBeaconLocationData : uint8_t
	{
		ESteamPartiesBeaconLocationData__Invalid                             = 0,
		ESteamPartiesBeaconLocationData__Name                                = 1,
		ESteamPartiesBeaconLocationData__IconURLSmall                        = 2,
		ESteamPartiesBeaconLocationData__IconURLMedium                       = 3,
		ESteamPartiesBeaconLocationData__IconURLLarge                        = 4,
		ESteamPartiesBeaconLocationData__ESteamPartiesBeaconLocationData_MAX = 5
	};

	/**
	 * Enum SteamCore.ESteamPartiesBeaconLocationType
	 */
	enum class SteamCore_ESteamPartiesBeaconLocationType : uint8_t
	{
		ESteamPartiesBeaconLocationType__Invalid   = 0,
		ESteamPartiesBeaconLocationType__ChatGroup = 1,
		ESteamPartiesBeaconLocationType__Max       = 2
	};

	/**
	 * Enum SteamCore.ESteamCoreDeviceFormFactor
	 */
	enum class SteamCore_ESteamCoreDeviceFormFactor : uint8_t
	{
		ESteamCoreDeviceFormFactor__Unknown                        = 0,
		ESteamCoreDeviceFormFactor__Phone                          = 1,
		ESteamCoreDeviceFormFactor__Tablet                         = 2,
		ESteamCoreDeviceFormFactor__Computer                       = 3,
		ESteamCoreDeviceFormFactor__TV                             = 4,
		ESteamCoreDeviceFormFactor__ESteamCoreDeviceFormFactor_MAX = 5
	};

	/**
	 * Enum SteamCore.ESteamUGCReadAction
	 */
	enum class SteamCore_ESteamUGCReadAction : uint8_t
	{
		ESteamUGCReadAction__k_EUGCRead_ContinueReadingUntilFinished = 0,
		ESteamUGCReadAction__k_EUGCRead_ContinueReading              = 1,
		ESteamUGCReadAction__k_EUGCRead_Close                        = 2,
		ESteamUGCReadAction__k_EUGCRead_MAX                          = 3
	};

	/**
	 * Enum SteamCore.ESteamRemoteStoragePlatform
	 */
	enum class SteamCore_ESteamRemoteStoragePlatform : uint8_t
	{
		ESteamRemoteStoragePlatform__None                            = 0,
		ESteamRemoteStoragePlatform__Windows                         = 1,
		ESteamRemoteStoragePlatform__OSX                             = 2,
		ESteamRemoteStoragePlatform__PS3                             = 3,
		ESteamRemoteStoragePlatform__Linux                           = 4,
		ESteamRemoteStoragePlatform__Reserved2                       = 5,
		ESteamRemoteStoragePlatform__All                             = 6,
		ESteamRemoteStoragePlatform__ESteamRemoteStoragePlatform_MAX = 7
	};

	/**
	 * Enum SteamCore.ESteamVRScreenshotType
	 */
	enum class SteamCore_ESteamVRScreenshotType : uint8_t
	{
		ESteamVRScreenshotType__None                       = 0,
		ESteamVRScreenshotType__Mono                       = 1,
		ESteamVRScreenshotType__Stereo                     = 2,
		ESteamVRScreenshotType__MonoCubemap                = 3,
		ESteamVRScreenshotType__MonoPanorama               = 4,
		ESteamVRScreenshotType__StereoPanorama             = 5,
		ESteamVRScreenshotType__ESteamVRScreenshotType_MAX = 6
	};

	/**
	 * Enum SteamCore.ESteamAccountType
	 */
	enum class SteamCore_ESteamAccountType : uint8_t
	{
		ESteamAccountType__Invalid        = 0,
		ESteamAccountType__Individual     = 1,
		ESteamAccountType__Multiseat      = 2,
		ESteamAccountType__GameServer     = 3,
		ESteamAccountType__AnonGameServer = 4,
		ESteamAccountType__Pending        = 5,
		ESteamAccountType__ContentServer  = 6,
		ESteamAccountType__Clan           = 7,
		ESteamAccountType__Chat           = 8,
		ESteamAccountType__ConsoleUser    = 9,
		ESteamAccountType__AnonUser       = 10,
		ESteamAccountType__Max            = 11
	};

	/**
	 * Enum SteamCore.ESteamBeginAuthSessionResult
	 */
	enum class SteamCore_ESteamBeginAuthSessionResult : uint8_t
	{
		ESteamBeginAuthSessionResult__OK                               = 0,
		ESteamBeginAuthSessionResult__InvalidTicket                    = 1,
		ESteamBeginAuthSessionResult__DuplicateRequest                 = 2,
		ESteamBeginAuthSessionResult__InvalidVersion                   = 3,
		ESteamBeginAuthSessionResult__GameMismatch                     = 4,
		ESteamBeginAuthSessionResult__ExpiredTicket                    = 5,
		ESteamBeginAuthSessionResult__ESteamBeginAuthSessionResult_MAX = 6
	};

	/**
	 * Enum SteamCore.ESteamUserHasLicenseForAppResult
	 */
	enum class SteamCore_ESteamUserHasLicenseForAppResult : uint8_t
	{
		ESteamUserHasLicenseForAppResult__HasLicense                           = 0,
		ESteamUserHasLicenseForAppResult__DoesNotHaveLicense                   = 1,
		ESteamUserHasLicenseForAppResult__NoAuth                               = 2,
		ESteamUserHasLicenseForAppResult__ESteamUserHasLicenseForAppResult_MAX = 3
	};

	/**
	 * Enum SteamCore.EOnlineComparison
	 */
	enum class SteamCore_EOnlineComparison : uint8_t
	{
		EOnlineComparison__Equals                = 0,
		EOnlineComparison__NotEquals             = 1,
		EOnlineComparison__GreaterThan           = 2,
		EOnlineComparison__GreaterThanEquals     = 3,
		EOnlineComparison__LessThan              = 4,
		EOnlineComparison__LessThanEquals        = 5,
		EOnlineComparison__EOnlineComparison_MAX = 6
	};

	/**
	 * Enum SteamCore.ESteamComparisonOp
	 */
	enum class SteamCore_ESteamComparisonOp : uint8_t
	{
		ESteamComparisonOp__Equals                 = 0,
		ESteamComparisonOp__NotEquals              = 1,
		ESteamComparisonOp__GreaterThan            = 2,
		ESteamComparisonOp__GreaterThanEquals      = 3,
		ESteamComparisonOp__LessThan               = 4,
		ESteamComparisonOp__LessThanEquals         = 5,
		ESteamComparisonOp__Near                   = 6,
		ESteamComparisonOp__In                     = 7,
		ESteamComparisonOp__NotIn                  = 8,
		ESteamComparisonOp__ESteamComparisonOp_MAX = 9
	};

	/**
	 * Enum SteamCore.ESteamRemoteStoragePublishedFileVisibility
	 */
	enum class SteamCore_ESteamRemoteStoragePublishedFileVisibility : uint8_t
	{
		ESteamRemoteStoragePublishedFileVisibility__Public                                         = 0,
		ESteamRemoteStoragePublishedFileVisibility__FriendsOnly                                    = 1,
		ESteamRemoteStoragePublishedFileVisibility__Private                                        = 2,
		ESteamRemoteStoragePublishedFileVisibility__ESteamRemoteStoragePublishedFileVisibility_MAX = 3
	};

	/**
	 * Enum SteamCore.ESteamWorkshopFileType
	 */
	enum class SteamCore_ESteamWorkshopFileType : uint8_t
	{
		ESteamWorkshopFileType__First                  = 0,
		ESteamWorkshopFileType__Community              = 1,
		ESteamWorkshopFileType__Microtransaction       = 2,
		ESteamWorkshopFileType__Collection             = 3,
		ESteamWorkshopFileType__Art                    = 4,
		ESteamWorkshopFileType__Video                  = 5,
		ESteamWorkshopFileType__Screenshot             = 6,
		ESteamWorkshopFileType__Game                   = 7,
		ESteamWorkshopFileType__Software               = 8,
		ESteamWorkshopFileType__Concept                = 9,
		ESteamWorkshopFileType__WebGuide               = 10,
		ESteamWorkshopFileType__IntegratedGuide        = 11,
		ESteamWorkshopFileType__Merch                  = 12,
		ESteamWorkshopFileType__ControllerBinding      = 13,
		ESteamWorkshopFileType__SteamworksAccessInvite = 14,
		ESteamWorkshopFileType__SteamVideo             = 15,
		ESteamWorkshopFileType__GameManagedItem        = 16,
		ESteamWorkshopFileType__Max                    = 17
	};

	/**
	 * Enum SteamCore.ESteamItemPreviewType
	 */
	enum class SteamCore_ESteamItemPreviewType : uint8_t
	{
		ESteamItemPreviewType__Image                          = 0,
		ESteamItemPreviewType__YouTubeVideo                   = 1,
		ESteamItemPreviewType__Sketchfab                      = 2,
		ESteamItemPreviewType__EnvironmentMap_HorizontalCross = 3,
		ESteamItemPreviewType__EnvironmentMap_LatLong         = 4,
		ESteamItemPreviewType__ReservedMax                    = 5,
		ESteamItemPreviewType__ESteamItemPreviewType_MAX      = 6
	};

	/**
	 * Enum SteamCore.ESteamItemStatistic
	 */
	enum class SteamCore_ESteamItemStatistic : uint8_t
	{
		ESteamItemStatistic__NumSubscriptions                    = 0,
		ESteamItemStatistic__NumFavorites                        = 1,
		ESteamItemStatistic__NumFollowers                        = 2,
		ESteamItemStatistic__NumUniqueSubscriptions              = 3,
		ESteamItemStatistic__NumUniqueFavorites                  = 4,
		ESteamItemStatistic__NumUniqueFollowers                  = 5,
		ESteamItemStatistic__NumUniqueWebsiteViews               = 6,
		ESteamItemStatistic__ReportScore                         = 7,
		ESteamItemStatistic__NumSecondsPlayed                    = 8,
		ESteamItemStatistic__NumPlaytimeSessions                 = 9,
		ESteamItemStatistic__NumComments                         = 10,
		ESteamItemStatistic__NumSecondsPlayedDuringTimePeriod    = 11,
		ESteamItemStatistic__NumPlaytimeSessionsDuringTimePeriod = 12,
		ESteamItemStatistic__ESteamItemStatistic_MAX             = 13
	};

	/**
	 * Enum SteamCore.ESteamItemState
	 */
	enum class SteamCore_ESteamItemState : uint8_t
	{
		ESteamItemState__None                = 0,
		ESteamItemState__Subscribed          = 1,
		ESteamItemState__LegacyItem          = 2,
		ESteamItemState__Installed           = 3,
		ESteamItemState__NeedsUpdate         = 4,
		ESteamItemState__Downloading         = 5,
		ESteamItemState__DownloadPending     = 6,
		ESteamItemState__ESteamItemState_MAX = 7
	};

	/**
	 * Enum SteamCore.ESteamItemUpdateStatus
	 */
	enum class SteamCore_ESteamItemUpdateStatus : uint8_t
	{
		ESteamItemUpdateStatus__Invalid                    = 0,
		ESteamItemUpdateStatus__PreparingConfig            = 1,
		ESteamItemUpdateStatus__PreparingContent           = 2,
		ESteamItemUpdateStatus__UploadingContent           = 3,
		ESteamItemUpdateStatus__UploadingPreviewFile       = 4,
		ESteamItemUpdateStatus__CommittingChanges          = 5,
		ESteamItemUpdateStatus__ESteamItemUpdateStatus_MAX = 6
	};

	/**
	 * Enum SteamCore.ESteamUGCQuery
	 */
	enum class SteamCore_ESteamUGCQuery : uint8_t
	{
		ESteamUGCQuery__RankedByVote                                  = 0,
		ESteamUGCQuery__RankedByPublicationDate                       = 1,
		ESteamUGCQuery__AcceptedForGameRankedByAcceptanceDate         = 2,
		ESteamUGCQuery__RankedByTrend                                 = 3,
		ESteamUGCQuery__FavoritedByFriendsRankedByPublicationDate     = 4,
		ESteamUGCQuery__CreatedByFriendsRankedByPublicationDate       = 5,
		ESteamUGCQuery__RankedByNumTimesReported                      = 6,
		ESteamUGCQuery__CreatedByFollowedUsersRankedByPublicationDate = 7,
		ESteamUGCQuery__NotYetRated                                   = 8,
		ESteamUGCQuery__RankedByTotalVotesAsc                         = 9,
		ESteamUGCQuery__RankedByVotesUp                               = 10,
		ESteamUGCQuery__RankedByTextSearch                            = 11,
		ESteamUGCQuery__RankedByTotalUniqueSubscriptions              = 12,
		ESteamUGCQuery__RankedByPlaytimeTrend                         = 13,
		ESteamUGCQuery__RankedByTotalPlaytime                         = 14,
		ESteamUGCQuery__RankedByAveragePlaytimeTrend                  = 15,
		ESteamUGCQuery__RankedByLifetimeAveragePlaytime               = 16,
		ESteamUGCQuery__RankedByPlaytimeSessionsTrend                 = 17,
		ESteamUGCQuery__RankedByLifetimePlaytimeSessions              = 18,
		ESteamUGCQuery__ESteamUGCQuery_MAX                            = 19
	};

	/**
	 * Enum SteamCore.ESteamUserUGCListSortOrder
	 */
	enum class SteamCore_ESteamUserUGCListSortOrder : uint8_t
	{
		ESteamUserUGCListSortOrder__CreationOrderDesc              = 0,
		ESteamUserUGCListSortOrder__CreationOrderAsc               = 1,
		ESteamUserUGCListSortOrder__TitleAsc                       = 2,
		ESteamUserUGCListSortOrder__LastUpdatedDesc                = 3,
		ESteamUserUGCListSortOrder__SubscriptionDateDesc           = 4,
		ESteamUserUGCListSortOrder__VoteScoreDesc                  = 5,
		ESteamUserUGCListSortOrder__ForModeration                  = 6,
		ESteamUserUGCListSortOrder__ESteamUserUGCListSortOrder_MAX = 7
	};

	/**
	 * Enum SteamCore.ESteamUserUGCList
	 */
	enum class SteamCore_ESteamUserUGCList : uint8_t
	{
		ESteamUserUGCList__Published             = 0,
		ESteamUserUGCList__VotedOn               = 1,
		ESteamUserUGCList__VotedUp               = 2,
		ESteamUserUGCList__VotedDown             = 3,
		ESteamUserUGCList__WillVoteLater         = 4,
		ESteamUserUGCList__Favorited             = 5,
		ESteamUserUGCList__Subscribed            = 6,
		ESteamUserUGCList__UsedOrPlayed          = 7,
		ESteamUserUGCList__Followed              = 8,
		ESteamUserUGCList__ESteamUserUGCList_MAX = 9
	};

	/**
	 * Enum SteamCore.ESteamUGCMatchingUGCType
	 */
	enum class SteamCore_ESteamUGCMatchingUGCType : uint8_t
	{
		ESteamUGCMatchingUGCType__Items                        = 0,
		ESteamUGCMatchingUGCType__Items_Mtx                    = 1,
		ESteamUGCMatchingUGCType__Items_ReadyToUse             = 2,
		ESteamUGCMatchingUGCType__Collections                  = 3,
		ESteamUGCMatchingUGCType__Artwork                      = 4,
		ESteamUGCMatchingUGCType__Videos                       = 5,
		ESteamUGCMatchingUGCType__Screenshots                  = 6,
		ESteamUGCMatchingUGCType__AllGuides                    = 7,
		ESteamUGCMatchingUGCType__WebGuides                    = 8,
		ESteamUGCMatchingUGCType__IntegratedGuides             = 9,
		ESteamUGCMatchingUGCType__UsableInGame                 = 10,
		ESteamUGCMatchingUGCType__ControllerBindings           = 11,
		ESteamUGCMatchingUGCType__GameManagedItems             = 12,
		ESteamUGCMatchingUGCType__All                          = 13,
		ESteamUGCMatchingUGCType__ESteamUGCMatchingUGCType_MAX = 14
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardUploadScoreMethod
	 */
	enum class SteamCore_ESteamLeaderboardUploadScoreMethod : uint8_t
	{
		ESteamLeaderboardUploadScoreMethod__None                                   = 0,
		ESteamLeaderboardUploadScoreMethod__KeepBest                               = 1,
		ESteamLeaderboardUploadScoreMethod__ForceUpdate                            = 2,
		ESteamLeaderboardUploadScoreMethod__ESteamLeaderboardUploadScoreMethod_MAX = 3
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardDisplayType
	 */
	enum class SteamCore_ESteamLeaderboardDisplayType : uint8_t
	{
		ESteamLeaderboardDisplayType__None                             = 0,
		ESteamLeaderboardDisplayType__Numeric                          = 1,
		ESteamLeaderboardDisplayType__TimeSeconds                      = 2,
		ESteamLeaderboardDisplayType__TimeMilliSeconds                 = 3,
		ESteamLeaderboardDisplayType__ESteamLeaderboardDisplayType_MAX = 4
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardSortMethod
	 */
	enum class SteamCore_ESteamLeaderboardSortMethod : uint8_t
	{
		ESteamLeaderboardSortMethod__None                            = 0,
		ESteamLeaderboardSortMethod__Ascending                       = 1,
		ESteamLeaderboardSortMethod__Descending                      = 2,
		ESteamLeaderboardSortMethod__ESteamLeaderboardSortMethod_MAX = 3
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardDataRequest
	 */
	enum class SteamCore_ESteamLeaderboardDataRequest : uint8_t
	{
		ESteamLeaderboardDataRequest__Global                           = 0,
		ESteamLeaderboardDataRequest__GlobalAroundUser                 = 1,
		ESteamLeaderboardDataRequest__Friends                          = 2,
		ESteamLeaderboardDataRequest__Users                            = 3,
		ESteamLeaderboardDataRequest__ESteamLeaderboardDataRequest_MAX = 4
	};

	/**
	 * Enum SteamCore.ESteamVoiceResult
	 */
	enum class SteamCore_ESteamVoiceResult : uint8_t
	{
		ESteamVoiceResult__OK                    = 0,
		ESteamVoiceResult__NotInitialized        = 1,
		ESteamVoiceResult__NotRecording          = 2,
		ESteamVoiceResult__NoData                = 3,
		ESteamVoiceResult__BufferTooSmall        = 4,
		ESteamVoiceResult__DataCorrupted         = 5,
		ESteamVoiceResult__Restricted            = 6,
		ESteamVoiceResult__UnsupportedCodec      = 7,
		ESteamVoiceResult__ReceiverOutOfDate     = 8,
		ESteamVoiceResult__ReceiverDidNotAnswer  = 9,
		ESteamVoiceResult__ESteamVoiceResult_MAX = 10
	};

	/**
	 * Enum SteamCore.ESteamCoreIdentical
	 */
	enum class SteamCore_ESteamCoreIdentical : uint8_t
	{
		ESteamCoreIdentical__Identical               = 0,
		ESteamCoreIdentical__NotIdentical            = 1,
		ESteamCoreIdentical__ESteamCoreIdentical_MAX = 2
	};

	/**
	 * Enum SteamCore.ESteamCoreValid
	 */
	enum class SteamCore_ESteamCoreValid : uint8_t
	{
		ESteamCoreValid__Valid               = 0,
		ESteamCoreValid__NotValid            = 1,
		ESteamCoreValid__ESteamCoreValid_MAX = 2
	};

	/**
	 * Enum SteamCore.ESteamUniverse
	 */
	enum class SteamCore_ESteamUniverse : uint8_t
	{
		ESteamUniverse__Invalid  = 0,
		ESteamUniverse__Public   = 1,
		ESteamUniverse__Beta     = 2,
		ESteamUniverse__Internal = 3,
		ESteamUniverse__Dev      = 4,
		ESteamUniverse__Max      = 5
	};

	/**
	 * Enum SteamCore.ESteamNotificationPosition
	 */
	enum class SteamCore_ESteamNotificationPosition : uint8_t
	{
		ESteamNotificationPosition__TopLeft                        = 0,
		ESteamNotificationPosition__TopRight                       = 1,
		ESteamNotificationPosition__BottomLeft                     = 2,
		ESteamNotificationPosition__BottomRight                    = 3,
		ESteamNotificationPosition__ESteamNotificationPosition_MAX = 4
	};

	/**
	 * Enum SteamCore.ESteamGamepadTextInputMode
	 */
	enum class SteamCore_ESteamGamepadTextInputMode : uint8_t
	{
		ESteamGamepadTextInputMode__Normal                         = 0,
		ESteamGamepadTextInputMode__Password                       = 1,
		ESteamGamepadTextInputMode__ESteamGamepadTextInputMode_MAX = 2
	};

	/**
	 * Enum SteamCore.ESteamGamepadTextInputLineMode
	 */
	enum class SteamCore_ESteamGamepadTextInputLineMode : uint8_t
	{
		ESteamGamepadTextInputLineMode__SingleLine                         = 0,
		ESteamGamepadTextInputLineMode__MultipleLines                      = 1,
		ESteamGamepadTextInputLineMode__ESteamGamepadTextInputLineMode_MAX = 2
	};

	/**
	 * Enum SteamCore.ESteamTextFilteringContext
	 */
	enum class SteamCore_ESteamTextFilteringContext : uint8_t
	{
		ESteamTextFilteringContext__k_ETextFilteringContextUnknown     = 0,
		ESteamTextFilteringContext__k_ETextFilteringContextGameContent = 1,
		ESteamTextFilteringContext__k_ETextFilteringContextChat        = 2,
		ESteamTextFilteringContext__k_ETextFilteringContextName        = 3,
		ESteamTextFilteringContext__k_MAX                              = 4
	};

	/**
	 * Enum SteamCore.ESteamBroadcastUploadResult
	 */
	enum class SteamCore_ESteamBroadcastUploadResult : uint8_t
	{
		ESteamBroadcastUploadResult__None                            = 0,
		ESteamBroadcastUploadResult__OK                              = 1,
		ESteamBroadcastUploadResult__InitFailed                      = 2,
		ESteamBroadcastUploadResult__FrameFailed                     = 3,
		ESteamBroadcastUploadResult__Timeout                         = 4,
		ESteamBroadcastUploadResult__BandwidthExceeded               = 5,
		ESteamBroadcastUploadResult__LowFPS                          = 6,
		ESteamBroadcastUploadResult__MissingKeyFrames                = 7,
		ESteamBroadcastUploadResult__NoConnection                    = 8,
		ESteamBroadcastUploadResult__RelayFailed                     = 9,
		ESteamBroadcastUploadResult__SettingsChanged                 = 10,
		ESteamBroadcastUploadResult__MissingAudio                    = 11,
		ESteamBroadcastUploadResult__TooFarBehind                    = 12,
		ESteamBroadcastUploadResult__TranscodeBehind                 = 13,
		ESteamBroadcastUploadResult__ESteamBroadcastUploadResult_MAX = 14
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SteamCore.SteamInventoryResult
	 * Size -> 0x0004
	 */
	struct FSteamInventoryResult
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct SteamCore.SteamInventoryResultReady
	 * Size -> 0x0008
	 */
	struct FSteamInventoryResultReady
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDYF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamInventoryFullUpdate
	 * Size -> 0x0004
	 */
	struct FSteamInventoryFullUpdate
	{
	public:
		struct FSteamInventoryResult                               Handle;                                                  // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamInventoryStartPurchaseResult
	 * Size -> 0x0028
	 */
	struct FSteamInventoryStartPurchaseResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRNU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OrderId;                                                 // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionId;                                           // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamInventoryRequestPricesResult
	 * Size -> 0x0018
	 */
	struct FSteamInventoryRequestPricesResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLPH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Currency;                                                // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamID
	 * Size -> 0x0008
	 */
	struct FSteamID
	{
	public:
		unsigned char                                              UnknownData_JED7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamInventoryEligiblePromoItemDefIDs
	 * Size -> 0x0018
	 */
	struct FSteamInventoryEligiblePromoItemDefIDs
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUJ5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumEligiblePromoItemDefs;                                // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedData;                                             // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAJN[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamAppInstalled
	 * Size -> 0x0004
	 */
	struct FSteamAppInstalled
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamAppUninstalled
	 * Size -> 0x0004
	 */
	struct FSteamAppUninstalled
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.FileDetailsResult
	 * Size -> 0x0028
	 */
	struct FFileDetailsResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPDK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FileSize;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SHA;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Flags;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.DLCInstalled
	 * Size -> 0x0004
	 */
	struct FDLCInstalled
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GameOverlayActivated
	 * Size -> 0x0001
	 */
	struct FGameOverlayActivated
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.AvatarImageLoaded
	 * Size -> 0x0020
	 */
	struct FAvatarImageLoaded
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Image;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIFK[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GameServerChangeRequested
	 * Size -> 0x0020
	 */
	struct FGameServerChangeRequested
	{
	public:
		class FString                                              Server;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GameConnectedFriendChatMsg
	 * Size -> 0x0010
	 */
	struct FGameConnectedFriendChatMsg
	{
	public:
		struct FSteamID                                            SteamIDUser;                                             // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MessageID;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9R8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GameLobbyJoinRequested
	 * Size -> 0x0010
	 */
	struct FGameLobbyJoinRequested
	{
	public:
		struct FSteamID                                            SteamIDLobby;                                            // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDFriend;                                           // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GameRichPresenceJoinRequested
	 * Size -> 0x0018
	 */
	struct FGameRichPresenceJoinRequested
	{
	public:
		struct FSteamID                                            SteamIDFriend;                                           // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Connect;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.PersonaStateChange
	 * Size -> 0x0018
	 */
	struct FPersonaStateChange
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<SteamCore_ESteamPersonaChange>                      Flags;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.ClanOfficerListResponse
	 * Size -> 0x0010
	 */
	struct FClanOfficerListResponse
	{
	public:
		struct FSteamID                                            SteamIDClan;                                             // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Officers;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuccess;                                                // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XMT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.FriendRichPresenceUpdate
	 * Size -> 0x0010
	 */
	struct FFriendRichPresenceUpdate
	{
	public:
		struct FSteamID                                            SteamIDFriend;                                           // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9DA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GameConnectedClanChatMsg
	 * Size -> 0x0018
	 */
	struct FGameConnectedClanChatMsg
	{
	public:
		struct FSteamID                                            SteamIDUser;                                             // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDClanChat;                                         // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MessageID;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AQT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GameConnectedChatJoin
	 * Size -> 0x0010
	 */
	struct FGameConnectedChatJoin
	{
	public:
		struct FSteamID                                            SteamIDClanChat;                                         // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDUser;                                             // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GameConnectedChatLeave
	 * Size -> 0x0018
	 */
	struct FGameConnectedChatLeave
	{
	public:
		struct FSteamID                                            SteamIDClanChat;                                         // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDUser;                                             // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKicked;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDropped;                                                // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXR5[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.DownloadClanActivityCountsResult
	 * Size -> 0x0001
	 */
	struct FDownloadClanActivityCountsResult
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.JoinClanChatRoomCompletionResult
	 * Size -> 0x0010
	 */
	struct FJoinClanChatRoomCompletionResult
	{
	public:
		struct FSteamID                                            SteamIDClanChat;                                         // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamChatRoomEnterResponse                      ChatRoomEnterResponse;                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQPH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SetPersonaNameResponse
	 * Size -> 0x0003
	 */
	struct FSetPersonaNameResponse
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuccess;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalSuccess;                                           // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.FriendsGetFollowerCount
	 * Size -> 0x0018
	 */
	struct FFriendsGetFollowerCount
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVRZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4QU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.FriendsIsFollowing
	 * Size -> 0x0018
	 */
	struct FFriendsIsFollowing
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTPT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFollowing;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF4P[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.FriendsEnumerateFollowingList
	 * Size -> 0x0020
	 */
	struct FFriendsEnumerateFollowingList
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RC4W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSteamID>                                    SteamIDs;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    Results;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalResult;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SearchForGameProgressCallback
	 * Size -> 0x0030
	 */
	struct FSearchForGameProgressCallback
	{
	public:
		class FString                                              SearchID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XV8C[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            LobbyID;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDEndedSearch;                                      // 0x0020(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondsRemainingEstimate;                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersSearching;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SearchForGameResultCallback
	 * Size -> 0x0030
	 */
	struct FSearchForGameResultCallback
	{
	public:
		class FString                                              SearchID;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZT6X[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CountPlayersInGame;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CountAcceptedGame;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I21I[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamIDHost;                                             // 0x0020(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFinalCallback;                                          // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKVU[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.RequestPlayersForGameProgressCallback
	 * Size -> 0x0018
	 */
	struct FRequestPlayersForGameProgressCallback
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOAW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SearchID;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.RequestPlayersForGameResultCallback
	 * Size -> 0x0050
	 */
	struct FRequestPlayersForGameResultCallback
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIBK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SearchID;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDPlayerFound;                                      // 0x0018(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDLobby;                                            // 0x0020(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamPlayerAcceptState                          PlayerAcceptState;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U19P[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerIndex;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPlayersFound;                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPlayersAcceptedGame;                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuggestedTeamIndex;                                      // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0U8[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueGameID;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.RequestPlayersForGameFinalResultCallback
	 * Size -> 0x0028
	 */
	struct FRequestPlayersForGameFinalResultCallback
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5F4U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SearchID;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UniqueGameID;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SubmitPlayerResultResultCallback
	 * Size -> 0x0020
	 */
	struct FSubmitPlayerResultResultCallback
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICBT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueGameID;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDPlayer;                                           // 0x0018(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.EndGameResultCallback
	 * Size -> 0x0018
	 */
	struct FEndGameResultCallback
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNH1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueGameID;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.AssociateWithClanResult
	 * Size -> 0x0001
	 */
	struct FAssociateWithClanResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.ComputeNewPlayerCompatibilityResult
	 * Size -> 0x0018
	 */
	struct FComputeNewPlayerCompatibilityResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGD5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayersThatDontLikeCandidate;                            // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersThatCandidateDoesntLike;                          // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClanPlayersThatDontLikeCandidate;                        // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDCandidate;                                        // 0x0010(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GSPolicyResponse
	 * Size -> 0x0001
	 */
	struct FGSPolicyResponse
	{
	public:
		bool                                                       BSecure;                                                 // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GSClientGroupStatus
	 * Size -> 0x0018
	 */
	struct FGSClientGroupStatus
	{
	public:
		struct FSteamID                                            SteamIDUser;                                             // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDGroup;                                            // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMember;                                                 // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOfficer;                                                // 0x0011(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YPE[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.ValidateAuthTicketResponse
	 * Size -> 0x0018
	 */
	struct FValidateAuthTicketResponse
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamAuthSessionResponse                        AuthSessionResponse;                                     // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D49V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            OwnerSteamID;                                            // 0x0010(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GSClientApprove
	 * Size -> 0x0010
	 */
	struct FGSClientApprove
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            OwnerSteamID;                                            // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GSClientDeny
	 * Size -> 0x0020
	 */
	struct FGSClientDeny
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamDenyReason                                 DenyReason;                                              // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUOS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OptionalText;                                            // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GSStatsReceived
	 * Size -> 0x0010
	 */
	struct FGSStatsReceived
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MF7R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamIDUser;                                             // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GSStatsStored
	 * Size -> 0x0010
	 */
	struct FGSStatsStored
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5HF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamIDUser;                                             // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GSStatsUnloaded
	 * Size -> 0x0008
	 */
	struct FGSStatsUnloaded
	{
	public:
		struct FSteamID                                            SteamIDUser;                                             // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.FavoritesListAccountsUpdated
	 * Size -> 0x0001
	 */
	struct FFavoritesListAccountsUpdated
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.FavoritesListChanged
	 * Size -> 0x0040
	 */
	struct FFavoritesListChanged
	{
	public:
		class FString                                              IP;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QueryPort;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConnectionPort;                                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYIF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<SteamCore_ESteamFavoriteFlags>                      Flags;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bAdd;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKI2[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0038(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.LobbyChatMsg
	 * Size -> 0x0018
	 */
	struct FLobbyChatMsg
	{
	public:
		struct FSteamID                                            SteamIDLobby;                                            // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDUser;                                             // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamChatEntryType                              ChatEntryType;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4MNW[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChatID;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.LobbyChatUpdate
	 * Size -> 0x0028
	 */
	struct FLobbyChatUpdate
	{
	public:
		struct FSteamID                                            SteamIDLobby;                                            // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDUserChanged;                                      // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDMakingChange;                                     // 0x0010(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<SteamCore_ESteamChatMemberStateChange>              ChatMemberStateChange;                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.LobbyDataUpdate
	 * Size -> 0x0018
	 */
	struct FLobbyDataUpdate
	{
	public:
		struct FSteamID                                            SteamIDLobby;                                            // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDMember;                                           // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuccess;                                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA3L[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.LobbyEnterData
	 * Size -> 0x0010
	 */
	struct FLobbyEnterData
	{
	public:
		struct FSteamID                                            SteamIDLobby;                                            // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocked;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamChatRoomEnterResponse                      ChatRoomEnterResponse;                                   // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AX8M[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.LobbyGameCreated
	 * Size -> 0x0028
	 */
	struct FLobbyGameCreated
	{
	public:
		struct FSteamID                                            SteamIDLobby;                                            // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDGameServer;                                       // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IP;                                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YBQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamGameID
	 * Size -> 0x0008
	 */
	struct FSteamGameID
	{
	public:
		unsigned char                                              UnknownData_QD78[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.LobbyInviteData
	 * Size -> 0x0018
	 */
	struct FLobbyInviteData
	{
	public:
		struct FSteamID                                            SteamIDUser;                                             // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDLobby;                                            // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamGameID                                        GameID;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.LobbyKickedData
	 * Size -> 0x0018
	 */
	struct FLobbyKickedData
	{
	public:
		struct FSteamID                                            SteamIDLobby;                                            // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDAdmin;                                            // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKickedDueToDisconnect;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ELC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.LobbyMatchList
	 * Size -> 0x0004
	 */
	struct FLobbyMatchList
	{
	public:
		int32_t                                                    LobbiesMatching;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.CreateLobbyData
	 * Size -> 0x0010
	 */
	struct FCreateLobbyData
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EH2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamIDLobby;                                            // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.JoinLobbyData
	 * Size -> 0x0010
	 */
	struct FJoinLobbyData
	{
	public:
		struct FSteamID                                            SteamIDLobby;                                            // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocked;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamChatRoomEnterResponse                      ChatRoomEnterResponse;                                   // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSC3[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamSessionSetting
	 * Size -> 0x0028
	 */
	struct FSteamSessionSetting
	{
	public:
		unsigned char                                              UnknownData_AZXX[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamSessionResult
	 * Size -> 0x0118
	 */
	struct FSteamSessionResult
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x0108) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TArray<struct FSteamSessionSetting>                        SessionSettings;                                         // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamServerAddr
	 * Size -> 0x0038
	 */
	struct FSteamServerAddr
	{
	public:
		class FString                                              IP;                                                      // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Port;                                                    // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    QueryPort;                                               // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ConnectionAddressString;                                 // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              SteamP2PAddr;                                            // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct SteamCore.GameServerItem
	 * Size -> 0x00B0
	 */
	struct FGameServerItem
	{
	public:
		class FString                                              ServerName;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameDescription;                                         // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameTags;                                                // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamServerAddr                                    SteamServerAddr;                                         // 0x0040(0x0038) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Ping;                                                    // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Players;                                                 // 0x007C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x0080(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BotPlayers;                                              // 0x0084(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerVersion;                                           // 0x0088(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPassword;                                               // 0x008C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BSecure;                                                 // 0x008D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E33W[0x22];                                  // 0x008E(0x0022) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GameServerRule
	 * Size -> 0x0020
	 */
	struct FGameServerRule
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.PlaybackStatusHasChanged
	 * Size -> 0x0001
	 */
	struct FPlaybackStatusHasChanged
	{
	public:
		unsigned char                                              UnknownData_ALH2[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.VolumeHasChanged
	 * Size -> 0x0004
	 */
	struct FVolumeHasChanged
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.P2PSessionRequest
	 * Size -> 0x0008
	 */
	struct FP2PSessionRequest
	{
	public:
		struct FSteamID                                            SteamIDRemote;                                           // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.P2PSessionConnectFail
	 * Size -> 0x0010
	 */
	struct FP2PSessionConnectFail
	{
	public:
		struct FSteamID                                            SteamIDRemote;                                           // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamP2PSessionError                            P2PSessionError;                                         // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INEZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.PartyBeaconID
	 * Size -> 0x0008
	 */
	struct FPartyBeaconID
	{
	public:
		unsigned char                                              UnknownData_YWOT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.JoinPartyData
	 * Size -> 0x0028
	 */
	struct FJoinPartyData
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5U8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPartyBeaconID                                      BeaconID;                                                // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDBeaconOwner;                                      // 0x0010(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ConnectString;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.CreateBeaconData
	 * Size -> 0x0010
	 */
	struct FCreateBeaconData
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GR1Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPartyBeaconID                                      BeaconID;                                                // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.ReservationNotificationData
	 * Size -> 0x0010
	 */
	struct FReservationNotificationData
	{
	public:
		struct FPartyBeaconID                                      BeaconID;                                                // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDJoiner;                                           // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.ChangeNumOpenSlotsData
	 * Size -> 0x0001
	 */
	struct FChangeNumOpenSlotsData
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamRemotePlaySessionConnected
	 * Size -> 0x0004
	 */
	struct FSteamRemotePlaySessionConnected
	{
	public:
		int32_t                                                    SessionID;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamRemotePlaySessionDisconnected
	 * Size -> 0x0004
	 */
	struct FSteamRemotePlaySessionDisconnected
	{
	public:
		int32_t                                                    SessionID;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.PublishedFileID
	 * Size -> 0x0008
	 */
	struct FPublishedFileID
	{
	public:
		unsigned char                                              UnknownData_11DA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageUnsubscribePublishedFileResult
	 * Size -> 0x0010
	 */
	struct FRemoteStorageUnsubscribePublishedFileResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_54L6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageSubscribePublishedFileResult
	 * Size -> 0x0010
	 */
	struct FRemoteStorageSubscribePublishedFileResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KY4F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.RemoteStoragePublishedFileUnsubscribed
	 * Size -> 0x0010
	 */
	struct FRemoteStoragePublishedFileUnsubscribed
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CS3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.RemoteStoragePublishedFileSubscribed
	 * Size -> 0x0010
	 */
	struct FRemoteStoragePublishedFileSubscribed
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28UE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageFileWriteAsyncComplete
	 * Size -> 0x0001
	 */
	struct FRemoteStorageFileWriteAsyncComplete
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageFileReadAsyncComplete
	 * Size -> 0x0018
	 */
	struct FRemoteStorageFileReadAsyncComplete
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DRC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Offset;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Read;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22TC[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamUGCHandle
	 * Size -> 0x0008
	 */
	struct FSteamUGCHandle
	{
	public:
		unsigned char                                              UnknownData_HF13[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageDownloadUGCResult
	 * Size -> 0x0030
	 */
	struct FRemoteStorageDownloadUGCResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O67J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamUGCHandle                                     FileHandle;                                              // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeInBytes;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDOwner;                                            // 0x0028(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageFileShareResult
	 * Size -> 0x0020
	 */
	struct FRemoteStorageFileShareResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHJK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamUGCHandle                                     File;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.ScreenshotHandle
	 * Size -> 0x0004
	 */
	struct FScreenshotHandle
	{
	public:
		unsigned char                                              UnknownData_QKQE[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.ScreenshotReady
	 * Size -> 0x0008
	 */
	struct FScreenshotReady
	{
	public:
		struct FScreenshotHandle                                   Handle;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBK2[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.ScreenshotRequested
	 * Size -> 0x0001
	 */
	struct FScreenshotRequested
	{
	public:
		unsigned char                                              UnknownData_QD4M[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.UserFavoriteItemsListChanged
	 * Size -> 0x0010
	 */
	struct FUserFavoriteItemsListChanged
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasAddRequest;                                          // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFQO[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.CreateItemResult
	 * Size -> 0x0018
	 */
	struct FCreateItemResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZAR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUserNeedsToAcceptWorkshopLegalAgreement;                // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7L0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SetUserItemVoteResult
	 * Size -> 0x0010
	 */
	struct FSetUserItemVoteResult
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoteUp;                                                 // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YEQW[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GetUserItemVoteResult
	 * Size -> 0x0010
	 */
	struct FGetUserItemVoteResult
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVotedUp;                                                // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVotedDown;                                              // 0x000A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoteSkipped;                                            // 0x000B(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TD6R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.UGCQueryHandle
	 * Size -> 0x0008
	 */
	struct FUGCQueryHandle
	{
	public:
		unsigned char                                              UnknownData_BG4N[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamUGCQueryCompleted
	 * Size -> 0x0018
	 */
	struct FSteamUGCQueryCompleted
	{
	public:
		struct FUGCQueryHandle                                     Handle;                                                  // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KXM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumResultsReturned;                                      // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalMatchingResults;                                    // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedData;                                             // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_302M[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.AddAppDependencyResult
	 * Size -> 0x0018
	 */
	struct FAddAppDependencyResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3JP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2AN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.RemoveAppDependencyResult
	 * Size -> 0x0018
	 */
	struct FRemoveAppDependencyResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JD05[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTSI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.AddUGCDependencyResult
	 * Size -> 0x0018
	 */
	struct FAddUGCDependencyResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PY0L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPublishedFileID                                    ChildPublishedFileId;                                    // 0x0010(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.RemoveUGCDependencyResult
	 * Size -> 0x0018
	 */
	struct FRemoveUGCDependencyResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FASX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPublishedFileID                                    ChildPublishedFileId;                                    // 0x0010(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.UGCDeleteItemResult
	 * Size -> 0x0010
	 */
	struct FUGCDeleteItemResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WF9S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GetAppDependenciesResult
	 * Size -> 0x0028
	 */
	struct FGetAppDependenciesResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AQS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            AppIDs;                                                  // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumAppDependencies;                                      // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalNumAppDependencies;                                 // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SubmitItemUpdateResult
	 * Size -> 0x0010
	 */
	struct FSubmitItemUpdateResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUserNeedsToAcceptWorkshopLegalAgreement;                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0SN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.StartPlaytimeTrackingResult
	 * Size -> 0x0001
	 */
	struct FStartPlaytimeTrackingResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.StopPlaytimeTrackingResult
	 * Size -> 0x0001
	 */
	struct FStopPlaytimeTrackingResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.DownloadItemResult
	 * Size -> 0x0018
	 */
	struct FDownloadItemResult
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLWV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GJL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.ItemInstalled
	 * Size -> 0x0010
	 */
	struct FItemInstalled
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_761E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.ClientGameServerDeny
	 * Size -> 0x0020
	 */
	struct FClientGameServerDeny
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAX6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameServerIP;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameServerPort;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BSecure;                                                 // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamDenyReason                                 Reason;                                                  // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3RC[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GameWebCallback
	 * Size -> 0x0010
	 */
	struct FGameWebCallback
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamTicketHandle
	 * Size -> 0x0004
	 */
	struct FSteamTicketHandle
	{
	public:
		unsigned char                                              UnknownData_WKC0[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GetAuthSessionTicketResponse
	 * Size -> 0x0008
	 */
	struct FGetAuthSessionTicketResponse
	{
	public:
		struct FSteamTicketHandle                                  AuthTicket;                                              // 0x0000(0x0004) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYPM[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.IPCFailure
	 * Size -> 0x0001
	 */
	struct FIPCFailure
	{
	public:
		SteamCore_ESteamFailureType                                FailureType;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.LicensesUpdated
	 * Size -> 0x0001
	 */
	struct FLicensesUpdated
	{
	public:
		unsigned char                                              UnknownData_5BVI[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.MicroTxnAuthorizationResponse
	 * Size -> 0x0020
	 */
	struct FMicroTxnAuthorizationResponse
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35BD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OrderId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAuthorized;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TTE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamServersConnected
	 * Size -> 0x0001
	 */
	struct FSteamServersConnected
	{
	public:
		unsigned char                                              UnknownData_OXS6[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamServerConnectFailure
	 * Size -> 0x0002
	 */
	struct FSteamServerConnectFailure
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStillRetrying;                                          // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamServersDisconnected
	 * Size -> 0x0001
	 */
	struct FSteamServersDisconnected
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.EncryptedAppTicketResponse
	 * Size -> 0x0001
	 */
	struct FEncryptedAppTicketResponse
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.StoreAuthURLResponse
	 * Size -> 0x0010
	 */
	struct FStoreAuthURLResponse
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.UserAchievementIconFetched
	 * Size -> 0x0030
	 */
	struct FUserAchievementIconFetched
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AchievementName;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAchieved;                                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QUW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_323L[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.UserAchievementStored
	 * Size -> 0x0028
	 */
	struct FUserAchievementStored
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGroupAchievement;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXPC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AchievementName;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentProgress;                                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxProgress;                                             // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.UserStatsReceived
	 * Size -> 0x0018
	 */
	struct FUserStatsReceived
	{
	public:
		struct FSteamID                                            GameID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JW79[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.UserStatsStored
	 * Size -> 0x0010
	 */
	struct FUserStatsStored
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UQN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.UserStatsUnloaded
	 * Size -> 0x0008
	 */
	struct FUserStatsUnloaded
	{
	public:
		struct FSteamID                                            SteamIDUser;                                             // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamLeaderboard
	 * Size -> 0x0008
	 */
	struct FSteamLeaderboard
	{
	public:
		unsigned char                                              UnknownData_46FP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamLeaderboardEntries
	 * Size -> 0x0008
	 */
	struct FSteamLeaderboardEntries
	{
	public:
		unsigned char                                              UnknownData_SPAG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.LeaderboardScoresDownloaded
	 * Size -> 0x0018
	 */
	struct FLeaderboardScoresDownloaded
	{
	public:
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamLeaderboardEntries                            SteamLeaderboardEntries;                                 // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EntryCount;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRNE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.LeaderboardScoresDownloadedForUsers
	 * Size -> 0x0018
	 */
	struct FLeaderboardScoresDownloadedForUsers
	{
	public:
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamLeaderboardEntries                            SteamLeaderboardEntries;                                 // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EntryCount;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJM8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.RequestUserStatsData
	 * Size -> 0x0018
	 */
	struct FRequestUserStatsData
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RASP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamIDUser;                                             // 0x0010(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.LeaderboardScoreUploaded
	 * Size -> 0x0020
	 */
	struct FLeaderboardScoreUploaded
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T87F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScoreChanged;                                           // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HMYG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GlobalRankNew;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GlobalRankPrevious;                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.AttachLeaderboardUGCData
	 * Size -> 0x0010
	 */
	struct FAttachLeaderboardUGCData
	{
	public:
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISIQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.LeaderboardFindResult
	 * Size -> 0x0010
	 */
	struct FLeaderboardFindResult
	{
	public:
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeaderboardFound;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFGJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.FindOrCreateLeaderboardData
	 * Size -> 0x0010
	 */
	struct FFindOrCreateLeaderboardData
	{
	public:
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeaderboardFound;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJGO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.NumberOfCurrentPlayers
	 * Size -> 0x0008
	 */
	struct FNumberOfCurrentPlayers
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLR0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Players;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GlobalAchievementPercentagesReady
	 * Size -> 0x0010
	 */
	struct FGlobalAchievementPercentagesReady
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USIT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GlobalStatsReceived
	 * Size -> 0x0010
	 */
	struct FGlobalStatsReceived
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTBJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.CheckFileSignature
	 * Size -> 0x0001
	 */
	struct FCheckFileSignature
	{
	public:
		SteamCore_ESteamCheckFileSignature                         CheckFileSignature;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GamepadTextInputDismissed
	 * Size -> 0x0008
	 */
	struct FGamepadTextInputDismissed
	{
	public:
		bool                                                       bSubmitted;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K8VN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubmittedText;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.IPCountry
	 * Size -> 0x0001
	 */
	struct FIPCountry
	{
	public:
		unsigned char                                              UnknownData_6LS6[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.LowBatteryPower
	 * Size -> 0x0004
	 */
	struct FLowBatteryPower
	{
	public:
		int32_t                                                    MinutesBatteryLeft;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamShutdown
	 * Size -> 0x0001
	 */
	struct FSteamShutdown
	{
	public:
		unsigned char                                              UnknownData_NQ8V[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.GetOPFSettingsResult
	 * Size -> 0x0008
	 */
	struct FGetOPFSettingsResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SK5T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AppID;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.GetVideoURLResult
	 * Size -> 0x0018
	 */
	struct FGetVideoURLResult
	{
	public:
		SteamCore_ESteamResult                                     Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWWF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AppID;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamFriendsGroupID
	 * Size -> 0x0002
	 */
	struct FSteamFriendsGroupID
	{
	public:
		unsigned char                                              UnknownData_RWZC[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.InputAnalogActionHandle
	 * Size -> 0x0008
	 */
	struct FInputAnalogActionHandle
	{
	public:
		unsigned char                                              UnknownData_DWQZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.InputDigitalActionHandle
	 * Size -> 0x0008
	 */
	struct FInputDigitalActionHandle
	{
	public:
		unsigned char                                              UnknownData_F5CZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.InputActionSetHandle
	 * Size -> 0x0008
	 */
	struct FInputActionSetHandle
	{
	public:
		unsigned char                                              UnknownData_M8UJ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.InputHandle
	 * Size -> 0x0008
	 */
	struct FInputHandle
	{
	public:
		unsigned char                                              UnknownData_JZL0[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.InputMotionData
	 * Size -> 0x0028
	 */
	struct FInputMotionData
	{
	public:
		float                                                      RotQuatX;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotQuatY;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotQuatZ;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotQuatW;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PosAccelX;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PosAccelY;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PosAccelZ;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotVelX;                                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotVelY;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotVelZ;                                                 // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.InputDigitalActionData
	 * Size -> 0x0002
	 */
	struct FInputDigitalActionData
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.InputAnalogActionData
	 * Size -> 0x0010
	 */
	struct FInputAnalogActionData
	{
	public:
		SteamCore_ESteamCoreInputSourceMode                        Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DD8G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      X;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W74Q[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamItemInstanceID
	 * Size -> 0x0008
	 */
	struct FSteamItemInstanceID
	{
	public:
		unsigned char                                              UnknownData_XKSJ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamItemDef
	 * Size -> 0x0004
	 */
	struct FSteamItemDef
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct SteamCore.SteamItemDetails
	 * Size -> 0x0020
	 */
	struct FSteamItemDetails
	{
	public:
		struct FSteamItemInstanceID                                InstanceID;                                              // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamItemDef                                       Definition;                                              // 0x0008(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<SteamCore_ESteamCoreItemFlags>                      Flags;                                                   // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamP2PSessionState
	 * Size -> 0x0028
	 */
	struct FSteamP2PSessionState
	{
	public:
		bool                                                       bConnectionActive;                                       // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bConnecting;                                             // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		SteamCore_ESteamP2PSessionError                            P2PSessionError;                                         // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUsingRelay;                                             // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BytesQueuedForSend;                                      // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PacketsQueuedForSend;                                    // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GC4D[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RemoteIP;                                                // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RemotePort;                                              // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OIYU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamNetworkPingLocation
	 * Size -> 0x0010
	 */
	struct FSteamNetworkPingLocation
	{
	public:
		class FString                                              Location;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct SteamCore.SteamParentalSettingsChanged
	 * Size -> 0x0001
	 */
	struct FSteamParentalSettingsChanged
	{
	public:
		unsigned char                                              UnknownData_ITEJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamPartyBeaconLocation
	 * Size -> 0x0018
	 */
	struct FSteamPartyBeaconLocation
	{
	public:
		SteamCore_ESteamPartiesBeaconLocationType                  Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_990B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocationId;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.UGCFileWriteStreamHandle
	 * Size -> 0x0008
	 */
	struct FUGCFileWriteStreamHandle
	{
	public:
		unsigned char                                              UnknownData_FASD[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamSessionSearchSetting
	 * Size -> 0x0020
	 */
	struct FSteamSessionSearchSetting
	{
	public:
		unsigned char                                              UnknownData_QF49[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.HostPingData
	 * Size -> 0x0010
	 */
	struct FHostPingData
	{
	public:
		class FString                                              HostString;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamInventoryUpdateHandle
	 * Size -> 0x0008
	 */
	struct FSteamInventoryUpdateHandle
	{
	public:
		unsigned char                                              UnknownData_I80C[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.UGCUpdateHandle
	 * Size -> 0x0008
	 */
	struct FUGCUpdateHandle
	{
	public:
		unsigned char                                              UnknownData_E3CU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct SteamCore.SteamUGCDetails
	 * Size -> 0x00A8
	 */
	struct FSteamUGCDetails
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamResult                                     Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamWorkshopFileType                           FileType;                                                // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VX88[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CreatorAppID;                                            // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConsumerAppID;                                           // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCJ4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDOwner;                                            // 0x0038(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeCreated;                                             // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeUpdated;                                             // 0x0044(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeAddedToUserList;                                     // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SteamCore_ESteamRemoteStoragePublishedFileVisibility       Visibility;                                              // 0x004C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBanned;                                                 // 0x004D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAcceptedForUse;                                         // 0x004E(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTagsTruncated;                                          // 0x004F(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Tags;                                                    // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSteamUGCHandle                                     File;                                                    // 0x0060(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamUGCHandle                                     PreviewFile;                                             // 0x0068(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0070(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FileSize;                                                // 0x0080(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviewFileSize;                                         // 0x0084(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0088(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VotesUp;                                                 // 0x0098(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VotesDown;                                               // 0x009C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Score;                                                   // 0x00A0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumChildren;                                             // 0x00A4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamCore.SteamLeaderboardEntry
	 * Size -> 0x0020
	 */
	struct FSteamLeaderboardEntry
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GlobalRank;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Details;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INXY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamUGCHandle                                     UGCHandle;                                               // 0x0018(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
