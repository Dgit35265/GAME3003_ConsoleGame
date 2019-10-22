// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME3003_WEEK01_TPSProjectile_generated_h
#error "TPSProjectile.generated.h already included, missing '#pragma once' in TPSProjectile.h"
#endif
#define GAME3003_WEEK01_TPSProjectile_generated_h

#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplosion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Explosion(); \
		P_NATIVE_END; \
	}


#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplosion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Explosion(); \
		P_NATIVE_END; \
	}


#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSProjectile(); \
	friend struct Z_Construct_UClass_ATPSProjectile_Statics; \
public: \
	DECLARE_CLASS(ATPSProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAME3003_Week01"), NO_API) \
	DECLARE_SERIALIZER(ATPSProjectile)


#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATPSProjectile(); \
	friend struct Z_Construct_UClass_ATPSProjectile_Statics; \
public: \
	DECLARE_CLASS(ATPSProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAME3003_Week01"), NO_API) \
	DECLARE_SERIALIZER(ATPSProjectile)


#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSProjectile(ATPSProjectile&&); \
	NO_API ATPSProjectile(const ATPSProjectile&); \
public:


#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSProjectile(ATPSProjectile&&); \
	NO_API ATPSProjectile(const ATPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSProjectile)


#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__explosionDamageType() { return STRUCT_OFFSET(ATPSProjectile, explosionDamageType); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ATPSProjectile, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__exploTime() { return STRUCT_OFFSET(ATPSProjectile, exploTime); }


#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_9_PROLOG
#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_RPC_WRAPPERS \
	GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_INCLASS \
	GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_INCLASS_NO_PURE_DECLS \
	GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME3003_WEEK01_API UClass* StaticClass<class ATPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME3003_Week01_Source_GAME3003_Week01_TPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
