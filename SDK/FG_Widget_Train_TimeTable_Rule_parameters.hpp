#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Train_TimeTable_Rule_classes.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.PlayNewNameAnim
struct UWidget_Train_TimeTable_Rule_C_PlayNewNameAnim_Params
{
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.SetOrderButtonsVisibility
struct UWidget_Train_TimeTable_Rule_C_SetOrderButtonsVisibility_Params
{
	bool                                               UpVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DownVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.PlayFadeAnim
struct UWidget_Train_TimeTable_Rule_C_PlayFadeAnim_Params
{
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.UpdateRule
struct UWidget_Train_TimeTable_Rule_C_UpdateRule_Params
{
	class AFGTrainStationIdentifier*                   mStation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.SetIsSelected
struct UWidget_Train_TimeTable_Rule_C_SetIsSelected_Params
{
	bool                                               mIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.SetTitle
struct UWidget_Train_TimeTable_Rule_C_SetTitle_Params
{
	struct FText                                       mTitle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.PreConstruct
struct UWidget_Train_TimeTable_Rule_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.Construct
struct UWidget_Train_TimeTable_Rule_C_Construct_Params
{
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWidget_Train_TimeTable_Rule_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWidget_Train_TimeTable_Rule_C_BndEvt__mDeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.BndEvt__mMoveUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWidget_Train_TimeTable_Rule_C_BndEvt__mMoveUp_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.BndEvt__mMoveDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWidget_Train_TimeTable_Rule_C_BndEvt__mMoveDown_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.ExecuteUbergraph_Widget_Train_TimeTable_Rule
struct UWidget_Train_TimeTable_Rule_C_ExecuteUbergraph_Widget_Train_TimeTable_Rule_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.OnMoveDownClicked__DelegateSignature
struct UWidget_Train_TimeTable_Rule_C_OnMoveDownClicked__DelegateSignature_Params
{
	class UWidget_Train_TimeTable_Rule_C*              RuleWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.OnMoveUpClicked__DelegateSignature
struct UWidget_Train_TimeTable_Rule_C_OnMoveUpClicked__DelegateSignature_Params
{
	class UWidget_Train_TimeTable_Rule_C*              RuleWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.OnDeleted__DelegateSignature
struct UWidget_Train_TimeTable_Rule_C_OnDeleted__DelegateSignature_Params
{
	class UWidget_Train_TimeTable_Rule_C*              RuleWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_Train_TimeTable_Rule.Widget_Train_TimeTable_Rule_C.OnClicked__DelegateSignature
struct UWidget_Train_TimeTable_Rule_C_OnClicked__DelegateSignature_Params
{
	class UWidget_Train_TimeTable_Rule_C*              RuleWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
