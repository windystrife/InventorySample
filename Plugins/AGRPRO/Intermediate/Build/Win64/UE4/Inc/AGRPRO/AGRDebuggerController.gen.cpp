// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/UI/AGRDebuggerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGRDebuggerController() {}
// Cross Module References
	AGRPRO_API UEnum* Z_Construct_UEnum_AGRPRO_EAGRDebuggerCategories();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRDebuggerController_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRDebuggerController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AGRPRO_API UClass* Z_Construct_UClass_UAGRUWDebugWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	static UEnum* EAGRDebuggerCategories_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AGRPRO_EAGRDebuggerCategories, Z_Construct_UPackage__Script_AGRPRO(), TEXT("EAGRDebuggerCategories"));
		}
		return Singleton;
	}
	template<> AGRPRO_API UEnum* StaticEnum<EAGRDebuggerCategories>()
	{
		return EAGRDebuggerCategories_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAGRDebuggerCategories(EAGRDebuggerCategories_StaticEnum, TEXT("/Script/AGRPRO"), TEXT("EAGRDebuggerCategories"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AGRPRO_EAGRDebuggerCategories_Hash() { return 4044650260U; }
	UEnum* Z_Construct_UEnum_AGRPRO_EAGRDebuggerCategories()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AGRPRO();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAGRDebuggerCategories"), 0, Get_Z_Construct_UEnum_AGRPRO_EAGRDebuggerCategories_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAGRDebuggerCategories::Custom", (int64)EAGRDebuggerCategories::Custom },
				{ "EAGRDebuggerCategories::AnimState", (int64)EAGRDebuggerCategories::AnimState },
				{ "EAGRDebuggerCategories::AimOffset", (int64)EAGRDebuggerCategories::AimOffset },
				{ "EAGRDebuggerCategories::Rotation", (int64)EAGRDebuggerCategories::Rotation },
				{ "EAGRDebuggerCategories::Runtime", (int64)EAGRDebuggerCategories::Runtime },
				{ "EAGRDebuggerCategories::Movement", (int64)EAGRDebuggerCategories::Movement },
				{ "EAGRDebuggerCategories::State", (int64)EAGRDebuggerCategories::State },
				{ "EAGRDebuggerCategories::Leans", (int64)EAGRDebuggerCategories::Leans },
				{ "EAGRDebuggerCategories::Setup", (int64)EAGRDebuggerCategories::Setup },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AimOffset.Name", "EAGRDebuggerCategories::AimOffset" },
				{ "AnimState.Name", "EAGRDebuggerCategories::AnimState" },
				{ "Custom.Name", "EAGRDebuggerCategories::Custom" },
				{ "Leans.Name", "EAGRDebuggerCategories::Leans" },
				{ "ModuleRelativePath", "Public/UI/AGRDebuggerController.h" },
				{ "Movement.Name", "EAGRDebuggerCategories::Movement" },
				{ "Rotation.Name", "EAGRDebuggerCategories::Rotation" },
				{ "Runtime.Name", "EAGRDebuggerCategories::Runtime" },
				{ "Setup.Name", "EAGRDebuggerCategories::Setup" },
				{ "State.Name", "EAGRDebuggerCategories::State" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AGRPRO,
				nullptr,
				"EAGRDebuggerCategories",
				"EAGRDebuggerCategories",
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
	void UAGRDebuggerController::StaticRegisterNativesUAGRDebuggerController()
	{
	}
	UClass* Z_Construct_UClass_UAGRDebuggerController_NoRegister()
	{
		return UAGRDebuggerController::StaticClass();
	}
	struct Z_Construct_UClass_UAGRDebuggerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerController;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputMappings_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputMappings_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InputMappings;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGRDebuggerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds Owner PlayerController and handles input binding for AGR Debugger\n */" },
		{ "IncludePath", "UI/AGRDebuggerController.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerController.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Holds Owner PlayerController and handles input binding for AGR Debugger" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_DebugWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_DebugWidget = { "DebugWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerController, DebugWidget), Z_Construct_UClass_UAGRUWDebugWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_DebugWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_DebugWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_CachedPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_CachedPlayerController = { "CachedPlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerController, CachedPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_CachedPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_CachedPlayerController_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_InputMappings_ValueProp = { "InputMappings", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_InputMappings_Key_KeyProp = { "InputMappings_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_InputMappings_MetaData[] = {
		{ "Comment", "/** Qwerty Key to Azerty key association */" },
		{ "ModuleRelativePath", "Public/UI/AGRDebuggerController.h" },
		{ "ToolTip", "Qwerty Key to Azerty key association" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_InputMappings = { "InputMappings", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAGRDebuggerController, InputMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_InputMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_InputMappings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGRDebuggerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_DebugWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_CachedPlayerController,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_InputMappings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_InputMappings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGRDebuggerController_Statics::NewProp_InputMappings,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGRDebuggerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGRDebuggerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGRDebuggerController_Statics::ClassParams = {
		&UAGRDebuggerController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAGRDebuggerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerController_Statics::PropPointers),
		0,
		0x049000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAGRDebuggerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGRDebuggerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGRDebuggerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGRDebuggerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGRDebuggerController, 1364337492);
	template<> AGRPRO_API UClass* StaticClass<UAGRDebuggerController>()
	{
		return UAGRDebuggerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGRDebuggerController(Z_Construct_UClass_UAGRDebuggerController, &UAGRDebuggerController::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGRDebuggerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGRDebuggerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
