// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME3003_Week01/GAME3003_Week01GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAME3003_Week01GameModeBase() {}
// Cross Module References
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_AGAME3003_Week01GameModeBase_NoRegister();
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_AGAME3003_Week01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GAME3003_Week01();
// End Cross Module References
	void AGAME3003_Week01GameModeBase::StaticRegisterNativesAGAME3003_Week01GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGAME3003_Week01GameModeBase_NoRegister()
	{
		return AGAME3003_Week01GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGAME3003_Week01GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGAME3003_Week01GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME3003_Week01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAME3003_Week01GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GAME3003_Week01GameModeBase.h" },
		{ "ModuleRelativePath", "GAME3003_Week01GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGAME3003_Week01GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAME3003_Week01GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGAME3003_Week01GameModeBase_Statics::ClassParams = {
		&AGAME3003_Week01GameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AGAME3003_Week01GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGAME3003_Week01GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGAME3003_Week01GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGAME3003_Week01GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGAME3003_Week01GameModeBase, 908344863);
	template<> GAME3003_WEEK01_API UClass* StaticClass<AGAME3003_Week01GameModeBase>()
	{
		return AGAME3003_Week01GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGAME3003_Week01GameModeBase(Z_Construct_UClass_AGAME3003_Week01GameModeBase, &AGAME3003_Week01GameModeBase::StaticClass, TEXT("/Script/GAME3003_Week01"), TEXT("AGAME3003_Week01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGAME3003_Week01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
