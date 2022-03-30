/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkSourceFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkSourceFactory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkSourceFactory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkRole"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkBasicRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkBasicRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkBasicRole"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkAnimationRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkAnimationRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkAnimationRole"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkTransformRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkTransformRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkTransformRole"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkCameraRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkCameraRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkCameraRole"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkSourceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkSourceSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkSourceSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkCurveRemapSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkCurveRemapSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkCurveRemapSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkFrameInterpolationProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkFrameInterpolationProcessor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkFramePreProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkFramePreProcessor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkFramePreProcessor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkFrameTranslator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkFrameTranslator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkFrameTranslator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkLightRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkLightRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkLightRole"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkSubjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkSubjectSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkSubjectSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkVirtualSubject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkVirtualSubject::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class LiveLinkInterface.LiveLinkVirtualSubject"));
		return ptr;
	}

}


