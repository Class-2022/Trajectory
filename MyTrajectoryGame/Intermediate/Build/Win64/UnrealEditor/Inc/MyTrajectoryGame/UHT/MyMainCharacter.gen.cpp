// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTrajectoryGame/MyMainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMainCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MYTRAJECTORYGAME_API UClass* Z_Construct_UClass_AMyMainCharacter();
	MYTRAJECTORYGAME_API UClass* Z_Construct_UClass_AMyMainCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyTrajectoryGame();
// End Cross Module References
	void AMyMainCharacter::StaticRegisterNativesAMyMainCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMainCharacter);
	UClass* Z_Construct_UClass_AMyMainCharacter_NoRegister()
	{
		return AMyMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Precision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTrajectoryGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyMainCharacter.h" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_InitialSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_InitialSpeed = { "InitialSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMainCharacter, InitialSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_InitialSpeed_MetaData), Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_InitialSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMainCharacter, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Gravity_MetaData), Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Gravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "MyMainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMainCharacter, Precision), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Precision_MetaData), Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Precision_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_InitialSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMainCharacter_Statics::NewProp_Precision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMainCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMainCharacter_Statics::ClassParams = {
		&AMyMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMainCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMainCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyMainCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyMainCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMainCharacter.OuterSingleton, Z_Construct_UClass_AMyMainCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyMainCharacter.OuterSingleton;
	}
	template<> MYTRAJECTORYGAME_API UClass* StaticClass<AMyMainCharacter>()
	{
		return AMyMainCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMainCharacter);
	AMyMainCharacter::~AMyMainCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyMainCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyMainCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyMainCharacter, AMyMainCharacter::StaticClass, TEXT("AMyMainCharacter"), &Z_Registration_Info_UClass_AMyMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMainCharacter), 3293157308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyMainCharacter_h_2515936155(TEXT("/Script/MyTrajectoryGame"),
		Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyMainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyMainCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
