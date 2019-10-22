// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME3003_WEEK01_Tracker_generated_h
#error "Tracker.generated.h already included, missing '#pragma once' in Tracker.h"
#endif
#define GAME3003_WEEK01_Tracker_generated_h

#define GAME3003__Source_GAME3003_Week01_Tracker_h_14_RPC_WRAPPERS
#define GAME3003__Source_GAME3003_Week01_Tracker_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GAME3003__Source_GAME3003_Week01_Tracker_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATracker(); \
	friend struct Z_Construct_UClass_ATracker_Statics; \
public: \
	DECLARE_CLASS(ATracker, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAME3003_Week01"), NO_API) \
	DECLARE_SERIALIZER(ATracker)


#define GAME3003__Source_GAME3003_Week01_Tracker_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATracker(); \
	friend struct Z_Construct_UClass_ATracker_Statics; \
public: \
	DECLARE_CLASS(ATracker, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAME3003_Week01"), NO_API) \
	DECLARE_SERIALIZER(ATracker)


#define GAME3003__Source_GAME3003_Week01_Tracker_h_14_STANDARD_CONSTRUCTORS \
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


#define GAME3003__Source_GAME3003_Week01_Tracker_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATracker(ATracker&&); \
	NO_API ATracker(const ATracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATracker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATracker)


#define GAME3003__Source_GAME3003_Week01_Tracker_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ATracker, MeshComp); } \
	FORCEINLINE static uint32 __PPO__MoveForce() { return STRUCT_OFFSET(ATracker, MoveForce); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ATracker, bUseVelocityChange); }


#define GAME3003__Source_GAME3003_Week01_Tracker_h_11_PROLOG
#define GAME3003__Source_GAME3003_Week01_Tracker_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003__Source_GAME3003_Week01_Tracker_h_14_PRIVATE_PROPERTY_OFFSET \
	GAME3003__Source_GAME3003_Week01_Tracker_h_14_RPC_WRAPPERS \
	GAME3003__Source_GAME3003_Week01_Tracker_h_14_INCLASS \
	GAME3003__Source_GAME3003_Week01_Tracker_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GAME3003__Source_GAME3003_Week01_Tracker_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GAME3003__Source_GAME3003_Week01_Tracker_h_14_PRIVATE_PROPERTY_OFFSET \
	GAME3003__Source_GAME3003_Week01_Tracker_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GAME3003__Source_GAME3003_Week01_Tracker_h_14_INCLASS_NO_PURE_DECLS \
	GAME3003__Source_GAME3003_Week01_Tracker_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME3003_WEEK01_API UClass* StaticClass<class ATracker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GAME3003__Source_GAME3003_Week01_Tracker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
