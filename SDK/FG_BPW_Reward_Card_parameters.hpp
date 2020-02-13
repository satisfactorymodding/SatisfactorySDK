#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_Reward_Card_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_Reward_Card.BPW_Reward_Card_C.SetAmountText
struct UBPW_Reward_Card_C_SetAmountText_Params
{
	struct FFUnlockDataStruct*                         UnlockDataStruct;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_Reward_Card.BPW_Reward_Card_C.CreateTooltipWidget
struct UBPW_Reward_Card_C_CreateTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPW_Reward_Card.BPW_Reward_Card_C.SetName
struct UBPW_Reward_Card_C_SetName_Params
{
	struct FFUnlockDataStruct*                         UnlockDataStruct;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_Reward_Card.BPW_Reward_Card_C.SetIcon
struct UBPW_Reward_Card_C_SetIcon_Params
{
	struct FFUnlockDataStruct*                         UnlockDataStruct;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_Reward_Card.BPW_Reward_Card_C.PreConstruct
struct UBPW_Reward_Card_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_Reward_Card.BPW_Reward_Card_C.ExecuteUbergraph_BPW_Reward_Card
struct UBPW_Reward_Card_C_ExecuteUbergraph_BPW_Reward_Card_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
