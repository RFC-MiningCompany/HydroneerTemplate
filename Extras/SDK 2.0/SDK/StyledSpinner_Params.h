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
	 * Function StyledSpinner.StyledSpinner_C.OnSelectionChanged
	 */
	struct UStyledSpinner_C_OnSelectionChanged_Params
	{
	public:
		struct FSettingOption                                      SelectedOption;                                          // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function StyledSpinner.StyledSpinner_C.GetRightArrowColorAndOpacity
	 */
	struct UStyledSpinner_C_GetRightArrowColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StyledSpinner.StyledSpinner_C.GetLeftArrowColorAndOpacity
	 */
	struct UStyledSpinner_C_GetLeftArrowColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StyledSpinner.StyledSpinner_C.GetLabelText
	 */
	struct UStyledSpinner_C_GetLabelText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function StyledSpinner.StyledSpinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature
	 */
	struct UStyledSpinner_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function StyledSpinner.StyledSpinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature
	 */
	struct UStyledSpinner_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function StyledSpinner.StyledSpinner_C.ExecuteUbergraph_StyledSpinner
	 */
	struct UStyledSpinner_C_ExecuteUbergraph_StyledSpinner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
