// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_CartList_Container_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ChangeItemAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_CartList_Container_C::ChangeItemAmount(class UClass** schematic, int* NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ChangeItemAmount");

	UBPW_ResourceSink_CartList_Container_C_ChangeItemAmount_Params params;
	params.schematic = schematic;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetTotalCostText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mTotalCostText                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_ResourceSink_CartList_Container_C::SetTotalCostText(struct FText* mTotalCostText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetTotalCostText");

	UBPW_ResourceSink_CartList_Container_C_SetTotalCostText_Params params;
	params.mTotalCostText = mTotalCostText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetBuyButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FResourceSinkShop_CartItem_Struct> mCartItemStruct                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_ResourceSink_CartList_Container_C::SetBuyButtonVisibility(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetBuyButtonVisibility");

	UBPW_ResourceSink_CartList_Container_C_SetBuyButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mCartItemStruct != nullptr)
		*mCartItemStruct = params.mCartItemStruct;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.UpdateCartList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FResourceSinkShop_CartItem_Struct> mCartItemStruct                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_ResourceSink_CartList_Container_C::UpdateCartList(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.UpdateCartList");

	UBPW_ResourceSink_CartList_Container_C_UpdateCartList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mCartItemStruct != nullptr)
		*mCartItemStruct = params.mCartItemStruct;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSink_CartList_Container_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.Construct");

	UBPW_ResourceSink_CartList_Container_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_CartList_Container_C::BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature(class UClass** mSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature");

	UBPW_ResourceSink_CartList_Container_C_BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature_Params params;
	params.mSchematic = mSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSink_CartList_Container_C::BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UBPW_ResourceSink_CartList_Container_C_BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_CartList_Container_C::BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature(class UClass** schematic, int* NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature");

	UBPW_ResourceSink_CartList_Container_C_BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature_Params params;
	params.schematic = schematic;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ExecuteUbergraph_BPW_ResourceSink_CartList_Container
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_CartList_Container_C::ExecuteUbergraph_BPW_ResourceSink_CartList_Container(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ExecuteUbergraph_BPW_ResourceSink_CartList_Container");

	UBPW_ResourceSink_CartList_Container_C_ExecuteUbergraph_BPW_ResourceSink_CartList_Container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemAmountChangedInCart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_CartList_Container_C::OnItemAmountChangedInCart__DelegateSignature(class UClass** schematic, int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemAmountChangedInCart__DelegateSignature");

	UBPW_ResourceSink_CartList_Container_C_OnItemAmountChangedInCart__DelegateSignature_Params params;
	params.schematic = schematic;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnBuyAllButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSink_CartList_Container_C::OnBuyAllButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnBuyAllButtonClicked__DelegateSignature");

	UBPW_ResourceSink_CartList_Container_C_OnBuyAllButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemRemovedFromCart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_CartList_Container_C::OnItemRemovedFromCart__DelegateSignature(class UClass** mSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemRemovedFromCart__DelegateSignature");

	UBPW_ResourceSink_CartList_Container_C_OnItemRemovedFromCart__DelegateSignature_Params params;
	params.mSchematic = mSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
