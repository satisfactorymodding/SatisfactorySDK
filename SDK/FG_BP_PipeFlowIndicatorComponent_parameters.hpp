#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_PipeFlowIndicatorComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.ReceiveTick
struct UBP_PipeFlowIndicatorComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.ReceiveBeginPlay
struct UBP_PipeFlowIndicatorComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.OnFluidDescriptorSet
struct UBP_PipeFlowIndicatorComponent_C_OnFluidDescriptorSet_Params
{
	class UClass**                                     fluidDescriptor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.ExecuteUbergraph_BP_PipeFlowIndicatorComponent
struct UBP_PipeFlowIndicatorComponent_C_ExecuteUbergraph_BP_PipeFlowIndicatorComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
