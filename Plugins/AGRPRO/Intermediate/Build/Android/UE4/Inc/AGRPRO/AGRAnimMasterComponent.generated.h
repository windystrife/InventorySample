// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FVector;
struct FRotator;
enum class EAGR_AimOffsets : uint8;
enum class EAGR_AimOffsetClamp : uint8;
enum class EAGR_RotationMethod : uint8;
#ifdef AGRPRO_AGRAnimMasterComponent_generated_h
#error "AGRAnimMasterComponent.generated.h already included, missing '#pragma once' in AGRAnimMasterComponent.h"
#endif
#define AGRPRO_AGRAnimMasterComponent_generated_h

#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_18_DELEGATE \
struct _Script_AGRPRO_eventOnPoseChanged_Parms \
{ \
	FGameplayTag OldValue; \
	FGameplayTag NewValue; \
}; \
static inline void FOnPoseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPoseChanged, FGameplayTag OldValue, FGameplayTag NewValue) \
{ \
	_Script_AGRPRO_eventOnPoseChanged_Parms Parms; \
	Parms.OldValue=OldValue; \
	Parms.NewValue=NewValue; \
	OnPoseChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_16_DELEGATE \
struct _Script_AGRPRO_eventOnFirstPerson_Parms \
{ \
	bool bIsFirstPersonView; \
}; \
static inline void FOnFirstPerson_DelegateWrapper(const FMulticastScriptDelegate& OnFirstPerson, bool bIsFirstPersonView) \
{ \
	_Script_AGRPRO_eventOnFirstPerson_Parms Parms; \
	Parms.bIsFirstPersonView=bIsFirstPersonView ? true : false; \
	OnFirstPerson.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_SPARSE_DATA
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_RPC_WRAPPERS \
	virtual void NetMultiSetLookAt_Implementation(const FVector LookAt); \
	virtual void ServerSetLookAt_Implementation(const FVector LookAt); \
	virtual void NetMultiSetAimOffset_Implementation(const FRotator InAimOffset); \
	virtual void ServerSetAimOffset_Implementation(const FRotator InAimOffset); \
	virtual void ServerChangeAimOffset_Implementation(const EAGR_AimOffsets InAimOffsetType); \
	virtual void ServerSetupAimOffset_Implementation(const EAGR_AimOffsets InAimOffsetType, const EAGR_AimOffsetClamp InAimBehavior); \
	virtual void ServerChangeRotation_Implementation(const EAGR_RotationMethod InRotationMethod); \
	virtual void ServerSetRotation_Implementation(const EAGR_RotationMethod InRotationMethod, const float InRotationSpeed, const float InTurnStartAngle, const float InTurnStopTolerance); \
	virtual void ServerSetOverlayPose_Implementation(const FGameplayTag InOverlayPose); \
	virtual void ServerSetBasePose_Implementation(const FGameplayTag InBasePose); \
 \
	DECLARE_FUNCTION(execNetMultiSetLookAt); \
	DECLARE_FUNCTION(execServerSetLookAt); \
	DECLARE_FUNCTION(execNetMultiSetAimOffset); \
	DECLARE_FUNCTION(execServerSetAimOffset); \
	DECLARE_FUNCTION(execServerChangeAimOffset); \
	DECLARE_FUNCTION(execServerSetupAimOffset); \
	DECLARE_FUNCTION(execServerChangeRotation); \
	DECLARE_FUNCTION(execServerSetRotation); \
	DECLARE_FUNCTION(execServerSetOverlayPose); \
	DECLARE_FUNCTION(execServerSetBasePose); \
	DECLARE_FUNCTION(execOnRep_RotationSpeed); \
	DECLARE_FUNCTION(execOnRep_RotationMethod); \
	DECLARE_FUNCTION(execOnRep_OverlayPose); \
	DECLARE_FUNCTION(execOnRep_BasePose); \
	DECLARE_FUNCTION(execTurnInPlaceTick); \
	DECLARE_FUNCTION(execAimTick); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execChangeAimOffset); \
	DECLARE_FUNCTION(execSetupAimOffset); \
	DECLARE_FUNCTION(execChangeRotation); \
	DECLARE_FUNCTION(execSetupRotation); \
	DECLARE_FUNCTION(execSetupFpp); \
	DECLARE_FUNCTION(execSetupOverlayPose); \
	DECLARE_FUNCTION(execSetupBasePose);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NetMultiSetLookAt_Implementation(const FVector LookAt); \
	virtual void ServerSetLookAt_Implementation(const FVector LookAt); \
	virtual void NetMultiSetAimOffset_Implementation(const FRotator InAimOffset); \
	virtual void ServerSetAimOffset_Implementation(const FRotator InAimOffset); \
	virtual void ServerChangeAimOffset_Implementation(const EAGR_AimOffsets InAimOffsetType); \
	virtual void ServerSetupAimOffset_Implementation(const EAGR_AimOffsets InAimOffsetType, const EAGR_AimOffsetClamp InAimBehavior); \
	virtual void ServerChangeRotation_Implementation(const EAGR_RotationMethod InRotationMethod); \
	virtual void ServerSetRotation_Implementation(const EAGR_RotationMethod InRotationMethod, const float InRotationSpeed, const float InTurnStartAngle, const float InTurnStopTolerance); \
	virtual void ServerSetOverlayPose_Implementation(const FGameplayTag InOverlayPose); \
	virtual void ServerSetBasePose_Implementation(const FGameplayTag InBasePose); \
 \
	DECLARE_FUNCTION(execNetMultiSetLookAt); \
	DECLARE_FUNCTION(execServerSetLookAt); \
	DECLARE_FUNCTION(execNetMultiSetAimOffset); \
	DECLARE_FUNCTION(execServerSetAimOffset); \
	DECLARE_FUNCTION(execServerChangeAimOffset); \
	DECLARE_FUNCTION(execServerSetupAimOffset); \
	DECLARE_FUNCTION(execServerChangeRotation); \
	DECLARE_FUNCTION(execServerSetRotation); \
	DECLARE_FUNCTION(execServerSetOverlayPose); \
	DECLARE_FUNCTION(execServerSetBasePose); \
	DECLARE_FUNCTION(execOnRep_RotationSpeed); \
	DECLARE_FUNCTION(execOnRep_RotationMethod); \
	DECLARE_FUNCTION(execOnRep_OverlayPose); \
	DECLARE_FUNCTION(execOnRep_BasePose); \
	DECLARE_FUNCTION(execTurnInPlaceTick); \
	DECLARE_FUNCTION(execAimTick); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execChangeAimOffset); \
	DECLARE_FUNCTION(execSetupAimOffset); \
	DECLARE_FUNCTION(execChangeRotation); \
	DECLARE_FUNCTION(execSetupRotation); \
	DECLARE_FUNCTION(execSetupFpp); \
	DECLARE_FUNCTION(execSetupOverlayPose); \
	DECLARE_FUNCTION(execSetupBasePose);


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_EVENT_PARMS \
	struct AGRAnimMasterComponent_eventNetMultiSetAimOffset_Parms \
	{ \
		FRotator InAimOffset; \
	}; \
	struct AGRAnimMasterComponent_eventNetMultiSetLookAt_Parms \
	{ \
		FVector LookAt; \
	}; \
	struct AGRAnimMasterComponent_eventServerChangeAimOffset_Parms \
	{ \
		EAGR_AimOffsets InAimOffsetType; \
	}; \
	struct AGRAnimMasterComponent_eventServerChangeRotation_Parms \
	{ \
		EAGR_RotationMethod InRotationMethod; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetAimOffset_Parms \
	{ \
		FRotator InAimOffset; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetBasePose_Parms \
	{ \
		FGameplayTag InBasePose; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetLookAt_Parms \
	{ \
		FVector LookAt; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetOverlayPose_Parms \
	{ \
		FGameplayTag InOverlayPose; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetRotation_Parms \
	{ \
		EAGR_RotationMethod InRotationMethod; \
		float InRotationSpeed; \
		float InTurnStartAngle; \
		float InTurnStopTolerance; \
	}; \
	struct AGRAnimMasterComponent_eventServerSetupAimOffset_Parms \
	{ \
		EAGR_AimOffsets InAimOffsetType; \
		EAGR_AimOffsetClamp InAimBehavior; \
	};


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_CALLBACK_WRAPPERS
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGRAnimMasterComponent(); \
	friend struct Z_Construct_UClass_UAGRAnimMasterComponent_Statics; \
public: \
	DECLARE_CLASS(UAGRAnimMasterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGRAnimMasterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BasePose=NETFIELD_REP_START, \
		OverlayPose, \
		AnimModTags, \
		RotationMethod, \
		RotationSpeed, \
		TurnStartAngle, \
		TurnStopTolerance, \
		AimOffsetType, \
		AimOffsetBehavior, \
		NETFIELD_REP_END=AimOffsetBehavior	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAGRAnimMasterComponent(); \
	friend struct Z_Construct_UClass_UAGRAnimMasterComponent_Statics; \
public: \
	DECLARE_CLASS(UAGRAnimMasterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGRPRO"), NO_API) \
	DECLARE_SERIALIZER(UAGRAnimMasterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BasePose=NETFIELD_REP_START, \
		OverlayPose, \
		AnimModTags, \
		RotationMethod, \
		RotationSpeed, \
		TurnStartAngle, \
		TurnStopTolerance, \
		AimOffsetType, \
		AimOffsetBehavior, \
		NETFIELD_REP_END=AimOffsetBehavior	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGRAnimMasterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGRAnimMasterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGRAnimMasterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGRAnimMasterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGRAnimMasterComponent(UAGRAnimMasterComponent&&); \
	NO_API UAGRAnimMasterComponent(const UAGRAnimMasterComponent&); \
public:


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGRAnimMasterComponent(UAGRAnimMasterComponent&&); \
	NO_API UAGRAnimMasterComponent(const UAGRAnimMasterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGRAnimMasterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGRAnimMasterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAGRAnimMasterComponent)


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_20_PROLOG \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_EVENT_PARMS


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_RPC_WRAPPERS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_CALLBACK_WRAPPERS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_INCLASS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_SPARSE_DATA \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_CALLBACK_WRAPPERS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGRPRO_API UClass* StaticClass<class UAGRAnimMasterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AGRPRO_Source_AGRPRO_Public_Components_AGRAnimMasterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
