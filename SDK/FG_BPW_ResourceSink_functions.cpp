// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSink.BPW_ResourceSink_C.UpdatePowerWarning
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSink_C::UpdatePowerWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.UpdatePowerWarning");

	UBPW_ResourceSink_C_UpdatePowerWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.DropInventorySlotStack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WasStackMoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_C::DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.DropInventorySlotStack");

	UBPW_ResourceSink_C_DropInventorySlotStack_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStackMoved != nullptr)
		*WasStackMoved = params.WasStackMoved;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.UpdateTicketSoundCurve
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSink_C::UpdateTicketSoundCurve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.UpdateTicketSoundCurve");

	UBPW_ResourceSink_C_UpdateTicketSoundCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.IntArrayToFloatArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    IntArray                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  FloatArray                     (Parm, OutParm, ZeroConstructor)

void UBPW_ResourceSink_C::IntArrayToFloatArray(TArray<int>* IntArray, TArray<float>* FloatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.IntArrayToFloatArray");

	UBPW_ResourceSink_C_IntArrayToFloatArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntArray != nullptr)
		*IntArray = params.IntArray;
	if (FloatArray != nullptr)
		*FloatArray = params.FloatArray;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.UpdateStats
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSink_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.UpdateStats");

	UBPW_ResourceSink_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSink_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.Cleanup");

	UBPW_ResourceSink_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSink_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.Destruct");

	UBPW_ResourceSink_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__Widget_GlowingFactoryButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSink_C::BndEvt__Widget_GlowingFactoryButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__Widget_GlowingFactoryButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UBPW_ResourceSink_C_BndEvt__Widget_GlowingFactoryButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_1_OnPrintCompleted__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSink_C::BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_1_OnPrintCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_1_OnPrintCompleted__DelegateSignature");

	UBPW_ResourceSink_C_BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_1_OnPrintCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.OnCustomTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         UpdateTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_C::OnCustomTick(float* UpdateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.OnCustomTick");

	UBPW_ResourceSink_C_OnCustomTick_Params params;
	params.UpdateTime = UpdateTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_2_OnPrintPaused__DelegateSignature
// (BlueprintEvent)

void UBPW_ResourceSink_C::BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_2_OnPrintPaused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_2_OnPrintPaused__DelegateSignature");

	UBPW_ResourceSink_C_BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_2_OnPrintPaused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.OnItemAddedToInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           numAdded                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_C::OnItemAddedToInventory(class UClass** ItemClass, int* numAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.OnItemAddedToInventory");

	UBPW_ResourceSink_C_OnItemAddedToInventory_Params params;
	params.ItemClass = ItemClass;
	params.numAdded = numAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSink_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.Construct");

	UBPW_ResourceSink_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__mResourceSink_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_C::BndEvt__mResourceSink_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__mResourceSink_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature");

	UBPW_ResourceSink_C_BndEvt__mResourceSink_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink.BPW_ResourceSink_C.ExecuteUbergraph_BPW_ResourceSink
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_C::ExecuteUbergraph_BPW_ResourceSink(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink.BPW_ResourceSink_C.ExecuteUbergraph_BPW_ResourceSink");

	UBPW_ResourceSink_C_ExecuteUbergraph_BPW_ResourceSink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
