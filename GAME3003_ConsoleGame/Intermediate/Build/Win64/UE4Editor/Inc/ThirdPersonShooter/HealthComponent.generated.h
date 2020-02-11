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
#ifdef THIRDPERSONSHOOTER_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define THIRDPERSONSHOOTER_HealthComponent_generated_h

#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_9_DELEGATE \
struct _Script_ThirdPersonShooter_eventOnHealthChangedSignature_Parms \
{ \
	UHealthComponent* HealthComp; \
	float Health; \
	float DeltaHealth; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, UHealthComponent* HealthComp, float Health, float DeltaHealth, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_ThirdPersonShooter_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComp=HealthComp; \
	Parms.Health=Health; \
	Parms.DeltaHealth=DeltaHealth; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_SPARSE_DATA
#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(UHealthComponent, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UHealthComponent, MaxHealth); }


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_10_PROLOG
#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_SPARSE_DATA \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_RPC_WRAPPERS \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_INCLASS \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_SPARSE_DATA \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonShooter_Week_6_Starter_Project_Source_ThirdPersonShooter_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
