// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Data/AGRLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGRLibrary() {}
// Cross Module References
	AGRPRO_API UClass* Z_Construct_UClass_UAGRLibrary_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRAnimMasterComponent_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_CombatManager_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_EquipmentManager_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_InventoryManager_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_ItemComponent_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_SoundMaster_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAGRLibrary::execK2_GetCombatManager)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAGR_CombatManager**)Z_Param__Result=UAGRLibrary::K2_GetCombatManager(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRLibrary::execK2_GetSound)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAGR_SoundMaster**)Z_Param__Result=UAGRLibrary::K2_GetSound(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRLibrary::execK2_GetAnimationMaster)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAGRAnimMasterComponent**)Z_Param__Result=UAGRLibrary::K2_GetAnimationMaster(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRLibrary::execK2_GetEquipment)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAGR_EquipmentManager**)Z_Param__Result=UAGRLibrary::K2_GetEquipment(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRLibrary::execK2_GetInventory)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAGR_InventoryManager**)Z_Param__Result=UAGRLibrary::K2_GetInventory(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRLibrary::execK2_GetItemComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAGR_ItemComponent**)Z_Param__Result=UAGRLibrary::K2_GetItemComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UAGRLibrary::StaticRegisterNativesUAGRLibrary()
	{
		UClass* Class = UAGRLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_GetAnimationMaster", &UAGRLibrary::execK2_GetAnimationMaster },
			{ "K2_GetCombatManager", &UAGRLibrary::execK2_GetCombatManager },
			{ "K2_GetEquipment", &UAGRLibrary::execK2_GetEquipment },
			{ "K2_GetInventory", &UAGRLibrary::execK2_GetInventory },
			{ "K2_GetItemComponent", &UAGRLibrary::execK2_GetItemComponent },
			{ "K2_GetSound", &UAGRLibrary::execK2_GetSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics
	{
		struct AGRLibrary_eventK2_GetAnimationMaster_Parms
		{
			AActor* Actor;
			UAGRAnimMasterComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetAnimationMaster_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetAnimationMaster_Parms, ReturnValue), Z_Construct_UClass_UAGRAnimMasterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "DisplayName", "Get Animation Master" },
		{ "ModuleRelativePath", "Public/Data/AGRLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRLibrary, nullptr, "K2_GetAnimationMaster", nullptr, nullptr, sizeof(AGRLibrary_eventK2_GetAnimationMaster_Parms), Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics
	{
		struct AGRLibrary_eventK2_GetCombatManager_Parms
		{
			AActor* Actor;
			UAGR_CombatManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetCombatManager_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetCombatManager_Parms, ReturnValue), Z_Construct_UClass_UAGR_CombatManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "DisplayName", "Get Combat Manager" },
		{ "ModuleRelativePath", "Public/Data/AGRLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRLibrary, nullptr, "K2_GetCombatManager", nullptr, nullptr, sizeof(AGRLibrary_eventK2_GetCombatManager_Parms), Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics
	{
		struct AGRLibrary_eventK2_GetEquipment_Parms
		{
			AActor* Actor;
			UAGR_EquipmentManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetEquipment_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetEquipment_Parms, ReturnValue), Z_Construct_UClass_UAGR_EquipmentManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "DisplayName", "Get Equipment Manager" },
		{ "ModuleRelativePath", "Public/Data/AGRLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRLibrary, nullptr, "K2_GetEquipment", nullptr, nullptr, sizeof(AGRLibrary_eventK2_GetEquipment_Parms), Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics
	{
		struct AGRLibrary_eventK2_GetInventory_Parms
		{
			AActor* Actor;
			UAGR_InventoryManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetInventory_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetInventory_Parms, ReturnValue), Z_Construct_UClass_UAGR_InventoryManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "DisplayName", "Get Inventory" },
		{ "ModuleRelativePath", "Public/Data/AGRLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRLibrary, nullptr, "K2_GetInventory", nullptr, nullptr, sizeof(AGRLibrary_eventK2_GetInventory_Parms), Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRLibrary_K2_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRLibrary_K2_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics
	{
		struct AGRLibrary_eventK2_GetItemComponent_Parms
		{
			AActor* Actor;
			UAGR_ItemComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetItemComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetItemComponent_Parms, ReturnValue), Z_Construct_UClass_UAGR_ItemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "DisplayName", "Get Item Component" },
		{ "ModuleRelativePath", "Public/Data/AGRLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRLibrary, nullptr, "K2_GetItemComponent", nullptr, nullptr, sizeof(AGRLibrary_eventK2_GetItemComponent_Parms), Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics
	{
		struct AGRLibrary_eventK2_GetSound_Parms
		{
			AActor* Actor;
			UAGR_SoundMaster* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetSound_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRLibrary_eventK2_GetSound_Parms, ReturnValue), Z_Construct_UClass_UAGR_SoundMaster_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "DisplayName", "Get Sound Master" },
		{ "ModuleRelativePath", "Public/Data/AGRLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRLibrary, nullptr, "K2_GetSound", nullptr, nullptr, sizeof(AGRLibrary_eventK2_GetSound_Parms), Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRLibrary_K2_GetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRLibrary_K2_GetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAGRLibrary_NoRegister()
	{
		return UAGRLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAGRLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGRLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAGRLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGRLibrary_K2_GetAnimationMaster, "K2_GetAnimationMaster" }, // 1469131418
		{ &Z_Construct_UFunction_UAGRLibrary_K2_GetCombatManager, "K2_GetCombatManager" }, // 878425396
		{ &Z_Construct_UFunction_UAGRLibrary_K2_GetEquipment, "K2_GetEquipment" }, // 2780344751
		{ &Z_Construct_UFunction_UAGRLibrary_K2_GetInventory, "K2_GetInventory" }, // 34520110
		{ &Z_Construct_UFunction_UAGRLibrary_K2_GetItemComponent, "K2_GetItemComponent" }, // 3164220248
		{ &Z_Construct_UFunction_UAGRLibrary_K2_GetSound, "K2_GetSound" }, // 1179688252
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/AGRLibrary.h" },
		{ "ModuleRelativePath", "Public/Data/AGRLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGRLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGRLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGRLibrary_Statics::ClassParams = {
		&UAGRLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAGRLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGRLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGRLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGRLibrary, 55605140);
	template<> AGRPRO_API UClass* StaticClass<UAGRLibrary>()
	{
		return UAGRLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGRLibrary(Z_Construct_UClass_UAGRLibrary, &UAGRLibrary::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGRLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGRLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
