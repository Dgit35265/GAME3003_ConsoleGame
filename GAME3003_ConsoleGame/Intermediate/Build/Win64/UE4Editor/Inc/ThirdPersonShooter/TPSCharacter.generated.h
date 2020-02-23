// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATPSWeapon;
class ATPSCharacter;
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef THIRDPERSONSHOOTER_TPSCharacter_generated_h
#error "TPSCharacter.generated.h already included, missing '#pragma once' in TPSCharacter.h"
#endif
#define THIRDPERSONSHOOTER_TPSCharacter_generated_h

#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_26_DELEGATE \
struct _Script_ThirdPersonShooter_eventOnWeaponSwitchSignature_Parms \
{ \
	ATPSWeapon* currentWeapon; \
	ATPSWeapon* previousWeapon; \
}; \
static inline void FOnWeaponSwitchSignature_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponSwitchSignature, ATPSWeapon* currentWeapon, ATPSWeapon* previousWeapon) \
{ \
	_Script_ThirdPersonShooter_eventOnWeaponSwitchSignature_Parms Parms; \
	Parms.currentWeapon=currentWeapon; \
	Parms.previousWeapon=previousWeapon; \
	OnWeaponSwitchSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_19_DELEGATE \
struct _Script_ThirdPersonShooter_eventOnDeathSignature_Parms \
{ \
	ATPSCharacter* actor; \
}; \
static inline void FOnDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDeathSignature, ATPSCharacter* actor) \
{ \
	_Script_ThirdPersonShooter_eventOnDeathSignature_Parms Parms; \
	Parms.actor=actor; \
	OnDeathSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_SPARSE_DATA
#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishReload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReloadAnimStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadAnimStarted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReloadAnim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReloadAnim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPickupAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPickupAlpha(); \
		P_NATIVE_END; \
	} \
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
	} \
 \
	DECLARE_FUNCTION(execTakeCover) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeCover(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndZoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndZoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartZoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartZoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishSwitching) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishSwitching(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipWeaponAtCurrentSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipWeaponAtCurrentSlot(); \
		P_NATIVE_END; \
	}


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishReload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReloadAnimStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReloadAnimStarted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReloadAnim) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReloadAnim(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPickupAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPickupAlpha(); \
		P_NATIVE_END; \
	} \
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
	} \
 \
	DECLARE_FUNCTION(execTakeCover) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeCover(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndZoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndZoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartZoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartZoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishSwitching) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishSwitching(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipWeaponAtCurrentSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipWeaponAtCurrentSlot(); \
		P_NATIVE_END; \
	}


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_INCLASS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public:


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSCharacter)


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(ATPSCharacter, bIsAiming); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClasses() { return STRUCT_OFFSET(ATPSCharacter, StarterWeaponClasses); } \
	FORCEINLINE static uint32 __PPO__HandSocketName() { return STRUCT_OFFSET(ATPSCharacter, HandSocketName); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotSocketNames() { return STRUCT_OFFSET(ATPSCharacter, WeaponSlotSocketNames); } \
	FORCEINLINE static uint32 __PPO__currentWeaponState() { return STRUCT_OFFSET(ATPSCharacter, currentWeaponState); } \
	FORCEINLINE static uint32 __PPO__bPlaySwitchAnim() { return STRUCT_OFFSET(ATPSCharacter, bPlaySwitchAnim); } \
	FORCEINLINE static uint32 __PPO__overlappingCoverVolume() { return STRUCT_OFFSET(ATPSCharacter, overlappingCoverVolume); } \
	FORCEINLINE static uint32 __PPO__bInCover() { return STRUCT_OFFSET(ATPSCharacter, bInCover); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ATPSCharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__bDead() { return STRUCT_OFFSET(ATPSCharacter, bDead); } \
	FORCEINLINE static uint32 __PPO__destroyOnDeath() { return STRUCT_OFFSET(ATPSCharacter, destroyOnDeath); } \
	FORCEINLINE static uint32 __PPO__deathMaterial() { return STRUCT_OFFSET(ATPSCharacter, deathMaterial); } \
	FORCEINLINE static uint32 __PPO__bPlayReloadAnimFlag() { return STRUCT_OFFSET(ATPSCharacter, bPlayReloadAnimFlag); } \
	FORCEINLINE static uint32 __PPO__LeftHandIKLocation() { return STRUCT_OFFSET(ATPSCharacter, LeftHandIKLocation); } \
	FORCEINLINE static uint32 __PPO__LeftHandIKRotation() { return STRUCT_OFFSET(ATPSCharacter, LeftHandIKRotation); } \
	FORCEINLINE static uint32 __PPO__LeftFootIK() { return STRUCT_OFFSET(ATPSCharacter, LeftFootIK); } \
	FORCEINLINE static uint32 __PPO__RightFootIK() { return STRUCT_OFFSET(ATPSCharacter, RightFootIK); } \
	FORCEINLINE static uint32 __PPO__IKDistance() { return STRUCT_OFFSET(ATPSCharacter, IKDistance); } \
	FORCEINLINE static uint32 __PPO__FootIKOffset() { return STRUCT_OFFSET(ATPSCharacter, FootIKOffset); } \
	FORCEINLINE static uint32 __PPO__EnableIK() { return STRUCT_OFFSET(ATPSCharacter, EnableIK); } \
	FORCEINLINE static uint32 __PPO__pickableWeapon() { return STRUCT_OFFSET(ATPSCharacter, pickableWeapon); } \
	FORCEINLINE static uint32 __PPO__pickupBoxHalfSize() { return STRUCT_OFFSET(ATPSCharacter, pickupBoxHalfSize); } \
	FORCEINLINE static uint32 __PPO__pickupDistance() { return STRUCT_OFFSET(ATPSCharacter, pickupDistance); } \
	FORCEINLINE static uint32 __PPO__pickupTime() { return STRUCT_OFFSET(ATPSCharacter, pickupTime); }


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_28_PROLOG
#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_PRIVATE_PROPERTY_OFFSET \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_SPARSE_DATA \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_RPC_WRAPPERS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_INCLASS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_PRIVATE_PROPERTY_OFFSET \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_SPARSE_DATA \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_INCLASS_NO_PURE_DECLS \
	GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSONSHOOTER_API UClass* StaticClass<class ATPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME3003_ConsoleGame_Source_ThirdPersonShooter_TPSCharacter_h


#define FOREACH_ENUM_WEAPONSTATE(op) \
	op(WeaponState::Idle) \
	op(WeaponState::Shooting) \
	op(WeaponState::Reloading) \
	op(WeaponState::Switching) \
	op(WeaponState::PickingUp) 

enum class WeaponState : uint8;
template<> THIRDPERSONSHOOTER_API UEnum* StaticEnum<WeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
