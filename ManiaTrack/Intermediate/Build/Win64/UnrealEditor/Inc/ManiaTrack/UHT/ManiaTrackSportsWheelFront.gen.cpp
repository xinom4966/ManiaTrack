// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManiaTrack/ManiaTrackSportsWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiaTrackSportsWheelFront() {}
// Cross Module References
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackSportsWheelFront();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackSportsWheelFront_NoRegister();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackWheelFront();
	UPackage* Z_Construct_UPackage__Script_ManiaTrack();
// End Cross Module References
	void UManiaTrackSportsWheelFront::StaticRegisterNativesUManiaTrackSportsWheelFront()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManiaTrackSportsWheelFront);
	UClass* Z_Construct_UClass_UManiaTrackSportsWheelFront_NoRegister()
	{
		return UManiaTrackSportsWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UManiaTrackSportsWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiaTrackSportsWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManiaTrackWheelFront,
		(UObject* (*)())Z_Construct_UPackage__Script_ManiaTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackSportsWheelFront_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiaTrackSportsWheelFront_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "ManiaTrackSportsWheelFront.h" },
		{ "ModuleRelativePath", "ManiaTrackSportsWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Sports Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiaTrackSportsWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManiaTrackSportsWheelFront>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManiaTrackSportsWheelFront_Statics::ClassParams = {
		&UManiaTrackSportsWheelFront::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackSportsWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UManiaTrackSportsWheelFront_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UManiaTrackSportsWheelFront()
	{
		if (!Z_Registration_Info_UClass_UManiaTrackSportsWheelFront.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManiaTrackSportsWheelFront.OuterSingleton, Z_Construct_UClass_UManiaTrackSportsWheelFront_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManiaTrackSportsWheelFront.OuterSingleton;
	}
	template<> MANIATRACK_API UClass* StaticClass<UManiaTrackSportsWheelFront>()
	{
		return UManiaTrackSportsWheelFront::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiaTrackSportsWheelFront);
	UManiaTrackSportsWheelFront::~UManiaTrackSportsWheelFront() {}
	struct Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelFront_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelFront_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManiaTrackSportsWheelFront, UManiaTrackSportsWheelFront::StaticClass, TEXT("UManiaTrackSportsWheelFront"), &Z_Registration_Info_UClass_UManiaTrackSportsWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManiaTrackSportsWheelFront), 1673313447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelFront_h_177482548(TEXT("/Script/ManiaTrack"),
		Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackSportsWheelFront_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
