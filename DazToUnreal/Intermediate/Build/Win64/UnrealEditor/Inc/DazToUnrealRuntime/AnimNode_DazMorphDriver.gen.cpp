// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DazToUnrealRuntime/Public/AnimNode_DazMorphDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_DazMorphDriver() {}
// Cross Module References
	DAZTOUNREALRUNTIME_API UEnum* Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder();
	UPackage* Z_Construct_UPackage__Script_DazToUnrealRuntime();
	DAZTOUNREALRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDazMorphDriverRotationOrder;
	static UEnum* EDazMorphDriverRotationOrder_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDazMorphDriverRotationOrder.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDazMorphDriverRotationOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder, Z_Construct_UPackage__Script_DazToUnrealRuntime(), TEXT("EDazMorphDriverRotationOrder"));
		}
		return Z_Registration_Info_UEnum_EDazMorphDriverRotationOrder.OuterSingleton;
	}
	template<> DAZTOUNREALRUNTIME_API UEnum* StaticEnum<EDazMorphDriverRotationOrder>()
	{
		return EDazMorphDriverRotationOrder_StaticEnum();
	}
	struct Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder_Statics::Enumerators[] = {
		{ "EDazMorphDriverRotationOrder::Auto", (int64)EDazMorphDriverRotationOrder::Auto },
		{ "EDazMorphDriverRotationOrder::XYZ", (int64)EDazMorphDriverRotationOrder::XYZ },
		{ "EDazMorphDriverRotationOrder::XZY", (int64)EDazMorphDriverRotationOrder::XZY },
		{ "EDazMorphDriverRotationOrder::YXZ", (int64)EDazMorphDriverRotationOrder::YXZ },
		{ "EDazMorphDriverRotationOrder::YZX", (int64)EDazMorphDriverRotationOrder::YZX },
		{ "EDazMorphDriverRotationOrder::ZXY", (int64)EDazMorphDriverRotationOrder::ZXY },
		{ "EDazMorphDriverRotationOrder::ZYX", (int64)EDazMorphDriverRotationOrder::ZYX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EDazMorphDriverRotationOrder::Auto" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "XYZ.Name", "EDazMorphDriverRotationOrder::XYZ" },
		{ "XZY.Name", "EDazMorphDriverRotationOrder::XZY" },
		{ "YXZ.Name", "EDazMorphDriverRotationOrder::YXZ" },
		{ "YZX.Name", "EDazMorphDriverRotationOrder::YZX" },
		{ "ZXY.Name", "EDazMorphDriverRotationOrder::ZXY" },
		{ "ZYX.Name", "EDazMorphDriverRotationOrder::ZYX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DazToUnrealRuntime,
		nullptr,
		"EDazMorphDriverRotationOrder",
		"EDazMorphDriverRotationOrder",
		Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder()
	{
		if (!Z_Registration_Info_UEnum_EDazMorphDriverRotationOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDazMorphDriverRotationOrder.InnerSingleton, Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDazMorphDriverRotationOrder.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_DazMorphDriver>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_DazMorphDriver cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_DazMorphDriver;
class UScriptStruct* FAnimNode_DazMorphDriver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_DazMorphDriver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_DazMorphDriver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver, Z_Construct_UPackage__Script_DazToUnrealRuntime(), TEXT("AnimNode_DazMorphDriver"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_DazMorphDriver.OuterSingleton;
}
template<> DAZTOUNREALRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_DazMorphDriver>()
{
	return FAnimNode_DazMorphDriver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrivingCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemappedMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemappedMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemappedMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemappedMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MorphName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationConversionOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationConversionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationConversionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRange_MetaData[];
#endif
		static void NewProp_bUseRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the runtime version of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "This is the runtime version of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_DazMorphDriver>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Source (driver)" },
		{ "Comment", "// Bone to use as controller input\n" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Bone to use as controller input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_DrivingCurve_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Curve used to map from the source attribute to the driven attributes if present (otherwise the Multiplier will be used) */" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Curve used to map from the source attribute to the driven attributes if present (otherwise the Multiplier will be used)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_DrivingCurve = { "DrivingCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, DrivingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_DrivingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_DrivingCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Multiplier to apply to the input value (Note: Ignored when a curve is used)\n" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Multiplier to apply to the input value (Note: Ignored when a curve is used)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMin_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Minimum limit of the input value (mapped to RemappedMin, only used when limiting the source range)\n// If this is rotation, the unit is radian\n" },
		{ "DisplayName", "Source Range Min" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Minimum limit of the input value (mapped to RemappedMin, only used when limiting the source range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, RangeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMax_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Maximum limit of the input value (mapped to RemappedMax, only used when limiting the source range)\n// If this is rotation, the unit is radian\n" },
		{ "DisplayName", "Source Range Max" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Maximum limit of the input value (mapped to RemappedMax, only used when limiting the source range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, RangeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMin_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Minimum value to apply to the destination (remapped from the input range)\n// If this is rotation, the unit is radian\n" },
		{ "DisplayName", "Mapped Range Min" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Minimum value to apply to the destination (remapped from the input range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMin = { "RemappedMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, RemappedMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMax_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Maximum value to apply to the destination (remapped from the input range)\n// If this is rotation, the unit is radian\n" },
		{ "DisplayName", "Mapped Range Max" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Maximum value to apply to the destination (remapped from the input range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMax = { "RemappedMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, RemappedMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_MorphName_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "/** Name of Morph Target to drive using the source attribute */" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Name of Morph Target to drive using the source attribute" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_MorphName = { "MorphName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, MorphName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_MorphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_MorphName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Category", "Source (driver)" },
		{ "Comment", "// Transform component to use as input\n" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Transform component to use as input" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, SourceComponent), Z_Construct_UEnum_Engine_EComponentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceComponent_MetaData)) }; // 2228860366
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RotationConversionOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RotationConversionOrder_MetaData[] = {
		{ "Category", "Source (driver)" },
		{ "Comment", "// Transform component to use as input\n" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Transform component to use as input" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RotationConversionOrder = { "RotationConversionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DazMorphDriver, RotationConversionOrder), Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphDriverRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RotationConversionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RotationConversionOrder_MetaData)) }; // 1619498890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_bUseRange_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Whether or not to clamp the driver value and remap it before scaling it\n" },
		{ "DisplayName", "Remap Source" },
		{ "ModuleRelativePath", "Public/AnimNode_DazMorphDriver.h" },
		{ "ToolTip", "Whether or not to clamp the driver value and remap it before scaling it" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_bUseRange_SetBit(void* Obj)
	{
		((FAnimNode_DazMorphDriver*)Obj)->bUseRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_bUseRange = { "bUseRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_DazMorphDriver), &Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_bUseRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_bUseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_bUseRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_DrivingCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RemappedMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_MorphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RotationConversionOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_RotationConversionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewProp_bUseRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnrealRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_DazMorphDriver",
		sizeof(FAnimNode_DazMorphDriver),
		alignof(FAnimNode_DazMorphDriver),
		Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_DazMorphDriver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_DazMorphDriver.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_DazMorphDriver.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealRuntime_Public_AnimNode_DazMorphDriver_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealRuntime_Public_AnimNode_DazMorphDriver_h_Statics::EnumInfo[] = {
		{ EDazMorphDriverRotationOrder_StaticEnum, TEXT("EDazMorphDriverRotationOrder"), &Z_Registration_Info_UEnum_EDazMorphDriverRotationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1619498890U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealRuntime_Public_AnimNode_DazMorphDriver_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_DazMorphDriver::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_DazMorphDriver_Statics::NewStructOps, TEXT("AnimNode_DazMorphDriver"), &Z_Registration_Info_UScriptStruct_AnimNode_DazMorphDriver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_DazMorphDriver), 1011253830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealRuntime_Public_AnimNode_DazMorphDriver_h_213097012(TEXT("/Script/DazToUnrealRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealRuntime_Public_AnimNode_DazMorphDriver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealRuntime_Public_AnimNode_DazMorphDriver_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealRuntime_Public_AnimNode_DazMorphDriver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OtherworldlyKingdom_Plugins_DazToUnreal_Source_DazToUnrealRuntime_Public_AnimNode_DazMorphDriver_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
