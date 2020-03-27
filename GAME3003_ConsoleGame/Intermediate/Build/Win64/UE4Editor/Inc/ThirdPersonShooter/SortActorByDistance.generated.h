// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef THIRDPERSONSHOOTER_SortActorByDistance_generated_h
#error "SortActorByDistance.generated.h already included, missing '#pragma once' in SortActorByDistance.h"
#endif
#define THIRDPERSONSHOOTER_SortActorByDistance_generated_h

#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_SPARSE_DATA
#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSortActorByDistance) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ArrayToSort); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_GET_UBOOL(Z_Param_Ascending); \
		P_GET_TARRAY_REF(float,Z_Param_Out_distances); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=USortActorByDistance::SortActorByDistance(Z_Param_Out_ArrayToSort,Z_Param_Out_TargetLocation,Z_Param_Ascending,Z_Param_Out_distances); \
		P_NATIVE_END; \
	}


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSortActorByDistance) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ArrayToSort); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_GET_UBOOL(Z_Param_Ascending); \
		P_GET_TARRAY_REF(float,Z_Param_Out_distances); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=USortActorByDistance::SortActorByDistance(Z_Param_Out_ArrayToSort,Z_Param_Out_TargetLocation,Z_Param_Ascending,Z_Param_Out_distances); \
		P_NATIVE_END; \
	}


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSortActorByDistance(); \
	friend struct Z_Construct_UClass_USortActorByDistance_Statics; \
public: \
	DECLARE_CLASS(USortActorByDistance, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(USortActorByDistance)


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSortActorByDistance(); \
	friend struct Z_Construct_UClass_USortActorByDistance_Statics; \
public: \
	DECLARE_CLASS(USortActorByDistance, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(USortActorByDistance)


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USortActorByDistance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USortActorByDistance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USortActorByDistance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USortActorByDistance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USortActorByDistance(USortActorByDistance&&); \
	NO_API USortActorByDistance(const USortActorByDistance&); \
public:


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USortActorByDistance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USortActorByDistance(USortActorByDistance&&); \
	NO_API USortActorByDistance(const USortActorByDistance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USortActorByDistance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USortActorByDistance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USortActorByDistance)


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_PRIVATE_PROPERTY_OFFSET
#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_12_PROLOG
#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_PRIVATE_PROPERTY_OFFSET \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_SPARSE_DATA \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_RPC_WRAPPERS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_INCLASS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_PRIVATE_PROPERTY_OFFSET \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_SPARSE_DATA \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_INCLASS_NO_PURE_DECLS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class USortActorByDistance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME3003_ConsoleGame_Source_ThirdPersonShooter_SortActorByDistance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
