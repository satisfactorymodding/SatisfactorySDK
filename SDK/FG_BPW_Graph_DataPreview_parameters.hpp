#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_Graph_DataPreview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.SetValue
struct UBPW_Graph_DataPreview_C_SetValue_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.SetGraphID
struct UBPW_Graph_DataPreview_C_SetGraphID_Params
{
	class FString*                                     mTitle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.PreConstruct
struct UBPW_Graph_DataPreview_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBPW_Graph_DataPreview_C_BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBPW_Graph_DataPreview_C_BndEvt__mPreviewButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.ExecuteUbergraph_BPW_Graph_DataPreview
struct UBPW_Graph_DataPreview_C_ExecuteUbergraph_BPW_Graph_DataPreview_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnUnhovered__DelegateSignature
struct UBPW_Graph_DataPreview_C_OnUnhovered__DelegateSignature_Params
{
	class FString*                                     GraphID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnHovered__DelegateSignature
struct UBPW_Graph_DataPreview_C_OnHovered__DelegateSignature_Params
{
	class FString*                                     GraphID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
