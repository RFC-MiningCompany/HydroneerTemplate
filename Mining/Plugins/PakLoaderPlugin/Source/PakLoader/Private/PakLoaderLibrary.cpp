// Fill out your copyright notice in the Description page of Project Settings.


#include "PakLoaderLibrary.h"

UClass *UPakLoaderLibrary::GetPakFileClass(const FString& Filename) {
	return AActor::StaticClass();
}

TArray<FString> UPakLoaderLibrary::GetMountedPakFilenames() {
	return TArray<FString>();
}

bool UPakLoaderLibrary::MountPakFile(const class FString& PakFilename, const class FString& MountPath) {
	return true;
}