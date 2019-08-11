// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG_4_22_3/NewRPG_4_22_3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewRPG_4_22_3GameMode() {}
// Cross Module References
	NEWRPG_4_22_3_API UClass* Z_Construct_UClass_ANewRPG_4_22_3GameMode_NoRegister();
	NEWRPG_4_22_3_API UClass* Z_Construct_UClass_ANewRPG_4_22_3GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NewRPG_4_22_3();
// End Cross Module References
	void ANewRPG_4_22_3GameMode::StaticRegisterNativesANewRPG_4_22_3GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANewRPG_4_22_3GameMode_NoRegister()
	{
		return ANewRPG_4_22_3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANewRPG_4_22_3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewRPG_4_22_3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NewRPG_4_22_3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewRPG_4_22_3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NewRPG_4_22_3GameMode.h" },
		{ "ModuleRelativePath", "NewRPG_4_22_3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewRPG_4_22_3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewRPG_4_22_3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewRPG_4_22_3GameMode_Statics::ClassParams = {
		&ANewRPG_4_22_3GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ANewRPG_4_22_3GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANewRPG_4_22_3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewRPG_4_22_3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewRPG_4_22_3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewRPG_4_22_3GameMode, 50347806);
	template<> NEWRPG_4_22_3_API UClass* StaticClass<ANewRPG_4_22_3GameMode>()
	{
		return ANewRPG_4_22_3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewRPG_4_22_3GameMode(Z_Construct_UClass_ANewRPG_4_22_3GameMode, &ANewRPG_4_22_3GameMode::StaticClass, TEXT("/Script/NewRPG_4_22_3"), TEXT("ANewRPG_4_22_3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewRPG_4_22_3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
