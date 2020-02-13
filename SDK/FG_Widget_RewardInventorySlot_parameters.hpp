#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardInventorySlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.IsValidRewardItem
struct UWidget_RewardInventorySlot_C_IsValidRewardItem_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.Construct
struct UWidget_RewardInventorySlot_C_Construct_Params
{
};

// Function Widget_RewardInventorySlot.Widget_RewardInventorySlot_C.ExecuteUbergraph_Widget_RewardInventorySlot
struct UWidget_RewardInventorySlot_C_ExecuteUbergraph_Widget_RewardInventorySlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
