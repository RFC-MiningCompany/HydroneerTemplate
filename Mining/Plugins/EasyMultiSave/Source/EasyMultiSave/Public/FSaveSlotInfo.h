#pragma once

#include "CoreMinimal.h"
#include "FSaveSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FSaveSlotInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	FString 			Name;

	UPROPERTY(BlueprintReadOnly)
	FDateTime 			Timestamp;

	UPROPERTY(BlueprintReadOnly)
	FName 				Level;

	UPROPERTY(BlueprintReadOnly)
	TArray<FString> 	Players;
};
