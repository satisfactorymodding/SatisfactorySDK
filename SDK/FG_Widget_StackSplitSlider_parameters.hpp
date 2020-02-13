#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_StackSplitSlider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.ClampToValidRange
struct UWidget_StackSplitSlider_C_ClampToValidRange_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnKeyUp
struct UWidget_StackSplitSlider_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SetSliderAfterText
struct UWidget_StackSplitSlider_C_SetSliderAfterText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDirection>*                           LeftOrRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.UpdateText
struct UWidget_StackSplitSlider_C_UpdateText_Params
{
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SnapSliderValue
struct UWidget_StackSplitSlider_C_SnapSliderValue_Params
{
	float*                                             NormalizedValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SnappedValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.OnPaint
struct UWidget_StackSplitSlider_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.UpdateSliderValue
struct UWidget_StackSplitSlider_C_UpdateSliderValue_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetProgressBarPercentage
struct UWidget_StackSplitSlider_C_GetProgressBarPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumInNewStackText
struct UWidget_StackSplitSlider_C_GetNumInNewStackText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumLeftAtSlot
struct UWidget_StackSplitSlider_C_GetNumLeftAtSlot_Params
{
	int                                                NumLeft;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.GetNumLeftAtSlotText
struct UWidget_StackSplitSlider_C_GetNumLeftAtSlotText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.SplitResource
struct UWidget_StackSplitSlider_C_SplitResource_Params
{
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.Construct
struct UWidget_StackSplitSlider_C_Construct_Params
{
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UWidget_StackSplitSlider_C_BndEvt__mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mToSlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWidget_StackSplitSlider_C_BndEvt__mToSlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWidget_StackSplitSlider_C_BndEvt__mCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mLeftText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
struct UWidget_StackSplitSlider_C_BndEvt__mLeftText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.BndEvt__mRightText_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
struct UWidget_StackSplitSlider_C_BndEvt__mRightText_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.CloseStackSplitSlider
struct UWidget_StackSplitSlider_C_CloseStackSplitSlider_Params
{
};

// Function Widget_StackSplitSlider.Widget_StackSplitSlider_C.ExecuteUbergraph_Widget_StackSplitSlider
struct UWidget_StackSplitSlider_C_ExecuteUbergraph_Widget_StackSplitSlider_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
