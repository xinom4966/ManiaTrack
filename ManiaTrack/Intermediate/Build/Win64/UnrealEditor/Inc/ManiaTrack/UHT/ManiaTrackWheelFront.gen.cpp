// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManiaTrack/ManiaTrackWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiaTrackWheelFront() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackWheelFront();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackWheelFront_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ManiaTrack();
// End Cross Module References
	void UManiaTrackWheelFront::StaticRegisterNativesUManiaTrackWheelFront()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManiaTrackWheelFront);
	UClass* Z_Construct_UClass_UManiaTrackWheelFront_NoRegister()
	{
		return UManiaTrackWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UManiaTrackWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiaTrackWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_ManiaTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackWheelFront_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiaTrackWheelFront_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "ManiaTrackWheelFront.h" },
		{ "ModuleRelativePath", "ManiaTrackWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiaTrackWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManiaTrackWheelFront>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManiaTrackWheelFront_Statics::ClassParams = {
		&UManiaTrackWheelFront::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UManiaTrackWheelFront_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UManiaTrackWheelFront()
	{
		if (!Z_Registration_Info_UClass_UManiaTrackWheelFront.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManiaTrackWheelFront.OuterSingleton, Z_Construct_UClass_UManiaTrackWheelFront_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManiaTrackWheelFront.OuterSingleton;
	}
	template<> MANIATRACK_API UClass* StaticClass<UManiaTrackWheelFront>()
	{
		return UManiaTrackWheelFront::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiaTrackWheelFront);
	UManiaTrackWheelFront::~UManiaTrackWheelFront() {}
	struct Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackWheelFront_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackWheelFront_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManiaTrackWheelFront, UManiaTrackWheelFront::StaticClass, TEXT("UManiaTrackWheelFront"), &Z_Registration_Info_UClass_UManiaTrackWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManiaTrackWheelFront), 3999227755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackWheelFront_h_4246529665(TEXT("/Script/ManiaTrack"),
		Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackWheelFront_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
