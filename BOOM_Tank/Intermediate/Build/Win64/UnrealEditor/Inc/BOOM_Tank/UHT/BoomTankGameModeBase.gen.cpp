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
	static FName NAME_ABoomTankGameModeBase_StartGame = FName(TEXT("StartGame"));
	void ABoomTankGameModeBase::StartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABoomTankGameModeBase_StartGame),NULL);
	}
	void ABoomTankGameModeBase::StaticRegisterNativesABoomTankGameModeBase()
	{
	}
	struct Z_Construct_UFunction_ABoomTankGameModeBase_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomTankGameModeBase_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoomTankGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoomTankGameModeBase_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoomTankGameModeBase, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomTankGameModeBase_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoomTankGameModeBase_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABoomTankGameModeBase_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoomTankGameModeBase_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoomTankGameModeBase);
	UClass* Z_Construct_UClass_ABoomTankGameModeBase_NoRegister()
	{
		return ABoomTankGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABoomTankGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoomTankGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoomTankGameModeBase_StartGame, "StartGame" }, // 444131424
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomTankGameModeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomTankGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb8\xef\xbf\xbd\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd Player\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Tank \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd N \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd\n// \xef\xbf\xbd\xd7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb0\xef\xbf\xbd\n" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BoomTankGameModeBase.h" },
		{ "ModuleRelativePath", "BoomTankGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb8\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd Player\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Tank \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd N \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd\n\xef\xbf\xbd\xd7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb0\xef\xbf\xbd" },
#endif
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ABoomTankGameModeBase, ABoomTankGameModeBase::StaticClass, TEXT("ABoomTankGameModeBase"), &Z_Registration_Info_UClass_ABoomTankGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoomTankGameModeBase), 2827946775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankGameModeBase_h_3855123639(TEXT("/Script/BOOM_Tank"),
		Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BoomTankGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
