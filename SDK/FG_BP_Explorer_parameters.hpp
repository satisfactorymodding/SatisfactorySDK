#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Explorer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Explorer.BP_Explorer_C.UpdateOutline
struct ABP_Explorer_C_UpdateOutline_Params
{
	bool*                                              aimingAtWorkbench;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explorer.BP_Explorer_C.GetActorRepresentationText
struct ABP_Explorer_C_GetActorRepresentationText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Explorer.BP_Explorer_C.GetActorRepresentationTexture
struct ABP_Explorer_C_GetActorRepresentationTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Explorer.BP_Explorer_C.CheckSuspension
struct ABP_Explorer_C_CheckSuspension_Params
{
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explorer.BP_Explorer_C.OnRep_mFlashlightOn
struct ABP_Explorer_C_OnRep_mFlashlightOn_Params
{
};

// Function BP_Explorer.BP_Explorer_C.GetAttackLocation
struct ABP_Explorer_C_GetAttackLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Explorer.BP_Explorer_C.GetEnemyTargetDesirability
struct ABP_Explorer_C_GetEnemyTargetDesirability_Params
{
	class AFGEnemyController**                         forController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Explorer.BP_Explorer_C.ShouldAutoregisterAsTargetable
struct ABP_Explorer_C_ShouldAutoregisterAsTargetable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Explorer.BP_Explorer_C.InpActEvt_Flashlight_K2Node_InputActionEvent_1
struct ABP_Explorer_C_InpActEvt_Flashlight_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Explorer.BP_Explorer_C.ReceiveTick
struct ABP_Explorer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explorer.BP_Explorer_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct ABP_Explorer_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explorer.BP_Explorer_C.Server_SetFlashlightOn
struct ABP_Explorer_C_Server_SetFlashlightOn_Params
{
	bool*                                              FlashlightOn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explorer.BP_Explorer_C.GainedSignificance
struct ABP_Explorer_C_GainedSignificance_Params
{
};

// Function BP_Explorer.BP_Explorer_C.LostSignificance
struct ABP_Explorer_C_LostSignificance_Params
{
};

// Function BP_Explorer.BP_Explorer_C.Multicast_OpenTrunk
struct ABP_Explorer_C_Multicast_OpenTrunk_Params
{
};

// Function BP_Explorer.BP_Explorer_C.Multicast_CloseTrunk
struct ABP_Explorer_C_Multicast_CloseTrunk_Params
{
};

// Function BP_Explorer.BP_Explorer_C.ExecuteUbergraph_BP_Explorer
struct ABP_Explorer_C_ExecuteUbergraph_BP_Explorer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
