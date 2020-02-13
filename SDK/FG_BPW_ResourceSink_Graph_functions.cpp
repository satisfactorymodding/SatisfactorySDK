// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_Graph_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.ResetPreviewValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSink_Graph_C::ResetPreviewValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.ResetPreviewValues");

	UBPW_ResourceSink_Graph_C_ResetPreviewValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.AddDataPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 GraphID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_ResourceSink_Graph_C::AddDataPreview(class FString* GraphID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.AddDataPreview");

	UBPW_ResourceSink_Graph_C_AddDataPreview_Params params;
	params.GraphID = GraphID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.RedrawGraph
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSink_Graph_C::RedrawGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.RedrawGraph");

	UBPW_ResourceSink_Graph_C_RedrawGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBPW_ResourceSink_Graph_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.OnMouseMove");

	UBPW_ResourceSink_Graph_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.UpdateOrAddGraphLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 GraphID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText*                  GraphPreviewDataSuffix         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           GraphColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  GraphData                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_ResourceSink_Graph_C::UpdateOrAddGraphLine(class FString* GraphID, struct FText* GraphPreviewDataSuffix, struct FLinearColor* GraphColor, TArray<float>* GraphData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.UpdateOrAddGraphLine");

	UBPW_ResourceSink_Graph_C_UpdateOrAddGraphLine_Params params;
	params.GraphID = GraphID;
	params.GraphPreviewDataSuffix = GraphPreviewDataSuffix;
	params.GraphColor = GraphColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GraphData != nullptr)
		*GraphData = params.GraphData;
}


// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_ResourceSink_Graph_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.OnPaint");

	UBPW_ResourceSink_Graph_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSink_Graph_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.Construct");

	UBPW_ResourceSink_Graph_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_ResourceSink_Graph_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.OnMouseLeave");

	UBPW_ResourceSink_Graph_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.ExecuteUbergraph_BPW_ResourceSink_Graph
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_Graph_C::ExecuteUbergraph_BPW_ResourceSink_Graph(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_Graph.BPW_ResourceSink_Graph_C.ExecuteUbergraph_BPW_ResourceSink_Graph");

	UBPW_ResourceSink_Graph_C_ExecuteUbergraph_BPW_ResourceSink_Graph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
