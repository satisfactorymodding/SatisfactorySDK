#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_IntVector2d_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MAMTree_RoadStartEnd.MAMTree_RoadStartEnd
// 0x0010
struct FMAMTree_RoadStartEnd
{
	struct FIntVector2D                                StartCoordinates_2_83B7BFD546264BAE632A5787A046FEEA;      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntVector2D                                EndCoordinates_4_202B84034EC084E34F1935958692341D;        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
