#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
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
	enum class ESteamResult : uint8_t
	{
		None                                    = 0x0000000000000000,
		OK                                      = 0x0000000000000001,
		Fail                                    = 0x0000000000000002,
		NoConnection                            = 0x0000000000000003,
		sultNoConnectionRetry                   = 0x0000000000000004,
		InvalidPassword                         = 0x0000000000000005,
		LoggedInElsewhere                       = 0x0000000000000006,
		InvalidProtocolVer                      = 0x0000000000000007,
		InvalidParam                            = 0x0000000000000008,
		FileNotFound                            = 0x0000000000000009,
		Busy                                    = 0x000000000000000A,
		InvalidState                            = 0x000000000000000B,
		InvalidName                             = 0x000000000000000C,
		InvalidEmail                            = 0x000000000000000D,
		DuplicateName                           = 0x000000000000000E,
		AccessDenied                            = 0x000000000000000F,
		Timeout                                 = 0x0000000000000010,
		Banned                                  = 0x0000000000000011,
		AccountNotFound                         = 0x0000000000000012,
		InvalidSteamID                          = 0x0000000000000013,
		ServiceUnavailable                      = 0x0000000000000014,
		NotLoggedOn                             = 0x0000000000000015,
		Pending                                 = 0x0000000000000016,
		EncryptionFailure                       = 0x0000000000000017,
		InsufficientPrivilege                   = 0x0000000000000018,
		LimitExceeded                           = 0x0000000000000019,
		Revoked                                 = 0x000000000000001A,
		Expired                                 = 0x000000000000001B,
		AlreadyRedeemed                         = 0x000000000000001C,
		DuplicateRequest                        = 0x000000000000001D,
		AlreadyOwned                            = 0x000000000000001E,
		IPNotFound                              = 0x000000000000001F,
		PersistFailed                           = 0x0000000000000020,
		LockingFailed                           = 0x0000000000000021,
		LogonSessionReplaced                    = 0x0000000000000022,
		ConnectFailed                           = 0x0000000000000023,
		HandshakeFailed                         = 0x0000000000000024,
		IOFailure                               = 0x0000000000000025,
		RemoteDisconnect                        = 0x0000000000000026,
		ShoppingCartNotFound                    = 0x0000000000000027,
		Blocked                                 = 0x0000000000000028,
		Ignored                                 = 0x0000000000000029,
		NoMatch                                 = 0x000000000000002A,
		AccountDisabled                         = 0x000000000000002B,
		ServiceReadOnly                         = 0x000000000000002C,
		AccountNotFeatured                      = 0x000000000000002D,
		AdministratorOK                         = 0x000000000000002E,
		ContentVersion                          = 0x000000000000002F,
		TryAnotherCM                            = 0x0000000000000030,
		PasswordRequiredToKickSession           = 0x0000000000000031,
		AlreadyLoggedInElsewhere                = 0x0000000000000032,
		Suspended                               = 0x0000000000000033,
		Cancelled                               = 0x0000000000000034,
		DataCorruption                          = 0x0000000000000035,
		DiskFull                                = 0x0000000000000036,
		RemoteCallFailed                        = 0x0000000000000037,
		PasswordUnset                           = 0x0000000000000038,
		ExternalAccountUnlinked                 = 0x0000000000000039,
		PSNTicketInvalid                        = 0x000000000000003A,
		ExternalAccountAlreadyLinked            = 0x000000000000003B,
		RemoteFileConflict                      = 0x000000000000003C,
		IllegalPassword                         = 0x000000000000003D,
		SameAsPreviousValue                     = 0x000000000000003E,
		AccountLogonDenied                      = 0x000000000000003F,
		CannotUseOldPassword                    = 0x0000000000000040,
		InvalidLoginAuthCode                    = 0x0000000000000041,
		AccountLogonDeniedNoMail                = 0x0000000000000042,
		HardwareNotCapableOfIPT                 = 0x0000000000000043,
		IPTInitError                            = 0x0000000000000044,
		ParentalControlRestricted               = 0x0000000000000045,
		FacebookQueryError                      = 0x0000000000000046,
		ExpiredLoginAuthCode                    = 0x0000000000000047,
		IPLoginRestrictionFailed                = 0x0000000000000048,
		AccountLockedDown                       = 0x0000000000000049,
		AccountLogonDeniedVerifiedEmailRequired = 0x000000000000004A,
		NoMatchingURL                           = 0x000000000000004B,
		BadResponse                             = 0x000000000000004C,
		RequirePasswordReEntry                  = 0x000000000000004D,
		ValueOutOfRange                         = 0x000000000000004E,
		UnexpectedError                         = 0x000000000000004F,
		Disabled                                = 0x0000000000000050,
		InvalidCEGSubmission                    = 0x0000000000000051,
		RestrictedDevice                        = 0x0000000000000052,
		RegionLocked                            = 0x0000000000000053,
		RateLimitExceeded                       = 0x0000000000000054,
		AccountLoginDeniedNeedTwoFactor         = 0x0000000000000055,
		ItemDeleted                             = 0x0000000000000056,
		AccountLoginDeniedThrottle              = 0x0000000000000057,
		TwoFactorCodeMismatch                   = 0x0000000000000058,
		TwoFactorActivationCodeMismatch         = 0x0000000000000059,
		AccountAssociatedToMultiplePartners     = 0x000000000000005A,
		NotModified                             = 0x000000000000005B,
		NoMobileDevice                          = 0x000000000000005C,
		TimeNotSynced                           = 0x000000000000005D,
		SmsCodeFailed                           = 0x000000000000005E,
		AccountLimitExceeded                    = 0x000000000000005F,
		AccountActivityLimitExceeded            = 0x0000000000000060,
		PhoneActivityLimitExceeded              = 0x0000000000000061,
		RefundToWallet                          = 0x0000000000000062,
		EmailSendFailure                        = 0x0000000000000063,
		NotSettled                              = 0x0000000000000064,
		NeedCaptcha                             = 0x0000000000000065,
		GSLTDenied                              = 0x0000000000000066,
		GSOwnerDenied                           = 0x0000000000000067,
		InvalidItemType                         = 0x0000000000000068,
		IPBanned                                = 0x0000000000000069,
		GSLTExpired                             = 0x000000000000006A,
		InsufficientFunds                       = 0x000000000000006B,
		TooManyPending                          = 0x000000000000006C,
		NoSiteLicensesFound                     = 0x000000000000006D,
		WGNetworkSendExceeded                   = 0x000000000000006E,
		AccountNotFriends                       = 0x000000000000006F,
		LimitedUserAccount                      = 0x0000000000000070,
		CantRemoveItem                          = 0x0000000000000071,
		MAX                                     = 0x0000000000000072
	};

	/**
	 * Enum SteamCore.ESteamMessageType
	 */
	enum class ESteamMessageType : uint8_t
	{
		ENotification = 0x0000000000000000,
		EMessage      = 0x0000000000000001,
		EWarning      = 0x0000000000000002,
		MAX           = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.ESteamPersonaChange
	 */
	enum class ESteamPersonaChange : uint8_t
	{
		Name                = 0x0000000000000000,
		Status              = 0x0000000000000001,
		ComeOnline          = 0x0000000000000002,
		GoneOffline         = 0x0000000000000003,
		GamePlayed          = 0x0000000000000004,
		GameServer          = 0x0000000000000005,
		Avatar              = 0x0000000000000006,
		JoinedSource        = 0x0000000000000007,
		LeftSource          = 0x0000000000000008,
		RelationshipChanged = 0x0000000000000009,
		NameFirstSet        = 0x000000000000000A,
		FacebookInfo        = 0x000000000000000B,
		Nickname            = 0x000000000000000C,
		SteamLevel          = 0x000000000000000D,
		MAX                 = 0x000000000000000E
	};

	/**
	 * Enum SteamCore.ESteamChatRoomEnterResponse
	 */
	enum class ESteamChatRoomEnterResponse : uint8_t
	{
		None              = 0x0000000000000000,
		Success           = 0x0000000000000001,
		DoesntExist       = 0x0000000000000002,
		NotAllowed        = 0x0000000000000003,
		Full              = 0x0000000000000004,
		Error             = 0x0000000000000005,
		Banned            = 0x0000000000000006,
		Limited           = 0x0000000000000007,
		ClanDisabled      = 0x0000000000000008,
		CommunityBan      = 0x0000000000000009,
		MemberBlockedYou  = 0x000000000000000A,
		YouBlockedMember  = 0x000000000000000B,
		RatelimitExceeded = 0x000000000000000C,
		MAX               = 0x000000000000000D
	};

	/**
	 * Enum SteamCore.ESteamPlayerAcceptState
	 */
	enum class ESteamPlayerAcceptState : uint8_t
	{
		Unknown        = 0x0000000000000000,
		PlayerAccepted = 0x0000000000000001,
		PlayerDeclined = 0x0000000000000002,
		MAX            = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.ESteamAuthSessionResponse
	 */
	enum class ESteamAuthSessionResponse : uint8_t
	{
		OK                           = 0x0000000000000000,
		UserNotConnectedToSteam      = 0x0000000000000001,
		NoLicenseOrExpired           = 0x0000000000000002,
		VACBanned                    = 0x0000000000000003,
		LoggedInElseWhere            = 0x0000000000000004,
		VACCheckTimedOut             = 0x0000000000000005,
		AuthTicketCanceled           = 0x0000000000000006,
		AuthTicketInvalidAlreadyUsed = 0x0000000000000007,
		AuthTicketInvalid            = 0x0000000000000008,
		PublisherIssuedBan           = 0x0000000000000009,
		MAX                          = 0x000000000000000A
	};

	/**
	 * Enum SteamCore.ESteamDenyReason
	 */
	enum class ESteamDenyReason : uint8_t
	{
		Invalid                 = 0x0000000000000000,
		InvalidVersion          = 0x0000000000000001,
		Generic                 = 0x0000000000000002,
		NotLoggedOn             = 0x0000000000000003,
		NoLicense               = 0x0000000000000004,
		Cheater                 = 0x0000000000000005,
		LoggedInElseWhere       = 0x0000000000000006,
		UnknownText             = 0x0000000000000007,
		IncompatibleAnticheat   = 0x0000000000000008,
		MemoryCorruption        = 0x0000000000000009,
		IncompatibleSoftware    = 0x000000000000000A,
		SteamConnectionLost     = 0x000000000000000B,
		SteamConnectionError    = 0x000000000000000C,
		SteamResponseTimedOut   = 0x000000000000000D,
		SteamValidationStalled  = 0x000000000000000E,
		SteamOwnerLeftGuestUser = 0x000000000000000F,
		MAX                     = 0x0000000000000010
	};

	/**
	 * Enum SteamCore.ESteamFavoriteFlags
	 */
	enum class ESteamFavoriteFlags : uint8_t
	{
		None     = 0x0000000000000000,
		Favorite = 0x0000000000000001,
		History  = 0x0000000000000002,
		MAX      = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.ESteamChatEntryType
	 */
	enum class ESteamChatEntryType : uint8_t
	{
		Invalid          = 0x0000000000000000,
		ChatMsg          = 0x0000000000000001,
		Typing           = 0x0000000000000002,
		InviteGame       = 0x0000000000000003,
		Emote            = 0x0000000000000004,
		LeftConversation = 0x0000000000000005,
		Entered          = 0x0000000000000006,
		WasKicked        = 0x0000000000000007,
		WasBanned        = 0x0000000000000008,
		Disconnected     = 0x0000000000000009,
		HistoricalChat   = 0x000000000000000A,
		LinkBlocked      = 0x000000000000000B,
		MAX              = 0x000000000000000C
	};

	/**
	 * Enum SteamCore.ESteamChatMemberStateChange
	 */
	enum class ESteamChatMemberStateChange : uint8_t
	{
		None         = 0x0000000000000000,
		Entered      = 0x0000000000000001,
		Left         = 0x0000000000000002,
		Disconnected = 0x0000000000000003,
		Kicked       = 0x0000000000000004,
		Banned       = 0x0000000000000005,
		MAX          = 0x0000000000000006
	};

	/**
	 * Enum SteamCore.ESteamP2PSessionError
	 */
	enum class ESteamP2PSessionError : uint8_t
	{
		None                   = 0x0000000000000000,
		NotRunningApp          = 0x0000000000000001,
		NoRightsToApp          = 0x0000000000000002,
		DestinationNotLoggedIn = 0x0000000000000003,
		Timeout                = 0x0000000000000004,
		Max                    = 0x0000000000000005
	};

	/**
	 * Enum SteamCore.ESteamFailureType
	 */
	enum class ESteamFailureType : uint8_t
	{
		FlushedCallbackQueue = 0x0000000000000000,
		PipeFail             = 0x0000000000000001,
		MAX                  = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamCheckFileSignature
	 */
	enum class ESteamCheckFileSignature : uint8_t
	{
		InvalidSignature             = 0x0000000000000000,
		ValidSignature               = 0x0000000000000001,
		FileNotFound                 = 0x0000000000000002,
		NoSignaturesFoundForThisApp  = 0x0000000000000003,
		NoSignaturesFoundForThisFile = 0x0000000000000004,
		MAX                          = 0x0000000000000005
	};

	/**
	 * Enum SteamCore.ESteamSubsystem
	 */
	enum class ESteamSubsystem : uint8_t
	{
		SteamCore          = 0x0000000000000000,
		AppList            = 0x0000000000000001,
		Apps               = 0x0000000000000002,
		Friends            = 0x0000000000000003,
		GameServer         = 0x0000000000000004,
		GameServerStats    = 0x0000000000000005,
		Inventory          = 0x0000000000000006,
		Input              = 0x0000000000000007,
		Matchmaking        = 0x0000000000000008,
		MatchmakingServers = 0x0000000000000009,
		Music              = 0x000000000000000A,
		Networking         = 0x000000000000000B,
		NetworkingUtils    = 0x000000000000000C,
		ParentalSettings   = 0x000000000000000D,
		RemoteStorage      = 0x000000000000000E,
		RemotePlay         = 0x000000000000000F,
		Screenshots        = 0x0000000000000010,
		UGC                = 0x0000000000000011,
		User               = 0x0000000000000012,
		UserStats          = 0x0000000000000013,
		Utils              = 0x0000000000000014,
		Video              = 0x0000000000000015,
		SteamParties       = 0x0000000000000016,
		GameSearch         = 0x0000000000000017,
		MAX                = 0x0000000000000018
	};

	/**
	 * Enum SteamCore.ESteamOverlayToStoreFlag
	 */
	enum class ESteamOverlayToStoreFlag : uint8_t
	{
		None             = 0x0000000000000000,
		AddToCart        = 0x0000000000000001,
		AddToCartAndShow = 0x0000000000000002,
		MAX              = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.ESteamUserRestriction
	 */
	enum class ESteamUserRestriction : uint8_t
	{
		None        = 0x0000000000000000,
		Unknown     = 0x0000000000000001,
		AnyChat     = 0x0000000000000002,
		VoiceChat   = 0x0000000000000003,
		GroupChat   = 0x0000000000000004,
		Rating      = 0x0000000000000005,
		GameInvites = 0x0000000000000006,
		Trading     = 0x0000000000000007,
		MAX         = 0x0000000000000008
	};

	/**
	 * Enum SteamCore.ESteamFriendFlags
	 */
	enum class ESteamFriendFlags : uint8_t
	{
		None                 = 0x0000000000000000,
		Blocked              = 0x0000000000000001,
		FriendshipRequested  = 0x0000000000000002,
		Immediate            = 0x0000000000000003,
		ClanMember           = 0x0000000000000004,
		OnGameServer         = 0x0000000000000005,
		RequestingFriendship = 0x0000000000000006,
		RequestingInfo       = 0x0000000000000007,
		Ignored              = 0x0000000000000008,
		IgnoredFriend        = 0x0000000000000009,
		ChatMember           = 0x000000000000000A,
		All                  = 0x000000000000000B,
		MAX                  = 0x000000000000000C
	};

	/**
	 * Enum SteamCore.ESteamPersonaState
	 */
	enum class ESteamPersonaState : uint8_t
	{
		Offline        = 0x0000000000000000,
		Online         = 0x0000000000000001,
		Busy           = 0x0000000000000002,
		Away           = 0x0000000000000003,
		Snooze         = 0x0000000000000004,
		LookingToTrade = 0x0000000000000005,
		LookingToPlay  = 0x0000000000000006,
		Max            = 0x0000000000000007
	};

	/**
	 * Enum SteamCore.ESteamFriendRelationship
	 */
	enum class ESteamFriendRelationship : uint8_t
	{
		None                 = 0x0000000000000000,
		Blocked              = 0x0000000000000001,
		RequestRecipient     = 0x0000000000000002,
		Friend               = 0x0000000000000003,
		RequestInitiator     = 0x0000000000000004,
		Ignored              = 0x0000000000000005,
		IgnoredFriend        = 0x0000000000000006,
		Suggested_DEPRECATED = 0x0000000000000007,
		Max                  = 0x0000000000000008
	};

	/**
	 * Enum SteamCore.ESteamActivateGameOverlayToWebPageMode
	 */
	enum class ESteamActivateGameOverlayToWebPageMode : uint8_t
	{
		Default = 0x0000000000000000,
		Modal   = 0x0000000000000001,
		MAX     = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamPlayerResult
	 */
	enum class ESteamPlayerResult : uint8_t
	{
		Invalid         = 0x0000000000000000,
		FailedToConnect = 0x0000000000000001,
		Abandoned       = 0x0000000000000002,
		Kicked          = 0x0000000000000003,
		Incomplete      = 0x0000000000000004,
		Completed       = 0x0000000000000005,
		MAX             = 0x0000000000000006
	};

	/**
	 * Enum SteamCore.ESteamGameSearchErrorCode
	 */
	enum class ESteamGameSearchErrorCode : uint8_t
	{
		Invalid                           = 0x0000000000000000,
		OK                                = 0x0000000000000001,
		Failed_Search_Already_In_Progress = 0x0000000000000002,
		Failed_No_Search_In_Progress      = 0x0000000000000003,
		Failed_Not_Lobby_Leader           = 0x0000000000000004,
		Failed_No_Host_Available          = 0x0000000000000005,
		Failed_Search_Params_Invalid      = 0x0000000000000006,
		Failed_Offline                    = 0x0000000000000007,
		Failed_NotAuthorized              = 0x0000000000000008,
		Failed_Unknown_Error              = 0x0000000000000009,
		MAX                               = 0x000000000000000A
	};

	/**
	 * Enum SteamCore.ESteamCoreInputLEDFlag
	 */
	enum class ESteamCoreInputLEDFlag : uint8_t
	{
		SetColor           = 0x0000000000000000,
		RestoreUserDefault = 0x0000000000000001,
		MAX                = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamCoreInputType
	 */
	enum class ESteamCoreInputType : uint8_t
	{
		Unknown              = 0x0000000000000000,
		SteamController      = 0x0000000000000001,
		XBox360Controller    = 0x0000000000000002,
		XBoxOneController    = 0x0000000000000003,
		GenericGamepad       = 0x0000000000000004,
		PS4Controller        = 0x0000000000000005,
		AppleMFiController   = 0x0000000000000006,
		AndroidController    = 0x0000000000000007,
		SwitchJoyConPair     = 0x0000000000000008,
		SwitchJoyConSingle   = 0x0000000000000009,
		SwitchProController  = 0x000000000000000A,
		MobileTouch          = 0x000000000000000B,
		PS3Controller        = 0x000000000000000C,
		Count                = 0x000000000000000D,
		MaximumPossibleValue = 0x000000000000000E,
		MAX                  = 0x000000000000000F
	};

	/**
	 * Enum SteamCore.ESteamCoreControllerPad
	 */
	enum class ESteamCoreControllerPad : uint8_t
	{
		Left  = 0x0000000000000000,
		Right = 0x0000000000000001,
		MAX   = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamCoreXboxOrigin
	 */
	enum class ESteamCoreXboxOrigin : uint8_t
	{
		A                    = 0x0000000000000000,
		B                    = 0x0000000000000001,
		X                    = 0x0000000000000002,
		Y                    = 0x0000000000000003,
		LeftBumper           = 0x0000000000000004,
		RightBumper          = 0x0000000000000005,
		Menu                 = 0x0000000000000006,
		View                 = 0x0000000000000007,
		LeftTrigger_Pull     = 0x0000000000000008,
		LeftTrigger_Click    = 0x0000000000000009,
		RightTrigger_Pull    = 0x000000000000000A,
		RightTrigger_Click   = 0x000000000000000B,
		LeftStick_Move       = 0x000000000000000C,
		LeftStick_Click      = 0x000000000000000D,
		LeftStick_DPadNorth  = 0x000000000000000E,
		LeftStick_DPadSouth  = 0x000000000000000F,
		LeftStick_DPadWest   = 0x0000000000000010,
		LeftStick_DPadEast   = 0x0000000000000011,
		RightStick_Move      = 0x0000000000000012,
		RightStick_Click     = 0x0000000000000013,
		RightStick_DPadNorth = 0x0000000000000014,
		RightStick_DPadSouth = 0x0000000000000015,
		RightStick_DPadWest  = 0x0000000000000016,
		RightStick_DPadEast  = 0x0000000000000017,
		DPad_North           = 0x0000000000000018,
		DPad_South           = 0x0000000000000019,
		DPad_West            = 0x000000000000001A,
		DPad_East            = 0x000000000000001B,
		Count                = 0x000000000000001C,
		MAX                  = 0x000000000000001D
	};

	/**
	 * Enum SteamCore.ESteamCoreInputActionOrigin
	 */
	enum class ESteamCoreInputActionOrigin : uint8_t
	{
		None                                = 0x0000000000000000,
		SteamController_A                   = 0x0000000000000001,
		SteamController_B                   = 0x0000000000000002,
		SteamController_X                   = 0x0000000000000003,
		SteamController_Y                   = 0x0000000000000004,
		SteamController_LeftBumper          = 0x0000000000000005,
		SteamController_RightBumper         = 0x0000000000000006,
		SteamController_LeftGrip            = 0x0000000000000007,
		SteamController_RightGrip           = 0x0000000000000008,
		SteamController_Start               = 0x0000000000000009,
		SteamController_Back                = 0x000000000000000A,
		SteamController_LeftPad_Touch       = 0x000000000000000B,
		SteamController_LeftPad_Swipe       = 0x000000000000000C,
		SteamController_LeftPad_Click       = 0x000000000000000D,
		SteamController_LeftPad_DPadNorth   = 0x000000000000000E,
		SteamController_LeftPad_DPadSouth   = 0x000000000000000F,
		SteamController_LeftPad_DPadWest    = 0x0000000000000010,
		SteamController_LeftPad_DPadEast    = 0x0000000000000011,
		SteamController_RightPad_Touch      = 0x0000000000000012,
		SteamController_RightPad_Swipe      = 0x0000000000000013,
		SteamController_RightPad_Click      = 0x0000000000000014,
		SteamController_RightPad_DPadNorth  = 0x0000000000000015,
		SteamController_RightPad_DPadSouth  = 0x0000000000000016,
		SteamController_RightPad_DPadWest   = 0x0000000000000017,
		SteamController_RightPad_DPadEast   = 0x0000000000000018,
		SteamController_LeftTrigger_Pull    = 0x0000000000000019,
		SteamController_LeftTrigger_Click   = 0x000000000000001A,
		SteamController_RightTrigger_Pull   = 0x000000000000001B,
		SteamController_RightTrigger_Click  = 0x000000000000001C,
		SteamController_LeftStick_Move      = 0x000000000000001D,
		SteamController_LeftStick_Click     = 0x000000000000001E,
		SteamController_LeftStick_DPadNorth = 0x000000000000001F,
		SteamController_LeftStick_DPadSouth = 0x0000000000000020,
		SteamController_LeftStick_DPadWest  = 0x0000000000000021,
		SteamController_LeftStick_DPadEast  = 0x0000000000000022,
		SteamController_Gyro_Move           = 0x0000000000000023,
		SteamController_Gyro_Pitch          = 0x0000000000000024,
		SteamController_Gyro_Yaw            = 0x0000000000000025,
		SteamController_Gyro_Roll           = 0x0000000000000026,
		SteamController_Reserved0           = 0x0000000000000027,
		SteamController_Reserved1           = 0x0000000000000028,
		SteamController_Reserved2           = 0x0000000000000029,
		SteamController_Reserved3           = 0x000000000000002A,
		SteamController_Reserved4           = 0x000000000000002B,
		SteamController_Reserved5           = 0x000000000000002C,
		SteamController_Reserved6           = 0x000000000000002D,
		SteamController_Reserved7           = 0x000000000000002E,
		SteamController_Reserved8           = 0x000000000000002F,
		SteamController_Reserved9           = 0x0000000000000030,
		SteamController_Reserved10          = 0x0000000000000031,
		PS4_X                               = 0x0000000000000032,
		PS4_Circle                          = 0x0000000000000033,
		PS4_Triangle                        = 0x0000000000000034,
		PS4_Square                          = 0x0000000000000035,
		PS4_LeftBumper                      = 0x0000000000000036,
		PS4_RightBumper                     = 0x0000000000000037,
		PS4_Options                         = 0x0000000000000038,
		PS4_Share                           = 0x0000000000000039,
		PS4_LeftPad_Touch                   = 0x000000000000003A,
		PS4_LeftPad_Swipe                   = 0x000000000000003B,
		PS4_LeftPad_Click                   = 0x000000000000003C,
		PS4_LeftPad_DPadNorth               = 0x000000000000003D,
		PS4_LeftPad_DPadSouth               = 0x000000000000003E,
		PS4_LeftPad_DPadWest                = 0x000000000000003F,
		PS4_LeftPad_DPadEast                = 0x0000000000000040,
		PS4_RightPad_Touch                  = 0x0000000000000041,
		PS4_RightPad_Swipe                  = 0x0000000000000042,
		PS4_RightPad_Click                  = 0x0000000000000043,
		PS4_RightPad_DPadNorth              = 0x0000000000000044,
		PS4_RightPad_DPadSouth              = 0x0000000000000045,
		PS4_RightPad_DPadWest               = 0x0000000000000046,
		PS4_RightPad_DPadEast               = 0x0000000000000047,
		PS4_CenterPad_Touch                 = 0x0000000000000048,
		PS4_CenterPad_Swipe                 = 0x0000000000000049,
		PS4_CenterPad_Click                 = 0x000000000000004A,
		PS4_CenterPad_DPadNorth             = 0x000000000000004B,
		PS4_CenterPad_DPadSouth             = 0x000000000000004C,
		PS4_CenterPad_DPadWest              = 0x000000000000004D,
		PS4_CenterPad_DPadEast              = 0x000000000000004E,
		PS4_LeftTrigger_Pull                = 0x000000000000004F,
		PS4_LeftTrigger_Click               = 0x0000000000000050,
		PS4_RightTrigger_Pull               = 0x0000000000000051,
		PS4_RightTrigger_Click              = 0x0000000000000052,
		PS4_LeftStick_Move                  = 0x0000000000000053,
		PS4_LeftStick_Click                 = 0x0000000000000054,
		PS4_LeftStick_DPadNorth             = 0x0000000000000055,
		PS4_LeftStick_DPadSouth             = 0x0000000000000056,
		PS4_LeftStick_DPadWest              = 0x0000000000000057,
		PS4_LeftStick_DPadEast              = 0x0000000000000058,
		PS4_RightStick_Move                 = 0x0000000000000059,
		PS4_RightStick_Click                = 0x000000000000005A,
		PS4_RightStick_DPadNorth            = 0x000000000000005B,
		PS4_RightStick_DPadSouth            = 0x000000000000005C,
		PS4_RightStick_DPadWest             = 0x000000000000005D,
		PS4_RightStick_DPadEast             = 0x000000000000005E,
		PS4_DPad_North                      = 0x000000000000005F,
		PS4_DPad_South                      = 0x0000000000000060,
		PS4_DPad_West                       = 0x0000000000000061,
		PS4_DPad_East                       = 0x0000000000000062,
		PS4_Gyro_Move                       = 0x0000000000000063,
		PS4_Gyro_Pitch                      = 0x0000000000000064,
		PS4_Gyro_Yaw                        = 0x0000000000000065,
		PS4_Gyro_Roll                       = 0x0000000000000066,
		PS4_DPad_Move                       = 0x0000000000000067,
		PS4_Reserved1                       = 0x0000000000000068,
		PS4_Reserved2                       = 0x0000000000000069,
		PS4_Reserved3                       = 0x000000000000006A,
		PS4_Reserved4                       = 0x000000000000006B,
		PS4_Reserved5                       = 0x000000000000006C,
		PS4_Reserved6                       = 0x000000000000006D,
		PS4_Reserved7                       = 0x000000000000006E,
		PS4_Reserved8                       = 0x000000000000006F,
		PS4_Reserved9                       = 0x0000000000000070,
		PS4_Reserved10                      = 0x0000000000000071,
		XBoxOne_A                           = 0x0000000000000072,
		XBoxOne_B                           = 0x0000000000000073,
		XBoxOne_X                           = 0x0000000000000074,
		XBoxOne_Y                           = 0x0000000000000075,
		XBoxOne_LeftBumper                  = 0x0000000000000076,
		XBoxOne_RightBumper                 = 0x0000000000000077,
		XBoxOne_Menu                        = 0x0000000000000078,
		XBoxOne_View                        = 0x0000000000000079,
		XBoxOne_LeftTrigger_Pull            = 0x000000000000007A,
		XBoxOne_LeftTrigger_Click           = 0x000000000000007B,
		XBoxOne_RightTrigger_Pull           = 0x000000000000007C,
		XBoxOne_RightTrigger_Click          = 0x000000000000007D,
		XBoxOne_LeftStick_Move              = 0x000000000000007E,
		XBoxOne_LeftStick_Click             = 0x000000000000007F,
		XBoxOne_LeftStick_DPadNorth         = 0x0000000000000080,
		XBoxOne_LeftStick_DPadSouth         = 0x0000000000000081,
		XBoxOne_LeftStick_DPadWest          = 0x0000000000000082,
		XBoxOne_LeftStick_DPadEast          = 0x0000000000000083,
		XBoxOne_RightStick_Move             = 0x0000000000000084,
		XBoxOne_RightStick_Click            = 0x0000000000000085,
		XBoxOne_RightStick_DPadNorth        = 0x0000000000000086,
		XBoxOne_RightStick_DPadSouth        = 0x0000000000000087,
		XBoxOne_RightStick_DPadWest         = 0x0000000000000088,
		XBoxOne_RightStick_DPadEast         = 0x0000000000000089,
		XBoxOne_DPad_North                  = 0x000000000000008A,
		XBoxOne_DPad_South                  = 0x000000000000008B,
		XBoxOne_DPad_West                   = 0x000000000000008C,
		XBoxOne_DPad_East                   = 0x000000000000008D,
		XBoxOne_DPad_Move                   = 0x000000000000008E,
		XBoxOne_Reserved1                   = 0x000000000000008F,
		XBoxOne_Reserved2                   = 0x0000000000000090,
		XBoxOne_Reserved3                   = 0x0000000000000091,
		XBoxOne_Reserved4                   = 0x0000000000000092,
		XBoxOne_Reserved5                   = 0x0000000000000093,
		XBoxOne_Reserved6                   = 0x0000000000000094,
		XBoxOne_Reserved7                   = 0x0000000000000095,
		XBoxOne_Reserved8                   = 0x0000000000000096,
		XBoxOne_Reserved9                   = 0x0000000000000097,
		XBoxOne_Reserved10                  = 0x0000000000000098,
		XBox360_A                           = 0x0000000000000099,
		XBox360_B                           = 0x000000000000009A,
		XBox360_X                           = 0x000000000000009B,
		XBox360_Y                           = 0x000000000000009C,
		XBox360_LeftBumper                  = 0x000000000000009D,
		XBox360_RightBumper                 = 0x000000000000009E,
		XBox360_Start                       = 0x000000000000009F,
		XBox360_Back                        = 0x00000000000000A0,
		XBox360_LeftTrigger_Pull            = 0x00000000000000A1,
		XBox360_LeftTrigger_Click           = 0x00000000000000A2,
		XBox360_RightTrigger_Pull           = 0x00000000000000A3,
		XBox360_RightTrigger_Click          = 0x00000000000000A4,
		XBox360_LeftStick_Move              = 0x00000000000000A5,
		XBox360_LeftStick_Click             = 0x00000000000000A6,
		XBox360_LeftStick_DPadNorth         = 0x00000000000000A7,
		XBox360_LeftStick_DPadSouth         = 0x00000000000000A8,
		XBox360_LeftStick_DPadWest          = 0x00000000000000A9,
		XBox360_LeftStick_DPadEast          = 0x00000000000000AA,
		XBox360_RightStick_Move             = 0x00000000000000AB,
		XBox360_RightStick_Click            = 0x00000000000000AC,
		XBox360_RightStick_DPadNorth        = 0x00000000000000AD,
		XBox360_RightStick_DPadSouth        = 0x00000000000000AE,
		XBox360_RightStick_DPadWest         = 0x00000000000000AF,
		XBox360_RightStick_DPadEast         = 0x00000000000000B0,
		XBox360_DPad_North                  = 0x00000000000000B1,
		XBox360_DPad_South                  = 0x00000000000000B2,
		XBox360_DPad_West                   = 0x00000000000000B3,
		XBox360_DPad_East                   = 0x00000000000000B4,
		XBox360_DPad_Move                   = 0x00000000000000B5,
		XBox360_Reserved1                   = 0x00000000000000B6,
		XBox360_Reserved2                   = 0x00000000000000B7,
		XBox360_Reserved3                   = 0x00000000000000B8,
		XBox360_Reserved4                   = 0x00000000000000B9,
		XBox360_Reserved5                   = 0x00000000000000BA,
		XBox360_Reserved6                   = 0x00000000000000BB,
		XBox360_Reserved7                   = 0x00000000000000BC,
		XBox360_Reserved8                   = 0x00000000000000BD,
		XBox360_Reserved9                   = 0x00000000000000BE,
		XBox360_Reserved10                  = 0x00000000000000BF,
		Switch_A                            = 0x00000000000000C0,
		Switch_B                            = 0x00000000000000C1,
		Switch_X                            = 0x00000000000000C2,
		Switch_Y                            = 0x00000000000000C3,
		Switch_LeftBumper                   = 0x00000000000000C4,
		Switch_RightBumper                  = 0x00000000000000C5,
		Switch_Plus                         = 0x00000000000000C6,
		Switch_Minus                        = 0x00000000000000C7,
		Switch_Capture                      = 0x00000000000000C8,
		Switch_LeftTrigger_Pull             = 0x00000000000000C9,
		Switch_LeftTrigger_Click            = 0x00000000000000CA,
		Switch_RightTrigger_Pull            = 0x00000000000000CB,
		Switch_RightTrigger_Click           = 0x00000000000000CC,
		Switch_LeftStick_Move               = 0x00000000000000CD,
		Switch_LeftStick_Click              = 0x00000000000000CE,
		Switch_LeftStick_DPadNorth          = 0x00000000000000CF,
		Switch_LeftStick_DPadSouth          = 0x00000000000000D0,
		Switch_LeftStick_DPadWest           = 0x00000000000000D1,
		Switch_LeftStick_DPadEast           = 0x00000000000000D2,
		Switch_RightStick_Move              = 0x00000000000000D3,
		Switch_RightStick_Click             = 0x00000000000000D4,
		Switch_RightStick_DPadNorth         = 0x00000000000000D5,
		Switch_RightStick_DPadSouth         = 0x00000000000000D6,
		Switch_RightStick_DPadWest          = 0x00000000000000D7,
		Switch_RightStick_DPadEast          = 0x00000000000000D8,
		Switch_DPad_North                   = 0x00000000000000D9,
		Switch_DPad_South                   = 0x00000000000000DA,
		Switch_DPad_West                    = 0x00000000000000DB,
		Switch_DPad_East                    = 0x00000000000000DC,
		Switch_ProGyro_Move                 = 0x00000000000000DD,
		Switch_ProGyro_Pitch                = 0x00000000000000DE,
		Switch_ProGyro_Yaw                  = 0x00000000000000DF,
		Switch_ProGyro_Roll                 = 0x00000000000000E0,
		Switch_DPad_Move                    = 0x00000000000000E1,
		Switch_Reserved1                    = 0x00000000000000E2,
		Switch_Reserved2                    = 0x00000000000000E3,
		Switch_Reserved3                    = 0x00000000000000E4,
		Switch_Reserved4                    = 0x00000000000000E5,
		Switch_Reserved5                    = 0x00000000000000E6,
		Switch_Reserved6                    = 0x00000000000000E7,
		Switch_Reserved7                    = 0x00000000000000E8,
		Switch_Reserved8                    = 0x00000000000000E9,
		Switch_Reserved9                    = 0x00000000000000EA,
		Switch_Reserved10                   = 0x00000000000000EB,
		Switch_RightGyro_Move               = 0x00000000000000EC,
		Switch_RightGyro_Pitch              = 0x00000000000000ED,
		Switch_RightGyro_Yaw                = 0x00000000000000EE,
		Switch_RightGyro_Roll               = 0x00000000000000EF,
		Switch_LeftGyro_Move                = 0x00000000000000F0,
		Switch_LeftGyro_Pitch               = 0x00000000000000F1,
		Switch_LeftGyro_Yaw                 = 0x00000000000000F2,
		Switch_LeftGyro_Roll                = 0x00000000000000F3,
		Switch_LeftGrip_Lower               = 0x00000000000000F4,
		Switch_LeftGrip_Upper               = 0x00000000000000F5,
		Switch_RightGrip_Lower              = 0x00000000000000F6,
		Switch_RightGrip_Upper              = 0x00000000000000F7,
		Switch_Reserved11                   = 0x00000000000000F8,
		Switch_Reserved12                   = 0x00000000000000F9,
		Switch_Reserved13                   = 0x00000000000000FA,
		Switch_Reserved14                   = 0x00000000000000FB,
		Switch_Reserved15                   = 0x00000000000000FC,
		Switch_Reserved16                   = 0x00000000000000FD,
		Switch_Reserved17                   = 0x00000000000000FE,
		Switch_Reserved18                   = 0x00000000000000FF,
		MAX                                 = 0x0000000000000100
	};

	/**
	 * Enum SteamCore.ESteamCoreInputSourceMode
	 */
	enum class ESteamCoreInputSourceMode : uint8_t
	{
		None           = 0x0000000000000000,
		Dpad           = 0x0000000000000001,
		Buttons        = 0x0000000000000002,
		FourButtons    = 0x0000000000000003,
		AbsoluteMouse  = 0x0000000000000004,
		RelativeMouse  = 0x0000000000000005,
		JoystickMove   = 0x0000000000000006,
		JoystickMouse  = 0x0000000000000007,
		JoystickCamera = 0x0000000000000008,
		ScrollWheel    = 0x0000000000000009,
		Trigger        = 0x000000000000000A,
		TouchMenu      = 0x000000000000000B,
		MouseJoystick  = 0x000000000000000C,
		MouseRegion    = 0x000000000000000D,
		RadialMenu     = 0x000000000000000E,
		SingleButton   = 0x000000000000000F,
		Switches       = 0x0000000000000010,
		MAX            = 0x0000000000000011
	};

	/**
	 * Enum SteamCore.ESteamCoreInputSource
	 */
	enum class ESteamCoreInputSource : uint8_t
	{
		None           = 0x0000000000000000,
		LeftTrackpad   = 0x0000000000000001,
		RightTrackpad  = 0x0000000000000002,
		Joystick       = 0x0000000000000003,
		ABXY           = 0x0000000000000004,
		Switch         = 0x0000000000000005,
		LeftTrigger    = 0x0000000000000006,
		RightTrigger   = 0x0000000000000007,
		LeftBumper     = 0x0000000000000008,
		RightBumper    = 0x0000000000000009,
		Gyro           = 0x000000000000000A,
		CenterTrackpad = 0x000000000000000B,
		RightJoystick  = 0x000000000000000C,
		DPad           = 0x000000000000000D,
		Key            = 0x000000000000000E,
		Mouse          = 0x000000000000000F,
		LeftGyro       = 0x0000000000000010,
		Count          = 0x0000000000000011,
		MAX            = 0x0000000000000012
	};

	/**
	 * Enum SteamCore.ESteamCoreItemFlags
	 */
	enum class ESteamCoreItemFlags : uint8_t
	{
		ENoTrade  = 0x0000000000000000,
		ERemoved  = 0x0000000000000001,
		EConsumed = 0x0000000000000002,
		MAX       = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.ESteamLobbyDistanceFilter
	 */
	enum class ESteamLobbyDistanceFilter : uint8_t
	{
		Close     = 0x0000000000000000,
		Default   = 0x0000000000000001,
		Far       = 0x0000000000000002,
		Worldwide = 0x0000000000000003,
		MAX       = 0x0000000000000004
	};

	/**
	 * Enum SteamCore.ESteamLobbyComparison
	 */
	enum class ESteamLobbyComparison : uint8_t
	{
		EqualToOrLessThan    = 0x0000000000000000,
		LessThan             = 0x0000000000000001,
		Equal                = 0x0000000000000002,
		GreaterThan          = 0x0000000000000003,
		EqualToOrGreaterThan = 0x0000000000000004,
		NotEqual             = 0x0000000000000005,
		MAX                  = 0x0000000000000006
	};

	/**
	 * Enum SteamCore.ESteamLobbyType
	 */
	enum class ESteamLobbyType : uint8_t
	{
		Private     = 0x0000000000000000,
		FriendsOnly = 0x0000000000000001,
		Public      = 0x0000000000000002,
		Invisible   = 0x0000000000000003,
		MAX         = 0x0000000000000004
	};

	/**
	 * Enum SteamCore.ESteamSessionFindType
	 */
	enum class ESteamSessionFindType : uint8_t
	{
		Listen    = 0x0000000000000000,
		Dedicated = 0x0000000000000001,
		MAX       = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamAudioPlaybackStatus
	 */
	enum class ESteamAudioPlaybackStatus : uint8_t
	{
		Undefined = 0x0000000000000000,
		Playing   = 0x0000000000000001,
		Paused    = 0x0000000000000002,
		Idle      = 0x0000000000000003,
		MAX       = 0x0000000000000004
	};

	/**
	 * Enum SteamCore.ESteamP2PSend
	 */
	enum class ESteamP2PSend : uint8_t
	{
		Unreliable            = 0x0000000000000000,
		UnreliableNoDelay     = 0x0000000000000001,
		Reliable              = 0x0000000000000002,
		ReliableWithBuffering = 0x0000000000000003,
		MAX                   = 0x0000000000000004
	};

	/**
	 * Enum SteamCore.ESteamParentalFeature
	 */
	enum class ESteamParentalFeature : uint8_t
	{
		Invalid       = 0x0000000000000000,
		Store         = 0x0000000000000001,
		Community     = 0x0000000000000002,
		Profile       = 0x0000000000000003,
		Friends       = 0x0000000000000004,
		News          = 0x0000000000000005,
		Trading       = 0x0000000000000006,
		Settings      = 0x0000000000000007,
		Console       = 0x0000000000000008,
		Browser       = 0x0000000000000009,
		ParentalSetup = 0x000000000000000A,
		Library       = 0x000000000000000B,
		Test          = 0x000000000000000C,
		Max           = 0x000000000000000D
	};

	/**
	 * Enum SteamCore.ESteamPartiesBeaconLocationData
	 */
	enum class ESteamPartiesBeaconLocationData : uint8_t
	{
		Invalid       = 0x0000000000000000,
		Name          = 0x0000000000000001,
		IconURLSmall  = 0x0000000000000002,
		IconURLMedium = 0x0000000000000003,
		IconURLLarge  = 0x0000000000000004,
		MAX           = 0x0000000000000005
	};

	/**
	 * Enum SteamCore.ESteamPartiesBeaconLocationType
	 */
	enum class ESteamPartiesBeaconLocationType : uint8_t
	{
		Invalid   = 0x0000000000000000,
		ChatGroup = 0x0000000000000001,
		Max       = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamCoreDeviceFormFactor
	 */
	enum class ESteamCoreDeviceFormFactor : uint8_t
	{
		Unknown  = 0x0000000000000000,
		Phone    = 0x0000000000000001,
		Tablet   = 0x0000000000000002,
		Computer = 0x0000000000000003,
		TV       = 0x0000000000000004,
		MAX      = 0x0000000000000005
	};

	/**
	 * Enum SteamCore.ESteamUGCReadAction
	 */
	enum class ESteamUGCReadAction : uint8_t
	{
		k_EUGCRead_ContinueReadingUntilFinished = 0x0000000000000000,
		k_EUGCRead_ContinueReading              = 0x0000000000000001,
		k_EUGCRead_Close                        = 0x0000000000000002,
		k_EUGCRead_MAX                          = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.ESteamRemoteStoragePlatform
	 */
	enum class ESteamRemoteStoragePlatform : uint8_t
	{
		None      = 0x0000000000000000,
		Windows   = 0x0000000000000001,
		OSX       = 0x0000000000000002,
		PS3       = 0x0000000000000003,
		Linux     = 0x0000000000000004,
		Reserved2 = 0x0000000000000005,
		All       = 0x0000000000000006,
		MAX       = 0x0000000000000007
	};

	/**
	 * Enum SteamCore.ESteamVRScreenshotType
	 */
	enum class ESteamVRScreenshotType : uint8_t
	{
		None           = 0x0000000000000000,
		Mono           = 0x0000000000000001,
		Stereo         = 0x0000000000000002,
		MonoCubemap    = 0x0000000000000003,
		MonoPanorama   = 0x0000000000000004,
		StereoPanorama = 0x0000000000000005,
		MAX            = 0x0000000000000006
	};

	/**
	 * Enum SteamCore.ESteamAccountType
	 */
	enum class ESteamAccountType : uint8_t
	{
		Invalid        = 0x0000000000000000,
		Individual     = 0x0000000000000001,
		Multiseat      = 0x0000000000000002,
		GameServer     = 0x0000000000000003,
		AnonGameServer = 0x0000000000000004,
		Pending        = 0x0000000000000005,
		ContentServer  = 0x0000000000000006,
		Clan           = 0x0000000000000007,
		Chat           = 0x0000000000000008,
		ConsoleUser    = 0x0000000000000009,
		AnonUser       = 0x000000000000000A,
		Max            = 0x000000000000000B
	};

	/**
	 * Enum SteamCore.ESteamBeginAuthSessionResult
	 */
	enum class ESteamBeginAuthSessionResult : uint8_t
	{
		OK               = 0x0000000000000000,
		InvalidTicket    = 0x0000000000000001,
		DuplicateRequest = 0x0000000000000002,
		InvalidVersion   = 0x0000000000000003,
		GameMismatch     = 0x0000000000000004,
		ExpiredTicket    = 0x0000000000000005,
		MAX              = 0x0000000000000006
	};

	/**
	 * Enum SteamCore.ESteamUserHasLicenseForAppResult
	 */
	enum class ESteamUserHasLicenseForAppResult : uint8_t
	{
		HasLicense         = 0x0000000000000000,
		DoesNotHaveLicense = 0x0000000000000001,
		NoAuth             = 0x0000000000000002,
		MAX                = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.EOnlineComparison
	 */
	enum class EOnlineComparison : uint8_t
	{
		Equals            = 0x0000000000000000,
		NotEquals         = 0x0000000000000001,
		GreaterThan       = 0x0000000000000002,
		GreaterThanEquals = 0x0000000000000003,
		LessThan          = 0x0000000000000004,
		LessThanEquals    = 0x0000000000000005,
		MAX               = 0x0000000000000006
	};

	/**
	 * Enum SteamCore.ESteamComparisonOp
	 */
	enum class ESteamComparisonOp : uint8_t
	{
		Equals            = 0x0000000000000000,
		NotEquals         = 0x0000000000000001,
		GreaterThan       = 0x0000000000000002,
		GreaterThanEquals = 0x0000000000000003,
		LessThan          = 0x0000000000000004,
		LessThanEquals    = 0x0000000000000005,
		Near              = 0x0000000000000006,
		In                = 0x0000000000000007,
		NotIn             = 0x0000000000000008,
		MAX               = 0x0000000000000009
	};

	/**
	 * Enum SteamCore.ESteamRemoteStoragePublishedFileVisibility
	 */
	enum class ESteamRemoteStoragePublishedFileVisibility : uint8_t
	{
		Public      = 0x0000000000000000,
		FriendsOnly = 0x0000000000000001,
		Private     = 0x0000000000000002,
		MAX         = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.ESteamWorkshopFileType
	 */
	enum class ESteamWorkshopFileType : uint8_t
	{
		First                  = 0x0000000000000000,
		Community              = 0x0000000000000001,
		Microtransaction       = 0x0000000000000002,
		Collection             = 0x0000000000000003,
		Art                    = 0x0000000000000004,
		Video                  = 0x0000000000000005,
		Screenshot             = 0x0000000000000006,
		Game                   = 0x0000000000000007,
		Software               = 0x0000000000000008,
		Concept                = 0x0000000000000009,
		WebGuide               = 0x000000000000000A,
		IntegratedGuide        = 0x000000000000000B,
		Merch                  = 0x000000000000000C,
		ControllerBinding      = 0x000000000000000D,
		SteamworksAccessInvite = 0x000000000000000E,
		SteamVideo             = 0x000000000000000F,
		GameManagedItem        = 0x0000000000000010,
		Max                    = 0x0000000000000011
	};

	/**
	 * Enum SteamCore.ESteamItemPreviewType
	 */
	enum class ESteamItemPreviewType : uint8_t
	{
		Image                          = 0x0000000000000000,
		YouTubeVideo                   = 0x0000000000000001,
		Sketchfab                      = 0x0000000000000002,
		EnvironmentMap_HorizontalCross = 0x0000000000000003,
		EnvironmentMap_LatLong         = 0x0000000000000004,
		ReservedMax                    = 0x0000000000000005,
		MAX                            = 0x0000000000000006
	};

	/**
	 * Enum SteamCore.ESteamItemStatistic
	 */
	enum class ESteamItemStatistic : uint8_t
	{
		NumSubscriptions                    = 0x0000000000000000,
		NumFavorites                        = 0x0000000000000001,
		NumFollowers                        = 0x0000000000000002,
		NumUniqueSubscriptions              = 0x0000000000000003,
		NumUniqueFavorites                  = 0x0000000000000004,
		NumUniqueFollowers                  = 0x0000000000000005,
		NumUniqueWebsiteViews               = 0x0000000000000006,
		ReportScore                         = 0x0000000000000007,
		NumSecondsPlayed                    = 0x0000000000000008,
		NumPlaytimeSessions                 = 0x0000000000000009,
		NumComments                         = 0x000000000000000A,
		NumSecondsPlayedDuringTimePeriod    = 0x000000000000000B,
		NumPlaytimeSessionsDuringTimePeriod = 0x000000000000000C,
		MAX                                 = 0x000000000000000D
	};

	/**
	 * Enum SteamCore.ESteamItemState
	 */
	enum class ESteamItemState : uint8_t
	{
		None            = 0x0000000000000000,
		Subscribed      = 0x0000000000000001,
		LegacyItem      = 0x0000000000000002,
		Installed       = 0x0000000000000003,
		NeedsUpdate     = 0x0000000000000004,
		Downloading     = 0x0000000000000005,
		DownloadPending = 0x0000000000000006,
		MAX             = 0x0000000000000007
	};

	/**
	 * Enum SteamCore.ESteamItemUpdateStatus
	 */
	enum class ESteamItemUpdateStatus : uint8_t
	{
		Invalid              = 0x0000000000000000,
		PreparingConfig      = 0x0000000000000001,
		PreparingContent     = 0x0000000000000002,
		UploadingContent     = 0x0000000000000003,
		UploadingPreviewFile = 0x0000000000000004,
		CommittingChanges    = 0x0000000000000005,
		MAX                  = 0x0000000000000006
	};

	/**
	 * Enum SteamCore.ESteamUGCQuery
	 */
	enum class ESteamUGCQuery : uint8_t
	{
		RankedByVote                                  = 0x0000000000000000,
		RankedByPublicationDate                       = 0x0000000000000001,
		AcceptedForGameRankedByAcceptanceDate         = 0x0000000000000002,
		RankedByTrend                                 = 0x0000000000000003,
		FavoritedByFriendsRankedByPublicationDate     = 0x0000000000000004,
		CreatedByFriendsRankedByPublicationDate       = 0x0000000000000005,
		RankedByNumTimesReported                      = 0x0000000000000006,
		CreatedByFollowedUsersRankedByPublicationDate = 0x0000000000000007,
		NotYetRated                                   = 0x0000000000000008,
		RankedByTotalVotesAsc                         = 0x0000000000000009,
		RankedByVotesUp                               = 0x000000000000000A,
		RankedByTextSearch                            = 0x000000000000000B,
		RankedByTotalUniqueSubscriptions              = 0x000000000000000C,
		RankedByPlaytimeTrend                         = 0x000000000000000D,
		RankedByTotalPlaytime                         = 0x000000000000000E,
		RankedByAveragePlaytimeTrend                  = 0x000000000000000F,
		RankedByLifetimeAveragePlaytime               = 0x0000000000000010,
		RankedByPlaytimeSessionsTrend                 = 0x0000000000000011,
		RankedByLifetimePlaytimeSessions              = 0x0000000000000012,
		MAX                                           = 0x0000000000000013
	};

	/**
	 * Enum SteamCore.ESteamUserUGCListSortOrder
	 */
	enum class ESteamUserUGCListSortOrder : uint8_t
	{
		CreationOrderDesc    = 0x0000000000000000,
		CreationOrderAsc     = 0x0000000000000001,
		TitleAsc             = 0x0000000000000002,
		LastUpdatedDesc      = 0x0000000000000003,
		SubscriptionDateDesc = 0x0000000000000004,
		VoteScoreDesc        = 0x0000000000000005,
		ForModeration        = 0x0000000000000006,
		MAX                  = 0x0000000000000007
	};

	/**
	 * Enum SteamCore.ESteamUserUGCList
	 */
	enum class ESteamUserUGCList : uint8_t
	{
		Published     = 0x0000000000000000,
		VotedOn       = 0x0000000000000001,
		VotedUp       = 0x0000000000000002,
		VotedDown     = 0x0000000000000003,
		WillVoteLater = 0x0000000000000004,
		Favorited     = 0x0000000000000005,
		Subscribed    = 0x0000000000000006,
		UsedOrPlayed  = 0x0000000000000007,
		Followed      = 0x0000000000000008,
		MAX           = 0x0000000000000009
	};

	/**
	 * Enum SteamCore.ESteamUGCMatchingUGCType
	 */
	enum class ESteamUGCMatchingUGCType : uint8_t
	{
		Items              = 0x0000000000000000,
		Items_Mtx          = 0x0000000000000001,
		Items_ReadyToUse   = 0x0000000000000002,
		Collections        = 0x0000000000000003,
		Artwork            = 0x0000000000000004,
		Videos             = 0x0000000000000005,
		Screenshots        = 0x0000000000000006,
		AllGuides          = 0x0000000000000007,
		WebGuides          = 0x0000000000000008,
		IntegratedGuides   = 0x0000000000000009,
		UsableInGame       = 0x000000000000000A,
		ControllerBindings = 0x000000000000000B,
		GameManagedItems   = 0x000000000000000C,
		All                = 0x000000000000000D,
		MAX                = 0x000000000000000E
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardUploadScoreMethod
	 */
	enum class ESteamLeaderboardUploadScoreMethod : uint8_t
	{
		None        = 0x0000000000000000,
		KeepBest    = 0x0000000000000001,
		ForceUpdate = 0x0000000000000002,
		MAX         = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardDisplayType
	 */
	enum class ESteamLeaderboardDisplayType : uint8_t
	{
		None             = 0x0000000000000000,
		Numeric          = 0x0000000000000001,
		TimeSeconds      = 0x0000000000000002,
		TimeMilliSeconds = 0x0000000000000003,
		MAX              = 0x0000000000000004
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardSortMethod
	 */
	enum class ESteamLeaderboardSortMethod : uint8_t
	{
		None       = 0x0000000000000000,
		Ascending  = 0x0000000000000001,
		Descending = 0x0000000000000002,
		MAX        = 0x0000000000000003
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardDataRequest
	 */
	enum class ESteamLeaderboardDataRequest : uint8_t
	{
		Global           = 0x0000000000000000,
		GlobalAroundUser = 0x0000000000000001,
		Friends          = 0x0000000000000002,
		Users            = 0x0000000000000003,
		MAX              = 0x0000000000000004
	};

	/**
	 * Enum SteamCore.ESteamVoiceResult
	 */
	enum class ESteamVoiceResult : uint8_t
	{
		OK                   = 0x0000000000000000,
		NotInitialized       = 0x0000000000000001,
		NotRecording         = 0x0000000000000002,
		NoData               = 0x0000000000000003,
		BufferTooSmall       = 0x0000000000000004,
		DataCorrupted        = 0x0000000000000005,
		Restricted           = 0x0000000000000006,
		UnsupportedCodec     = 0x0000000000000007,
		ReceiverOutOfDate    = 0x0000000000000008,
		ReceiverDidNotAnswer = 0x0000000000000009,
		MAX                  = 0x000000000000000A
	};

	/**
	 * Enum SteamCore.ESteamCoreIdentical
	 */
	enum class ESteamCoreIdentical : uint8_t
	{
		Identical    = 0x0000000000000000,
		NotIdentical = 0x0000000000000001,
		MAX          = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamCoreValid
	 */
	enum class ESteamCoreValid : uint8_t
	{
		Valid    = 0x0000000000000000,
		NotValid = 0x0000000000000001,
		MAX      = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamUniverse
	 */
	enum class ESteamUniverse : uint8_t
	{
		Invalid  = 0x0000000000000000,
		Public   = 0x0000000000000001,
		Beta     = 0x0000000000000002,
		Internal = 0x0000000000000003,
		Dev      = 0x0000000000000004,
		Max      = 0x0000000000000005
	};

	/**
	 * Enum SteamCore.ESteamNotificationPosition
	 */
	enum class ESteamNotificationPosition : uint8_t
	{
		TopLeft     = 0x0000000000000000,
		TopRight    = 0x0000000000000001,
		BottomLeft  = 0x0000000000000002,
		BottomRight = 0x0000000000000003,
		MAX         = 0x0000000000000004
	};

	/**
	 * Enum SteamCore.ESteamGamepadTextInputMode
	 */
	enum class ESteamGamepadTextInputMode : uint8_t
	{
		Normal   = 0x0000000000000000,
		Password = 0x0000000000000001,
		MAX      = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamGamepadTextInputLineMode
	 */
	enum class ESteamGamepadTextInputLineMode : uint8_t
	{
		SingleLine    = 0x0000000000000000,
		MultipleLines = 0x0000000000000001,
		MAX           = 0x0000000000000002
	};

	/**
	 * Enum SteamCore.ESteamTextFilteringContext
	 */
	enum class ESteamTextFilteringContext : uint8_t
	{
		k_ETextFilteringContextUnknown     = 0x0000000000000000,
		k_ETextFilteringContextGameContent = 0x0000000000000001,
		k_ETextFilteringContextChat        = 0x0000000000000002,
		k_ETextFilteringContextName        = 0x0000000000000003,
		k_MAX                              = 0x0000000000000004
	};

	/**
	 * Enum SteamCore.ESteamBroadcastUploadResult
	 */
	enum class ESteamBroadcastUploadResult : uint8_t
	{
		None              = 0x0000000000000000,
		OK                = 0x0000000000000001,
		InitFailed        = 0x0000000000000002,
		FrameFailed       = 0x0000000000000003,
		Timeout           = 0x0000000000000004,
		BandwidthExceeded = 0x0000000000000005,
		LowFPS            = 0x0000000000000006,
		MissingKeyFrames  = 0x0000000000000007,
		NoConnection      = 0x0000000000000008,
		RelayFailed       = 0x0000000000000009,
		SettingsChanged   = 0x000000000000000A,
		MissingAudio      = 0x000000000000000B,
		TooFarBehind      = 0x000000000000000C,
		TranscodeBehind   = 0x000000000000000D,
		MAX               = 0x000000000000000E
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
		ESteamResult                                               Result;                                                  // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UYJK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OF14[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G21K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Currency;                                                // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.SteamID
	 * Size -> 0x0008
	 */
	struct FSteamID
	{
	public:
		unsigned char                                              UnknownData_UCEP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamInventoryEligiblePromoItemDefIDs
	 * Size -> 0x0018
	 */
	struct FSteamInventoryEligiblePromoItemDefIDs
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KM70[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumEligiblePromoItemDefs;                                // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedData;                                             // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLAJ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_759C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_EVCT[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_DVNQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
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
		TArray<ESteamPersonaChange>                                Flags;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_67MK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_99GQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_PK62[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_7HIZ[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
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
		ESteamChatRoomEnterResponse                                ChatRoomEnterResponse;                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSB2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SetPersonaNameResponse
	 * Size -> 0x0003
	 */
	struct FSetPersonaNameResponse
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6LC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKW0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.FriendsIsFollowing
	 * Size -> 0x0018
	 */
	struct FFriendsIsFollowing
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XO1W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFollowing;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQKF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.FriendsEnumerateFollowingList
	 * Size -> 0x0020
	 */
	struct FFriendsEnumerateFollowingList
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TVE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4N8U[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHIF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CountPlayersInGame;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CountAcceptedGame;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HROG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamIDHost;                                             // 0x0020(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFinalCallback;                                          // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJZF[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RequestPlayersForGameProgressCallback
	 * Size -> 0x0018
	 */
	struct FRequestPlayersForGameProgressCallback
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50MQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SearchID;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.RequestPlayersForGameResultCallback
	 * Size -> 0x0050
	 */
	struct FRequestPlayersForGameResultCallback
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5II[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SearchID;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDPlayerFound;                                      // 0x0018(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDLobby;                                            // 0x0020(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamPlayerAcceptState                                    PlayerAcceptState;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L08V[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerIndex;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPlayersFound;                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPlayersAcceptedGame;                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuggestedTeamIndex;                                      // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2AG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueGameID;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.RequestPlayersForGameFinalResultCallback
	 * Size -> 0x0028
	 */
	struct FRequestPlayersForGameFinalResultCallback
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMF4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFZQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7T8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueGameID;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.AssociateWithClanResult
	 * Size -> 0x0001
	 */
	struct FAssociateWithClanResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.ComputeNewPlayerCompatibilityResult
	 * Size -> 0x0018
	 */
	struct FComputeNewPlayerCompatibilityResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPB3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_F291[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.ValidateAuthTicketResponse
	 * Size -> 0x0018
	 */
	struct FValidateAuthTicketResponse
	{
	public:
		struct FSteamID                                            SteamID;                                                 // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamAuthSessionResponse                                  AuthSessionResponse;                                     // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECK3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamDenyReason                                           DenyReason;                                              // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHOD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OptionalText;                                            // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.GSStatsReceived
	 * Size -> 0x0010
	 */
	struct FGSStatsReceived
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUBZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamIDUser;                                             // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.GSStatsStored
	 * Size -> 0x0010
	 */
	struct FGSStatsStored
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14UB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_DI9X[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESteamFavoriteFlags>                                Flags;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bAdd;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MV6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamChatEntryType                                        ChatEntryType;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPEG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		TArray<ESteamChatMemberStateChange>                        ChatMemberStateChange;                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_3ZOG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
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
		ESteamChatRoomEnterResponse                                ChatRoomEnterResponse;                                   // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6X4[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_SGV8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamGameID
	 * Size -> 0x0008
	 */
	struct FSteamGameID
	{
	public:
		unsigned char                                              UnknownData_8GJE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_56E8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T7NL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamChatRoomEnterResponse                                ChatRoomEnterResponse;                                   // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6HI[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamSessionSetting
	 * Size -> 0x0028
	 */
	struct FSteamSessionSetting
	{
	public:
		unsigned char                                              UnknownData_3AFC[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_UZXU[0x22];                                  // 0x008E(0x0022) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_AYRC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
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
		ESteamP2PSessionError                                      P2PSessionError;                                         // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7KI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.PartyBeaconID
	 * Size -> 0x0008
	 */
	struct FPartyBeaconID
	{
	public:
		unsigned char                                              UnknownData_L102[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.JoinPartyData
	 * Size -> 0x0028
	 */
	struct FJoinPartyData
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZI8H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJEF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_EP23[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageUnsubscribePublishedFileResult
	 * Size -> 0x0010
	 */
	struct FRemoteStorageUnsubscribePublishedFileResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVLS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageSubscribePublishedFileResult
	 * Size -> 0x0010
	 */
	struct FRemoteStorageSubscribePublishedFileResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXNG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_814B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_JYY5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageFileWriteAsyncComplete
	 * Size -> 0x0001
	 */
	struct FRemoteStorageFileWriteAsyncComplete
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageFileReadAsyncComplete
	 * Size -> 0x0018
	 */
	struct FRemoteStorageFileReadAsyncComplete
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3C7E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Offset;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Read;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9IFK[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamUGCHandle
	 * Size -> 0x0008
	 */
	struct FSteamUGCHandle
	{
	public:
		unsigned char                                              UnknownData_LM73[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageDownloadUGCResult
	 * Size -> 0x0030
	 */
	struct FRemoteStorageDownloadUGCResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TT0A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2Z7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_CRJE[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.ScreenshotReady
	 * Size -> 0x0008
	 */
	struct FScreenshotReady
	{
	public:
		struct FScreenshotHandle                                   Handle;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8IT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.ScreenshotRequested
	 * Size -> 0x0001
	 */
	struct FScreenshotRequested
	{
	public:
		unsigned char                                              UnknownData_A9ZO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.UserFavoriteItemsListChanged
	 * Size -> 0x0010
	 */
	struct FUserFavoriteItemsListChanged
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasAddRequest;                                          // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUKX[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.CreateItemResult
	 * Size -> 0x0018
	 */
	struct FCreateItemResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENZP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUserNeedsToAcceptWorkshopLegalAgreement;                // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOSN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SetUserItemVoteResult
	 * Size -> 0x0010
	 */
	struct FSetUserItemVoteResult
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoteUp;                                                 // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYUA[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.GetUserItemVoteResult
	 * Size -> 0x0010
	 */
	struct FGetUserItemVoteResult
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVotedUp;                                                // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVotedDown;                                              // 0x000A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoteSkipped;                                            // 0x000B(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99KP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.UGCQueryHandle
	 * Size -> 0x0008
	 */
	struct FUGCQueryHandle
	{
	public:
		unsigned char                                              UnknownData_FLIB[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamUGCQueryCompleted
	 * Size -> 0x0018
	 */
	struct FSteamUGCQueryCompleted
	{
	public:
		struct FUGCQueryHandle                                     Handle;                                                  // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NIOZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumResultsReturned;                                      // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalMatchingResults;                                    // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedData;                                             // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNTY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.AddAppDependencyResult
	 * Size -> 0x0018
	 */
	struct FAddAppDependencyResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DPQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1LR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RemoveAppDependencyResult
	 * Size -> 0x0018
	 */
	struct FRemoveAppDependencyResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPXK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XAJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.AddUGCDependencyResult
	 * Size -> 0x0018
	 */
	struct FAddUGCDependencyResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QLK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2RE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JIHV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.GetAppDependenciesResult
	 * Size -> 0x0028
	 */
	struct FGetAppDependenciesResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X83D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUserNeedsToAcceptWorkshopLegalAgreement;                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TPN7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.StartPlaytimeTrackingResult
	 * Size -> 0x0001
	 */
	struct FStartPlaytimeTrackingResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.StopPlaytimeTrackingResult
	 * Size -> 0x0001
	 */
	struct FStopPlaytimeTrackingResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.DownloadItemResult
	 * Size -> 0x0018
	 */
	struct FDownloadItemResult
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GUV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OLM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.ItemInstalled
	 * Size -> 0x0010
	 */
	struct FItemInstalled
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OH2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_NWHP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameServerIP;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameServerPort;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BSecure;                                                 // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamDenyReason                                           Reason;                                                  // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BBQ[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_QTRP[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.GetAuthSessionTicketResponse
	 * Size -> 0x0008
	 */
	struct FGetAuthSessionTicketResponse
	{
	public:
		struct FSteamTicketHandle                                  AuthTicket;                                              // 0x0000(0x0004) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RM0K[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.IPCFailure
	 * Size -> 0x0001
	 */
	struct FIPCFailure
	{
	public:
		ESteamFailureType                                          FailureType;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.LicensesUpdated
	 * Size -> 0x0001
	 */
	struct FLicensesUpdated
	{
	public:
		unsigned char                                              UnknownData_H6AO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.MicroTxnAuthorizationResponse
	 * Size -> 0x0020
	 */
	struct FMicroTxnAuthorizationResponse
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0A85[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OrderId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAuthorized;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZUWP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamServersConnected
	 * Size -> 0x0001
	 */
	struct FSteamServersConnected
	{
	public:
		unsigned char                                              UnknownData_EKYG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamServerConnectFailure
	 * Size -> 0x0002
	 */
	struct FSteamServerConnectFailure
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStillRetrying;                                          // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.SteamServersDisconnected
	 * Size -> 0x0001
	 */
	struct FSteamServersDisconnected
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.EncryptedAppTicketResponse
	 * Size -> 0x0001
	 */
	struct FEncryptedAppTicketResponse
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_VTTO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVXB[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_B7SP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GZF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BOR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_FBXT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamLeaderboardEntries
	 * Size -> 0x0008
	 */
	struct FSteamLeaderboardEntries
	{
	public:
		unsigned char                                              UnknownData_PAMX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_ATC2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_QGRS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RequestUserStatsData
	 * Size -> 0x0018
	 */
	struct FRequestUserStatsData
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2M3U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_HXV2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScoreChanged;                                           // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20AF[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGN9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_ETMV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_F9P3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.NumberOfCurrentPlayers
	 * Size -> 0x0008
	 */
	struct FNumberOfCurrentPlayers
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5W8U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUNC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.GlobalStatsReceived
	 * Size -> 0x0010
	 */
	struct FGlobalStatsReceived
	{
	public:
		struct FSteamGameID                                        GameID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YALV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.CheckFileSignature
	 * Size -> 0x0001
	 */
	struct FCheckFileSignature
	{
	public:
		ESteamCheckFileSignature                                   CheckFileSignature;                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.GamepadTextInputDismissed
	 * Size -> 0x0008
	 */
	struct FGamepadTextInputDismissed
	{
	public:
		bool                                                       bSubmitted;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5B7U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubmittedText;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.IPCountry
	 * Size -> 0x0001
	 */
	struct FIPCountry
	{
	public:
		unsigned char                                              UnknownData_QJEK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_E4G1[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.GetOPFSettingsResult
	 * Size -> 0x0008
	 */
	struct FGetOPFSettingsResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4E9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AppID;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.GetVideoURLResult
	 * Size -> 0x0018
	 */
	struct FGetVideoURLResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6INX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_QHHV[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.InputAnalogActionHandle
	 * Size -> 0x0008
	 */
	struct FInputAnalogActionHandle
	{
	public:
		unsigned char                                              UnknownData_ZCBP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.InputDigitalActionHandle
	 * Size -> 0x0008
	 */
	struct FInputDigitalActionHandle
	{
	public:
		unsigned char                                              UnknownData_ONLW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.InputActionSetHandle
	 * Size -> 0x0008
	 */
	struct FInputActionSetHandle
	{
	public:
		unsigned char                                              UnknownData_5AM3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.InputHandle
	 * Size -> 0x0008
	 */
	struct FInputHandle
	{
	public:
		unsigned char                                              UnknownData_XJ97[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		ESteamCoreInputSourceMode                                  Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQZJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      X;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQMU[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamItemInstanceID
	 * Size -> 0x0008
	 */
	struct FSteamItemInstanceID
	{
	public:
		unsigned char                                              UnknownData_F8IE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		TArray<ESteamCoreItemFlags>                                Flags;                                                   // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
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
		ESteamP2PSessionError                                      P2PSessionError;                                         // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUsingRelay;                                             // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BytesQueuedForSend;                                      // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PacketsQueuedForSend;                                    // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RC0S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RemoteIP;                                                // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RemotePort;                                              // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZUS7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_YRXX[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamPartyBeaconLocation
	 * Size -> 0x0018
	 */
	struct FSteamPartyBeaconLocation
	{
	public:
		ESteamPartiesBeaconLocationType                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UN47[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocationId;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.UGCFileWriteStreamHandle
	 * Size -> 0x0008
	 */
	struct FUGCFileWriteStreamHandle
	{
	public:
		unsigned char                                              UnknownData_FSCI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamSessionSearchSetting
	 * Size -> 0x0020
	 */
	struct FSteamSessionSearchSetting
	{
	public:
		unsigned char                                              UnknownData_869W[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_SXCY[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.UGCUpdateHandle
	 * Size -> 0x0008
	 */
	struct FUGCUpdateHandle
	{
	public:
		unsigned char                                              UnknownData_JNE6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamUGCDetails
	 * Size -> 0x00A8
	 */
	struct FSteamUGCDetails
	{
	public:
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamWorkshopFileType                                     FileType;                                                // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9JQ[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CreatorAppID;                                            // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConsumerAppID;                                           // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HLD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDOwner;                                            // 0x0038(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeCreated;                                             // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeUpdated;                                             // 0x0044(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeAddedToUserList;                                     // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamRemoteStoragePublishedFileVisibility                 Visibility;                                              // 0x004C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_YPOK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamUGCHandle                                     UGCHandle;                                               // 0x0018(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
