// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGRPRO_AGRTypes_generated_h
#error "AGRTypes.generated.h already included, missing '#pragma once' in AGRTypes.h"
#endif
#define AGRPRO_AGRTypes_generated_h

#define InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRTypes_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipment_Statics; \
	AGRPRO_API static class UScriptStruct* StaticStruct();


template<> AGRPRO_API UScriptStruct* StaticStruct<struct FEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InventorySample_Plugins_AGRPRO_Source_AGRPRO_Public_Data_AGRTypes_h


#define FOREACH_ENUM_EAGR_COMBATCOLLIDERTYPE(op) \
	op(EAGR_CombatColliderType::SimpleLineTrace) \
	op(EAGR_CombatColliderType::SimpleBoxTrace) \
	op(EAGR_CombatColliderType::SimpleCapsuleTrace) \
	op(EAGR_CombatColliderType::ComplexLineTrace) \
	op(EAGR_CombatColliderType::ComplexBoxTrace) 

enum class EAGR_CombatColliderType : uint8;
template<> AGRPRO_API UEnum* StaticEnum<EAGR_CombatColliderType>();

#define FOREACH_ENUM_EAGR_ROTATIONMETHOD(op) \
	op(EAGR_RotationMethod::NONE) \
	op(EAGR_RotationMethod::RotateToVelocity) \
	op(EAGR_RotationMethod::AbsoluteRotation) \
	op(EAGR_RotationMethod::DesiredRotation) \
	op(EAGR_RotationMethod::DesiredAtAngle) 

enum class EAGR_RotationMethod : uint8;
template<> AGRPRO_API UEnum* StaticEnum<EAGR_RotationMethod>();

#define FOREACH_ENUM_EAGR_AIMOFFSETS(op) \
	op(EAGR_AimOffsets::NONE) \
	op(EAGR_AimOffsets::Aim) \
	op(EAGR_AimOffsets::Look) 

enum class EAGR_AimOffsets : uint8;
template<> AGRPRO_API UEnum* StaticEnum<EAGR_AimOffsets>();

#define FOREACH_ENUM_EAGR_AIMOFFSETCLAMP(op) \
	op(EAGR_AimOffsetClamp::Nearest) \
	op(EAGR_AimOffsetClamp::Left) \
	op(EAGR_AimOffsetClamp::Right) 

enum class EAGR_AimOffsetClamp : uint8;
template<> AGRPRO_API UEnum* StaticEnum<EAGR_AimOffsetClamp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
