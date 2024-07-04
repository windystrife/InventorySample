// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGRPRO_AGRDebuggerController_generated_h
#error "AGRDebuggerController.generated.h already included, missing '#pragma once' in AGRDebuggerController.h"
#endif
#define AGRPRO_AGRDebuggerController_generated_h

#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_SPARSE_DATA
#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_RPC_WRAPPERS
#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGRDebuggerController(); \
	friend struct Z_Construct_UClass_UAGRDebuggerController_Statics; \
public: \
	DECLARE_CLASS(UAGRDebuggerController, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGRDebuggerController)


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAGRDebuggerController(); \
	friend struct Z_Construct_UClass_UAGRDebuggerController_Statics; \
public: \
	DECLARE_CLASS(UAGRDebuggerController, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGRDebuggerController)


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGRDebuggerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGRDebuggerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGRDebuggerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGRDebuggerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGRDebuggerController(UAGRDebuggerController&&); \
	NO_API UAGRDebuggerController(const UAGRDebuggerController&); \
public:


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGRDebuggerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGRDebuggerController(UAGRDebuggerController&&); \
	NO_API UAGRDebuggerController(const UAGRDebuggerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGRDebuggerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGRDebuggerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGRDebuggerController)


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_PRIVATE_PROPERTY_OFFSET
#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_29_PROLOG
#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_PRIVATE_PROPERTY_OFFSET \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_SPARSE_DATA \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_RPC_WRAPPERS \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_INCLASS \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_PRIVATE_PROPERTY_OFFSET \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_SPARSE_DATA \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_INCLASS_NO_PURE_DECLS \
	InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGRPRO_API UClass* StaticClass<class UAGRDebuggerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_UI_AGRDebuggerController_h


#define FOREACH_ENUM_EAGRDEBUGGERCATEGORIES(op) \
	op(EAGRDebuggerCategories::Custom) \
	op(EAGRDebuggerCategories::AnimState) \
	op(EAGRDebuggerCategories::AimOffset) \
	op(EAGRDebuggerCategories::Rotation) \
	op(EAGRDebuggerCategories::Runtime) \
	op(EAGRDebuggerCategories::Movement) \
	op(EAGRDebuggerCategories::State) \
	op(EAGRDebuggerCategories::Leans) \
	op(EAGRDebuggerCategories::Setup) 

enum class EAGRDebuggerCategories;
template<> AGRPRO_API UEnum* StaticEnum<EAGRDebuggerCategories>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
