#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_MAMTree_RoadStartEnd_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MAMTree_RoadOccupiedTile.MAMTree_RoadOccupiedTile
// 0x0010
struct FMAMTree_RoadOccupiedTile
{
	TArray<struct FMAMTree_RoadStartEnd>               Roads_16_A42C107B4337EA6F58623680B876D371;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
