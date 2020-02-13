// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_PipeStorageTank_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.GetContentText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_PipeStorageTank_C::GetContentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.GetContentText");

	UWidget_PipeStorageTank_C_GetContentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.GetTypeText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_PipeStorageTank_C::GetTypeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.GetTypeText");

	UWidget_PipeStorageTank_C_GetTypeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Init
// (Event, Public, BlueprintEvent)

void UWidget_PipeStorageTank_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Init");

	UWidget_PipeStorageTank_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
// (BlueprintEvent)

void UWidget_PipeStorageTank_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");

	UWidget_PipeStorageTank_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipeStorageTank_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Tick");

	UWidget_PipeStorageTank_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_PipeStorageTank_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.Construct");

	UWidget_PipeStorageTank_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          FlushNetwork                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipeStorageTank_C::BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature(bool* FlushNetwork)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature");

	UWidget_PipeStorageTank_C_BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_1_OnFlush__DelegateSignature_Params params;
	params.FlushNetwork = FlushNetwork;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.ExecuteUbergraph_Widget_PipeStorageTank
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_PipeStorageTank_C::ExecuteUbergraph_Widget_PipeStorageTank(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PipeStorageTank.Widget_PipeStorageTank_C.ExecuteUbergraph_Widget_PipeStorageTank");

	UWidget_PipeStorageTank_C_ExecuteUbergraph_Widget_PipeStorageTank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
