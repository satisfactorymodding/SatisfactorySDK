// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkShop_CartItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.ChangeItemAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           mNewAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartItem_C::ChangeItemAmount(int* mNewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.ChangeItemAmount");

	UBPW_ResourceSinkShop_CartItem_C_ChangeItemAmount_Params params;
	params.mNewAmount = mNewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.UpdateCartItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResourceSinkShop_CartItem_Struct* mCartItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartItem_C::UpdateCartItem(struct FResourceSinkShop_CartItem_Struct* mCartItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.UpdateCartItem");

	UBPW_ResourceSinkShop_CartItem_C_UpdateCartItem_Params params;
	params.mCartItem = mCartItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSinkShop_CartItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.Construct");

	UBPW_ResourceSinkShop_CartItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mTrashButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSinkShop_CartItem_C::BndEvt__mTrashButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mTrashButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UBPW_ResourceSinkShop_CartItem_C_BndEvt__mTrashButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSinkShop_CartItem_C::BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBPW_ResourceSinkShop_CartItem_C_BndEvt__mRemoveFromCart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mAddToCart_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSinkShop_CartItem_C::BndEvt__mAddToCart_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mAddToCart_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBPW_ResourceSinkShop_CartItem_C_BndEvt__mAddToCart_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartItem_C::BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBPW_ResourceSinkShop_CartItem_C_BndEvt__mInputNumberToAdd_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.ExecuteUbergraph_BPW_ResourceSinkShop_CartItem
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartItem_C::ExecuteUbergraph_BPW_ResourceSinkShop_CartItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.ExecuteUbergraph_BPW_ResourceSinkShop_CartItem");

	UBPW_ResourceSinkShop_CartItem_C_ExecuteUbergraph_BPW_ResourceSinkShop_CartItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.OnItemAmountChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           mNewAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartItem_C::OnItemAmountChanged__DelegateSignature(class UClass** mSchematic, int* mNewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.OnItemAmountChanged__DelegateSignature");

	UBPW_ResourceSinkShop_CartItem_C_OnItemAmountChanged__DelegateSignature_Params params;
	params.mSchematic = mSchematic;
	params.mNewAmount = mNewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.OnRemoveButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartItem_C::OnRemoveButtonClicked__DelegateSignature(class UClass** mSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartItem.BPW_ResourceSinkShop_CartItem_C.OnRemoveButtonClicked__DelegateSignature");

	UBPW_ResourceSinkShop_CartItem_C_OnRemoveButtonClicked__DelegateSignature_Params params;
	params.mSchematic = mSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
