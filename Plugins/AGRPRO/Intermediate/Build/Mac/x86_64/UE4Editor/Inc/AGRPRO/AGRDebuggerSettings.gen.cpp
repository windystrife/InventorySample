// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/UI/AGRDebuggerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGRDebuggerSettings() {}
// Cross Module References
	AGRPRO_API UScriptStruct* Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRDebuggerSettings_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRDebuggerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAGRDebuggerSettingsKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGRPRO_API uint32 Get_Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, Z_Construct_UPackage__Script_AGRPRO(), TEXT("AGRDebuggerSettingsKey"), sizeof(FAGRDebuggerSettingsKey), Get_Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Hash());
	}
	return Singleton;
}
template<> AGRPRO_API UScriptStruct* StaticStruct<FAGRDebuggerSettingsKey>()
{
	return FAGRDebuggerSettingsKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAGRDebuggerSettingsKey(FAGRDebuggerSettingsKey::StaticStruct, TEXT("/Script/AGRPRO"), TEXT("AGRDebuggerSettingsKey"), false, nullptr, nullptr);
static struct FScriptStruct_AGRPRO_StaticRegisterNativesFAGRDebuggerSettingsKey
{
	FScriptStruct_AGRPRO_StaticRegisterNativesFAGRDebuggerSettingsKey()
	{
		UScriptStruct::DeferCppStructOps<FAGRDebuggerSettingsKey>(FName(TEXT("AGRDebuggerSettingsKey")));
	}
} ScriptStruct_AGRPRO_StaticRegisterNativesFAGRDebuggerSettingsKey;
	struct Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bControl_MetaData[];
#endif
		static void NewProp_bControl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[];
#endif
		static void NewProp_bAlt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[];
#endif
		static void NewProp_bShift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommand_MetaData[];
#endif
		static void NewProp_bCommand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAGRDebuggerSettingsKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAGRDebuggerSettingsKey, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bControl_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Does this binding require the control key on PC or the command key on Mac to be held */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Does this binding require the control key on PC or the command key on Mac to be held" },
	};
#endif
	void Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bControl_SetBit(void* Obj)
	{
		((FAGRDebuggerSettingsKey*)Obj)->bControl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bControl = { "bControl", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAGRDebuggerSettingsKey), &Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bControl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bAlt_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Does this binding require the alt key to be held */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Does this binding require the alt key to be held" },
	};
#endif
	void Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bAlt_SetBit(void* Obj)
	{
		((FAGRDebuggerSettingsKey*)Obj)->bAlt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAGRDebuggerSettingsKey), &Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bAlt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bAlt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bShift_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Does this binding require the shift key to be held */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Does this binding require the shift key to be held" },
	};
#endif
	void Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bShift_SetBit(void* Obj)
	{
		((FAGRDebuggerSettingsKey*)Obj)->bShift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAGRDebuggerSettingsKey), &Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bCommand_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Does this binding require the windows key on PC or the control key on Mac to be held */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Does this binding require the windows key on PC or the control key on Mac to be held" },
	};
#endif
	void Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bCommand_SetBit(void* Obj)
	{
		((FAGRDebuggerSettingsKey*)Obj)->bCommand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bCommand = { "bCommand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAGRDebuggerSettingsKey), &Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bCommand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bCommand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bAlt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::NewProp_bCommand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
		nullptr,
		&NewStructOps,
		"AGRDebuggerSettingsKey",
		sizeof(FAGRDebuggerSettingsKey),
		alignof(FAGRDebuggerSettingsKey),
		Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AGRDebuggerSettingsKey"), sizeof(FAGRDebuggerSettingsKey), Get_Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey_Hash() { return 538169029U; }
	void UAGRDebuggerSettings::StaticRegisterNativesUAGRDebuggerSettings()
	{
	}
	UClass* Z_Construct_UClass_UAGRDebuggerSettings_NoRegister()
	{
		return UAGRDebuggerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAGRDebuggerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryAnimState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryAnimState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryAimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryAimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryRuntime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryRuntime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryLeans_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryLeans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryCustom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryCustom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGRDebuggerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for AGR Debugger\n */" },
		{ "DisplayName", "AGR Debugger" },
		{ "IncludePath", "UI/AGRDebuggerSettings.h" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Settings for AGR Debugger" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_ActivationKey_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to activate AGR debugger tool */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to activate AGR debugger tool" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_ActivationKey = { "ActivationKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, ActivationKey), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_ActivationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_ActivationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAnimState_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to show / hide AnimState Category panel */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to show / hide AnimState Category panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAnimState = { "CategoryAnimState", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, CategoryAnimState), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAnimState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAnimState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAimOffset_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to show / hide AimOffset Category panel */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to show / hide AimOffset Category panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAimOffset = { "CategoryAimOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, CategoryAimOffset), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRotation_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to show / hide Rotation Category panel */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to show / hide Rotation Category panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRotation = { "CategoryRotation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, CategoryRotation), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRuntime_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to show / hide Runtime Category panel */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to show / hide Runtime Category panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRuntime = { "CategoryRuntime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, CategoryRuntime), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRuntime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRuntime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryMovement_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to show / hide Movement Category panel */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to show / hide Movement Category panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryMovement = { "CategoryMovement", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, CategoryMovement), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryState_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to show / hide State Category panel */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to show / hide State Category panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryState = { "CategoryState", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, CategoryState), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryLeans_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to show / hide Leans Category panel */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to show / hide Leans Category panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryLeans = { "CategoryLeans", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, CategoryLeans), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryLeans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryLeans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategorySetup_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to show / hide Setup Category panel */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to show / hide Setup Category panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategorySetup = { "CategorySetup", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, CategorySetup), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategorySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategorySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryCustom_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key used to show / hide Custom Category panel */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerSettings.h" },
		{ "ToolTip", "Key used to show / hide Custom Category panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryCustom = { "CategoryCustom", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerSettings, CategoryCustom), Z_Construct_UScriptStruct_FAGRDebuggerSettingsKey, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryCustom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryCustom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGRDebuggerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_ActivationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAnimState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryRuntime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryLeans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategorySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerSettings_Statics::NewProp_CategoryCustom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGRDebuggerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGRDebuggerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGRDebuggerSettings_Statics::ClassParams = {
		&UAGRDebuggerSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAGRDebuggerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGRDebuggerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGRDebuggerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGRDebuggerSettings, 2454436492);
	template<> AGRPRO_API UClass* StaticClass<UAGRDebuggerSettings>()
	{
		return UAGRDebuggerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGRDebuggerSettings(Z_Construct_UClass_UAGRDebuggerSettings, &UAGRDebuggerSettings::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGRDebuggerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGRDebuggerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
