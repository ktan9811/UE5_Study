// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BOOM_Tank/BasePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePawn() {}
// Cross Module References
	BOOM_TANK_API UClass* Z_Construct_UClass_ABasePawn();
	BOOM_TANK_API UClass* Z_Construct_UClass_ABasePawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BOOM_Tank();
// End Cross Module References
	void ABasePawn::StaticRegisterNativesABasePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePawn);
	UClass* Z_Construct_UClass_ABasePawn_NoRegister()
	{
		return ABasePawn::StaticClass();
	}
	struct Z_Construct_UClass_ABasePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BOOM_Tank,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasePawn.h" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent_MetaData), Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePawn_Statics::ClassParams = {
		&ABasePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABasePawn()
	{
		if (!Z_Registration_Info_UClass_ABasePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePawn.OuterSingleton, Z_Construct_UClass_ABasePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasePawn.OuterSingleton;
	}
	template<> BOOM_TANK_API UClass* StaticClass<ABasePawn>()
	{
		return ABasePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePawn);
	ABasePawn::~ABasePawn() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BasePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BasePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasePawn, ABasePawn::StaticClass, TEXT("ABasePawn"), &Z_Registration_Info_UClass_ABasePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePawn), 1609711304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BasePawn_h_340454117(TEXT("/Script/BOOM_Tank"),
		Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BasePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BasePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
