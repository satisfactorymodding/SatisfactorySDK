// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkShop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetBannerStruct
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::GetBannerStruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetBannerStruct");

	UBPW_ResourceSinkShop_C_GetBannerStruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetAmountOfCouponsInPlayerInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::GetAmountOfCouponsInPlayerInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetAmountOfCouponsInPlayerInventory");

	UBPW_ResourceSinkShop_C_GetAmountOfCouponsInPlayerInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ResetHeader
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::ResetHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ResetHeader");

	UBPW_ResourceSinkShop_C_ResetHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ListButtonOnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_ListButton_C**   Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_ResourceSinkShop_C::ListButtonOnClicked(int* Index, class UWidget_ListButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ListButtonOnClicked");

	UBPW_ResourceSinkShop_C_ListButtonOnClicked_Params params;
	params.Index = Index;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.DropInventorySlotStack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WasStackMoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.DropInventorySlotStack");

	UBPW_ResourceSinkShop_C_DropInventorySlotStack_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStackMoved != nullptr)
		*WasStackMoved = params.WasStackMoved;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CheckItemsInCart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::CheckItemsInCart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CheckItemsInCart");

	UBPW_ResourceSinkShop_C_CheckItemsInCart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateShopButtonStates
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::UpdateShopButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateShopButtonStates");

	UBPW_ResourceSinkShop_C_UpdateShopButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.SetInitialSelectedCategory
// (Private, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::SetInitialSelectedCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.SetInitialSelectedCategory");

	UBPW_ResourceSinkShop_C_SetInitialSelectedCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ChangeItemAmountInCart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::ChangeItemAmountInCart(class UClass** schematic, int* ItemAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ChangeItemAmountInCart");

	UBPW_ResourceSinkShop_C_ChangeItemAmountInCart_Params params;
	params.schematic = schematic;
	params.ItemAmount = ItemAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateCartAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::UpdateCartAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateCartAmount");

	UBPW_ResourceSinkShop_C_UpdateCartAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetTotalCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TotalCost                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::GetTotalCost(int* TotalCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetTotalCost");

	UBPW_ResourceSinkShop_C_GetTotalCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalCost != nullptr)
		*TotalCost = params.TotalCost;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnBuyAll
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::OnBuyAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnBuyAll");

	UBPW_ResourceSinkShop_C_OnBuyAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateShoppingCartList
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::UpdateShoppingCartList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateShoppingCartList");

	UBPW_ResourceSinkShop_C_UpdateShoppingCartList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnItemRemovedFromCart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::OnItemRemovedFromCart(class UClass** mSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnItemRemovedFromCart");

	UBPW_ResourceSinkShop_C_OnItemRemovedFromCart_Params params;
	params.mSchematic = mSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBPW_ResourceSinkShop_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnMouseButtonDown");

	UBPW_ResourceSinkShop_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.FilterSchematicByCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 mSchematicCategory             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 mSchematicSubcategory          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::FilterSchematicByCategory(class UClass** mSchematic, class UClass** mSchematicCategory, class UClass** mSchematicSubcategory, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.FilterSchematicByCategory");

	UBPW_ResourceSinkShop_C_FilterSchematicByCategory_Params params;
	params.mSchematic = mSchematic;
	params.mSchematicCategory = mSchematicCategory;
	params.mSchematicSubcategory = mSchematicSubcategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OpenCartMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::OpenCartMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OpenCartMenu");

	UBPW_ResourceSinkShop_C_OpenCartMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.PopulateShop
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::PopulateShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.PopulateShop");

	UBPW_ResourceSinkShop_C_PopulateShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnSchematicCategoryClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::OnSchematicCategoryClicked(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnSchematicCategoryClicked");

	UBPW_ResourceSinkShop_C_OnSchematicCategoryClicked_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CreateCategoryButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_C::CreateCategoryButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CreateCategoryButtons");

	UBPW_ResourceSinkShop_C_CreateCategoryButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnShopSchematicHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPW_ResourceSinkShop_Item_C** mButton                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_ResourceSinkShop_C::OnShopSchematicHovered(class UClass** mSchematic, class UBPW_ResourceSinkShop_Item_C** mButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnShopSchematicHovered");

	UBPW_ResourceSinkShop_C_OnShopSchematicHovered_Params params;
	params.mSchematic = mSchematic;
	params.mButton = mButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnShopSchematicClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::OnShopSchematicClicked(class UClass** schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnShopSchematicClicked");

	UBPW_ResourceSinkShop_C_OnShopSchematicClicked_Params params;
	params.schematic = schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSinkShop_C::BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");

	UBPW_ResourceSinkShop_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSinkShop_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.Construct");

	UBPW_ResourceSinkShop_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_9_OnBuyAllButtonClicked__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSinkShop_C::BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_9_OnBuyAllButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_9_OnBuyAllButtonClicked__DelegateSignature");

	UBPW_ResourceSinkShop_C_BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_9_OnBuyAllButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_10_OnItemAmountChangedInCart__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_10_OnItemAmountChangedInCart__DelegateSignature(class UClass** schematic, int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_10_OnItemAmountChangedInCart__DelegateSignature");

	UBPW_ResourceSinkShop_C_BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_10_OnItemAmountChangedInCart__DelegateSignature_Params params;
	params.schematic = schematic;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_11_OnItemRemovedFromCart__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 mSchematic                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_11_OnItemRemovedFromCart__DelegateSignature(class UClass** mSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_11_OnItemRemovedFromCart__DelegateSignature");

	UBPW_ResourceSinkShop_C_BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_11_OnItemRemovedFromCart__DelegateSignature_Params params;
	params.mSchematic = mSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_5_OnTabButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::BndEvt__mWindow_K2Node_ComponentBoundEvent_5_OnTabButtonClicked__DelegateSignature(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_5_OnTabButtonClicked__DelegateSignature");

	UBPW_ResourceSinkShop_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_5_OnTabButtonClicked__DelegateSignature_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mCart_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSinkShop_C::BndEvt__mCart_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mCart_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UBPW_ResourceSinkShop_C_BndEvt__mCart_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::OnScroll(float* CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnScroll");

	UBPW_ResourceSinkShop_C_OnScroll_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ExecuteUbergraph_BPW_ResourceSinkShop
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_C::ExecuteUbergraph_BPW_ResourceSinkShop(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ExecuteUbergraph_BPW_ResourceSinkShop");

	UBPW_ResourceSinkShop_C_ExecuteUbergraph_BPW_ResourceSinkShop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
