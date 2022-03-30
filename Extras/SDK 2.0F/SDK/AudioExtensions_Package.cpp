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
	 * 		Name   -> PredefindFunction USoundfieldEncodingSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEncodingSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEncodingSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.AudioEndpointSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpatializationPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatializationPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SpatializationPluginSourceSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOcclusionPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOcclusionPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.OcclusionPluginSourceSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UReverbPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReverbPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.ReverbPluginSourceSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USoundModulatorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulatorBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundModulatorBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USoundfieldEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEndpointSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USoundfieldEffectSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectSettingsBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEffectSettingsBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USoundfieldEffectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEffectBase"));
		return ptr;
	}

}


