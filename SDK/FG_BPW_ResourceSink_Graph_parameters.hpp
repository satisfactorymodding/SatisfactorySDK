#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_Graph_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.ResetPreviewValues
struct UBPW_ResourceSink_Graph_C_ResetPreviewValues_Params
{
};

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.AddDataPreview
struct UBPW_ResourceSink_Graph_C_AddDataPreview_Params
{
	class FString*                                     GraphID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.RedrawGraph
struct UBPW_ResourceSink_Graph_C_RedrawGraph_Params
{
};

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.OnMouseMove
struct UBPW_ResourceSink_Graph_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.UpdateOrAddGraphLine
struct UBPW_ResourceSink_Graph_C_UpdateOrAddGraphLine_Params
{
	class FString*                                     GraphID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText*                                      GraphPreviewDataSuffix;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               GraphColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      GraphData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.OnPaint
struct UBPW_ResourceSink_Graph_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.Construct
struct UBPW_ResourceSink_Graph_C_Construct_Params
{
};

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.OnMouseLeave
struct UBPW_ResourceSink_Graph_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.ExecuteUbergraph_BPW_ResourceSink_Graph
struct UBPW_ResourceSink_Graph_C_ExecuteUbergraph_BPW_ResourceSink_Graph_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
