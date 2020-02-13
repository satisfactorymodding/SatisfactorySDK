#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkShop_CartItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.ChangeItemAmount
struct UBPW_ResourceSinkShop_CartItem_C_ChangeItemAmount_Params
{
	int*                                               mNewAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.UpdateCartItem
struct UBPW_ResourceSinkShop_CartItem_C_UpdateCartItem_Params
{
	struct FResourceSinkShop_CartItem_Struct*          mCartItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.Construct
struct UBPW_ResourceSinkShop_CartItem_C_Construct_Params
{
};

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mTrashButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mTrashButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mAddToCart_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mAddToCart_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UBPW_ResourceSinkShop_CartItem_C_BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.ExecuteUbergraph_BPW_ResourceSinkShop_CartItem
struct UBPW_ResourceSinkShop_CartItem_C_ExecuteUbergraph_BPW_ResourceSinkShop_CartItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.OnItemAmountChanged__DelegateSignature
struct UBPW_ResourceSinkShop_CartItem_C_OnItemAmountChanged__DelegateSignature_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               mNewAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.OnRemoveButtonClicked__DelegateSignature
struct UBPW_ResourceSinkShop_CartItem_C_OnRemoveButtonClicked__DelegateSignature_Params
{
	class UClass**                                     mSchematic;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
