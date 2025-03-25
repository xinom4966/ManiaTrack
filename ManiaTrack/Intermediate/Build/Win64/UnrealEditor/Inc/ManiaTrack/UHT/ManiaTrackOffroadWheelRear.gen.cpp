// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManiaTrack/ManiaTrackOffroadWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiaTrackOffroadWheelRear() {}
// Cross Module References
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackOffroadWheelRear();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackOffroadWheelRear_NoRegister();
	MANIATRACK_API UClass* Z_Construct_UClass_UManiaTrackWheelRear();
	UPackage* Z_Construct_UPackage__Script_ManiaTrack();
// End Cross Module References
	void UManiaTrackOffroadWheelRear::StaticRegisterNativesUManiaTrackOffroadWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManiaTrackOffroadWheelRear);
	UClass* Z_Construct_UClass_UManiaTrackOffroadWheelRear_NoRegister()
	{
		return UManiaTrackOffroadWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UManiaTrackOffroadWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiaTrackOffroadWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManiaTrackWheelRear,
		(UObject* (*)())Z_Construct_UPackage__Script_ManiaTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackOffroadWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiaTrackOffroadWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "ManiaTrackOffroadWheelRear.h" },
		{ "ModuleRelativePath", "ManiaTrackOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiaTrackOffroadWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManiaTrackOffroadWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManiaTrackOffroadWheelRear_Statics::ClassParams = {
		&UManiaTrackOffroadWheelRear::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManiaTrackOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UManiaTrackOffroadWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UManiaTrackOffroadWheelRear()
	{
		if (!Z_Registration_Info_UClass_UManiaTrackOffroadWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManiaTrackOffroadWheelRear.OuterSingleton, Z_Construct_UClass_UManiaTrackOffroadWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManiaTrackOffroadWheelRear.OuterSingleton;
	}
	template<> MANIATRACK_API UClass* StaticClass<UManiaTrackOffroadWheelRear>()
	{
		return UManiaTrackOffroadWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiaTrackOffroadWheelRear);
	UManiaTrackOffroadWheelRear::~UManiaTrackOffroadWheelRear() {}
	struct Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManiaTrackOffroadWheelRear, UManiaTrackOffroadWheelRear::StaticClass, TEXT("UManiaTrackOffroadWheelRear"), &Z_Registration_Info_UClass_UManiaTrackOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManiaTrackOffroadWheelRear), 4142530407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelRear_h_1157962(TEXT("/Script/ManiaTrack"),
		Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackOffroadWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
