#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkShop_CartList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.UpdateEmptyCartFeedback
struct UBPW_ResourceSinkShop_CartList_C_UpdateEmptyCartFeedback_Params
{
};

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.ChangeItemAmount
struct UBPW_ResourceSinkShop_CartList_C_ChangeItemAmount_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.RemoveItemFromCart
struct UBPW_ResourceSinkShop_CartList_C_RemoveItemFromCart_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.GenerateCartList
struct UBPW_ResourceSinkShop_CartList_C_GenerateCartList_Params
{
	TArray<struct FResourceSinkShop_CartItem_Struct>   mCartItemStruct;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.Construct
struct UBPW_ResourceSinkShop_CartList_C_Construct_Params
{
};

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.Destruct
struct UBPW_ResourceSinkShop_CartList_C_Destruct_Params
{
};

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.ExecuteUbergraph_BPW_ResourceSinkShop_CartList
struct UBPW_ResourceSinkShop_CartList_C_ExecuteUbergraph_BPW_ResourceSinkShop_CartList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnItemAmountChanged__DelegateSignature
struct UBPW_ResourceSinkShop_CartList_C_OnItemAmountChanged__DelegateSignature_Params
{
	class UClass**                                     schematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnItemRemovedFromCart__DelegateSignature
struct UBPW_ResourceSinkShop_CartList_C_OnItemRemovedFromCart__DelegateSignature_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
