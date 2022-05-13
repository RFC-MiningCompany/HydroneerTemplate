/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseAuto                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears");
		
		struct
		{
			bool                                               bUseAuto;
		} params;
		params.bUseAuto = bUseAuto;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Throttle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput");
		
		struct
		{
			float                                              Throttle;
		} params;
		params.Throttle = Throttle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GearNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetTargetGear(int32_t GearNum, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear");
		
		struct
		{
			int32_t                                            GearNum;
			bool                                               bImmediate;
		} params;
		params.GearNum = GearNum;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Steering                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput");
		
		struct
		{
			float                                              Steering;
		} params;
		params.Steering = Steering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewHandbrake                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput");
		
		struct
		{
			bool                                               bNewHandbrake;
		} params;
		params.bNewHandbrake = bNewHandbrake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNavAvoidanceMask                           GroupMask                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask");
		
		struct
		{
			struct FNavAvoidanceMask                           GroupMask;
		} params;
		params.GroupMask = GroupMask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupFlags                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int32_t GroupFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore");
		
		struct
		{
			int32_t                                            GroupFlags;
		} params;
		params.GroupFlags = GroupFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNavAvoidanceMask                           GroupMask                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask");
		
		struct
		{
			struct FNavAvoidanceMask                           GroupMask;
		} params;
		params.GroupMask = GroupMask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupFlags                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int32_t GroupFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid");
		
		struct
		{
			int32_t                                            GroupFlags;
		} params;
		params.GroupFlags = GroupFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewGearUp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp");
		
		struct
		{
			bool                                               bNewGearUp;
		} params;
		params.bNewGearUp = bNewGearUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewGearDown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown");
		
		struct
		{
			bool                                               bNewGearDown;
		} params;
		params.bNewGearDown = bNewGearDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Brake                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput");
		
		struct
		{
			float                                              Brake;
		} params;
		params.Brake = Brake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNavAvoidanceMask                           GroupMask                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask");
		
		struct
		{
			struct FNavAvoidanceMask                           GroupMask;
		} params;
		params.GroupMask = GroupMask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GroupFlags                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int32_t GroupFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup");
		
		struct
		{
			int32_t                                            GroupFlags;
		} params;
		params.GroupFlags = GroupFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled");
		
		struct
		{
			bool                                               bEnable;
		} params;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSteeringInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InThrottleInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InBrakeInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InHandbrakeInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CurrentGear                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState");
		
		struct
		{
			float                                              InSteeringInput;
			float                                              InThrottleInput;
			float                                              InBrakeInput;
			float                                              InHandbrakeInput;
			int32_t                                            CurrentGear;
		} params;
		params.InSteeringInput = InSteeringInput;
		params.InThrottleInput = InThrottleInput;
		params.InBrakeInput = InBrakeInput;
		params.InHandbrakeInput = InHandbrakeInput;
		params.CurrentGear = CurrentGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	 * 		Flags  -> ()
	 */
	bool UWheeledVehicleMovementComponent::GetUseAutoGears()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	 * 		Flags  -> ()
	 */
	int32_t UWheeledVehicleMovementComponent::GetTargetGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	 * 		Flags  -> ()
	 */
	float UWheeledVehicleMovementComponent::GetForwardSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	 * 		Flags  -> ()
	 */
	float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	 * 		Flags  -> ()
	 */
	float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	 * 		Flags  -> ()
	 */
	int32_t UWheeledVehicleMovementComponent::GetCurrentGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWheeledVehicleMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWheeledVehicleMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SteerAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle");
		
		struct
		{
			float                                              SteerAngle;
			int32_t                                            WheelIndex;
		} params;
		params.SteerAngle = SteerAngle;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DriveTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque");
		
		struct
		{
			float                                              DriveTorque;
			int32_t                                            WheelIndex;
		} params;
		params.DriveTorque = DriveTorque;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BrakeTorque                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WheelIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int32_t WheelIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque");
		
		struct
		{
			float                                              BrakeTorque;
			int32_t                                            WheelIndex;
		} params;
		params.BrakeTorque = BrakeTorque;
		params.WheelIndex = WheelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USimpleWheeledVehicleMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleWheeledVehicleMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTireConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTireConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.VehicleAnimInstance.GetVehicle
	 * 		Flags  -> ()
	 */
	class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleAnimInstance.GetVehicle");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVehicleAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.VehicleWheel.IsInAir
	 * 		Flags  -> ()
	 */
	bool UVehicleWheel::IsInAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.IsInAir");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
	 * 		Flags  -> ()
	 */
	float UVehicleWheel::GetSuspensionOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSuspensionOffset");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.VehicleWheel.GetSteerAngle
	 * 		Flags  -> ()
	 */
	float UVehicleWheel::GetSteerAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSteerAngle");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PhysXVehicles.VehicleWheel.GetRotationAngle
	 * 		Flags  -> ()
	 */
	float UVehicleWheel::GetRotationAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetRotationAngle");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVehicleWheel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleWheel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AWheeledVehicle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWheeledVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWheeledVehicleMovementComponent4W.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWheeledVehicleMovementComponent4W::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}

}


