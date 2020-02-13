#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPI_UnlockableInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockDataStruct
struct UBPI_UnlockableInterface_C_GetUnlockDataStruct_Params
{
	TArray<struct FFUnlockDataStruct>                  UnlockDataStruct;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockRewardWidgets
struct UBPI_UnlockableInterface_C_GetUnlockRewardWidgets_Params
{
	class APlayerController**                          OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SchematicClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                TradingPostWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         Widgets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetStingerWidgetRewardData
struct UBPI_UnlockableInterface_C_GetStingerWidgetRewardData_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
