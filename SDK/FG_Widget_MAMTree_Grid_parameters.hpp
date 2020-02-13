#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MAMTree_Grid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnPreviewMouseButtonDown
struct UWidget_MAMTree_Grid_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetNodeState
struct UWidget_MAMTree_Grid_C_GetNodeState_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct>* NewNodeData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<EMamTree_NodeStates>                   NodeState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSchematicResearched
struct UWidget_MAMTree_Grid_C_IsSchematicResearched_Params
{
	class UClass**                                     SchematicClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ResetSelectedNode
struct UWidget_MAMTree_Grid_C_ResetSelectedNode_Params
{
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchStarted
struct UWidget_MAMTree_Grid_C_OnResearchStarted_Params
{
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeUnhovered
struct UWidget_MAMTree_Grid_C_OnParentNodeUnhovered_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeHovered
struct UWidget_MAMTree_Grid_C_OnParentNodeHovered_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.TellNodesIfOtherNodeIsSelected
struct UWidget_MAMTree_Grid_C_TellNodesIfOtherNodeIsSelected_Params
{
	bool*                                              isSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SetupCavases
struct UWidget_MAMTree_Grid_C_SetupCavases_Params
{
	class UCanvasPanel**                               GridCanvas;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel**                               NodeCanvas;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget_MAMTree_Road_C**                     Roads;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_SetupTileFeedback
struct UWidget_MAMTree_Grid_C_EditorOnly_SetupTileFeedback_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FIntVector2D*                               NodeToUnhide;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnGenerateTree
struct UWidget_MAMTree_Grid_C_OnGenerateTree_Params
{
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnNodeClicked
struct UWidget_MAMTree_Grid_C_OnNodeClicked_Params
{
	bool*                                              NewCoordinates;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_OnActiveNodesUpdated
struct UWidget_MAMTree_Grid_C_EditorOnly_OnActiveNodesUpdated_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnDataCleared
struct UWidget_MAMTree_Grid_C_OnDataCleared_Params
{
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnTreeLoaded
struct UWidget_MAMTree_Grid_C_OnTreeLoaded_Params
{
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSelectedNodeValid
struct UWidget_MAMTree_Grid_C_IsSelectedNodeValid_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeClicked
struct UWidget_MAMTree_Grid_C_OnParentNodeClicked_Params
{
	struct FIntVector2D*                               Coordinate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateRoads
struct UWidget_MAMTree_Grid_C_UpdateRoads_Params
{
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ClearData
struct UWidget_MAMTree_Grid_C_ClearData_Params
{
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadPointsFromCoordinates
struct UWidget_MAMTree_Grid_C_GetRoadPointsFromCoordinates_Params
{
	struct FIntVector2D*                               StartCoordinates;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FIntVector2D*                               EndCoordinates;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           ConvertedRoadPoints;                                      // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<EDirection>                            RoadDirection;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadDirection
struct UWidget_MAMTree_Grid_C_GetRoadDirection_Params
{
	struct FIntVector2D*                               StartCoordinates;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FIntVector2D*                               EndCoordinates;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDirection>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.DrawRoad
struct UWidget_MAMTree_Grid_C_DrawRoad_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FIntVector2D>                        mTempRoadTiles;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              HighlightedRoad;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateOccupiedTilesFromRoadPoints
struct UWidget_MAMTree_Grid_C_GenerateOccupiedTilesFromRoadPoints_Params
{
	struct FMAMTree_RoadStartEnd*                      Road;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateTree
struct UWidget_MAMTree_Grid_C_GenerateTree_Params
{
	TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct>* NodeData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.LoadSelectedTree
struct UWidget_MAMTree_Grid_C_LoadSelectedTree_Params
{
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SelectResearchTree
struct UWidget_MAMTree_Grid_C_SelectResearchTree_Params
{
	class UClass**                                     researchTree;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetInvalidCoordinates
struct UWidget_MAMTree_Grid_C_GetInvalidCoordinates_Params
{
	struct FIntVector2D                                Coordinates;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.RemoveRelevantRoadOccupiedTiles
struct UWidget_MAMTree_Grid_C_RemoveRelevantRoadOccupiedTiles_Params
{
	struct FMAMTree_RoadStartEnd*                      RoadStartEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateOccupiedRoadTiles_OLD
struct UWidget_MAMTree_Grid_C_UpdateOccupiedRoadTiles_OLD_Params
{
	struct FMAMTree_RoadStartEnd*                      Road;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.AddOrUpdateNodeObject
struct UWidget_MAMTree_Grid_C_AddOrUpdateNodeObject_Params
{
	struct FIntVector2D*                               Coordinate;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FMAMTree_NodeData_Struct*                   NodeData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.PositionWidgetOnGrid
struct UWidget_MAMTree_Grid_C_PositionWidgetOnGrid_Params
{
	class UCanvasPanel**                               CanvasPanel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetPixelPosOnGrid
struct UWidget_MAMTree_Grid_C_GetPixelPosOnGrid_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsTileRoadHighlighted
struct UWidget_MAMTree_Grid_C_IsTileRoadHighlighted_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadHighlightOffsets_OLD
struct UWidget_MAMTree_Grid_C_GetRoadHighlightOffsets_OLD_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FIntVector2D>                        Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.CreateNodeObject
struct UWidget_MAMTree_Grid_C_CreateNodeObject_Params
{
	struct FMAMTree_NodeData_Struct*                   NodeData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ShowUnlockIconOnNodes
struct UWidget_MAMTree_Grid_C_ShowUnlockIconOnNodes_Params
{
	TArray<class UWidget_MAMTree_Node_C*>*             NodeObjects;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ExecuteUbergraph_Widget_MAMTree_Grid
struct UWidget_MAMTree_Grid_C_ExecuteUbergraph_Widget_MAMTree_Grid_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchSelectedSchematic__DelegateSignature
struct UWidget_MAMTree_Grid_C_OnResearchSelectedSchematic__DelegateSignature_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnSaveTree__DelegateSignature
struct UWidget_MAMTree_Grid_C_OnSaveTree__DelegateSignature_Params
{
	class UClass**                                     researchTree;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnLoadClicked__DelegateSignature
struct UWidget_MAMTree_Grid_C_OnLoadClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
