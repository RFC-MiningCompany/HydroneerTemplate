#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0N
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
	 * Function BPI_Interact.BPI_Interact_C.BPI_Unhighlight
	 */
	struct UBPI_Interact_C_BPI_Unhighlight_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.BPI_Highlight
	 */
	struct UBPI_Interact_C_BPI_Highlight_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.BPI_GetCanHighlight
	 */
	struct UBPI_Interact_C_BPI_GetCanHighlight_Params
	{
	public:
		bool                                                       CanHighlight_;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.BPI_SetHighlightArray
	 */
	struct UBPI_Interact_C_BPI_SetHighlightArray_Params
	{
	public:
		TArray<int32_t>                                            HighlightArray;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Interact.BPI_Interact_C.BPI_GetHighlightArray
	 */
	struct UBPI_Interact_C_BPI_GetHighlightArray_Params
	{
	public:
		TArray<int32_t>                                            HighlightArray;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
