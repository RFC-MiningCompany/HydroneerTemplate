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
	 * Function UI_StylePanel.UI_StylePanel_C.Update
	 */
	struct UUI_StylePanel_C_Update_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_StylePanel.UI_StylePanel_C.Init
	 */
	struct UUI_StylePanel_C_Init_Params
	{
	public:
		TArray<class UPData_Customizable_Base_C*>                  Options;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function UI_StylePanel.UI_StylePanel_C.PreConstruct
	 */
	struct UUI_StylePanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_StylePanel.UI_StylePanel_C.ExecuteUbergraph_UI_StylePanel
	 */
	struct UUI_StylePanel_C_ExecuteUbergraph_UI_StylePanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_StylePanel.UI_StylePanel_C.OnUpdateStyle__DelegateSignature
	 */
	struct UUI_StylePanel_C_OnUpdateStyle__DelegateSignature_Params
	{
	public:
		int32_t                                                    StyleIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
