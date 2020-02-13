#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SelfDrivingController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SelfDrivingController.BP_SelfDrivingController_C.ReceivePossess
struct ABP_SelfDrivingController_C_ReceivePossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SelfDrivingController.BP_SelfDrivingController_C.ReceiveUnPossess
struct ABP_SelfDrivingController_C_ReceiveUnPossess_Params
{
	class APawn**                                      UnpossessedPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SelfDrivingController.BP_SelfDrivingController_C.ExecuteUbergraph_BP_SelfDrivingController
struct ABP_SelfDrivingController_C_ExecuteUbergraph_BP_SelfDrivingController_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
