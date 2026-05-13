// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroupProjectY3GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGroupProjectY3GameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AGroupProjectY3GameMode();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_AGroupProjectY3GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GroupProjectY3();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGroupProjectY3GameMode **************************************************
void AGroupProjectY3GameMode::StaticRegisterNativesAGroupProjectY3GameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGroupProjectY3GameMode;
UClass* AGroupProjectY3GameMode::GetPrivateStaticClass()
{
	using TClass = AGroupProjectY3GameMode;
	if (!Z_Registration_Info_UClass_AGroupProjectY3GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GroupProjectY3GameMode"),
			Z_Registration_Info_UClass_AGroupProjectY3GameMode.InnerSingleton,
			StaticRegisterNativesAGroupProjectY3GameMode,
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
	return Z_Registration_Info_UClass_AGroupProjectY3GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGroupProjectY3GameMode_NoRegister()
{
	return AGroupProjectY3GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGroupProjectY3GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GroupProjectY3GameMode.h" },
		{ "ModuleRelativePath", "GroupProjectY3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroupProjectY3GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGroupProjectY3GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GroupProjectY3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroupProjectY3GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroupProjectY3GameMode_Statics::ClassParams = {
	&AGroupProjectY3GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGroupProjectY3GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGroupProjectY3GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGroupProjectY3GameMode()
{
	if (!Z_Registration_Info_UClass_AGroupProjectY3GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroupProjectY3GameMode.OuterSingleton, Z_Construct_UClass_AGroupProjectY3GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGroupProjectY3GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGroupProjectY3GameMode);
AGroupProjectY3GameMode::~AGroupProjectY3GameMode() {}
// ********** End Class AGroupProjectY3GameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3GameMode_h__Script_GroupProjectY3_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGroupProjectY3GameMode, AGroupProjectY3GameMode::StaticClass, TEXT("AGroupProjectY3GameMode"), &Z_Registration_Info_UClass_AGroupProjectY3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroupProjectY3GameMode), 2214955035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3GameMode_h__Script_GroupProjectY3_1373246994(TEXT("/Script/GroupProjectY3"),
	Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3GameMode_h__Script_GroupProjectY3_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_GroupProjectY3GameMode_h__Script_GroupProjectY3_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
