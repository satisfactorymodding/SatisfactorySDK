#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_TrainDockingStation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_TrainDockingStation.Build_TrainDockingStation_C.Factory_PeekOutput
struct ABuild_TrainDockingStation_C_Factory_PeekOutput_Params
{
	class UFGFactoryConnectionComponent**              Connection;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FInventoryItem>                      out_items;                                                // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_TrainDockingStation.Build_TrainDockingStation_C.Factory_GrabOutput
struct ABuild_TrainDockingStation_C_Factory_GrabOutput_Params
{
	class UFGFactoryConnectionComponent**              Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FInventoryItem                              out_item;                                                 // (Parm, OutParm)
	float                                              out_OffsetBeyond;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_TrainDockingStation.Build_TrainDockingStation_C.IsMoving
struct ABuild_TrainDockingStation_C_IsMoving_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMoving;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
