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
	 * Function GameplayTasks.GameplayTask.ReadyForActivation
	 */
	struct UGameplayTask_ReadyForActivation_Params
	{
	};

	/**
	 * DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	 */
	struct UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params
	{
	};

	/**
	 * Function GameplayTasks.GameplayTask.EndTask
	 */
	struct UGameplayTask_EndTask_Params
	{
	};

	/**
	 * Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	 */
	struct UGameplayTask_ClaimResource_ClaimResources_Params
	{
	public:
		TArray<class UClass*>                                      ResourceClasses;                                         // 0x0010(0x0010)  (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
		unsigned char                                              Priority;                                                // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0024(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ClaimResource*                         ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	 */
	struct UGameplayTask_ClaimResource_ClaimResource_Params
	{
	public:
		class UClass*                                              ResourceClass;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Priority;                                                // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x001C(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_ClaimResource*                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	 */
	struct UGameplayTask_SpawnActor_SpawnActor_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            SpawnRotation;                                           // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSpawnOnlyOnAuthority;                                   // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_SpawnActor*                            ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	 */
	struct UGameplayTask_SpawnActor_FinishSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	 */
	struct UGameplayTask_SpawnActor_BeginSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnedActor;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	 */
	struct UGameplayTask_WaitDelay_TaskWaitDelay_Params
	{
	public:
		float                                                      Time;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Priority;                                                // 0x0014(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayTask_WaitDelay*                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	 */
	struct UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params
	{
	};

	/**
	 * Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	 */
	struct UGameplayTasksComponent_OnRep_SimulatedTasks_Params
	{
	};

	/**
	 * Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	 */
	struct UGameplayTasksComponent_K2_RunGameplayTask_Params
	{
	public:
		class UGameplayTask*                                       Task;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Priority;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UClass*>                                      AdditionalRequiredResources;                             // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
		TArray<class UClass*>                                      AdditionalClaimedResources;                              // 0x0030(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
		GameplayTasks_EGameplayTaskRunResult                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
