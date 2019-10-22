// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef GAME3003_WEEK01_TPScharacter_generated_h
#error "TPScharacter.generated.h already included, missing '#pragma once' in TPScharacter.h"
#endif
#define GAME3003_WEEK01_TPScharacter_generated_h

#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHealth); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_DeltaHealth,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(UHealthComponent,Z_Param_OwningHealthComp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHealth); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_DeltaHealth,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPScharacter(); \
	friend struct Z_Construct_UClass_ATPScharacter_Statics; \
public: \
	DECLARE_CLASS(ATPScharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAME3003_Week01"), NO_API) \
	DECLARE_SERIALIZER(ATPScharacter)


#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATPScharacter(); \
	friend struct Z_Construct_UClass_ATPScharacter_Statics; \
public: \
	DECLARE_CLASS(ATPScharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAME3003_Week01"), NO_API) \
	DECLARE_SERIALIZER(ATPScharacter)


#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPScharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPScharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPScharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPScharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPScharacter(ATPScharacter&&); \
	NO_API ATPScharacter(const ATPScharacter&); \
public:


#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPScharacter(ATPScharacter&&); \
	NO_API ATPScharacter(const ATPScharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPScharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPScharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPScharacter)


#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ATPScharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ATPScharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(ATPScharacter, bIsAiming); } \
	FORCEINLINE static uint32 __PPO__defaultFOV() { return STRUCT_OFFSET(ATPScharacter, defaultFOV); } \
	FORCEINLINE static uint32 __PPO__zoomedFOV() { return STRUCT_OFFSET(ATPScharacter, zoomedFOV); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(ATPScharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponSocketName() { return STRUCT_OFFSET(ATPScharacter, WeaponSocketName); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ATPScharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__OverlappingCoverVolume() { return STRUCT_OFFSET(ATPScharacter, OverlappingCoverVolume); } \
	FORCEINLINE static uint32 __PPO__bInCover() { return STRUCT_OFFSET(ATPScharacter, bInCover); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ATPScharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__bDead() { return STRUCT_OFFSET(ATPScharacter, bDead); }


#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_15_PROLOG
#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_RPC_WRAPPERS \
	GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_INCLASS \
	GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_INCLASS_NO_PURE_DECLS \
	GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME3003_WEEK01_API UClass* StaticClass<class ATPScharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME3003_Week01_Source_GAME3003_Week01_TPScharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
