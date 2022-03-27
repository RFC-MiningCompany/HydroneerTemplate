#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
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
	 * Class MagicLeapIdentity.MagicLeapIdentity
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMagicLeapIdentity : public UObject
	{
	public:
		unsigned char                                              UnknownData_EZ56[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void RequestIdentityAttributeValueDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue);
		MagicLeapIdentity_EMagicLeapIdentityError RequestAttributeValueAsync(TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, const class FScriptDelegate& ResultDelegate);
		MagicLeapIdentity_EMagicLeapIdentityError RequestAttributeValue(TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues);
		void ModifyIdentityAttributeValueDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AttributesUpdatedSuccessfully);
		void GetAllAvailableAttributesAsync(const class FScriptDelegate& ResultDelegate);
		MagicLeapIdentity_EMagicLeapIdentityError GetAllAvailableAttributes(TArray<MagicLeapIdentity_EMagicLeapIdentityKey>* AvailableAttributes);
		void AvailableIdentityAttributesDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
