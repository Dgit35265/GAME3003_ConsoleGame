// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME3003_Week01/TPSProjectileWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSProjectileWeapon() {}
// Cross Module References
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATPSProjectileWeapon_NoRegister();
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATPSProjectileWeapon();
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATPSWeapon();
	UPackage* Z_Construct_UPackage__Script_GAME3003_Week01();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATPSProjectile_NoRegister();
// End Cross Module References
	void ATPSProjectileWeapon::StaticRegisterNativesATPSProjectileWeapon()
	{
	}
	UClass* Z_Construct_UClass_ATPSProjectileWeapon_NoRegister()
	{
		return ATPSProjectileWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ATPSProjectileWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSProjectileWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATPSWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME3003_Week01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSProjectileWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TPSProjectileWeapon.h" },
		{ "ModuleRelativePath", "TPSProjectileWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSProjectileWeapon_Statics::NewProp_projectile_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSProjectileWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSProjectileWeapon_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSProjectileWeapon, projectile), Z_Construct_UClass_ATPSProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATPSProjectileWeapon_Statics::NewProp_projectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSProjectileWeapon_Statics::NewProp_projectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSProjectileWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSProjectileWeapon_Statics::NewProp_projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSProjectileWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSProjectileWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSProjectileWeapon_Statics::ClassParams = {
		&ATPSProjectileWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATPSProjectileWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATPSProjectileWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSProjectileWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATPSProjectileWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSProjectileWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSProjectileWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSProjectileWeapon, 1937178081);
	template<> GAME3003_WEEK01_API UClass* StaticClass<ATPSProjectileWeapon>()
	{
		return ATPSProjectileWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSProjectileWeapon(Z_Construct_UClass_ATPSProjectileWeapon, &ATPSProjectileWeapon::StaticClass, TEXT("/Script/GAME3003_Week01"), TEXT("ATPSProjectileWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSProjectileWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
