#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPA_Golfcart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPA_Golfcart.BPA_Golfcart_C.SetBurnOutSoundParameters
struct UBPA_Golfcart_C_SetBurnOutSoundParameters_Params
{
};

// Function BPA_Golfcart.BPA_Golfcart_C.SetDriftingSoundParameters
struct UBPA_Golfcart_C_SetDriftingSoundParameters_Params
{
	float*                                             SteeringInput;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_Golfcart.BPA_Golfcart_C.BlueprintUpdateAnimation
struct UBPA_Golfcart_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_Deactive
struct UBPA_Golfcart_C_AnimNotify_Deactive_Params
{
};

// Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_Activate
struct UBPA_Golfcart_C_AnimNotify_Activate_Params
{
};

// Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_PlaySirenSound
struct UBPA_Golfcart_C_AnimNotify_PlaySirenSound_Params
{
};

// Function BPA_Golfcart.BPA_Golfcart_C.AnimNotify_StopGolfCartSirenSound
struct UBPA_Golfcart_C_AnimNotify_StopGolfCartSirenSound_Params
{
};

// Function BPA_Golfcart.BPA_Golfcart_C.BlueprintBeginPlay
struct UBPA_Golfcart_C_BlueprintBeginPlay_Params
{
};

// Function BPA_Golfcart.BPA_Golfcart_C.ExecuteUbergraph_BPA_Golfcart
struct UBPA_Golfcart_C_ExecuteUbergraph_BPA_Golfcart_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
