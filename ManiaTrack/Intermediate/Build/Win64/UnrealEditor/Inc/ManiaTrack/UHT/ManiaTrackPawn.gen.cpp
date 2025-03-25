// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManiaTrack/ManiaTrackPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiaTrackPawn() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackPawn();
	MANIATRACK_API UClass* Z_Construct_UClass_AManiaTrackPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ManiaTrack();
// End Cross Module References
	struct ManiaTrackPawn_eventBrakeLights_Parms
	{
		bool bBraking;
	};
	static FName NAME_AManiaTrackPawn_BrakeLights = FName(TEXT("BrakeLights"));
	void AManiaTrackPawn::BrakeLights(bool bBraking)
	{
		ManiaTrackPawn_eventBrakeLights_Parms Parms;
		Parms.bBraking=bBraking ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AManiaTrackPawn_BrakeLights),&Parms);
	}
	void AManiaTrackPawn::StaticRegisterNativesAManiaTrackPawn()
	{
	}
	struct Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics
	{
		static void NewProp_bBraking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBraking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::NewProp_bBraking_SetBit(void* Obj)
	{
		((ManiaTrackPawn_eventBrakeLights_Parms*)Obj)->bBraking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::NewProp_bBraking = { "bBraking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ManiaTrackPawn_eventBrakeLights_Parms), &Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::NewProp_bBraking_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::NewProp_bBraking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the brake lights are turned on or off */" },
#endif
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the brake lights are turned on or off" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AManiaTrackPawn, nullptr, "BrakeLights", nullptr, nullptr, Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::PropPointers), sizeof(ManiaTrackPawn_eventBrakeLights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::PropPointers) < 2048);
	static_assert(sizeof(ManiaTrackPawn_eventBrakeLights_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AManiaTrackPawn_BrakeLights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManiaTrackPawn_BrakeLights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManiaTrackPawn);
	UClass* Z_Construct_UClass_AManiaTrackPawn_NoRegister()
	{
		return AManiaTrackPawn::StaticClass();
	}
	struct Z_Construct_UClass_AManiaTrackPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrottleAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAroundAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAroundAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCameraAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleCameraAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetVehicleAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetVehicleAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManiaTrackPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ManiaTrack,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AManiaTrackPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AManiaTrackPawn_BrakeLights, "BrakeLights" }, // 3140182174
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Pawn class\n *  Handles common functionality for all vehicle types,\n *  including input handling and camera management.\n *  \n *  Specific vehicle configurations are handled in subclasses.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ManiaTrackPawn.h" },
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Pawn class\nHandles common functionality for all vehicle types,\nincluding input handling and camera management.\n\nSpecific vehicle configurations are handled in subclasses." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the front camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the front camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontSpringArm = { "FrontSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, FrontSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontSpringArm_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontSpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Front Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front Camera component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontCamera = { "FrontCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, FrontCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontCamera_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the back camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the back camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackSpringArm = { "BackSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, BackSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackSpringArm_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackSpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Back Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Back Camera component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackCamera = { "BackCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, BackCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackCamera_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_SteeringAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Steering Action */" },
#endif
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_SteeringAction = { "SteeringAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, SteeringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_SteeringAction_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_SteeringAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ThrottleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throttle Action */" },
#endif
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throttle Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ThrottleAction = { "ThrottleAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, ThrottleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ThrottleAction_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ThrottleAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Brake Action */" },
#endif
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brake Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BrakeAction = { "BrakeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, BrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BrakeAction_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BrakeAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_HandbrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handbrake Action */" },
#endif
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handbrake Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_HandbrakeAction = { "HandbrakeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, HandbrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_HandbrakeAction_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_HandbrakeAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_LookAroundAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Around Action */" },
#endif
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Around Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_LookAroundAction = { "LookAroundAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, LookAroundAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_LookAroundAction_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_LookAroundAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ToggleCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle Camera Action */" },
#endif
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle Camera Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ToggleCameraAction = { "ToggleCameraAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, ToggleCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ToggleCameraAction_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ToggleCameraAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ResetVehicleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset Vehicle Action */" },
#endif
		{ "ModuleRelativePath", "ManiaTrackPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset Vehicle Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ResetVehicleAction = { "ResetVehicleAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManiaTrackPawn, ResetVehicleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ResetVehicleAction_MetaData), Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ResetVehicleAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManiaTrackPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_FrontCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BackCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_SteeringAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ThrottleAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_BrakeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_HandbrakeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_LookAroundAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ToggleCameraAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManiaTrackPawn_Statics::NewProp_ResetVehicleAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManiaTrackPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManiaTrackPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManiaTrackPawn_Statics::ClassParams = {
		&AManiaTrackPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AManiaTrackPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AManiaTrackPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManiaTrackPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AManiaTrackPawn()
	{
		if (!Z_Registration_Info_UClass_AManiaTrackPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManiaTrackPawn.OuterSingleton, Z_Construct_UClass_AManiaTrackPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManiaTrackPawn.OuterSingleton;
	}
	template<> MANIATRACK_API UClass* StaticClass<AManiaTrackPawn>()
	{
		return AManiaTrackPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManiaTrackPawn);
	AManiaTrackPawn::~AManiaTrackPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManiaTrackPawn, AManiaTrackPawn::StaticClass, TEXT("AManiaTrackPawn"), &Z_Registration_Info_UClass_AManiaTrackPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManiaTrackPawn), 483187406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackPawn_h_4184392173(TEXT("/Script/ManiaTrack"),
		Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sddes_Documents_GitHub_ManiaTrack_ManiaTrack_Source_ManiaTrack_ManiaTrackPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
