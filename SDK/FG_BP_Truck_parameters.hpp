#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Truck_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Truck.BP_Truck_C.UpdateOutline
struct ABP_Truck_C_UpdateOutline_Params
{
	bool*                                              aimingAtWorkbench;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Truck.BP_Truck_C.GetActorRepresentationTexture
struct ABP_Truck_C_GetActorRepresentationTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Truck.BP_Truck_C.OnRep_mFlashlightOn
struct ABP_Truck_C_OnRep_mFlashlightOn_Params
{
};

// Function BP_Truck.BP_Truck_C.GetAttackLocation
struct ABP_Truck_C_GetAttackLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Truck.BP_Truck_C.GetEnemyTargetDesirability
struct ABP_Truck_C_GetEnemyTargetDesirability_Params
{
	class AFGEnemyController**                         forController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Truck.BP_Truck_C.ShouldAutoregisterAsTargetable
struct ABP_Truck_C_ShouldAutoregisterAsTargetable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Truck.BP_Truck_C.InpActEvt_Flashlight_K2Node_InputActionEvent_1
struct ABP_Truck_C_InpActEvt_Flashlight_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Truck.BP_Truck_C.Server_SetFlashlightOn
struct ABP_Truck_C_Server_SetFlashlightOn_Params
{
	bool*                                              FlashlightOn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Truck.BP_Truck_C.GainedSignificance
struct ABP_Truck_C_GainedSignificance_Params
{
};

// Function BP_Truck.BP_Truck_C.LostSignificance
struct ABP_Truck_C_LostSignificance_Params
{
};

// Function BP_Truck.BP_Truck_C.Multicast_OpenTrunk
struct ABP_Truck_C_Multicast_OpenTrunk_Params
{
};

// Function BP_Truck.BP_Truck_C.Multicast_CloseTrunk
struct ABP_Truck_C_Multicast_CloseTrunk_Params
{
};

// Function BP_Truck.BP_Truck_C.ExecuteUbergraph_BP_Truck
struct ABP_Truck_C_ExecuteUbergraph_BP_Truck_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
