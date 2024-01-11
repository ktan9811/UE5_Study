// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BOOM_Tank/BreakableBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableBox() {}
// Cross Module References
	BOOM_TANK_API UClass* Z_Construct_UClass_ABreakableBox();
	BOOM_TANK_API UClass* Z_Construct_UClass_ABreakableBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BOOM_Tank();
// End Cross Module References
	void ABreakableBox::StaticRegisterNativesABreakableBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABreakableBox);
	UClass* Z_Construct_UClass_ABreakableBox_NoRegister()
	{
		return ABreakableBox::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathParticles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BOOM_Tank,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBox_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableBox.h" },
		{ "ModuleRelativePath", "BreakableBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBox_Statics::NewProp_BoxMesh_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBox_Statics::NewProp_BoxMesh = { "BoxMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBox, BoxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBox_Statics::NewProp_BoxMesh_MetaData), Z_Construct_UClass_ABreakableBox_Statics::NewProp_BoxMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBox_Statics::NewProp_DeathParticles_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BreakableBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBox_Statics::NewProp_DeathParticles = { "DeathParticles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBox, DeathParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBox_Statics::NewProp_DeathParticles_MetaData), Z_Construct_UClass_ABreakableBox_Statics::NewProp_DeathParticles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBox_Statics::NewProp_BoxMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBox_Statics::NewProp_DeathParticles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABreakableBox_Statics::ClassParams = {
		&ABreakableBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABreakableBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ABreakableBox_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBox_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABreakableBox()
	{
		if (!Z_Registration_Info_UClass_ABreakableBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABreakableBox.OuterSingleton, Z_Construct_UClass_ABreakableBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABreakableBox.OuterSingleton;
	}
	template<> BOOM_TANK_API UClass* StaticClass<ABreakableBox>()
	{
		return ABreakableBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableBox);
	ABreakableBox::~ABreakableBox() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BreakableBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BreakableBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABreakableBox, ABreakableBox::StaticClass, TEXT("ABreakableBox"), &Z_Registration_Info_UClass_ABreakableBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABreakableBox), 52422000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BreakableBox_h_3403604606(TEXT("/Script/BOOM_Tank"),
		Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BreakableBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_UE5_Study_BOOM_Tank_Source_BOOM_Tank_BreakableBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
