// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/TPSAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSAI() {}
// Cross Module References
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSAI_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSAI();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSCharacter();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References
	void ATPSAI::StaticRegisterNativesATPSAI()
	{
	}
	UClass* Z_Construct_UClass_ATPSAI_NoRegister()
	{
		return ATPSAI::StaticClass();
	}
	struct Z_Construct_UClass_ATPSAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATPSCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSAI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPSAI.h" },
		{ "ModuleRelativePath", "TPSAI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSAI_Statics::ClassParams = {
		&ATPSAI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSAI, 3383563621);
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<ATPSAI>()
	{
		return ATPSAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSAI(Z_Construct_UClass_ATPSAI, &ATPSAI::StaticClass, TEXT("/Script/ThirdPersonShooter"), TEXT("ATPSAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
