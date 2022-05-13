/**
 * Name: Hydroneer
 * Version: 2.0.2
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
	 * 		Name   -> PredefindFunction UButtonWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCheckBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UComboBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UComboButtonWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboButtonWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableTextBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableTextBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableTextWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableTextWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProgressWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScrollBarWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollBarWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UScrollBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlateSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.SlateSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USpinBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpinBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTextBlockWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlockWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UToolMenuBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolMenuBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ToolMenuBase");
		return ptr;
	}

}


