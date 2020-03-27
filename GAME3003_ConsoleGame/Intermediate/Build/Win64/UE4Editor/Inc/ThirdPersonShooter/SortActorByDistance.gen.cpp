// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/SortActorByDistance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSortActorByDistance() {}
// Cross Module References
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_USortActorByDistance_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_USortActorByDistance();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UFunction_USortActorByDistance_SortActorByDistance();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USortActorByDistance::StaticRegisterNativesUSortActorByDistance()
	{
		UClass* Class = USortActorByDistance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SortActorByDistance", &USortActorByDistance::execSortActorByDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics
	{
		struct SortActorByDistance_eventSortActorByDistance_Parms
		{
			TArray<AActor*> ArrayToSort;
			FVector TargetLocation;
			bool Ascending;
			TArray<float> distances;
			TArray<AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_distances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distances_Inner;
		static void NewProp_Ascending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ascending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayToSort;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayToSort_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortActorByDistance_eventSortActorByDistance_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_distances = { "distances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortActorByDistance_eventSortActorByDistance_Parms, distances), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_distances_Inner = { "distances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_Ascending_SetBit(void* Obj)
	{
		((SortActorByDistance_eventSortActorByDistance_Parms*)Obj)->Ascending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_Ascending = { "Ascending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SortActorByDistance_eventSortActorByDistance_Parms), &Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_Ascending_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortActorByDistance_eventSortActorByDistance_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ArrayToSort = { "ArrayToSort", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SortActorByDistance_eventSortActorByDistance_Parms, ArrayToSort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ArrayToSort_Inner = { "ArrayToSort", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_distances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_distances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_Ascending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ArrayToSort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::NewProp_ArrayToSort_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SortActorByDistance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USortActorByDistance, nullptr, "SortActorByDistance", nullptr, nullptr, sizeof(SortActorByDistance_eventSortActorByDistance_Parms), Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USortActorByDistance_SortActorByDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USortActorByDistance_SortActorByDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USortActorByDistance_NoRegister()
	{
		return USortActorByDistance::StaticClass();
	}
	struct Z_Construct_UClass_USortActorByDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USortActorByDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USortActorByDistance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USortActorByDistance_SortActorByDistance, "SortActorByDistance" }, // 1772066897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USortActorByDistance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SortActorByDistance.h" },
		{ "ModuleRelativePath", "SortActorByDistance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USortActorByDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USortActorByDistance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USortActorByDistance_Statics::ClassParams = {
		&USortActorByDistance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USortActorByDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USortActorByDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USortActorByDistance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USortActorByDistance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USortActorByDistance, 3293333262);
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<USortActorByDistance>()
	{
		return USortActorByDistance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USortActorByDistance(Z_Construct_UClass_USortActorByDistance, &USortActorByDistance::StaticClass, TEXT("/Script/ThirdPersonShooter"), TEXT("USortActorByDistance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USortActorByDistance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
