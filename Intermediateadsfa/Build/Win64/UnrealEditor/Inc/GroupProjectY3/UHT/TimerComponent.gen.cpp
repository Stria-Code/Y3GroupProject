// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimerComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_UTimerComponent();
GROUPPROJECTY3_API UClass* Z_Construct_UClass_UTimerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GroupProjectY3();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTimerComponent Function GetTimeRemaining ********************************
struct Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics
{
	struct TimerComponent_eventGetTimeRemaining_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "TimerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerComponent_eventGetTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimerComponent, nullptr, "GetTimeRemaining", Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::TimerComponent_eventGetTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::TimerComponent_eventGetTimeRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimerComponent_GetTimeRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimerComponent::execGetTimeRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeRemaining();
	P_NATIVE_END;
}
// ********** End Class UTimerComponent Function GetTimeRemaining **********************************

// ********** Begin Class UTimerComponent Function StartTimer **************************************
struct Z_Construct_UFunction_UTimerComponent_StartTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "TimerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerComponent_StartTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimerComponent, nullptr, "StartTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_StartTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimerComponent_StartTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTimerComponent_StartTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimerComponent_StartTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimerComponent::execStartTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTimer();
	P_NATIVE_END;
}
// ********** End Class UTimerComponent Function StartTimer ****************************************

// ********** Begin Class UTimerComponent **********************************************************
void UTimerComponent::StaticRegisterNativesUTimerComponent()
{
	UClass* Class = UTimerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTimeRemaining", &UTimerComponent::execGetTimeRemaining },
		{ "StartTimer", &UTimerComponent::execStartTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTimerComponent;
UClass* UTimerComponent::GetPrivateStaticClass()
{
	using TClass = UTimerComponent;
	if (!Z_Registration_Info_UClass_UTimerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TimerComponent"),
			Z_Registration_Info_UClass_UTimerComponent.InnerSingleton,
			StaticRegisterNativesUTimerComponent,
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
	return Z_Registration_Info_UClass_UTimerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTimerComponent_NoRegister()
{
	return UTimerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTimerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TimerComponent.h" },
		{ "ModuleRelativePath", "TimerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeDuration_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "TimerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isTimerFinished_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "TimerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_isTimerFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimerComponent_GetTimeRemaining, "GetTimeRemaining" }, // 1875622663
		{ &Z_Construct_UFunction_UTimerComponent_StartTimer, "StartTimer" }, // 4242327162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimeDuration = { "TimeDuration", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimerComponent, TimeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeDuration_MetaData), NewProp_TimeDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimerComponent_Statics::NewProp_isTimerFinished = { "isTimerFinished", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimerComponent, isTimerFinished), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isTimerFinished_MetaData), NewProp_isTimerFinished_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerComponent_Statics::NewProp_TimeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimerComponent_Statics::NewProp_isTimerFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GroupProjectY3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimerComponent_Statics::ClassParams = {
	&UTimerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTimerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimerComponent()
{
	if (!Z_Registration_Info_UClass_UTimerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimerComponent.OuterSingleton, Z_Construct_UClass_UTimerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerComponent);
UTimerComponent::~UTimerComponent() {}
// ********** End Class UTimerComponent ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h__Script_GroupProjectY3_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimerComponent, UTimerComponent::StaticClass, TEXT("UTimerComponent"), &Z_Registration_Info_UClass_UTimerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimerComponent), 901523336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h__Script_GroupProjectY3_1662123124(TEXT("/Script/GroupProjectY3"),
	Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h__Script_GroupProjectY3_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Y3GroupProject_Source_GroupProjectY3_TimerComponent_h__Script_GroupProjectY3_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
