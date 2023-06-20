// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DazToUnreal/Public/DazToUnrealFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDazToUnrealFactory() {}
// Cross Module References
	DAZTOUNREAL_API UClass* Z_Construct_UClass_UDazToUnrealFactory_NoRegister();
	DAZTOUNREAL_API UClass* Z_Construct_UClass_UDazToUnrealFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DazToUnreal();
// End Cross Module References
	void UDazToUnrealFactory::StaticRegisterNativesUDazToUnrealFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDazToUnrealFactory);
	UClass* Z_Construct_UClass_UDazToUnrealFactory_NoRegister()
	{
		return UDazToUnrealFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDazToUnrealFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDazToUnrealFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnreal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDazToUnrealFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// The Daz Studio plugin creates a dtu file with the same string that's send over the network.  This factory allows that file to be imported to start the same process.\n" },
		{ "IncludePath", "DazToUnrealFactory.h" },
		{ "ModuleRelativePath", "Public/DazToUnrealFactory.h" },
		{ "ToolTip", "The Daz Studio plugin creates a dtu file with the same string that's send over the network.  This factory allows that file to be imported to start the same process." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDazToUnrealFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDazToUnrealFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDazToUnrealFactory_Statics::ClassParams = {
		&UDazToUnrealFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDazToUnrealFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDazToUnrealFactory()
	{
		if (!Z_Registration_Info_UClass_UDazToUnrealFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDazToUnrealFactory.OuterSingleton, Z_Construct_UClass_UDazToUnrealFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDazToUnrealFactory.OuterSingleton;
	}
	template<> DAZTOUNREAL_API UClass* StaticClass<UDazToUnrealFactory>()
	{
		return UDazToUnrealFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDazToUnrealFactory);
	struct Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDazToUnrealFactory, UDazToUnrealFactory::StaticClass, TEXT("UDazToUnrealFactory"), &Z_Registration_Info_UClass_UDazToUnrealFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDazToUnrealFactory), 3258090531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealFactory_h_2498631001(TEXT("/Script/DazToUnreal"),
		Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnreal_Public_DazToUnrealFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
