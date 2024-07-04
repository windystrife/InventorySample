// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Data/AGRTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGRTypes() {}
// Cross Module References
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_CombatColliderType();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets();
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp();
	AGRPRO_API UScriptStruct* Z_Construct_UScriptStruct_FEquipment();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EAGR_CombatColliderType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AGRPRO_EAGR_CombatColliderType, Z_Construct_UPackage__Script_AGRPRO(), TEXT("EAGR_CombatColliderType"));
		}
		return Singleton;
	}
	template<> AGRPRO_API UEnum* StaticEnum<EAGR_CombatColliderType>()
	{
		return EAGR_CombatColliderType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAGR_CombatColliderType(EAGR_CombatColliderType_StaticEnum, TEXT("/Script/AGRPRO"), TEXT("EAGR_CombatColliderType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AGRPRO_EAGR_CombatColliderType_Hash() { return 3071523770U; }
	UEnum* Z_Construct_UEnum_AGRPRO_EAGR_CombatColliderType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAGR_CombatColliderType"), 0, Get_Z_Construct_UEnum_AGRPRO_EAGR_CombatColliderType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAGR_CombatColliderType::SimpleLineTrace", (int64)EAGR_CombatColliderType::SimpleLineTrace },
				{ "EAGR_CombatColliderType::SimpleBoxTrace", (int64)EAGR_CombatColliderType::SimpleBoxTrace },
				{ "EAGR_CombatColliderType::SimpleCapsuleTrace", (int64)EAGR_CombatColliderType::SimpleCapsuleTrace },
				{ "EAGR_CombatColliderType::ComplexLineTrace", (int64)EAGR_CombatColliderType::ComplexLineTrace },
				{ "EAGR_CombatColliderType::ComplexBoxTrace", (int64)EAGR_CombatColliderType::ComplexBoxTrace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Types of tracing for objects\n */" },
				{ "ComplexBoxTrace.Comment", "// Horizontal box traces\n" },
				{ "ComplexBoxTrace.DisplayName", "Complex Box Trace" },
				{ "ComplexBoxTrace.Name", "EAGR_CombatColliderType::ComplexBoxTrace" },
				{ "ComplexBoxTrace.ToolTip", "Horizontal box traces" },
				{ "ComplexLineTrace.Comment", "// Horizontal line tracing\n" },
				{ "ComplexLineTrace.DisplayName", "Complex Line Trace" },
				{ "ComplexLineTrace.Name", "EAGR_CombatColliderType::ComplexLineTrace" },
				{ "ComplexLineTrace.ToolTip", "Horizontal line tracing" },
				{ "ModuleRelativePath", "Public/Data/AGRTypes.h" },
				{ "SimpleBoxTrace.Comment", "// Simple collision sweep with box instead of lines for additional thickness\n" },
				{ "SimpleBoxTrace.DisplayName", "Simple Box Trace" },
				{ "SimpleBoxTrace.Name", "EAGR_CombatColliderType::SimpleBoxTrace" },
				{ "SimpleBoxTrace.ToolTip", "Simple collision sweep with box instead of lines for additional thickness" },
				{ "SimpleCapsuleTrace.Comment", "// Simple trace with capsule along the weapon\n" },
				{ "SimpleCapsuleTrace.DisplayName", "Simple Capsule Trace" },
				{ "SimpleCapsuleTrace.Name", "EAGR_CombatColliderType::SimpleCapsuleTrace" },
				{ "SimpleCapsuleTrace.ToolTip", "Simple trace with capsule along the weapon" },
				{ "SimpleLineTrace.Comment", "// Simplest line trace avaiable. usable for mass adaptation without impacting performance\n" },
				{ "SimpleLineTrace.DisplayName", "Simple Line Trace" },
				{ "SimpleLineTrace.Name", "EAGR_CombatColliderType::SimpleLineTrace" },
				{ "SimpleLineTrace.ToolTip", "Simplest line trace avaiable. usable for mass adaptation without impacting performance" },
				{ "ToolTip", "Types of tracing for objects" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AGRPRO,
				nullptr,
				"EAGR_CombatColliderType",
				"EAGR_CombatColliderType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAGR_RotationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod, Z_Construct_UPackage__Script_AGRPRO(), TEXT("EAGR_RotationMethod"));
		}
		return Singleton;
	}
	template<> AGRPRO_API UEnum* StaticEnum<EAGR_RotationMethod>()
	{
		return EAGR_RotationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAGR_RotationMethod(EAGR_RotationMethod_StaticEnum, TEXT("/Script/AGRPRO"), TEXT("EAGR_RotationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod_Hash() { return 196124764U; }
	UEnum* Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAGR_RotationMethod"), 0, Get_Z_Construct_UEnum_AGRPRO_EAGR_RotationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAGR_RotationMethod::NONE", (int64)EAGR_RotationMethod::NONE },
				{ "EAGR_RotationMethod::RotateToVelocity", (int64)EAGR_RotationMethod::RotateToVelocity },
				{ "EAGR_RotationMethod::AbsoluteRotation", (int64)EAGR_RotationMethod::AbsoluteRotation },
				{ "EAGR_RotationMethod::DesiredRotation", (int64)EAGR_RotationMethod::DesiredRotation },
				{ "EAGR_RotationMethod::DesiredAtAngle", (int64)EAGR_RotationMethod::DesiredAtAngle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbsoluteRotation.DisplayName", "Absolute Rotation" },
				{ "AbsoluteRotation.Name", "EAGR_RotationMethod::AbsoluteRotation" },
				{ "BlueprintType", "true" },
				{ "DesiredAtAngle.DisplayName", "Desired At Angle" },
				{ "DesiredAtAngle.Name", "EAGR_RotationMethod::DesiredAtAngle" },
				{ "DesiredRotation.DisplayName", "Desired Rotation" },
				{ "DesiredRotation.Name", "EAGR_RotationMethod::DesiredRotation" },
				{ "ModuleRelativePath", "Public/Data/AGRTypes.h" },
				{ "NONE.DisplayName", "NONE" },
				{ "NONE.Name", "EAGR_RotationMethod::NONE" },
				{ "RotateToVelocity.DisplayName", "Rotate To Velocity" },
				{ "RotateToVelocity.Name", "EAGR_RotationMethod::RotateToVelocity" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AGRPRO,
				nullptr,
				"EAGR_RotationMethod",
				"EAGR_RotationMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAGR_AimOffsets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets, Z_Construct_UPackage__Script_AGRPRO(), TEXT("EAGR_AimOffsets"));
		}
		return Singleton;
	}
	template<> AGRPRO_API UEnum* StaticEnum<EAGR_AimOffsets>()
	{
		return EAGR_AimOffsets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAGR_AimOffsets(EAGR_AimOffsets_StaticEnum, TEXT("/Script/AGRPRO"), TEXT("EAGR_AimOffsets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets_Hash() { return 3330030919U; }
	UEnum* Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAGR_AimOffsets"), 0, Get_Z_Construct_UEnum_AGRPRO_EAGR_AimOffsets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAGR_AimOffsets::NONE", (int64)EAGR_AimOffsets::NONE },
				{ "EAGR_AimOffsets::Aim", (int64)EAGR_AimOffsets::Aim },
				{ "EAGR_AimOffsets::Look", (int64)EAGR_AimOffsets::Look },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aim.DisplayName", "Aim" },
				{ "Aim.Name", "EAGR_AimOffsets::Aim" },
				{ "BlueprintType", "true" },
				{ "Look.DisplayName", "Look" },
				{ "Look.Name", "EAGR_AimOffsets::Look" },
				{ "ModuleRelativePath", "Public/Data/AGRTypes.h" },
				{ "NONE.DisplayName", "NONE" },
				{ "NONE.Name", "EAGR_AimOffsets::NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AGRPRO,
				nullptr,
				"EAGR_AimOffsets",
				"EAGR_AimOffsets",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAGR_AimOffsetClamp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp, Z_Construct_UPackage__Script_AGRPRO(), TEXT("EAGR_AimOffsetClamp"));
		}
		return Singleton;
	}
	template<> AGRPRO_API UEnum* StaticEnum<EAGR_AimOffsetClamp>()
	{
		return EAGR_AimOffsetClamp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAGR_AimOffsetClamp(EAGR_AimOffsetClamp_StaticEnum, TEXT("/Script/AGRPRO"), TEXT("EAGR_AimOffsetClamp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp_Hash() { return 2283249012U; }
	UEnum* Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAGR_AimOffsetClamp"), 0, Get_Z_Construct_UEnum_AGRPRO_EAGR_AimOffsetClamp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAGR_AimOffsetClamp::Nearest", (int64)EAGR_AimOffsetClamp::Nearest },
				{ "EAGR_AimOffsetClamp::Left", (int64)EAGR_AimOffsetClamp::Left },
				{ "EAGR_AimOffsetClamp::Right", (int64)EAGR_AimOffsetClamp::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.DisplayName", "Left" },
				{ "Left.Name", "EAGR_AimOffsetClamp::Left" },
				{ "ModuleRelativePath", "Public/Data/AGRTypes.h" },
				{ "Nearest.DisplayName", "Nearest" },
				{ "Nearest.Name", "EAGR_AimOffsetClamp::Nearest" },
				{ "Right.DisplayName", "Right" },
				{ "Right.Name", "EAGR_AimOffsetClamp::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AGRPRO,
				nullptr,
				"EAGR_AimOffsetClamp",
				"EAGR_AimOffsetClamp",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEquipment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGRPRO_API uint32 Get_Z_Construct_UScriptStruct_FEquipment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipment, Z_Construct_UPackage__Script_AGRPRO(), TEXT("Equipment"), sizeof(FEquipment), Get_Z_Construct_UScriptStruct_FEquipment_Hash());
	}
	return Singleton;
}
template<> AGRPRO_API UScriptStruct* StaticStruct<FEquipment>()
{
	return FEquipment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEquipment(FEquipment::StaticStruct, TEXT("/Script/AGRPRO"), TEXT("Equipment"), false, nullptr, nullptr);
static struct FScriptStruct_AGRPRO_StaticRegisterNativesFEquipment
{
	FScriptStruct_AGRPRO_StaticRegisterNativesFEquipment()
	{
		UScriptStruct::DeferCppStructOps<FEquipment>(FName(TEXT("Equipment")));
	}
} ScriptStruct_AGRPRO_StaticRegisterNativesFEquipment;
	struct Z_Construct_UScriptStruct_FEquipment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcceptableSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/AGRTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Data/AGRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipment, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_AcceptableSlots_MetaData[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Data/AGRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_AcceptableSlots = { "AcceptableSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipment, AcceptableSlots), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_AcceptableSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_AcceptableSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_ItemActor_MetaData[] = {
		{ "Category", "AGR" },
		{ "ModuleRelativePath", "Public/Data/AGRTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_ItemActor = { "ItemActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipment, ItemActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_ItemActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_ItemActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_AcceptableSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipment_Statics::NewProp_ItemActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
		nullptr,
		&NewStructOps,
		"Equipment",
		sizeof(FEquipment),
		alignof(FEquipment),
		Z_Construct_UScriptStruct_FEquipment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEquipment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Equipment"), sizeof(FEquipment), Get_Z_Construct_UScriptStruct_FEquipment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEquipment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEquipment_Hash() { return 2762264856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
