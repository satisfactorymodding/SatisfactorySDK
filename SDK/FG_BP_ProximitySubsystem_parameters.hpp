#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_ProximitySubsystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupMapAreaEffect
struct ABP_ProximitySubsystem_C_SetupMapAreaEffect_Params
{
	class UClass**                                     newArea;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OcclusionInterpAlpha__FinishedFunc
struct ABP_ProximitySubsystem_C_OcclusionInterpAlpha__FinishedFunc_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OcclusionInterpAlpha__UpdateFunc
struct ABP_ProximitySubsystem_C_OcclusionInterpAlpha__UpdateFunc_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetWindSpeedEvent
struct ABP_ProximitySubsystem_C_SetWindSpeedEvent_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.VirtualWindSystemEvent
struct ABP_ProximitySubsystem_C_VirtualWindSystemEvent_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.UpdateWindTimer
struct ABP_ProximitySubsystem_C_UpdateWindTimer_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.WindOcclusionEvent
struct ABP_ProximitySubsystem_C_WindOcclusionEvent_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.WindOcclusionTimer
struct ABP_ProximitySubsystem_C_WindOcclusionTimer_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Ambient
struct ABP_ProximitySubsystem_C_Ambient_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveBeginPlay
struct ABP_ProximitySubsystem_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnEnteredMapArea
struct ABP_ProximitySubsystem_C_OnEnteredMapArea_Params
{
	class UClass**                                     newArea;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnPawnChanged
struct ABP_ProximitySubsystem_C_OnPawnChanged_Params
{
	class APawn**                                      newPawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CalculateWindOcclusionEvent
struct ABP_ProximitySubsystem_C_CalculateWindOcclusionEvent_Params
{
};

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ExecuteUbergraph_BP_ProximitySubsystem
struct ABP_ProximitySubsystem_C_ExecuteUbergraph_BP_ProximitySubsystem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
