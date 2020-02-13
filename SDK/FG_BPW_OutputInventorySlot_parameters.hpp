#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_OutputInventorySlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupCostSlot
struct UBPW_OutputInventorySlot_C_SetupCostSlot_Params
{
	class UFGInventoryComponent**                      mCachedInventoryComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               mSlotIdx;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RequiredAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.UpdateSlot
struct UBPW_OutputInventorySlot_C_UpdateSlot_Params
{
	struct FText*                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFGInventoryComponent**                      mCachedInventoryComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               mSlotIdx;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlotType>*                            SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               mRequiredAmount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupInventorySlot
struct UBPW_OutputInventorySlot_C_SetupInventorySlot_Params
{
	class UFGInventoryComponent**                      mCachedInventoryComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               mSlotIdx;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetTitle
struct UBPW_OutputInventorySlot_C_SetTitle_Params
{
	struct FText*                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.Construct
struct UBPW_OutputInventorySlot_C_Construct_Params
{
};

// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.ExecuteUbergraph_BPW_OutputInventorySlot
struct UBPW_OutputInventorySlot_C_ExecuteUbergraph_BPW_OutputInventorySlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
