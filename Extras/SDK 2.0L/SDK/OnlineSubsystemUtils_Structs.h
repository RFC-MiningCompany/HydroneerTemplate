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
	 * Enum OnlineSubsystemUtils.EInAppPurchaseStatus
	 */
	enum class EInAppPurchaseStatus : uint8_t
	{
		Invalid   = 0x0000000000000000,
		Failed    = 0x0000000000000001,
		Deferred  = 0x0000000000000002,
		Canceled  = 0x0000000000000003,
		Purchased = 0x0000000000000004,
		Restored  = 0x0000000000000005,
		MAX       = 0x0000000000000006
	};

	/**
	 * Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
	 */
	enum class EOnlineProxyStoreOfferDiscountType : uint8_t
	{
		NotOnSale      = 0x0000000000000000,
		Percentage     = 0x0000000000000001,
		DiscountAmount = 0x0000000000000002,
		PayAmount      = 0x0000000000000003,
		MAX            = 0x0000000000000004
	};

	/**
	 * Enum OnlineSubsystemUtils.EBeaconConnectionState
	 */
	enum class EBeaconConnectionState : uint8_t
	{
		Invalid = 0x0000000000000000,
		Closed  = 0x0000000000000001,
		Pending = 0x0000000000000002,
		Open    = 0x0000000000000003,
		MAX     = 0x0000000000000004
	};

	/**
	 * Enum OnlineSubsystemUtils.EClientRequestType
	 */
	enum class EClientRequestType : uint8_t
	{
		NonePending                = 0x0000000000000000,
		ExistingSessionReservation = 0x0000000000000001,
		ReservationUpdate          = 0x0000000000000002,
		EmptyServerReservation     = 0x0000000000000003,
		Reconnect                  = 0x0000000000000004,
		Abandon                    = 0x0000000000000005,
		ReservationRemoveMembers   = 0x0000000000000006,
		MAX                        = 0x0000000000000007
	};

	/**
	 * Enum OnlineSubsystemUtils.EPartyReservationResult
	 */
	enum class EPartyReservationResult : uint8_t
	{
		NoResult                                  = 0x0000000000000000,
		RequestPending                            = 0x0000000000000001,
		GeneralError                              = 0x0000000000000002,
		PartyLimitReached                         = 0x0000000000000003,
		IncorrectPlayerCount                      = 0x0000000000000004,
		RequestTimedOut                           = 0x0000000000000005,
		ReservationDuplicate                      = 0x0000000000000006,
		ReservationNotFound                       = 0x0000000000000007,
		ReservationAccepted                       = 0x0000000000000008,
		ReservationDenied                         = 0x0000000000000009,
		ReservationDenied_CrossPlayRestriction    = 0x000000000000000A,
		ReservationDenied_Banned                  = 0x000000000000000B,
		ReservationRequestCanceled                = 0x000000000000000C,
		ReservationInvalid                        = 0x000000000000000D,
		BadSessionId                              = 0x000000000000000E,
		ReservationDenied_ContainsExistingPlayers = 0x000000000000000F,
		MAX                                       = 0x0000000000000010
	};

	/**
	 * Enum OnlineSubsystemUtils.ESpectatorClientRequestType
	 */
	enum class ESpectatorClientRequestType : uint8_t
	{
		NonePending                = 0x0000000000000000,
		ExistingSessionReservation = 0x0000000000000001,
		ReservationUpdate          = 0x0000000000000002,
		EmptyServerReservation     = 0x0000000000000003,
		Reconnect                  = 0x0000000000000004,
		Abandon                    = 0x0000000000000005,
		MAX                        = 0x0000000000000006
	};

	/**
	 * Enum OnlineSubsystemUtils.ESpectatorReservationResult
	 */
	enum class ESpectatorReservationResult : uint8_t
	{
		NoResult                                  = 0x0000000000000000,
		RequestPending                            = 0x0000000000000001,
		GeneralError                              = 0x0000000000000002,
		SpectatorLimitReached                     = 0x0000000000000003,
		IncorrectPlayerCount                      = 0x0000000000000004,
		RequestTimedOut                           = 0x0000000000000005,
		ReservationDuplicate                      = 0x0000000000000006,
		ReservationNotFound                       = 0x0000000000000007,
		ReservationAccepted                       = 0x0000000000000008,
		ReservationDenied                         = 0x0000000000000009,
		ReservationDenied_CrossPlayRestriction    = 0x000000000000000A,
		ReservationDenied_Banned                  = 0x000000000000000B,
		ReservationRequestCanceled                = 0x000000000000000C,
		ReservationInvalid                        = 0x000000000000000D,
		BadSessionId                              = 0x000000000000000E,
		ReservationDenied_ContainsExistingPlayers = 0x000000000000000F,
		MAX                                       = 0x0000000000000010
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
	 * Size -> 0x0040
	 */
	struct FPIELoginSettingsInternal
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Token;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      TokenBytes;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PlayerReservation
	 * Size -> 0x0050
	 */
	struct FPlayerReservation
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidationStr;                                           // 0x0028(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0038(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowCrossplay;                                         // 0x0048(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFRK[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ElapsedTime;                                             // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PartyReservation
	 * Size -> 0x0050
	 */
	struct FPartyReservation
	{
	public:
		int32_t                                                    TeamNum;                                                 // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XHJ7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0008(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerReservation>                          PartyMembers;                                            // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FPlayerReservation>                          RemovedPartyMembers;                                     // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.SpectatorReservation
	 * Size -> 0x0078
	 */
	struct FSpectatorReservation
	{
	public:
		struct FUniqueNetIdRepl                                    SpectatorId;                                             // 0x0000(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlayerReservation                                  Spectator;                                               // 0x0028(0x0050) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
	 * Size -> 0x0108
	 */
	struct FBlueprintSessionResult
	{
	public:
		unsigned char                                              UnknownData_82E0[0x108];                                 // 0x0000(0x0108) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
	 * Size -> 0x0030
	 */
	struct FInAppPurchaseReceiptInfo2
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidationInfo;                                          // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
	 * Size -> 0x0110
	 */
	struct FOnlineProxyStoreOffer
	{
	public:
		class FString                                              OfferId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                LongDescription;                                         // 0x0040(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                RegularPriceText;                                        // 0x0058(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    RegularPrice;                                            // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVGS[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PriceText;                                               // 0x0078(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    NumericPrice;                                            // 0x0090(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YE48[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencyCode;                                            // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           ReleaseDate;                                             // 0x00A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           ExpirationDate;                                          // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOnlineProxyStoreOfferDiscountType                         DiscountType;                                            // 0x00B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEHG[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         DynamicFields;                                           // 0x00C0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
	 * Size -> 0x0030
	 */
	struct FInAppPurchaseRestoreInfo2
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidationInfo;                                          // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
	 * Size -> 0x0030
	 */
	struct FInAppPurchaseReceiptInfo
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidationInfo;                                          // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
	 * Size -> 0x00F8
	 */
	struct FInAppPurchaseProductInfo2
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionIdentifier;                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayDescription;                                      // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayPrice;                                            // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawPrice;                                                // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGXY[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencyCode;                                            // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencySymbol;                                          // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DecimalSeparator;                                        // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupingSeparator;                                       // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiptData;                                             // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         DynamicFields;                                           // 0x00A8(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
	 * Size -> 0x0018
	 */
	struct FInAppPurchaseProductRequest2
	{
	public:
		class FString                                              ProductIdentifier;                                       // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConsumable;                                           // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3U2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
