// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupProjectY3_init() {}
	GROUPPROJECTY3_API UFunction* Z_Construct_UDelegateFunction_GroupProjectY3_BulletCountUpdatedDelegate__DelegateSignature();
	GROUPPROJECTY3_API UFunction* Z_Construct_UDelegateFunction_GroupProjectY3_DamagedDelegate__DelegateSignature();
	GROUPPROJECTY3_API UFunction* Z_Construct_UDelegateFunction_GroupProjectY3_PawnDeathDelegate__DelegateSignature();
	GROUPPROJECTY3_API UFunction* Z_Construct_UDelegateFunction_GroupProjectY3_SprintStateChangedDelegate__DelegateSignature();
	GROUPPROJECTY3_API UFunction* Z_Construct_UDelegateFunction_GroupProjectY3_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GroupProjectY3;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GroupProjectY3()
	{
		if (!Z_Registration_Info_UPackage__Script_GroupProjectY3.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GroupProjectY3_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GroupProjectY3_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GroupProjectY3_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GroupProjectY3_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GroupProjectY3_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GroupProjectY3",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x93A661C6,
				0xF35EBE9E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GroupProjectY3.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GroupProjectY3.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GroupProjectY3(Z_Construct_UPackage__Script_GroupProjectY3, TEXT("/Script/GroupProjectY3"), Z_Registration_Info_UPackage__Script_GroupProjectY3, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x93A661C6, 0xF35EBE9E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
