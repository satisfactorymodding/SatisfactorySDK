#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_LerpingProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.mSetPercent
struct UBPW_LerpingProgressBar_C_mSetPercent_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceProgressBarWrap;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.PreConstruct
struct UBPW_LerpingProgressBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.LerpBar
struct UBPW_LerpingProgressBar_C_LerpBar_Params
{
};

// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.Destruct
struct UBPW_LerpingProgressBar_C_Destruct_Params
{
};

// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.ExecuteUbergraph_BPW_LerpingProgressBar
struct UBPW_LerpingProgressBar_C_ExecuteUbergraph_BPW_LerpingProgressBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
