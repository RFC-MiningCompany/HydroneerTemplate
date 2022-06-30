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
	 * Function StyledKeyLabel.StyledKeyLabel_C.GetIconBrush
	 */
	struct UStyledKeyLabel_C_GetIconBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function StyledKeyLabel.StyledKeyLabel_C.GetDisplayNameUpper
	 */
	struct UStyledKeyLabel_C_GetDisplayNameUpper_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function StyledKeyLabel.StyledKeyLabel_C.UpdateKeyLabel
	 */
	struct UStyledKeyLabel_C_UpdateKeyLabel_Params
	{
	};

	/**
	 * Function StyledKeyLabel.StyledKeyLabel_C.ExecuteUbergraph_StyledKeyLabel
	 */
	struct UStyledKeyLabel_C_ExecuteUbergraph_StyledKeyLabel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
