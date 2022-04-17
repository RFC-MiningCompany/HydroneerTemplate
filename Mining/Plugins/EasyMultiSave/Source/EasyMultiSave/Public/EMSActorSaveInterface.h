// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMSActorSaveInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEMSActorSaveInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class EASYMULTISAVE_API IEMSActorSaveInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "Components To Save", Keywords = "EasyMultiSave Components To Save", DynamicOutputParam="Components"), Category = "EasyMultiSave")
	void ComponentsToSave(TArray<UActorComponent*>& Components);
	void ComponentsToSave_Implementation(TArray<UActorComponent*>& Components) {};

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Actor Saved", Keywords = "EasyMultiSave Actor Saved"), Category = "EasyMultiSave")
	void ActorSaved();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Actor Pre Save", Keywords = "EasyMultiSave Actor Pre Save"), Category = "EasyMultiSave")
	void ActorPreSave();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Actor Loaded", Keywords = "EasyMultiSave Actor Loaded"), Category = "EasyMultiSave")
	void ActorLoaded();
};
