// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGRPRO/Public/Data/AGR_Attack_NotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGR_Attack_NotifyState() {}
// Cross Module References
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_Attack_NotifyState_NoRegister();
	AGRPRO_API UClass* Z_Construct_UClass_UAGR_Attack_NotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_AGRPRO();
// End Cross Module References
	void UAGR_Attack_NotifyState::StaticRegisterNativesUAGR_Attack_NotifyState()
	{
	}
	UClass* Z_Construct_UClass_UAGR_Attack_NotifyState_NoRegister()
	{
		return UAGR_Attack_NotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UAGR_Attack_NotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGR_Attack_NotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AGRPRO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGR_Attack_NotifyState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Data/AGR_Attack_NotifyState.h" },
		{ "ModuleRelativePath", "Public/Data/AGR_Attack_NotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGR_Attack_NotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGR_Attack_NotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAGR_Attack_NotifyState_Statics::ClassParams = {
		&UAGR_Attack_NotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAGR_Attack_NotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGR_Attack_NotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGR_Attack_NotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAGR_Attack_NotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAGR_Attack_NotifyState, 3856060914);
	template<> AGRPRO_API UClass* StaticClass<UAGR_Attack_NotifyState>()
	{
		return UAGR_Attack_NotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAGR_Attack_NotifyState(Z_Construct_UClass_UAGR_Attack_NotifyState, &UAGR_Attack_NotifyState::StaticClass, TEXT("/Script/AGRPRO"), TEXT("UAGR_Attack_NotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGR_Attack_NotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
