// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/TPSPickups.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSPickups() {}
// Cross Module References
	THIRDPERSONSHOOTER_API UEnum* Z_Construct_UEnum_ThirdPersonShooter_PickupsType();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSPickups_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_ATPSPickups();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* PickupsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ThirdPersonShooter_PickupsType, Z_Construct_UPackage__Script_ThirdPersonShooter(), TEXT("PickupsType"));
		}
		return Singleton;
	}
	template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<PickupsType>()
	{
		return PickupsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PickupsType(PickupsType_StaticEnum, TEXT("/Script/ThirdPersonShooter"), TEXT("PickupsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ThirdPersonShooter_PickupsType_Hash() { return 2985222346U; }
	UEnum* Z_Construct_UEnum_ThirdPersonShooter_PickupsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ThirdPersonShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PickupsType"), 0, Get_Z_Construct_UEnum_ThirdPersonShooter_PickupsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PickupsType::None", (int64)PickupsType::None },
				{ "PickupsType::DamageBooster", (int64)PickupsType::DamageBooster },
				{ "PickupsType::Invincibler", (int64)PickupsType::Invincibler },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DamageBooster.DisplayName", "DamageBooster" },
				{ "DamageBooster.Name", "PickupsType::DamageBooster" },
				{ "Invincibler.DisplayName", "Invincibler" },
				{ "Invincibler.Name", "PickupsType::Invincibler" },
				{ "ModuleRelativePath", "TPSPickups.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "PickupsType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
				nullptr,
				"PickupsType",
				"PickupsType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ATPSPickups::StaticRegisterNativesATPSPickups()
	{
	}
	UClass* Z_Construct_UClass_ATPSPickups_NoRegister()
	{
		return ATPSPickups::StaticClass();
	}
	struct Z_Construct_UClass_ATPSPickups_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupsType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pickupsType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pickupsType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSPickups_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPickups_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TPSPickups.h" },
		{ "ModuleRelativePath", "TPSPickups.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPickups_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TPSPickups.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPickups_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPickups, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSPickups_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPickups_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPickups_Statics::NewProp_pickupsType_MetaData[] = {
		{ "Category", "Enum" },
		{ "ModuleRelativePath", "TPSPickups.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATPSPickups_Statics::NewProp_pickupsType = { "pickupsType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATPSPickups, pickupsType), Z_Construct_UEnum_ThirdPersonShooter_PickupsType, METADATA_PARAMS(Z_Construct_UClass_ATPSPickups_Statics::NewProp_pickupsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPickups_Statics::NewProp_pickupsType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATPSPickups_Statics::NewProp_pickupsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSPickups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPickups_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPickups_Statics::NewProp_pickupsType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPickups_Statics::NewProp_pickupsType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSPickups_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSPickups>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATPSPickups_Statics::ClassParams = {
		&ATPSPickups::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATPSPickups_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPickups_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSPickups_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPickups_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSPickups()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATPSPickups_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATPSPickups, 3163436234);
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<ATPSPickups>()
	{
		return ATPSPickups::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATPSPickups(Z_Construct_UClass_ATPSPickups, &ATPSPickups::StaticClass, TEXT("/Script/ThirdPersonShooter"), TEXT("ATPSPickups"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSPickups);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
