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
	 * 		Name   -> PredefindFunction UButtonWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.ButtonWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCheckBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.CheckBoxWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UComboBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.ComboBoxWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UComboButtonWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboButtonWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.ComboButtonWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableTextBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableTextBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.EditableTextBoxWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEditableTextWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableTextWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.EditableTextWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UProgressWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.ProgressWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UScrollBarWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollBarWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.ScrollBarWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UScrollBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.ScrollBoxWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USlateSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.SlateSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpinBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpinBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.SpinBoxWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTextBlockWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlockWidgetStyle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.TextBlockWidgetStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UToolMenuBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolMenuBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Slate.ToolMenuBase"));
		return ptr;
	}

}


