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
	 * 		Name   -> PredefindFunction UFontBulkData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFontBulkData::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFontFaceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFontFaceInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFontProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFontProviderInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlateTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateTypes::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlateWidgetStyleAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateWidgetStyleAsset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlateWidgetStyleContainerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateWidgetStyleContainerBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlateWidgetStyleContainerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateWidgetStyleContainerInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}

}


