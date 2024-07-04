// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Components/AGR_ItemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGR_ItemComponent() {}
// Cross Module References
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnDestroy__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnItemDropped__DelegateSignature();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_InventoryManager_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_ItemComponent_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_ItemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AGRPRO_OnDestroy__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnDestroy__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnDestroy__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnDestroy__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnDestroy__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnDestroy__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnDestroy__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnDestroy__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnUnEquip_Parms
		{
			AActor* User;
			FName SlotName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnUnEquip_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnUnEquip_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnUnEquip__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnUnEquip_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnEquip_Parms
		{
			AActor* User;
			FName SlotName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnEquip_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnEquip_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnEquip__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnEquip_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnItemUsed_Parms
		{
			AActor* User;
			FGameplayTag GameplayTag;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnItemUsed_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnItemUsed_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::NewProp_GameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnItemUsed__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnItemUsed_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnItemDropped__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnItemDropped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnItemDropped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnItemDropped__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnItemDropped__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnItemDropped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnItemDropped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnItemDropped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnHiddenShown_Parms
		{
			bool bHidden;
		};
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((_Script_AGRPRO_eventOnHiddenShown_Parms*)Obj)->bHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AGRPRO_eventOnHiddenShown_Parms), &Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::NewProp_bHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnHiddenShown__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnHiddenShown_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnSplitStack_Parms
		{
			AActor* NewItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnSplitStack_Parms, NewItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnSplitStack__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnSplitStack_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnPickup_Parms
		{
			UAGR_InventoryManager* Inventory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnPickup_Parms, Inventory), Z_Construct_UClass_UAGR_InventoryManager_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnPickup__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnPickup_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAGR_ItemComponent::execDestroyItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_ItemComponent::execSplitItems)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SplitSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SplitItems(Z_Param_SplitSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_ItemComponent::execUseItem)
	{
		P_GET_OBJECT(AActor,Z_Param_User);
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItem(Z_Param_User,Z_Param_GameplayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_ItemComponent::execDropItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_ItemComponent::execPickUpItem)
	{
		P_GET_OBJECT(UAGR_InventoryManager,Z_Param_InventoryPicking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUpItem(Z_Param_InventoryPicking);
		P_NATIVE_END;
	}
	void UAGR_ItemComponent::StaticRegisterNativesUAGR_ItemComponent()
	{
		UClass* Class = UAGR_ItemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyItem", &UAGR_ItemComponent::execDestroyItem },
			{ "DropItem", &UAGR_ItemComponent::execDropItem },
			{ "PickUpItem", &UAGR_ItemComponent::execPickUpItem },
			{ "SplitItems", &UAGR_ItemComponent::execSplitItems },
			{ "UseItem", &UAGR_ItemComponent::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAGR_ItemComponent_DestroyItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_ItemComponent_DestroyItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_ItemComponent_DestroyItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_ItemComponent, nullptr, "DestroyItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_ItemComponent_DestroyItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_DestroyItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_ItemComponent_DestroyItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_ItemComponent_DestroyItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_ItemComponent_DropItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_ItemComponent_DropItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_ItemComponent_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_ItemComponent, nullptr, "DropItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_ItemComponent_DropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_ItemComponent_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_ItemComponent_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics
	{
		struct AGR_ItemComponent_eventPickUpItem_Parms
		{
			UAGR_InventoryManager* InventoryPicking;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryPicking_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryPicking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::NewProp_InventoryPicking_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::NewProp_InventoryPicking = { "InventoryPicking", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_ItemComponent_eventPickUpItem_Parms, InventoryPicking), Z_Construct_UClass_UAGR_InventoryManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::NewProp_InventoryPicking_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::NewProp_InventoryPicking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::NewProp_InventoryPicking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_ItemComponent, nullptr, "PickUpItem", nullptr, nullptr, sizeof(AGR_ItemComponent_eventPickUpItem_Parms), Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics
	{
		struct AGR_ItemComponent_eventSplitItems_Parms
		{
			int32 SplitSize;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SplitSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::NewProp_SplitSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::NewProp_SplitSize = { "SplitSize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_ItemComponent_eventSplitItems_Parms, SplitSize), METADATA_PARAMS(Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::NewProp_SplitSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::NewProp_SplitSize_MetaData)) };
	void Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGR_ItemComponent_eventSplitItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_ItemComponent_eventSplitItems_Parms), &Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::NewProp_SplitSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_ItemComponent, nullptr, "SplitItems", nullptr, nullptr, sizeof(AGR_ItemComponent_eventSplitItems_Parms), Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_ItemComponent_SplitItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_ItemComponent_SplitItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics
	{
		struct AGR_ItemComponent_eventUseItem_Parms
		{
			AActor* User;
			FGameplayTag GameplayTag;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_ItemComponent_eventUseItem_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_ItemComponent_eventUseItem_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::NewProp_GameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_ItemComponent, nullptr, "UseItem", nullptr, nullptr, sizeof(AGR_ItemComponent_eventUseItem_Parms), Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_ItemComponent_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_ItemComponent_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAGR_ItemComponent_NoRegister()
	{
		return UAGR_ItemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAGR_ItemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStackable_MetaData[];
#endif
		static void NewProp_bStackable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStackable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpaceSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpaceSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateWhenDropped_MetaData[];
#endif
		static void NewProp_bSimulateWhenDropped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateWhenDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTagSlotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemTagSlotType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOnSplitStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FOnSplitStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHiddenShown_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHiddenShown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEquip_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnEquip_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnEquip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDestroy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGR_ItemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAGR_ItemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGR_ItemComponent_DestroyItem, "DestroyItem" }, // 2263193486
		{ &Z_Construct_UFunction_UAGR_ItemComponent_DropItem, "DropItem" }, // 2037115801
		{ &Z_Construct_UFunction_UAGR_ItemComponent_PickUpItem, "PickUpItem" }, // 2775984783
		{ &Z_Construct_UFunction_UAGR_ItemComponent_SplitItems, "SplitItems" }, // 2311200876
		{ &Z_Construct_UFunction_UAGR_ItemComponent_UseItem, "UseItem" }, // 3607463469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AGR" },
		{ "IncludePath", "Components/AGR_ItemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "AGR|Identification" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000001000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_InventoryId_MetaData[] = {
		{ "Category", "AGR|Identification" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000001000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, InventoryId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_InventoryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_InventoryId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OwnerId_MetaData[] = {
		{ "Category", "AGR|Identification" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OwnerId = { "OwnerId", nullptr, (EPropertyFlags)0x0010000001000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, OwnerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OwnerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OwnerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bStackable_MetaData[] = {
		{ "Category", "AGR|Quantity" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bStackable_SetBit(void* Obj)
	{
		((UAGR_ItemComponent*)Obj)->bStackable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bStackable = { "bStackable", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGR_ItemComponent), &Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bStackable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bStackable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bStackable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_MaxStack_MetaData[] = {
		{ "Category", "AGR|Quantity" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_MaxStack = { "MaxStack", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, MaxStack), METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_MaxStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_MaxStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_CurrentStack_MetaData[] = {
		{ "Category", "AGR|Quantity" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_CurrentStack = { "CurrentStack", nullptr, (EPropertyFlags)0x0010000001000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, CurrentStack), METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_CurrentStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_CurrentStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "AGR|Inventory Space" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, Weight), METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "AGR|Inventory Space" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, Volume), METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_SpaceSlots_MetaData[] = {
		{ "Category", "AGR|Inventory Space" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_SpaceSlots = { "SpaceSlots", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, SpaceSlots), METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_SpaceSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_SpaceSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "AGR|Base Info" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000001000025, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, ItemName), METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bSimulateWhenDropped_MetaData[] = {
		{ "Category", "AGR|Base Info" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bSimulateWhenDropped_SetBit(void* Obj)
	{
		((UAGR_ItemComponent*)Obj)->bSimulateWhenDropped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bSimulateWhenDropped = { "bSimulateWhenDropped", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGR_ItemComponent), &Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bSimulateWhenDropped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bSimulateWhenDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bSimulateWhenDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemTagSlotType_MetaData[] = {
		{ "Category", "AGR|Base Info" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemTagSlotType = { "ItemTagSlotType", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, ItemTagSlotType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemTagSlotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemTagSlotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnPickup_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnPickup = { "OnPickup", nullptr, (EPropertyFlags)0x0010000010080001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, OnPickup), Z_Construct_UDelegateFunction_AGRPRO_OnPickup__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_FOnSplitStack_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_FOnSplitStack = { "FOnSplitStack", nullptr, (EPropertyFlags)0x0010000010080001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, FOnSplitStack), Z_Construct_UDelegateFunction_AGRPRO_OnSplitStack__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_FOnSplitStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_FOnSplitStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnHiddenShown_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnHiddenShown = { "OnHiddenShown", nullptr, (EPropertyFlags)0x0010000010080001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, OnHiddenShown), Z_Construct_UDelegateFunction_AGRPRO_OnHiddenShown__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnHiddenShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnHiddenShown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemDropped_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemDropped = { "OnItemDropped", nullptr, (EPropertyFlags)0x0010000010080001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, OnItemDropped), Z_Construct_UDelegateFunction_AGRPRO_OnItemDropped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemUsed_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemUsed = { "OnItemUsed", nullptr, (EPropertyFlags)0x0010000010080001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, OnItemUsed), Z_Construct_UDelegateFunction_AGRPRO_OnItemUsed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnEquip_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnEquip = { "OnEquip", nullptr, (EPropertyFlags)0x0010000010080001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, OnEquip), Z_Construct_UDelegateFunction_AGRPRO_OnEquip__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnEquip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnUnEquip_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnUnEquip = { "OnUnEquip", nullptr, (EPropertyFlags)0x0010000010080001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, OnUnEquip), Z_Construct_UDelegateFunction_AGRPRO_OnUnEquip__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnUnEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnUnEquip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnDestroy_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_ItemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnDestroy = { "OnDestroy", nullptr, (EPropertyFlags)0x0010000010080001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_ItemComponent, OnDestroy), Z_Construct_UDelegateFunction_AGRPRO_OnDestroy__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnDestroy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGR_ItemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_InventoryId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OwnerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bStackable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_MaxStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_CurrentStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_SpaceSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_bSimulateWhenDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_ItemTagSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_FOnSplitStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnHiddenShown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnItemUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnUnEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_ItemComponent_Statics::NewProp_OnDestroy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGR_ItemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGR_ItemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGR_ItemComponent_Statics::ClassParams = {
		&UAGR_ItemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAGR_ItemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAGR_ItemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_ItemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGR_ItemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGR_ItemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGR_ItemComponent, 1949090797);
	template<> AGRPRO_API UClass* StaticClass<UAGR_ItemComponent>()
	{
		return UAGR_ItemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGR_ItemComponent(Z_Construct_UClass_UAGR_ItemComponent, &UAGR_ItemComponent::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGR_ItemComponent"), false, nullptr, nullptr, nullptr);

	void UAGR_ItemComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ItemId(TEXT("ItemId"));
		static const FName Name_InventoryId(TEXT("InventoryId"));
		static const FName Name_OwnerId(TEXT("OwnerId"));
		static const FName Name_bStackable(TEXT("bStackable"));
		static const FName Name_MaxStack(TEXT("MaxStack"));
		static const FName Name_CurrentStack(TEXT("CurrentStack"));
		static const FName Name_Weight(TEXT("Weight"));
		static const FName Name_Volume(TEXT("Volume"));
		static const FName Name_SpaceSlots(TEXT("SpaceSlots"));
		static const FName Name_ItemName(TEXT("ItemName"));
		static const FName Name_bSimulateWhenDropped(TEXT("bSimulateWhenDropped"));
		static const FName Name_ItemTagSlotType(TEXT("ItemTagSlotType"));

		const bool bIsValid = true
			&& Name_ItemId == ClassReps[(int32)ENetFields_Private::ItemId].Property->GetFName()
			&& Name_InventoryId == ClassReps[(int32)ENetFields_Private::InventoryId].Property->GetFName()
			&& Name_OwnerId == ClassReps[(int32)ENetFields_Private::OwnerId].Property->GetFName()
			&& Name_bStackable == ClassReps[(int32)ENetFields_Private::bStackable].Property->GetFName()
			&& Name_MaxStack == ClassReps[(int32)ENetFields_Private::MaxStack].Property->GetFName()
			&& Name_CurrentStack == ClassReps[(int32)ENetFields_Private::CurrentStack].Property->GetFName()
			&& Name_Weight == ClassReps[(int32)ENetFields_Private::Weight].Property->GetFName()
			&& Name_Volume == ClassReps[(int32)ENetFields_Private::Volume].Property->GetFName()
			&& Name_SpaceSlots == ClassReps[(int32)ENetFields_Private::SpaceSlots].Property->GetFName()
			&& Name_ItemName == ClassReps[(int32)ENetFields_Private::ItemName].Property->GetFName()
			&& Name_bSimulateWhenDropped == ClassReps[(int32)ENetFields_Private::bSimulateWhenDropped].Property->GetFName()
			&& Name_ItemTagSlotType == ClassReps[(int32)ENetFields_Private::ItemTagSlotType].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAGR_ItemComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGR_ItemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
