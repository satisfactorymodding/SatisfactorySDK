// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PlayerInventoryAddon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetDividerVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::SetDividerVisibility(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetDividerVisibility");

	UWidget_PlayerInventoryAddon_C_SetDividerVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetRelevantItemsText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mRelevantItemsText             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_PlayerInventoryAddon_C::SetRelevantItemsText(struct FText* mRelevantItemsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetRelevantItemsText");

	UWidget_PlayerInventoryAddon_C_SetRelevantItemsText_Params params;
	params.mRelevantItemsText = mRelevantItemsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ShouldItemClassUpdateRelevantInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 UpdatedItemClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::ShouldItemClassUpdateRelevantInventory(class UClass** UpdatedItemClass, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ShouldItemClassUpdateRelevantInventory");

	UWidget_PlayerInventoryAddon_C_ShouldItemClassUpdateRelevantInventory_Params params;
	params.UpdatedItemClass = UpdatedItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetupRelevantInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          mRelevantClasses               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWidget_PlayerInventoryAddon_C::SetupRelevantInventory(TArray<class UClass*>* mRelevantClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetupRelevantInventory");

	UWidget_PlayerInventoryAddon_C_SetupRelevantInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mRelevantClasses != nullptr)
		*mRelevantClasses = params.mRelevantClasses;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.UpdateRelevantInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_PlayerInventoryAddon_C::UpdateRelevantInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.UpdateRelevantInventory");

	UWidget_PlayerInventoryAddon_C_UpdateRelevantInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnInventorySlotMoveStack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlotSender            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::OnInventorySlotMoveStack(class UWidget_InventorySlot_C** InventorySlotSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnInventorySlotMoveStack");

	UWidget_PlayerInventoryAddon_C_OnInventorySlotMoveStack_Params params;
	params.InventorySlotSender = InventorySlotSender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetInventoryComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  InventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFGInventoryComponent**  trash                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::SetInventoryComponents(class UFGInventoryComponent** InventoryComponent, class UFGInventoryComponent** trash)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetInventoryComponents");

	UWidget_PlayerInventoryAddon_C_SetInventoryComponents_Params params;
	params.InventoryComponent = InventoryComponent;
	params.trash = trash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_PlayerInventoryAddon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Construct");

	UWidget_PlayerInventoryAddon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_PlayerInventoryAddon_C::BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_PlayerInventoryAddon_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnUpdateRelevantInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           numAdded                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::OnUpdateRelevantInventory(class UClass** ItemClass, int* numAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnUpdateRelevantInventory");

	UWidget_PlayerInventoryAddon_C_OnUpdateRelevantInventory_Params params;
	params.ItemClass = ItemClass;
	params.numAdded = numAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.PreConstruct");

	UWidget_PlayerInventoryAddon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ExecuteUbergraph_Widget_PlayerInventoryAddon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::ExecuteUbergraph_Widget_PlayerInventoryAddon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ExecuteUbergraph_Widget_PlayerInventoryAddon");

	UWidget_PlayerInventoryAddon_C_ExecuteUbergraph_Widget_PlayerInventoryAddon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SlotStackMoveEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EInteractionDirection>* Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PlayerInventoryAddon_C::SlotStackMoveEvent__DelegateSignature(class UWidget_InventorySlot_C** InventorySlot, TEnumAsByte<EInteractionDirection>* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SlotStackMoveEvent__DelegateSignature");

	UWidget_PlayerInventoryAddon_C_SlotStackMoveEvent__DelegateSignature_Params params;
	params.InventorySlot = InventorySlot;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
