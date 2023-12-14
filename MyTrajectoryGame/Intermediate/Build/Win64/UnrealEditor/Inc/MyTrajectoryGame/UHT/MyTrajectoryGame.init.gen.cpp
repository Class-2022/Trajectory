// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTrajectoryGame_init() {}
	MYTRAJECTORYGAME_API UFunction* Z_Construct_UDelegateFunction_MyTrajectoryGame_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyTrajectoryGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyTrajectoryGame()
	{
		if (!Z_Registration_Info_UPackage__Script_MyTrajectoryGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MyTrajectoryGame_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyTrajectoryGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x73ACA0B8,
				0x49EDF860,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyTrajectoryGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyTrajectoryGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyTrajectoryGame(Z_Construct_UPackage__Script_MyTrajectoryGame, TEXT("/Script/MyTrajectoryGame"), Z_Registration_Info_UPackage__Script_MyTrajectoryGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x73ACA0B8, 0x49EDF860));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
