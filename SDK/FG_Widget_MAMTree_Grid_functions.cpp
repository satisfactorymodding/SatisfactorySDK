// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MAMTree_Grid_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_MAMTree_Grid_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnPreviewMouseButtonDown");

	UWidget_MAMTree_Grid_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetNodeState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct>* NewNodeData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<EMamTree_NodeStates> NodeState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::GetNodeState(struct FIntVector2D* Coordinates, TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct>* NewNodeData, TEnumAsByte<EMamTree_NodeStates>* NodeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetNodeState");

	UWidget_MAMTree_Grid_C_GetNodeState_Params params;
	params.Coordinates = Coordinates;
	params.NewNodeData = NewNodeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NodeState != nullptr)
		*NodeState = params.NodeState;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSchematicResearched
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 SchematicClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWidget_MAMTree_Grid_C::IsSchematicResearched(class UClass** SchematicClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSchematicResearched");

	UWidget_MAMTree_Grid_C_IsSchematicResearched_Params params;
	params.SchematicClass = SchematicClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ResetSelectedNode
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Grid_C::ResetSelectedNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ResetSelectedNode");

	UWidget_MAMTree_Grid_C_ResetSelectedNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchStarted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Grid_C::OnResearchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchStarted");

	UWidget_MAMTree_Grid_C_OnResearchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeUnhovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::OnParentNodeUnhovered(struct FIntVector2D* Coordinates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeUnhovered");

	UWidget_MAMTree_Grid_C_OnParentNodeUnhovered_Params params;
	params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::OnParentNodeHovered(struct FIntVector2D* Coordinates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeHovered");

	UWidget_MAMTree_Grid_C_OnParentNodeHovered_Params params;
	params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.TellNodesIfOtherNodeIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::TellNodesIfOtherNodeIsSelected(bool* isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.TellNodesIfOtherNodeIsSelected");

	UWidget_MAMTree_Grid_C_TellNodesIfOtherNodeIsSelected_Params params;
	params.isSelected = isSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SetupCavases
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel**           GridCanvas                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCanvasPanel**           NodeCanvas                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget_MAMTree_Road_C** Roads                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_MAMTree_Grid_C::SetupCavases(class UCanvasPanel** GridCanvas, class UCanvasPanel** NodeCanvas, class UWidget_MAMTree_Road_C** Roads)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SetupCavases");

	UWidget_MAMTree_Grid_C_SetupCavases_Params params;
	params.GridCanvas = GridCanvas;
	params.NodeCanvas = NodeCanvas;
	params.Roads = Roads;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_SetupTileFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FIntVector2D*           NodeToUnhide                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::EditorOnly_SetupTileFeedback(struct FIntVector2D* Coordinates, struct FIntVector2D* NodeToUnhide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_SetupTileFeedback");

	UWidget_MAMTree_Grid_C_EditorOnly_SetupTileFeedback_Params params;
	params.Coordinates = Coordinates;
	params.NodeToUnhide = NodeToUnhide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnGenerateTree
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Grid_C::OnGenerateTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnGenerateTree");

	UWidget_MAMTree_Grid_C_OnGenerateTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnNodeClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewCoordinates                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::OnNodeClicked(bool* NewCoordinates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnNodeClicked");

	UWidget_MAMTree_Grid_C_OnNodeClicked_Params params;
	params.NewCoordinates = NewCoordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_OnActiveNodesUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_MAMTree_Grid_C::EditorOnly_OnActiveNodesUpdated(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_OnActiveNodesUpdated");

	UWidget_MAMTree_Grid_C_EditorOnly_OnActiveNodesUpdated_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnDataCleared
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Grid_C::OnDataCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnDataCleared");

	UWidget_MAMTree_Grid_C_OnDataCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnTreeLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Grid_C::OnTreeLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnTreeLoaded");

	UWidget_MAMTree_Grid_C_OnTreeLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSelectedNodeValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::IsSelectedNodeValid(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSelectedNodeValid");

	UWidget_MAMTree_Grid_C_IsSelectedNodeValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           Coordinate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::OnParentNodeClicked(struct FIntVector2D* Coordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeClicked");

	UWidget_MAMTree_Grid_C_OnParentNodeClicked_Params params;
	params.Coordinate = Coordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateRoads
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Grid_C::UpdateRoads()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateRoads");

	UWidget_MAMTree_Grid_C_UpdateRoads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ClearData
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Grid_C::ClearData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ClearData");

	UWidget_MAMTree_Grid_C_ClearData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadPointsFromCoordinates
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           StartCoordinates               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FIntVector2D*           EndCoordinates                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector2D>       ConvertedRoadPoints            (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<EDirection>        RoadDirection                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::GetRoadPointsFromCoordinates(struct FIntVector2D* StartCoordinates, struct FIntVector2D* EndCoordinates, TArray<struct FVector2D>* ConvertedRoadPoints, TEnumAsByte<EDirection>* RoadDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadPointsFromCoordinates");

	UWidget_MAMTree_Grid_C_GetRoadPointsFromCoordinates_Params params;
	params.StartCoordinates = StartCoordinates;
	params.EndCoordinates = EndCoordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConvertedRoadPoints != nullptr)
		*ConvertedRoadPoints = params.ConvertedRoadPoints;
	if (RoadDirection != nullptr)
		*RoadDirection = params.RoadDirection;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntVector2D*           StartCoordinates               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FIntVector2D*           EndCoordinates                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDirection>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EDirection> UWidget_MAMTree_Grid_C::GetRoadDirection(struct FIntVector2D* StartCoordinates, struct FIntVector2D* EndCoordinates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadDirection");

	UWidget_MAMTree_Grid_C_GetRoadDirection_Params params;
	params.StartCoordinates = StartCoordinates;
	params.EndCoordinates = EndCoordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.DrawRoad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FIntVector2D>    mTempRoadTiles                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          HighlightedRoad                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::DrawRoad(struct FIntVector2D* Coordinates, bool* HighlightedRoad, TArray<struct FIntVector2D>* mTempRoadTiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.DrawRoad");

	UWidget_MAMTree_Grid_C_DrawRoad_Params params;
	params.Coordinates = Coordinates;
	params.HighlightedRoad = HighlightedRoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mTempRoadTiles != nullptr)
		*mTempRoadTiles = params.mTempRoadTiles;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateOccupiedTilesFromRoadPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMAMTree_RoadStartEnd*  Road                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::GenerateOccupiedTilesFromRoadPoints(struct FMAMTree_RoadStartEnd* Road)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateOccupiedTilesFromRoadPoints");

	UWidget_MAMTree_Grid_C_GenerateOccupiedTilesFromRoadPoints_Params params;
	params.Road = Road;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateTree
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct>* NodeData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWidget_MAMTree_Grid_C::GenerateTree(TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct>* NodeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateTree");

	UWidget_MAMTree_Grid_C_GenerateTree_Params params;
	params.NodeData = NodeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.LoadSelectedTree
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Grid_C::LoadSelectedTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.LoadSelectedTree");

	UWidget_MAMTree_Grid_C_LoadSelectedTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SelectResearchTree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 researchTree                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::SelectResearchTree(class UClass** researchTree)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SelectResearchTree");

	UWidget_MAMTree_Grid_C_SelectResearchTree_Params params;
	params.researchTree = researchTree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetInvalidCoordinates
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntVector2D            Coordinates                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::GetInvalidCoordinates(struct FIntVector2D* Coordinates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetInvalidCoordinates");

	UWidget_MAMTree_Grid_C_GetInvalidCoordinates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Coordinates != nullptr)
		*Coordinates = params.Coordinates;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.RemoveRelevantRoadOccupiedTiles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMAMTree_RoadStartEnd*  RoadStartEnd                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::RemoveRelevantRoadOccupiedTiles(struct FMAMTree_RoadStartEnd* RoadStartEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.RemoveRelevantRoadOccupiedTiles");

	UWidget_MAMTree_Grid_C_RemoveRelevantRoadOccupiedTiles_Params params;
	params.RoadStartEnd = RoadStartEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateOccupiedRoadTiles_OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMAMTree_RoadStartEnd*  Road                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::UpdateOccupiedRoadTiles_OLD(struct FMAMTree_RoadStartEnd* Road)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateOccupiedRoadTiles_OLD");

	UWidget_MAMTree_Grid_C_UpdateOccupiedRoadTiles_OLD_Params params;
	params.Road = Road;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.AddOrUpdateNodeObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           Coordinate                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FMAMTree_NodeData_Struct* NodeData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_MAMTree_Grid_C::AddOrUpdateNodeObject(struct FIntVector2D* Coordinate, struct FMAMTree_NodeData_Struct* NodeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.AddOrUpdateNodeObject");

	UWidget_MAMTree_Grid_C_AddOrUpdateNodeObject_Params params;
	params.Coordinate = Coordinate;
	params.NodeData = NodeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.PositionWidgetOnGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel**           CanvasPanel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::PositionWidgetOnGrid(class UCanvasPanel** CanvasPanel, class UWidget** Widget, struct FIntVector2D* Coordinates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.PositionWidgetOnGrid");

	UWidget_MAMTree_Grid_C_PositionWidgetOnGrid_Params params;
	params.CanvasPanel = CanvasPanel;
	params.Widget = Widget;
	params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetPixelPosOnGrid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::GetPixelPosOnGrid(struct FIntVector2D* Coordinates, struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetPixelPosOnGrid");

	UWidget_MAMTree_Grid_C_GetPixelPosOnGrid_Params params;
	params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsTileRoadHighlighted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::IsTileRoadHighlighted(struct FIntVector2D* Coordinates, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsTileRoadHighlighted");

	UWidget_MAMTree_Grid_C_IsTileRoadHighlighted_Params params;
	params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadHighlightOffsets_OLD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FIntVector2D>    Array                          (Parm, OutParm, ZeroConstructor)

void UWidget_MAMTree_Grid_C::GetRoadHighlightOffsets_OLD(struct FIntVector2D* Coordinates, TArray<struct FIntVector2D>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadHighlightOffsets_OLD");

	UWidget_MAMTree_Grid_C_GetRoadHighlightOffsets_OLD_Params params;
	params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.CreateNodeObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMAMTree_NodeData_Struct* NodeData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_MAMTree_Grid_C::CreateNodeObject(struct FMAMTree_NodeData_Struct* NodeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.CreateNodeObject");

	UWidget_MAMTree_Grid_C_CreateNodeObject_Params params;
	params.NodeData = NodeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ShowUnlockIconOnNodes
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget_MAMTree_Node_C*>* NodeObjects                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWidget_MAMTree_Grid_C::ShowUnlockIconOnNodes(TArray<class UWidget_MAMTree_Node_C*>* NodeObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ShowUnlockIconOnNodes");

	UWidget_MAMTree_Grid_C_ShowUnlockIconOnNodes_Params params;
	params.NodeObjects = NodeObjects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ExecuteUbergraph_Widget_MAMTree_Grid
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::ExecuteUbergraph_Widget_MAMTree_Grid(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ExecuteUbergraph_Widget_MAMTree_Grid");

	UWidget_MAMTree_Grid_C_ExecuteUbergraph_Widget_MAMTree_Grid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchSelectedSchematic__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::OnResearchSelectedSchematic__DelegateSignature(class UClass** schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchSelectedSchematic__DelegateSignature");

	UWidget_MAMTree_Grid_C_OnResearchSelectedSchematic__DelegateSignature_Params params;
	params.schematic = schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnSaveTree__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 researchTree                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Grid_C::OnSaveTree__DelegateSignature(class UClass** researchTree)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnSaveTree__DelegateSignature");

	UWidget_MAMTree_Grid_C_OnSaveTree__DelegateSignature_Params params;
	params.researchTree = researchTree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnLoadClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Grid_C::OnLoadClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnLoadClicked__DelegateSignature");

	UWidget_MAMTree_Grid_C_OnLoadClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
