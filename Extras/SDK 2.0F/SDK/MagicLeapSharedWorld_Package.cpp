/**
 * Name: Hydroneer
 * Version: 2.0F
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	 * 		Flags  -> ()
	 */
	bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	 * 		Flags  -> ()
	 */
	void AMagicLeapSharedWorldGameMode::SelectChosenOne()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AMagicLeapSharedWorldGameMode::MagicLeapOnNewLocalDataFromClients__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapSharedWorldSharedData             NewSharedWorldData                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData"));
		
		struct
		{
			struct FMagicLeapSharedWorldSharedData             NewSharedWorldData;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSharedWorldData != nullptr)
			*NewSharedWorldData = params.NewSharedWorldData;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMagicLeapSharedWorldGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagicLeapSharedWorldGameMode::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	 * 		Flags  -> ()
	 */
	void AMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	 * 		Flags  -> ()
	 */
	void AMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AMagicLeapSharedWorldGameState::MagicLeapSharedWorldEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
	 * 		Flags  -> ()
	 */
	struct FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform"));
		
		struct
		{
			struct FTransform                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMagicLeapSharedWorldGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagicLeapSharedWorldGameState::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapSharedWorldLocalData              LocalWorldReplicationData                                  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData"));
		
		struct
		{
			struct FMagicLeapSharedWorldLocalData              LocalWorldReplicationData;
		} params;
		params.LocalWorldReplicationData = LocalWorldReplicationData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMagicLeapSharedWorldAlignmentTransforms    InAlignmentTransforms                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms"));
		
		struct
		{
			struct FMagicLeapSharedWorldAlignmentTransforms    InAlignmentTransforms;
		} params;
		params.InAlignmentTransforms = InAlignmentTransforms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
	 * 		Flags  -> ()
	 */
	bool AMagicLeapSharedWorldPlayerController::IsChosenOne()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChosenOne                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne"));
		
		struct
		{
			bool                                               bChosenOne;
		} params;
		params.bChosenOne = bChosenOne;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
	 * 		Flags  -> ()
	 */
	void AMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData"));
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
	 * 		Flags  -> ()
	 */
	bool AMagicLeapSharedWorldPlayerController::CanSendLocalDataToServer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer"));
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMagicLeapSharedWorldPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMagicLeapSharedWorldPlayerController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController"));
		return ptr;
	}

}


