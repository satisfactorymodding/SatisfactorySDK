#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipeHyperStart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.CanProduce
struct ABuild_PipeHyperStart_C_CanProduce_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.UserConstructionScript
struct ABuild_PipeHyperStart_C_UserConstructionScript_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.InterpolateEngineSound__FinishedFunc
struct ABuild_PipeHyperStart_C_InterpolateEngineSound__FinishedFunc_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.InterpolateEngineSound__UpdateFunc
struct ABuild_PipeHyperStart_C_InterpolateEngineSound__UpdateFunc_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnHasPowerChanged
struct ABuild_PipeHyperStart_C_OnHasPowerChanged_Params
{
	bool*                                              newHasPower;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.GainedSignificance
struct ABuild_PipeHyperStart_C_GainedSignificance_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.LostSignificance
struct ABuild_PipeHyperStart_C_LostSignificance_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartUpHypertube
struct ABuild_PipeHyperStart_C_StartUpHypertube_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopHyperTube
struct ABuild_PipeHyperStart_C_StopHyperTube_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartEngineSoundTimelineEvent
struct ABuild_PipeHyperStart_C_StartEngineSoundTimelineEvent_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.EndEngineSoundTimelineEvent
struct ABuild_PipeHyperStart_C_EndEngineSoundTimelineEvent_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.ReceiveBeginPlay
struct ABuild_PipeHyperStart_C_ReceiveBeginPlay_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABuild_PipeHyperStart_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.PlayConstructSound_2
struct ABuild_PipeHyperStart_C_PlayConstructSound_2_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.OnIsProducingChanged
struct ABuild_PipeHyperStart_C_OnIsProducingChanged_Params
{
	bool*                                              newIsProducing;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StartProductionLoopEffects
struct ABuild_PipeHyperStart_C_StartProductionLoopEffects_Params
{
	bool*                                              didStartProducing;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.StopProductionLoopEffects
struct ABuild_PipeHyperStart_C_StopProductionLoopEffects_Params
{
	bool*                                              didStopProducing;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.PlayOnSi
struct ABuild_PipeHyperStart_C_PlayOnSi_Params
{
};

// Function Build_PipeHyperStart.Build_PipeHyperStart_C.ExecuteUbergraph_Build_PipeHyperStart
struct ABuild_PipeHyperStart_C_ExecuteUbergraph_Build_PipeHyperStart_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
