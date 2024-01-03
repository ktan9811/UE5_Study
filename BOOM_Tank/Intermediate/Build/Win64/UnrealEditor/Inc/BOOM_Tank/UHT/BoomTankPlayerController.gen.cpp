// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BOOM_Tank/BoomTankPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoomTankPlayerController() {}
// Cross Module References
	BOOM_TANK_API UClass* Z_Construct_UClass_ABoomTankPlayerController();
	BOOM_TANK_API UClass* Z_Construct_UClass_ABoomTankPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BOOM_Tank();
// End Cross Module References
	void ABoomTankPlayerController::StaticRegisterNativesABoomTankPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoomTankPlayerController);
	UClass* Z_Construct_UClass_ABoomTankPlayerController_NoRegister()
	{
		return ABoomTankPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABoomTankPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoomTankPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BOOM_Tank,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomTankPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomTankPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BoomTankPlayerController.h" },
		{ "ModuleRelativePath", "BoomTankPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoomTankPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoomTankPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoomTankPlayerController_Statics::ClassParams = {
		&ABoomTankPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomTankPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoomTankPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABoomTankPlayerController()
	{
		if (!Z_Registration_Info_UClass_ABoomTankPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoomTankPlayerController.OuterSingleton, Z_Construct_UClass_ABoomTankPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoomTankPlayerController.OuterSingleton;
	}
	template<> BOOM_TANK_API UClass* StaticClass<ABoomTankPlayerController>()
	{
		return ABoomTankPlayerController::StaticClass();
	}
	ABoomTankPlayerController::ABoomTankPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoomTankPlayerController);
	ABoomTankPlayerController::~ABoomTankPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoomTankPlayerController, ABoomTankPlayerController::StaticClass, TEXT("ABoomTankPlayerController"), &Z_Registration_Info_UClass_ABoomTankPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoomTankPlayerController), 2775944309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankPlayerController_h_532881372(TEXT("/Script/BOOM_Tank"),
		Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
