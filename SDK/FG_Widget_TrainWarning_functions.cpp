// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TrainWarning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TrainWarning.Widget_TrainWarning_C.ShouldForceWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForceWarning                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  WarningText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_TrainWarning_C::ShouldForceWarning(bool* ForceWarning, struct FText* WarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.ShouldForceWarning");

	UWidget_TrainWarning_C_ShouldForceWarning_Params params;
	params.ForceWarning = ForceWarning;
	params.WarningText = WarningText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainWarning.Widget_TrainWarning_C.UpdateWarning
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_TrainWarning_C::UpdateWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.UpdateWarning");

	UWidget_TrainWarning_C_UpdateWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainWarning.Widget_TrainWarning_C.HideWarning
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TrainWarning_C::HideWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.HideWarning");

	UWidget_TrainWarning_C_HideWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainWarning.Widget_TrainWarning_C.ShowWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  WarningText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_TrainWarning_C::ShowWarning(struct FText* WarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.ShowWarning");

	UWidget_TrainWarning_C_ShowWarning_Params params;
	params.WarningText = WarningText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainWarning.Widget_TrainWarning_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTrain**               Train                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainWarning_C::Init(class AFGTrain** Train)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.Init");

	UWidget_TrainWarning_C_Init_Params params;
	params.Train = Train;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainWarning.Widget_TrainWarning_C.CheckErrors
// (BlueprintCallable, BlueprintEvent)

void UWidget_TrainWarning_C::CheckErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.CheckErrors");

	UWidget_TrainWarning_C_CheckErrors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainWarning.Widget_TrainWarning_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TrainWarning_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.Destruct");

	UWidget_TrainWarning_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainWarning.Widget_TrainWarning_C.ExecuteUbergraph_Widget_TrainWarning
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainWarning_C::ExecuteUbergraph_Widget_TrainWarning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainWarning.Widget_TrainWarning_C.ExecuteUbergraph_Widget_TrainWarning");

	UWidget_TrainWarning_C_ExecuteUbergraph_Widget_TrainWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
