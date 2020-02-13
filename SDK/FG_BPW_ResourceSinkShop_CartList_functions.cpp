// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkShop_CartList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.UpdateEmptyCartFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_CartList_C::UpdateEmptyCartFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.UpdateEmptyCartFeedback");

	UBPW_ResourceSinkShop_CartList_C_UpdateEmptyCartFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.ChangeItemAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartList_C::ChangeItemAmount(class UClass** schematic, int* NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.ChangeItemAmount");

	UBPW_ResourceSinkShop_CartList_C_ChangeItemAmount_Params params;
	params.schematic = schematic;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.RemoveItemFromCart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartList_C::RemoveItemFromCart(class UClass** mSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.RemoveItemFromCart");

	UBPW_ResourceSinkShop_CartList_C_RemoveItemFromCart_Params params;
	params.mSchematic = mSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.GenerateCartList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FResourceSinkShop_CartItem_Struct> mCartItemStruct                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_ResourceSinkShop_CartList_C::GenerateCartList(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.GenerateCartList");

	UBPW_ResourceSinkShop_CartList_C_GenerateCartList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mCartItemStruct != nullptr)
		*mCartItemStruct = params.mCartItemStruct;
}


// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSinkShop_CartList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.Construct");

	UBPW_ResourceSinkShop_CartList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSinkShop_CartList_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.Destruct");

	UBPW_ResourceSinkShop_CartList_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.ExecuteUbergraph_BPW_ResourceSinkShop_CartList
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartList_C::ExecuteUbergraph_BPW_ResourceSinkShop_CartList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.ExecuteUbergraph_BPW_ResourceSinkShop_CartList");

	UBPW_ResourceSinkShop_CartList_C_ExecuteUbergraph_BPW_ResourceSinkShop_CartList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnItemAmountChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartList_C::OnItemAmountChanged__DelegateSignature(class UClass** schematic, int* NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnItemAmountChanged__DelegateSignature");

	UBPW_ResourceSinkShop_CartList_C_OnItemAmountChanged__DelegateSignature_Params params;
	params.schematic = schematic;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnItemRemovedFromCart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_CartList_C::OnItemRemovedFromCart__DelegateSignature(class UClass** mSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C.OnItemRemovedFromCart__DelegateSignature");

	UBPW_ResourceSinkShop_CartList_C_OnItemRemovedFromCart__DelegateSignature_Params params;
	params.mSchematic = mSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
