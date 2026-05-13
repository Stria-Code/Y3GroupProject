// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroupProjectY3CameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGroupProjectY3CameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AGroupProjectY3CameraManager();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AGroupProjectY3CameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GroupProjectY3();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGroupProjectY3CameraManager *********************************************
void AGroupProjectY3CameraManager::StaticRegisterNativesAGroupProjectY3CameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGroupProjectY3CameraManager;
UClass* AGroupProjectY3CameraManager::GetPrivateStaticClass()
{
	using TClass = AGroupProjectY3CameraManager;
	if (!Z_Registration_Info_UClass_AGroupProjectY3CameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GroupProjectY3CameraManager"),
			Z_Registration_Info_UClass_AGroupProjectY3CameraManager.InnerSingleton,
			StaticRegisterNativesAGroupProjectY3CameraManager,
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
	return Z_Registration_Info_UClass_AGroupProjectY3CameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AGroupProjectY3CameraManager_NoRegister()
{
	return AGroupProjectY3CameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGroupProjectY3CameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "GroupProjectY3CameraManager.h" },
		{ "ModuleRelativePath", "GroupProjectY3CameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroupProjectY3CameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGroupProjectY3CameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GroupProjectY3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroupProjectY3CameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroupProjectY3CameraManager_Statics::ClassParams = {
	&AGroupProjectY3CameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGroupProjectY3CameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGroupProjectY3CameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGroupProjectY3CameraManager()
{
	if (!Z_Registration_Info_UClass_AGroupProjectY3CameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroupProjectY3CameraManager.OuterSingleton, Z_Construct_UClass_AGroupProjectY3CameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGroupProjectY3CameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGroupProjectY3CameraManager);
AGroupProjectY3CameraManager::~AGroupProjectY3CameraManager() {}
// ********** End Class AGroupProjectY3CameraManager ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3CameraManager_h__Script_GroupProjectY3_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGroupProjectY3CameraManager, AGroupProjectY3CameraManager::StaticClass, TEXT("AGroupProjectY3CameraManager"), &Z_Registration_Info_UClass_AGroupProjectY3CameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroupProjectY3CameraManager), 3366018594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3CameraManager_h__Script_GroupProjectY3_564001847(TEXT("/Script/GroupProjectY3"),
	Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3CameraManager_h__Script_GroupProjectY3_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3CameraManager_h__Script_GroupProjectY3_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
