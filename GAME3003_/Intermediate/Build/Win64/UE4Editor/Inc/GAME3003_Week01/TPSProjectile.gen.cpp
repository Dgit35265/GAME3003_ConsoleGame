// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME3003_Week01/TPSProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSProjectile() {}
// Cross Module References
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATPSProjectile_NoRegister();
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATPSProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GAME3003_Week01();
	GAME3003_WEEK01_API UFunction* Z_Construct_UFunction_ATPSProjectile_Explosion();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	void ATPSProjectile::StaticRegisterNativesATPSProjectile()
	{
		UClass* Class = ATPSProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Explosion", &ATPSProjectile::execExplosion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPSProjectile_Explosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSProjectile_Explosion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSProjectile_Explosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSProjectile, nullptr, "Explosion", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSProjectile_Explosion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSProjectile_Explosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSProjectile_Explosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSProjectile_Explosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATPSProjectile_NoRegister()
	{
		return ATPSProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ATPSProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_exploTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_exploTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_explosionDamageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME3003_Week01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPSProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPSProjectile_Explosion, "Explosion" }, // 3060713760
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TPSProjectile.h" },
		{ "ModuleRelativePath", "TPSProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSProjectile_Statics::NewProp_exploTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSProjectile_Statics::NewProp_exploTime = { "exploTime", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSProjectile, exploTime), METADATA_PARAMS(Z_Construct_UClass_ATPSProjectile_Statics::NewProp_exploTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSProjectile_Statics::NewProp_exploTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSProjectile_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSProjectile_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSProjectile, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSProjectile_Statics::NewProp_ExplosionEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSProjectile_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSProjectile_Statics::NewProp_explosionDamageType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSProjectile_Statics::NewProp_explosionDamageType = { "explosionDamageType", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSProjectile, explosionDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATPSProjectile_Statics::NewProp_explosionDamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSProjectile_Statics::NewProp_explosionDamageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSProjectile_Statics::NewProp_exploTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSProjectile_Statics::NewProp_ExplosionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSProjectile_Statics::NewProp_explosionDamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSProjectile_Statics::ClassParams = {
		&ATPSProjectile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPSProjectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATPSProjectile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATPSProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSProjectile, 2579669466);
	template<> GAME3003_WEEK01_API UClass* StaticClass<ATPSProjectile>()
	{
		return ATPSProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSProjectile(Z_Construct_UClass_ATPSProjectile, &ATPSProjectile::StaticClass, TEXT("/Script/GAME3003_Week01"), TEXT("ATPSProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
