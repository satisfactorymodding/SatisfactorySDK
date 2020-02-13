#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_WaterPump_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_WaterPump.Build_WaterPump_C.GetPlayRate
struct ABuild_WaterPump_C_GetPlayRate_Params
{
	float                                              PlayRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Build_WaterPump.Build_WaterPump_C.mAudioTimer
struct ABuild_WaterPump_C_mAudioTimer_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.SetText
struct ABuild_WaterPump_C_SetText_Params
{
	class FString*                                     intText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Build_WaterPump.Build_WaterPump_C.PlayPitchAndVolumeRTPCTimeline__FinishedFunc
struct ABuild_WaterPump_C_PlayPitchAndVolumeRTPCTimeline__FinishedFunc_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.PlayPitchAndVolumeRTPCTimeline__UpdateFunc
struct ABuild_WaterPump_C_PlayPitchAndVolumeRTPCTimeline__UpdateFunc_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.mWaterpumpTimeline__FinishedFunc
struct ABuild_WaterPump_C_mWaterpumpTimeline__FinishedFunc_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.mWaterpumpTimeline__UpdateFunc
struct ABuild_WaterPump_C_mWaterpumpTimeline__UpdateFunc_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.ReceiveBeginPlay
struct ABuild_WaterPump_C_ReceiveBeginPlay_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.ReceiveDestroyed
struct ABuild_WaterPump_C_ReceiveDestroyed_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.StopProductionLoopEffects
struct ABuild_WaterPump_C_StopProductionLoopEffects_Params
{
	bool*                                              didStopProducing;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_WaterPump.Build_WaterPump_C.PlayProducingSounds
struct ABuild_WaterPump_C_PlayProducingSounds_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.StartProductionLoopEffects
struct ABuild_WaterPump_C_StartProductionLoopEffects_Params
{
	bool*                                              didStartProducing;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_WaterPump.Build_WaterPump_C.StartVFXIteration
struct ABuild_WaterPump_C_StartVFXIteration_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.OnIsProducingChanged
struct ABuild_WaterPump_C_OnIsProducingChanged_Params
{
	bool*                                              newIsProducing;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_WaterPump.Build_WaterPump_C.GainedSignificance
struct ABuild_WaterPump_C_GainedSignificance_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.LostSignificance
struct ABuild_WaterPump_C_LostSignificance_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.Start_VFX_Loop
struct ABuild_WaterPump_C_Start_VFX_Loop_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.Stop_VFX_Loop
struct ABuild_WaterPump_C_Stop_VFX_Loop_Params
{
};

// Function Build_WaterPump.Build_WaterPump_C.ExecuteUbergraph_Build_WaterPump
struct ABuild_WaterPump_C_ExecuteUbergraph_Build_WaterPump_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
