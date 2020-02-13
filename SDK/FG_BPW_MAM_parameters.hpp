#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_MAM_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_MAM.BPW_MAM_C.WidgetFactory
struct UBPW_MAM_C_WidgetFactory_Params
{
	class UClass**                                     PopupClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUserWidget*>                         out_widgets;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_MAM.BPW_MAM_C.SchematicsPurchased
struct UBPW_MAM_C_SchematicsPurchased_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.OnHarddriveButtonClicked
struct UBPW_MAM_C_OnHarddriveButtonClicked_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget_ListButton_C**                       ListButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.OnPopupClosed
struct UBPW_MAM_C_OnPopupClosed_Params
{
	bool*                                              confirm;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.HandleCompletedResearch
struct UBPW_MAM_C_HandleCompletedResearch_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.OnResearchStateChanged
struct UBPW_MAM_C_OnResearchStateChanged_Params
{
	EResearchState*                                    researchState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.ConvertFloatTimeToText
struct UBPW_MAM_C_ConvertFloatTimeToText_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function BPW_MAM.BPW_MAM_C.UpdateResearchTimer
struct UBPW_MAM_C_UpdateResearchTimer_Params
{
};

// Function BPW_MAM.BPW_MAM_C.OnGetTreeInfoWidget
struct UBPW_MAM_C_OnGetTreeInfoWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.OnListButtonUnhovered
struct UBPW_MAM_C_OnListButtonUnhovered_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget_ListButton_C**                       ListButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.OnListButtonHovered
struct UBPW_MAM_C_OnListButtonHovered_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget_ListButton_C**                       ListButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.OnResearchStarted
struct UBPW_MAM_C_OnResearchStarted_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.InitResearchListButtons
struct UBPW_MAM_C_InitResearchListButtons_Params
{
};

// Function BPW_MAM.BPW_MAM_C.DropInventorySlotStack
struct UBPW_MAM_C_DropInventorySlotStack_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WasStackMoved;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.Cleanup
struct UBPW_MAM_C_Cleanup_Params
{
};

// Function BPW_MAM.BPW_MAM_C.Destruct
struct UBPW_MAM_C_Destruct_Params
{
};

// Function BPW_MAM.BPW_MAM_C.Init
struct UBPW_MAM_C_Init_Params
{
};

// Function BPW_MAM.BPW_MAM_C.Construct
struct UBPW_MAM_C_Construct_Params
{
};

// Function BPW_MAM.BPW_MAM_C.OnResearchListButtonClicked
struct UBPW_MAM_C_OnResearchListButtonClicked_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget_ListButton_C**                       ListButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.BndEvt__BPW_MAMTree_Ingame_K2Node_ComponentBoundEvent_1_OnResearchSelectedSchematic__DelegateSignature
struct UBPW_MAM_C_BndEvt__BPW_MAMTree_Ingame_K2Node_ComponentBoundEvent_1_OnResearchSelectedSchematic__DelegateSignature_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.NotifyPopupClosed
struct UBPW_MAM_C_NotifyPopupClosed_Params
{
	class UClass**                                     PopupClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               exitCode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_MAM.BPW_MAM_C.BndEvt__BPW_MAM_HardDriveScanner_K2Node_ComponentBoundEvent_2_OnScanStarted__DelegateSignature
struct UBPW_MAM_C_BndEvt__BPW_MAM_HardDriveScanner_K2Node_ComponentBoundEvent_2_OnScanStarted__DelegateSignature_Params
{
};

// Function BPW_MAM.BPW_MAM_C.ExecuteUbergraph_BPW_MAM
struct UBPW_MAM_C_ExecuteUbergraph_BPW_MAM_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
