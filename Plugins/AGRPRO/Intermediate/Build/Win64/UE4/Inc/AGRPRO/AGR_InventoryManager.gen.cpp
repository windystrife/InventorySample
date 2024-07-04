// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Components/AGR_InventoryManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGR_InventoryManager() {}
// Cross Module References
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_InventoryManager_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_InventoryManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnItemUpdated_Parms
		{
			AActor* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnItemUpdated_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnItemUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnItemUpdated_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAGR_InventoryManager::execHasExactItem)
	{
		P_GET_OBJECT(AActor,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasExactItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_InventoryManager::execAddItemToInventoryDirectly)
	{
		P_GET_OBJECT(AActor,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToInventoryDirectly(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_InventoryManager::execGetAllItemsOfTagSlotType)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_SlotTypeFilter);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutItemsWithTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllItemsOfTagSlotType(Z_Param_SlotTypeFilter,Z_Param_Out_OutItemsWithTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_InventoryManager::execHasEnoughItems)
	{
		P_GET_OBJECT(UClass,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEnoughItems(Z_Param_Item,Z_Param_Quantity,Z_Param_Out_OutNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_InventoryManager::execGetAllItemsOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutFilteredArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllItemsOfClass(Z_Param_Class,Z_Param_Out_OutFilteredArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_InventoryManager::execGetAllItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAllItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_InventoryManager::execRemoveItemsOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveItemsOfClass(Z_Param_Class,Z_Param_Quantity,Z_Param_Out_OutNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_InventoryManager::execAddItemsOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemsOfClass(Z_Param_Class,Z_Param_Quantity,Z_Param_Out_OutNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_InventoryManager::execOverwriteId)
	{
		P_GET_STRUCT(FGuid,Z_Param_InInventoryId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverwriteId(Z_Param_InInventoryId);
		P_NATIVE_END;
	}
	void UAGR_InventoryManager::StaticRegisterNativesUAGR_InventoryManager()
	{
		UClass* Class = UAGR_InventoryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemsOfClass", &UAGR_InventoryManager::execAddItemsOfClass },
			{ "AddItemToInventoryDirectly", &UAGR_InventoryManager::execAddItemToInventoryDirectly },
			{ "GetAllItems", &UAGR_InventoryManager::execGetAllItems },
			{ "GetAllItemsOfClass", &UAGR_InventoryManager::execGetAllItemsOfClass },
			{ "GetAllItemsOfTagSlotType", &UAGR_InventoryManager::execGetAllItemsOfTagSlotType },
			{ "HasEnoughItems", &UAGR_InventoryManager::execHasEnoughItems },
			{ "HasExactItem", &UAGR_InventoryManager::execHasExactItem },
			{ "OverwriteId", &UAGR_InventoryManager::execOverwriteId },
			{ "RemoveItemsOfClass", &UAGR_InventoryManager::execRemoveItemsOfClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics
	{
		struct AGR_InventoryManager_eventAddItemsOfClass_Parms
		{
			const TSubclassOf<AActor>  Class;
			int32 Quantity;
			FText OutNote;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutNote;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventAddItemsOfClass_Parms, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventAddItemsOfClass_Parms, Quantity), METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_OutNote = { "OutNote", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventAddItemsOfClass_Parms, OutNote), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_InventoryManager_eventAddItemsOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_InventoryManager_eventAddItemsOfClass_Parms), &Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_OutNote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "Comment", "/* Only works for stackable items */" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
		{ "ToolTip", "Only works for stackable items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_InventoryManager, nullptr, "AddItemsOfClass", nullptr, nullptr, sizeof(AGR_InventoryManager_eventAddItemsOfClass_Parms), Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics
	{
		struct AGR_InventoryManager_eventAddItemToInventoryDirectly_Parms
		{
			AActor* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventAddItemToInventoryDirectly_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_InventoryManager, nullptr, "AddItemToInventoryDirectly", nullptr, nullptr, sizeof(AGR_InventoryManager_eventAddItemToInventoryDirectly_Parms), Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics
	{
		struct AGR_InventoryManager_eventGetAllItems_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Items" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventGetAllItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_InventoryManager, nullptr, "GetAllItems", nullptr, nullptr, sizeof(AGR_InventoryManager_eventGetAllItems_Parms), Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics
	{
		struct AGR_InventoryManager_eventGetAllItemsOfClass_Parms
		{
			const TSubclassOf<AActor>  Class;
			TArray<AActor*> OutFilteredArray;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutFilteredArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutFilteredArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFilteredArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventGetAllItemsOfClass_Parms, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_OutFilteredArray_Inner = { "OutFilteredArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_OutFilteredArray_MetaData[] = {
		{ "DisplayName", "FilteredArray" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_OutFilteredArray = { "OutFilteredArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventGetAllItemsOfClass_Parms, OutFilteredArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_OutFilteredArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_OutFilteredArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Found" },
	};
#endif
	void Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_InventoryManager_eventGetAllItemsOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_InventoryManager_eventGetAllItemsOfClass_Parms), &Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_OutFilteredArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_OutFilteredArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_InventoryManager, nullptr, "GetAllItemsOfClass", nullptr, nullptr, sizeof(AGR_InventoryManager_eventGetAllItemsOfClass_Parms), Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics
	{
		struct AGR_InventoryManager_eventGetAllItemsOfTagSlotType_Parms
		{
			FGameplayTag SlotTypeFilter;
			TArray<AActor*> OutItemsWithTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotTypeFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotTypeFilter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutItemsWithTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutItemsWithTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_SlotTypeFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_SlotTypeFilter = { "SlotTypeFilter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventGetAllItemsOfTagSlotType_Parms, SlotTypeFilter), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_SlotTypeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_SlotTypeFilter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_OutItemsWithTag_Inner = { "OutItemsWithTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_OutItemsWithTag = { "OutItemsWithTag", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventGetAllItemsOfTagSlotType_Parms, OutItemsWithTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_InventoryManager_eventGetAllItemsOfTagSlotType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_InventoryManager_eventGetAllItemsOfTagSlotType_Parms), &Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_SlotTypeFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_OutItemsWithTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_OutItemsWithTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_InventoryManager, nullptr, "GetAllItemsOfTagSlotType", nullptr, nullptr, sizeof(AGR_InventoryManager_eventGetAllItemsOfTagSlotType_Parms), Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics
	{
		struct AGR_InventoryManager_eventHasEnoughItems_Parms
		{
			const TSubclassOf<AActor>  Item;
			int32 Quantity;
			FText OutNote;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutNote;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventHasEnoughItems_Parms, Item), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventHasEnoughItems_Parms, Quantity), METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_OutNote = { "OutNote", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventHasEnoughItems_Parms, OutNote), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_InventoryManager_eventHasEnoughItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_InventoryManager_eventHasEnoughItems_Parms), &Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_OutNote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "Comment", "//~ TODO \"FText& OutNote\" should be an enum to signal the actual outcome\n" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_InventoryManager, nullptr, "HasEnoughItems", nullptr, nullptr, sizeof(AGR_InventoryManager_eventHasEnoughItems_Parms), Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics
	{
		struct AGR_InventoryManager_eventHasExactItem_Parms
		{
			AActor* Item;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventHasExactItem_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_InventoryManager_eventHasExactItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_InventoryManager_eventHasExactItem_Parms), &Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_InventoryManager, nullptr, "HasExactItem", nullptr, nullptr, sizeof(AGR_InventoryManager_eventHasExactItem_Parms), Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics
	{
		struct AGR_InventoryManager_eventOverwriteId_Parms
		{
			FGuid InInventoryId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInventoryId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InInventoryId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::NewProp_InInventoryId_MetaData[] = {
		{ "DisplayName", "InventoryId" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::NewProp_InInventoryId = { "InInventoryId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventOverwriteId_Parms, InInventoryId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::NewProp_InInventoryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::NewProp_InInventoryId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::NewProp_InInventoryId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "Comment", "/* If you need to set inventory id to player's id or something and force change of id. ID i \"SaveGame\" serialized. */" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
		{ "ToolTip", "If you need to set inventory id to player's id or something and force change of id. ID i \"SaveGame\" serialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_InventoryManager, nullptr, "OverwriteId", nullptr, nullptr, sizeof(AGR_InventoryManager_eventOverwriteId_Parms), Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics
	{
		struct AGR_InventoryManager_eventRemoveItemsOfClass_Parms
		{
			const TSubclassOf<AActor>  Class;
			int32 Quantity;
			FText OutNote;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutNote;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventRemoveItemsOfClass_Parms, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventRemoveItemsOfClass_Parms, Quantity), METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_OutNote = { "OutNote", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_InventoryManager_eventRemoveItemsOfClass_Parms, OutNote), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_InventoryManager_eventRemoveItemsOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_InventoryManager_eventRemoveItemsOfClass_Parms), &Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_OutNote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "Comment", "//~ TODO \"FText& OutNote\" should be an enum to signal the actual outcome\n" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_InventoryManager, nullptr, "RemoveItemsOfClass", nullptr, nullptr, sizeof(AGR_InventoryManager_eventRemoveItemsOfClass_Parms), Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAGR_InventoryManager_NoRegister()
	{
		return UAGR_InventoryManager::StaticClass();
	}
	struct Z_Construct_UClass_UAGR_InventoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGR_InventoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAGR_InventoryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGR_InventoryManager_AddItemsOfClass, "AddItemsOfClass" }, // 2423463530
		{ &Z_Construct_UFunction_UAGR_InventoryManager_AddItemToInventoryDirectly, "AddItemToInventoryDirectly" }, // 3593921099
		{ &Z_Construct_UFunction_UAGR_InventoryManager_GetAllItems, "GetAllItems" }, // 3342436902
		{ &Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfClass, "GetAllItemsOfClass" }, // 2491834764
		{ &Z_Construct_UFunction_UAGR_InventoryManager_GetAllItemsOfTagSlotType, "GetAllItemsOfTagSlotType" }, // 636581027
		{ &Z_Construct_UFunction_UAGR_InventoryManager_HasEnoughItems, "HasEnoughItems" }, // 2673581343
		{ &Z_Construct_UFunction_UAGR_InventoryManager_HasExactItem, "HasExactItem" }, // 1099954667
		{ &Z_Construct_UFunction_UAGR_InventoryManager_OverwriteId, "OverwriteId" }, // 2822064515
		{ &Z_Construct_UFunction_UAGR_InventoryManager_RemoveItemsOfClass, "RemoveItemsOfClass" }, // 2277247290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_InventoryManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AGR" },
		{ "IncludePath", "Components/AGR_InventoryManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryId_MetaData[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000001000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_InventoryManager, InventoryId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryStorage_MetaData[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryStorage = { "InventoryStorage", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_InventoryManager, InventoryStorage), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
	};
#endif
	void Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UAGR_InventoryManager*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGR_InventoryManager), &Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_OnItemUpdated_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "Comment", "// Called whenever an item is updated inside the inventory.\n" },
		{ "ModuleRelativePath", "Public/Components/AGR_InventoryManager.h" },
		{ "ToolTip", "Called whenever an item is updated inside the inventory." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_OnItemUpdated = { "OnItemUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_InventoryManager, OnItemUpdated), Z_Construct_UDelegateFunction_AGRPRO_OnItemUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_OnItemUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_OnItemUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGR_InventoryManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_InventoryStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_InventoryManager_Statics::NewProp_OnItemUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGR_InventoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGR_InventoryManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGR_InventoryManager_Statics::ClassParams = {
		&UAGR_InventoryManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAGR_InventoryManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_InventoryManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAGR_InventoryManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_InventoryManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGR_InventoryManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGR_InventoryManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGR_InventoryManager, 522870751);
	template<> AGRPRO_API UClass* StaticClass<UAGR_InventoryManager>()
	{
		return UAGR_InventoryManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGR_InventoryManager(Z_Construct_UClass_UAGR_InventoryManager, &UAGR_InventoryManager::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGR_InventoryManager"), false, nullptr, nullptr, nullptr);

	void UAGR_InventoryManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InventoryId(TEXT("InventoryId"));
		static const FName Name_InventoryStorage(TEXT("InventoryStorage"));

		const bool bIsValid = true
			&& Name_InventoryId == ClassReps[(int32)ENetFields_Private::InventoryId].Property->GetFName()
			&& Name_InventoryStorage == ClassReps[(int32)ENetFields_Private::InventoryStorage].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAGR_InventoryManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGR_InventoryManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
