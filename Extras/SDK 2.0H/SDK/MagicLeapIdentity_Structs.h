#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0H
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
	enum class MagicLeapIdentity_EMagicLeapIdentityKey : uint8_t
	{
		EMagicLeapIdentityKey__GivenName                 = 0,
		EMagicLeapIdentityKey__FamilyName                = 1,
		EMagicLeapIdentityKey__Email                     = 2,
		EMagicLeapIdentityKey__Bio                       = 3,
		EMagicLeapIdentityKey__PhoneNumber               = 4,
		EMagicLeapIdentityKey__Avatar2D                  = 5,
		EMagicLeapIdentityKey__Avatar3D                  = 6,
		EMagicLeapIdentityKey__Unknown                   = 7,
		EMagicLeapIdentityKey__EMagicLeapIdentityKey_MAX = 8
	};

	/**
	 * Enum MagicLeapIdentity.EMagicLeapIdentityError
	 */
	enum class MagicLeapIdentity_EMagicLeapIdentityError : uint8_t
	{
		EMagicLeapIdentityError__Ok                            = 0,
		EMagicLeapIdentityError__InvalidParam                  = 1,
		EMagicLeapIdentityError__AllocFailed                   = 2,
		EMagicLeapIdentityError__PrivilegeDenied               = 3,
		EMagicLeapIdentityError__FailedToConnectToLocalService = 4,
		EMagicLeapIdentityError__FailedToConnectToCloudService = 5,
		EMagicLeapIdentityError__CloudAuthentication           = 6,
		EMagicLeapIdentityError__InvalidInformationFromCloud   = 7,
		EMagicLeapIdentityError__NotLoggedIn                   = 8,
		EMagicLeapIdentityError__ExpiredCredentials            = 9,
		EMagicLeapIdentityError__FailedToGetUserProfile        = 10,
		EMagicLeapIdentityError__Unauthorized                  = 11,
		EMagicLeapIdentityError__CertificateError              = 12,
		EMagicLeapIdentityError__RejectedByCloud               = 13,
		EMagicLeapIdentityError__AlreadyLoggedIn               = 14,
		EMagicLeapIdentityError__ModifyIsNotSupported          = 15,
		EMagicLeapIdentityError__NetworkError                  = 16,
		EMagicLeapIdentityError__UnspecifiedFailure            = 17,
		EMagicLeapIdentityError__EMagicLeapIdentityError_MAX   = 18
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
		MagicLeapIdentity_EMagicLeapIdentityKey                    Attribute;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0ET[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
