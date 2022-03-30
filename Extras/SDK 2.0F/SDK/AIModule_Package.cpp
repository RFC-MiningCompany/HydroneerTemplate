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
	 * 		Name   -> Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIRequestID                                RequestID                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EPathFollowingResult                      MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIRequestID& RequestID, AIModule_EPathFollowingResult MovementResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted"));
		
		struct
		{
			struct FAIRequestID                                RequestID;
			AIModule_EPathFollowingResult                      MovementResult;
		} params;
		params.RequestID = RequestID;
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIAsyncTaskBlueprintProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUnlockMovement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               UnlockAILogic                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation"));
		
		struct
		{
			class UAnimInstance*                               AnimInstance;
			bool                                               bUnlockMovement;
			bool                                               UnlockAILogic;
		} params;
		params.AnimInstance = AnimInstance;
		params.bUnlockMovement = bUnlockMovement;
		params.UnlockAILogic = UnlockAILogic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      PawnClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBehaviorTree*                               BehaviorTree                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoCollisionFail                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class AActor* Owner)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UClass*                                      PawnClass;
			class UBehaviorTree*                               BehaviorTree;
			struct FVector                                     Location;
			struct FRotator                                    Rotation;
			bool                                               bNoCollisionFail;
			class AActor*                                      Owner;
			class APawn*                                       ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PawnClass = PawnClass;
		params.BehaviorTree = BehaviorTree;
		params.Location = Location;
		params.Rotation = Rotation;
		params.bNoCollisionFail = bNoCollisionFail;
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Goal                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIBlueprintHelperLibrary::SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation"));
		
		struct
		{
			class AController*                                 Controller;
			struct FVector                                     Goal;
		} params;
		params.Controller = Controller;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Goal                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIBlueprintHelperLibrary::SimpleMoveToActor(class AController* Controller, class AActor* Goal)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor"));
		
		struct
		{
			class AController*                                 Controller;
			class AActor*                                      Goal;
		} params;
		params.Controller = Controller;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     MessageSource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIBlueprintHelperLibrary::SendAIMessage(class APawn* Target, const class FName& Message, class UObject* MessageSource, bool bSuccess)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage"));
		
		struct
		{
			class APawn*                                       Target;
			class FName                                        Message;
			class UObject*                                     MessageSource;
			bool                                               bSuccess;
		} params;
		params.Target = Target;
		params.Message = Message;
		params.MessageSource = MessageSource;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockMovement                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               LockAILogic                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation"));
		
		struct
		{
			class UAnimInstance*                               AnimInstance;
			bool                                               bLockMovement;
			bool                                               LockAILogic;
		} params;
		params.AnimInstance = AnimInstance;
		params.bLockMovement = bLockMovement;
		params.LockAILogic = LockAILogic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAIBlueprintHelperLibrary::IsValidAIRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation"));
		
		struct
		{
			struct FRotator                                    Rotation;
			bool                                               ReturnValue;
		} params;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIBlueprintHelperLibrary::IsValidAILocation(const struct FVector& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation"));
		
		struct
		{
			struct FVector                                     Location;
			bool                                               ReturnValue;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     DirectionVector                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIBlueprintHelperLibrary::IsValidAIDirection(const struct FVector& DirectionVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection"));
		
		struct
		{
			struct FVector                                     DirectionVector;
			bool                                               ReturnValue;
		} params;
		params.DirectionVector = DirectionVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAIBlueprintHelperLibrary::GetNextNavLinkIndex(class AController* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex"));
		
		struct
		{
			class AController*                                 Controller;
			int32_t                                            ReturnValue;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UAIBlueprintHelperLibrary::GetCurrentPathPoints(class AController* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints"));
		
		struct
		{
			class AController*                                 Controller;
			TArray<struct FVector>                             ReturnValue;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAIBlueprintHelperLibrary::GetCurrentPathIndex(class AController* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex"));
		
		struct
		{
			class AController*                                 Controller;
			int32_t                                            ReturnValue;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(class AController* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath"));
		
		struct
		{
			class AController*                                 Controller;
			class UNavigationPath*                             ReturnValue;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(class AActor* Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard"));
		
		struct
		{
			class AActor*                                      Target;
			class UBlackboardComponent*                        ReturnValue;
		} params;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.GetAIController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ControlledActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AAIController* UAIBlueprintHelperLibrary::GetAIController(class AActor* ControlledActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.GetAIController"));
		
		struct
		{
			class AActor*                                      ControlledActor;
			class AAIController*                               ReturnValue;
		} params;
		params.ControlledActor = ControlledActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Destination                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class APawn*                                       Pawn;
			struct FVector                                     Destination;
			class AActor*                                      TargetActor;
			float                                              AcceptanceRadius;
			bool                                               bStopOnOverlap;
			class UAIAsyncTaskBlueprintProxy*                  ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Pawn = Pawn;
		params.Destination = Destination;
		params.TargetActor = TargetActor;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIBlueprintHelperLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIBlueprintHelperLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIBlueprintHelperLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.UseBlackboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlackboardData*                             BlackboardAsset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBlackboardComponent*                        BlackboardComponent                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.UseBlackboard"));
		
		struct
		{
			class UBlackboardData*                             BlackboardAsset;
			class UBlackboardComponent*                        BlackboardComponent;
			bool                                               ReturnValue;
		} params;
		params.BlackboardAsset = BlackboardAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlackboardComponent != nullptr)
			*BlackboardComponent = params.BlackboardComponent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.UnclaimTaskResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ResourceClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIController::UnclaimTaskResource(class UClass* ResourceClass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.UnclaimTaskResource"));
		
		struct
		{
			class UClass*                                      ResourceClass;
		} params;
		params.ResourceClass = ResourceClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.SetPathFollowingComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPathFollowingComponent*                     NewPFComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIController::SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.SetPathFollowingComponent"));
		
		struct
		{
			class UPathFollowingComponent*                     NewPFComponent;
		} params;
		params.NewPFComponent = NewPFComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.SetMoveBlockDetection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIController::SetMoveBlockDetection(bool bEnable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.SetMoveBlockDetection"));
		
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.RunBehaviorTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBehaviorTree*                               BTAsset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.RunBehaviorTree"));
		
		struct
		{
			class UBehaviorTree*                               BTAsset;
			bool                                               ReturnValue;
		} params;
		params.BTAsset = BTAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.OnUsingBlackBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlackboardComponent*                        BlackboardComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBlackboardData*                             BlackboardAsset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.OnUsingBlackBoard"));
		
		struct
		{
			class UBlackboardComponent*                        BlackboardComp;
			class UBlackboardData*                             BlackboardAsset;
		} params;
		params.BlackboardComp = BlackboardComp;
		params.BlackboardAsset = BlackboardAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.OnGameplayTaskResourcesClaimed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayResourceSet                        NewlyClaimed                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FGameplayResourceSet                        FreshlyReleased                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AAIController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.OnGameplayTaskResourcesClaimed"));
		
		struct
		{
			struct FGameplayResourceSet                        NewlyClaimed;
			struct FGameplayResourceSet                        FreshlyReleased;
		} params;
		params.NewlyClaimed = NewlyClaimed;
		params.FreshlyReleased = FreshlyReleased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.MoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Dest                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProjectDestinationToNavigation                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanStrafe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	AIModule_EPathFollowingRequestResult AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.MoveToLocation"));
		
		struct
		{
			struct FVector                                     Dest;
			float                                              AcceptanceRadius;
			bool                                               bStopOnOverlap;
			bool                                               bUsePathfinding;
			bool                                               bProjectDestinationToNavigation;
			bool                                               bCanStrafe;
			class UClass*                                      FilterClass;
			bool                                               bAllowPartialPath;
			AIModule_EPathFollowingRequestResult               ReturnValue;
		} params;
		params.Dest = Dest;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		params.bUsePathfinding = bUsePathfinding;
		params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
		params.bCanStrafe = bCanStrafe;
		params.FilterClass = FilterClass;
		params.bAllowPartialPath = bAllowPartialPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.MoveToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Goal                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanStrafe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	AIModule_EPathFollowingRequestResult AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.MoveToActor"));
		
		struct
		{
			class AActor*                                      Goal;
			float                                              AcceptanceRadius;
			bool                                               bStopOnOverlap;
			bool                                               bUsePathfinding;
			bool                                               bCanStrafe;
			class UClass*                                      FilterClass;
			bool                                               bAllowPartialPath;
			AIModule_EPathFollowingRequestResult               ReturnValue;
		} params;
		params.Goal = Goal;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		params.bUsePathfinding = bUsePathfinding;
		params.bCanStrafe = bCanStrafe;
		params.FilterClass = FilterClass;
		params.bAllowPartialPath = bAllowPartialPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.K2_SetFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIController::K2_SetFocus(class AActor* NewFocus)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.K2_SetFocus"));
		
		struct
		{
			class AActor*                                      NewFocus;
		} params;
		params.NewFocus = NewFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.K2_SetFocalPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     FP                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIController::K2_SetFocalPoint(const struct FVector& FP)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.K2_SetFocalPoint"));
		
		struct
		{
			struct FVector                                     FP;
		} params;
		params.FP = FP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.K2_ClearFocus
	 * 		Flags  -> ()
	 */
	void AAIController::K2_ClearFocus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.K2_ClearFocus"));
		
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
	 * 		Name   -> Function AIModule.AIController.HasPartialPath
	 * 		Flags  -> ()
	 */
	bool AAIController::HasPartialPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.HasPartialPath"));
		
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
	 * 		Name   -> Function AIModule.AIController.GetPathFollowingComponent
	 * 		Flags  -> ()
	 */
	class UPathFollowingComponent* AAIController::GetPathFollowingComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetPathFollowingComponent"));
		
		struct
		{
			class UPathFollowingComponent*                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.GetMoveStatus
	 * 		Flags  -> ()
	 */
	AIModule_EPathFollowingStatus AAIController::GetMoveStatus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetMoveStatus"));
		
		struct
		{
			AIModule_EPathFollowingStatus                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.GetImmediateMoveDestination
	 * 		Flags  -> ()
	 */
	struct FVector AAIController::GetImmediateMoveDestination()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetImmediateMoveDestination"));
		
		struct
		{
			struct FVector                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.GetFocusActor
	 * 		Flags  -> ()
	 */
	class AActor* AAIController::GetFocusActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetFocusActor"));
		
		struct
		{
			class AActor*                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.GetFocalPointOnActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AAIController::GetFocalPointOnActor(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetFocalPointOnActor"));
		
		struct
		{
			class AActor*                                      Actor;
			struct FVector                                     ReturnValue;
		} params;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.GetFocalPoint
	 * 		Flags  -> ()
	 */
	struct FVector AAIController::GetFocalPoint()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetFocalPoint"));
		
		struct
		{
			struct FVector                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.GetAIPerceptionComponent
	 * 		Flags  -> ()
	 */
	class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.GetAIPerceptionComponent"));
		
		struct
		{
			class UAIPerceptionComponent*                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIController.ClaimTaskResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ResourceClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIController::ClaimTaskResource(class UClass* ResourceClass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIController.ClaimTaskResource"));
		
		struct
		{
			class UClass*                                      ResourceClass;
		} params;
		params.ResourceClass = ResourceClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDataProvider::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIDataProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIDataProvider_QueryParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDataProvider_QueryParams::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIDataProvider_QueryParams"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIDataProvider_Random.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDataProvider_Random::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIDataProvider_Random"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIHotSpotManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIHotSpotManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIHotSpotManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionComponent.SetSenseEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionComponent::SetSenseEnabled(class UClass* SenseClass, bool bEnable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.SetSenseEnabled"));
		
		struct
		{
			class UClass*                                      SenseClass;
			bool                                               bEnable;
		} params;
		params.SenseClass = SenseClass;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	 * 		Flags  -> ()
	 */
	void UAIPerceptionComponent::RequestStimuliListenerUpdate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate"));
		
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
	 * 		Name   -> Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		Engine_EEndPlayReason                              EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionComponent::OnOwnerEndPlay(class AActor* Actor, Engine_EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay"));
		
		struct
		{
			class AActor*                                      Actor;
			Engine_EEndPlayReason                              EndPlayReason;
		} params;
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SenseToUse                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionComponent::GetPerceivedHostileActorsBySense(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense"));
		
		struct
		{
			class UClass*                                      SenseToUse;
			TArray<class AActor*>                              OutActors;
		} params;
		params.SenseToUse = SenseToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors"));
		
		struct
		{
			TArray<class AActor*>                              OutActors;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionComponent.GetPerceivedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SenseToUse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionComponent::GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetPerceivedActors"));
		
		struct
		{
			class UClass*                                      SenseToUse;
			TArray<class AActor*>                              OutActors;
		} params;
		params.SenseToUse = SenseToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SenseToUse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionComponent::GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors"));
		
		struct
		{
			class UClass*                                      SenseToUse;
			TArray<class AActor*>                              OutActors;
		} params;
		params.SenseToUse = SenseToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SenseToUse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionComponent::GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors"));
		
		struct
		{
			class UClass*                                      SenseToUse;
			TArray<class AActor*>                              OutActors;
		} params;
		params.SenseToUse = SenseToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionComponent.GetActorsPerception
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorPerceptionBlueprintInfo               Info                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UAIPerceptionComponent::GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.GetActorsPerception"));
		
		struct
		{
			class AActor*                                      Actor;
			struct FActorPerceptionBlueprintInfo               Info;
			bool                                               ReturnValue;
		} params;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionComponent.ForgetAll
	 * 		Flags  -> ()
	 */
	void UAIPerceptionComponent::ForgetAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionComponent.ForgetAll"));
		
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
	 * 		Name   -> PredefindFunction UAIPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIPerceptionListenerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionListenerInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionListenerInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(class UClass* SenseClass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense"));
		
		struct
		{
			class UClass*                                      SenseClass;
		} params;
		params.SenseClass = SenseClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	 * 		Flags  -> ()
	 */
	void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem"));
		
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
	 * 		Name   -> Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	 * 		Flags  -> ()
	 */
	void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem"));
		
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
	 * 		Name   -> Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionStimuliSourceComponent::RegisterForSense(class UClass* SenseClass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense"));
		
		struct
		{
			class UClass*                                      SenseClass;
		} params;
		params.SenseClass = SenseClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIPerceptionStimuliSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionStimuliSourceComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionStimuliSourceComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISubsystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISubsystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAISenseEvent*                               PerceptionEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionSystem::ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UAISenseEvent*                               PerceptionEvent;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.PerceptionEvent = PerceptionEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionSystem.ReportEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAISenseEvent*                               PerceptionEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionSystem::ReportEvent(class UAISenseEvent* PerceptionEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.ReportEvent"));
		
		struct
		{
			class UAISenseEvent*                               PerceptionEvent;
		} params;
		params.PerceptionEvent = PerceptionEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Sense                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UClass*                                      Sense;
			class AActor*                                      Target;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Sense = Sense;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		Engine_EEndPlayReason                              EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(class AActor* Actor, Engine_EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay"));
		
		struct
		{
			class AActor*                                      Actor;
			Engine_EEndPlayReason                              EndPlayReason;
		} params;
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIStimulus                                 Stimulus                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UClass* UAIPerceptionSystem::GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FAIStimulus                                 Stimulus;
			class UClass*                                      ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIPerceptionSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionSystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIPerceptionSystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIResourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIResourceInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIResourceInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIResource_Movement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIResource_Movement::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIResource_Movement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIResource_Logic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIResource_Logic::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AIResource_Logic"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISense.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISense"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Blueprint.OnUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UAISenseEvent*>                       EventsToProcess                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*> EventsToProcess)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.OnUpdate"));
		
		struct
		{
			TArray<class UAISenseEvent*>                       EventsToProcess;
			float                                              ReturnValue;
		} params;
		params.EventsToProcess = EventsToProcess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Blueprint.OnListenerUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorListener                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIPerceptionComponent*                      PerceptionComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISense_Blueprint::OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.OnListenerUpdated"));
		
		struct
		{
			class AActor*                                      ActorListener;
			class UAIPerceptionComponent*                      PerceptionComponent;
		} params;
		params.ActorListener = ActorListener;
		params.PerceptionComponent = PerceptionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Blueprint.OnListenerUnregistered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorListener                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIPerceptionComponent*                      PerceptionComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISense_Blueprint::OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.OnListenerUnregistered"));
		
		struct
		{
			class AActor*                                      ActorListener;
			class UAIPerceptionComponent*                      PerceptionComponent;
		} params;
		params.ActorListener = ActorListener;
		params.PerceptionComponent = PerceptionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Blueprint.OnListenerRegistered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorListener                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIPerceptionComponent*                      PerceptionComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISense_Blueprint::OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.OnListenerRegistered"));
		
		struct
		{
			class AActor*                                      ActorListener;
			class UAIPerceptionComponent*                      PerceptionComponent;
		} params;
		params.ActorListener = ActorListener;
		params.PerceptionComponent = PerceptionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Blueprint.K2_OnNewPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISense_Blueprint::K2_OnNewPawn(class APawn* NewPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.K2_OnNewPawn"));
		
		struct
		{
			class APawn*                                       NewPawn;
		} params;
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Blueprint.GetAllListenerComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UAIPerceptionComponent*>              ListenerComponents                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAISense_Blueprint::GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.GetAllListenerComponents"));
		
		struct
		{
			TArray<class UAIPerceptionComponent*>              ListenerComponents;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ListenerComponents != nullptr)
			*ListenerComponents = params.ListenerComponents;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Blueprint.GetAllListenerActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ListenerActors                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAISense_Blueprint::GetAllListenerActors(TArray<class AActor*>* ListenerActors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Blueprint.GetAllListenerActors"));
		
		struct
		{
			TArray<class AActor*>                              ListenerActors;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ListenerActors != nullptr)
			*ListenerActors = params.ListenerActors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISense_Blueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Blueprint::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Blueprint"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Damage.ReportDamageEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EventLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISense_Damage::ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Damage.ReportDamageEvent"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class AActor*                                      DamagedActor;
			class AActor*                                      Instigator;
			float                                              DamageAmount;
			struct FVector                                     EventLocation;
			struct FVector                                     HitLocation;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.DamagedActor = DamagedActor;
		params.Instigator = Instigator;
		params.DamageAmount = DamageAmount;
		params.EventLocation = EventLocation;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISense_Damage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Damage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Damage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Hearing.ReportNoiseEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NoiseLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Loudness                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISense_Hearing::ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const class FName& Tag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Hearing.ReportNoiseEvent"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                                     NoiseLocation;
			float                                              Loudness;
			class AActor*                                      Instigator;
			float                                              MaxRange;
			class FName                                        Tag;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.NoiseLocation = NoiseLocation;
		params.Loudness = Loudness;
		params.Instigator = Instigator;
		params.MaxRange = MaxRange;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISense_Hearing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Hearing::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Hearing"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Requestor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      PredictedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PredictionTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISense_Prediction::RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent"));
		
		struct
		{
			class APawn*                                       Requestor;
			class AActor*                                      PredictedActor;
			float                                              PredictionTime;
		} params;
		params.Requestor = Requestor;
		params.PredictedActor = PredictedActor;
		params.PredictionTime = PredictionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Requestor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      PredictedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PredictionTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAISense_Prediction::RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent"));
		
		struct
		{
			class AAIController*                               Requestor;
			class AActor*                                      PredictedActor;
			float                                              PredictionTime;
		} params;
		params.Requestor = Requestor;
		params.PredictedActor = PredictedActor;
		params.PredictionTime = PredictionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISense_Prediction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Prediction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Prediction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISense_Sight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Sight::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Sight"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISense_Team.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Team::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Team"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISense_Touch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Touch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISense_Touch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseBlueprintListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseBlueprintListener::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseBlueprintListener"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseConfig_Blueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Blueprint::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Blueprint"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseConfig_Damage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Damage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Damage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseConfig_Hearing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Hearing::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Hearing"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseConfig_Prediction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Prediction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Prediction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseConfig_Sight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Sight::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Sight"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseConfig_Team.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Team::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Team"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseConfig_Touch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Touch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseConfig_Touch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseEvent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseEvent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseEvent_Damage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseEvent_Damage::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseEvent_Damage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISenseEvent_Hearing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseEvent_Hearing::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISenseEvent_Hearing"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISightTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISightTargetInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISightTargetInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AISystem.AILoggingVerbose
	 * 		Flags  -> ()
	 */
	void UAISystem::AILoggingVerbose()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISystem.AILoggingVerbose"));
		
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
	 * 		Name   -> Function AIModule.AISystem.AIIgnorePlayers
	 * 		Flags  -> ()
	 */
	void UAISystem::AIIgnorePlayers()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AISystem.AIIgnorePlayers"));
		
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
	 * 		Name   -> PredefindFunction UAISystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AISystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAITask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AITask"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAITask_LockLogic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_LockLogic::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AITask_LockLogic"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AITask_MoveTo.AIMoveTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GoalLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      GoalActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EAIOptionFlag                             StopOnOverlap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EAIOptionFlag                             AcceptPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLockAILogic                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseContinuosGoalTracking                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EAIOptionFlag                             ProjectGoalOnNavigation                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, AIModule_EAIOptionFlag StopOnOverlap, AIModule_EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, AIModule_EAIOptionFlag ProjectGoalOnNavigation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AITask_MoveTo.AIMoveTo"));
		
		struct
		{
			class AAIController*                               Controller;
			struct FVector                                     GoalLocation;
			class AActor*                                      GoalActor;
			float                                              AcceptanceRadius;
			AIModule_EAIOptionFlag                             StopOnOverlap;
			AIModule_EAIOptionFlag                             AcceptPartialPath;
			bool                                               bUsePathfinding;
			bool                                               bLockAILogic;
			bool                                               bUseContinuosGoalTracking;
			AIModule_EAIOptionFlag                             ProjectGoalOnNavigation;
			class UAITask_MoveTo*                              ReturnValue;
		} params;
		params.Controller = Controller;
		params.GoalLocation = GoalLocation;
		params.GoalActor = GoalActor;
		params.AcceptanceRadius = AcceptanceRadius;
		params.StopOnOverlap = StopOnOverlap;
		params.AcceptPartialPath = AcceptPartialPath;
		params.bUsePathfinding = bUsePathfinding;
		params.bLockAILogic = bLockAILogic;
		params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
		params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAITask_MoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_MoveTo::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AITask_MoveTo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.AITask_RunEQS.RunEQS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEnvQuery*                                   QueryTemplate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAITask_RunEQS* UAITask_RunEQS::RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.AITask_RunEQS.RunEQS"));
		
		struct
		{
			class AAIController*                               Controller;
			class UEnvQuery*                                   QueryTemplate;
			class UAITask_RunEQS*                              ReturnValue;
		} params;
		params.Controller = Controller;
		params.QueryTemplate = QueryTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAITask_RunEQS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_RunEQS::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.AITask_RunEQS"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBehaviorTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTree::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTree"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BrainComponent.StopLogic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBrainComponent::StopLogic(const class FString& Reason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BrainComponent.StopLogic"));
		
		struct
		{
			class FString                                      Reason;
		} params;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BrainComponent.StartLogic
	 * 		Flags  -> ()
	 */
	void UBrainComponent::StartLogic()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BrainComponent.StartLogic"));
		
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
	 * 		Name   -> Function AIModule.BrainComponent.RestartLogic
	 * 		Flags  -> ()
	 */
	void UBrainComponent::RestartLogic()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BrainComponent.RestartLogic"));
		
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
	 * 		Name   -> Function AIModule.BrainComponent.IsRunning
	 * 		Flags  -> ()
	 */
	bool UBrainComponent::IsRunning()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BrainComponent.IsRunning"));
		
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
	 * 		Name   -> Function AIModule.BrainComponent.IsPaused
	 * 		Flags  -> ()
	 */
	bool UBrainComponent::IsPaused()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BrainComponent.IsPaused"));
		
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
	 * 		Name   -> PredefindFunction UBrainComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrainComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BrainComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InjectTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBehaviorTree*                               BehaviorAsset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBehaviorTreeComponent::SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree"));
		
		struct
		{
			struct FGameplayTag                                InjectTag;
			class UBehaviorTree*                               BehaviorAsset;
		} params;
		params.InjectTag = InjectTag;
		params.BehaviorAsset = BehaviorAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                CooldownTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime"));
		
		struct
		{
			struct FGameplayTag                                CooldownTag;
			float                                              ReturnValue;
		} params;
		params.CooldownTag = CooldownTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                CooldownTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CooldownDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddToExistingDuration                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBehaviorTreeComponent::AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration"));
		
		struct
		{
			struct FGameplayTag                                CooldownTag;
			float                                              CooldownDuration;
			bool                                               bAddToExistingDuration;
		} params;
		params.CooldownTag = CooldownTag;
		params.CooldownDuration = CooldownDuration;
		params.bAddToExistingDuration = bAddToExistingDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBehaviorTreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTreeComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTreeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBehaviorTreeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTreeManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTreeManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBehaviorTreeTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTreeTypes::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BehaviorTreeTypes"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
	 * 		Flags  -> ()
	 */
	class UBlackboardData* UBlackboardAssetProvider::GetBlackboardAsset()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardAssetProvider.GetBlackboardAsset"));
		
		struct
		{
			class UBlackboardData*                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardAssetProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardAssetProvider::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardAssetProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     VectorValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsVector(const class FName& KeyName, const struct FVector& VectorValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsVector"));
		
		struct
		{
			class FName                                        KeyName;
			struct FVector                                     VectorValue;
		} params;
		params.KeyName = KeyName;
		params.VectorValue = VectorValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsString(const class FName& KeyName, const class FString& StringValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsString"));
		
		struct
		{
			class FName                                        KeyName;
			class FString                                      StringValue;
		} params;
		params.KeyName = KeyName;
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    VectorValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsRotator(const class FName& KeyName, const struct FRotator& VectorValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsRotator"));
		
		struct
		{
			class FName                                        KeyName;
			struct FRotator                                    VectorValue;
		} params;
		params.KeyName = KeyName;
		params.VectorValue = VectorValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsObject(const class FName& KeyName, class UObject* ObjectValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsObject"));
		
		struct
		{
			class FName                                        KeyName;
			class UObject*                                     ObjectValue;
		} params;
		params.KeyName = KeyName;
		params.ObjectValue = ObjectValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NameValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsName(const class FName& KeyName, const class FName& NameValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsName"));
		
		struct
		{
			class FName                                        KeyName;
			class FName                                        NameValue;
		} params;
		params.KeyName = KeyName;
		params.NameValue = NameValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IntValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsInt(const class FName& KeyName, int32_t IntValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsInt"));
		
		struct
		{
			class FName                                        KeyName;
			int32_t                                            IntValue;
		} params;
		params.KeyName = KeyName;
		params.IntValue = IntValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsFloat(const class FName& KeyName, float FloatValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsFloat"));
		
		struct
		{
			class FName                                        KeyName;
			float                                              FloatValue;
		} params;
		params.KeyName = KeyName;
		params.FloatValue = FloatValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      EnumValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsEnum(const class FName& KeyName, unsigned char EnumValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsEnum"));
		
		struct
		{
			class FName                                        KeyName;
			unsigned char                                      EnumValue;
		} params;
		params.KeyName = KeyName;
		params.EnumValue = EnumValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ClassValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsClass(const class FName& KeyName, class UClass* ClassValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsClass"));
		
		struct
		{
			class FName                                        KeyName;
			class UClass*                                      ClassValue;
		} params;
		params.KeyName = KeyName;
		params.ClassValue = ClassValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               BoolValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::SetValueAsBool(const class FName& KeyName, bool BoolValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.SetValueAsBool"));
		
		struct
		{
			class FName                                        KeyName;
			bool                                               BoolValue;
		} params;
		params.KeyName = KeyName;
		params.BoolValue = BoolValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.IsVectorValueSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlackboardComponent::IsVectorValueSet(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.IsVectorValueSet"));
		
		struct
		{
			class FName                                        KeyName;
			bool                                               ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UBlackboardComponent::GetValueAsVector(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsVector"));
		
		struct
		{
			class FName                                        KeyName;
			struct FVector                                     ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBlackboardComponent::GetValueAsString(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsString"));
		
		struct
		{
			class FName                                        KeyName;
			class FString                                      ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UBlackboardComponent::GetValueAsRotator(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsRotator"));
		
		struct
		{
			class FName                                        KeyName;
			struct FRotator                                    ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UBlackboardComponent::GetValueAsObject(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsObject"));
		
		struct
		{
			class FName                                        KeyName;
			class UObject*                                     ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UBlackboardComponent::GetValueAsName(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsName"));
		
		struct
		{
			class FName                                        KeyName;
			class FName                                        ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UBlackboardComponent::GetValueAsInt(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsInt"));
		
		struct
		{
			class FName                                        KeyName;
			int32_t                                            ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UBlackboardComponent::GetValueAsFloat(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsFloat"));
		
		struct
		{
			class FName                                        KeyName;
			float                                              ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char UBlackboardComponent::GetValueAsEnum(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsEnum"));
		
		struct
		{
			class FName                                        KeyName;
			unsigned char                                      ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UBlackboardComponent::GetValueAsClass(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsClass"));
		
		struct
		{
			class FName                                        KeyName;
			class UClass*                                      ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlackboardComponent::GetValueAsBool(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetValueAsBool"));
		
		struct
		{
			class FName                                        KeyName;
			bool                                               ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetRotationFromEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    ResultRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UBlackboardComponent::GetRotationFromEntry(const class FName& KeyName, struct FRotator* ResultRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetRotationFromEntry"));
		
		struct
		{
			class FName                                        KeyName;
			struct FRotator                                    ResultRotation;
			bool                                               ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultRotation != nullptr)
			*ResultRotation = params.ResultRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.GetLocationFromEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ResultLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBlackboardComponent::GetLocationFromEntry(const class FName& KeyName, struct FVector* ResultLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.GetLocationFromEntry"));
		
		struct
		{
			class FName                                        KeyName;
			struct FVector                                     ResultLocation;
			bool                                               ReturnValue;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultLocation != nullptr)
			*ResultLocation = params.ResultLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BlackboardComponent.ClearValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlackboardComponent::ClearValue(const class FName& KeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BlackboardComponent.ClearValue"));
		
		struct
		{
			class FName                                        KeyName;
		} params;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardData::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_Bool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Bool::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Bool"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_Class.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Class::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Class"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_Enum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Enum::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Enum"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_Float.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Float::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Float"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_Int.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Int::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Int"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_Name.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Name::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Name"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_NativeEnum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_NativeEnum::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_NativeEnum"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_Object.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Object::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Object"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_Rotator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Rotator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Rotator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_String.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_String::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_String"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlackboardKeyType_Vector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Vector::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BlackboardKeyType_Vector"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTNode::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTNode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTAuxiliaryNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTAuxiliaryNode::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTAuxiliaryNode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTCompositeNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTCompositeNode::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTCompositeNode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTComposite_Selector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_Selector::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTComposite_Selector"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTComposite_Sequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_Sequence::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTComposite_Sequence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTComposite_SimpleParallel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_SimpleParallel::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTComposite_SimpleParallel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_BlackboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_BlackboardBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_BlackboardBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_Blackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Blackboard::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_Blackboard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
			float                                              DeltaSeconds;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick"));
		
		struct
		{
			class AActor*                                      OwnerActor;
			float                                              DeltaSeconds;
		} params;
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated"));
		
		struct
		{
			class AActor*                                      OwnerActor;
		} params;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated"));
		
		struct
		{
			class AActor*                                      OwnerActor;
		} params;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart"));
		
		struct
		{
			class AActor*                                      OwnerActor;
		} params;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EBTNodeResult                             NodeResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, AIModule_EBTNodeResult NodeResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
			AIModule_EBTNodeResult                             NodeResult;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.NodeResult = NodeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EBTNodeResult                             NodeResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class AActor* OwnerActor, AIModule_EBTNodeResult NodeResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish"));
		
		struct
		{
			class AActor*                                      OwnerActor;
			AIModule_EBTNodeResult                             NodeResult;
		} params;
		params.OwnerActor = OwnerActor;
		params.NodeResult = NodeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
			bool                                               ReturnValue;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBTDecorator_BlueprintBase::PerformConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck"));
		
		struct
		{
			class AActor*                                      OwnerActor;
			bool                                               ReturnValue;
		} params;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	 * 		Flags  -> ()
	 */
	bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive"));
		
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
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	 * 		Flags  -> ()
	 */
	bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive"));
		
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
	 * 		Name   -> PredefindFunction UBTDecorator_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_BlueprintBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_BlueprintBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_CheckGameplayTagsOnActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CheckGameplayTagsOnActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_CheckGameplayTagsOnActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_CompareBBEntries.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareBBEntries::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_CompareBBEntries"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_ConditionalLoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ConditionalLoop::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ConditionalLoop"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_ConeCheck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ConeCheck::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ConeCheck"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_Cooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Cooldown::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_Cooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_DoesPathExist.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_DoesPathExist::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_DoesPathExist"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_ForceSuccess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ForceSuccess::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ForceSuccess"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_IsAtLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsAtLocation::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_IsAtLocation"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_IsBBEntryOfClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsBBEntryOfClass::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_IsBBEntryOfClass"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_KeepInCone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_KeepInCone::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_KeepInCone"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_Loop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Loop::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_Loop"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_ReachedMoveGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ReachedMoveGoal::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_ReachedMoveGoal"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_SetTagCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_SetTagCooldown::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_SetTagCooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_TagCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TagCooldown::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_TagCooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTDecorator_TimeLimit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TimeLimit::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTDecorator_TimeLimit"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::StopUsingExternalEvent(class UBTNode* NodeOwner)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
		} params;
		params.NodeOwner = NodeOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			class AActor*                                      OwningActor;
		} params;
		params.NodeOwner = NodeOwner;
		params.OwningActor = OwningActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			struct FVector                                     Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			class FString                                      Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			struct FRotator                                    Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			class UObject*                                     Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FName& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			class FName                                        Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32_t Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			int32_t                                            Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			float                                              Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			unsigned char                                      Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			class UClass*                                      Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			bool                                               Value;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBlackboardComponent* UBTFunctionLibrary::GetOwnersBlackboard(class UBTNode* NodeOwner)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetOwnersBlackboard"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			class UBlackboardComponent*                        ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetOwnerComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBehaviorTreeComponent* UBTFunctionLibrary::GetOwnerComponent(class UBTNode* NodeOwner)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetOwnerComponent"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			class UBehaviorTreeComponent*                      ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVector UBTFunctionLibrary::GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			struct FVector                                     ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UBTFunctionLibrary::GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			class FString                                      ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FRotator UBTFunctionLibrary::GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			struct FRotator                                    ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UObject* UBTFunctionLibrary::GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			class UObject*                                     ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FName UBTFunctionLibrary::GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			class FName                                        ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UBTFunctionLibrary::GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			int32_t                                            ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UBTFunctionLibrary::GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			float                                              ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	unsigned char UBTFunctionLibrary::GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			unsigned char                                      ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UClass* UBTFunctionLibrary::GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			class UClass*                                      ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UBTFunctionLibrary::GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			bool                                               ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class AActor* UBTFunctionLibrary::GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
			class AActor*                                      ReturnValue;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTFunctionLibrary.ClearBlackboardValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBTFunctionLibrary::ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTFunctionLibrary.ClearBlackboardValue"));
		
		struct
		{
			class UBTNode*                                     NodeOwner;
			struct FBlackboardKeySelector                      Key;
		} params;
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTFunctionLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTService_BlackboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_BlackboardBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTService_BlackboardBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveTickAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTService_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveTickAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
			float                                              DeltaSeconds;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTService_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveTick"));
		
		struct
		{
			class AActor*                                      OwnerActor;
			float                                              DeltaSeconds;
		} params;
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTService_BlueprintBase::ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTService_BlueprintBase::ReceiveSearchStart(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart"));
		
		struct
		{
			class AActor*                                      OwnerActor;
		} params;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTService_BlueprintBase::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTService_BlueprintBase::ReceiveDeactivation(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation"));
		
		struct
		{
			class AActor*                                      OwnerActor;
		} params;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTService_BlueprintBase::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTService_BlueprintBase::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.ReceiveActivation"));
		
		struct
		{
			class AActor*                                      OwnerActor;
		} params;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.IsServiceActive
	 * 		Flags  -> ()
	 */
	bool UBTService_BlueprintBase::IsServiceActive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTService_BlueprintBase.IsServiceActive"));
		
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
	 * 		Name   -> PredefindFunction UBTService_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_BlueprintBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTService_BlueprintBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTService_DefaultFocus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_DefaultFocus::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTService_DefaultFocus"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTService_RunEQS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_RunEQS::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTService_RunEQS"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTaskNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTaskNode::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTaskNode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_BlackboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_BlackboardBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_BlackboardBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RequestID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_BlueprintBase::SetFinishOnMessageWithId(const class FName& MessageName, int32_t RequestID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId"));
		
		struct
		{
			class FName                                        MessageName;
			int32_t                                            RequestID;
		} params;
		params.MessageName = MessageName;
		params.RequestID = RequestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_BlueprintBase::SetFinishOnMessage(const class FName& MessageName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage"));
		
		struct
		{
			class FName                                        MessageName;
		} params;
		params.MessageName = MessageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
			float                                              DeltaSeconds;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveTick"));
		
		struct
		{
			class AActor*                                      OwnerActor;
			float                                              DeltaSeconds;
		} params;
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_BlueprintBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_BlueprintBase::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveExecute"));
		
		struct
		{
			class AActor*                                      OwnerActor;
		} params;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_BlueprintBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI"));
		
		struct
		{
			class AAIController*                               OwnerController;
			class APawn*                                       ControlledPawn;
		} params;
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_BlueprintBase::ReceiveAbort(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.ReceiveAbort"));
		
		struct
		{
			class AActor*                                      OwnerActor;
		} params;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	 * 		Flags  -> ()
	 */
	bool UBTTask_BlueprintBase::IsTaskExecuting()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting"));
		
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
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.IsTaskAborting
	 * 		Flags  -> ()
	 */
	bool UBTTask_BlueprintBase::IsTaskAborting()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.IsTaskAborting"));
		
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
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.FinishExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.FinishExecute"));
		
		struct
		{
			bool                                               bSuccess;
		} params;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.FinishAbort
	 * 		Flags  -> ()
	 */
	void UBTTask_BlueprintBase::FinishAbort()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.BTTask_BlueprintBase.FinishAbort"));
		
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
	 * 		Name   -> PredefindFunction UBTTask_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_BlueprintBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_BlueprintBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_FinishWithResult.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_FinishWithResult::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_FinishWithResult"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_GameplayTaskBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_GameplayTaskBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_GameplayTaskBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_MakeNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MakeNoise::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_MakeNoise"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_MoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveTo::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_MoveTo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_MoveDirectlyToward.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveDirectlyToward::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_MoveDirectlyToward"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_PawnActionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PawnActionBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PawnActionBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_PlayAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PlayAnimation::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PlayAnimation"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_PlaySound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PlaySound::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PlaySound"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_PushPawnAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PushPawnAction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_PushPawnAction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_RotateToFaceBBEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RotateToFaceBBEntry::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RotateToFaceBBEntry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_RunBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RunBehavior::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RunBehavior"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_RunBehaviorDynamic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RunBehaviorDynamic::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RunBehaviorDynamic"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_RunEQSQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RunEQSQuery::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_RunEQSQuery"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_SetTagCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetTagCooldown::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_SetTagCooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_Wait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_Wait::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_Wait"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_WaitBlackboardTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_WaitBlackboardTime::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.BTTask_WaitBlackboardTime"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCrowdAgentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdAgentInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.CrowdAgentInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PathFollowingComponent.OnNavDataRegistered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathFollowingComponent::OnNavDataRegistered(class ANavigationData* NavData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PathFollowingComponent.OnNavDataRegistered"));
		
		struct
		{
			class ANavigationData*                             NavData;
		} params;
		params.NavData = NavData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PathFollowingComponent.OnActorBump
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UPathFollowingComponent::OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PathFollowingComponent.OnActorBump"));
		
		struct
		{
			class AActor*                                      SelfActor;
			class AActor*                                      OtherActor;
			struct FVector                                     NormalImpulse;
			struct FHitResult                                  Hit;
		} params;
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PathFollowingComponent.GetPathDestination
	 * 		Flags  -> ()
	 */
	struct FVector UPathFollowingComponent::GetPathDestination()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PathFollowingComponent.GetPathDestination"));
		
		struct
		{
			struct FVector                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PathFollowingComponent.GetPathActionType
	 * 		Flags  -> ()
	 */
	AIModule_EPathFollowingAction UPathFollowingComponent::GetPathActionType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PathFollowingComponent.GetPathActionType"));
		
		struct
		{
			AIModule_EPathFollowingAction                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PathFollowingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuspend                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering"));
		
		struct
		{
			bool                                               bSuspend;
		} params;
		params.bSuspend = bSuspend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCrowdFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdFollowingComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.CrowdFollowingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCrowdManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.CrowdManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADetourCrowdAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADetourCrowdAIController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.DetourCrowdAIController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQuery::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQuery"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ResultingLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation"));
		
		struct
		{
			class UObject*                                     QuerierObject;
			class AActor*                                      QuerierActor;
			struct FVector                                     ResultingLocation;
		} params;
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingLocation != nullptr)
			*ResultingLocation = params.ResultingLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ResultingActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor"));
		
		struct
		{
			class UObject*                                     QuerierObject;
			class AActor*                                      QuerierActor;
			class AActor*                                      ResultingActor;
		} params;
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingActor != nullptr)
			*ResultingActor = params.ResultingActor;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             ResultingLocationSet                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet"));
		
		struct
		{
			class UObject*                                     QuerierObject;
			class AActor*                                      QuerierActor;
			TArray<struct FVector>                             ResultingLocationSet;
		} params;
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingLocationSet != nullptr)
			*ResultingLocationSet = params.ResultingLocationSet;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ResultingActorsSet                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet"));
		
		struct
		{
			class UObject*                                     QuerierObject;
			class AActor*                                      QuerierActor;
			TArray<class AActor*>                              ResultingActorsSet;
		} params;
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingActorsSet != nullptr)
			*ResultingActorsSet = params.ResultingActorsSet;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryContext_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_BlueprintBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext_BlueprintBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryContext_Item.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Item::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext_Item"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryContext_Querier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Querier::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryContext_Querier"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryDebugHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryDebugHelpers::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryDebugHelpers"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryNode::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryNode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_ActorsOfClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_ActorsOfClass::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_ActorsOfClass"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	 * 		Flags  -> ()
	 */
	class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier"));
		
		struct
		{
			class UObject*                                     ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             ContextLocations                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct FVector> ContextLocations)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration"));
		
		struct
		{
			TArray<struct FVector>                             ContextLocations;
		} params;
		params.ContextLocations = ContextLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     GeneratedVector                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct FVector& GeneratedVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector"));
		
		struct
		{
			struct FVector                                     GeneratedVector;
		} params;
		params.GeneratedVector = GeneratedVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      GeneratedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class AActor* GeneratedActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor"));
		
		struct
		{
			class AActor*                                      GeneratedActor;
		} params;
		params.GeneratedActor = GeneratedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_BlueprintBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_BlueprintBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_Composite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Composite::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_Composite"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_ProjectedPoints.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_ProjectedPoints::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_ProjectedPoints"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_Cone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Cone::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_Cone"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_CurrentLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_CurrentLocation::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_CurrentLocation"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_Donut.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Donut::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_Donut"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_OnCircle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_OnCircle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_OnCircle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_SimpleGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_SimpleGrid::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_SimpleGrid"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryGenerator_PathingGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_PathingGrid::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryGenerator_PathingGrid"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(const class FName& ParamName, float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam"));
		
		struct
		{
			class FName                                        ParamName;
			float                                              Value;
		} params;
		params.ParamName = ParamName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations"));
		
		struct
		{
			TArray<struct FVector>                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors"));
		
		struct
		{
			TArray<class AActor*>                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             ResultLocations                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations"));
		
		struct
		{
			TArray<struct FVector>                             ResultLocations;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultLocations != nullptr)
			*ResultLocations = params.ResultLocations;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ResultActors                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(TArray<class AActor*>* ResultActors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors"));
		
		struct
		{
			TArray<class AActor*>                              ResultActors;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultActors != nullptr)
			*ResultActors = params.ResultActors;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore"));
		
		struct
		{
			int32_t                                            ItemIndex;
			float                                              ReturnValue;
		} params;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EEnvQueryStatus                           QueryStatus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, AIModule_EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature"));
		
		struct
		{
			class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;
			AIModule_EEnvQueryStatus                           QueryStatus;
		} params;
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryInstanceBlueprintWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryInstanceBlueprintWrapper::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryInstanceBlueprintWrapper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryItemType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryItemType_VectorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_VectorBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_VectorBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryItemType_ActorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_ActorBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_ActorBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryItemType_Actor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Actor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_Actor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryItemType_Direction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Direction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_Direction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryItemType_Point.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Point::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryItemType_Point"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.EnvQueryManager.RunEQSQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEnvQuery*                                   QueryTemplate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Querier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EEnvQueryRunMode                          RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WrapperClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, AIModule_EEnvQueryRunMode RunMode, class UClass* WrapperClass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.EnvQueryManager.RunEQSQuery"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UEnvQuery*                                   QueryTemplate;
			class UObject*                                     Querier;
			AIModule_EEnvQueryRunMode                          RunMode;
			class UClass*                                      WrapperClass;
			class UEnvQueryInstanceBlueprintWrapper*           ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.QueryTemplate = QueryTemplate;
		params.Querier = Querier;
		params.RunMode = RunMode;
		params.WrapperClass = WrapperClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryOption.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryOption::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryOption"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_Distance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Distance::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Distance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_Dot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Dot::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Dot"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_GameplayTags.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_GameplayTags::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_GameplayTags"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_Overlap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Overlap::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Overlap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_Pathfinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Pathfinding::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Pathfinding"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_PathfindingBatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_PathfindingBatch::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_PathfindingBatch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_Project.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Project::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Project"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_Random.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Random::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Random"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_Trace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Trace::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Trace"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_Volume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Volume::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTest_Volume"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTypes::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EnvQueryTypes"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEQSQueryResultSourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQSQueryResultSourceInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EQSQueryResultSourceInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEQSRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQSRenderingComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EQSRenderingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEQSTestingPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEQSTestingPawn::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.EQSTestingPawn"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGenericTeamAgentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericTeamAgentInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.GenericTeamAgentInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGridPathAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGridPathAIController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.GridPathAIController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGridPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGridPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.GridPathFollowingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNavFilter_AIControllerDefault.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavFilter_AIControllerDefault::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.NavFilter_AIControllerDefault"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLinkProxy.SetSmartLinkEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLinkProxy.SetSmartLinkEnabled"));
		
		struct
		{
			bool                                               bEnabled;
		} params;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLinkProxy.ResumePathFollowing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Agent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANavLinkProxy::ResumePathFollowing(class AActor* Agent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLinkProxy.ResumePathFollowing"));
		
		struct
		{
			class AActor*                                      Agent;
		} params;
		params.Agent = Agent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Agent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Destination                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANavLinkProxy::ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLinkProxy.ReceiveSmartLinkReached"));
		
		struct
		{
			class AActor*                                      Agent;
			struct FVector                                     Destination;
		} params;
		params.Agent = Agent;
		params.Destination = Destination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLinkProxy.IsSmartLinkEnabled
	 * 		Flags  -> ()
	 */
	bool ANavLinkProxy::IsSmartLinkEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLinkProxy.IsSmartLinkEnabled"));
		
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
	 * 		Name   -> Function AIModule.NavLinkProxy.HasMovingAgents
	 * 		Flags  -> ()
	 */
	bool ANavLinkProxy::HasMovingAgents()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLinkProxy.HasMovingAgents"));
		
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
	 * 		Name   -> PredefindFunction ANavLinkProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANavLinkProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.NavLinkProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CellSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNavLocalGridManager::SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			float                                              CellSize;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.CellSize = CellSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GridId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRebuildGrids                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNavLocalGridManager::RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			int32_t                                            GridId;
			bool                                               bRebuildGrids;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.GridId = GridId;
		params.bRebuildGrids = bRebuildGrids;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             PathPoints                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UNavLocalGridManager::FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                                     Start;
			struct FVector                                     End;
			TArray<struct FVector>                             PathPoints;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PathPoints != nullptr)
			*PathPoints = params.PathPoints;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Locations                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Radius2D                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRebuildGrids                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UNavLocalGridManager::AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int32_t Radius2D, float Height, bool bRebuildGrids)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			TArray<struct FVector>                             Locations;
			int32_t                                            Radius2D;
			float                                              Height;
			bool                                               bRebuildGrids;
			int32_t                                            ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Locations = Locations;
		params.Radius2D = Radius2D;
		params.Height = Height;
		params.bRebuildGrids = bRebuildGrids;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Radius2D                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRebuildGrids                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UNavLocalGridManager::AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                                     Location;
			int32_t                                            Radius2D;
			float                                              Height;
			bool                                               bRebuildGrids;
			int32_t                                            ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.Radius2D = Radius2D;
		params.Height = Height;
		params.bRebuildGrids = bRebuildGrids;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CapsuleRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CapsuleHalfHeight                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Radius2D                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRebuildGrids                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UNavLocalGridManager::AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                                     Location;
			float                                              CapsuleRadius;
			float                                              CapsuleHalfHeight;
			int32_t                                            Radius2D;
			float                                              Height;
			bool                                               bRebuildGrids;
			int32_t                                            ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.CapsuleRadius = CapsuleRadius;
		params.CapsuleHalfHeight = CapsuleHalfHeight;
		params.Radius2D = Radius2D;
		params.Height = Height;
		params.bRebuildGrids = bRebuildGrids;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Radius2D                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRebuildGrids                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UNavLocalGridManager::AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int32_t Radius2D, float Height, bool bRebuildGrids)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FVector                                     Location;
			struct FVector                                     Extent;
			struct FRotator                                    Rotation;
			int32_t                                            Radius2D;
			float                                              Height;
			bool                                               bRebuildGrids;
			int32_t                                            ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.Extent = Extent;
		params.Rotation = Rotation;
		params.Radius2D = Radius2D;
		params.Height = Height;
		params.bRebuildGrids = bRebuildGrids;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNavLocalGridManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavLocalGridManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.NavLocalGridManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPathFollowingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathFollowingManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PathFollowingManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnAction.GetActionPriority
	 * 		Flags  -> ()
	 */
	AIModule_EAIRequestPriority UPawnAction::GetActionPriority()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction.GetActionPriority"));
		
		struct
		{
			AIModule_EAIRequestPriority                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnAction.Finish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		AIModule_EPawnActionResult                         WithResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnAction::Finish(AIModule_EPawnActionResult WithResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction.Finish"));
		
		struct
		{
			AIModule_EPawnActionResult                         WithResult;
		} params;
		params.WithResult = WithResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnAction.CreateActionInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActionClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPawnAction* UPawnAction::CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction.CreateActionInstance"));
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UClass*                                      ActionClass;
			class UPawnAction*                                 ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ActionClass = ActionClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPawnAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnAction_BlueprintBase::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionTick"));
		
		struct
		{
			class APawn*                                       ControlledPawn;
			float                                              DeltaSeconds;
		} params;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnAction_BlueprintBase::ActionStart(class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionStart"));
		
		struct
		{
			class APawn*                                       ControlledPawn;
		} params;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionResume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnAction_BlueprintBase::ActionResume(class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionResume"));
		
		struct
		{
			class APawn*                                       ControlledPawn;
		} params;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionPause
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnAction_BlueprintBase::ActionPause(class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionPause"));
		
		struct
		{
			class APawn*                                       ControlledPawn;
		} params;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EPawnActionResult                         WithResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnAction_BlueprintBase::ActionFinished(class APawn* ControlledPawn, AIModule_EPawnActionResult WithResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnAction_BlueprintBase.ActionFinished"));
		
		struct
		{
			class APawn*                                       ControlledPawn;
			AIModule_EPawnActionResult                         WithResult;
		} params;
		params.ControlledPawn = ControlledPawn;
		params.WithResult = WithResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPawnAction_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_BlueprintBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_BlueprintBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPawnAction_Move.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Move::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Move"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPawnAction_Repeat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Repeat::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Repeat"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPawnAction_Sequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Sequence::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Sequence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPawnAction_Wait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Wait::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PawnAction_Wait"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnActionsComponent.K2_PushAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAction*                                 NewAction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EAIRequestPriority                        Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPawnActionsComponent::K2_PushAction(class UPawnAction* NewAction, AIModule_EAIRequestPriority Priority, class UObject* Instigator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnActionsComponent.K2_PushAction"));
		
		struct
		{
			class UPawnAction*                                 NewAction;
			AIModule_EAIRequestPriority                        Priority;
			class UObject*                                     Instigator;
			bool                                               ReturnValue;
		} params;
		params.NewAction = NewAction;
		params.Priority = Priority;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnActionsComponent.K2_PerformAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPawnAction*                                 Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		AIModule_EAIRequestPriority                        Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPawnActionsComponent::K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, AIModule_EAIRequestPriority Priority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnActionsComponent.K2_PerformAction"));
		
		struct
		{
			class APawn*                                       Pawn;
			class UPawnAction*                                 Action;
			AIModule_EAIRequestPriority                        Priority;
			bool                                               ReturnValue;
		} params;
		params.Pawn = Pawn;
		params.Action = Action;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnActionsComponent.K2_ForceAbortAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAction*                                 ActionToAbort                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	AIModule_EPawnActionAbortState UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* ActionToAbort)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnActionsComponent.K2_ForceAbortAction"));
		
		struct
		{
			class UPawnAction*                                 ActionToAbort;
			AIModule_EPawnActionAbortState                     ReturnValue;
		} params;
		params.ActionToAbort = ActionToAbort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnActionsComponent.K2_AbortAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPawnAction*                                 ActionToAbort                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	AIModule_EPawnActionAbortState UPawnActionsComponent::K2_AbortAction(class UPawnAction* ActionToAbort)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnActionsComponent.K2_AbortAction"));
		
		struct
		{
			class UPawnAction*                                 ActionToAbort;
			AIModule_EPawnActionAbortState                     ReturnValue;
		} params;
		params.ActionToAbort = ActionToAbort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPawnActionsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnActionsComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PawnActionsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled"));
		
		struct
		{
			bool                                               bEnabled;
		} params;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnSensingComponent.SetSensingInterval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSensingInterval                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.SetSensingInterval"));
		
		struct
		{
			float                                              NewSensingInterval;
		} params;
		params.NewSensingInterval = NewSensingInterval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewPeripheralVisionAngle                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle"));
		
		struct
		{
			float                                              NewPeripheralVisionAngle;
		} params;
		params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature"));
		
		struct
		{
			class APawn*                                       Pawn;
		} params;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature"));
		
		struct
		{
			class APawn*                                       Instigator;
			struct FVector                                     Location;
			float                                              Volume;
		} params;
		params.Instigator = Instigator;
		params.Location = Location;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	 * 		Flags  -> ()
	 */
	float UPawnSensingComponent::GetPeripheralVisionCosine()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	 * 		Flags  -> ()
	 */
	float UPawnSensingComponent::GetPeripheralVisionAngle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle"));
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPawnSensingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnSensingComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.PawnSensingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVisualLoggerExtension.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualLoggerExtension::StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AIModule.VisualLoggerExtension"));
		return ptr;
	}

}


