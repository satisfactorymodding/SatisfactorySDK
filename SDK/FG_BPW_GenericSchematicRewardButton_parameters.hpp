#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_GenericSchematicRewardButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.OnMouseMove
struct UBPW_GenericSchematicRewardButton_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.GetTooltip
struct UBPW_GenericSchematicRewardButton_C_GetTooltip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.SetUnlockData
struct UBPW_GenericSchematicRewardButton_C_SetUnlockData_Params
{
	struct FFUnlockDataStruct*                         mUnlockStruct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.Construct
struct UBPW_GenericSchematicRewardButton_C_Construct_Params
{
};

// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBPW_GenericSchematicRewardButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBPW_GenericSchematicRewardButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BPW_GenericSchematicRewardButton.BPW_GenericSchematicRewardButton_C.ExecuteUbergraph_BPW_GenericSchematicRewardButton
struct UBPW_GenericSchematicRewardButton_C_ExecuteUbergraph_BPW_GenericSchematicRewardButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
