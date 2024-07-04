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
class UAGR_InventoryManager;
#ifdef AGRPRO_AGR_ItemComponent_generated_h
#error "AGR_ItemComponent.generated.h already included, missing '#pragma once' in AGR_ItemComponent.h"
#endif
#define AGRPRO_AGR_ItemComponent_generated_h

#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_27_DELEGATE \
static inline void FOnDestroy_DelegateWrapper(const FMulticastScriptDelegate& OnDestroy) \
{ \
	OnDestroy.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_25_DELEGATE \
struct _Script_AGRPRO_eventOnUnEquip_Parms \
{ \
	AActor* User; \
	FName SlotName; \
}; \
static inline void FOnUnEquip_DelegateWrapper(const FMulticastScriptDelegate& OnUnEquip, AActor* User, FName SlotName) \
{ \
	_Script_AGRPRO_eventOnUnEquip_Parms Parms; \
	Parms.User=User; \
	Parms.SlotName=SlotName; \
	OnUnEquip.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_23_DELEGATE \
struct _Script_AGRPRO_eventOnEquip_Parms \
{ \
	AActor* User; \
	FName SlotName; \
}; \
static inline void FOnEquip_DelegateWrapper(const FMulticastScriptDelegate& OnEquip, AActor* User, FName SlotName) \
{ \
	_Script_AGRPRO_eventOnEquip_Parms Parms; \
	Parms.User=User; \
	Parms.SlotName=SlotName; \
	OnEquip.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_21_DELEGATE \
struct _Script_AGRPRO_eventOnItemUsed_Parms \
{ \
	AActor* User; \
	FGameplayTag GameplayTag; \
}; \
static inline void FOnItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnItemUsed, AActor* User, FGameplayTag GameplayTag) \
{ \
	_Script_AGRPRO_eventOnItemUsed_Parms Parms; \
	Parms.User=User; \
	Parms.GameplayTag=GameplayTag; \
	OnItemUsed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_19_DELEGATE \
static inline void FOnItemDropped_DelegateWrapper(const FMulticastScriptDelegate& OnItemDropped) \
{ \
	OnItemDropped.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_17_DELEGATE \
struct _Script_AGRPRO_eventOnHiddenShown_Parms \
{ \
	bool bHidden; \
}; \
static inline void FOnHiddenShown_DelegateWrapper(const FMulticastScriptDelegate& OnHiddenShown, bool bHidden) \
{ \
	_Script_AGRPRO_eventOnHiddenShown_Parms Parms; \
	Parms.bHidden=bHidden ? true : false; \
	OnHiddenShown.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_15_DELEGATE \
struct _Script_AGRPRO_eventOnSplitStack_Parms \
{ \
	AActor* NewItem; \
}; \
static inline void FOnSplitStack_DelegateWrapper(const FMulticastScriptDelegate& OnSplitStack, AActor* NewItem) \
{ \
	_Script_AGRPRO_eventOnSplitStack_Parms Parms; \
	Parms.NewItem=NewItem; \
	OnSplitStack.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_13_DELEGATE \
struct _Script_AGRPRO_eventOnPickup_Parms \
{ \
	UAGR_InventoryManager* Inventory; \
}; \
static inline void FOnPickup_DelegateWrapper(const FMulticastScriptDelegate& OnPickup, UAGR_InventoryManager* Inventory) \
{ \
	_Script_AGRPRO_eventOnPickup_Parms Parms; \
	Parms.Inventory=Inventory; \
	OnPickup.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_SPARSE_DATA
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyItem); \
	DECLARE_FUNCTION(execSplitItems); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execPickUpItem);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyItem); \
	DECLARE_FUNCTION(execSplitItems); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execPickUpItem);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGR_ItemComponent(); \
	friend struct Z_Construct_UClass_UAGR_ItemComponent_Statics; \
public: \
	DECLARE_CLASS(UAGR_ItemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_ItemComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemId=NETFIELD_REP_START, \
		InventoryId, \
		OwnerId, \
		bStackable, \
		MaxStack, \
		CurrentStack, \
		Weight, \
		Volume, \
		SpaceSlots, \
		ItemName, \
		bSimulateWhenDropped, \
		ItemTagSlotType, \
		NETFIELD_REP_END=ItemTagSlotType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAGR_ItemComponent(); \
	friend struct Z_Construct_UClass_UAGR_ItemComponent_Statics; \
public: \
	DECLARE_CLASS(UAGR_ItemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGR_ItemComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemId=NETFIELD_REP_START, \
		InventoryId, \
		OwnerId, \
		bStackable, \
		MaxStack, \
		CurrentStack, \
		Weight, \
		Volume, \
		SpaceSlots, \
		ItemName, \
		bSimulateWhenDropped, \
		ItemTagSlotType, \
		NETFIELD_REP_END=ItemTagSlotType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGR_ItemComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGR_ItemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_ItemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_ItemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_ItemComponent(UAGR_ItemComponent&&); \
	NO_API UAGR_ItemComponent(const UAGR_ItemComponent&); \
public:


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGR_ItemComponent(UAGR_ItemComponent&&); \
	NO_API UAGR_ItemComponent(const UAGR_ItemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGR_ItemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGR_ItemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGR_ItemComponent)


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_29_PROLOG
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_RPC_WRAPPERS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_INCLASS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGRPRO_API UClass* StaticClass<class UAGR_ItemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGR_ItemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
