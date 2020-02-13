#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkDigit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.SwitchText
struct UBPW_ResourceSinkDigit_C_SwitchText_Params
{
};

// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.SetText
struct UBPW_ResourceSinkDigit_C_SetText_Params
{
	struct FText*                                      mText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.Construct
struct UBPW_ResourceSinkDigit_C_Construct_Params
{
};

// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.LerpDigit
struct UBPW_ResourceSinkDigit_C_LerpDigit_Params
{
};

// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.Destruct
struct UBPW_ResourceSinkDigit_C_Destruct_Params
{
};

// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.PreConstruct
struct UBPW_ResourceSinkDigit_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.ExecuteUbergraph_BPW_ResourceSinkDigit
struct UBPW_ResourceSinkDigit_C_ExecuteUbergraph_BPW_ResourceSinkDigit_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
