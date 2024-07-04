// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Components/AGRAnimMasterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGRAnimMasterComponent() {}
// Cross Module References
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AGRPRO_API UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRAnimMasterComponent_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRAnimMasterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRDebuggerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnPoseChanged_Parms
		{
			FGameplayTag OldValue;
			FGameplayTag NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnPoseChanged_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AGRPRO_eventOnPoseChanged_Parms, NewValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnPoseChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnPoseChanged_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics
	{
		struct _Script_AGRPRO_eventOnFirstPerson_Parms
		{
			bool bIsFirstPersonView;
		};
		static void NewProp_bIsFirstPersonView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFirstPersonView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::NewProp_bIsFirstPersonView_SetBit(void* Obj)
	{
		((_Script_AGRPRO_eventOnFirstPerson_Parms*)Obj)->bIsFirstPersonView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::NewProp_bIsFirstPersonView = { "bIsFirstPersonView", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AGRPRO_eventOnFirstPerson_Parms), &Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::NewProp_bIsFirstPersonView_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::NewProp_bIsFirstPersonView,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AGRPRO, nullptr, "OnFirstPerson__DelegateSignature", nullptr, nullptr, sizeof(_Script_AGRPRO_eventOnFirstPerson_Parms), Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execNetMultiSetLookAt)
	{
		P_GET_STRUCT(FVector,Z_Param_LookAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMultiSetLookAt_Implementation(Z_Param_LookAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execServerSetLookAt)
	{
		P_GET_STRUCT(FVector,Z_Param_LookAt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetLookAt_Implementation(Z_Param_LookAt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execNetMultiSetAimOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_InAimOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMultiSetAimOffset_Implementation(Z_Param_InAimOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execServerSetAimOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_InAimOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetAimOffset_Implementation(Z_Param_InAimOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execServerChangeAimOffset)
	{
		P_GET_ENUM(EAGR_AimOffsets,Z_Param_InAimOffsetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerChangeAimOffset_Implementation(EAGR_AimOffsets(Z_Param_InAimOffsetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execServerSetupAimOffset)
	{
		P_GET_ENUM(EAGR_AimOffsets,Z_Param_InAimOffsetType);
		P_GET_ENUM(EAGR_AimOffsetClamp,Z_Param_InAimBehavior);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetupAimOffset_Implementation(EAGR_AimOffsets(Z_Param_InAimOffsetType),EAGR_AimOffsetClamp(Z_Param_InAimBehavior));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execServerChangeRotation)
	{
		P_GET_ENUM(EAGR_RotationMethod,Z_Param_InRotationMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerChangeRotation_Implementation(EAGR_RotationMethod(Z_Param_InRotationMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execServerSetRotation)
	{
		P_GET_ENUM(EAGR_RotationMethod,Z_Param_InRotationMethod);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRotationSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTurnStartAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTurnStopTolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetRotation_Implementation(EAGR_RotationMethod(Z_Param_InRotationMethod),Z_Param_InRotationSpeed,Z_Param_InTurnStartAngle,Z_Param_InTurnStopTolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execServerSetOverlayPose)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InOverlayPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetOverlayPose_Implementation(Z_Param_InOverlayPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execServerSetBasePose)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InBasePose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetBasePose_Implementation(Z_Param_InBasePose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execOnRep_RotationSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RotationSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execOnRep_RotationMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RotationMethod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execOnRep_OverlayPose)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlayPose(Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execOnRep_BasePose)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BasePose(Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execTurnInPlaceTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnInPlaceTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execAimTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AimTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execRemoveTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTag(Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execAddTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTag(Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execChangeAimOffset)
	{
		P_GET_ENUM(EAGR_AimOffsets,Z_Param_InAimOffsetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeAimOffset(EAGR_AimOffsets(Z_Param_InAimOffsetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execSetupAimOffset)
	{
		P_GET_ENUM(EAGR_AimOffsets,Z_Param_InAimOffsetType);
		P_GET_ENUM(EAGR_AimOffsetClamp,Z_Param_InAimBehavior);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAimClamp);
		P_GET_UBOOL(Z_Param_InCameraBased);
		P_GET_PROPERTY(FNameProperty,Z_Param_InAimSocketName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InLookAtSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAimOffset(EAGR_AimOffsets(Z_Param_InAimOffsetType),EAGR_AimOffsetClamp(Z_Param_InAimBehavior),Z_Param_InAimClamp,Z_Param_InCameraBased,Z_Param_InAimSocketName,Z_Param_InLookAtSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execChangeRotation)
	{
		P_GET_ENUM(EAGR_RotationMethod,Z_Param_InRotationMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeRotation(EAGR_RotationMethod(Z_Param_InRotationMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execSetupRotation)
	{
		P_GET_ENUM(EAGR_RotationMethod,Z_Param_InRotationMethod);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRotationSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTurnStartAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTurnStopTolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupRotation(EAGR_RotationMethod(Z_Param_InRotationMethod),Z_Param_InRotationSpeed,Z_Param_InTurnStartAngle,Z_Param_InTurnStopTolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execSetupFpp)
	{
		P_GET_UBOOL(Z_Param_bInFirstPerson);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupFpp(Z_Param_bInFirstPerson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execSetupOverlayPose)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InOverlayPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupOverlayPose(Z_Param_InOverlayPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAGRAnimMasterComponent::execSetupBasePose)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InBasePose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupBasePose(Z_Param_InBasePose);
		P_NATIVE_END;
	}
	static FName NAME_UAGRAnimMasterComponent_NetMultiSetAimOffset = FName(TEXT("NetMultiSetAimOffset"));
	void UAGRAnimMasterComponent::NetMultiSetAimOffset(const FRotator InAimOffset)
	{
		AGRAnimMasterComponent_eventNetMultiSetAimOffset_Parms Parms;
		Parms.InAimOffset=InAimOffset;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_NetMultiSetAimOffset),&Parms);
	}
	static FName NAME_UAGRAnimMasterComponent_NetMultiSetLookAt = FName(TEXT("NetMultiSetLookAt"));
	void UAGRAnimMasterComponent::NetMultiSetLookAt(const FVector LookAt)
	{
		AGRAnimMasterComponent_eventNetMultiSetLookAt_Parms Parms;
		Parms.LookAt=LookAt;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_NetMultiSetLookAt),&Parms);
	}
	static FName NAME_UAGRAnimMasterComponent_ServerChangeAimOffset = FName(TEXT("ServerChangeAimOffset"));
	void UAGRAnimMasterComponent::ServerChangeAimOffset(const EAGR_AimOffsets InAimOffsetType)
	{
		AGRAnimMasterComponent_eventServerChangeAimOffset_Parms Parms;
		Parms.InAimOffsetType=InAimOffsetType;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_ServerChangeAimOffset),&Parms);
	}
	static FName NAME_UAGRAnimMasterComponent_ServerChangeRotation = FName(TEXT("ServerChangeRotation"));
	void UAGRAnimMasterComponent::ServerChangeRotation(const EAGR_RotationMethod InRotationMethod)
	{
		AGRAnimMasterComponent_eventServerChangeRotation_Parms Parms;
		Parms.InRotationMethod=InRotationMethod;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_ServerChangeRotation),&Parms);
	}
	static FName NAME_UAGRAnimMasterComponent_ServerSetAimOffset = FName(TEXT("ServerSetAimOffset"));
	void UAGRAnimMasterComponent::ServerSetAimOffset(const FRotator InAimOffset)
	{
		AGRAnimMasterComponent_eventServerSetAimOffset_Parms Parms;
		Parms.InAimOffset=InAimOffset;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_ServerSetAimOffset),&Parms);
	}
	static FName NAME_UAGRAnimMasterComponent_ServerSetBasePose = FName(TEXT("ServerSetBasePose"));
	void UAGRAnimMasterComponent::ServerSetBasePose(const FGameplayTag InBasePose)
	{
		AGRAnimMasterComponent_eventServerSetBasePose_Parms Parms;
		Parms.InBasePose=InBasePose;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_ServerSetBasePose),&Parms);
	}
	static FName NAME_UAGRAnimMasterComponent_ServerSetLookAt = FName(TEXT("ServerSetLookAt"));
	void UAGRAnimMasterComponent::ServerSetLookAt(const FVector LookAt)
	{
		AGRAnimMasterComponent_eventServerSetLookAt_Parms Parms;
		Parms.LookAt=LookAt;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_ServerSetLookAt),&Parms);
	}
	static FName NAME_UAGRAnimMasterComponent_ServerSetOverlayPose = FName(TEXT("ServerSetOverlayPose"));
	void UAGRAnimMasterComponent::ServerSetOverlayPose(const FGameplayTag InOverlayPose)
	{
		AGRAnimMasterComponent_eventServerSetOverlayPose_Parms Parms;
		Parms.InOverlayPose=InOverlayPose;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_ServerSetOverlayPose),&Parms);
	}
	static FName NAME_UAGRAnimMasterComponent_ServerSetRotation = FName(TEXT("ServerSetRotation"));
	void UAGRAnimMasterComponent::ServerSetRotation(const EAGR_RotationMethod InRotationMethod, const float InRotationSpeed, const float InTurnStartAngle, const float InTurnStopTolerance)
	{
		AGRAnimMasterComponent_eventServerSetRotation_Parms Parms;
		Parms.InRotationMethod=InRotationMethod;
		Parms.InRotationSpeed=InRotationSpeed;
		Parms.InTurnStartAngle=InTurnStartAngle;
		Parms.InTurnStopTolerance=InTurnStopTolerance;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_ServerSetRotation),&Parms);
	}
	static FName NAME_UAGRAnimMasterComponent_ServerSetupAimOffset = FName(TEXT("ServerSetupAimOffset"));
	void UAGRAnimMasterComponent::ServerSetupAimOffset(const EAGR_AimOffsets InAimOffsetType, const EAGR_AimOffsetClamp InAimBehavior)
	{
		AGRAnimMasterComponent_eventServerSetupAimOffset_Parms Parms;
		Parms.InAimOffsetType=InAimOffsetType;
		Parms.InAimBehavior=InAimBehavior;
		ProcessEvent(FindFunctionChecked(NAME_UAGRAnimMasterComponent_ServerSetupAimOffset),&Parms);
	}
	void UAGRAnimMasterComponent::StaticRegisterNativesUAGRAnimMasterComponent()
	{
		UClass* Class = UAGRAnimMasterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTag", &UAGRAnimMasterComponent::execAddTag },
			{ "AimTick", &UAGRAnimMasterComponent::execAimTick },
			{ "ChangeAimOffset", &UAGRAnimMasterComponent::execChangeAimOffset },
			{ "ChangeRotation", &UAGRAnimMasterComponent::execChangeRotation },
			{ "NetMultiSetAimOffset", &UAGRAnimMasterComponent::execNetMultiSetAimOffset },
			{ "NetMultiSetLookAt", &UAGRAnimMasterComponent::execNetMultiSetLookAt },
			{ "OnRep_BasePose", &UAGRAnimMasterComponent::execOnRep_BasePose },
			{ "OnRep_OverlayPose", &UAGRAnimMasterComponent::execOnRep_OverlayPose },
			{ "OnRep_RotationMethod", &UAGRAnimMasterComponent::execOnRep_RotationMethod },
			{ "OnRep_RotationSpeed", &UAGRAnimMasterComponent::execOnRep_RotationSpeed },
			{ "RemoveTag", &UAGRAnimMasterComponent::execRemoveTag },
			{ "ServerChangeAimOffset", &UAGRAnimMasterComponent::execServerChangeAimOffset },
			{ "ServerChangeRotation", &UAGRAnimMasterComponent::execServerChangeRotation },
			{ "ServerSetAimOffset", &UAGRAnimMasterComponent::execServerSetAimOffset },
			{ "ServerSetBasePose", &UAGRAnimMasterComponent::execServerSetBasePose },
			{ "ServerSetLookAt", &UAGRAnimMasterComponent::execServerSetLookAt },
			{ "ServerSetOverlayPose", &UAGRAnimMasterComponent::execServerSetOverlayPose },
			{ "ServerSetRotation", &UAGRAnimMasterComponent::execServerSetRotation },
			{ "ServerSetupAimOffset", &UAGRAnimMasterComponent::execServerSetupAimOffset },
			{ "SetupAimOffset", &UAGRAnimMasterComponent::execSetupAimOffset },
			{ "SetupBasePose", &UAGRAnimMasterComponent::execSetupBasePose },
			{ "SetupFpp", &UAGRAnimMasterComponent::execSetupFpp },
			{ "SetupOverlayPose", &UAGRAnimMasterComponent::execSetupOverlayPose },
			{ "SetupRotation", &UAGRAnimMasterComponent::execSetupRotation },
			{ "TurnInPlaceTick", &UAGRAnimMasterComponent::execTurnInPlaceTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics
	{
		struct AGRAnimMasterComponent_eventAddTag_Parms
		{
			FGameplayTag InTag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventAddTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::NewProp_InTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|AnimTags" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "AddTag", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventAddTag_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_AimTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_AimTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Tick" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_AimTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "AimTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_AimTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_AimTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_AimTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_AimTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics
	{
		struct AGRAnimMasterComponent_eventChangeAimOffset_Parms
		{
			EAGR_AimOffsets InAimOffsetType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAimOffsetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimOffsetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAimOffsetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::NewProp_InAimOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::NewProp_InAimOffsetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::NewProp_InAimOffsetType = { "InAimOffsetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventChangeAimOffset_Parms, InAimOffsetType), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::NewProp_InAimOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::NewProp_InAimOffsetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::NewProp_InAimOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::NewProp_InAimOffsetType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|AimOffset" },
		{ "CPP_Default_InAimOffsetType", "NONE" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ChangeAimOffset", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventChangeAimOffset_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics
	{
		struct AGRAnimMasterComponent_eventChangeRotation_Parms
		{
			EAGR_RotationMethod InRotationMethod;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRotationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRotationMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::NewProp_InRotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::NewProp_InRotationMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::NewProp_InRotationMethod = { "InRotationMethod", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventChangeRotation_Parms, InRotationMethod), Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::NewProp_InRotationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::NewProp_InRotationMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::NewProp_InRotationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::NewProp_InRotationMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Rotation" },
		{ "CPP_Default_InRotationMethod", "NONE" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ChangeRotation", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventChangeRotation_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAimOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::NewProp_InAimOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::NewProp_InAimOffset = { "InAimOffset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventNetMultiSetAimOffset_Parms, InAimOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::NewProp_InAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::NewProp_InAimOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::NewProp_InAimOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "NetMultiSetAimOffset", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventNetMultiSetAimOffset_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::NewProp_LookAt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::NewProp_LookAt = { "LookAt", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventNetMultiSetLookAt_Parms, LookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::NewProp_LookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::NewProp_LookAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::NewProp_LookAt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "NetMultiSetLookAt", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventNetMultiSetLookAt_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics
	{
		struct AGRAnimMasterComponent_eventOnRep_BasePose_Parms
		{
			FGameplayTag OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventOnRep_BasePose_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "OnRep_BasePose", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventOnRep_BasePose_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics
	{
		struct AGRAnimMasterComponent_eventOnRep_OverlayPose_Parms
		{
			FGameplayTag OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventOnRep_OverlayPose_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "OnRep_OverlayPose", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventOnRep_OverlayPose_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationMethod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationMethod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "OnRep_RotationMethod", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "OnRep_RotationSpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics
	{
		struct AGRAnimMasterComponent_eventRemoveTag_Parms
		{
			FGameplayTag InTag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventRemoveTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AGRAnimMasterComponent_eventRemoveTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGRAnimMasterComponent_eventRemoveTag_Parms), &Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::NewProp_InTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|AnimTags" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "RemoveTag", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventRemoveTag_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAimOffsetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimOffsetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAimOffsetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::NewProp_InAimOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::NewProp_InAimOffsetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::NewProp_InAimOffsetType = { "InAimOffsetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerChangeAimOffset_Parms, InAimOffsetType), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::NewProp_InAimOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::NewProp_InAimOffsetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::NewProp_InAimOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::NewProp_InAimOffsetType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ServerChangeAimOffset", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventServerChangeAimOffset_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRotationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRotationMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::NewProp_InRotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::NewProp_InRotationMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::NewProp_InRotationMethod = { "InRotationMethod", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerChangeRotation_Parms, InRotationMethod), Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::NewProp_InRotationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::NewProp_InRotationMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::NewProp_InRotationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::NewProp_InRotationMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ServerChangeRotation", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventServerChangeRotation_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAimOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::NewProp_InAimOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::NewProp_InAimOffset = { "InAimOffset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetAimOffset_Parms, InAimOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::NewProp_InAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::NewProp_InAimOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::NewProp_InAimOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ServerSetAimOffset", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventServerSetAimOffset_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBasePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::NewProp_InBasePose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::NewProp_InBasePose = { "InBasePose", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetBasePose_Parms, InBasePose), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::NewProp_InBasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::NewProp_InBasePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::NewProp_InBasePose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ServerSetBasePose", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventServerSetBasePose_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::NewProp_LookAt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::NewProp_LookAt = { "LookAt", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetLookAt_Parms, LookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::NewProp_LookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::NewProp_LookAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::NewProp_LookAt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ServerSetLookAt", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventServerSetLookAt_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOverlayPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOverlayPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::NewProp_InOverlayPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::NewProp_InOverlayPose = { "InOverlayPose", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetOverlayPose_Parms, InOverlayPose), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::NewProp_InOverlayPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::NewProp_InOverlayPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::NewProp_InOverlayPose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ServerSetOverlayPose", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventServerSetOverlayPose_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRotationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRotationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTurnStartAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTurnStartAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTurnStopTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTurnStopTolerance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationMethod = { "InRotationMethod", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetRotation_Parms, InRotationMethod), Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationSpeed = { "InRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetRotation_Parms, InRotationSpeed), METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStartAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStartAngle = { "InTurnStartAngle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetRotation_Parms, InTurnStartAngle), METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStartAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStartAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStopTolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStopTolerance = { "InTurnStopTolerance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetRotation_Parms, InTurnStopTolerance), METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStopTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStopTolerance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStartAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::NewProp_InTurnStopTolerance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ServerSetRotation", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventServerSetRotation_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAimOffsetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimOffsetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAimOffsetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAimBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAimBehavior;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimOffsetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimOffsetType = { "InAimOffsetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetupAimOffset_Parms, InAimOffsetType), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimOffsetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimBehavior_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimBehavior = { "InAimBehavior", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventServerSetupAimOffset_Parms, InAimBehavior), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimBehavior_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimOffsetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::NewProp_InAimBehavior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "ServerSetupAimOffset", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventServerSetupAimOffset_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics
	{
		struct AGRAnimMasterComponent_eventSetupAimOffset_Parms
		{
			EAGR_AimOffsets InAimOffsetType;
			EAGR_AimOffsetClamp InAimBehavior;
			float InAimClamp;
			bool InCameraBased;
			FName InAimSocketName;
			FName InLookAtSocketName;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAimOffsetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimOffsetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAimOffsetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InAimBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InAimBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAimClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCameraBased_MetaData[];
#endif
		static void NewProp_InCameraBased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InCameraBased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAimSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InAimSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLookAtSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InLookAtSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimOffsetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimOffsetType = { "InAimOffsetType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupAimOffset_Parms, InAimOffsetType), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimOffsetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimBehavior_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimBehavior = { "InAimBehavior", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupAimOffset_Parms, InAimBehavior), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimClamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimClamp = { "InAimClamp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupAimOffset_Parms, InAimClamp), METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InCameraBased_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InCameraBased_SetBit(void* Obj)
	{
		((AGRAnimMasterComponent_eventSetupAimOffset_Parms*)Obj)->InCameraBased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InCameraBased = { "InCameraBased", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGRAnimMasterComponent_eventSetupAimOffset_Parms), &Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InCameraBased_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InCameraBased_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InCameraBased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimSocketName = { "InAimSocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupAimOffset_Parms, InAimSocketName), METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InLookAtSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InLookAtSocketName = { "InLookAtSocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupAimOffset_Parms, InLookAtSocketName), METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InLookAtSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InLookAtSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimOffsetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InCameraBased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InAimSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::NewProp_InLookAtSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|AimOffset" },
		{ "CPP_Default_InAimBehavior", "Nearest" },
		{ "CPP_Default_InAimClamp", "90.000000" },
		{ "CPP_Default_InAimOffsetType", "NONE" },
		{ "CPP_Default_InAimSocketName", "hand_r" },
		{ "CPP_Default_InCameraBased", "true" },
		{ "CPP_Default_InLookAtSocketName", "head" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "SetupAimOffset", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventSetupAimOffset_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics
	{
		struct AGRAnimMasterComponent_eventSetupBasePose_Parms
		{
			FGameplayTag InBasePose;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBasePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::NewProp_InBasePose = { "InBasePose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupBasePose_Parms, InBasePose), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::NewProp_InBasePose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Poses" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "SetupBasePose", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventSetupBasePose_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics
	{
		struct AGRAnimMasterComponent_eventSetupFpp_Parms
		{
			bool bInFirstPerson;
		};
		static void NewProp_bInFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInFirstPerson;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::NewProp_bInFirstPerson_SetBit(void* Obj)
	{
		((AGRAnimMasterComponent_eventSetupFpp_Parms*)Obj)->bInFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::NewProp_bInFirstPerson = { "bInFirstPerson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGRAnimMasterComponent_eventSetupFpp_Parms), &Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::NewProp_bInFirstPerson_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::NewProp_bInFirstPerson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|FirstPerson" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "SetupFpp", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventSetupFpp_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics
	{
		struct AGRAnimMasterComponent_eventSetupOverlayPose_Parms
		{
			FGameplayTag InOverlayPose;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOverlayPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::NewProp_InOverlayPose = { "InOverlayPose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupOverlayPose_Parms, InOverlayPose), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::NewProp_InOverlayPose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Poses" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "SetupOverlayPose", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventSetupOverlayPose_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics
	{
		struct AGRAnimMasterComponent_eventSetupRotation_Parms
		{
			EAGR_RotationMethod InRotationMethod;
			float InRotationSpeed;
			float InTurnStartAngle;
			float InTurnStopTolerance;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRotationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRotationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTurnStartAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTurnStartAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTurnStopTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTurnStopTolerance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationMethod = { "InRotationMethod", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupRotation_Parms, InRotationMethod), Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationSpeed = { "InRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupRotation_Parms, InRotationSpeed), METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStartAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStartAngle = { "InTurnStartAngle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupRotation_Parms, InTurnStartAngle), METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStartAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStartAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStopTolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStopTolerance = { "InTurnStopTolerance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGRAnimMasterComponent_eventSetupRotation_Parms, InTurnStopTolerance), METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStopTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStopTolerance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStartAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::NewProp_InTurnStopTolerance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Rotation" },
		{ "CPP_Default_InRotationMethod", "NONE" },
		{ "CPP_Default_InRotationSpeed", "360.000000" },
		{ "CPP_Default_InTurnStartAngle", "90.000000" },
		{ "CPP_Default_InTurnStopTolerance", "5.000000" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "SetupRotation", nullptr, nullptr, sizeof(AGRAnimMasterComponent_eventSetupRotation_Parms), Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAGRAnimMasterComponent_TurnInPlaceTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAGRAnimMasterComponent_TurnInPlaceTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "AGR|Tick" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGRAnimMasterComponent_TurnInPlaceTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGRAnimMasterComponent, nullptr, "TurnInPlaceTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAGRAnimMasterComponent_TurnInPlaceTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGRAnimMasterComponent_TurnInPlaceTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAGRAnimMasterComponent_TurnInPlaceTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAGRAnimMasterComponent_TurnInPlaceTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAGRAnimMasterComponent_NoRegister()
	{
		return UAGRAnimMasterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAGRAnimMasterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlayPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlayPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBasePoseChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBasePoseChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlayPoseChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOverlayPoseChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstPerson_MetaData[];
#endif
		static void NewProp_bFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimModTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimModTags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnStartAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnStartAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnStopTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnStopTolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AimOffsetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AimOffsetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AimOffsetBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AimOffsetBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBased_MetaData[];
#endif
		static void NewProp_CameraBased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CameraBased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AimSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LookAtSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFirstPerson_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFirstPerson;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebuggerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebuggerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinePersists_MetaData[];
#endif
		static void NewProp_bLinePersists_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinePersists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineLifetime;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGRAnimMasterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAGRAnimMasterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_AddTag, "AddTag" }, // 3299718215
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_AimTick, "AimTick" }, // 2390917791
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeAimOffset, "ChangeAimOffset" }, // 1552375939
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ChangeRotation, "ChangeRotation" }, // 2960782530
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetAimOffset, "NetMultiSetAimOffset" }, // 776869530
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_NetMultiSetLookAt, "NetMultiSetLookAt" }, // 3271808074
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_BasePose, "OnRep_BasePose" }, // 54544650
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_OverlayPose, "OnRep_OverlayPose" }, // 2605858890
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationMethod, "OnRep_RotationMethod" }, // 3734194430
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_OnRep_RotationSpeed, "OnRep_RotationSpeed" }, // 2855029852
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_RemoveTag, "RemoveTag" }, // 1387751677
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeAimOffset, "ServerChangeAimOffset" }, // 1499390419
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ServerChangeRotation, "ServerChangeRotation" }, // 3275764728
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetAimOffset, "ServerSetAimOffset" }, // 2709549500
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetBasePose, "ServerSetBasePose" }, // 562378881
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetLookAt, "ServerSetLookAt" }, // 3797757733
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetOverlayPose, "ServerSetOverlayPose" }, // 1480812293
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetRotation, "ServerSetRotation" }, // 1477041654
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_ServerSetupAimOffset, "ServerSetupAimOffset" }, // 825863718
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_SetupAimOffset, "SetupAimOffset" }, // 1052225486
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_SetupBasePose, "SetupBasePose" }, // 2925620327
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_SetupFpp, "SetupFpp" }, // 2331752347
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_SetupOverlayPose, "SetupOverlayPose" }, // 3542783026
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_SetupRotation, "SetupRotation" }, // 2058115093
		{ &Z_Construct_UFunction_UAGRAnimMasterComponent_TurnInPlaceTick, "TurnInPlaceTick" }, // 3979196140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AGR" },
		{ "IncludePath", "Components/AGRAnimMasterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_BasePose = { "BasePose", "OnRep_BasePose", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, BasePose), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_BasePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OverlayPose_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OverlayPose = { "OverlayPose", "OnRep_OverlayPose", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, OverlayPose), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OverlayPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OverlayPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnBasePoseChanged_MetaData[] = {
		{ "Category", "AGR|Runtime" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnBasePoseChanged = { "OnBasePoseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, OnBasePoseChanged), Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnBasePoseChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnBasePoseChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnOverlayPoseChanged_MetaData[] = {
		{ "Category", "AGR|Runtime" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnOverlayPoseChanged = { "OnOverlayPoseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, OnOverlayPoseChanged), Z_Construct_UDelegateFunction_AGRPRO_OnPoseChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnOverlayPoseChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnOverlayPoseChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bFirstPerson_MetaData[] = {
		{ "Category", "AGR|Runtime" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bFirstPerson_SetBit(void* Obj)
	{
		((UAGRAnimMasterComponent*)Obj)->bFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bFirstPerson = { "bFirstPerson", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRAnimMasterComponent), &Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bFirstPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bFirstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bFirstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "AGR|Runtime" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, AimOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "Category", "AGR|Runtime" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AnimModTags_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AnimModTags = { "AnimModTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, AnimModTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AnimModTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AnimModTags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationMethod_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationMethod = { "RotationMethod", "OnRep_RotationMethod", (EPropertyFlags)0x0010000100010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, RotationMethod), Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", "OnRep_RotationSpeed", (EPropertyFlags)0x0010000100010025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStartAngle_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStartAngle = { "TurnStartAngle", nullptr, (EPropertyFlags)0x0010000000010025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, TurnStartAngle), METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStartAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStartAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStopTolerance_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStopTolerance = { "TurnStopTolerance", nullptr, (EPropertyFlags)0x0010000000010025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, TurnStopTolerance), METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStopTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStopTolerance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetType_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetType = { "AimOffsetType", nullptr, (EPropertyFlags)0x0010000000010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, AimOffsetType), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetBehavior_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetBehavior = { "AimOffsetBehavior", nullptr, (EPropertyFlags)0x0010000000010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, AimOffsetBehavior), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimClamp_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimClamp = { "AimClamp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, AimClamp), METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_CameraBased_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_CameraBased_SetBit(void* Obj)
	{
		((UAGRAnimMasterComponent*)Obj)->CameraBased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_CameraBased = { "CameraBased", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRAnimMasterComponent), &Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_CameraBased_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_CameraBased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_CameraBased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimSocketName_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimSocketName = { "AimSocketName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, AimSocketName), METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtSocketName_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtSocketName = { "LookAtSocketName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, LookAtSocketName), METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "Category", "AGR|Components" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, OwningCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwningCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwnerMovementComponent_MetaData[] = {
		{ "Category", "AGR|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwnerMovementComponent = { "OwnerMovementComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, OwnerMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwnerMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwnerMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnFirstPerson_MetaData[] = {
		{ "Category", "AGR|FirstPerson" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnFirstPerson = { "OnFirstPerson", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, OnFirstPerson), Z_Construct_UDelegateFunction_AGRPRO_OnFirstPerson__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnFirstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnFirstPerson_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UAGRAnimMasterComponent*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRAnimMasterComponent), &Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebugWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebugWidget = { "DebugWidget", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, DebugWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebugWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebugWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebuggerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebuggerController = { "DebuggerController", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, DebuggerController), Z_Construct_UClass_UAGRDebuggerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebuggerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebuggerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLineColor_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "Comment", "//Color of the line drawn to display when the starting point is LookAtSocket.\n" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
		{ "ToolTip", "Color of the line drawn to display when the starting point is LookAtSocket." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLineColor = { "LookAtLineColor", nullptr, (EPropertyFlags)0x0040000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, LookAtLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimLineColor_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "Comment", "//Color of the line drawn to display when the starting point is AimSocket.\n" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
		{ "ToolTip", "Color of the line drawn to display when the starting point is AimSocket." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimLineColor = { "AimLineColor", nullptr, (EPropertyFlags)0x0040000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, AimLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bLinePersists_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bLinePersists_SetBit(void* Obj)
	{
		((UAGRAnimMasterComponent*)Obj)->bLinePersists = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bLinePersists = { "bLinePersists", nullptr, (EPropertyFlags)0x0040000800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRAnimMasterComponent), &Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bLinePersists_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bLinePersists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bLinePersists_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0040000800010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, LineThickness), METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineLifetime_MetaData[] = {
		{ "Category", "AGR|Debug" },
		{ "ModuleRelativePath", "Public/Components/AGRAnimMasterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineLifetime = { "LineLifetime", nullptr, (EPropertyFlags)0x0040000800010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRAnimMasterComponent, LineLifetime), METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineLifetime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGRAnimMasterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_BasePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OverlayPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnBasePoseChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnOverlayPoseChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bFirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AnimModTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStartAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TurnStopTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimOffsetBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_CameraBased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwningCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OwnerMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_OnFirstPerson,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebugWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_DebuggerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LookAtLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_AimLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_bLinePersists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRAnimMasterComponent_Statics::NewProp_LineLifetime,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGRAnimMasterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGRAnimMasterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGRAnimMasterComponent_Statics::ClassParams = {
		&UAGRAnimMasterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAGRAnimMasterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRAnimMasterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGRAnimMasterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGRAnimMasterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGRAnimMasterComponent, 2674068892);
	template<> AGRPRO_API UClass* StaticClass<UAGRAnimMasterComponent>()
	{
		return UAGRAnimMasterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGRAnimMasterComponent(Z_Construct_UClass_UAGRAnimMasterComponent, &UAGRAnimMasterComponent::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGRAnimMasterComponent"), false, nullptr, nullptr, nullptr);

	void UAGRAnimMasterComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BasePose(TEXT("BasePose"));
		static const FName Name_OverlayPose(TEXT("OverlayPose"));
		static const FName Name_AnimModTags(TEXT("AnimModTags"));
		static const FName Name_RotationMethod(TEXT("RotationMethod"));
		static const FName Name_RotationSpeed(TEXT("RotationSpeed"));
		static const FName Name_TurnStartAngle(TEXT("TurnStartAngle"));
		static const FName Name_TurnStopTolerance(TEXT("TurnStopTolerance"));
		static const FName Name_AimOffsetType(TEXT("AimOffsetType"));
		static const FName Name_AimOffsetBehavior(TEXT("AimOffsetBehavior"));

		const bool bIsValid = true
			&& Name_BasePose == ClassReps[(int32)ENetFields_Private::BasePose].Property->GetFName()
			&& Name_OverlayPose == ClassReps[(int32)ENetFields_Private::OverlayPose].Property->GetFName()
			&& Name_AnimModTags == ClassReps[(int32)ENetFields_Private::AnimModTags].Property->GetFName()
			&& Name_RotationMethod == ClassReps[(int32)ENetFields_Private::RotationMethod].Property->GetFName()
			&& Name_RotationSpeed == ClassReps[(int32)ENetFields_Private::RotationSpeed].Property->GetFName()
			&& Name_TurnStartAngle == ClassReps[(int32)ENetFields_Private::TurnStartAngle].Property->GetFName()
			&& Name_TurnStopTolerance == ClassReps[(int32)ENetFields_Private::TurnStopTolerance].Property->GetFName()
			&& Name_AimOffsetType == ClassReps[(int32)ENetFields_Private::AimOffsetType].Property->GetFName()
			&& Name_AimOffsetBehavior == ClassReps[(int32)ENetFields_Private::AimOffsetBehavior].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAGRAnimMasterComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGRAnimMasterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
