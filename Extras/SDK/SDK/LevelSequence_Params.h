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
	 * Function LevelSequence.LevelSequenceBurnIn.SetSettings
	 */
	struct ULevelSequenceBurnIn_SetSettings_Params
	{
	public:
		class UObject*                                             InSettings;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	 */
	struct ULevelSequenceBurnIn_GetSettingsClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
