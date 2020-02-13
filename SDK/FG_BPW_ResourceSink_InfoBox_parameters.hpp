#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_InfoBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.UpdateTooltipInfo
struct UBPW_ResourceSink_InfoBox_C_UpdateTooltipInfo_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.PreConstruct
struct UBPW_ResourceSink_InfoBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.ExecuteUbergraph_BPW_ResourceSink_InfoBox
struct UBPW_ResourceSink_InfoBox_C_ExecuteUbergraph_BPW_ResourceSink_InfoBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
