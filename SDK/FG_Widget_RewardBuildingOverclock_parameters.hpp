#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RewardBuildingOverclock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.IsValidRewardItem
struct UWidget_RewardBuildingOverclock_C_IsValidRewardItem_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.GetName
struct UWidget_RewardBuildingOverclock_C_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.GetIcon
struct UWidget_RewardBuildingOverclock_C_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.Construct
struct UWidget_RewardBuildingOverclock_C_Construct_Params
{
};

// Function Widget_RewardBuildingOverclock.Widget_RewardBuildingOverclock_C.ExecuteUbergraph_Widget_RewardBuildingOverclock
struct UWidget_RewardBuildingOverclock_C_ExecuteUbergraph_Widget_RewardBuildingOverclock_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
