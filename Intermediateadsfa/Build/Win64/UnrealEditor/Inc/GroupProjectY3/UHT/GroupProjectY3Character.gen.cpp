// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroupProjectY3Character.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGroupProjectY3Character() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AGroupProjectY3Character();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AGroupProjectY3Character_NoRegister();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AWatchController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GroupProjectY3();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGroupProjectY3Character Function ChangeTimeline *************************
struct Z_Construct_UFunction_AGroupProjectY3Character_ChangeTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroupProjectY3Character_ChangeTimeline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGroupProjectY3Character, nullptr, "ChangeTimeline", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_ChangeTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroupProjectY3Character_ChangeTimeline_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGroupProjectY3Character_ChangeTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroupProjectY3Character_ChangeTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGroupProjectY3Character::execChangeTimeline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeTimeline();
	P_NATIVE_END;
}
// ********** End Class AGroupProjectY3Character Function ChangeTimeline ***************************

// ********** Begin Class AGroupProjectY3Character Function CloseChronovert ************************
struct Z_Construct_UFunction_AGroupProjectY3Character_CloseChronovert_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroupProjectY3Character_CloseChronovert_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGroupProjectY3Character, nullptr, "CloseChronovert", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_CloseChronovert_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroupProjectY3Character_CloseChronovert_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGroupProjectY3Character_CloseChronovert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroupProjectY3Character_CloseChronovert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGroupProjectY3Character::execCloseChronovert)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseChronovert();
	P_NATIVE_END;
}
// ********** End Class AGroupProjectY3Character Function CloseChronovert **************************

// ********** Begin Class AGroupProjectY3Character Function DoAim **********************************
struct Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics
{
	struct GroupProjectY3Character_eventDoAim_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles aim inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles aim inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroupProjectY3Character_eventDoAim_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroupProjectY3Character_eventDoAim_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGroupProjectY3Character, nullptr, "DoAim", Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::GroupProjectY3Character_eventDoAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::GroupProjectY3Character_eventDoAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGroupProjectY3Character_DoAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroupProjectY3Character_DoAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGroupProjectY3Character::execDoAim)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAim(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AGroupProjectY3Character Function DoAim ************************************

// ********** Begin Class AGroupProjectY3Character Function DoInteract *****************************
struct Z_Construct_UFunction_AGroupProjectY3Character_DoInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroupProjectY3Character_DoInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGroupProjectY3Character, nullptr, "DoInteract", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_DoInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroupProjectY3Character_DoInteract_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGroupProjectY3Character_DoInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroupProjectY3Character_DoInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGroupProjectY3Character::execDoInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoInteract();
	P_NATIVE_END;
}
// ********** End Class AGroupProjectY3Character Function DoInteract *******************************

// ********** Begin Class AGroupProjectY3Character Function DoJumpEnd ******************************
struct Z_Construct_UFunction_AGroupProjectY3Character_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump end inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump end inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroupProjectY3Character_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGroupProjectY3Character, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroupProjectY3Character_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGroupProjectY3Character_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroupProjectY3Character_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGroupProjectY3Character::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AGroupProjectY3Character Function DoJumpEnd ********************************

// ********** Begin Class AGroupProjectY3Character Function DoJumpStart ****************************
struct Z_Construct_UFunction_AGroupProjectY3Character_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump start inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump start inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroupProjectY3Character_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGroupProjectY3Character, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroupProjectY3Character_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGroupProjectY3Character_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroupProjectY3Character_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGroupProjectY3Character::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AGroupProjectY3Character Function DoJumpStart ******************************

