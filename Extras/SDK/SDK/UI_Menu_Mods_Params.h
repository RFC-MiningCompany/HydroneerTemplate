#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.CB_CreateItem
	 */
	struct UUI_Menu_Mods_C_CB_CreateItem_Params
	{
	public:
		struct FCreateItemResult                                   Data;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_Upload_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_Upload_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.CustomEvent_1
	 */
	struct UUI_Menu_Mods_C_CustomEvent_1_Params
	{
	public:
		struct FSteamUGCQueryCompleted                             Data;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.BndEvt__UI_Menu_Mods_Refresh_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Menu_Mods_C_BndEvt__UI_Menu_Mods_Refresh_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.RefreshUGC
	 */
	struct UUI_Menu_Mods_C_RefreshUGC_Params
	{
	};

	/**
	 * Function UI_Menu_Mods.UI_Menu_Mods_C.ExecuteUbergraph_UI_Menu_Mods
	 */
	struct UUI_Menu_Mods_C_ExecuteUbergraph_UI_Menu_Mods_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
