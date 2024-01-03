// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BOOM_Tank/BoomTankGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoomTankGameModeBase() {}
// Cross Module References
	BOOM_TANK_API UClass* Z_Construct_UClass_ABoomTankGameModeBase();
	BOOM_TANK_API UClass* Z_Construct_UClass_ABoomTankGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BOOM_Tank();
// End Cross Module References
	void ABoomTankGameModeBase::StaticRegisterNativesABoomTankGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoomTankGameModeBase);
	UClass* Z_Construct_UClass_ABoomTankGameModeBase_NoRegister()
	{
		return ABoomTankGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABoomTankGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoomTankGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BOOM_Tank,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomTankGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomTankGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BoomTankGameModeBase.h" },
		{ "ModuleRelativePath", "BoomTankGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoomTankGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoomTankGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoomTankGameModeBase_Statics::ClassParams = {
		&ABoomTankGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomTankGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoomTankGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABoomTankGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ABoomTankGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoomTankGameModeBase.OuterSingleton, Z_Construct_UClass_ABoomTankGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoomTankGameModeBase.OuterSingleton;
	}
	template<> BOOM_TANK_API UClass* StaticClass<ABoomTankGameModeBase>()
	{
		return ABoomTankGameModeBase::StaticClass();
	}
	ABoomTankGameModeBase::ABoomTankGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoomTankGameModeBase);
	ABoomTankGameModeBase::~ABoomTankGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoomTankGameModeBase, ABoomTankGameModeBase::StaticClass, TEXT("ABoomTankGameModeBase"), &Z_Registration_Info_UClass_ABoomTankGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoomTankGameModeBase), 1337521072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankGameModeBase_h_1253292202(TEXT("/Script/BOOM_Tank"),
		Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
