// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSONSHOOTER_TPSPickups_generated_h
#error "TPSPickups.generated.h already included, missing '#pragma once' in TPSPickups.h"
#endif
#define THIRDPERSONSHOOTER_TPSPickups_generated_h

#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_SPARSE_DATA
#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_RPC_WRAPPERS
#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPickups(); \
	friend struct Z_Construct_UClass_ATPSPickups_Statics; \
public: \
	DECLARE_CLASS(ATPSPickups, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSPickups)


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATPSPickups(); \
	friend struct Z_Construct_UClass_ATPSPickups_Statics; \
public: \
	DECLARE_CLASS(ATPSPickups, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSPickups)


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSPickups(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSPickups) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPickups); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPickups); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPickups(ATPSPickups&&); \
	NO_API ATPSPickups(const ATPSPickups&); \
public:


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPickups(ATPSPickups&&); \
	NO_API ATPSPickups(const ATPSPickups&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPickups); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPickups); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSPickups)


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pickupsType() { return STRUCT_OFFSET(ATPSPickups, pickupsType); }


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_18_PROLOG
#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_PRIVATE_PROPERTY_OFFSET \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_SPARSE_DATA \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_RPC_WRAPPERS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_INCLASS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_PRIVATE_PROPERTY_OFFSET \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_SPARSE_DATA \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_INCLASS_NO_PURE_DECLS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class ATPSPickups>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSPickups_h


#define FOREACH_ENUM_PICKUPSTYPE(op) \
	op(PickupsType::None) \
	op(PickupsType::DamageBooster) \
	op(PickupsType::Invincibler) 

enum class PickupsType : uint8;
template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<PickupsType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
