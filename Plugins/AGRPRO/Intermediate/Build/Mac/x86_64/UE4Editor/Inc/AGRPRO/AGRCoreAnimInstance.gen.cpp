// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Animation/AGRCoreAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGRCoreAnimInstance() {}
// Cross Module References
	AGRPRO_API UClass* Z_Construct_UClass_UAGRCoreAnimInstance_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRCoreAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRAnimMasterComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void UAGRCoreAnimInstance::StaticRegisterNativesUAGRCoreAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UAGRCoreAnimInstance_NoRegister()
	{
		return UAGRCoreAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAGRCoreAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMasterComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMasterComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModificationTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlayPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlayPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawAimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawAimOffset;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalAimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalAimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimPitch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousFrameAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousFrameAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrafeVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstPerson_MetaData[];
#endif
		static void NewProp_bFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIdle_MetaData[];
#endif
		static void NewProp_bIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInAir_MetaData[];
#endif
		static void NewProp_bInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStanding_MetaData[];
#endif
		static void NewProp_bStanding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStanding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwimming_MetaData[];
#endif
		static void NewProp_bSwimming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwimming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrouching_MetaData[];
#endif
		static void NewProp_bCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGrounded_MetaData[];
#endif
		static void NewProp_bGrounded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrounded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWalkingState_MetaData[];
#endif
		static void NewProp_bWalkingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWalkingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlying_MetaData[];
#endif
		static void NewProp_bFlying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFalling_MetaData[];
#endif
		static void NewProp_bFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanSmooth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanSmooth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSmooth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSmooth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGRCoreAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/AGRCoreAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "Category", "AGR|Components" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, OwningCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwningCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwnerMovementComponent_MetaData[] = {
		{ "Category", "AGR|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwnerMovementComponent = { "OwnerMovementComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, OwnerMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwnerMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwnerMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AnimMasterComponent_MetaData[] = {
		{ "Category", "AGR|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AnimMasterComponent = { "AnimMasterComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, AnimMasterComponent), Z_Construct_UClass_UAGRAnimMasterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AnimMasterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AnimMasterComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ModificationTags_MetaData[] = {
		{ "Category", "AGR|Anim States" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ModificationTags = { "ModificationTags", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, ModificationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ModificationTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ModificationTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "AGR|Anim States" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, BasePose), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_BasePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OverlayPose_MetaData[] = {
		{ "Category", "AGR|Anim States" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OverlayPose = { "OverlayPose", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, OverlayPose), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OverlayPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OverlayPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RawAimOffset_MetaData[] = {
		{ "Category", "AGR|AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RawAimOffset = { "RawAimOffset", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, RawAimOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RawAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RawAimOffset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetType_MetaData[] = {
		{ "Category", "AGR|AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetType = { "AimOffsetType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, AimOffsetType), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetBehavior_MetaData[] = {
		{ "Category", "AGR|AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetBehavior = { "AimOffsetBehavior", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, AimOffsetBehavior), Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "Category", "AGR|AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_FinalAimOffset_MetaData[] = {
		{ "Category", "AGR|AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_FinalAimOffset = { "FinalAimOffset", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, FinalAimOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_FinalAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_FinalAimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimClamp_MetaData[] = {
		{ "Category", "AGR|AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimClamp = { "AimClamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, AimClamp), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimPitch_MetaData[] = {
		{ "Category", "AGR|AimOffset" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimPitch = { "AimPitch", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, AimPitch), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimPitch_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RotationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RotationMethod_MetaData[] = {
		{ "Category", "AGR|Rotation" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RotationMethod = { "RotationMethod", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, RotationMethod), Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RotationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RotationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_DeltaTick_MetaData[] = {
		{ "Category", "AGR|Runtime" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_DeltaTick = { "DeltaTick", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, DeltaTick), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_DeltaTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_DeltaTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousRotation_MetaData[] = {
		{ "Category", "AGR|Runtime" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousRotation = { "PreviousRotation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, PreviousRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousFrameAim_MetaData[] = {
		{ "Category", "AGR|Movement" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousFrameAim = { "PreviousFrameAim", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, PreviousFrameAim), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousFrameAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousFrameAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "AGR|Movement" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, Velocity), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ForwardVelocity_MetaData[] = {
		{ "Category", "AGR|Movement" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ForwardVelocity = { "ForwardVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, ForwardVelocity), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ForwardVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ForwardVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_StrafeVelocity_MetaData[] = {
		{ "Category", "AGR|Movement" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_StrafeVelocity = { "StrafeVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, StrafeVelocity), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_StrafeVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_StrafeVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_UpVelocity_MetaData[] = {
		{ "Category", "AGR|Movement" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_UpVelocity = { "UpVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, UpVelocity), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_UpVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_UpVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "AGR|Movement" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_InputAcceleration_MetaData[] = {
		{ "Category", "AGR|Runtime" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_InputAcceleration = { "InputAcceleration", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, InputAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_InputAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_InputAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFirstPerson_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFirstPerson_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFirstPerson = { "bFirstPerson", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFirstPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFirstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFirstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bIdle_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bIdle_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bIdle = { "bIdle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bInAir_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bInAir_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bInAir = { "bInAir", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bStanding_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bStanding_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bStanding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bStanding = { "bStanding", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bStanding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bStanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bStanding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bSwimming_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bSwimming_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bSwimming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bSwimming = { "bSwimming", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bSwimming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bSwimming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bSwimming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bCrouching_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bCrouching_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bCrouching = { "bCrouching", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bGrounded_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bGrounded_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bGrounded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bGrounded = { "bGrounded", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bGrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bGrounded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bWalkingState_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bWalkingState_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bWalkingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bWalkingState = { "bWalkingState", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bWalkingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bWalkingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bWalkingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFlying_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFlying_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bFlying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFlying = { "bFlying", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFlying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFlying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFlying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFalling_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFalling_SetBit(void* Obj)
	{
		((UAGRCoreAnimInstance*)Obj)->bFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFalling = { "bFalling", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAGRCoreAnimInstance), &Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_MovementMode_MetaData[] = {
		{ "Category", "AGR|State" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_MovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_MovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Lean_MetaData[] = {
		{ "Category", "AGR|Leans" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, Lean), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Lean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Lean_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimDelta_MetaData[] = {
		{ "Category", "AGR|Leans" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimDelta = { "AimDelta", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, AimDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_TargetFrameRate_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_TargetFrameRate = { "TargetFrameRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, TargetFrameRate), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_TargetFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_TargetFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LeanSmooth_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LeanSmooth = { "LeanSmooth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, LeanSmooth), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LeanSmooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LeanSmooth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimSmooth_MetaData[] = {
		{ "Category", "AGR|Setup" },
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimSmooth = { "AimSmooth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, AimSmooth), METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimSmooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimSmooth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PawnReference_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AGRCoreAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PawnReference = { "PawnReference", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRCoreAnimInstance, PawnReference), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PawnReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PawnReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGRCoreAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwningCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OwnerMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AnimMasterComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ModificationTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_BasePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_OverlayPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RawAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimOffsetBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_FinalAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RotationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_RotationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_DeltaTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PreviousFrameAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_ForwardVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_StrafeVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_UpVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_InputAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bStanding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bSwimming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bGrounded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bWalkingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_bFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_Lean,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_TargetFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_LeanSmooth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_AimSmooth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRCoreAnimInstance_Statics::NewProp_PawnReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGRCoreAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGRCoreAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGRCoreAnimInstance_Statics::ClassParams = {
		&UAGRCoreAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAGRCoreAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRCoreAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGRCoreAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGRCoreAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGRCoreAnimInstance, 1088561932);
	template<> AGRPRO_API UClass* StaticClass<UAGRCoreAnimInstance>()
	{
		return UAGRCoreAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGRCoreAnimInstance(Z_Construct_UClass_UAGRCoreAnimInstance, &UAGRCoreAnimInstance::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGRCoreAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGRCoreAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
