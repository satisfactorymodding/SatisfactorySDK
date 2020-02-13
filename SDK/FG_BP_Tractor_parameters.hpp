#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Tractor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Tractor.BP_Tractor_C.UpdateOutline
struct ABP_Tractor_C_UpdateOutline_Params
{
	bool*                                              aimingAtWorkbench;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tractor.BP_Tractor_C.StopDrivingEffects
struct ABP_Tractor_C_StopDrivingEffects_Params
{
};

// Function BP_Tractor.BP_Tractor_C.StartDrivingEffects
struct ABP_Tractor_C_StartDrivingEffects_Params
{
};

// Function BP_Tractor.BP_Tractor_C.OnRep_mFlashlightOn
struct ABP_Tractor_C_OnRep_mFlashlightOn_Params
{
};

// Function BP_Tractor.BP_Tractor_C.ToggleFlashlight
struct ABP_Tractor_C_ToggleFlashlight_Params
{
};

// Function BP_Tractor.BP_Tractor_C.GetEnemyTargetDesirability
struct ABP_Tractor_C_GetEnemyTargetDesirability_Params
{
	class AFGEnemyController**                         forController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Tractor.BP_Tractor_C.GetAttackLocation
struct ABP_Tractor_C_GetAttackLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Tractor.BP_Tractor_C.ShouldAutoregisterAsTargetable
struct ABP_Tractor_C_ShouldAutoregisterAsTargetable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Tractor.BP_Tractor_C.InpActEvt_Flashlight_K2Node_InputActionEvent_1
struct ABP_Tractor_C_InpActEvt_Flashlight_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Tractor.BP_Tractor_C.ToggleFreeCamera
struct ABP_Tractor_C_ToggleFreeCamera_Params
{
};

// Function BP_Tractor.BP_Tractor_C.ReceiveOnVehicleStartup
struct ABP_Tractor_C_ReceiveOnVehicleStartup_Params
{
};

// Function BP_Tractor.BP_Tractor_C.ReceiveOnVehicleShutDown
struct ABP_Tractor_C_ReceiveOnVehicleShutDown_Params
{
};

// Function BP_Tractor.BP_Tractor_C.ReceiveBeginPlay
struct ABP_Tractor_C_ReceiveBeginPlay_Params
{
};

// Function BP_Tractor.BP_Tractor_C.Server_SetFlashlightOn
struct ABP_Tractor_C_Server_SetFlashlightOn_Params
{
	bool*                                              FlashlightOn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Tractor.BP_Tractor_C.GainedSignificance
struct ABP_Tractor_C_GainedSignificance_Params
{
};

// Function BP_Tractor.BP_Tractor_C.LostSignificance
struct ABP_Tractor_C_LostSignificance_Params
{
};

// Function BP_Tractor.BP_Tractor_C.Multicast_CloseTrunk
struct ABP_Tractor_C_Multicast_CloseTrunk_Params
{
};

// Function BP_Tractor.BP_Tractor_C.Multicast_OpenTrunk
struct ABP_Tractor_C_Multicast_OpenTrunk_Params
{
};

// Function BP_Tractor.BP_Tractor_C.ExecuteUbergraph_BP_Tractor
struct ABP_Tractor_C_ExecuteUbergraph_BP_Tractor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
