#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_UseableBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_UseableBase.Widget_UseableBase_C.OnKeyDown
struct UWidget_UseableBase_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_UseableBase.Widget_UseableBase_C.OnKeyUp
struct UWidget_UseableBase_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_UseableBase.Widget_UseableBase_C.DropInventoryStackOnInventoryComponent
struct UWidget_UseableBase_C_DropInventoryStackOnInventoryComponent_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGInventoryComponent**                      inventoryComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.DropInventoryStackOnInventoryWidget
struct UWidget_UseableBase_C_DropInventoryStackOnInventoryWidget_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget_Inventory_C**                        WidgetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.InitInventoryWidgetCallbacks
struct UWidget_UseableBase_C_InitInventoryWidgetCallbacks_Params
{
	class UWidget_Inventory_C**                        inventoryComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.OnInventorySlotStackMove
struct UWidget_UseableBase_C_OnInventorySlotStackMove_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.DropInventorySlotStack
struct UWidget_UseableBase_C_DropInventorySlotStack_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WasStackMoved;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.SetInventoryVisibility
struct UWidget_UseableBase_C_SetInventoryVisibility_Params
{
	bool*                                              visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.GetDefaultRCO
struct UWidget_UseableBase_C_GetDefaultRCO_Params
{
	class UBP_RemoteCallObject_C*                      RCO;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.PreConstruct
struct UWidget_UseableBase_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.Construct
struct UWidget_UseableBase_C_Construct_Params
{
};

// Function Widget_UseableBase.Widget_UseableBase_C.Destruct
struct UWidget_UseableBase_C_Destruct_Params
{
};

// Function Widget_UseableBase.Widget_UseableBase_C.ExecuteUbergraph_Widget_UseableBase
struct UWidget_UseableBase_C_ExecuteUbergraph_Widget_UseableBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.ModifierReleased__DelegateSignature
struct UWidget_UseableBase_C_ModifierReleased__DelegateSignature_Params
{
	class UFGInteractWidget**                          Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.ModifierPressed__DelegateSignature
struct UWidget_UseableBase_C_ModifierPressed__DelegateSignature_Params
{
	class UFGInteractWidget**                          NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Widget_UseableBase.Widget_UseableBase_C.InventorySlotStackMoveEvent__DelegateSignature
struct UWidget_UseableBase_C_InventorySlotStackMoveEvent__DelegateSignature_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInteractionDirection>*                InteractionDirection;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
