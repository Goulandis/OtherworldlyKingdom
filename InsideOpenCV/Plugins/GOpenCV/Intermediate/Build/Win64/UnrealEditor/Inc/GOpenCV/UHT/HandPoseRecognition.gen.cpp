// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOpenCV/PoseRecognition/HandPoseRecognition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandPoseRecognition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GOPENCV_API UClass* Z_Construct_UClass_AHandPoseRecognition();
	GOPENCV_API UClass* Z_Construct_UClass_AHandPoseRecognition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GOpenCV();
// End Cross Module References
	void AHandPoseRecognition::StaticRegisterNativesAHandPoseRecognition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHandPoseRecognition);
	UClass* Z_Construct_UClass_AHandPoseRecognition_NoRegister()
	{
		return AHandPoseRecognition::StaticClass();
	}
	struct Z_Construct_UClass_AHandPoseRecognition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHandPoseRecognition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GOpenCV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandPoseRecognition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseRecognition/HandPoseRecognition.h" },
		{ "ModuleRelativePath", "PoseRecognition/HandPoseRecognition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHandPoseRecognition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHandPoseRecognition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHandPoseRecognition_Statics::ClassParams = {
		&AHandPoseRecognition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHandPoseRecognition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHandPoseRecognition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHandPoseRecognition()
	{
		if (!Z_Registration_Info_UClass_AHandPoseRecognition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHandPoseRecognition.OuterSingleton, Z_Construct_UClass_AHandPoseRecognition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHandPoseRecognition.OuterSingleton;
	}
	template<> GOPENCV_API UClass* StaticClass<AHandPoseRecognition>()
	{
		return AHandPoseRecognition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHandPoseRecognition);
	AHandPoseRecognition::~AHandPoseRecognition() {}
	struct Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_PoseRecognition_HandPoseRecognition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_PoseRecognition_HandPoseRecognition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHandPoseRecognition, AHandPoseRecognition::StaticClass, TEXT("AHandPoseRecognition"), &Z_Registration_Info_UClass_AHandPoseRecognition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHandPoseRecognition), 383209088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_PoseRecognition_HandPoseRecognition_h_2505932092(TEXT("/Script/GOpenCV"),
		Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_PoseRecognition_HandPoseRecognition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_PoseRecognition_HandPoseRecognition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
