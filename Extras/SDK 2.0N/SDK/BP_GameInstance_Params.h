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
	 * Function BP_GameInstance.BP_GameInstance_C.SaveUserData
	 */
	struct UBP_GameInstance_C_SaveUserData_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.LoadUserData
	 */
	struct UBP_GameInstance_C_LoadUserData_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.LoadMods
	 */
	struct UBP_GameInstance_C_LoadMods_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ClearAndReloadInput
	 */
	struct UBP_GameInstance_C_ClearAndReloadInput_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.GeneralVolumeChanged
	 */
	struct UBP_GameInstance_C_GeneralVolumeChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.AmbianceVolumeChanged
	 */
	struct UBP_GameInstance_C_AmbianceVolumeChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.MachineryVolumeChanged
	 */
	struct UBP_GameInstance_C_MachineryVolumeChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.PlayerVolumeChanged
	 */
	struct UBP_GameInstance_C_PlayerVolumeChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.VehicleVolumeChanged
	 */
	struct UBP_GameInstance_C_VehicleVolumeChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.WaterVolumeChanged
	 */
	struct UBP_GameInstance_C_WaterVolumeChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.MusicVolumeChanged
	 */
	struct UBP_GameInstance_C_MusicVolumeChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.GamepadIconsChanged
	 */
	struct UBP_GameInstance_C_GamepadIconsChanged_Params
	{
	public:
		class FString                                              NewValue;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
	 */
	struct UBP_GameInstance_C_ReceiveInit_Params
	{	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.DLSSToggle
	 */
	struct UBP_GameInstance_C_DLSSToggle_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.MasterVolumeChanged
	 */
	struct UBP_GameInstance_C_MasterVolumeChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ExplosionVolumeChanged
	 */
	struct UBP_GameInstance_C_ExplosionVolumeChanged_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.MultiMonitorToggle
	 */
	struct UBP_GameInstance_C_MultiMonitorToggle_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
	 */
	struct UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
