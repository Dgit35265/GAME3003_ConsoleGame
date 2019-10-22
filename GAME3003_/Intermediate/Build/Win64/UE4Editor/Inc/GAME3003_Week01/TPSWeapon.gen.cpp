// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME3003_Week01/TPSWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSWeapon() {}
// Cross Module References
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATPSWeapon_NoRegister();
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATPSWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GAME3003_Week01();
	GAME3003_WEEK01_API UFunction* Z_Construct_UFunction_ATPSWeapon_Fire();
	GAME3003_WEEK01_API UFunction* Z_Construct_UFunction_ATPSWeapon_SwitchMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ATPSWeapon::StaticRegisterNativesATPSWeapon()
	{
		UClass* Class = ATPSWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ATPSWeapon::execFire },
			{ "SwitchMode", &ATPSWeapon::execSwitchMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPSWeapon_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSWeapon_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSWeapon_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSWeapon, nullptr, "Fire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSWeapon_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSWeapon_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSWeapon_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSWeapon_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSWeapon_SwitchMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSWeapon_SwitchMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSWeapon_SwitchMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSWeapon, nullptr, "SwitchMode", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSWeapon_SwitchMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATPSWeapon_SwitchMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSWeapon_SwitchMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATPSWeapon_SwitchMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATPSWeapon_NoRegister()
	{
		return ATPSWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ATPSWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_curSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireCameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDamege_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDamege;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailEffectParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrailEffectParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrailEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactEffectConcrete_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactEffectConcrete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactEffectBlood_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactEffectBlood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_damageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME3003_Week01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPSWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPSWeapon_Fire, "Fire" }, // 558458772
		{ &Z_Construct_UFunction_ATPSWeapon_SwitchMode, "SwitchMode" }, // 558652083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TPSWeapon.h" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_curSpread_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_curSpread = { "curSpread", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, curSpread), METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_curSpread_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_curSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ammo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
		{ "ToolTip", "set fire rate" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ammo = { "ammo", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, ammo), METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ammo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_rateOfFire_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_rateOfFire = { "rateOfFire", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, rateOfFire), METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_rateOfFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_rateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_FireCameraShake_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_FireCameraShake = { "FireCameraShake", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, FireCameraShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_FireCameraShake_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_FireCameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, DamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_DamageMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_DamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_BaseDamege_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_BaseDamege = { "BaseDamege", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, BaseDamege), METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_BaseDamege_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_BaseDamege_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffectParam_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffectParam = { "TrailEffectParam", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, TrailEffectParam), METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffectParam_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffectParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffect = { "TrailEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, TrailEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectConcrete_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectConcrete = { "ImpactEffectConcrete", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, ImpactEffectConcrete), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectConcrete_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectConcrete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectBlood_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectBlood = { "ImpactEffectBlood", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, ImpactEffectBlood), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectBlood_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectBlood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleEffect = { "MuzzleEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, MuzzleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleSocket_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleSocket = { "MuzzleSocket", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, MuzzleSocket), METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_damageType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, damageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_damageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSWeapon, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_curSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_rateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_FireCameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_DamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_BaseDamege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffectParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_TrailEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectConcrete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_ImpactEffectBlood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MuzzleSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSWeapon_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSWeapon_Statics::ClassParams = {
		&ATPSWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPSWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATPSWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSWeapon, 1603231426);
	template<> GAME3003_WEEK01_API UClass* StaticClass<ATPSWeapon>()
	{
		return ATPSWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSWeapon(Z_Construct_UClass_ATPSWeapon, &ATPSWeapon::StaticClass, TEXT("/Script/GAME3003_Week01"), TEXT("ATPSWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
