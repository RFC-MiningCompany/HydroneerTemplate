// Copyright Epic Games, Inc. All Rights Reserved.

#include "EasyFileSystemBPLibrary.h"

bool UEasyFileSystemBPLibrary::SetReadOnly(const FString& inPath, bool bNewReadOnlyValue)
{
	return true;
}

bool UEasyFileSystemBPLibrary::SaveStringToFile(const FString& inPath, const FString& textData)
{
	return true;
}

bool UEasyFileSystemBPLibrary::SaveArrayToFile(const FString& inPath, TArray<uint8> Array)
{
	return true;
}

bool UEasyFileSystemBPLibrary::MoveFile(const FString& to, const FString& from)
{
	return true;
}

FString UEasyFileSystemBPLibrary::LoadFileToString(const FString& inPath)
{
	return FString();
}

bool UEasyFileSystemBPLibrary::LoadFileToArray(const FString& inPath, TArray<uint8> Result)
{
	return true;
}

bool UEasyFileSystemBPLibrary::IsReadOnly(const FString& Filename)
{
	return true;
}

FString UEasyFileSystemBPLibrary::GetStringFieldJson(const FString& Data, const FString& fieldName)
{
	return FString();
}

FString UEasyFileSystemBPLibrary::GetSourceDir()
{
	return FString();
}

int32 UEasyFileSystemBPLibrary::GetSizeFile(const FString& inPath)
{
	return 0;
}

FString UEasyFileSystemBPLibrary::GetProjectFilePath()
{
	return FString();
}

int32 UEasyFileSystemBPLibrary::GetIntegerFieldJson(const FString& Data, const FString& fieldName)
{
	return 0;
}

FString UEasyFileSystemBPLibrary::GetFilenameOnDisk(const FString& Filename)
{
	return FString();
}

FString UEasyFileSystemBPLibrary::GetExtension(const FString& inPath)
{
	return FString();
}

FString UEasyFileSystemBPLibrary::GetEngineDir()
{
	return FString();
}

bool UEasyFileSystemBPLibrary::GetBoolFieldJson(const FString& Data, const FString& fieldName)
{
	return true;
}

TArray<FString> UEasyFileSystemBPLibrary::FindFiles(const FString& Directory, const FString& fileExtension)
{
	return TArray<FString>();
}

bool UEasyFileSystemBPLibrary::FileExists(const FString& inPath)
{
	return true;
}

bool UEasyFileSystemBPLibrary::DirectoryExists(const FString& inPath)
{
	return true;
}

bool UEasyFileSystemBPLibrary::DeleteFile(const FString& inPath)
{
	return true;
}

bool UEasyFileSystemBPLibrary::DeleteDirectory(const FString& Directory)
{
	return true;
}

bool UEasyFileSystemBPLibrary::CreateDirectory(const FString& inPath)
{
	return true;
}

bool UEasyFileSystemBPLibrary::CopyFile(const FString& to, const FString& from)
{
	return true;
}

bool UEasyFileSystemBPLibrary::CopyDirectoryTree(const FString& destinationDirectory, const FString& Source,
	bool bOverwriteAllExisting)
{
	return true;
}

FString UEasyFileSystemBPLibrary::ChangeExtension(const FString& inPath, const FString& inNewExtension)
{
	return FString();
}
