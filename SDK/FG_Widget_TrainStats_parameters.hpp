#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TrainStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_TrainStats.Widget_TrainStats_C.UpdateDockingButton
struct UWidget_TrainStats_C_UpdateDockingButton_Params
{
	ETrainDockingState*                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TrainStats.Widget_TrainStats_C.SetTitle
struct UWidget_TrainStats_C_SetTitle_Params
{
	struct FText*                                      mTrainName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_TrainStats.Widget_TrainStats_C.BndEvt__mTrainNameInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
struct UWidget_TrainStats_C_BndEvt__mTrainNameInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TrainStats.Widget_TrainStats_C.PreConstruct
struct UWidget_TrainStats_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TrainStats.Widget_TrainStats_C.Destruct
struct UWidget_TrainStats_C_Destruct_Params
{
};

// Function Widget_TrainStats.Widget_TrainStats_C.Init
struct UWidget_TrainStats_C_Init_Params
{
	bool*                                              SelfDrivingEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ETrainDockingState*                                DockingState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TrainStats.Widget_TrainStats_C.BndEvt__Widget_StandardButton_Togglable_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
struct UWidget_TrainStats_C_BndEvt__Widget_StandardButton_Togglable_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params
{
	bool*                                              IsTrue;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TrainStats.Widget_TrainStats_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWidget_TrainStats_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function Widget_TrainStats.Widget_TrainStats_C.ExecuteUbergraph_Widget_TrainStats
struct UWidget_TrainStats_C_ExecuteUbergraph_Widget_TrainStats_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TrainStats.Widget_TrainStats_C.OnDockClicked__DelegateSignature
struct UWidget_TrainStats_C_OnDockClicked__DelegateSignature_Params
{
};

// Function Widget_TrainStats.Widget_TrainStats_C.OnAutopilotChanged__DelegateSignature
struct UWidget_TrainStats_C_OnAutopilotChanged__DelegateSignature_Params
{
	bool*                                              SelfDrivingEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_TrainStats.Widget_TrainStats_C.OnNameChanged__DelegateSignature
struct UWidget_TrainStats_C_OnNameChanged__DelegateSignature_Params
{
	struct FText*                                      mName;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
