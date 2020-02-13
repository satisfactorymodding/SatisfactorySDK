#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_SmelterMk1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_SmelterMk1.Build_SmelterMk1_C.SpawnProductionParticles
struct ABuild_SmelterMk1_C_SpawnProductionParticles_Params
{
};

// Function Build_SmelterMk1.Build_SmelterMk1_C.GainedSignificance
struct ABuild_SmelterMk1_C_GainedSignificance_Params
{
};

// Function Build_SmelterMk1.Build_SmelterMk1_C.LostSignificance
struct ABuild_SmelterMk1_C_LostSignificance_Params
{
};

// Function Build_SmelterMk1.Build_SmelterMk1_C.StartProductionLoopEffects
struct ABuild_SmelterMk1_C_StartProductionLoopEffects_Params
{
	bool*                                              didStartProducing;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_SmelterMk1.Build_SmelterMk1_C.StartIdlingLoopEffects
struct ABuild_SmelterMk1_C_StartIdlingLoopEffects_Params
{
	bool*                                              didGainPower;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_SmelterMk1.Build_SmelterMk1_C.StopIdlingLoopEffects
struct ABuild_SmelterMk1_C_StopIdlingLoopEffects_Params
{
	bool*                                              didLosePower;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_SmelterMk1.Build_SmelterMk1_C.StopProductionLoopEffects
struct ABuild_SmelterMk1_C_StopProductionLoopEffects_Params
{
	bool*                                              didStopProducing;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Build_SmelterMk1.Build_SmelterMk1_C.ExecuteUbergraph_Build_SmelterMk1
struct ABuild_SmelterMk1_C_ExecuteUbergraph_Build_SmelterMk1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
