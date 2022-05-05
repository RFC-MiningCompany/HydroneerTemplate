// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PublishedFileID.h"
#include "Subsystems/EngineSubsystem.h"
#include "CModdingSubsystem.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class MINING_API UCModdingSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Unload Mod", Keywords = "Mining Unload Mod"), Category = "Mining")
	void UnloadMod(const FString& ModName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Uninstall Unsubscribed Mods", Keywords = "Mining Uninstall Unsubscribed Mods"), Category = "Mining")
	void UninstallUnsubscribedMods();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load Mod", Keywords = "Mining Load Mod"), Category = "Mining")
	void LoadMod(const FString& ModName);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Install All Pending", Keywords = "Mining Install All Pending"), Category = "Mining")
	void InstallAllPending();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Modding Subsystem", Keywords = "Mining Get Modding Subsystem"), Category = "Mining")
	static UCModdingSubsystem* GetModdingSubsystem();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Loaded Mods", Keywords = "Mining Get Loaded Mods"), Category = "Mining")
	TArray<FString> GetLoadedMods();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Installed Mods", Keywords = "Mining Get Installed Mods"), Category = "Mining")
	TArray<FString> GetInstalledMods();
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get All Subscribed Mods", Keywords = "Mining Get All Subscribed Mods"), Category = "Mining")
	TArray<FPublishedFileID> GetAllSubscribedMods();
};
