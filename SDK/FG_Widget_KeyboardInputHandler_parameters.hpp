#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_KeyboardInputHandler_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.OnKeyUp
struct UWidget_KeyboardInputHandler_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.OnTextCommited
struct UWidget_KeyboardInputHandler_C_OnTextCommited_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.Construct
struct UWidget_KeyboardInputHandler_C_Construct_Params
{
};

// Function Widget_KeyboardInputHandler.Widget_KeyboardInputHandler_C.ExecuteUbergraph_Widget_KeyboardInputHandler
struct UWidget_KeyboardInputHandler_C_ExecuteUbergraph_Widget_KeyboardInputHandler_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
