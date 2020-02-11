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
#ifdef THIRDPERSONSHOOTER_Tracker_generated_h
#error "Tracker.generated.h already included, missing '#pragma once' in Tracker.h"
#endif
#define THIRDPERSONSHOOTER_Tracker_generated_h

#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_SPARSE_DATA
#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_RPC_WRAPPERS \
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


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATracker(); \
	friend struct Z_Construct_UClass_ATracker_Statics; \
public: \
	DECLARE_CLASS(ATracker, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATracker)


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATracker(); \
	friend struct Z_Construct_UClass_ATracker_Statics; \
public: \
	DECLARE_CLASS(ATracker, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATracker)


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATracker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATracker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATracker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATracker(ATracker&&); \
	NO_API ATracker(const ATracker&); \
public:


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATracker(ATracker&&); \
	NO_API ATracker(const ATracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATracker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATracker)


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ATracker, MeshComp); } \
	FORCEINLINE static uint32 __PPO__MoveForce() { return STRUCT_OFFSET(ATracker, MoveForce); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ATracker, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ATracker, HealthComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ATracker, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplosionSound() { return STRUCT_OFFSET(ATracker, ExplosionSound); } \
	FORCEINLINE static uint32 __PPO__ExplosionRadius() { return STRUCT_OFFSET(ATracker, ExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionBaseDamage() { return STRUCT_OFFSET(ATracker, ExplosionBaseDamage); } \
	FORCEINLINE static uint32 __PPO__SelfDamageTrigger() { return STRUCT_OFFSET(ATracker, SelfDamageTrigger); }


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_13_PROLOG
#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_SPARSE_DATA \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_RPC_WRAPPERS \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_INCLASS \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_SPARSE_DATA \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_INCLASS_NO_PURE_DECLS \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class ATracker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_Tracker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
