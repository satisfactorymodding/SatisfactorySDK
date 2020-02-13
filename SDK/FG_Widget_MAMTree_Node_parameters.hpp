#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MAMTree_Node_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.Shine
struct UWidget_MAMTree_Node_C_Shine_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ShowHideKeyIcon
struct UWidget_MAMTree_Node_C_ShowHideKeyIcon_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ShowHideUnlockIcon
struct UWidget_MAMTree_Node_C_ShowHideUnlockIcon_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetButtonNormalColor
struct UWidget_MAMTree_Node_C_SetButtonNormalColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetNodeState
struct UWidget_MAMTree_Node_C_SetNodeState_Params
{
	TEnumAsByte<EMamTree_NodeStates>*                  State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnMenuOpen
struct UWidget_MAMTree_Node_C_OnMenuOpen_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetIsSelected
struct UWidget_MAMTree_Node_C_SetIsSelected_Params
{
	bool*                                              mIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.UpdateNodeIcon
struct UWidget_MAMTree_Node_C_UpdateNodeIcon_Params
{
	struct FMAMTree_NodeData_Struct*                   mNodeData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.PreConstruct
struct UWidget_MAMTree_Node_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_MAMTree_Node_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWidget_MAMTree_Node_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWidget_MAMTree_Node_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mHoverMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature
struct UWidget_MAMTree_Node_C_BndEvt__mHoverMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool*                                              bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.CloseMenu
struct UWidget_MAMTree_Node_C_CloseMenu_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnResearchButtonPressed
struct UWidget_MAMTree_Node_C_OnResearchButtonPressed_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWidget_MAMTree_Node_C_BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UWidget_MAMTree_Node_C_BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UWidget_MAMTree_Node_C_BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ExecuteUbergraph_Widget_MAMTree_Node
struct UWidget_MAMTree_Node_C_ExecuteUbergraph_Widget_MAMTree_Node_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnResearchStarted__DelegateSignature
struct UWidget_MAMTree_Node_C_OnResearchStarted__DelegateSignature_Params
{
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnUnhovered__DelegateSignature
struct UWidget_MAMTree_Node_C_OnUnhovered__DelegateSignature_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnHovered__DelegateSignature
struct UWidget_MAMTree_Node_C_OnHovered__DelegateSignature_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnClicked__DelegateSignature
struct UWidget_MAMTree_Node_C_OnClicked__DelegateSignature_Params
{
	struct FIntVector2D*                               Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
