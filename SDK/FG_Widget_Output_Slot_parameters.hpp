#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Output_Slot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Output_Slot.Widget_Output_Slot_C.SetShowSecondPartsPerMin
struct UWidget_Output_Slot_C_SetShowSecondPartsPerMin_Params
{
	bool*                                              ShowSecondPartsPerMin;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SecondaryItemDesc;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateProductionStats
struct UWidget_Output_Slot_C_UpdateProductionStats_Params
{
	int*                                               NumPerCycle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             cycletime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PowerConsumption;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             efficiency;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SecondNumPerCycle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateCycleProgress
struct UWidget_Output_Slot_C_UpdateCycleProgress_Params
{
	float*                                             CycleProgress;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateStaticInfo
struct UWidget_Output_Slot_C_UpdateStaticInfo_Params
{
	struct FText*                                      recipeName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.GenerateCostSlots
struct UWidget_Output_Slot_C_GenerateCostSlots_Params
{
	TArray<struct FOutputCostSlotData_Struct>          OutputCostSlotData;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.GetSlot
struct UWidget_Output_Slot_C_GetSlot_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget_InventorySlot_C*                     InventorySlot;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.GenerateOutputSlots
struct UWidget_Output_Slot_C_GenerateOutputSlots_Params
{
	TArray<struct FOutputSlotData_Struct>              OutputSlotData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateWasteSlotVisibility
struct UWidget_Output_Slot_C_UpdateWasteSlotVisibility_Params
{
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.CreateEfficiencyToolTip
struct UWidget_Output_Slot_C_CreateEfficiencyToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.CreatePowerConsumptionToolTip
struct UWidget_Output_Slot_C_CreatePowerConsumptionToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.CreateCycleTimeTooltip
struct UWidget_Output_Slot_C_CreateCycleTimeTooltip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.Construct
struct UWidget_Output_Slot_C_Construct_Params
{
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.PreConstruct
struct UWidget_Output_Slot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.OnInventorySlotStackMove
struct UWidget_Output_Slot_C_OnInventorySlotStackMove_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.ExecuteUbergraph_Widget_Output_Slot
struct UWidget_Output_Slot_C_ExecuteUbergraph_Widget_Output_Slot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Output_Slot.Widget_Output_Slot_C.OnDropInventorySlotStack__DelegateSignature
struct UWidget_Output_Slot_C_OnDropInventorySlotStack__DelegateSignature_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
