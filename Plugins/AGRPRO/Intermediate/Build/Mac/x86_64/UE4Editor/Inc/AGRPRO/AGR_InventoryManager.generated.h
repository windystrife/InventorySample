// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTag;
struct FGuid;
#ifdef AGRPRO_AGR_InventoryManager_generated_h
#error "AGR_InventoryManager.generated.h already included, missing '#pragma once' in AGR_InventoryManager.h"
#endif
#define AGRPRO_AGR_InventoryManager_generated_h

#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_10_DELEGATE \
struct _Script_AGRPRO_eventOnItemUpdated_Parms \
{ \
	AActor* Item; \
}; \
static inline void FOnItemUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnItemUpdated, AActor* Item) \
{ \
	_Script_AGRPRO_eventOnItemUpdated_Parms Parms; \
	Parms.Item=Item; \
	OnItemUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_SPARSE_DATA
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasExactItem); \
	DECLARE_FUNCTION(execAddItemToInventoryDirectly); \
	DECLARE_FUNCTION(execGetAllItemsOfTagSlotType); \
	DECLARE_FUNCTION(execHasEnoughItems); \
	DECLARE_FUNCTION(execGetAllItemsOfClass); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execRemoveItemsOfClass); \
	DECLARE_FUNCTION(execAddItemsOfClass); \
	DECLARE_FUNCTION(execOverwriteId);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasExactItem); \
	DECLARE_FUNCTION(execAddItemToInventoryDirectly); \
	DECLARE_FUNCTION(execGetAllItemsOfTagSlotType); \
	DECLARE_FUNCTION(execHasEnoughItems); \
	DECLARE_FUNCTION(execGetAllItemsOfClass); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execRemoveItemsOfClass); \
	DECLARE_FUNCTION(execAddItemsOfClass); \
	DECLARE_FUNCTION(execOverwriteId);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGR_InventoryManager(); \
	friend struct Z_Construct_UClass_UAGR_InventoryManager_Statics; \
public: \
	DECLARE_CLASS(UAGR_InventoryManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_InventoryManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryId=NETFIELD_REP_START, \
		InventoryStorage, \
		NETFIELD_REP_END=InventoryStorage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAGR_InventoryManager(); \
	friend struct Z_Construct_UClass_UAGR_InventoryManager_Statics; \
public: \
	DECLARE_CLASS(UAGR_InventoryManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_InventoryManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryId=NETFIELD_REP_START, \
		InventoryStorage, \
		NETFIELD_REP_END=InventoryStorage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGR_InventoryManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGR_InventoryManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_InventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_InventoryManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_InventoryManager(UAGR_InventoryManager&&); \
	NO_API UAGR_InventoryManager(const UAGR_InventoryManager&); \
public:


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_InventoryManager(UAGR_InventoryManager&&); \
	NO_API UAGR_InventoryManager(const UAGR_InventoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_InventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_InventoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGR_InventoryManager)


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_12_PROLOG
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_RPC_WRAPPERS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_INCLASS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGRPRO_API UClass* StaticClass<class UAGR_InventoryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_InventoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
