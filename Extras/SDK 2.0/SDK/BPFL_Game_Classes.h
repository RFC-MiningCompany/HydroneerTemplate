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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPFL_Game.BPFL_Game_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Game_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetPlayerName(int32_t SessionID, class UObject* __WorldContext, class FString* PlayerName);
		void FindMetadata(const class FString& Directory, class UObject* __WorldContext, class FString* Version, class FString* Title, class FString* Description);
		void GetAllAttachedActors(class UStaticMeshComponent* StaticMesh, class UObject* __WorldContext, TArray<class AActor*>* AttachedActors);
		void GetSaveGameUserData(class UObject* __WorldContext, class USaveGame_UserData_C** UserData);
		void GetBP_GameController(int32_t PlayerIndex, class UObject* __WorldContext, class ABP_GameController_C** Controller);
		void GetBP_GameState(class UObject* __WorldContext, class ABP_GameState_C** GameState);
		void GetBP_GameInstance(class UObject* __WorldContext, class UBP_GameInstance_C** GameInstance);
		void GetGM_Hydroneer(class UObject* __WorldContext, class AGM_Hydroneer_C** GM_Hydroneer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
