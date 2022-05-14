#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SaveGame_UserData.SaveGame_UserData_C
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class USaveGame_UserData_C : public USaveGame
	{
	public:
		TArray<class FString>                                      DisabledModIDs;                                          // 0x0028(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, struct FS_CharacterStyle>              PlayerStyles;                                            // 0x0038(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
