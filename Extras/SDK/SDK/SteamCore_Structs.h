#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
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
		None                                    = 0,
		OK                                      = 1,
		Fail                                    = 2,
		NoConnection                            = 3,
		sultNoConnectionRetry                   = 4,
		InvalidPassword                         = 5,
		LoggedInElsewhere                       = 6,
		InvalidProtocolVer                      = 7,
		InvalidParam                            = 8,
		FileNotFound                            = 9,
		Busy                                    = 10,
		InvalidState                            = 11,
		InvalidName                             = 12,
		InvalidEmail                            = 13,
		DuplicateName                           = 14,
		AccessDenied                            = 15,
		Timeout                                 = 16,
		Banned                                  = 17,
		AccountNotFound                         = 18,
		InvalidSteamID                          = 19,
		ServiceUnavailable                      = 20,
		NotLoggedOn                             = 21,
		Pending                                 = 22,
		EncryptionFailure                       = 23,
		InsufficientPrivilege                   = 24,
		LimitExceeded                           = 25,
		Revoked                                 = 26,
		Expired                                 = 27,
		AlreadyRedeemed                         = 28,
		DuplicateRequest                        = 29,
		AlreadyOwned                            = 30,
		IPNotFound                              = 31,
		PersistFailed                           = 32,
		LockingFailed                           = 33,
		LogonSessionReplaced                    = 34,
		ConnectFailed                           = 35,
		HandshakeFailed                         = 36,
		IOFailure                               = 37,
		RemoteDisconnect                        = 38,
		ShoppingCartNotFound                    = 39,
		Blocked                                 = 40,
		Ignored                                 = 41,
		NoMatch                                 = 42,
		AccountDisabled                         = 43,
		ServiceReadOnly                         = 44,
		AccountNotFeatured                      = 45,
		AdministratorOK                         = 46,
		ContentVersion                          = 47,
		TryAnotherCM                            = 48,
		PasswordRequiredToKickSession           = 49,
		AlreadyLoggedInElsewhere                = 50,
		Suspended                               = 51,
		Cancelled                               = 52,
		DataCorruption                          = 53,
		DiskFull                                = 54,
		RemoteCallFailed                        = 55,
		PasswordUnset                           = 56,
		ExternalAccountUnlinked                 = 57,
		PSNTicketInvalid                        = 58,
		ExternalAccountAlreadyLinked            = 59,
		RemoteFileConflict                      = 60,
		IllegalPassword                         = 61,
		SameAsPreviousValue                     = 62,
		AccountLogonDenied                      = 63,
		CannotUseOldPassword                    = 64,
		InvalidLoginAuthCode                    = 65,
		AccountLogonDeniedNoMail                = 66,
		HardwareNotCapableOfIPT                 = 67,
		IPTInitError                            = 68,
		ParentalControlRestricted               = 69,
		FacebookQueryError                      = 70,
		ExpiredLoginAuthCode                    = 71,
		IPLoginRestrictionFailed                = 72,
		AccountLockedDown                       = 73,
		AccountLogonDeniedVerifiedEmailRequired = 74,
		NoMatchingURL                           = 75,
		BadResponse                             = 76,
		RequirePasswordReEntry                  = 77,
		ValueOutOfRange                         = 78,
		UnexpectedError                         = 79,
		Disabled                                = 80,
		InvalidCEGSubmission                    = 81,
		RestrictedDevice                        = 82,
		RegionLocked                            = 83,
		RateLimitExceeded                       = 84,
		AccountLoginDeniedNeedTwoFactor         = 85,
		ItemDeleted                             = 86,
		AccountLoginDeniedThrottle              = 87,
		TwoFactorCodeMismatch                   = 88,
		TwoFactorActivationCodeMismatch         = 89,
		AccountAssociatedToMultiplePartners     = 90,
		NotModified                             = 91,
		NoMobileDevice                          = 92,
		TimeNotSynced                           = 93,
		SmsCodeFailed                           = 94,
		AccountLimitExceeded                    = 95,
		AccountActivityLimitExceeded            = 96,
		PhoneActivityLimitExceeded              = 97,
		RefundToWallet                          = 98,
		EmailSendFailure                        = 99,
		NotSettled                              = 100,
		NeedCaptcha                             = 101,
		GSLTDenied                              = 102,
		GSOwnerDenied                           = 103,
		InvalidItemType                         = 104,
		IPBanned                                = 105,
		GSLTExpired                             = 106,
		InsufficientFunds                       = 107,
		TooManyPending                          = 108,
		NoSiteLicensesFound                     = 109,
		WGNetworkSendExceeded                   = 110,
		AccountNotFriends                       = 111,
		LimitedUserAccount                      = 112,
		CantRemoveItem                          = 113,
		MAX                                     = 114
	};

	/**
	 * Enum SteamCore.ESteamMessageType
	 */
	enum class ESteamMessageType : uint8_t
	{
		ENotification = 0,
		EMessage      = 1,
		EWarning      = 2,
		MAX           = 3
	};

	/**
	 * Enum SteamCore.ESteamPersonaChange
	 */
	enum class ESteamPersonaChange : uint8_t
	{
		Name                = 0,
		Status              = 1,
		ComeOnline          = 2,
		GoneOffline         = 3,
		GamePlayed          = 4,
		GameServer          = 5,
		Avatar              = 6,
		JoinedSource        = 7,
		LeftSource          = 8,
		RelationshipChanged = 9,
		NameFirstSet        = 10,
		FacebookInfo        = 11,
		Nickname            = 12,
		SteamLevel          = 13,
		MAX                 = 14
	};

	/**
	 * Enum SteamCore.ESteamChatRoomEnterResponse
	 */
	enum class ESteamChatRoomEnterResponse : uint8_t
	{
		None              = 0,
		Success           = 1,
		DoesntExist       = 2,
		NotAllowed        = 3,
		Full              = 4,
		Error             = 5,
		Banned            = 6,
		Limited           = 7,
		ClanDisabled      = 8,
		CommunityBan      = 9,
		MemberBlockedYou  = 10,
		YouBlockedMember  = 11,
		RatelimitExceeded = 12,
		MAX               = 13
	};

	/**
	 * Enum SteamCore.ESteamPlayerAcceptState
	 */
	enum class ESteamPlayerAcceptState : uint8_t
	{
		Unknown        = 0,
		PlayerAccepted = 1,
		PlayerDeclined = 2,
		MAX            = 3
	};

	/**
	 * Enum SteamCore.ESteamAuthSessionResponse
	 */
	enum class ESteamAuthSessionResponse : uint8_t
	{
		OK                           = 0,
		UserNotConnectedToSteam      = 1,
		NoLicenseOrExpired           = 2,
		VACBanned                    = 3,
		LoggedInElseWhere            = 4,
		VACCheckTimedOut             = 5,
		AuthTicketCanceled           = 6,
		AuthTicketInvalidAlreadyUsed = 7,
		AuthTicketInvalid            = 8,
		PublisherIssuedBan           = 9,
		MAX                          = 10
	};

	/**
	 * Enum SteamCore.ESteamDenyReason
	 */
	enum class ESteamDenyReason : uint8_t
	{
		Invalid                 = 0,
		InvalidVersion          = 1,
		Generic                 = 2,
		NotLoggedOn             = 3,
		NoLicense               = 4,
		Cheater                 = 5,
		LoggedInElseWhere       = 6,
		UnknownText             = 7,
		IncompatibleAnticheat   = 8,
		MemoryCorruption        = 9,
		IncompatibleSoftware    = 10,
		SteamConnectionLost     = 11,
		SteamConnectionError    = 12,
		SteamResponseTimedOut   = 13,
		SteamValidationStalled  = 14,
		SteamOwnerLeftGuestUser = 15,
		MAX                     = 16
	};

	/**
	 * Enum SteamCore.ESteamFavoriteFlags
	 */
	enum class ESteamFavoriteFlags : uint8_t
	{
		None     = 0,
		Favorite = 1,
		History  = 2,
		MAX      = 3
	};

	/**
	 * Enum SteamCore.ESteamChatEntryType
	 */
	enum class ESteamChatEntryType : uint8_t
	{
		Invalid          = 0,
		ChatMsg          = 1,
		Typing           = 2,
		InviteGame       = 3,
		Emote            = 4,
		LeftConversation = 5,
		Entered          = 6,
		WasKicked        = 7,
		WasBanned        = 8,
		Disconnected     = 9,
		HistoricalChat   = 10,
		LinkBlocked      = 11,
		MAX              = 12
	};

	/**
	 * Enum SteamCore.ESteamChatMemberStateChange
	 */
	enum class ESteamChatMemberStateChange : uint8_t
	{
		None         = 0,
		Entered      = 1,
		Left         = 2,
		Disconnected = 3,
		Kicked       = 4,
		Banned       = 5,
		MAX          = 6
	};

	/**
	 * Enum SteamCore.ESteamP2PSessionError
	 */
	enum class ESteamP2PSessionError : uint8_t
	{
		None                   = 0,
		NotRunningApp          = 1,
		NoRightsToApp          = 2,
		DestinationNotLoggedIn = 3,
		Timeout                = 4,
		Max                    = 5
	};

	/**
	 * Enum SteamCore.ESteamFailureType
	 */
	enum class ESteamFailureType : uint8_t
	{
		FlushedCallbackQueue = 0,
		PipeFail             = 1,
		MAX                  = 2
	};

	/**
	 * Enum SteamCore.ESteamCheckFileSignature
	 */
	enum class ESteamCheckFileSignature : uint8_t
	{
		InvalidSignature             = 0,
		ValidSignature               = 1,
		FileNotFound                 = 2,
		NoSignaturesFoundForThisApp  = 3,
		NoSignaturesFoundForThisFile = 4,
		MAX                          = 5
	};

	/**
	 * Enum SteamCore.ESteamSubsystem
	 */
	enum class ESteamSubsystem : uint8_t
	{
		SteamCore          = 0,
		AppList            = 1,
		Apps               = 2,
		Friends            = 3,
		GameServer         = 4,
		GameServerStats    = 5,
		Inventory          = 6,
		Input              = 7,
		Matchmaking        = 8,
		MatchmakingServers = 9,
		Music              = 10,
		Networking         = 11,
		NetworkingUtils    = 12,
		ParentalSettings   = 13,
		RemoteStorage      = 14,
		RemotePlay         = 15,
		Screenshots        = 16,
		UGC                = 17,
		User               = 18,
		UserStats          = 19,
		Utils              = 20,
		Video              = 21,
		SteamParties       = 22,
		GameSearch         = 23,
		MAX                = 24
	};

	/**
	 * Enum SteamCore.ESteamOverlayToStoreFlag
	 */
	enum class ESteamOverlayToStoreFlag : uint8_t
	{
		None             = 0,
		AddToCart        = 1,
		AddToCartAndShow = 2,
		MAX              = 3
	};

	/**
	 * Enum SteamCore.ESteamUserRestriction
	 */
	enum class ESteamUserRestriction : uint8_t
	{
		None        = 0,
		Unknown     = 1,
		AnyChat     = 2,
		VoiceChat   = 3,
		GroupChat   = 4,
		Rating      = 5,
		GameInvites = 6,
		Trading     = 7,
		MAX         = 8
	};

	/**
	 * Enum SteamCore.ESteamFriendFlags
	 */
	enum class ESteamFriendFlags : uint8_t
	{
		None                 = 0,
		Blocked              = 1,
		FriendshipRequested  = 2,
		Immediate            = 3,
		ClanMember           = 4,
		OnGameServer         = 5,
		RequestingFriendship = 6,
		RequestingInfo       = 7,
		Ignored              = 8,
		IgnoredFriend        = 9,
		ChatMember           = 10,
		All                  = 11,
		MAX                  = 12
	};

	/**
	 * Enum SteamCore.ESteamPersonaState
	 */
	enum class ESteamPersonaState : uint8_t
	{
		Offline        = 0,
		Online         = 1,
		Busy           = 2,
		Away           = 3,
		Snooze         = 4,
		LookingToTrade = 5,
		LookingToPlay  = 6,
		Max            = 7
	};

	/**
	 * Enum SteamCore.ESteamFriendRelationship
	 */
	enum class ESteamFriendRelationship : uint8_t
	{
		None                 = 0,
		Blocked              = 1,
		RequestRecipient     = 2,
		Friend               = 3,
		RequestInitiator     = 4,
		Ignored              = 5,
		IgnoredFriend        = 6,
		Suggested_DEPRECATED = 7,
		Max                  = 8
	};

	/**
	 * Enum SteamCore.ESteamActivateGameOverlayToWebPageMode
	 */
	enum class ESteamActivateGameOverlayToWebPageMode : uint8_t
	{
		Default = 0,
		Modal   = 1,
		MAX     = 2
	};

	/**
	 * Enum SteamCore.ESteamPlayerResult
	 */
	enum class ESteamPlayerResult : uint8_t
	{
		Invalid         = 0,
		FailedToConnect = 1,
		Abandoned       = 2,
		Kicked          = 3,
		Incomplete      = 4,
		Completed       = 5,
		MAX             = 6
	};

	/**
	 * Enum SteamCore.ESteamGameSearchErrorCode
	 */
	enum class ESteamGameSearchErrorCode : uint8_t
	{
		Invalid                           = 0,
		OK                                = 1,
		Failed_Search_Already_In_Progress = 2,
		Failed_No_Search_In_Progress      = 3,
		Failed_Not_Lobby_Leader           = 4,
		Failed_No_Host_Available          = 5,
		Failed_Search_Params_Invalid      = 6,
		Failed_Offline                    = 7,
		Failed_NotAuthorized              = 8,
		Failed_Unknown_Error              = 9,
		MAX                               = 10
	};

	/**
	 * Enum SteamCore.ESteamCoreInputLEDFlag
	 */
	enum class ESteamCoreInputLEDFlag : uint8_t
	{
		SetColor           = 0,
		RestoreUserDefault = 1,
		MAX                = 2
	};

	/**
	 * Enum SteamCore.ESteamCoreInputType
	 */
	enum class ESteamCoreInputType : uint8_t
	{
		Unknown              = 0,
		SteamController      = 1,
		XBox360Controller    = 2,
		XBoxOneController    = 3,
		GenericGamepad       = 4,
		PS4Controller        = 5,
		AppleMFiController   = 6,
		AndroidController    = 7,
		SwitchJoyConPair     = 8,
		SwitchJoyConSingle   = 9,
		SwitchProController  = 10,
		MobileTouch          = 11,
		PS3Controller        = 12,
		Count                = 13,
		MaximumPossibleValue = 14,
		MAX                  = 15
	};

	/**
	 * Enum SteamCore.ESteamCoreControllerPad
	 */
	enum class ESteamCoreControllerPad : uint8_t
	{
		Left  = 0,
		Right = 1,
		MAX   = 2
	};

	/**
	 * Enum SteamCore.ESteamCoreXboxOrigin
	 */
	enum class ESteamCoreXboxOrigin : uint8_t
	{
		A                    = 0,
		B                    = 1,
		X                    = 2,
		Y                    = 3,
		LeftBumper           = 4,
		RightBumper          = 5,
		Menu                 = 6,
		View                 = 7,
		LeftTrigger_Pull     = 8,
		LeftTrigger_Click    = 9,
		RightTrigger_Pull    = 10,
		RightTrigger_Click   = 11,
		LeftStick_Move       = 12,
		LeftStick_Click      = 13,
		LeftStick_DPadNorth  = 14,
		LeftStick_DPadSouth  = 15,
		LeftStick_DPadWest   = 16,
		LeftStick_DPadEast   = 17,
		RightStick_Move      = 18,
		RightStick_Click     = 19,
		RightStick_DPadNorth = 20,
		RightStick_DPadSouth = 21,
		RightStick_DPadWest  = 22,
		RightStick_DPadEast  = 23,
		DPad_North           = 24,
		DPad_South           = 25,
		DPad_West            = 26,
		DPad_East            = 27,
		Count                = 28,
		MAX                  = 29
	};

	/**
	 * Enum SteamCore.ESteamCoreInputActionOrigin
	 */
	enum class ESteamCoreInputActionOrigin : uint8_t
	{
		None                                = 0,
		SteamController_A                   = 1,
		SteamController_B                   = 2,
		SteamController_X                   = 3,
		SteamController_Y                   = 4,
		SteamController_LeftBumper          = 5,
		SteamController_RightBumper         = 6,
		SteamController_LeftGrip            = 7,
		SteamController_RightGrip           = 8,
		SteamController_Start               = 9,
		SteamController_Back                = 10,
		SteamController_LeftPad_Touch       = 11,
		SteamController_LeftPad_Swipe       = 12,
		SteamController_LeftPad_Click       = 13,
		SteamController_LeftPad_DPadNorth   = 14,
		SteamController_LeftPad_DPadSouth   = 15,
		SteamController_LeftPad_DPadWest    = 16,
		SteamController_LeftPad_DPadEast    = 17,
		SteamController_RightPad_Touch      = 18,
		SteamController_RightPad_Swipe      = 19,
		SteamController_RightPad_Click      = 20,
		SteamController_RightPad_DPadNorth  = 21,
		SteamController_RightPad_DPadSouth  = 22,
		SteamController_RightPad_DPadWest   = 23,
		SteamController_RightPad_DPadEast   = 24,
		SteamController_LeftTrigger_Pull    = 25,
		SteamController_LeftTrigger_Click   = 26,
		SteamController_RightTrigger_Pull   = 27,
		SteamController_RightTrigger_Click  = 28,
		SteamController_LeftStick_Move      = 29,
		SteamController_LeftStick_Click     = 30,
		SteamController_LeftStick_DPadNorth = 31,
		SteamController_LeftStick_DPadSouth = 32,
		SteamController_LeftStick_DPadWest  = 33,
		SteamController_LeftStick_DPadEast  = 34,
		SteamController_Gyro_Move           = 35,
		SteamController_Gyro_Pitch          = 36,
		SteamController_Gyro_Yaw            = 37,
		SteamController_Gyro_Roll           = 38,
		SteamController_Reserved0           = 39,
		SteamController_Reserved1           = 40,
		SteamController_Reserved2           = 41,
		SteamController_Reserved3           = 42,
		SteamController_Reserved4           = 43,
		SteamController_Reserved5           = 44,
		SteamController_Reserved6           = 45,
		SteamController_Reserved7           = 46,
		SteamController_Reserved8           = 47,
		SteamController_Reserved9           = 48,
		SteamController_Reserved10          = 49,
		PS4_X                               = 50,
		PS4_Circle                          = 51,
		PS4_Triangle                        = 52,
		PS4_Square                          = 53,
		PS4_LeftBumper                      = 54,
		PS4_RightBumper                     = 55,
		PS4_Options                         = 56,
		PS4_Share                           = 57,
		PS4_LeftPad_Touch                   = 58,
		PS4_LeftPad_Swipe                   = 59,
		PS4_LeftPad_Click                   = 60,
		PS4_LeftPad_DPadNorth               = 61,
		PS4_LeftPad_DPadSouth               = 62,
		PS4_LeftPad_DPadWest                = 63,
		PS4_LeftPad_DPadEast                = 64,
		PS4_RightPad_Touch                  = 65,
		PS4_RightPad_Swipe                  = 66,
		PS4_RightPad_Click                  = 67,
		PS4_RightPad_DPadNorth              = 68,
		PS4_RightPad_DPadSouth              = 69,
		PS4_RightPad_DPadWest               = 70,
		PS4_RightPad_DPadEast               = 71,
		PS4_CenterPad_Touch                 = 72,
		PS4_CenterPad_Swipe                 = 73,
		PS4_CenterPad_Click                 = 74,
		PS4_CenterPad_DPadNorth             = 75,
		PS4_CenterPad_DPadSouth             = 76,
		PS4_CenterPad_DPadWest              = 77,
		PS4_CenterPad_DPadEast              = 78,
		PS4_LeftTrigger_Pull                = 79,
		PS4_LeftTrigger_Click               = 80,
		PS4_RightTrigger_Pull               = 81,
		PS4_RightTrigger_Click              = 82,
		PS4_LeftStick_Move                  = 83,
		PS4_LeftStick_Click                 = 84,
		PS4_LeftStick_DPadNorth             = 85,
		PS4_LeftStick_DPadSouth             = 86,
		PS4_LeftStick_DPadWest              = 87,
		PS4_LeftStick_DPadEast              = 88,
		PS4_RightStick_Move                 = 89,
		PS4_RightStick_Click                = 90,
		PS4_RightStick_DPadNorth            = 91,
		PS4_RightStick_DPadSouth            = 92,
		PS4_RightStick_DPadWest             = 93,
		PS4_RightStick_DPadEast             = 94,
		PS4_DPad_North                      = 95,
		PS4_DPad_South                      = 96,
		PS4_DPad_West                       = 97,
		PS4_DPad_East                       = 98,
		PS4_Gyro_Move                       = 99,
		PS4_Gyro_Pitch                      = 100,
		PS4_Gyro_Yaw                        = 101,
		PS4_Gyro_Roll                       = 102,
		PS4_DPad_Move                       = 103,
		PS4_Reserved1                       = 104,
		PS4_Reserved2                       = 105,
		PS4_Reserved3                       = 106,
		PS4_Reserved4                       = 107,
		PS4_Reserved5                       = 108,
		PS4_Reserved6                       = 109,
		PS4_Reserved7                       = 110,
		PS4_Reserved8                       = 111,
		PS4_Reserved9                       = 112,
		PS4_Reserved10                      = 113,
		XBoxOne_A                           = 114,
		XBoxOne_B                           = 115,
		XBoxOne_X                           = 116,
		XBoxOne_Y                           = 117,
		XBoxOne_LeftBumper                  = 118,
		XBoxOne_RightBumper                 = 119,
		XBoxOne_Menu                        = 120,
		XBoxOne_View                        = 121,
		XBoxOne_LeftTrigger_Pull            = 122,
		XBoxOne_LeftTrigger_Click           = 123,
		XBoxOne_RightTrigger_Pull           = 124,
		XBoxOne_RightTrigger_Click          = 125,
		XBoxOne_LeftStick_Move              = 126,
		XBoxOne_LeftStick_Click             = 127,
		XBoxOne_LeftStick_DPadNorth         = 128,
		XBoxOne_LeftStick_DPadSouth         = 129,
		XBoxOne_LeftStick_DPadWest          = 130,
		XBoxOne_LeftStick_DPadEast          = 131,
		XBoxOne_RightStick_Move             = 132,
		XBoxOne_RightStick_Click            = 133,
		XBoxOne_RightStick_DPadNorth        = 134,
		XBoxOne_RightStick_DPadSouth        = 135,
		XBoxOne_RightStick_DPadWest         = 136,
		XBoxOne_RightStick_DPadEast         = 137,
		XBoxOne_DPad_North                  = 138,
		XBoxOne_DPad_South                  = 139,
		XBoxOne_DPad_West                   = 140,
		XBoxOne_DPad_East                   = 141,
		XBoxOne_DPad_Move                   = 142,
		XBoxOne_Reserved1                   = 143,
		XBoxOne_Reserved2                   = 144,
		XBoxOne_Reserved3                   = 145,
		XBoxOne_Reserved4                   = 146,
		XBoxOne_Reserved5                   = 147,
		XBoxOne_Reserved6                   = 148,
		XBoxOne_Reserved7                   = 149,
		XBoxOne_Reserved8                   = 150,
		XBoxOne_Reserved9                   = 151,
		XBoxOne_Reserved10                  = 152,
		XBox360_A                           = 153,
		XBox360_B                           = 154,
		XBox360_X                           = 155,
		XBox360_Y                           = 156,
		XBox360_LeftBumper                  = 157,
		XBox360_RightBumper                 = 158,
		XBox360_Start                       = 159,
		XBox360_Back                        = 160,
		XBox360_LeftTrigger_Pull            = 161,
		XBox360_LeftTrigger_Click           = 162,
		XBox360_RightTrigger_Pull           = 163,
		XBox360_RightTrigger_Click          = 164,
		XBox360_LeftStick_Move              = 165,
		XBox360_LeftStick_Click             = 166,
		XBox360_LeftStick_DPadNorth         = 167,
		XBox360_LeftStick_DPadSouth         = 168,
		XBox360_LeftStick_DPadWest          = 169,
		XBox360_LeftStick_DPadEast          = 170,
		XBox360_RightStick_Move             = 171,
		XBox360_RightStick_Click            = 172,
		XBox360_RightStick_DPadNorth        = 173,
		XBox360_RightStick_DPadSouth        = 174,
		XBox360_RightStick_DPadWest         = 175,
		XBox360_RightStick_DPadEast         = 176,
		XBox360_DPad_North                  = 177,
		XBox360_DPad_South                  = 178,
		XBox360_DPad_West                   = 179,
		XBox360_DPad_East                   = 180,
		XBox360_DPad_Move                   = 181,
		XBox360_Reserved1                   = 182,
		XBox360_Reserved2                   = 183,
		XBox360_Reserved3                   = 184,
		XBox360_Reserved4                   = 185,
		XBox360_Reserved5                   = 186,
		XBox360_Reserved6                   = 187,
		XBox360_Reserved7                   = 188,
		XBox360_Reserved8                   = 189,
		XBox360_Reserved9                   = 190,
		XBox360_Reserved10                  = 191,
		Switch_A                            = 192,
		Switch_B                            = 193,
		Switch_X                            = 194,
		Switch_Y                            = 195,
		Switch_LeftBumper                   = 196,
		Switch_RightBumper                  = 197,
		Switch_Plus                         = 198,
		Switch_Minus                        = 199,
		Switch_Capture                      = 200,
		Switch_LeftTrigger_Pull             = 201,
		Switch_LeftTrigger_Click            = 202,
		Switch_RightTrigger_Pull            = 203,
		Switch_RightTrigger_Click           = 204,
		Switch_LeftStick_Move               = 205,
		Switch_LeftStick_Click              = 206,
		Switch_LeftStick_DPadNorth          = 207,
		Switch_LeftStick_DPadSouth          = 208,
		Switch_LeftStick_DPadWest           = 209,
		Switch_LeftStick_DPadEast           = 210,
		Switch_RightStick_Move              = 211,
		Switch_RightStick_Click             = 212,
		Switch_RightStick_DPadNorth         = 213,
		Switch_RightStick_DPadSouth         = 214,
		Switch_RightStick_DPadWest          = 215,
		Switch_RightStick_DPadEast          = 216,
		Switch_DPad_North                   = 217,
		Switch_DPad_South                   = 218,
		Switch_DPad_West                    = 219,
		Switch_DPad_East                    = 220,
		Switch_ProGyro_Move                 = 221,
		Switch_ProGyro_Pitch                = 222,
		Switch_ProGyro_Yaw                  = 223,
		Switch_ProGyro_Roll                 = 224,
		Switch_DPad_Move                    = 225,
		Switch_Reserved1                    = 226,
		Switch_Reserved2                    = 227,
		Switch_Reserved3                    = 228,
		Switch_Reserved4                    = 229,
		Switch_Reserved5                    = 230,
		Switch_Reserved6                    = 231,
		Switch_Reserved7                    = 232,
		Switch_Reserved8                    = 233,
		Switch_Reserved9                    = 234,
		Switch_Reserved10                   = 235,
		Switch_RightGyro_Move               = 236,
		Switch_RightGyro_Pitch              = 237,
		Switch_RightGyro_Yaw                = 238,
		Switch_RightGyro_Roll               = 239,
		Switch_LeftGyro_Move                = 240,
		Switch_LeftGyro_Pitch               = 241,
		Switch_LeftGyro_Yaw                 = 242,
		Switch_LeftGyro_Roll                = 243,
		Switch_LeftGrip_Lower               = 244,
		Switch_LeftGrip_Upper               = 245,
		Switch_RightGrip_Lower              = 246,
		Switch_RightGrip_Upper              = 247,
		Switch_Reserved11                   = 248,
		Switch_Reserved12                   = 249,
		Switch_Reserved13                   = 250,
		Switch_Reserved14                   = 251,
		Switch_Reserved15                   = 252,
		Switch_Reserved16                   = 253,
		Switch_Reserved17                   = 254,
		Switch_Reserved18                   = 255,
		MAX                                 = 256
	};

	/**
	 * Enum SteamCore.ESteamCoreInputSourceMode
	 */
	enum class ESteamCoreInputSourceMode : uint8_t
	{
		None           = 0,
		Dpad           = 1,
		Buttons        = 2,
		FourButtons    = 3,
		AbsoluteMouse  = 4,
		RelativeMouse  = 5,
		JoystickMove   = 6,
		JoystickMouse  = 7,
		JoystickCamera = 8,
		ScrollWheel    = 9,
		Trigger        = 10,
		TouchMenu      = 11,
		MouseJoystick  = 12,
		MouseRegion    = 13,
		RadialMenu     = 14,
		SingleButton   = 15,
		Switches       = 16,
		MAX            = 17
	};

	/**
	 * Enum SteamCore.ESteamCoreInputSource
	 */
	enum class ESteamCoreInputSource : uint8_t
	{
		None           = 0,
		LeftTrackpad   = 1,
		RightTrackpad  = 2,
		Joystick       = 3,
		ABXY           = 4,
		Switch         = 5,
		LeftTrigger    = 6,
		RightTrigger   = 7,
		LeftBumper     = 8,
		RightBumper    = 9,
		Gyro           = 10,
		CenterTrackpad = 11,
		RightJoystick  = 12,
		DPad           = 13,
		Key            = 14,
		Mouse          = 15,
		LeftGyro       = 16,
		Count          = 17,
		MAX            = 18
	};

	/**
	 * Enum SteamCore.ESteamCoreItemFlags
	 */
	enum class ESteamCoreItemFlags : uint8_t
	{
		ENoTrade  = 0,
		ERemoved  = 1,
		EConsumed = 2,
		MAX       = 3
	};

	/**
	 * Enum SteamCore.ESteamLobbyDistanceFilter
	 */
	enum class ESteamLobbyDistanceFilter : uint8_t
	{
		Close     = 0,
		Default   = 1,
		Far       = 2,
		Worldwide = 3,
		MAX       = 4
	};

	/**
	 * Enum SteamCore.ESteamLobbyComparison
	 */
	enum class ESteamLobbyComparison : uint8_t
	{
		EqualToOrLessThan    = 0,
		LessThan             = 1,
		Equal                = 2,
		GreaterThan          = 3,
		EqualToOrGreaterThan = 4,
		NotEqual             = 5,
		MAX                  = 6
	};

	/**
	 * Enum SteamCore.ESteamLobbyType
	 */
	enum class ESteamLobbyType : uint8_t
	{
		Private     = 0,
		FriendsOnly = 1,
		Public      = 2,
		Invisible   = 3,
		MAX         = 4
	};

	/**
	 * Enum SteamCore.ESteamSessionFindType
	 */
	enum class ESteamSessionFindType : uint8_t
	{
		Listen    = 0,
		Dedicated = 1,
		MAX       = 2
	};

	/**
	 * Enum SteamCore.ESteamAudioPlaybackStatus
	 */
	enum class ESteamAudioPlaybackStatus : uint8_t
	{
		Undefined = 0,
		Playing   = 1,
		Paused    = 2,
		Idle      = 3,
		MAX       = 4
	};

	/**
	 * Enum SteamCore.ESteamP2PSend
	 */
	enum class ESteamP2PSend : uint8_t
	{
		Unreliable            = 0,
		UnreliableNoDelay     = 1,
		Reliable              = 2,
		ReliableWithBuffering = 3,
		MAX                   = 4
	};

	/**
	 * Enum SteamCore.ESteamParentalFeature
	 */
	enum class ESteamParentalFeature : uint8_t
	{
		Invalid       = 0,
		Store         = 1,
		Community     = 2,
		Profile       = 3,
		Friends       = 4,
		News          = 5,
		Trading       = 6,
		Settings      = 7,
		Console       = 8,
		Browser       = 9,
		ParentalSetup = 10,
		Library       = 11,
		Test          = 12,
		Max           = 13
	};

	/**
	 * Enum SteamCore.ESteamPartiesBeaconLocationData
	 */
	enum class ESteamPartiesBeaconLocationData : uint8_t
	{
		Invalid       = 0,
		Name          = 1,
		IconURLSmall  = 2,
		IconURLMedium = 3,
		IconURLLarge  = 4,
		MAX           = 5
	};

	/**
	 * Enum SteamCore.ESteamPartiesBeaconLocationType
	 */
	enum class ESteamPartiesBeaconLocationType : uint8_t
	{
		Invalid   = 0,
		ChatGroup = 1,
		Max       = 2
	};

	/**
	 * Enum SteamCore.ESteamCoreDeviceFormFactor
	 */
	enum class ESteamCoreDeviceFormFactor : uint8_t
	{
		Unknown  = 0,
		Phone    = 1,
		Tablet   = 2,
		Computer = 3,
		TV       = 4,
		MAX      = 5
	};

	/**
	 * Enum SteamCore.ESteamUGCReadAction
	 */
	enum class ESteamUGCReadAction : uint8_t
	{
		k_EUGCRead_ContinueReadingUntilFinished = 0,
		k_EUGCRead_ContinueReading              = 1,
		k_EUGCRead_Close                        = 2,
		k_EUGCRead_MAX                          = 3
	};

	/**
	 * Enum SteamCore.ESteamRemoteStoragePlatform
	 */
	enum class ESteamRemoteStoragePlatform : uint8_t
	{
		None      = 0,
		Windows   = 1,
		OSX       = 2,
		PS3       = 3,
		Linux     = 4,
		Reserved2 = 5,
		All       = 6,
		MAX       = 7
	};

	/**
	 * Enum SteamCore.ESteamVRScreenshotType
	 */
	enum class ESteamVRScreenshotType : uint8_t
	{
		None           = 0,
		Mono           = 1,
		Stereo         = 2,
		MonoCubemap    = 3,
		MonoPanorama   = 4,
		StereoPanorama = 5,
		MAX            = 6
	};

	/**
	 * Enum SteamCore.ESteamAccountType
	 */
	enum class ESteamAccountType : uint8_t
	{
		Invalid        = 0,
		Individual     = 1,
		Multiseat      = 2,
		GameServer     = 3,
		AnonGameServer = 4,
		Pending        = 5,
		ContentServer  = 6,
		Clan           = 7,
		Chat           = 8,
		ConsoleUser    = 9,
		AnonUser       = 10,
		Max            = 11
	};

	/**
	 * Enum SteamCore.ESteamBeginAuthSessionResult
	 */
	enum class ESteamBeginAuthSessionResult : uint8_t
	{
		OK               = 0,
		InvalidTicket    = 1,
		DuplicateRequest = 2,
		InvalidVersion   = 3,
		GameMismatch     = 4,
		ExpiredTicket    = 5,
		MAX              = 6
	};

	/**
	 * Enum SteamCore.ESteamUserHasLicenseForAppResult
	 */
	enum class ESteamUserHasLicenseForAppResult : uint8_t
	{
		HasLicense         = 0,
		DoesNotHaveLicense = 1,
		NoAuth             = 2,
		MAX                = 3
	};

	/**
	 * Enum SteamCore.EOnlineComparison
	 */
	enum class EOnlineComparison : uint8_t
	{
		Equals            = 0,
		NotEquals         = 1,
		GreaterThan       = 2,
		GreaterThanEquals = 3,
		LessThan          = 4,
		LessThanEquals    = 5,
		MAX               = 6
	};

	/**
	 * Enum SteamCore.ESteamComparisonOp
	 */
	enum class ESteamComparisonOp : uint8_t
	{
		Equals            = 0,
		NotEquals         = 1,
		GreaterThan       = 2,
		GreaterThanEquals = 3,
		LessThan          = 4,
		LessThanEquals    = 5,
		Near              = 6,
		In                = 7,
		NotIn             = 8,
		MAX               = 9
	};

	/**
	 * Enum SteamCore.ESteamRemoteStoragePublishedFileVisibility
	 */
	enum class ESteamRemoteStoragePublishedFileVisibility : uint8_t
	{
		Public      = 0,
		FriendsOnly = 1,
		Private     = 2,
		MAX         = 3
	};

	/**
	 * Enum SteamCore.ESteamWorkshopFileType
	 */
	enum class ESteamWorkshopFileType : uint8_t
	{
		First                  = 0,
		Community              = 1,
		Microtransaction       = 2,
		Collection             = 3,
		Art                    = 4,
		Video                  = 5,
		Screenshot             = 6,
		Game                   = 7,
		Software               = 8,
		Concept                = 9,
		WebGuide               = 10,
		IntegratedGuide        = 11,
		Merch                  = 12,
		ControllerBinding      = 13,
		SteamworksAccessInvite = 14,
		SteamVideo             = 15,
		GameManagedItem        = 16,
		Max                    = 17
	};

	/**
	 * Enum SteamCore.ESteamItemPreviewType
	 */
	enum class ESteamItemPreviewType : uint8_t
	{
		Image                          = 0,
		YouTubeVideo                   = 1,
		Sketchfab                      = 2,
		EnvironmentMap_HorizontalCross = 3,
		EnvironmentMap_LatLong         = 4,
		ReservedMax                    = 5,
		MAX                            = 6
	};

	/**
	 * Enum SteamCore.ESteamItemStatistic
	 */
	enum class ESteamItemStatistic : uint8_t
	{
		NumSubscriptions                    = 0,
		NumFavorites                        = 1,
		NumFollowers                        = 2,
		NumUniqueSubscriptions              = 3,
		NumUniqueFavorites                  = 4,
		NumUniqueFollowers                  = 5,
		NumUniqueWebsiteViews               = 6,
		ReportScore                         = 7,
		NumSecondsPlayed                    = 8,
		NumPlaytimeSessions                 = 9,
		NumComments                         = 10,
		NumSecondsPlayedDuringTimePeriod    = 11,
		NumPlaytimeSessionsDuringTimePeriod = 12,
		MAX                                 = 13
	};

	/**
	 * Enum SteamCore.ESteamItemState
	 */
	enum class ESteamItemState : uint8_t
	{
		None            = 0,
		Subscribed      = 1,
		LegacyItem      = 2,
		Installed       = 3,
		NeedsUpdate     = 4,
		Downloading     = 5,
		DownloadPending = 6,
		MAX             = 7
	};

	/**
	 * Enum SteamCore.ESteamItemUpdateStatus
	 */
	enum class ESteamItemUpdateStatus : uint8_t
	{
		Invalid              = 0,
		PreparingConfig      = 1,
		PreparingContent     = 2,
		UploadingContent     = 3,
		UploadingPreviewFile = 4,
		CommittingChanges    = 5,
		MAX                  = 6
	};

	/**
	 * Enum SteamCore.ESteamUGCQuery
	 */
	enum class ESteamUGCQuery : uint8_t
	{
		RankedByVote                                  = 0,
		RankedByPublicationDate                       = 1,
		AcceptedForGameRankedByAcceptanceDate         = 2,
		RankedByTrend                                 = 3,
		FavoritedByFriendsRankedByPublicationDate     = 4,
		CreatedByFriendsRankedByPublicationDate       = 5,
		RankedByNumTimesReported                      = 6,
		CreatedByFollowedUsersRankedByPublicationDate = 7,
		NotYetRated                                   = 8,
		RankedByTotalVotesAsc                         = 9,
		RankedByVotesUp                               = 10,
		RankedByTextSearch                            = 11,
		RankedByTotalUniqueSubscriptions              = 12,
		RankedByPlaytimeTrend                         = 13,
		RankedByTotalPlaytime                         = 14,
		RankedByAveragePlaytimeTrend                  = 15,
		RankedByLifetimeAveragePlaytime               = 16,
		RankedByPlaytimeSessionsTrend                 = 17,
		RankedByLifetimePlaytimeSessions              = 18,
		MAX                                           = 19
	};

	/**
	 * Enum SteamCore.ESteamUserUGCListSortOrder
	 */
	enum class ESteamUserUGCListSortOrder : uint8_t
	{
		CreationOrderDesc    = 0,
		CreationOrderAsc     = 1,
		TitleAsc             = 2,
		LastUpdatedDesc      = 3,
		SubscriptionDateDesc = 4,
		VoteScoreDesc        = 5,
		ForModeration        = 6,
		MAX                  = 7
	};

	/**
	 * Enum SteamCore.ESteamUserUGCList
	 */
	enum class ESteamUserUGCList : uint8_t
	{
		Published     = 0,
		VotedOn       = 1,
		VotedUp       = 2,
		VotedDown     = 3,
		WillVoteLater = 4,
		Favorited     = 5,
		Subscribed    = 6,
		UsedOrPlayed  = 7,
		Followed      = 8,
		MAX           = 9
	};

	/**
	 * Enum SteamCore.ESteamUGCMatchingUGCType
	 */
	enum class ESteamUGCMatchingUGCType : uint8_t
	{
		Items              = 0,
		Items_Mtx          = 1,
		Items_ReadyToUse   = 2,
		Collections        = 3,
		Artwork            = 4,
		Videos             = 5,
		Screenshots        = 6,
		AllGuides          = 7,
		WebGuides          = 8,
		IntegratedGuides   = 9,
		UsableInGame       = 10,
		ControllerBindings = 11,
		GameManagedItems   = 12,
		All                = 13,
		MAX                = 14
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardUploadScoreMethod
	 */
	enum class ESteamLeaderboardUploadScoreMethod : uint8_t
	{
		None        = 0,
		KeepBest    = 1,
		ForceUpdate = 2,
		MAX         = 3
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardDisplayType
	 */
	enum class ESteamLeaderboardDisplayType : uint8_t
	{
		None             = 0,
		Numeric          = 1,
		TimeSeconds      = 2,
		TimeMilliSeconds = 3,
		MAX              = 4
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardSortMethod
	 */
	enum class ESteamLeaderboardSortMethod : uint8_t
	{
		None       = 0,
		Ascending  = 1,
		Descending = 2,
		MAX        = 3
	};

	/**
	 * Enum SteamCore.ESteamLeaderboardDataRequest
	 */
	enum class ESteamLeaderboardDataRequest : uint8_t
	{
		Global           = 0,
		GlobalAroundUser = 1,
		Friends          = 2,
		Users            = 3,
		MAX              = 4
	};

	/**
	 * Enum SteamCore.ESteamVoiceResult
	 */
	enum class ESteamVoiceResult : uint8_t
	{
		OK                   = 0,
		NotInitialized       = 1,
		NotRecording         = 2,
		NoData               = 3,
		BufferTooSmall       = 4,
		DataCorrupted        = 5,
		Restricted           = 6,
		UnsupportedCodec     = 7,
		ReceiverOutOfDate    = 8,
		ReceiverDidNotAnswer = 9,
		MAX                  = 10
	};

	/**
	 * Enum SteamCore.ESteamCoreIdentical
	 */
	enum class ESteamCoreIdentical : uint8_t
	{
		Identical    = 0,
		NotIdentical = 1,
		MAX          = 2
	};

	/**
	 * Enum SteamCore.ESteamCoreValid
	 */
	enum class ESteamCoreValid : uint8_t
	{
		Valid    = 0,
		NotValid = 1,
		MAX      = 2
	};

	/**
	 * Enum SteamCore.ESteamUniverse
	 */
	enum class ESteamUniverse : uint8_t
	{
		Invalid  = 0,
		Public   = 1,
		Beta     = 2,
		Internal = 3,
		Dev      = 4,
		Max      = 5
	};

	/**
	 * Enum SteamCore.ESteamNotificationPosition
	 */
	enum class ESteamNotificationPosition : uint8_t
	{
		TopLeft     = 0,
		TopRight    = 1,
		BottomLeft  = 2,
		BottomRight = 3,
		MAX         = 4
	};

	/**
	 * Enum SteamCore.ESteamGamepadTextInputMode
	 */
	enum class ESteamGamepadTextInputMode : uint8_t
	{
		Normal   = 0,
		Password = 1,
		MAX      = 2
	};

	/**
	 * Enum SteamCore.ESteamGamepadTextInputLineMode
	 */
	enum class ESteamGamepadTextInputLineMode : uint8_t
	{
		SingleLine    = 0,
		MultipleLines = 1,
		MAX           = 2
	};

	/**
	 * Enum SteamCore.ESteamTextFilteringContext
	 */
	enum class ESteamTextFilteringContext : uint8_t
	{
		k_ETextFilteringContextUnknown     = 0,
		k_ETextFilteringContextGameContent = 1,
		k_ETextFilteringContextChat        = 2,
		k_ETextFilteringContextName        = 3,
		k_MAX                              = 4
	};

	/**
	 * Enum SteamCore.ESteamBroadcastUploadResult
	 */
	enum class ESteamBroadcastUploadResult : uint8_t
	{
		None              = 0,
		OK                = 1,
		InitFailed        = 2,
		FrameFailed       = 3,
		Timeout           = 4,
		BandwidthExceeded = 5,
		LowFPS            = 6,
		MissingKeyFrames  = 7,
		NoConnection      = 8,
		RelayFailed       = 9,
		SettingsChanged   = 10,
		MissingAudio      = 11,
		TooFarBehind      = 12,
		TranscodeBehind   = 13,
		MAX               = 14
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
		unsigned char                                              UnknownData_YTIS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_4FCC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_RRE2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Currency;                                                // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.SteamID
	 * Size -> 0x0008
	 */
	struct FSteamID
	{
	public:
		unsigned char                                              UnknownData_3SN1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamInventoryEligiblePromoItemDefIDs
	 * Size -> 0x0018
	 */
	struct FSteamInventoryEligiblePromoItemDefIDs
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKNZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumEligiblePromoItemDefs;                                // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedData;                                             // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVWT[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_WRDV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_CH9X[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_93UE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_B0CQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_7KHH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_UO7U[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_E6W9[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_MHJ8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_VLTE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2F3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.FriendsIsFollowing
	 * Size -> 0x0018
	 */
	struct FFriendsIsFollowing
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVPE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamID;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFollowing;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL3W[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.FriendsEnumerateFollowingList
	 * Size -> 0x0020
	 */
	struct FFriendsEnumerateFollowingList
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F5LZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_9IHP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_DFFK[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CountPlayersInGame;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CountAcceptedGame;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCZO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamID                                            SteamIDHost;                                             // 0x0020(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFinalCallback;                                          // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQ37[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RequestPlayersForGameProgressCallback
	 * Size -> 0x0018
	 */
	struct FRequestPlayersForGameProgressCallback
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2LZW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_IYH3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SearchID;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDPlayerFound;                                      // 0x0018(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSteamID                                            SteamIDLobby;                                            // 0x0020(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamPlayerAcceptState                                    PlayerAcceptState;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZYJ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerIndex;                                             // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPlayersFound;                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPlayersAcceptedGame;                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuggestedTeamIndex;                                      // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLSX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_BCAA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_CI7E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_USZO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_5TZ6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_UTKE[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_KBWR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_8BKB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_EFRH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_D7RK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_GH6J[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESteamFavoriteFlags>                                Flags;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bAdd;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AX6Y[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_YI93[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_8T9Y[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_CNZV[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_V8D8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamGameID
	 * Size -> 0x0008
	 */
	struct FSteamGameID
	{
	public:
		unsigned char                                              UnknownData_LZ4A[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_V5OU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_SYKA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_4OQ0[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamSessionSetting
	 * Size -> 0x0028
	 */
	struct FSteamSessionSetting
	{
	public:
		unsigned char                                              UnknownData_X36N[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_YOOJ[0x22];                                  // 0x008E(0x0022) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_ZFIL[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_77J0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.PartyBeaconID
	 * Size -> 0x0008
	 */
	struct FPartyBeaconID
	{
	public:
		unsigned char                                              UnknownData_3Y7J[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.JoinPartyData
	 * Size -> 0x0028
	 */
	struct FJoinPartyData
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CE3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_1MGP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_I0SP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageUnsubscribePublishedFileResult
	 * Size -> 0x0010
	 */
	struct FRemoteStorageUnsubscribePublishedFileResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVGW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_KRU8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_9UCC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_ZHUE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_VMTE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Offset;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Read;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8XW[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamUGCHandle
	 * Size -> 0x0008
	 */
	struct FSteamUGCHandle
	{
	public:
		unsigned char                                              UnknownData_EVC3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RemoteStorageDownloadUGCResult
	 * Size -> 0x0030
	 */
	struct FRemoteStorageDownloadUGCResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6BS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_ZBXN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_VG9V[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_AUKL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.ScreenshotRequested
	 * Size -> 0x0001
	 */
	struct FScreenshotRequested
	{
	public:
		unsigned char                                              UnknownData_6N3C[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_TMLL[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.CreateItemResult
	 * Size -> 0x0018
	 */
	struct FCreateItemResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4TB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUserNeedsToAcceptWorkshopLegalAgreement;                // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KH1Q[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_RR6Y[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_UKZQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.UGCQueryHandle
	 * Size -> 0x0008
	 */
	struct FUGCQueryHandle
	{
	public:
		unsigned char                                              UnknownData_OB3B[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_A8YG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumResultsReturned;                                      // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalMatchingResults;                                    // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedData;                                             // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92YP[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.AddAppDependencyResult
	 * Size -> 0x0018
	 */
	struct FAddAppDependencyResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWQD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6EA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.RemoveAppDependencyResult
	 * Size -> 0x0018
	 */
	struct FRemoveAppDependencyResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_607T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3VS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.AddUGCDependencyResult
	 * Size -> 0x0018
	 */
	struct FAddUGCDependencyResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QN01[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_H45N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_BLJB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_GQS8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_UCW5[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_MXP3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPublishedFileID                                    PublishedFileID;                                         // 0x0008(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamResult                                               Result;                                                  // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9FD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.ItemInstalled
	 * Size -> 0x0010
	 */
	struct FItemInstalled
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ED1C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_G8HE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameServerIP;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameServerPort;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BSecure;                                                 // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESteamDenyReason                                           Reason;                                                  // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E27L[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_D41S[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_9I6R[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_X0A4[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.MicroTxnAuthorizationResponse
	 * Size -> 0x0020
	 */
	struct FMicroTxnAuthorizationResponse
	{
	public:
		int32_t                                                    AppID;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSB0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OrderId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAuthorized;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMQX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamServersConnected
	 * Size -> 0x0001
	 */
	struct FSteamServersConnected
	{
	public:
		unsigned char                                              UnknownData_UXUD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_39ZX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARXM[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_LL1A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_8XNJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_K8W9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_UX2A[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamLeaderboardEntries
	 * Size -> 0x0008
	 */
	struct FSteamLeaderboardEntries
	{
	public:
		unsigned char                                              UnknownData_6LYN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_XVRX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_Q6K7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_H8J1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_7T1L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamLeaderboard                                   SteamLeaderboard;                                        // 0x0008(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScoreChanged;                                           // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7FX1[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_6UYI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_L8L2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_I1XM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.NumberOfCurrentPlayers
	 * Size -> 0x0008
	 */
	struct FNumberOfCurrentPlayers
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EHT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_E3AQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_HAW7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_MVQQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubmittedText;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.IPCountry
	 * Size -> 0x0001
	 */
	struct FIPCountry
	{
	public:
		unsigned char                                              UnknownData_3QMU[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_J77A[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.GetOPFSettingsResult
	 * Size -> 0x0008
	 */
	struct FGetOPFSettingsResult
	{
	public:
		ESteamResult                                               Result;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HMK3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_R7N1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_FBA2[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.InputAnalogActionHandle
	 * Size -> 0x0008
	 */
	struct FInputAnalogActionHandle
	{
	public:
		unsigned char                                              UnknownData_37Z2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.InputDigitalActionHandle
	 * Size -> 0x0008
	 */
	struct FInputDigitalActionHandle
	{
	public:
		unsigned char                                              UnknownData_CZZV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.InputActionSetHandle
	 * Size -> 0x0008
	 */
	struct FInputActionSetHandle
	{
	public:
		unsigned char                                              UnknownData_QG24[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.InputHandle
	 * Size -> 0x0008
	 */
	struct FInputHandle
	{
	public:
		unsigned char                                              UnknownData_XZ73[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_TLZW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      X;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PAU[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamItemInstanceID
	 * Size -> 0x0008
	 */
	struct FSteamItemInstanceID
	{
	public:
		unsigned char                                              UnknownData_M2DR[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_0TXB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RemoteIP;                                                // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RemotePort;                                              // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_170Z[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_B5VE[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamPartyBeaconLocation
	 * Size -> 0x0018
	 */
	struct FSteamPartyBeaconLocation
	{
	public:
		ESteamPartiesBeaconLocationType                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RT54[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocationId;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SteamCore.UGCFileWriteStreamHandle
	 * Size -> 0x0008
	 */
	struct FUGCFileWriteStreamHandle
	{
	public:
		unsigned char                                              UnknownData_L4QG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.SteamSessionSearchSetting
	 * Size -> 0x0020
	 */
	struct FSteamSessionSearchSetting
	{
	public:
		unsigned char                                              UnknownData_OTEL[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_11EO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SteamCore.UGCUpdateHandle
	 * Size -> 0x0008
	 */
	struct FUGCUpdateHandle
	{
	public:
		unsigned char                                              UnknownData_6M7E[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_V1WK[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CreatorAppID;                                            // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConsumerAppID;                                           // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VI5N[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_LD0M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamUGCHandle                                     UGCHandle;                                               // 0x0018(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
