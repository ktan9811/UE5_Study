// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPS_Template/TPS_TemplateGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPS_TemplateGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TPS_TEMPLATE_API UClass* Z_Construct_UClass_ATPS_TemplateGameMode();
	TPS_TEMPLATE_API UClass* Z_Construct_UClass_ATPS_TemplateGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPS_Template();
// End Cross Module References
	void ATPS_TemplateGameMode::StaticRegisterNativesATPS_TemplateGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPS_TemplateGameMode);
	UClass* Z_Construct_UClass_ATPS_TemplateGameMode_NoRegister()
	{
		return ATPS_TemplateGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATPS_TemplateGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPS_TemplateGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TPS_Template,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPS_TemplateGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPS_TemplateGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPS_TemplateGameMode.h" },
		{ "ModuleRelativePath", "TPS_TemplateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPS_TemplateGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPS_TemplateGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPS_TemplateGameMode_Statics::ClassParams = {
		&ATPS_TemplateGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPS_TemplateGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPS_TemplateGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATPS_TemplateGameMode()
	{
		if (!Z_Registration_Info_UClass_ATPS_TemplateGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPS_TemplateGameMode.OuterSingleton, Z_Construct_UClass_ATPS_TemplateGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPS_TemplateGameMode.OuterSingleton;
	}
	template<> TPS_TEMPLATE_API UClass* StaticClass<ATPS_TemplateGameMode>()
	{
		return ATPS_TemplateGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPS_TemplateGameMode);
	ATPS_TemplateGameMode::~ATPS_TemplateGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_TPS_Template_Source_TPS_Template_TPS_TemplateGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_TPS_Template_Source_TPS_Template_TPS_TemplateGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPS_TemplateGameMode, ATPS_TemplateGameMode::StaticClass, TEXT("ATPS_TemplateGameMode"), &Z_Registration_Info_UClass_ATPS_TemplateGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPS_TemplateGameMode), 1338015185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_TPS_Template_Source_TPS_Template_TPS_TemplateGameMode_h_3079170340(TEXT("/Script/TPS_Template"),
		Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_TPS_Template_Source_TPS_Template_TPS_TemplateGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_TPS_Template_Source_TPS_Template_TPS_TemplateGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