// ********** Begin Class AGroupProjectY3Character Function DoMove *********************************
struct Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics
{
	struct GroupProjectY3Character_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroupProjectY3Character_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroupProjectY3Character_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGroupProjectY3Character, nullptr, "DoMove", Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::GroupProjectY3Character_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::GroupProjectY3Character_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGroupProjectY3Character_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroupProjectY3Character_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGroupProjectY3Character::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AGroupProjectY3Character Function DoMove ***********************************

// ********** Begin Class AGroupProjectY3Character Function OpenChronovert *************************
struct Z_Construct_UFunction_AGroupProjectY3Character_OpenChronovert_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroupProjectY3Character_OpenChronovert_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGroupProjectY3Character, nullptr, "OpenChronovert", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_OpenChronovert_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroupProjectY3Character_OpenChronovert_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGroupProjectY3Character_OpenChronovert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroupProjectY3Character_OpenChronovert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGroupProjectY3Character::execOpenChronovert)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenChronovert();
	P_NATIVE_END;
}
// ********** End Class AGroupProjectY3Character Function OpenChronovert ***************************

// ********** Begin Class AGroupProjectY3Character Function OpenDoor *******************************
static FName NAME_AGroupProjectY3Character_OpenDoor = FName(TEXT("OpenDoor"));
void AGroupProjectY3Character::OpenDoor()
{
	UFunction* Func = FindFunctionChecked(NAME_AGroupProjectY3Character_OpenDoor);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AGroupProjectY3Character_OpenDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LABDOOR" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroupProjectY3Character_OpenDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGroupProjectY3Character, nullptr, "OpenDoor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroupProjectY3Character_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroupProjectY3Character_OpenDoor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGroupProjectY3Character_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroupProjectY3Character_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AGroupProjectY3Character Function OpenDoor *********************************

// ********** Begin Class AGroupProjectY3Character *************************************************
void AGroupProjectY3Character::StaticRegisterNativesAGroupProjectY3Character()
{
	UClass* Class = AGroupProjectY3Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeTimeline", &AGroupProjectY3Character::execChangeTimeline },
		{ "CloseChronovert", &AGroupProjectY3Character::execCloseChronovert },
		{ "DoAim", &AGroupProjectY3Character::execDoAim },
		{ "DoInteract", &AGroupProjectY3Character::execDoInteract },
		{ "DoJumpEnd", &AGroupProjectY3Character::execDoJumpEnd },
		{ "DoJumpStart", &AGroupProjectY3Character::execDoJumpStart },
		{ "DoMove", &AGroupProjectY3Character::execDoMove },
		{ "OpenChronovert", &AGroupProjectY3Character::execOpenChronovert },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGroupProjectY3Character;
UClass* AGroupProjectY3Character::GetPrivateStaticClass()
{
	using TClass = AGroupProjectY3Character;
	if (!Z_Registration_Info_UClass_AGroupProjectY3Character.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GroupProjectY3Character"),
			Z_Registration_Info_UClass_AGroupProjectY3Character.InnerSingleton,
			StaticRegisterNativesAGroupProjectY3Character,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AGroupProjectY3Character.InnerSingleton;
}
UClass* Z_Construct_UClass_AGroupProjectY3Character_NoRegister()
{
	return AGroupProjectY3Character::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGroupProjectY3Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A basic first person character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GroupProjectY3Character.h" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A basic first person character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: first person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: first person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChronovertWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget Instance\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget Instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChronovertSceneCaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_changeTimeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action to teleport player\n" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action to teleport player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChronovertAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PastCameraComponent_MetaData[] = {
		{ "Category", "GroupProjectY3Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WatchController_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChronovertSceneCapture_MetaData[] = {
		{ "Category", "GroupProjectY3Character" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChronovertRenderTarget_MetaData[] = {
		{ "Category", "GroupProjectY3Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Render Target\n" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render Target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChronovertWidgetClass_MetaData[] = {
		{ "Category", "GroupProjectY3Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widget Class\n" },
#endif
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget Class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_keyLevel_MetaData[] = {
		{ "Category", "GroupProjectY3Character" },
		{ "ModuleRelativePath", "GroupProjectY3Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChronovertWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChronovertSceneCaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_changeTimeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChronovertAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PastCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WatchController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChronovertSceneCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChronovertRenderTarget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChronovertWidgetClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_keyLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGroupProjectY3Character_ChangeTimeline, "ChangeTimeline" }, // 3392824950
		{ &Z_Construct_UFunction_AGroupProjectY3Character_CloseChronovert, "CloseChronovert" }, // 4247347972
		{ &Z_Construct_UFunction_AGroupProjectY3Character_DoAim, "DoAim" }, // 1221020680
		{ &Z_Construct_UFunction_AGroupProjectY3Character_DoInteract, "DoInteract" }, // 3491105733
		{ &Z_Construct_UFunction_AGroupProjectY3Character_DoJumpEnd, "DoJumpEnd" }, // 2479681655
		{ &Z_Construct_UFunction_AGroupProjectY3Character_DoJumpStart, "DoJumpStart" }, // 1189059902
		{ &Z_Construct_UFunction_AGroupProjectY3Character_DoMove, "DoMove" }, // 2085465998
		{ &Z_Construct_UFunction_AGroupProjectY3Character_OpenChronovert, "OpenChronovert" }, // 2477705341
		{ &Z_Construct_UFunction_AGroupProjectY3Character_OpenDoor, "OpenDoor" }, // 3805586889
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroupProjectY3Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, FirstPersonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonMesh_MetaData), NewProp_FirstPersonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertWidget = { "ChronovertWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, ChronovertWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChronovertWidget_MetaData), NewProp_ChronovertWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertSceneCaptureComponent = { "ChronovertSceneCaptureComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, ChronovertSceneCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChronovertSceneCaptureComponent_MetaData), NewProp_ChronovertSceneCaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_changeTimeAction = { "changeTimeAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, changeTimeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_changeTimeAction_MetaData), NewProp_changeTimeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertAction = { "ChronovertAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, ChronovertAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChronovertAction_MetaData), NewProp_ChronovertAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_PastCameraComponent = { "PastCameraComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, PastCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PastCameraComponent_MetaData), NewProp_PastCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_WatchController = { "WatchController", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, WatchController), Z_Construct_UClass_AWatchController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WatchController_MetaData), NewProp_WatchController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertSceneCapture = { "ChronovertSceneCapture", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, ChronovertSceneCapture), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChronovertSceneCapture_MetaData), NewProp_ChronovertSceneCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertRenderTarget = { "ChronovertRenderTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, ChronovertRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChronovertRenderTarget_MetaData), NewProp_ChronovertRenderTarget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertWidgetClass = { "ChronovertWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, ChronovertWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChronovertWidgetClass_MetaData), NewProp_ChronovertWidgetClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_keyLevel = { "keyLevel", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroupProjectY3Character, keyLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_keyLevel_MetaData), NewProp_keyLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGroupProjectY3Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_FirstPersonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertSceneCaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_changeTimeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_PastCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_WatchController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertSceneCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_ChronovertWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupProjectY3Character_Statics::NewProp_keyLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroupProjectY3Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGroupProjectY3Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GroupProjectY3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroupProjectY3Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroupProjectY3Character_Statics::ClassParams = {
	&AGroupProjectY3Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGroupProjectY3Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGroupProjectY3Character_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGroupProjectY3Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AGroupProjectY3Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGroupProjectY3Character()
{
	if (!Z_Registration_Info_UClass_AGroupProjectY3Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroupProjectY3Character.OuterSingleton, Z_Construct_UClass_AGroupProjectY3Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGroupProjectY3Character.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGroupProjectY3Character);
AGroupProjectY3Character::~AGroupProjectY3Character() {}
// ********** End Class AGroupProjectY3Character ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h__Script_GroupProjectY3_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGroupProjectY3Character, AGroupProjectY3Character::StaticClass, TEXT("AGroupProjectY3Character"), &Z_Registration_Info_UClass_AGroupProjectY3Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroupProjectY3Character), 1067435278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h__Script_GroupProjectY3_1026371489(TEXT("/Script/GroupProjectY3"),
	Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h__Script_GroupProjectY3_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3Character_h__Script_GroupProjectY3_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
