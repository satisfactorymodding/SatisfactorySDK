#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_UnlockRecipe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetUnlockDataStruct
struct UBP_UnlockRecipe_C_GetUnlockDataStruct_Params
{
	TArray<struct FFUnlockDataStruct>                  UnlockDataStruct;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetStingerWidgetRewardData
struct UBP_UnlockRecipe_C_GetStingerWidgetRewardData_Params
{
};

// Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetUnlockRewardWidgets
struct UBP_UnlockRecipe_C_GetUnlockRewardWidgets_Params
{
	class APlayerController**                          OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SchematicClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                TradingPostWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         Widgets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UnlockRecipe.BP_UnlockRecipe_C.GetRewardTypeFromItemDescriptor
struct UBP_UnlockRecipe_C_GetRewardTypeFromItemDescriptor_Params
{
	class UClass**                                     ItemDescriptorClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RewardData;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
