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
	 * 		Name   -> Function UI_HUD.UI_HUD_C.AddBadges
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<E_Badges_E_Badges>                          Badges                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UPanelWidget*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::AddBadges(TArray<E_Badges_E_Badges>* Badges, class UPanelWidget* Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD.UI_HUD_C.AddBadges"));
		
		struct
		{
			TArray<E_Badges_E_Badges>                          Badges;
			class UPanelWidget*                                Target;
		} params;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Badges != nullptr)
			*Badges = params.Badges;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.SetPriceBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ParentItem_C*                            StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::SetPriceBox(int32_t Amount, class ABP_ParentItem_C* StoreItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD.UI_HUD_C.SetPriceBox"));
		
		struct
		{
			int32_t                                            Amount;
			class ABP_ParentItem_C*                            StoreItem;
		} params;
		params.Amount = Amount;
		params.StoreItem = StoreItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.NewItemPickedUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<E_Badges_E_Badges>                          Badges                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_HUD_C::NewItemPickedUp(const class FText& Name, const class FText& Description, TArray<E_Badges_E_Badges> Badges)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD.UI_HUD_C.NewItemPickedUp"));
		
		struct
		{
			class FText                                        Name;
			class FText                                        Description;
			TArray<E_Badges_E_Badges>                          Badges;
		} params;
		params.Name = Name;
		params.Description = Description;
		params.Badges = Badges;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.ItemDropped
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::ItemDropped()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD.UI_HUD_C.ItemDropped"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.VehicleTipBoxShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::VehicleTipBoxShow(bool Show_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD.UI_HUD_C.VehicleTipBoxShow"));
		
		struct
		{
			bool                                               Show_;
		} params;
		params.Show_ = Show_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.SetCrosshair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_Crosshairs_E_Crosshairs                          Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::SetCrosshair(E_Crosshairs_E_Crosshairs Type)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD.UI_HUD_C.SetCrosshair"));
		
		struct
		{
			E_Crosshairs_E_Crosshairs                          Type;
		} params;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.Saving?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Saving_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::Saving_(bool Saving_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD.UI_HUD_C.Saving?"));
		
		struct
		{
			bool                                               Saving_;
		} params;
		params.Saving_ = Saving_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.ToggleCrosshair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::ToggleCrosshair(bool Show_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD.UI_HUD_C.ToggleCrosshair"));
		
		struct
		{
			bool                                               Show_;
		} params;
		params.Show_ = Show_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::ExecuteUbergraph_UI_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD"));
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass UI_HUD.UI_HUD_C"));
		return ptr;
	}

}


