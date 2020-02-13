#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_ResourceSink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_ResourceSink.Build_ResourceSink_C.SFX_Timeline__FinishedFunc
struct ABuild_ResourceSink_C_SFX_Timeline__FinishedFunc_Params
{
};

// Function Build_ResourceSink.Build_ResourceSink_C.SFX_Timeline__UpdateFunc
struct ABuild_ResourceSink_C_SFX_Timeline__UpdateFunc_Params
{
};

// Function Build_ResourceSink.Build_ResourceSink_C.SFXEngineTimeline__FinishedFunc
struct ABuild_ResourceSink_C_SFXEngineTimeline__FinishedFunc_Params
{
};

// Function Build_ResourceSink.Build_ResourceSink_C.SFXEngineTimeline__UpdateFunc
struct ABuild_ResourceSink_C_SFXEngineTimeline__UpdateFunc_Params
{
};

// Function Build_ResourceSink.Build_ResourceSink_C.GainedSignificance
struct ABuild_ResourceSink_C_GainedSignificance_Params
{
};

// Function Build_ResourceSink.Build_ResourceSink_C.LostSignificance
struct ABuild_ResourceSink_C_LostSignificance_Params
{
};

// Function Build_ResourceSink.Build_ResourceSink_C.OnHasPowerChanged
struct ABuild_ResourceSink_C_OnHasPowerChanged_Params
{
	bool*                                              newHasPower;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_ResourceSink.Build_ResourceSink_C.ReceiveBeginPlay
struct ABuild_ResourceSink_C_ReceiveBeginPlay_Params
{
};

// Function Build_ResourceSink.Build_ResourceSink_C.StartProductionLoopEffects
struct ABuild_ResourceSink_C_StartProductionLoopEffects_Params
{
	bool*                                              didStartProducing;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_ResourceSink.Build_ResourceSink_C.StopProductionLoopEffects
struct ABuild_ResourceSink_C_StopProductionLoopEffects_Params
{
	bool*                                              didStopProducing;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_ResourceSink.Build_ResourceSink_C.ReceiveDestroyed
struct ABuild_ResourceSink_C_ReceiveDestroyed_Params
{
};

// Function Build_ResourceSink.Build_ResourceSink_C.StartSFXEngineOnPower
struct ABuild_ResourceSink_C_StartSFXEngineOnPower_Params
{
	bool*                                              didGainPower;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_ResourceSink.Build_ResourceSink_C.StopSFXEngineOnPower
struct ABuild_ResourceSink_C_StopSFXEngineOnPower_Params
{
	bool*                                              didLosePower;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_ResourceSink.Build_ResourceSink_C.StartIdlingLoopEffects
struct ABuild_ResourceSink_C_StartIdlingLoopEffects_Params
{
	bool*                                              didGainPower;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_ResourceSink.Build_ResourceSink_C.StopIdlingLoopEffects
struct ABuild_ResourceSink_C_StopIdlingLoopEffects_Params
{
	bool*                                              didLosePower;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_ResourceSink.Build_ResourceSink_C.ExecuteUbergraph_Build_ResourceSink
struct ABuild_ResourceSink_C_ExecuteUbergraph_Build_ResourceSink_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
