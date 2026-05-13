// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorScript.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDoorScript() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_UDoorScript();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_UDoorScript_NoRegister();
UPackage* Z_Construct_UPackage__Script_GroupProjectY3();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDoorScript Function OpenDoor ********************************************
static FName NAME_UDoorScript_OpenDoor = FName(TEXT("OpenDoor"));
void UDoorScript::OpenDoor()
{
	UFunction* Func = FindFunctionChecked(NAME_UDoorScript_OpenDoor);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UDoorScript_OpenDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LABDOOR" },
		{ "ModuleRelativePath", "DoorScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoorScript_OpenDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDoorScript, nullptr, "OpenDoor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorScript_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDoorScript_OpenDoor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDoorScript_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDoorScript_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UDoorScript Function OpenDoor **********************************************

// ********** Begin Class UDoorScript **************************************************************
void UDoorScript::StaticRegisterNativesUDoorScript()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDoorScript;
UClass* UDoorScript::GetPrivateStaticClass()
{
	using TClass = UDoorScript;
	if (!Z_Registration_Info_UClass_UDoorScript.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DoorScript"),
			Z_Registration_Info_UClass_UDoorScript.InnerSingleton,
			StaticRegisterNativesUDoorScript,
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
	return Z_Registration_Info_UClass_UDoorScript.InnerSingleton;
}
UClass* Z_Construct_UClass_UDoorScript_NoRegister()
{
	return UDoorScript::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDoorScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorScript.h" },
		{ "ModuleRelativePath", "DoorScript.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDoorScript_OpenDoor, "OpenDoor" }, // 2369797287
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDoorScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GroupProjectY3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorScript_Statics::ClassParams = {
	&UDoorScript::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorScript_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoorScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDoorScript()
{
	if (!Z_Registration_Info_UClass_UDoorScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorScript.OuterSingleton, Z_Construct_UClass_UDoorScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDoorScript.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorScript);
UDoorScript::~UDoorScript() {}
// ********** End Class UDoorScript ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_DoorScript_h__Script_GroupProjectY3_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDoorScript, UDoorScript::StaticClass, TEXT("UDoorScript"), &Z_Registration_Info_UClass_UDoorScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorScript), 2410637191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_DoorScript_h__Script_GroupProjectY3_3629345110(TEXT("/Script/GroupProjectY3"),
	Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_DoorScript_h__Script_GroupProjectY3_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_DoorScript_h__Script_GroupProjectY3_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
