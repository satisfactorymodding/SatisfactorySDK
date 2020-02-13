#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockSchematic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_UnlockSchematic.BP_UnlockSchematic_C.GetStingerWidgetRewardData
struct UBP_UnlockSchematic_C_GetStingerWidgetRewardData_Params
{
};

// Function BP_UnlockSchematic.BP_UnlockSchematic_C.GetUnlockRewardWidgets
struct UBP_UnlockSchematic_C_GetUnlockRewardWidgets_Params
{
	class APlayerController**                          OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SchematicClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                TradingPostWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         Widgets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UnlockSchematic.BP_UnlockSchematic_C.GetUnlockDataStruct
struct UBP_UnlockSchematic_C_GetUnlockDataStruct_Params
{
	TArray<struct FFUnlockDataStruct>                  UnlockDataStruct;                                         // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
