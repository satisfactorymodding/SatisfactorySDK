#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockBuildEfficiency_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_UnlockBuildEfficiency.BP_UnlockBuildEfficiency_C.GetUnlockDataStruct
struct UBP_UnlockBuildEfficiency_C_GetUnlockDataStruct_Params
{
	TArray<struct FFUnlockDataStruct>                  UnlockDataStruct;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UnlockBuildEfficiency.BP_UnlockBuildEfficiency_C.GetStingerWidgetRewardData
struct UBP_UnlockBuildEfficiency_C_GetStingerWidgetRewardData_Params
{
};

// Function BP_UnlockBuildEfficiency.BP_UnlockBuildEfficiency_C.GetUnlockRewardWidgets
struct UBP_UnlockBuildEfficiency_C_GetUnlockRewardWidgets_Params
{
	class APlayerController**                          OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SchematicClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                TradingPostWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         Widgets;                                                  // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
