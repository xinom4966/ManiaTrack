// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManiaTrack/ManiaTrackSportsCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiaTrackSportsCar() {}
// Cross Module References
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackPawn();
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackSportsCar();
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackSportsCar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ManiaTrack();
// End Cross Module References
	void AManiaTrackSportsCar::StaticRegisterNativesAManiaTrackSportsCar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManiaTrackSportsCar);
	UClass* Z_Construct_UClass_AManiaTrackSportsCar_NoRegister()
	{
		return AManiaTrackSportsCar::StaticClass();
	}
	struct Z_Construct_UClass_AManiaTrackSportsCar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManiaTrackSportsCar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AManiaTrackPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ManiaTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackSportsCar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackSportsCar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ManiaTrackSportsCar.h" },
		{ "ModuleRelativePath", "ManiaTrackSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManiaTrackSportsCar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManiaTrackSportsCar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManiaTrackSportsCar_Statics::ClassParams = {
		&AManiaTrackSportsCar::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AManiaTrackSportsCar_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AManiaTrackSportsCar()
	{
		if (!Z_Registration_Info_UClass_AManiaTrackSportsCar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManiaTrackSportsCar.OuterSingleton, Z_Construct_UClass_AManiaTrackSportsCar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManiaTrackSportsCar.OuterSingleton;
	}
	template<> MANIATRACK_API UClass* StaticClass<AManiaTrackSportsCar>()
	{
		return AManiaTrackSportsCar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManiaTrackSportsCar);
	AManiaTrackSportsCar::~AManiaTrackSportsCar() {}
	struct Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsCar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsCar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManiaTrackSportsCar, AManiaTrackSportsCar::StaticClass, TEXT("AManiaTrackSportsCar"), &Z_Registration_Info_UClass_AManiaTrackSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManiaTrackSportsCar), 3042470911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsCar_h_792998073(TEXT("/Script/ManiaTrack"),
		Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsCar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
