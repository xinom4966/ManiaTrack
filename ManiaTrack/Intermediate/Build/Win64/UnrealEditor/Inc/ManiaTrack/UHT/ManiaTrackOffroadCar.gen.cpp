// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManiaTrack/ManiaTrackOffroadCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiaTrackOffroadCar() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackOffroadCar();
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackOffroadCar_NoRegister();
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackPawn();
	UPackage* Z_Construct_UPackage__Script_ManiaTrack();
// End Cross Module References
	void AManiaTrackOffroadCar::StaticRegisterNativesAManiaTrackOffroadCar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManiaTrackOffroadCar);
	UClass* Z_Construct_UClass_AManiaTrackOffroadCar_NoRegister()
	{
		return AManiaTrackOffroadCar::StaticClass();
	}
	struct Z_Construct_UClass_AManiaTrackOffroadCar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chassis_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Chassis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TireFrontLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TireFrontLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TireFrontRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TireFrontRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TireRearLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TireRearLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TireRearRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TireRearRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManiaTrackOffroadCar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AManiaTrackPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ManiaTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackOffroadCar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackOffroadCar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Offroad car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ManiaTrackOffroadCar.h" },
		{ "ModuleRelativePath", "ManiaTrackOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offroad car wheeled vehicle implementation" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_Chassis_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chassis static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManiaTrackOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chassis static mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_Chassis = { "Chassis", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackOffroadCar, Chassis), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_Chassis_MetaData), Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_Chassis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FL Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManiaTrackOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FL Tire static mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontLeft = { "TireFrontLeft", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackOffroadCar, TireFrontLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontLeft_MetaData), Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FR Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManiaTrackOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FR Tire static mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontRight = { "TireFrontRight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackOffroadCar, TireFrontRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontRight_MetaData), Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RL Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManiaTrackOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RL Tire static mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearLeft = { "TireRearLeft", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackOffroadCar, TireRearLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearLeft_MetaData), Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Meshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RR Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManiaTrackOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RR Tire static mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearRight = { "TireRearRight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackOffroadCar, TireRearRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearRight_MetaData), Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearRight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManiaTrackOffroadCar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_Chassis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireFrontRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackOffroadCar_Statics::NewProp_TireRearRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManiaTrackOffroadCar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManiaTrackOffroadCar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManiaTrackOffroadCar_Statics::ClassParams = {
		&AManiaTrackOffroadCar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AManiaTrackOffroadCar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackOffroadCar_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackOffroadCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AManiaTrackOffroadCar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackOffroadCar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AManiaTrackOffroadCar()
	{
		if (!Z_Registration_Info_UClass_AManiaTrackOffroadCar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManiaTrackOffroadCar.OuterSingleton, Z_Construct_UClass_AManiaTrackOffroadCar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManiaTrackOffroadCar.OuterSingleton;
	}
	template<> MANIATRACK_API UClass* StaticClass<AManiaTrackOffroadCar>()
	{
		return AManiaTrackOffroadCar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManiaTrackOffroadCar);
	AManiaTrackOffroadCar::~AManiaTrackOffroadCar() {}
	struct Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadCar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadCar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManiaTrackOffroadCar, AManiaTrackOffroadCar::StaticClass, TEXT("AManiaTrackOffroadCar"), &Z_Registration_Info_UClass_AManiaTrackOffroadCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManiaTrackOffroadCar), 3461916571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadCar_h_1392345770(TEXT("/Script/ManiaTrack"),
		Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadCar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
