// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EMSObject.generated.h"

/**
 * 
 */
UCLASS(Config=Game)
class EASYMULTISAVE_API UEMSObject : public UObject
{
	GENERATED_BODY()
public:
	void OuterActorEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason);
};
