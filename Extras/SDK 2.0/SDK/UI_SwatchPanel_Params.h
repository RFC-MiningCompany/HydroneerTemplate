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
	 * Function UI_SwatchPanel.UI_SwatchPanel_C.Init
	 */
	struct UUI_SwatchPanel_C_Init_Params
	{
	};

	/**
	 * Function UI_SwatchPanel.UI_SwatchPanel_C.UpdateSelectionColor
	 */
	struct UUI_SwatchPanel_C_UpdateSelectionColor_Params
	{
	public:
		class FName                                                ColorID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SwatchPanel.UI_SwatchPanel_C.PreConstruct
	 */
	struct UUI_SwatchPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_SwatchPanel.UI_SwatchPanel_C.ExecuteUbergraph_UI_SwatchPanel
	 */
	struct UUI_SwatchPanel_C_ExecuteUbergraph_UI_SwatchPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_SwatchPanel.UI_SwatchPanel_C.OnUpdate__DelegateSignature
	 */
	struct UUI_SwatchPanel_C_OnUpdate__DelegateSignature_Params
	{
	public:
		class FName                                                ColorID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
