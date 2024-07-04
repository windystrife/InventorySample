// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UPrimitiveComponent;
class AActor;
enum class EAGR_CombatColliderType : uint8;
#ifdef AGRPRO_AGR_CombatManager_generated_h
#error "AGR_CombatManager.generated.h already included, missing '#pragma once' in AGR_CombatManager.h"
#endif
#define AGRPRO_AGR_CombatManager_generated_h

#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_14_DELEGATE \
static inline void FOnEndAttack_DelegateWrapper(const FMulticastScriptDelegate& OnEndAttack) \
{ \
	OnEndAttack.ProcessMulticastDelegate<UObject>(NULL); \
}


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_12_DELEGATE \
static inline void FOnStartAttack_DelegateWrapper(const FMulticastScriptDelegate& OnStartAttack) \
{ \
	OnStartAttack.ProcessMulticastDelegate<UObject>(NULL); \
}


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_10_DELEGATE \
struct _Script_AGRPRO_eventOnAttackHitEvent_Parms \
{ \
	FHitResult Hit; \
	UPrimitiveComponent* Mesh; \
}; \
static inline void FOnAttackHitEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAttackHitEvent, FHitResult Hit, UPrimitiveComponent* Mesh) \
{ \
	_Script_AGRPRO_eventOnAttackHitEvent_Parms Parms; \
	Parms.Hit=Hit; \
	Parms.Mesh=Mesh; \
	OnAttackHitEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_SPARSE_DATA
#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllWeapons); \
	DECLARE_FUNCTION(execRefreshIgnoredActors); \
	DECLARE_FUNCTION(execClearAllMeshes); \
	DECLARE_FUNCTION(execRemoveTraceMesh); \
	DECLARE_FUNCTION(execAddTraceMesh); \
	DECLARE_FUNCTION(execSetupDebug); \
	DECLARE_FUNCTION(execEndTrace); \
	DECLARE_FUNCTION(execStartTrace);


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllWeapons); \
	DECLARE_FUNCTION(execRefreshIgnoredActors); \
	DECLARE_FUNCTION(execClearAllMeshes); \
	DECLARE_FUNCTION(execRemoveTraceMesh); \
	DECLARE_FUNCTION(execAddTraceMesh); \
	DECLARE_FUNCTION(execSetupDebug); \
	DECLARE_FUNCTION(execEndTrace); \
	DECLARE_FUNCTION(execStartTrace);


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGR_CombatManager(); \
	friend struct Z_Construct_UClass_UAGR_CombatManager_Statics; \
public: \
	DECLARE_CLASS(UAGR_CombatManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_CombatManager)


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAGR_CombatManager(); \
	friend struct Z_Construct_UClass_UAGR_CombatManager_Statics; \
public: \
	DECLARE_CLASS(UAGR_CombatManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_CombatManager)


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGR_CombatManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGR_CombatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_CombatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_CombatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_CombatManager(UAGR_CombatManager&&); \
	NO_API UAGR_CombatManager(const UAGR_CombatManager&); \
public:


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_CombatManager(UAGR_CombatManager&&); \
	NO_API UAGR_CombatManager(const UAGR_CombatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_CombatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_CombatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGR_CombatManager)


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackedMeshes() { return STRUCT_OFFSET(UAGR_CombatManager, TrackedMeshes); } \
	FORCEINLINE static uint32 __PPO__IgnoredActors() { return STRUCT_OFFSET(UAGR_CombatManager, IgnoredActors); } \
	FORCEINLINE static uint32 __PPO__PreviousStarts() { return STRUCT_OFFSET(UAGR_CombatManager, PreviousStarts); } \
	FORCEINLINE static uint32 __PPO__PreviousEnds() { return STRUCT_OFFSET(UAGR_CombatManager, PreviousEnds); }


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_16_PROLOG
#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_PRIVATE_PROPERTY_OFFSET \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_SPARSE_DATA \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_RPC_WRAPPERS \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_INCLASS \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_PRIVATE_PROPERTY_OFFSET \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_SPARSE_DATA \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_INCLASS_NO_PURE_DECLS \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGRPRO_API UClass* StaticClass<class UAGR_CombatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_CombatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
