// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FEquipment;
#ifdef AGRPRO_AGR_EquipmentManager_generated_h
#error "AGR_EquipmentManager.generated.h already included, missing '#pragma once' in AGR_EquipmentManager.h"
#endif
#define AGRPRO_AGR_EquipmentManager_generated_h

#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_SPARSE_DATA
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetShortcutReference); \
	DECLARE_FUNCTION(execSaveShortcutReference); \
	DECLARE_FUNCTION(execGetItemInSlot); \
	DECLARE_FUNCTION(execUnEquipByReference); \
	DECLARE_FUNCTION(execUnEquipItemFromSlot); \
	DECLARE_FUNCTION(execSetupDefineSlots); \
	DECLARE_FUNCTION(execEquipItemInSlot); \
	DECLARE_FUNCTION(execGetAllItems);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShortcutReference); \
	DECLARE_FUNCTION(execSaveShortcutReference); \
	DECLARE_FUNCTION(execGetItemInSlot); \
	DECLARE_FUNCTION(execUnEquipByReference); \
	DECLARE_FUNCTION(execUnEquipItemFromSlot); \
	DECLARE_FUNCTION(execSetupDefineSlots); \
	DECLARE_FUNCTION(execEquipItemInSlot); \
	DECLARE_FUNCTION(execGetAllItems);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGR_EquipmentManager(); \
	friend struct Z_Construct_UClass_UAGR_EquipmentManager_Statics; \
public: \
	DECLARE_CLASS(UAGR_EquipmentManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_EquipmentManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentList=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquipmentList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAGR_EquipmentManager(); \
	friend struct Z_Construct_UClass_UAGR_EquipmentManager_Statics; \
public: \
	DECLARE_CLASS(UAGR_EquipmentManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_EquipmentManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentList=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquipmentList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGR_EquipmentManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGR_EquipmentManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_EquipmentManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_EquipmentManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_EquipmentManager(UAGR_EquipmentManager&&); \
	NO_API UAGR_EquipmentManager(const UAGR_EquipmentManager&); \
public:


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_EquipmentManager(UAGR_EquipmentManager&&); \
	NO_API UAGR_EquipmentManager(const UAGR_EquipmentManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_EquipmentManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_EquipmentManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGR_EquipmentManager)


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_12_PROLOG
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_RPC_WRAPPERS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_INCLASS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGRPRO_API UClass* StaticClass<class UAGR_EquipmentManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_EquipmentManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
