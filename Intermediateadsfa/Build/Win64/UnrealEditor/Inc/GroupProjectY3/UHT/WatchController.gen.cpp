// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WatchController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWatchController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AWatchController();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AWatchController_NoRegister();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_UTimerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GroupProjectY3();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWatchController *********************************************************
void AWatchController::StaticRegisterNativesAWatchController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWatchController;
UClass* AWatchController::GetPrivateStaticClass()
{
	using TClass = AWatchController;
	if (!Z_Registration_Info_UClass_AWatchController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WatchController"),
			Z_Registration_Info_UClass_AWatchController.InnerSingleton,
			StaticRegisterNativesAWatchController,
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
	return Z_Registration_Info_UClass_AWatchController.InnerSingleton;
}
UClass* Z_Construct_UClass_AWatchController_NoRegister()
{
	return AWatchController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWatchController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WatchController.h" },
		{ "ModuleRelativePath", "WatchController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WatchController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Timer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWatchController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWatchController_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWatchController, Timer), Z_Construct_UClass_UTimerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timer_MetaData), NewProp_Timer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWatchController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWatchController_Statics::NewProp_Timer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWatchController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWatchController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GroupProjectY3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWatchController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWatchController_Statics::ClassParams = {
	&AWatchController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWatchController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWatchController_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWatchController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWatchController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWatchController()
{
	if (!Z_Registration_Info_UClass_AWatchController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWatchController.OuterSingleton, Z_Construct_UClass_AWatchController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWatchController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWatchController);
AWatchController::~AWatchController() {}
// ********** End Class AWatchController ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_WatchController_h__Script_GroupProjectY3_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWatchController, AWatchController::StaticClass, TEXT("AWatchController"), &Z_Registration_Info_UClass_AWatchController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWatchController), 343847048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_WatchController_h__Script_GroupProjectY3_1276581091(TEXT("/Script/GroupProjectY3"),
	Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_WatchController_h__Script_GroupProjectY3_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_WatchController_h__Script_GroupProjectY3_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
