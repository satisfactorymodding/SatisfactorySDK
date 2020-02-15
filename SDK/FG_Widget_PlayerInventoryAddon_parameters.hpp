#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PlayerInventoryAddon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetDividerVisibility
struct UWidget_PlayerInventoryAddon_C_SetDividerVisibility_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetRelevantItemsText
struct UWidget_PlayerInventoryAddon_C_SetRelevantItemsText_Params
{
	struct FText*                                      mRelevantItemsText;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ShouldItemClassUpdateRelevantInventory
struct UWidget_PlayerInventoryAddon_C_ShouldItemClassUpdateRelevantInventory_Params
{
	class UClass**                                     UpdatedItemClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetupRelevantInventory
struct UWidget_PlayerInventoryAddon_C_SetupRelevantInventory_Params
{
	TArray<class UClass*>                              mRelevantClasses;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.UpdateRelevantInventory
struct UWidget_PlayerInventoryAddon_C_UpdateRelevantInventory_Params
{
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnInventorySlotMoveStack
struct UWidget_PlayerInventoryAddon_C_OnInventorySlotMoveStack_Params
{
	class UWidget_InventorySlot_C**                    InventorySlotSender;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetInventoryComponents
struct UWidget_PlayerInventoryAddon_C_SetInventoryComponents_Params
{
	class UFGInventoryComponent**                      inventoryComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGInventoryComponent**                      trash;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Construct
struct UWidget_PlayerInventoryAddon_C_Construct_Params
{
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_PlayerInventoryAddon_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnUpdateRelevantInventory
struct UWidget_PlayerInventoryAddon_C_OnUpdateRelevantInventory_Params
{
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               numAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.PreConstruct
struct UWidget_PlayerInventoryAddon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ExecuteUbergraph_Widget_PlayerInventoryAddon
struct UWidget_PlayerInventoryAddon_C_ExecuteUbergraph_Widget_PlayerInventoryAddon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SlotStackMoveEvent__DelegateSignature
struct UWidget_PlayerInventoryAddon_C_SlotStackMoveEvent__DelegateSignature_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInteractionDirection>*                Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
