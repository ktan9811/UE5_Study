// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BOOM_Tank/BOOM_TankGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBOOM_TankGameMode() {}
// Cross Module References
	BOOM_TANK_API UClass* Z_Construct_UClass_ABOOM_TankGameMode();
	BOOM_TANK_API UClass* Z_Construct_UClass_ABOOM_TankGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BOOM_Tank();
// End Cross Module References
	void ABOOM_TankGameMode::StaticRegisterNativesABOOM_TankGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABOOM_TankGameMode);
	UClass* Z_Construct_UClass_ABOOM_TankGameMode_NoRegister()
	{
		return ABOOM_TankGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABOOM_TankGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABOOM_TankGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BOOM_Tank,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABOOM_TankGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABOOM_TankGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BOOM_TankGameMode.h" },
		{ "ModuleRelativePath", "BOOM_TankGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABOOM_TankGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABOOM_TankGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABOOM_TankGameMode_Statics::ClassParams = {
		&ABOOM_TankGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABOOM_TankGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABOOM_TankGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABOOM_TankGameMode()
	{
		if (!Z_Registration_Info_UClass_ABOOM_TankGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABOOM_TankGameMode.OuterSingleton, Z_Construct_UClass_ABOOM_TankGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABOOM_TankGameMode.OuterSingleton;
	}
	template<> BOOM_TANK_API UClass* StaticClass<ABOOM_TankGameMode>()
	{
		return ABOOM_TankGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABOOM_TankGameMode);
	ABOOM_TankGameMode::~ABOOM_TankGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BOOM_TankGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BOOM_TankGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABOOM_TankGameMode, ABOOM_TankGameMode::StaticClass, TEXT("ABOOM_TankGameMode"), &Z_Registration_Info_UClass_ABOOM_TankGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABOOM_TankGameMode), 1360547305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BOOM_TankGameMode_h_811745976(TEXT("/Script/BOOM_Tank"),
		Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BOOM_TankGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BOOM_TankGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
