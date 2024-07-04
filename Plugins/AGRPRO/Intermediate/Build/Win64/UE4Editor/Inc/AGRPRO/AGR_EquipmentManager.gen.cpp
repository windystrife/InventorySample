// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Components/AGR_EquipmentManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGR_EquipmentManager() {}
// Cross Module References
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_EquipmentManager_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_EquipmentManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AGRPRO_API UScriptStruct* Z_Construct_UScriptStruct_FEquipment();
// End Cross Module References
	DEFINE_FUNCTION(UAGR_EquipmentManager::execGetShortcutReference)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_OutActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShortcutReference(Z_Param_Key,Z_Param_Out_OutActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_EquipmentManager::execSaveShortcutReference)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_OBJECT(AActor,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveShortcutReference(Z_Param_Key,Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_EquipmentManager::execGetItemInSlot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Slot);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_OutItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemInSlot(Z_Param_Slot,Z_Param_Out_OutItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_EquipmentManager::execUnEquipByReference)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemActor);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnEquipByReference(Z_Param_ItemActor,Z_Param_Out_OutNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_EquipmentManager::execUnEquipItemFromSlot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Slot);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_OutItemUnequipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnEquipItemFromSlot(Z_Param_Slot,Z_Param_Out_OutItemUnequipped);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_EquipmentManager::execSetupDefineSlots)
	{
		P_GET_TARRAY(FEquipment,Z_Param_InEquipmentList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupDefineSlots(Z_Param_InEquipmentList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_EquipmentManager::execEquipItemInSlot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Slot);
		P_GET_OBJECT(AActor,Z_Param_ItemActor);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_OutPreviousItem);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_OutNewItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EquipItemInSlot(Z_Param_Slot,Z_Param_ItemActor,Z_Param_Out_OutPreviousItem,Z_Param_Out_OutNewItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_EquipmentManager::execGetAllItems)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllItems(Z_Param_Out_OutItems);
		P_NATIVE_END;
	}
	void UAGR_EquipmentManager::StaticRegisterNativesUAGR_EquipmentManager()
	{
		UClass* Class = UAGR_EquipmentManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipItemInSlot", &UAGR_EquipmentManager::execEquipItemInSlot },
			{ "GetAllItems", &UAGR_EquipmentManager::execGetAllItems },
			{ "GetItemInSlot", &UAGR_EquipmentManager::execGetItemInSlot },
			{ "GetShortcutReference", &UAGR_EquipmentManager::execGetShortcutReference },
			{ "SaveShortcutReference", &UAGR_EquipmentManager::execSaveShortcutReference },
			{ "SetupDefineSlots", &UAGR_EquipmentManager::execSetupDefineSlots },
			{ "UnEquipByReference", &UAGR_EquipmentManager::execUnEquipByReference },
			{ "UnEquipItemFromSlot", &UAGR_EquipmentManager::execUnEquipItemFromSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics
	{
		struct AGR_EquipmentManager_eventEquipItemInSlot_Parms
		{
			FName Slot;
			AActor* ItemActor;
			AActor* OutPreviousItem;
			AActor* OutNewItem;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPreviousItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutPreviousItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutNewItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutNewItem;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventEquipItemInSlot_Parms, Slot), METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_ItemActor = { "ItemActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventEquipItemInSlot_Parms, ItemActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutPreviousItem_MetaData[] = {
		{ "DisplayName", "PreviousItem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutPreviousItem = { "OutPreviousItem", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventEquipItemInSlot_Parms, OutPreviousItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutPreviousItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutPreviousItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutNewItem_MetaData[] = {
		{ "DisplayName", "NewItem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutNewItem = { "OutNewItem", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventEquipItemInSlot_Parms, OutNewItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutNewItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutNewItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_EquipmentManager_eventEquipItemInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_EquipmentManager_eventEquipItemInSlot_Parms), &Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_ItemActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutPreviousItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_OutNewItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "Comment", "/**\n     * Equips an item in the specific slot.\n     *\n     * Before executing equip action, the following conditions will be checked:\n     * 1) Slot exists\n     * 2) New item is an item\n     * 3) Tag is acceptable in this slot\n     */" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
		{ "ToolTip", "Equips an item in the specific slot.\n\nBefore executing equip action, the following conditions will be checked:\n1) Slot exists\n2) New item is an item\n3) Tag is acceptable in this slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_EquipmentManager, nullptr, "EquipItemInSlot", nullptr, nullptr, sizeof(AGR_EquipmentManager_eventEquipItemInSlot_Parms), Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics
	{
		struct AGR_EquipmentManager_eventGetAllItems_Parms
		{
			TArray<AActor*> OutItems;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutItems;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_OutItems_Inner = { "OutItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_OutItems_MetaData[] = {
		{ "DisplayName", "Items" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_OutItems = { "OutItems", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventGetAllItems_Parms, OutItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_OutItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_OutItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Has Items" },
	};
#endif
	void Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_EquipmentManager_eventGetAllItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_EquipmentManager_eventGetAllItems_Parms), &Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_OutItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_OutItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_EquipmentManager, nullptr, "GetAllItems", nullptr, nullptr, sizeof(AGR_EquipmentManager_eventGetAllItems_Parms), Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics
	{
		struct AGR_EquipmentManager_eventGetItemInSlot_Parms
		{
			FName Slot;
			AActor* OutItem;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutItem;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventGetItemInSlot_Parms, Slot), METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_OutItem_MetaData[] = {
		{ "DisplayName", "Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_OutItem = { "OutItem", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventGetItemInSlot_Parms, OutItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_OutItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_OutItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_EquipmentManager_eventGetItemInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_EquipmentManager_eventGetItemInSlot_Parms), &Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_OutItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_EquipmentManager, nullptr, "GetItemInSlot", nullptr, nullptr, sizeof(AGR_EquipmentManager_eventGetItemInSlot_Parms), Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics
	{
		struct AGR_EquipmentManager_eventGetShortcutReference_Parms
		{
			FName Key;
			AActor* OutActor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActor;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventGetShortcutReference_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_OutActor_MetaData[] = {
		{ "DisplayName", "Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventGetShortcutReference_Parms, OutActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_OutActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_OutActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Found" },
	};
#endif
	void Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_EquipmentManager_eventGetShortcutReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_EquipmentManager_eventGetShortcutReference_Parms), &Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_OutActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_EquipmentManager, nullptr, "GetShortcutReference", nullptr, nullptr, sizeof(AGR_EquipmentManager_eventGetShortcutReference_Parms), Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics
	{
		struct AGR_EquipmentManager_eventSaveShortcutReference_Parms
		{
			FName Key;
			AActor* Item;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventSaveShortcutReference_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventSaveShortcutReference_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_EquipmentManager, nullptr, "SaveShortcutReference", nullptr, nullptr, sizeof(AGR_EquipmentManager_eventSaveShortcutReference_Parms), Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics
	{
		struct AGR_EquipmentManager_eventSetupDefineSlots_Parms
		{
			TArray<FEquipment> InEquipmentList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEquipmentList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEquipmentList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InEquipmentList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::NewProp_InEquipmentList_Inner = { "InEquipmentList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEquipment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::NewProp_InEquipmentList_MetaData[] = {
		{ "DisplayName", "Equipment" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::NewProp_InEquipmentList = { "InEquipmentList", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventSetupDefineSlots_Parms, InEquipmentList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::NewProp_InEquipmentList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::NewProp_InEquipmentList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::NewProp_InEquipmentList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::NewProp_InEquipmentList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "Comment", "/* Names need to be unique */" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
		{ "ToolTip", "Names need to be unique" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_EquipmentManager, nullptr, "SetupDefineSlots", nullptr, nullptr, sizeof(AGR_EquipmentManager_eventSetupDefineSlots_Parms), Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics
	{
		struct AGR_EquipmentManager_eventUnEquipByReference_Parms
		{
			AActor* ItemActor;
			FText OutNote;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutNote_MetaData[];
#endif
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_ItemActor = { "ItemActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventUnEquipByReference_Parms, ItemActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_OutNote_MetaData[] = {
		{ "DisplayName", "Note" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_OutNote = { "OutNote", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventUnEquipByReference_Parms, OutNote), METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_OutNote_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_OutNote_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_EquipmentManager_eventUnEquipByReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_EquipmentManager_eventUnEquipByReference_Parms), &Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_ItemActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_OutNote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "Comment", "//~ TODO \"FText& OutNote\" should be an enum to signal the actual outcome\n" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_EquipmentManager, nullptr, "UnEquipByReference", nullptr, nullptr, sizeof(AGR_EquipmentManager_eventUnEquipByReference_Parms), Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics
	{
		struct AGR_EquipmentManager_eventUnEquipItemFromSlot_Parms
		{
			FName Slot;
			AActor* OutItemUnequipped;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutItemUnequipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutItemUnequipped;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventUnEquipItemFromSlot_Parms, Slot), METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_OutItemUnequipped_MetaData[] = {
		{ "DisplayName", "ItemUnequipped" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_OutItemUnequipped = { "OutItemUnequipped", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_EquipmentManager_eventUnEquipItemFromSlot_Parms, OutItemUnequipped), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_OutItemUnequipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_OutItemUnequipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_EquipmentManager_eventUnEquipItemFromSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_EquipmentManager_eventUnEquipItemFromSlot_Parms), &Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_OutItemUnequipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_EquipmentManager, nullptr, "UnEquipItemFromSlot", nullptr, nullptr, sizeof(AGR_EquipmentManager_eventUnEquipItemFromSlot_Parms), Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAGR_EquipmentManager_NoRegister()
	{
		return UAGR_EquipmentManager::StaticClass();
	}
	struct Z_Construct_UClass_UAGR_EquipmentManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquipmentList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_References_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_References_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_References_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_References;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGR_EquipmentManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAGR_EquipmentManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGR_EquipmentManager_EquipItemInSlot, "EquipItemInSlot" }, // 2706670642
		{ &Z_Construct_UFunction_UAGR_EquipmentManager_GetAllItems, "GetAllItems" }, // 2759203040
		{ &Z_Construct_UFunction_UAGR_EquipmentManager_GetItemInSlot, "GetItemInSlot" }, // 1234122304
		{ &Z_Construct_UFunction_UAGR_EquipmentManager_GetShortcutReference, "GetShortcutReference" }, // 3710330475
		{ &Z_Construct_UFunction_UAGR_EquipmentManager_SaveShortcutReference, "SaveShortcutReference" }, // 2932666791
		{ &Z_Construct_UFunction_UAGR_EquipmentManager_SetupDefineSlots, "SetupDefineSlots" }, // 4250576025
		{ &Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipByReference, "UnEquipByReference" }, // 2583575784
		{ &Z_Construct_UFunction_UAGR_EquipmentManager_UnEquipItemFromSlot, "UnEquipItemFromSlot" }, // 4103616907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_EquipmentManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AGR" },
		{ "IncludePath", "Components/AGR_EquipmentManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_EquipmentList_Inner = { "EquipmentList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEquipment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_EquipmentList_MetaData[] = {
		{ "Category", "AGR|Game Play" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_EquipmentList = { "EquipmentList", nullptr, (EPropertyFlags)0x0010000001000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_EquipmentManager, EquipmentList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_EquipmentList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_EquipmentList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_References_ValueProp = { "References", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_References_Key_KeyProp = { "References_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_References_MetaData[] = {
		{ "Category", "AGR|Game Play" },
		{ "ModuleRelativePath", "Public/Components/AGR_EquipmentManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_References = { "References", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_EquipmentManager, References), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_References_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_References_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGR_EquipmentManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_EquipmentList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_EquipmentList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_References_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_References_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_EquipmentManager_Statics::NewProp_References,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGR_EquipmentManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGR_EquipmentManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGR_EquipmentManager_Statics::ClassParams = {
		&UAGR_EquipmentManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAGR_EquipmentManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_EquipmentManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAGR_EquipmentManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_EquipmentManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGR_EquipmentManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGR_EquipmentManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGR_EquipmentManager, 2554702845);
	template<> AGRPRO_API UClass* StaticClass<UAGR_EquipmentManager>()
	{
		return UAGR_EquipmentManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGR_EquipmentManager(Z_Construct_UClass_UAGR_EquipmentManager, &UAGR_EquipmentManager::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGR_EquipmentManager"), false, nullptr, nullptr, nullptr);

	void UAGR_EquipmentManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquipmentList(TEXT("EquipmentList"));

		const bool bIsValid = true
			&& Name_EquipmentList == ClassReps[(int32)ENetFields_Private::EquipmentList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAGR_EquipmentManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGR_EquipmentManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
