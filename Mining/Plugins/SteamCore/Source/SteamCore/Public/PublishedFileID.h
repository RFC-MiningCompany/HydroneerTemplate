#pragma once

#include "CoreMinimal.h"
#include "PublishedFileID.generated.h"

USTRUCT(BlueprintType)
struct FPublishedFileID
{
	GENERATED_BODY()
public:
	UPROPERTY()
	uint8 FileId;
};
