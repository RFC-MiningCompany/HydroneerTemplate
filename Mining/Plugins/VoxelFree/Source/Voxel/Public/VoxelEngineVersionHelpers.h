// Copyright 2020 Phyronnaz

#pragma once

#include "CoreMinimal.h"
#include "Launch/Resources/Version.h"

#if ENGINE_MINOR_VERSION < 24
#define ONLY_UE_24_AND_HIGHER(...)
#else
#define ONLY_UE_24_AND_HIGHER(...) __VA_ARGS__
#endif

#if ENGINE_MINOR_VERSION > 24
#define ONLY_UE_24_AND_LOWER(...)
#else
#define ONLY_UE_24_AND_LOWER(...) __VA_ARGS__
#endif

#if ENGINE_MINOR_VERSION < 25
#define ONLY_UE_25_AND_HIGHER(...)
#else
#define ONLY_UE_25_AND_HIGHER(...) __VA_ARGS__
#endif

#if ENGINE_MINOR_VERSION > 25
#define ONLY_UE_25_AND_LOWER(X)
#else
#define ONLY_UE_25_AND_LOWER(...) __VA_ARGS__
#endif

#if ENGINE_MINOR_VERSION >= 24
#define UE_24_SWITCH(Before, AfterOrEqual) AfterOrEqual
#define UE_24_ONLY(...) __VA_ARGS__
#else
#define UE_24_SWITCH(Before, AfterOrEqual) Before
#define UE_24_ONLY(...)
#endif

#if ENGINE_MINOR_VERSION >= 25
#define UE_25_SWITCH(Before, AfterOrEqual) AfterOrEqual
#define UE_25_ONLY(...) __VA_ARGS__
#else
#define UE_25_SWITCH(Before, AfterOrEqual) Before
#define UE_25_ONLY(...)
#endif

#if ENGINE_MINOR_VERSION >= 26
#define UE_26_SWITCH(Before, AfterOrEqual) AfterOrEqual
#define UE_26_ONLY(...) __VA_ARGS__
#else
#define UE_26_SWITCH(Before, AfterOrEqual) Before
#define UE_26_ONLY(...)
#endif

#if ENGINE_MINOR_VERSION < 25
using FProperty = UProperty;
using FStructProperty = UStructProperty;
using FSoftObjectProperty = USoftObjectProperty;
using FIntProperty = UIntProperty;
using FFloatProperty = UFloatProperty;
using FBoolProperty = UBoolProperty;
using FObjectProperty = UObjectProperty;
using FStructProperty = UStructProperty;
using FArrayProperty = UArrayProperty;
using FMapProperty = UMapProperty;
using FSetProperty = USetProperty;

#define LAYOUT_FIELD(Type, Name) Type Name
#define DECLARE_TYPE_LAYOUT(...)
#define IMPLEMENT_TYPE_LAYOUT(...)
#endif