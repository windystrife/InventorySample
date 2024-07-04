// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Components/AGR_CombatManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGR_CombatManager() {}
// Cross Module References
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnEndAttack__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnStartAttack__DelegateSignature();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_CombatManager_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_CombatManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_CombatColliderType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AGRPRO_OnEndAttack__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnEndAttack__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnEndAttack__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnEndAttack__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnEndAttack__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnEndAttack__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnEndAttack__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnEndAttack__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnStartAttack__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnStartAttack__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnStartAttack__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnStartAttack__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnStartAttack__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnStartAttack__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnStartAttack__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnStartAttack__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnAttackHitEvent_Parms
		{
			FHitResult Hit;
			UPrimitiveComponent* Mesh;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnAttackHitEvent_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnAttackHitEvent_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnAttackHitEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnAttackHitEvent_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAGR_CombatManager::execGetAllWeapons)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutWeapons);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllWeapons(Z_Param_Out_OutWeapons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_CombatManager::execRefreshIgnoredActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshIgnoredActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_CombatManager::execClearAllMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_CombatManager::execRemoveTraceMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTraceMesh(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_CombatManager::execAddTraceMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh);
		P_GET_ENUM(EAGR_CombatColliderType,Z_Param_CollisionHandling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTraceMesh(Z_Param_Mesh,EAGR_CombatColliderType(Z_Param_CollisionHandling));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_CombatManager::execSetupDebug)
	{
		P_GET_UBOOL(Z_Param_bInDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupDebug(Z_Param_bInDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_CombatManager::execEndTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGR_CombatManager::execStartTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTrace();
		P_NATIVE_END;
	}
	void UAGR_CombatManager::StaticRegisterNativesUAGR_CombatManager()
	{
		UClass* Class = UAGR_CombatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTraceMesh", &UAGR_CombatManager::execAddTraceMesh },
			{ "ClearAllMeshes", &UAGR_CombatManager::execClearAllMeshes },
			{ "EndTrace", &UAGR_CombatManager::execEndTrace },
			{ "GetAllWeapons", &UAGR_CombatManager::execGetAllWeapons },
			{ "RefreshIgnoredActors", &UAGR_CombatManager::execRefreshIgnoredActors },
			{ "RemoveTraceMesh", &UAGR_CombatManager::execRemoveTraceMesh },
			{ "SetupDebug", &UAGR_CombatManager::execSetupDebug },
			{ "StartTrace", &UAGR_CombatManager::execStartTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics
	{
		struct AGR_CombatManager_eventAddTraceMesh_Parms
		{
			UPrimitiveComponent* Mesh;
			EAGR_CombatColliderType CollisionHandling;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionHandling_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionHandling_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionHandling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_CombatManager_eventAddTraceMesh_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_CollisionHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_CollisionHandling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_CollisionHandling = { "CollisionHandling", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_CombatManager_eventAddTraceMesh_Parms, CollisionHandling), Z_Construct_UEnum_AGRPRO_EAGR_CombatColliderType, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_CollisionHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_CollisionHandling_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_CollisionHandling_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::NewProp_CollisionHandling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_CombatManager, nullptr, "AddTraceMesh", nullptr, nullptr, sizeof(AGR_CombatManager_eventAddTraceMesh_Parms), Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_CombatManager_ClearAllMeshes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_ClearAllMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_CombatManager_ClearAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_CombatManager, nullptr, "ClearAllMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_ClearAllMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_ClearAllMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_CombatManager_ClearAllMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_CombatManager_ClearAllMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_CombatManager_EndTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_EndTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_CombatManager_EndTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_CombatManager, nullptr, "EndTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_EndTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_EndTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_CombatManager_EndTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_CombatManager_EndTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics
	{
		struct AGR_CombatManager_eventGetAllWeapons_Parms
		{
			TArray<AActor*> OutWeapons;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutWeapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutWeapons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::NewProp_OutWeapons_Inner = { "OutWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::NewProp_OutWeapons_MetaData[] = {
		{ "DisplayName", "Weapons" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::NewProp_OutWeapons = { "OutWeapons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_CombatManager_eventGetAllWeapons_Parms, OutWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::NewProp_OutWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::NewProp_OutWeapons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::NewProp_OutWeapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::NewProp_OutWeapons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_CombatManager, nullptr, "GetAllWeapons", nullptr, nullptr, sizeof(AGR_CombatManager_eventGetAllWeapons_Parms), Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_CombatManager_RefreshIgnoredActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_RefreshIgnoredActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_CombatManager_RefreshIgnoredActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_CombatManager, nullptr, "RefreshIgnoredActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_RefreshIgnoredActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_RefreshIgnoredActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_CombatManager_RefreshIgnoredActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_CombatManager_RefreshIgnoredActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics
	{
		struct AGR_CombatManager_eventRemoveTraceMesh_Parms
		{
			UPrimitiveComponent* Mesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGR_CombatManager_eventRemoveTraceMesh_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_CombatManager, nullptr, "RemoveTraceMesh", nullptr, nullptr, sizeof(AGR_CombatManager_eventRemoveTraceMesh_Parms), Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics
	{
		struct AGR_CombatManager_eventSetupDebug_Parms
		{
			bool bInDebug;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInDebug_MetaData[];
#endif
		static void NewProp_bInDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::NewProp_bInDebug_MetaData[] = {
		{ "DisplayName", "Debug" },
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::NewProp_bInDebug_SetBit(void* Obj)
	{
		((AGR_CombatManager_eventSetupDebug_Parms*)Obj)->bInDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::NewProp_bInDebug = { "bInDebug", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGR_CombatManager_eventSetupDebug_Parms), &Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::NewProp_bInDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::NewProp_bInDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::NewProp_bInDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::NewProp_bInDebug,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_CombatManager, nullptr, "SetupDebug", nullptr, nullptr, sizeof(AGR_CombatManager_eventSetupDebug_Parms), Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_CombatManager_SetupDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_CombatManager_SetupDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGR_CombatManager_StartTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGR_CombatManager_StartTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGR_CombatManager_StartTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGR_CombatManager, nullptr, "StartTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGR_CombatManager_StartTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGR_CombatManager_StartTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGR_CombatManager_StartTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGR_CombatManager_StartTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAGR_CombatManager_NoRegister()
	{
		return UAGR_CombatManager::StaticClass();
	}
	struct Z_Construct_UClass_UAGR_CombatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSocketTraceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSocketTraceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndSocketTraceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EndSocketTraceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracePrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TracePrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAttackHitEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackHitEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceColor1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceColor1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceColor2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceColor2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackedMeshes_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackedMeshes_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackedMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousStarts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousStarts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviousStarts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousEnds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousEnds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviousEnds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGR_CombatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAGR_CombatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGR_CombatManager_AddTraceMesh, "AddTraceMesh" }, // 1703363173
		{ &Z_Construct_UFunction_UAGR_CombatManager_ClearAllMeshes, "ClearAllMeshes" }, // 1324679948
		{ &Z_Construct_UFunction_UAGR_CombatManager_EndTrace, "EndTrace" }, // 45407500
		{ &Z_Construct_UFunction_UAGR_CombatManager_GetAllWeapons, "GetAllWeapons" }, // 3700535516
		{ &Z_Construct_UFunction_UAGR_CombatManager_RefreshIgnoredActors, "RefreshIgnoredActors" }, // 882402389
		{ &Z_Construct_UFunction_UAGR_CombatManager_RemoveTraceMesh, "RemoveTraceMesh" }, // 2005720684
		{ &Z_Construct_UFunction_UAGR_CombatManager_SetupDebug, "SetupDebug" }, // 2794176798
		{ &Z_Construct_UFunction_UAGR_CombatManager_StartTrace, "StartTrace" }, // 196945673
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AGR" },
		{ "IncludePath", "Components/AGR_CombatManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_StartSocketTraceName_MetaData[] = {
		{ "Category", "AGR|SETUP" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_StartSocketTraceName = { "StartSocketTraceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, StartSocketTraceName), METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_StartSocketTraceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_StartSocketTraceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_EndSocketTraceName_MetaData[] = {
		{ "Category", "AGR|SETUP" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_EndSocketTraceName = { "EndSocketTraceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, EndSocketTraceName), METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_EndSocketTraceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_EndSocketTraceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "AGR|SETUP" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "AGR|SETUP" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	void Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((UAGR_CombatManager*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGR_CombatManager), &Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bTraceComplex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TracePrecision_MetaData[] = {
		{ "Category", "AGR|SETUP" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TracePrecision = { "TracePrecision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, TracePrecision), METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TracePrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TracePrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceSize_MetaData[] = {
		{ "Category", "AGR|SETUP" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceSize = { "TraceSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, TraceSize), METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnAttackHitEvent_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnAttackHitEvent = { "OnAttackHitEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, OnAttackHitEvent), Z_Construct_UDelegateFunction_AGRPRO_OnAttackHitEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnAttackHitEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnAttackHitEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnStartAttack_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnStartAttack = { "OnStartAttack", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, OnStartAttack), Z_Construct_UDelegateFunction_AGRPRO_OnStartAttack__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnStartAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnStartAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnEndAttack_MetaData[] = {
		{ "Category", "AGR|Events" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnEndAttack = { "OnEndAttack", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, OnEndAttack), Z_Construct_UDelegateFunction_AGRPRO_OnEndAttack__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnEndAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnEndAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	void Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UAGR_CombatManager*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGR_CombatManager), &Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor1_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor1 = { "TraceColor1", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, TraceColor1), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor2_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor2 = { "TraceColor2", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, TraceColor2), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes_ValueProp = { "TrackedMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_AGRPRO_EAGR_CombatColliderType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes_Key_KeyProp = { "TrackedMeshes_Key", nullptr, (EPropertyFlags)0x0000000000080001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes_MetaData[] = {
		{ "Category", "AGR|CollisionHandler" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes = { "TrackedMeshes", nullptr, (EPropertyFlags)0x0020088000010005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, TrackedMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_IgnoredActors_MetaData[] = {
		{ "Category", "AGR|CollisionHandler" },
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_IgnoredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_IgnoredActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousStarts_Inner = { "PreviousStarts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousStarts_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousStarts = { "PreviousStarts", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, PreviousStarts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousStarts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousEnds_Inner = { "PreviousEnds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousEnds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/AGR_CombatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousEnds = { "PreviousEnds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGR_CombatManager, PreviousEnds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousEnds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousEnds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGR_CombatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_StartSocketTraceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_EndSocketTraceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TracePrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnAttackHitEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnStartAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_OnEndAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TraceColor2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_TrackedMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousStarts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousStarts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousEnds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGR_CombatManager_Statics::NewProp_PreviousEnds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGR_CombatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGR_CombatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGR_CombatManager_Statics::ClassParams = {
		&UAGR_CombatManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAGR_CombatManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAGR_CombatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_CombatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGR_CombatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGR_CombatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGR_CombatManager, 2780211302);
	template<> AGRPRO_API UClass* StaticClass<UAGR_CombatManager>()
	{
		return UAGR_CombatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGR_CombatManager(Z_Construct_UClass_UAGR_CombatManager, &UAGR_CombatManager::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGR_CombatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGR_CombatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
