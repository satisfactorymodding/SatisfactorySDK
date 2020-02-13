#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_OpenColorIO_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OpenColorIO.OpenColorIOBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOBlueprintLibrary");
		return ptr;
	}


	bool STATIC_ApplyColorSpaceTransform(class UObject** WorldContextObject, struct FOpenColorIOColorConversionSettings* ConversionSettings, class UTexture** InputTexture, class UTextureRenderTarget2D** OutputRenderTarget);
};


// Class OpenColorIO.OpenColorIOColorTransform
// 0x0070 (0x0098 - 0x0028)
class UOpenColorIOColorTransform : public UObject
{
public:
	class UOpenColorIOConfiguration*                   ConfigurationOwner;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      SourceColorSpace;                                         // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	class FString                                      DestinationColorSpace;                                    // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOColorTransform");
		return ptr;
	}

};


// Class OpenColorIO.OpenColorIOConfiguration
// 0x0030 (0x0058 - 0x0028)
class UOpenColorIOConfiguration : public UObject
{
public:
	struct FFilePath                                   ConfigurationFile;                                        // 0x0028(0x0010) (Edit, BlueprintVisible)
	TArray<struct FOpenColorIOColorSpace>              DesiredColorSpaces;                                       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UOpenColorIOColorTransform*>          ColorTransforms;                                          // 0x0048(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOConfiguration");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
