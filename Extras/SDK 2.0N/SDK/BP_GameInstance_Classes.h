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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
	 * Size -> 0x00A1 (FullSize[0x0251] - InheritedSize[0x01B0])
	 */
	class UBP_GameInstance_C : public UCGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<int32_t>                                            SessionIDs;                                              // 0x01B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      SteamIDs;                                                // 0x01C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              GameVersion;                                             // 0x01D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ModBridgeVersion;                                        // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class USaveGame_UserData_C*                                UserData;                                                // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TMap<int32_t, class APlayerController*>                    SessionControllerMap;                                    // 0x0200(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       RemotePlayStarted;                                       // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SaveUserData();
		void LoadUserData();
		void LoadMods();
		void ClearAndReloadInput();
		void GeneralVolumeChanged(float NewValue);
		void AmbianceVolumeChanged(float NewValue);
		void MachineryVolumeChanged(float NewValue);
		void PlayerVolumeChanged(float NewValue);
		void VehicleVolumeChanged(float NewValue);
		void WaterVolumeChanged(float NewValue);
		void MusicVolumeChanged(float NewValue);
		void GamepadIconsChanged(const class FString& NewValue);
		void ReceiveInit();
		void DLSSToggle(bool NewValue);
		void MasterVolumeChanged(float NewValue);
		void ExplosionVolumeChanged(float NewValue);
		void MultiMonitorToggle(bool NewValue);
		void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
