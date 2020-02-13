#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkShop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetBannerStruct
struct UBPW_ResourceSinkShop_C_GetBannerStruct_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetAmountOfCouponsInPlayerInventory
struct UBPW_ResourceSinkShop_C_GetAmountOfCouponsInPlayerInventory_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ResetHeader
struct UBPW_ResourceSinkShop_C_ResetHeader_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ListButtonOnClicked
struct UBPW_ResourceSinkShop_C_ListButtonOnClicked_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget_ListButton_C**                       Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.DropInventorySlotStack
struct UBPW_ResourceSinkShop_C_DropInventorySlotStack_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WasStackMoved;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CheckItemsInCart
struct UBPW_ResourceSinkShop_C_CheckItemsInCart_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateShopButtonStates
struct UBPW_ResourceSinkShop_C_UpdateShopButtonStates_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.SetInitialSelectedCategory
struct UBPW_ResourceSinkShop_C_SetInitialSelectedCategory_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ChangeItemAmountInCart
struct UBPW_ResourceSinkShop_C_ChangeItemAmountInCart_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateCartAmount
struct UBPW_ResourceSinkShop_C_UpdateCartAmount_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetTotalCost
struct UBPW_ResourceSinkShop_C_GetTotalCost_Params
{
	int                                                TotalCost;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnBuyAll
struct UBPW_ResourceSinkShop_C_OnBuyAll_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateShoppingCartList
struct UBPW_ResourceSinkShop_C_UpdateShoppingCartList_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnItemRemovedFromCart
struct UBPW_ResourceSinkShop_C_OnItemRemovedFromCart_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnMouseButtonDown
struct UBPW_ResourceSinkShop_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.FilterSchematicByCategory
struct UBPW_ResourceSinkShop_C_FilterSchematicByCategory_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     mSchematicCategory;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     mSchematicSubcategory;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OpenCartMenu
struct UBPW_ResourceSinkShop_C_OpenCartMenu_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.PopulateShop
struct UBPW_ResourceSinkShop_C_PopulateShop_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnSchematicCategoryClicked
struct UBPW_ResourceSinkShop_C_OnSchematicCategoryClicked_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CreateCategoryButtons
struct UBPW_ResourceSinkShop_C_CreateCategoryButtons_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnShopSchematicHovered
struct UBPW_ResourceSinkShop_C_OnShopSchematicHovered_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPW_ResourceSinkShop_Item_C**               mButton;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnShopSchematicClicked
struct UBPW_ResourceSinkShop_C_OnShopSchematicClicked_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
struct UBPW_ResourceSinkShop_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.Construct
struct UBPW_ResourceSinkShop_C_Construct_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_9_OnBuyAllButtonClicked__DelegateSignature
struct UBPW_ResourceSinkShop_C_BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_9_OnBuyAllButtonClicked__DelegateSignature_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_10_OnItemAmountChangedInCart__DelegateSignature
struct UBPW_ResourceSinkShop_C_BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_10_OnItemAmountChangedInCart__DelegateSignature_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_11_OnItemRemovedFromCart__DelegateSignature
struct UBPW_ResourceSinkShop_C_BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_11_OnItemRemovedFromCart__DelegateSignature_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_5_OnTabButtonClicked__DelegateSignature
struct UBPW_ResourceSinkShop_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_5_OnTabButtonClicked__DelegateSignature_Params
{
	int*                                               ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mCart_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBPW_ResourceSinkShop_C_BndEvt__mCart_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnScroll
struct UBPW_ResourceSinkShop_C_OnScroll_Params
{
	float*                                             CurrentOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ExecuteUbergraph_BPW_ResourceSinkShop
struct UBPW_ResourceSinkShop_C_ExecuteUbergraph_BPW_ResourceSinkShop_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
