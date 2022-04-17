#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * Enum MagicLeapIdentity.EMagicLeapIdentityKey
	 */
	enum class EMagicLeapIdentityKey : uint8_t
	{
		GivenName   = 0x0000000000000000,
		FamilyName  = 0x0000000000000001,
		Email       = 0x0000000000000002,
		Bio         = 0x0000000000000003,
		PhoneNumber = 0x0000000000000004,
		Avatar2D    = 0x0000000000000005,
		Avatar3D    = 0x0000000000000006,
		Unknown     = 0x0000000000000007,
		MAX         = 0x0000000000000008
	};

	/**
	 * Enum MagicLeapIdentity.EMagicLeapIdentityError
	 */
	enum class EMagicLeapIdentityError : uint8_t
	{
		Ok                            = 0x0000000000000000,
		InvalidParam                  = 0x0000000000000001,
		AllocFailed                   = 0x0000000000000002,
		PrivilegeDenied               = 0x0000000000000003,
		FailedToConnectToLocalService = 0x0000000000000004,
		FailedToConnectToCloudService = 0x0000000000000005,
		CloudAuthentication           = 0x0000000000000006,
		InvalidInformationFromCloud   = 0x0000000000000007,
		NotLoggedIn                   = 0x0000000000000008,
		ExpiredCredentials            = 0x0000000000000009,
		FailedToGetUserProfile        = 0x000000000000000A,
		Unauthorized                  = 0x000000000000000B,
		CertificateError              = 0x000000000000000C,
		RejectedByCloud               = 0x000000000000000D,
		AlreadyLoggedIn               = 0x000000000000000E,
		ModifyIsNotSupported          = 0x000000000000000F,
		NetworkError                  = 0x0000000000000010,
		UnspecifiedFailure            = 0x0000000000000011,
		MAX                           = 0x0000000000000012
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapIdentity.MagicLeapIdentityAttribute
	 * Size -> 0x0018
	 */
	struct FMagicLeapIdentityAttribute
	{
	public:
		EMagicLeapIdentityKey                                      Attribute;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXLT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
