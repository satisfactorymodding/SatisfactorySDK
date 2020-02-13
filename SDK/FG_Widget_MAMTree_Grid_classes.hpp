#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MAMTree_Grid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_MAMTree_Grid.Widget_MAMTree_Grid_C
// 0x01B9 (0x03E9 - 0x0230)
class UWidget_MAMTree_Grid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector2D                                   mTileSize;                                                // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> mNodeData;                                                // 0x0240(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FIntVector2D                                mGridSize;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntVector2D                                mSelectedNodeCoordinates;                                 // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDirection>                            mLastRoadDirection;                                       // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	TMap<struct FIntVector2D, struct FMAMTree_RoadOccupiedTile> mRoadOccupiedTiles;                                       // 0x02A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FIntVector2D>                        mTempRoadOccupiedTiles;                                   // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FIntVector2D, class UWidget_MAMTree_Node_C*> mNodeObjects;                                             // 0x0308(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FIntVector2D>                        mUnHiddenNodes;                                           // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      SelectedResearchTree;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FMAMTree_Vector2D_Array>             mConvertedRoadData;                                       // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              mAllResearchTrees;                                        // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnLoadClicked;                                            // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSaveTree;                                               // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UCanvasPanel*                                mParentGridCanvas;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                mParentNodeCavas;                                         // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWidget_MAMTree_Road_C*                      mParentRoads;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnResearchSelectedSchematic;                              // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FMAMTree_Vector2D_Array>             mConvertedHighlightRoadData;                              // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               mIsEditor;                                                // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MAMTree_Grid.Widget_MAMTree_Grid_C");
		return ptr;
	}


	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void GetNodeState(struct FIntVector2D* Coordinates, TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct>* NewNodeData, TEnumAsByte<EMamTree_NodeStates>* NodeState);
	bool IsSchematicResearched(class UClass** SchematicClass);
	void ResetSelectedNode();
	void OnResearchStarted();
	void OnParentNodeUnhovered(struct FIntVector2D* Coordinates);
	void OnParentNodeHovered(struct FIntVector2D* Coordinates);
	void TellNodesIfOtherNodeIsSelected(bool* isSelected);
	void SetupCavases(class UCanvasPanel** GridCanvas, class UCanvasPanel** NodeCanvas, class UWidget_MAMTree_Road_C** Roads);
	void EditorOnly_SetupTileFeedback(struct FIntVector2D* Coordinates, struct FIntVector2D* NodeToUnhide);
	void OnGenerateTree();
	void OnNodeClicked(bool* NewCoordinates);
	void EditorOnly_OnActiveNodesUpdated(struct FText* Text);
	void OnDataCleared();
	void OnTreeLoaded();
	void IsSelectedNodeValid(bool* IsValid);
	void OnParentNodeClicked(struct FIntVector2D* Coordinate);
	void UpdateRoads();
	void ClearData();
	void GetRoadPointsFromCoordinates(struct FIntVector2D* StartCoordinates, struct FIntVector2D* EndCoordinates, TArray<struct FVector2D>* ConvertedRoadPoints, TEnumAsByte<EDirection>* RoadDirection);
	TEnumAsByte<EDirection> GetRoadDirection(struct FIntVector2D* StartCoordinates, struct FIntVector2D* EndCoordinates);
	void DrawRoad(struct FIntVector2D* Coordinates, bool* HighlightedRoad, TArray<struct FIntVector2D>* mTempRoadTiles);
	void GenerateOccupiedTilesFromRoadPoints(struct FMAMTree_RoadStartEnd* Road);
	void GenerateTree(TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct>* NodeData);
	void LoadSelectedTree();
	void SelectResearchTree(class UClass** researchTree);
	void GetInvalidCoordinates(struct FIntVector2D* Coordinates);
	void RemoveRelevantRoadOccupiedTiles(struct FMAMTree_RoadStartEnd* RoadStartEnd);
	void UpdateOccupiedRoadTiles_OLD(struct FMAMTree_RoadStartEnd* Road);
	void AddOrUpdateNodeObject(struct FIntVector2D* Coordinate, struct FMAMTree_NodeData_Struct* NodeData);
	void PositionWidgetOnGrid(class UCanvasPanel** CanvasPanel, class UWidget** Widget, struct FIntVector2D* Coordinates);
	void GetPixelPosOnGrid(struct FIntVector2D* Coordinates, struct FVector2D* Position);
	void IsTileRoadHighlighted(struct FIntVector2D* Coordinates, bool* Return);
	void GetRoadHighlightOffsets_OLD(struct FIntVector2D* Coordinates, TArray<struct FIntVector2D>* Array);
	void CreateNodeObject(struct FMAMTree_NodeData_Struct* NodeData);
	void ShowUnlockIconOnNodes(TArray<class UWidget_MAMTree_Node_C*>* NodeObjects);
	void ExecuteUbergraph_Widget_MAMTree_Grid(int* EntryPoint);
	void OnResearchSelectedSchematic__DelegateSignature(class UClass** schematic);
	void OnSaveTree__DelegateSignature(class UClass** researchTree);
	void OnLoadClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
