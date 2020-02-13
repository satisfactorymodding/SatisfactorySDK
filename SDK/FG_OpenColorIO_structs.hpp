#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_CoreUObject_classes.hpp"
#include "FG_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OpenColorIO.OpenColorIOColorSpace
// 0x0028
struct FOpenColorIOColorSpace
{
	class FString                                      ColorSpaceName;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                ColorSpaceIndex;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      FamilyName;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings
// 0x0058
struct FOpenColorIOColorConversionSettings
{
	class UOpenColorIOConfiguration*                   ConfigurationSource;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FOpenColorIOColorSpace                      SourceColorSpace;                                         // 0x0008(0x0028) (Edit, BlueprintVisible)
	struct FOpenColorIOColorSpace                      DestinationColorSpace;                                    // 0x0030(0x0028) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
