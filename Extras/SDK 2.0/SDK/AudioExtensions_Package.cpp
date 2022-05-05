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
	 * 		Name   -> PredefindFunction USoundfieldEncodingSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEncodingSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEncodingSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioExtensions.AudioEndpointSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpatializationPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatializationPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioExtensions.SpatializationPluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOcclusionPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOcclusionPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioExtensions.OcclusionPluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UReverbPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReverbPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioExtensions.ReverbPluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoundModulatorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulatorBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioExtensions.SoundModulatorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoundfieldEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEndpointSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoundfieldEffectSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEffectSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoundfieldEffectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEffectBase");
		return ptr;
	}

}


