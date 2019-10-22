// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME3003_WEEK01_TPSWeapon_generated_h
#error "TPSWeapon.generated.h already included, missing '#pragma once' in TPSWeapon.h"
#endif
#define GAME3003_WEEK01_TPSWeapon_generated_h

#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwitchMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSWeapon(); \
	friend struct Z_Construct_UClass_ATPSWeapon_Statics; \
public: \
	DECLARE_CLASS(ATPSWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAME3003_Week01"), NO_API) \
	DECLARE_SERIALIZER(ATPSWeapon)


#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATPSWeapon(); \
	friend struct Z_Construct_UClass_ATPSWeapon_Statics; \
public: \
	DECLARE_CLASS(ATPSWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAME3003_Week01"), NO_API) \
	DECLARE_SERIALIZER(ATPSWeapon)


#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSWeapon(ATPSWeapon&&); \
	NO_API ATPSWeapon(const ATPSWeapon&); \
public:


#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSWeapon(ATPSWeapon&&); \
	NO_API ATPSWeapon(const ATPSWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSWeapon)


#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ATPSWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__damageType() { return STRUCT_OFFSET(ATPSWeapon, damageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocket() { return STRUCT_OFFSET(ATPSWeapon, MuzzleSocket); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ATPSWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__ImpactEffectBlood() { return STRUCT_OFFSET(ATPSWeapon, ImpactEffectBlood); } \
	FORCEINLINE static uint32 __PPO__ImpactEffectConcrete() { return STRUCT_OFFSET(ATPSWeapon, ImpactEffectConcrete); } \
	FORCEINLINE static uint32 __PPO__TrailEffect() { return STRUCT_OFFSET(ATPSWeapon, TrailEffect); } \
	FORCEINLINE static uint32 __PPO__TrailEffectParam() { return STRUCT_OFFSET(ATPSWeapon, TrailEffectParam); } \
	FORCEINLINE static uint32 __PPO__BaseDamege() { return STRUCT_OFFSET(ATPSWeapon, BaseDamege); } \
	FORCEINLINE static uint32 __PPO__DamageMultiplier() { return STRUCT_OFFSET(ATPSWeapon, DamageMultiplier); } \
	FORCEINLINE static uint32 __PPO__FireCameraShake() { return STRUCT_OFFSET(ATPSWeapon, FireCameraShake); } \
	FORCEINLINE static uint32 __PPO__rateOfFire() { return STRUCT_OFFSET(ATPSWeapon, rateOfFire); } \
	FORCEINLINE static uint32 __PPO__ammo() { return STRUCT_OFFSET(ATPSWeapon, ammo); } \
	FORCEINLINE static uint32 __PPO__curSpread() { return STRUCT_OFFSET(ATPSWeapon, curSpread); }


#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_11_PROLOG
#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_RPC_WRAPPERS \
	GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_INCLASS \
	GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_INCLASS_NO_PURE_DECLS \
	GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME3003_WEEK01_API UClass* StaticClass<class ATPSWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME3003_Week01_Source_GAME3003_Week01_TPSWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
