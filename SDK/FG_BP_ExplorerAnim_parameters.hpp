#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_ExplorerAnim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ExplorerAnim.BP_ExplorerAnim_C.BlueprintUpdateAnimation
struct UBP_ExplorerAnim_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplorerAnim.BP_ExplorerAnim_C.ExecuteUbergraph_BP_ExplorerAnim
struct UBP_ExplorerAnim_C_ExecuteUbergraph_BP_ExplorerAnim_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
