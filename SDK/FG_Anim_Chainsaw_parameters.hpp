#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_Chainsaw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Anim_Chainsaw.Anim_Chainsaw_C.UpdateAnimGraphValues
struct UAnim_Chainsaw_C_UpdateAnimGraphValues_Params
{
};

// Function Anim_Chainsaw.Anim_Chainsaw_C.BlueprintUpdateAnimation
struct UAnim_Chainsaw_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anim_Chainsaw.Anim_Chainsaw_C.AnimNotify_ChainSawTransition_IdleToSawing
struct UAnim_Chainsaw_C_AnimNotify_ChainSawTransition_IdleToSawing_Params
{
};

// Function Anim_Chainsaw.Anim_Chainsaw_C.AnimNotify_ChainSawTransition_SawingToIdle
struct UAnim_Chainsaw_C_AnimNotify_ChainSawTransition_SawingToIdle_Params
{
};

// Function Anim_Chainsaw.Anim_Chainsaw_C.ExecuteUbergraph_Anim_Chainsaw
struct UAnim_Chainsaw_C_ExecuteUbergraph_Anim_Chainsaw_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
