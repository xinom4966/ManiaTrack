// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManiaTrack/ManiaTrackOffroadWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiaTrackOffroadWheelFront() {}
// Cross Module References
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackOffroadWheelFront();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackOffroadWheelFront_NoRegister();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackWheelFront();
	UPackage* Z_Construct_UPackage__Script_ManiaTrack();
// End Cross Module References
	void UManiaTrackOffroadWheelFront::StaticRegisterNativesUManiaTrackOffroadWheelFront()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManiaTrackOffroadWheelFront);
	UClass* Z_Construct_UClass_UManiaTrackOffroadWheelFront_NoRegister()
	{
		return UManiaTrackOffroadWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UManiaTrackOffroadWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiaTrackOffroadWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManiaTrackWheelFront,
		(UObject* (*)())Z_Construct_UPackage__Script_ManiaTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackOffroadWheelFront_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiaTrackOffroadWheelFront_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "ManiaTrackOffroadWheelFront.h" },
		{ "ModuleRelativePath", "ManiaTrackOffroadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Offroad Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiaTrackOffroadWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManiaTrackOffroadWheelFront>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManiaTrackOffroadWheelFront_Statics::ClassParams = {
		&UManiaTrackOffroadWheelFront::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackOffroadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UManiaTrackOffroadWheelFront_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UManiaTrackOffroadWheelFront()
	{
		if (!Z_Registration_Info_UClass_UManiaTrackOffroadWheelFront.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManiaTrackOffroadWheelFront.OuterSingleton, Z_Construct_UClass_UManiaTrackOffroadWheelFront_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManiaTrackOffroadWheelFront.OuterSingleton;
	}
	template<> MANIATRACK_API UClass* StaticClass<UManiaTrackOffroadWheelFront>()
	{
		return UManiaTrackOffroadWheelFront::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiaTrackOffroadWheelFront);
	UManiaTrackOffroadWheelFront::~UManiaTrackOffroadWheelFront() {}
	struct Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelFront_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelFront_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManiaTrackOffroadWheelFront, UManiaTrackOffroadWheelFront::StaticClass, TEXT("UManiaTrackOffroadWheelFront"), &Z_Registration_Info_UClass_UManiaTrackOffroadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManiaTrackOffroadWheelFront), 2106203038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelFront_h_3766401529(TEXT("/Script/ManiaTrack"),
		Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelFront_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
