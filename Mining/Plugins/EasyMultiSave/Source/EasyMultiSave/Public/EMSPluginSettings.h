// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EFileSaveMethod.h"
#include "ELoadMethod.h"
#include "UObject/NoExportTypes.h"
#include "EMSPluginSettings.generated.h"

/**
 * 
 */
UCLASS(Config=EMS)
class EASYMULTISAVE_API UEMSPluginSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Config)
	FString				DefaultSaveGameName;
	
	UPROPERTY(EditAnywhere, Config)
	FSoftClassPath		SlotInfoSaveGameClass;
	
	UPROPERTY(EditAnywhere, Config)
	bool				bPersistentPlayer;
	
	UPROPERTY(EditAnywhere, Config)
	bool				bPersistentGameMode;
	
	UPROPERTY(EditAnywhere, Config)
	bool				bAdvancedSpawnCheck;
	
	UPROPERTY(EditAnywhere, Config)
	bool				bSaveActorAffiliation;
	
	UPROPERTY(EditAnywhere, Config)
	bool				bAutoSaveStructs;
	
	UPROPERTY(EditAnywhere, Config)
	bool				bMultiThreadSaving;
	
	UPROPERTY(EditAnywhere, Config)
	ELoadMethod	LoadMethod;
	
	UPROPERTY(EditAnywhere, Config)
	EFileSaveMethod	FileNamingType;
	
	UPROPERTY(EditAnywhere, Config)
	bool				bCopyPersistentSave;
	
	UPROPERTY(EditAnywhere, Config)
	FSoftClassPath		PersistentSaveGameClass;
	
	UPROPERTY(EditAnywhere, Config)
	FSoftClassPath		ProfileSaveGameClass;
};
