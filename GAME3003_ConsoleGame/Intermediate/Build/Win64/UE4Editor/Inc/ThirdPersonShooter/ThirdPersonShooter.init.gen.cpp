// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonShooter_init() {}
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UDelegateFunction_ThirdPersonShooter_OnHealthChangedSignature__DelegateSignature();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature();
	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ThirdPersonShooter_OnHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ThirdPersonShooter_OnDeathSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ThirdPersonShooter_OnWeaponSwitchSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/ThirdPersonShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x56B91B89,
				0x847B97B1,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
