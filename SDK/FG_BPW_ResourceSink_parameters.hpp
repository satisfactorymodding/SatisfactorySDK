#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSink.BPW_ResourceSink_C.UpdatePowerWarning
struct UBPW_ResourceSink_C_UpdatePowerWarning_Params
{
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.DropInventorySlotStack
struct UBPW_ResourceSink_C_DropInventorySlotStack_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WasStackMoved;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.UpdateTicketSoundCurve
struct UBPW_ResourceSink_C_UpdateTicketSoundCurve_Params
{
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.IntArrayToFloatArray
struct UBPW_ResourceSink_C_IntArrayToFloatArray_Params
{
	TArray<int>                                        IntArray;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      FloatArray;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.UpdateStats
struct UBPW_ResourceSink_C_UpdateStats_Params
{
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.Cleanup
struct UBPW_ResourceSink_C_Cleanup_Params
{
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.Destruct
struct UBPW_ResourceSink_C_Destruct_Params
{
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__Widget_GlowingFactoryButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UBPW_ResourceSink_C_BndEvt__Widget_GlowingFactoryButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_1_OnPrintCompleted__DelegateSignature
struct UBPW_ResourceSink_C_BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_1_OnPrintCompleted__DelegateSignature_Params
{
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.OnCustomTick
struct UBPW_ResourceSink_C_OnCustomTick_Params
{
	float*                                             UpdateTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_2_OnPrintPaused__DelegateSignature
struct UBPW_ResourceSink_C_BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_2_OnPrintPaused__DelegateSignature_Params
{
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.OnItemAddedToInventory
struct UBPW_ResourceSink_C_OnItemAddedToInventory_Params
{
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               numAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.Construct
struct UBPW_ResourceSink_C_Construct_Params
{
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__mResourceSink_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature
struct UBPW_ResourceSink_C_BndEvt__mResourceSink_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink.BPW_ResourceSink_C.ExecuteUbergraph_BPW_ResourceSink
struct UBPW_ResourceSink_C_ExecuteUbergraph_BPW_ResourceSink_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
