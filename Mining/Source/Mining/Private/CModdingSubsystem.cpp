// Fill out your copyright notice in the Description page of Project Settings.


#include "CModdingSubsystem.h"

void UCModdingSubsystem::UnloadMod(const FString& ModName)
{}

void UCModdingSubsystem::UninstallUnsubscribedMods()
{}

void UCModdingSubsystem::LoadMod(const FString& ModName)
{}

void UCModdingSubsystem::InstallAllPending()
{}

UCModdingSubsystem* UCModdingSubsystem::GetModdingSubsystem()
{
	return nullptr;
}

TArray<FString> UCModdingSubsystem::GetLoadedMods()
{
	return TArray<FString>();
}

TArray<FString> UCModdingSubsystem::GetInstalledMods()
{
	return TArray<FString>();
}
