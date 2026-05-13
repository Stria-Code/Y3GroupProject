// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Horror/HorrorCharacter.h"

#ifdef GROUPPROJECTY3_HorrorCharacter_generated_h
#error "HorrorCharacter.generated.h already included, missing '#pragma once' in HorrorCharacter.h"
#endif
#define GROUPPROJECTY3_HorrorCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FUpdateSprintMeterDelegate ********************************************
#define FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_12_DELEGATE \
GROUPPROJECTY3_API void FUpdateSprintMeterDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateSprintMeterDelegate, float Percentage);


// ********** End Delegate FUpdateSprintMeterDelegate **********************************************

// ********** Begin Delegate FSprintStateChangedDelegate *******************************************
#define FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_13_DELEGATE \
GROUPPROJECTY3_API void FSprintStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SprintStateChangedDelegate, bool bSprinting);


// ********** End Delegate FSprintStateChangedDelegate *********************************************

// ********** Begin Class AHorrorCharacter *********************************************************
#define FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoEndSprint); \
	DECLARE_FUNCTION(execDoStartSprint);


GROUPPROJECTY3_API UClass* Z_Construct_UClass_AHorrorCharacter_NoRegister();

#define FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHorrorCharacter(); \
	friend struct Z_Construct_UClass_AHorrorCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GROUPPROJECTY3_API UClass* Z_Construct_UClass_AHorrorCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AHorrorCharacter, AGroupProjectY3Character, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GroupProjectY3"), Z_Construct_UClass_AHorrorCharacter_NoRegister) \
	DECLARE_SERIALIZER(AHorrorCharacter)


#define FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHorrorCharacter(AHorrorCharacter&&) = delete; \
	AHorrorCharacter(const AHorrorCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorrorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorrorCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHorrorCharacter) \
	NO_API virtual ~AHorrorCharacter();


#define FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_19_PROLOG
#define FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHorrorCharacter;

// ********** End Class AHorrorCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Y3GroupProject_Source_GroupProjectY3_Variant_Horror_HorrorCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
