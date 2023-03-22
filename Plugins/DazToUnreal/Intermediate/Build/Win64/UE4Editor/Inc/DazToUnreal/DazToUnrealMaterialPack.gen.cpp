// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DazToUnreal/Public/DazToUnrealMaterialPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDazToUnrealMaterialPack() {}
// Cross Module References
	DAZTOUNREAL_API UEnum* Z_Construct_UEnum_DazToUnreal_EDazMaterialType();
	UPackage* Z_Construct_UPackage__Script_DazToUnreal();
	DAZTOUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FDazMaterialMappingInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DAZTOUNREAL_API UClass* Z_Construct_UClass_UDazToUnrealMaterialPack_NoRegister();
	DAZTOUNREAL_API UClass* Z_Construct_UClass_UDazToUnrealMaterialPack();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static UEnum* EDazMaterialType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DazToUnreal_EDazMaterialType, Z_Construct_UPackage__Script_DazToUnreal(), TEXT("EDazMaterialType"));
		}
		return Singleton;
	}
	template<> DAZTOUNREAL_API UEnum* StaticEnum<EDazMaterialType>()
	{
		return EDazMaterialType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDazMaterialType(EDazMaterialType_StaticEnum, TEXT("/Script/DazToUnreal"), TEXT("EDazMaterialType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Hash() { return 865414258U; }
	UEnum* Z_Construct_UEnum_DazToUnreal_EDazMaterialType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DazToUnreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDazMaterialType"), 0, Get_Z_Construct_UEnum_DazToUnreal_EDazMaterialType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDazMaterialType::Base", (int64)EDazMaterialType::Base },
				{ "EDazMaterialType::Alpha", (int64)EDazMaterialType::Alpha },
				{ "EDazMaterialType::Masked", (int64)EDazMaterialType::Masked },
				{ "EDazMaterialType::Skin", (int64)EDazMaterialType::Skin },
				{ "EDazMaterialType::Hair", (int64)EDazMaterialType::Hair },
				{ "EDazMaterialType::Scalp", (int64)EDazMaterialType::Scalp },
				{ "EDazMaterialType::EyeMoisture", (int64)EDazMaterialType::EyeMoisture },
				{ "EDazMaterialType::Cornea", (int64)EDazMaterialType::Cornea },
				{ "EDazMaterialType::NoDraw", (int64)EDazMaterialType::NoDraw },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.Name", "EDazMaterialType::Alpha" },
				{ "Base.Name", "EDazMaterialType::Base" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Permitted spline point types for SplineComponent. */" },
				{ "Cornea.Name", "EDazMaterialType::Cornea" },
				{ "EyeMoisture.Name", "EDazMaterialType::EyeMoisture" },
				{ "Hair.Name", "EDazMaterialType::Hair" },
				{ "Masked.Name", "EDazMaterialType::Masked" },
				{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
				{ "NoDraw.Name", "EDazMaterialType::NoDraw" },
				{ "Scalp.Name", "EDazMaterialType::Scalp" },
				{ "Skin.Name", "EDazMaterialType::Skin" },
				{ "ToolTip", "Permitted spline point types for SplineComponent." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DazToUnreal,
				nullptr,
				"EDazMaterialType",
				"EDazMaterialType",
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
class UScriptStruct* FDazMaterialMappingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DAZTOUNREAL_API uint32 Get_Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDazMaterialMappingInfo, Z_Construct_UPackage__Script_DazToUnreal(), TEXT("DazMaterialMappingInfo"), sizeof(FDazMaterialMappingInfo), Get_Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Hash());
	}
	return Singleton;
}
template<> DAZTOUNREAL_API UScriptStruct* StaticStruct<FDazMaterialMappingInfo>()
{
	return FDazMaterialMappingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDazMaterialMappingInfo(FDazMaterialMappingInfo::StaticStruct, TEXT("/Script/DazToUnreal"), TEXT("DazMaterialMappingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DazToUnreal_StaticRegisterNativesFDazMaterialMappingInfo
{
	FScriptStruct_DazToUnreal_StaticRegisterNativesFDazMaterialMappingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DazMaterialMappingInfo")),new UScriptStruct::TCppStructOps<FDazMaterialMappingInfo>);
	}
} ScriptStruct_DazToUnreal_StaticRegisterNativesFDazMaterialMappingInfo;
	struct Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DazShaderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DazShaderName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDazMaterialMappingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName_MetaData[] = {
		{ "Category", "Material Mapping" },
		{ "Comment", "/** Needs to match the name of the shader from Daz Studio.  Examples: PBRSkin, Iray Uber, Daz Studio Default */" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
		{ "ToolTip", "Needs to match the name of the shader from Daz Studio.  Examples: PBRSkin, Iray Uber, Daz Studio Default" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName = { "DazShaderName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazMaterialMappingInfo, DazShaderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "Material Mapping" },
		{ "Comment", "/** Type of the material */" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
		{ "ToolTip", "Type of the material" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazMaterialMappingInfo, MaterialType), Z_Construct_UEnum_DazToUnreal_EDazMaterialType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath_MetaData[] = {
		{ "AllowedClasses", "Material" },
		{ "Category", "Material Mapping" },
		{ "Comment", "/** Path to the material to use */" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
		{ "ToolTip", "Path to the material to use" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazMaterialMappingInfo, MaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_DazShaderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::NewProp_MaterialPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnreal,
		nullptr,
		&NewStructOps,
		"DazMaterialMappingInfo",
		sizeof(FDazMaterialMappingInfo),
		alignof(FDazMaterialMappingInfo),
		Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDazMaterialMappingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DazToUnreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DazMaterialMappingInfo"), sizeof(FDazMaterialMappingInfo), Get_Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDazMaterialMappingInfo_Hash() { return 2320259752U; }
	void UDazToUnrealMaterialPack::StaticRegisterNativesUDazToUnrealMaterialPack()
	{
	}
	UClass* Z_Construct_UClass_UDazToUnrealMaterialPack_NoRegister()
	{
		return UDazToUnrealMaterialPack::StaticClass();
	}
	struct Z_Construct_UClass_UDazToUnrealMaterialPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DazToUnrealMaterialPack.h" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDazMaterialMappingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Material Mapping" },
		{ "Comment", "/** The materials in this pack */" },
		{ "ModuleRelativePath", "Public/DazToUnrealMaterialPack.h" },
		{ "ToolTip", "The materials in this pack" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDazToUnrealMaterialPack, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::NewProp_Materials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDazToUnrealMaterialPack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::ClassParams = {
		&UDazToUnrealMaterialPack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDazToUnrealMaterialPack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDazToUnrealMaterialPack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDazToUnrealMaterialPack, 1253639898);
	template<> DAZTOUNREAL_API UClass* StaticClass<UDazToUnrealMaterialPack>()
	{
		return UDazToUnrealMaterialPack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDazToUnrealMaterialPack(Z_Construct_UClass_UDazToUnrealMaterialPack, &UDazToUnrealMaterialPack::StaticClass, TEXT("/Script/DazToUnreal"), TEXT("UDazToUnrealMaterialPack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDazToUnrealMaterialPack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
