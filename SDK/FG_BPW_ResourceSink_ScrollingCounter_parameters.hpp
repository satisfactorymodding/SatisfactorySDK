#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_ScrollingCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.UpdateCounter
struct UBPW_ResourceSink_ScrollingCounter_C_UpdateCounter_Params
{
	int*                                               NewNumber;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.PreConstruct
struct UBPW_ResourceSink_ScrollingCounter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.AnimateDigits
struct UBPW_ResourceSink_ScrollingCounter_C_AnimateDigits_Params
{
	class FString*                                     TextToAnimate;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter
struct UBPW_ResourceSink_ScrollingCounter_C_ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
