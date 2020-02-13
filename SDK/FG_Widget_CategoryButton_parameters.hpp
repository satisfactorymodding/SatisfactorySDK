#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_CategoryButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_CategoryButton.Widget_CategoryButton_C.SetAsSelected
struct UWidget_CategoryButton_C_SetAsSelected_Params
{
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.UnselectOtherCategoryButtons
struct UWidget_CategoryButton_C_UnselectOtherCategoryButtons_Params
{
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategoryIcon
struct UWidget_CategoryButton_C_SetCategoryIcon_Params
{
	class UTexture2D**                                 mIcon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategoryName
struct UWidget_CategoryButton_C_SetCategoryName_Params
{
	struct FText*                                      mName;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.UpdateButtonStyle
struct UWidget_CategoryButton_C_UpdateButtonStyle_Params
{
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
struct UWidget_CategoryButton_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWidget_CategoryButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWidget_CategoryButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.Construct
struct UWidget_CategoryButton_C_Construct_Params
{
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.ExecuteUbergraph_Widget_CategoryButton
struct UWidget_CategoryButton_C_ExecuteUbergraph_Widget_CategoryButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_CategoryButton.Widget_CategoryButton_C.OnClicked__DelegateSignature
struct UWidget_CategoryButton_C_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
