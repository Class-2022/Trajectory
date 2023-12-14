// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTrajectoryGameProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYTRAJECTORYGAME_MyTrajectoryGameProjectile_generated_h
#error "MyTrajectoryGameProjectile.generated.h already included, missing '#pragma once' in MyTrajectoryGameProjectile.h"
#endif
#define MYTRAJECTORYGAME_MyTrajectoryGameProjectile_generated_h

#define FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_SPARSE_DATA
#define FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_ACCESSORS
#define FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTrajectoryGameProjectile(); \
	friend struct Z_Construct_UClass_AMyTrajectoryGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyTrajectoryGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTrajectoryGame"), NO_API) \
	DECLARE_SERIALIZER(AMyTrajectoryGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTrajectoryGameProjectile(AMyTrajectoryGameProjectile&&); \
	NO_API AMyTrajectoryGameProjectile(const AMyTrajectoryGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTrajectoryGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTrajectoryGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTrajectoryGameProjectile) \
	NO_API virtual ~AMyTrajectoryGameProjectile();


#define FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_12_PROLOG
#define FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_SPARSE_DATA \
	FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_ACCESSORS \
	FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTRAJECTORYGAME_API UClass* StaticClass<class AMyTrajectoryGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_black_Documents_Unreal_Projects_MyTrajectoryGame_Source_MyTrajectoryGame_MyTrajectoryGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
