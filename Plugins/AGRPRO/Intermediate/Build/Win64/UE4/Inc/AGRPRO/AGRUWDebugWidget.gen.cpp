// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/UI/AGRUWDebugWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGRUWDebugWidget() {}
// Cross Module References
	AGRPRO_API UScriptStruct* Z_Construct_UScriptStruct_FAGRPropContainer();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	AGRPRO_API UScriptStruct* Z_Construct_UScriptStruct_FAGRDebugProp();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRUWDebugWidget_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRUWDebugWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
class UScriptStruct* FAGRPropContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGRPRO_API uint32 Get_Z_Construct_UScriptStruct_FAGRPropContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAGRPropContainer, Z_Construct_UPackage__Script_AGRPRO(), TEXT("AGRPropContainer"), sizeof(FAGRPropContainer), Get_Z_Construct_UScriptStruct_FAGRPropContainer_Hash());
	}
	return Singleton;
}
template<> AGRPRO_API UScriptStruct* StaticStruct<FAGRPropContainer>()
{
	return FAGRPropContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAGRPropContainer(FAGRPropContainer::StaticStruct, TEXT("/Script/AGRPRO"), TEXT("AGRPropContainer"), false, nullptr, nullptr);
static struct FScriptStruct_AGRPRO_StaticRegisterNativesFAGRPropContainer
{
	FScriptStruct_AGRPRO_StaticRegisterNativesFAGRPropContainer()
	{
		UScriptStruct::DeferCppStructOps<FAGRPropContainer>(FName(TEXT("AGRPropContainer")));
	}
} ScriptStruct_AGRPRO_StaticRegisterNativesFAGRPropContainer;
	struct Z_Construct_UScriptStruct_FAGRPropContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAGRPropContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAGRPropContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAGRPropContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAGRPropContainer_Statics::NewProp_Container_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAGRPropContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAGRPropContainer, Container), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAGRPropContainer_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRPropContainer_Statics::NewProp_Container_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAGRPropContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAGRPropContainer_Statics::NewProp_Container,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAGRPropContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
		nullptr,
		&NewStructOps,
		"AGRPropContainer",
		sizeof(FAGRPropContainer),
		alignof(FAGRPropContainer),
		Z_Construct_UScriptStruct_FAGRPropContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRPropContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAGRPropContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRPropContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAGRPropContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAGRPropContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AGRPropContainer"), sizeof(FAGRPropContainer), Get_Z_Construct_UScriptStruct_FAGRPropContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAGRPropContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAGRPropContainer_Hash() { return 1529233123U; }
class UScriptStruct* FAGRDebugProp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AGRPRO_API uint32 Get_Z_Construct_UScriptStruct_FAGRDebugProp_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAGRDebugProp, Z_Construct_UPackage__Script_AGRPRO(), TEXT("AGRDebugProp"), sizeof(FAGRDebugProp), Get_Z_Construct_UScriptStruct_FAGRDebugProp_Hash());
	}
	return Singleton;
}
template<> AGRPRO_API UScriptStruct* StaticStruct<FAGRDebugProp>()
{
	return FAGRDebugProp::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAGRDebugProp(FAGRDebugProp::StaticStruct, TEXT("/Script/AGRPRO"), TEXT("AGRDebugProp"), false, nullptr, nullptr);
static struct FScriptStruct_AGRPRO_StaticRegisterNativesFAGRDebugProp
{
	FScriptStruct_AGRPRO_StaticRegisterNativesFAGRDebugProp()
	{
		UScriptStruct::DeferCppStructOps<FAGRDebugProp>(FName(TEXT("AGRDebugProp")));
	}
} ScriptStruct_AGRPRO_StaticRegisterNativesFAGRDebugProp;
	struct Z_Construct_UScriptStruct_FAGRDebugProp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAGRDebugProp_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAGRDebugProp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAGRDebugProp>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAGRDebugProp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
		nullptr,
		&NewStructOps,
		"AGRDebugProp",
		sizeof(FAGRDebugProp),
		alignof(FAGRDebugProp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAGRDebugProp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAGRDebugProp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAGRDebugProp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAGRDebugProp_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AGRDebugProp"), sizeof(FAGRDebugProp), Get_Z_Construct_UScriptStruct_FAGRDebugProp_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAGRDebugProp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAGRDebugProp_Hash() { return 1952893487U; }
	void UAGRUWDebugWidget::StaticRegisterNativesUAGRUWDebugWidget()
	{
	}
	UClass* Z_Construct_UClass_UAGRUWDebugWidget_NoRegister()
	{
		return UAGRUWDebugWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAGRUWDebugWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRVariablesVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRVariablesVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRAnimStatesVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRAnimStatesVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRAimOffsetVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRAimOffsetVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRRotationVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRRotationVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRRuntimeVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRRuntimeVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRMovementVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRMovementVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRStateVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRStateVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRLeansVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRLeansVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRSetupVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRSetupVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBPCustomPropsVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimBPCustomPropsVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGRDebugPanelCustomProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AGRDebugPanelCustomProps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGRUWDebugWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/AGRUWDebugWidget.h" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRVariablesVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRVariablesVerticalBox = { "AGRVariablesVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRVariablesVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRVariablesVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRVariablesVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAnimStatesVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAnimStatesVerticalBox = { "AGRAnimStatesVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRAnimStatesVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAnimStatesVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAnimStatesVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAimOffsetVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAimOffsetVerticalBox = { "AGRAimOffsetVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRAimOffsetVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAimOffsetVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAimOffsetVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRotationVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRotationVerticalBox = { "AGRRotationVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRRotationVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRotationVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRotationVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRuntimeVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRuntimeVerticalBox = { "AGRRuntimeVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRRuntimeVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRuntimeVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRuntimeVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRMovementVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRMovementVerticalBox = { "AGRMovementVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRMovementVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRMovementVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRMovementVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRStateVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRStateVerticalBox = { "AGRStateVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRStateVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRStateVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRStateVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRLeansVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRLeansVerticalBox = { "AGRLeansVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRLeansVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRLeansVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRLeansVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRSetupVerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRSetupVerticalBox = { "AGRSetupVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRSetupVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRSetupVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRSetupVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AnimBPCustomPropsVerticalBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AnimBPCustomPropsVerticalBox = { "AnimBPCustomPropsVerticalBox", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AnimBPCustomPropsVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AnimBPCustomPropsVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AnimBPCustomPropsVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRDebugPanelCustomProps_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "AGR|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRUWDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRDebugPanelCustomProps = { "AGRDebugPanelCustomProps", nullptr, (EPropertyFlags)0x002008080008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRUWDebugWidget, AGRDebugPanelCustomProps), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRDebugPanelCustomProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRDebugPanelCustomProps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGRUWDebugWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRVariablesVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAnimStatesVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRAimOffsetVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRotationVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRRuntimeVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRMovementVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRStateVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRLeansVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRSetupVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AnimBPCustomPropsVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRUWDebugWidget_Statics::NewProp_AGRDebugPanelCustomProps,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGRUWDebugWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGRUWDebugWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGRUWDebugWidget_Statics::ClassParams = {
		&UAGRUWDebugWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAGRUWDebugWidget_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::PropPointers), 0),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAGRUWDebugWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRUWDebugWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGRUWDebugWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGRUWDebugWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGRUWDebugWidget, 1657915024);
	template<> AGRPRO_API UClass* StaticClass<UAGRUWDebugWidget>()
	{
		return UAGRUWDebugWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGRUWDebugWidget(Z_Construct_UClass_UAGRUWDebugWidget, &UAGRUWDebugWidget::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGRUWDebugWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGRUWDebugWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
