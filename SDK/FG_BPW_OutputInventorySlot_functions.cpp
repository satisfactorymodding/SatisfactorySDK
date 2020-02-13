// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_OutputInventorySlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupCostSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  mCachedInventoryComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           mSlotIdx                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           RequiredAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_OutputInventorySlot_C::SetupCostSlot(class UFGInventoryComponent** mCachedInventoryComponent, int* mSlotIdx, int* RequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupCostSlot");

	UBPW_OutputInventorySlot_C_SetupCostSlot_Params params;
	params.mCachedInventoryComponent = mCachedInventoryComponent;
	params.mSlotIdx = mSlotIdx;
	params.RequiredAmount = RequiredAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.UpdateSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFGInventoryComponent**  mCachedInventoryComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           mSlotIdx                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlotType>*        SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           mRequiredAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_OutputInventorySlot_C::UpdateSlot(struct FText* Title, class UFGInventoryComponent** mCachedInventoryComponent, int* mSlotIdx, TEnumAsByte<ESlotType>* SlotType, int* mRequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.UpdateSlot");

	UBPW_OutputInventorySlot_C_UpdateSlot_Params params;
	params.Title = Title;
	params.mCachedInventoryComponent = mCachedInventoryComponent;
	params.mSlotIdx = mSlotIdx;
	params.SlotType = SlotType;
	params.mRequiredAmount = mRequiredAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupInventorySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  mCachedInventoryComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           mSlotIdx                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_OutputInventorySlot_C::SetupInventorySlot(class UFGInventoryComponent** mCachedInventoryComponent, int* mSlotIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetupInventorySlot");

	UBPW_OutputInventorySlot_C_SetupInventorySlot_Params params;
	params.mCachedInventoryComponent = mCachedInventoryComponent;
	params.mSlotIdx = mSlotIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_OutputInventorySlot_C::SetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.SetTitle");

	UBPW_OutputInventorySlot_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_OutputInventorySlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.Construct");

	UBPW_OutputInventorySlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.ExecuteUbergraph_BPW_OutputInventorySlot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_OutputInventorySlot_C::ExecuteUbergraph_BPW_OutputInventorySlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutputInventorySlot.BPW_OutputInventorySlot_C.ExecuteUbergraph_BPW_OutputInventorySlot");

	UBPW_OutputInventorySlot_C_ExecuteUbergraph_BPW_OutputInventorySlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
