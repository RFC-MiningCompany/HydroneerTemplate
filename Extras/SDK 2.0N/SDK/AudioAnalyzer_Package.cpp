/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * 		Name   -> PredefindFunction UAudioAnalyzerAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerAsset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioAnalyzer.AudioAnalyzerAsset"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioAnalyzerNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerNRTSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioAnalyzer.AudioAnalyzerNRTSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioAnalyzerNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerNRT::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioAnalyzer.AudioAnalyzerNRT"));
		return ptr;
	}

}


