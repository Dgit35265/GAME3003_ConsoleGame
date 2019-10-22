// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME3003_Week01/Tracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTracker() {}
// Cross Module References
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATracker_NoRegister();
	GAME3003_WEEK01_API UClass* Z_Construct_UClass_ATracker();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GAME3003_Week01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATracker::StaticRegisterNativesATracker()
	{
	}
	UClass* Z_Construct_UClass_ATracker_NoRegister()
	{
		return ATracker::StaticClass();
	}
	struct Z_Construct_UClass_ATracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[];
#endif
		static void NewProp_bUseVelocityChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME3003_Week01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tracker.h" },
		{ "ModuleRelativePath", "Tracker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_bUseVelocityChange_MetaData[] = {
		{ "Category", "Tracker Properties" },
		{ "ModuleRelativePath", "Tracker.h" },
	};
#endif
	void Z_Construct_UClass_ATracker_Statics::NewProp_bUseVelocityChange_SetBit(void* Obj)
	{
		((ATracker*)Obj)->bUseVelocityChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_bUseVelocityChange = { "bUseVelocityChange", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATracker), &Z_Construct_UClass_ATracker_Statics::NewProp_bUseVelocityChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_bUseVelocityChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_MoveForce_MetaData[] = {
		{ "Category", "Tracker Properties" },
		{ "ModuleRelativePath", "Tracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_MoveForce = { "MoveForce", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, MoveForce), METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_MoveForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_MoveForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATracker_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Tracker Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tracker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATracker_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATracker, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_bUseVelocityChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_MoveForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATracker_Statics::ClassParams = {
		&ATracker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATracker_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATracker_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATracker, 3935072362);
	template<> GAME3003_WEEK01_API UClass* StaticClass<ATracker>()
	{
		return ATracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATracker(Z_Construct_UClass_ATracker, &ATracker::StaticClass, TEXT("/Script/GAME3003_Week01"), TEXT("ATracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
