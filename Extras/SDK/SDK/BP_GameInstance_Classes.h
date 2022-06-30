#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
	 * Size -> 0x0052 (FullSize[0x01FA] - InheritedSize[0x01A8])
	 */
	class UBP_GameInstance_C : public UCGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<int32_t>                                            SessionIDs;                                              // 0x01B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      SteamIDs;                                                // 0x01C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              GameVersion;                                             // 0x01D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ModBridgeVersion;                                        // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class USaveGame_UserData_C*                                UserData;                                                // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       RemotePlayStarted;                                       // 0x01F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasLocalPlayer;                                          // 0x01F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void LoadModActors(const class FString& Folder);
		void RemoveSessionID(int32_t Index);
		void AddSessionID(int32_t SessionID, bool Remote_);
		void SaveUserData();
		void LoadUserData();
		void LoadMods();
		void ClearAndReloadInput();
		void AmbianceVolumeChanged(float NewValue);
		void MasterVolumeChanged(float NewValue);
		void MusicVolumeChanged(float NewValue);
		void GeneralVolumeChanged(float NewValue);
		void MachineryVolumeChanged(float NewValue);
		void PlayerVolumeChanged(float NewValue);
		void VehicleVolumeChanged(float NewValue);
		void WaterVolumeChanged(float NewValue);
		void GamepadIconsChanged(const class FString& NewValue);
		void ReceiveInit();
		void ExplosionVolumeChanged(float NewValue);
		void MultiMonitorToggle(bool NewValue);
		void SetDLSSMode(int32_t NewValue);
		void AutosaveChange(float NewValue);
		void ToggleCrouchChange(float NewValue);
		void ToggleSprintChange(float NewValue);
		void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
