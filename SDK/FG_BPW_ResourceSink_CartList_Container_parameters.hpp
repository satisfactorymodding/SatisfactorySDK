#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_CartList_Container_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ChangeItemAmount
struct UBPW_ResourceSink_CartList_Container_C_ChangeItemAmount_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetTotalCostText
struct UBPW_ResourceSink_CartList_Container_C_SetTotalCostText_Params
{
	struct FText*                                      mTotalCostText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetBuyButtonVisibility
struct UBPW_ResourceSink_CartList_Container_C_SetBuyButtonVisibility_Params
{
	TArray<struct FResourceSinkShop_CartItem_Struct>   mCartItemStruct;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.UpdateCartList
struct UBPW_ResourceSink_CartList_Container_C_UpdateCartList_Params
{
	TArray<struct FResourceSinkShop_CartItem_Struct>   mCartItemStruct;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.Construct
struct UBPW_ResourceSink_CartList_Container_C_Construct_Params
{
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature
struct UBPW_ResourceSink_CartList_Container_C_BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UBPW_ResourceSink_CartList_Container_C_BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature
struct UBPW_ResourceSink_CartList_Container_C_BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ExecuteUbergraph_BPW_ResourceSink_CartList_Container
struct UBPW_ResourceSink_CartList_Container_C_ExecuteUbergraph_BPW_ResourceSink_CartList_Container_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemAmountChangedInCart__DelegateSignature
struct UBPW_ResourceSink_CartList_Container_C_OnItemAmountChangedInCart__DelegateSignature_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnBuyAllButtonClicked__DelegateSignature
struct UBPW_ResourceSink_CartList_Container_C_OnBuyAllButtonClicked__DelegateSignature_Params
{
};

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemRemovedFromCart__DelegateSignature
struct UBPW_ResourceSink_CartList_Container_C_OnItemRemovedFromCart__DelegateSignature_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
