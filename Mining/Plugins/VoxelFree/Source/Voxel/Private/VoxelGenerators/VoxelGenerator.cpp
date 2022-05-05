// Copyright 2020 Phyronnaz

#include "VoxelGenerators/VoxelGenerator.h"

#include "VoxelGenerators/VoxelGeneratorInstance.h"
#include "VoxelGenerators/VoxelGeneratorParameters.h"
#include "VoxelMessages.h"

#include "UObject/Package.h"
#include "UObject/MetaData.h"
#include "UObject/PropertyPortFlags.h"

void UVoxelGenerator::ApplyParameters(const TMap<FName, FString>& Parameters)
{
	ApplyParametersInternal(Parameters);
}

void UVoxelGenerator::GetParameters(TArray<FVoxelGeneratorParameter>& OutParameters) const
{
	VOXEL_FUNCTION_COUNTER();

	TSet<FName> AllIds;
	
	int32 Priority = 0;
	for (TFieldIterator<FProperty> It(GetClass()); It; ++It)
	{
		auto* Property = *It;
		if (!Property->HasAnyPropertyFlags(CPF_Edit) || Property->HasAnyPropertyFlags(CPF_EditConst))
		{
			continue;
		}

		const FName Id = Property->GetFName();
		FString Name;
		FString Category;
		FString ToolTip;
		TMap<FName, FString> MetaData;
		
#if WITH_EDITOR
		Name = Property->GetDisplayNameText().ToString();
		Category = Property->GetMetaDataText(TEXT("Category")).ToString();
		ToolTip = Property->GetToolTipText().ToString();

#if ENGINE_MINOR_VERSION < 25
		{
			UPackage* Package = Property->GetOutermost();
			check(Package);

			UMetaData* PackageMetaData = Package->GetMetaData();
			check(PackageMetaData);

			MetaData = PackageMetaData->ObjectMetaDataMap.FindRef(Property);
		}
#else
		if (Property->GetMetaDataMap())
		{
			MetaData = *Property->GetMetaDataMap();
		}
#endif
#else
		Name = Property->GetName();
#endif
		
		const auto Type = FVoxelGeneratorParameterType(*Property);
		
		FString DefaultValue;
		Property->ExportTextItem(DefaultValue, Property->ContainerPtrToValuePtr<void>(this), nullptr, nullptr, PPF_None);
		
		OutParameters.Add(FVoxelGeneratorParameter(Id, Type, Name, Category, ToolTip, Priority++, MetaData, DefaultValue));

		bool bIsInSet = false;
		AllIds.Add(Id, &bIsInSet);
		ensureMsgf(!bIsInSet, TEXT("%s"), *Id.ToString());
	}
}

TVoxelSharedRef<FVoxelGeneratorInstance> UVoxelGenerator::GetInstance(const TMap<FName, FString>& Parameters)
{
	const auto Backup = ApplyParametersInternal(Parameters);
	const auto Result = GetInstance();
	ApplyParametersInternal(Backup);
	return Result;
}

TVoxelSharedRef<FVoxelGeneratorInstance> UVoxelGenerator::GetInstance()
{
	unimplemented();
	return TVoxelSharedPtr<FVoxelGeneratorInstance>().ToSharedRef();
}

TMap<FName, FString> UVoxelGenerator::ApplyParametersInternal(const TMap<FName, FString>& Parameters)
{
	TMap<FName, FString> ParametersBackup;
	
	for (auto& It : Parameters)
	{
		auto* Property = UE_25_SWITCH(FindField, FindFProperty) < FProperty > (GetClass(), It.Key);
		if (!Property)
		{
			continue;
		}

		void* PropertyData = Property->ContainerPtrToValuePtr<void>(this);
		// Export backup
		Property->ExportTextItem(ParametersBackup.Add(It.Key), PropertyData, nullptr, nullptr, PPF_None);
		// Import new value
		Property->ImportText(*It.Value, PropertyData, PPF_None, this);
	}
	
	return ParametersBackup;
}

///////////////////////////////////////////////////////////////////////////////

TVoxelSharedRef<FVoxelTransformableGeneratorInstance> UVoxelTransformableGenerator::GetTransformableInstance(const TMap<FName, FString>& Parameters)
{
	const auto Backup = ApplyParametersInternal(Parameters);
	const auto Result = GetTransformableInstance();
	ApplyParametersInternal(Backup);
	return Result;
}

TVoxelSharedRef<FVoxelTransformableGeneratorInstance> UVoxelTransformableGenerator::GetTransformableInstance()
{
	unimplemented();
	return TVoxelSharedPtr<FVoxelTransformableGeneratorInstance>().ToSharedRef();
}

TVoxelSharedRef<FVoxelGeneratorInstance> UVoxelTransformableGenerator::GetInstance(const TMap<FName, FString>& Parameters)
{
	return GetTransformableInstance(Parameters);
}

TVoxelSharedRef<FVoxelGeneratorInstance> UVoxelTransformableGenerator::GetInstance()
{
	return GetTransformableInstance();
}

///////////////////////////////////////////////////////////////////////////////

FVoxelIntBox UVoxelTransformableGeneratorWithBounds::GetBounds() const
{
	unimplemented();
	return {};
}