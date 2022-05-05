/**
 * Name: Hydroneer
 * Version: 2.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkSourceFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkSourceFactory::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkRole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkBasicRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkBasicRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkBasicRole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkAnimationRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkAnimationRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkAnimationRole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkTransformRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkTransformRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkTransformRole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkCameraRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkCameraRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCameraRole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkSourceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkSourceSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkCurveRemapSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkCurveRemapSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCurveRemapSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkFrameInterpolationProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkFrameInterpolationProcessor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkFramePreProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkFramePreProcessor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFramePreProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkFrameTranslator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkFrameTranslator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameTranslator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkLightRole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkLightRole::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkLightRole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkSubjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkSubjectSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSubjectSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULiveLinkVirtualSubject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkVirtualSubject::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkVirtualSubject");
		return ptr;
	}

}


