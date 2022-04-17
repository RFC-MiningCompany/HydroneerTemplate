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
	 * 		Name   -> Function UI_Menu_PatchNotes.UI_Menu_PatchNotes_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Menu_PatchNotes_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_Menu_PatchNotes.UI_Menu_PatchNotes_C.Construct"));
		
		UUI_Menu_PatchNotes_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Menu_PatchNotes.UI_Menu_PatchNotes_C.ExecuteUbergraph_UI_Menu_PatchNotes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Menu_PatchNotes_C::ExecuteUbergraph_UI_Menu_PatchNotes(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_Menu_PatchNotes.UI_Menu_PatchNotes_C.ExecuteUbergraph_UI_Menu_PatchNotes"));
		
		UUI_Menu_PatchNotes_C_ExecuteUbergraph_UI_Menu_PatchNotes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_Menu_PatchNotes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Menu_PatchNotes_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass UI_Menu_PatchNotes.UI_Menu_PatchNotes_C"));
		return ptr;
	}

}


