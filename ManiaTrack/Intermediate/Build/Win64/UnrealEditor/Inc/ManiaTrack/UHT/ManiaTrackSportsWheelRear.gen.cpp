// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManiaTrack/ManiaTrackSportsWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiaTrackSportsWheelRear() {}
// Cross Module References
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackSportsWheelRear();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackSportsWheelRear_NoRegister();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackWheelRear();
	UPackage* Z_Construct_UPackage__Script_ManiaTrack();
// End Cross Module References
	void UManiaTrackSportsWheelRear::StaticRegisterNativesUManiaTrackSportsWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManiaTrackSportsWheelRear);
	UClass* Z_Construct_UClass_UManiaTrackSportsWheelRear_NoRegister()
	{
		return UManiaTrackSportsWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UManiaTrackSportsWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiaTrackSportsWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManiaTrackWheelRear,
		(UObject* (*)())Z_Construct_UPackage__Script_ManiaTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackSportsWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiaTrackSportsWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "ManiaTrackSportsWheelRear.h" },
		{ "ModuleRelativePath", "ManiaTrackSportsWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Sports Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiaTrackSportsWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManiaTrackSportsWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManiaTrackSportsWheelRear_Statics::ClassParams = {
		&UManiaTrackSportsWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackSportsWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UManiaTrackSportsWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UManiaTrackSportsWheelRear()
	{
		if (!Z_Registration_Info_UClass_UManiaTrackSportsWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManiaTrackSportsWheelRear.OuterSingleton, Z_Construct_UClass_UManiaTrackSportsWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManiaTrackSportsWheelRear.OuterSingleton;
	}
	template<> MANIATRACK_API UClass* StaticClass<UManiaTrackSportsWheelRear>()
	{
		return UManiaTrackSportsWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiaTrackSportsWheelRear);
	UManiaTrackSportsWheelRear::~UManiaTrackSportsWheelRear() {}
	struct Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManiaTrackSportsWheelRear, UManiaTrackSportsWheelRear::StaticClass, TEXT("UManiaTrackSportsWheelRear"), &Z_Registration_Info_UClass_UManiaTrackSportsWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManiaTrackSportsWheelRear), 2699078381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelRear_h_1242704248(TEXT("/Script/ManiaTrack"),
		Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
