/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioAnalyzerAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioAnalyzerNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioAnalyzerNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerNRT");
		return ptr;
	}

}


