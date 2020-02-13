#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_DarkButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_DarkButton.BPW_DarkButton_C.SetIsSelected
struct UBPW_DarkButton_C_SetIsSelected_Params
{
	bool*                                              mIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DarkButton.BPW_DarkButton_C.SetText
struct UBPW_DarkButton_C_SetText_Params
{
	struct FText*                                      mText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_DarkButton.BPW_DarkButton_C.PreConstruct
struct UBPW_DarkButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DarkButton.BPW_DarkButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBPW_DarkButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DarkButton.BPW_DarkButton_C.ExecuteUbergraph_BPW_DarkButton
struct UBPW_DarkButton_C_ExecuteUbergraph_BPW_DarkButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DarkButton.BPW_DarkButton_C.OnClicked__DelegateSignature
struct UBPW_DarkButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
