// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAGR_CombatManager;
class UAGR_SoundMaster;
class UAGRAnimMasterComponent;
class UAGR_EquipmentManager;
class UAGR_InventoryManager;
class UAGR_ItemComponent;
#ifdef AGRPRO_AGRLibrary_generated_h
#error "AGRLibrary.generated.h already included, missing '#pragma once' in AGRLibrary.h"
#endif
#define AGRPRO_AGRLibrary_generated_h

#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_SPARSE_DATA
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetCombatManager); \
	DECLARE_FUNCTION(execK2_GetSound); \
	DECLARE_FUNCTION(execK2_GetAnimationMaster); \
	DECLARE_FUNCTION(execK2_GetEquipment); \
	DECLARE_FUNCTION(execK2_GetInventory); \
	DECLARE_FUNCTION(execK2_GetItemComponent);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetCombatManager); \
	DECLARE_FUNCTION(execK2_GetSound); \
	DECLARE_FUNCTION(execK2_GetAnimationMaster); \
	DECLARE_FUNCTION(execK2_GetEquipment); \
	DECLARE_FUNCTION(execK2_GetInventory); \
	DECLARE_FUNCTION(execK2_GetItemComponent);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGRLibrary(); \
	friend struct Z_Construct_UClass_UAGRLibrary_Statics; \
public: \
	DECLARE_CLASS(UAGRLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGRLibrary)


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAGRLibrary(); \
	friend struct Z_Construct_UClass_UAGRLibrary_Statics; \
public: \
	DECLARE_CLASS(UAGRLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGRLibrary)


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGRLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGRLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGRLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGRLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGRLibrary(UAGRLibrary&&); \
	NO_API UAGRLibrary(const UAGRLibrary&); \
public:


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGRLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGRLibrary(UAGRLibrary&&); \
	NO_API UAGRLibrary(const UAGRLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGRLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGRLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGRLibrary)


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_14_PROLOG
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_RPC_WRAPPERS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_INCLASS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGRPRO_API UClass* StaticClass<class UAGRLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
