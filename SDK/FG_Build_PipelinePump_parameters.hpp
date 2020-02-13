#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipelinePump_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_PipelinePump.Build_PipelinePump_C.PlayPistonSound
struct ABuild_PipelinePump_C_PlayPistonSound_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.OnPumpStopped
struct ABuild_PipelinePump_C_OnPumpStopped_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.Factory_ReceiveStopProducing
struct ABuild_PipelinePump_C_Factory_ReceiveStopProducing_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.OnHasPowerChanged
struct ABuild_PipelinePump_C_OnHasPowerChanged_Params
{
	bool*                                              newHasPower;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_PipelinePump.Build_PipelinePump_C.StopIsLookedAtForDismantle
struct ABuild_PipelinePump_C_StopIsLookedAtForDismantle_Params
{
	class AFGCharacterPlayer**                         byCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_PipelinePump.Build_PipelinePump_C.LostSignificance
struct ABuild_PipelinePump_C_LostSignificance_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.GainedSignificance
struct ABuild_PipelinePump_C_GainedSignificance_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.BuildEffectFinishedEvent
struct ABuild_PipelinePump_C_BuildEffectFinishedEvent_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.PlayProductionAudioChain
struct ABuild_PipelinePump_C_PlayProductionAudioChain_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.StopProductionAudioChain
struct ABuild_PipelinePump_C_StopProductionAudioChain_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.FluidDescriptorSetNotify
struct ABuild_PipelinePump_C_FluidDescriptorSetNotify_Params
{
	class UClass**                                     fluidDesc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_PipelinePump.Build_PipelinePump_C.ReceiveBeginPlay
struct ABuild_PipelinePump_C_ReceiveBeginPlay_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.PlayEngineAudioChain
struct ABuild_PipelinePump_C_PlayEngineAudioChain_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.StopEngineAudioChain
struct ABuild_PipelinePump_C_StopEngineAudioChain_Params
{
};

// Function Build_PipelinePump.Build_PipelinePump_C.ReceiveTick
struct ABuild_PipelinePump_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_PipelinePump.Build_PipelinePump_C.ExecuteUbergraph_Build_PipelinePump
struct ABuild_PipelinePump_C_ExecuteUbergraph_Build_PipelinePump_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
