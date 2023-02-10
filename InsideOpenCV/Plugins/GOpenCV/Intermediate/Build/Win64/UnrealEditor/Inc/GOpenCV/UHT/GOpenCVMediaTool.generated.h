// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Media/GOpenCVMediaTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef GOPENCV_GOpenCVMediaTool_generated_h
#error "GOpenCVMediaTool.generated.h already included, missing '#pragma once' in GOpenCVMediaTool.h"
#endif
#define GOPENCV_GOpenCVMediaTool_generated_h

#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_SPARSE_DATA
#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVideoStitching); \
	DECLARE_FUNCTION(execReadStitchingVideo); \
	DECLARE_FUNCTION(execReadVideoFrame); \
	DECLARE_FUNCTION(execReadVideo); \
	DECLARE_FUNCTION(execGetTexture2DFromMatByPath);


#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVideoStitching); \
	DECLARE_FUNCTION(execReadStitchingVideo); \
	DECLARE_FUNCTION(execReadVideoFrame); \
	DECLARE_FUNCTION(execReadVideo); \
	DECLARE_FUNCTION(execGetTexture2DFromMatByPath);


#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_ACCESSORS
#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGOpenCVMediaTool(); \
	friend struct Z_Construct_UClass_AGOpenCVMediaTool_Statics; \
public: \
	DECLARE_CLASS(AGOpenCVMediaTool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOpenCV"), NO_API) \
	DECLARE_SERIALIZER(AGOpenCVMediaTool)


#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGOpenCVMediaTool(); \
	friend struct Z_Construct_UClass_AGOpenCVMediaTool_Statics; \
public: \
	DECLARE_CLASS(AGOpenCVMediaTool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GOpenCV"), NO_API) \
	DECLARE_SERIALIZER(AGOpenCVMediaTool)


#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGOpenCVMediaTool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGOpenCVMediaTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGOpenCVMediaTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGOpenCVMediaTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGOpenCVMediaTool(AGOpenCVMediaTool&&); \
	NO_API AGOpenCVMediaTool(const AGOpenCVMediaTool&); \
public: \
	NO_API virtual ~AGOpenCVMediaTool();


#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGOpenCVMediaTool(AGOpenCVMediaTool&&); \
	NO_API AGOpenCVMediaTool(const AGOpenCVMediaTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGOpenCVMediaTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGOpenCVMediaTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGOpenCVMediaTool) \
	NO_API virtual ~AGOpenCVMediaTool();


#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_13_PROLOG
#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_SPARSE_DATA \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_RPC_WRAPPERS \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_ACCESSORS \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_INCLASS \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_SPARSE_DATA \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_ACCESSORS \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_INCLASS_NO_PURE_DECLS \
	FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOPENCV_API UClass* StaticClass<class AGOpenCVMediaTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InsideOpenCV_Plugins_GOpenCV_Source_GOpenCV_Media_GOpenCVMediaTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
