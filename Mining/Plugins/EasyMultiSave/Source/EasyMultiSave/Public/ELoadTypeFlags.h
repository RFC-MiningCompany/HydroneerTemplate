#pragma once

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class ELoadTypeFlags : uint8
{
	LF_Player UMETA(DisplayName = "Player"),
	LF_Level UMETA(DisplayName = "Level"),
	LF_MAX  UMETA(DisplayName = "MAX")
};
ENUM_CLASS_FLAGS(ELoadTypeFlags);