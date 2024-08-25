// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L01/EscaleraTrampa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscaleraTrampa() {}
// Cross Module References
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEscaleraTrampa_NoRegister();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEscaleraTrampa();
	DONKEYKONG_L01_API UClass* Z_Construct_UClass_AEscalera();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L01();
// End Cross Module References
	void AEscaleraTrampa::StaticRegisterNativesAEscaleraTrampa()
	{
	}
	UClass* Z_Construct_UClass_AEscaleraTrampa_NoRegister()
	{
		return AEscaleraTrampa::StaticClass();
	}
	struct Z_Construct_UClass_AEscaleraTrampa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscaleraTrampa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscalera,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscaleraTrampa_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscaleraTrampa.h" },
		{ "ModuleRelativePath", "EscaleraTrampa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscaleraTrampa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscaleraTrampa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscaleraTrampa_Statics::ClassParams = {
		&AEscaleraTrampa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscaleraTrampa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscaleraTrampa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscaleraTrampa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscaleraTrampa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscaleraTrampa, 2495279655);
	template<> DONKEYKONG_L01_API UClass* StaticClass<AEscaleraTrampa>()
	{
		return AEscaleraTrampa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscaleraTrampa(Z_Construct_UClass_AEscaleraTrampa, &AEscaleraTrampa::StaticClass, TEXT("/Script/DonkeyKong_L01"), TEXT("AEscaleraTrampa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscaleraTrampa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
