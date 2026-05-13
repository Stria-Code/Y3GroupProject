// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroupProjectY3Character.h"

#ifdef GROUPPROJECTY3_GroupProjectY3Character_generated_h
#error "GroupProjectY3Character.generated.h already included, missing '#pragma once' in GroupProjectY3Character.h"
#endif
#define GROUPPROJECTY3_GroupProjectY3Character_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGroupProjectY3Character *************************************************
#define FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCloseChronovert); \
	DECLARE_FUNCTION(execOpenChronovert); \
	DECLARE_FUNCTION(execDoInteract); \
	DECLARE_FUNCTION(execChangeTimeline); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


#define FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_31_CALLBACK_WRAPPERS
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AGroupProjectY3Character_NoRegister();

#define FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGroupProjectY3Character(); \
	friend struct Z_Construct_UClass_AGroupProjectY3Character_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GROUPPROJECTY3_API UClass* Z_Construct_UClass_AGroupProjectY3Character_NoRegister(); \
public: \
	DECLARE_CLASS2(AGroupProjectY3Character, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GroupProjectY3"), Z_Construct_UClass_AGroupProjectY3Character_NoRegister) \
	DECLARE_SERIALIZER(AGroupProjectY3Character)


#define FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGroupProjectY3Character(AGroupProjectY3Character&&) = delete; \
	AGroupProjectY3Character(const AGroupProjectY3Character&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGroupProjectY3Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGroupProjectY3Character); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGroupProjectY3Character) \
	NO_API virtual ~AGroupProjectY3Character();


#define FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_27_PROLOG
#define FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_31_CALLBACK_WRAPPERS \
	FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_31_INCLASS_NO_PURE_DECLS \
	FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGroupProjectY3Character;

// ********** End Class AGroupProjectY3Character ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
