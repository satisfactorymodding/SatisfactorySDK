#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_SlateCore_classes.hpp"
#include "FG_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ResourceSinkShop_Banner_Struct.ResourceSinkShop_Banner_Struct
// 0x00B0
struct FResourceSinkShop_Banner_Struct
{
	struct FText                                       Text_7_9ECC94234929451FA80AFDAC404AD507;                  // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ImageBrush_5_012E7B504A7AB4B9D1F758A855CF7C5F;            // 0x0018(0x0088) (Edit, BlueprintVisible)
	struct FVector2D                                   TextEndPosition_12_284EB20F4CB57ECB983D038E3F457990;      // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ImageEndPosition_10_3EA4EF5B4A94A13E17A775B8C65CE230;     // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
