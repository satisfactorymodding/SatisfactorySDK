#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Golfcart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Golfcart.BP_Golfcart_C.GetDismantleRefund
struct ABP_Golfcart_C_GetDismantleRefund_Params
{
	TArray<struct FInventoryStack>                     out_refund;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Golfcart.BP_Golfcart_C.ReceiveBeginPlay
struct ABP_Golfcart_C_ReceiveBeginPlay_Params
{
};

// Function BP_Golfcart.BP_Golfcart_C.ToggleFreeCamera
struct ABP_Golfcart_C_ToggleFreeCamera_Params
{
};

// Function BP_Golfcart.BP_Golfcart_C.Multicast_Honk
struct ABP_Golfcart_C_Multicast_Honk_Params
{
};

// Function BP_Golfcart.BP_Golfcart_C.DisablePhysics
struct ABP_Golfcart_C_DisablePhysics_Params
{
};

// Function BP_Golfcart.BP_Golfcart_C.EnablePhysics
struct ABP_Golfcart_C_EnablePhysics_Params
{
};

// Function BP_Golfcart.BP_Golfcart_C.DoFoldAnimation
struct ABP_Golfcart_C_DoFoldAnimation_Params
{
};

// Function BP_Golfcart.BP_Golfcart_C.ExecuteUbergraph_BP_Golfcart
struct ABP_Golfcart_C_ExecuteUbergraph_BP_Golfcart_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
