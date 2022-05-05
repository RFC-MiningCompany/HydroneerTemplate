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
	 * Function BPI_Hook.BPI_Hook_C.RemovePart
	 */
	struct UBPI_Hook_C_RemovePart_Params
	{
	public:
		class ABP_ParentHook_C*                                    Hook;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BPI_Hook.BPI_Hook_C.AttachPart
	 */
	struct UBPI_Hook_C_AttachPart_Params
	{
	public:
		class ABP_ParentHook_C*                                    Hook;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
