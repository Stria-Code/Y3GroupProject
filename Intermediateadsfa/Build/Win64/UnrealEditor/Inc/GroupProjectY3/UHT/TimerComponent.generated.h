// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimerComponent.h"

#ifdef GROUPPROJECTY3_TimerComponent_generated_h
#error "TimerComponent.generated.h already included, missing '#pragma once' in TimerComponent.h"
#endif
#define GROUPPROJECTY3_TimerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTimerComponent **********************************************************
#define FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimeRemaining); \
	DECLARE_FUNCTION(execStartTimer);


GROUPPROJECTY3_API UClass* Z_Construct_UClass_UTimerComponent_NoRegister();

#define FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimerComponent(); \
	friend struct Z_Construct_UClass_UTimerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GROUPPROJECTY3_API UClass* Z_Construct_UClass_UTimerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GroupProjectY3"), Z_Construct_UClass_UTimerComponent_NoRegister) \
	DECLARE_SERIALIZER(UTimerComponent)


#define FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimerComponent(UTimerComponent&&) = delete; \
	UTimerComponent(const UTimerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimerComponent) \
	NO_API virtual ~UTimerComponent();


#define FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h_10_PROLOG
#define FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimerComponent;

// ********** End Class UTimerComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
