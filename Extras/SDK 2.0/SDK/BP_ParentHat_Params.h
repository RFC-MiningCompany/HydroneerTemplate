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
	 * Function BP_ParentHat.BP_ParentHat_C.Equip
	 */
	struct ABP_ParentHat_C_Equip_Params
	{
	public:
		bool                                                       Equiped_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHat.BP_ParentHat_C.OverrideHatOn
	 */
	struct ABP_ParentHat_C_OverrideHatOn_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHat.BP_ParentHat_C.OverrideHatOff
	 */
	struct ABP_ParentHat_C_OverrideHatOff_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHat.BP_ParentHat_C.BndEvt__BP_ParentHat_AC_Highlight_K2Node_ComponentBoundEvent_0_OnHighlighted__DelegateSignature
	 */
	struct ABP_ParentHat_C_BndEvt__BP_ParentHat_AC_Highlight_K2Node_ComponentBoundEvent_0_OnHighlighted__DelegateSignature_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHat.BP_ParentHat_C.BndEvt__BP_ParentHat_AC_Highlight_K2Node_ComponentBoundEvent_1_OnUnhighlighted__DelegateSignature
	 */
	struct ABP_ParentHat_C_BndEvt__BP_ParentHat_AC_Highlight_K2Node_ComponentBoundEvent_1_OnUnhighlighted__DelegateSignature_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHat.BP_ParentHat_C.ExecuteUbergraph_BP_ParentHat
	 */
	struct ABP_ParentHat_C_ExecuteUbergraph_BP_ParentHat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
