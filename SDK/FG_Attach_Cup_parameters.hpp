#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_Cup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Attach_Cup.Attach_Cup_C.PlayAttachEffects3P
struct AAttach_Cup_C_PlayAttachEffects3P_Params
{
};

// Function Attach_Cup.Attach_Cup_C.PlayUseEffect
struct AAttach_Cup_C_PlayUseEffect_Params
{
	struct FVector*                                    UseLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attach_Cup.Attach_Cup_C.ExecuteUbergraph_Attach_Cup
struct AAttach_Cup_C_ExecuteUbergraph_Attach_Cup_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
