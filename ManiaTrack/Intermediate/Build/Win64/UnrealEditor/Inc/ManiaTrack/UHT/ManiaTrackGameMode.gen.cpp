// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManiaTrack/ManiaTrackGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiaTrackGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackGameMode();
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ManiaTrack();
// End Cross Module References
	void AManiaTrackGameMode::StaticRegisterNativesAManiaTrackGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManiaTrackGameMode);
	UClass* Z_Construct_UClass_AManiaTrackGameMode_NoRegister()
	{
		return AManiaTrackGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AManiaTrackGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManiaTrackGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ManiaTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ManiaTrackGameMode.h" },
		{ "ModuleRelativePath", "ManiaTrackGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManiaTrackGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManiaTrackGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManiaTrackGameMode_Statics::ClassParams = {
		&AManiaTrackGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AManiaTrackGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AManiaTrackGameMode()
	{
		if (!Z_Registration_Info_UClass_AManiaTrackGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManiaTrackGameMode.OuterSingleton, Z_Construct_UClass_AManiaTrackGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManiaTrackGameMode.OuterSingleton;
	}
	template<> MANIATRACK_API UClass* StaticClass<AManiaTrackGameMode>()
	{
		return AManiaTrackGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManiaTrackGameMode);
	AManiaTrackGameMode::~AManiaTrackGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManiaTrackGameMode, AManiaTrackGameMode::StaticClass, TEXT("AManiaTrackGameMode"), &Z_Registration_Info_UClass_AManiaTrackGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManiaTrackGameMode), 3750400076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackGameMode_h_2398649597(TEXT("/Script/ManiaTrack"),
		Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
