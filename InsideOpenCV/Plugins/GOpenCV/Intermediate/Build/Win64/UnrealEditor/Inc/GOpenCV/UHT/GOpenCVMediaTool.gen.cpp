// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GOpenCV/Media/GOpenCVMediaTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGOpenCVMediaTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GOPENCV_API UClass* Z_Construct_UClass_AGOpenCVMediaTool();
	GOPENCV_API UClass* Z_Construct_UClass_AGOpenCVMediaTool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GOpenCV();
// End Cross Module References
	DEFINE_FUNCTION(AGOpenCVMediaTool::execVideoStitching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->VideoStitching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGOpenCVMediaTool::execReadStitchingVideo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CapLeftPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_CapRightPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadStitchingVideo(Z_Param_CapLeftPath,Z_Param_CapRightPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGOpenCVMediaTool::execReadVideoFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->ReadVideoFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGOpenCVMediaTool::execReadVideo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadVideo(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGOpenCVMediaTool::execGetTexture2DFromMatByPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetTexture2DFromMatByPath(Z_Param_Path);
		P_NATIVE_END;
	}
	void AGOpenCVMediaTool::StaticRegisterNativesAGOpenCVMediaTool()
	{
		UClass* Class = AGOpenCVMediaTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTexture2DFromMatByPath", &AGOpenCVMediaTool::execGetTexture2DFromMatByPath },
			{ "ReadStitchingVideo", &AGOpenCVMediaTool::execReadStitchingVideo },
			{ "ReadVideo", &AGOpenCVMediaTool::execReadVideo },
			{ "ReadVideoFrame", &AGOpenCVMediaTool::execReadVideoFrame },
			{ "VideoStitching", &AGOpenCVMediaTool::execVideoStitching },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics
	{
		struct GOpenCVMediaTool_eventGetTexture2DFromMatByPath_Parms
		{
			FString Path;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GOpenCVMediaTool_eventGetTexture2DFromMatByPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GOpenCVMediaTool_eventGetTexture2DFromMatByPath_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenCV" },
		{ "ModuleRelativePath", "Media/GOpenCVMediaTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGOpenCVMediaTool, nullptr, "GetTexture2DFromMatByPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::GOpenCVMediaTool_eventGetTexture2DFromMatByPath_Parms), Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics
	{
		struct GOpenCVMediaTool_eventReadStitchingVideo_Parms
		{
			FString CapLeftPath;
			FString CapRightPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_CapLeftPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CapRightPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::NewProp_CapLeftPath = { "CapLeftPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GOpenCVMediaTool_eventReadStitchingVideo_Parms, CapLeftPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::NewProp_CapRightPath = { "CapRightPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GOpenCVMediaTool_eventReadStitchingVideo_Parms, CapRightPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GOpenCVMediaTool_eventReadStitchingVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GOpenCVMediaTool_eventReadStitchingVideo_Parms), &Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::NewProp_CapLeftPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::NewProp_CapRightPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenCV" },
		{ "ModuleRelativePath", "Media/GOpenCVMediaTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGOpenCVMediaTool, nullptr, "ReadStitchingVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::GOpenCVMediaTool_eventReadStitchingVideo_Parms), Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics
	{
		struct GOpenCVMediaTool_eventReadVideo_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GOpenCVMediaTool_eventReadVideo_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GOpenCVMediaTool_eventReadVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GOpenCVMediaTool_eventReadVideo_Parms), &Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenCV" },
		{ "ModuleRelativePath", "Media/GOpenCVMediaTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGOpenCVMediaTool, nullptr, "ReadVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::GOpenCVMediaTool_eventReadVideo_Parms), Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics
	{
		struct GOpenCVMediaTool_eventReadVideoFrame_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GOpenCVMediaTool_eventReadVideoFrame_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenCV" },
		{ "ModuleRelativePath", "Media/GOpenCVMediaTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGOpenCVMediaTool, nullptr, "ReadVideoFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::GOpenCVMediaTool_eventReadVideoFrame_Parms), Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics
	{
		struct GOpenCVMediaTool_eventVideoStitching_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GOpenCVMediaTool_eventVideoStitching_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenCV" },
		{ "ModuleRelativePath", "Media/GOpenCVMediaTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGOpenCVMediaTool, nullptr, "VideoStitching", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::GOpenCVMediaTool_eventVideoStitching_Parms), Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGOpenCVMediaTool);
	UClass* Z_Construct_UClass_AGOpenCVMediaTool_NoRegister()
	{
		return AGOpenCVMediaTool::StaticClass();
	}
	struct Z_Construct_UClass_AGOpenCVMediaTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGOpenCVMediaTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GOpenCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGOpenCVMediaTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGOpenCVMediaTool_GetTexture2DFromMatByPath, "GetTexture2DFromMatByPath" }, // 695984370
		{ &Z_Construct_UFunction_AGOpenCVMediaTool_ReadStitchingVideo, "ReadStitchingVideo" }, // 1073431856
		{ &Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideo, "ReadVideo" }, // 3664796385
		{ &Z_Construct_UFunction_AGOpenCVMediaTool_ReadVideoFrame, "ReadVideoFrame" }, // 3287651857
		{ &Z_Construct_UFunction_AGOpenCVMediaTool_VideoStitching, "VideoStitching" }, // 487226403
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGOpenCVMediaTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Media/GOpenCVMediaTool.h" },
		{ "ModuleRelativePath", "Media/GOpenCVMediaTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGOpenCVMediaTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGOpenCVMediaTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGOpenCVMediaTool_Statics::ClassParams = {
		&AGOpenCVMediaTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGOpenCVMediaTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGOpenCVMediaTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGOpenCVMediaTool()
	{
		if (!Z_Registration_Info_UClass_AGOpenCVMediaTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGOpenCVMediaTool.OuterSingleton, Z_Construct_UClass_AGOpenCVMediaTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGOpenCVMediaTool.OuterSingleton;
	}
	template<> GOPENCV_API UClass* StaticClass<AGOpenCVMediaTool>()
	{
		return AGOpenCVMediaTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGOpenCVMediaTool);
	AGOpenCVMediaTool::~AGOpenCVMediaTool() {}
	struct Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGOpenCVMediaTool, AGOpenCVMediaTool::StaticClass, TEXT("AGOpenCVMediaTool"), &Z_Registration_Info_UClass_AGOpenCVMediaTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGOpenCVMediaTool), 4015261248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_1438364579(TEXT("/Script/GOpenCV"),
		Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
