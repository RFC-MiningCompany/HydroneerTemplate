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
	 * Function BPFL_Customization.BPFL_Customization_C.GetRelevantCustomizationOptions
	 */
	struct UBPFL_Customization_C_GetRelevantCustomizationOptions_Params
	{
	public:
		struct FS_CharacterStyle                                   Style;                                                   // 0x0000(0x004C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UPData_Head_C*>                               Heads;                                                   // 0x0058(0x0010)  (Parm, OutParm)
		TArray<class UPData_Hair_C*>                               Hair;                                                    // 0x0068(0x0010)  (Parm, OutParm)
		TArray<class UPData_Beard_C*>                              Beards;                                                  // 0x0078(0x0010)  (Parm, OutParm)
		TArray<class UPData_ClothingSet_C*>                        ClothingSets;                                            // 0x0088(0x0010)  (Parm, OutParm)

	};

	/**
	 * Function BPFL_Customization.BPFL_Customization_C.GetCustomizationOptions
	 */
	struct UBPFL_Customization_C_GetCustomizationOptions_Params
	{
	public:
		struct FS_CharacterStyle                                   Style;                                                   // 0x0000(0x004C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_Character_Customization                          Options;                                                 // 0x0058(0x0100)  (Parm, OutParm, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
