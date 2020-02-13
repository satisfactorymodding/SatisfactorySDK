// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_ManufacturerMk1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 intText                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABuild_ManufacturerMk1_C::SetText(class FString* intText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.SetText");

	ABuild_ManufacturerMk1_C_SetText_Params params;
	params.intText = intText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_ManufacturerMk1_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.GainedSignificance");

	ABuild_ManufacturerMk1_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_ManufacturerMk1_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.LostSignificance");

	ABuild_ManufacturerMk1_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.StartProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStartProducing              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ManufacturerMk1_C::StartProductionLoopEffects(bool* didStartProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.StartProductionLoopEffects");

	ABuild_ManufacturerMk1_C_StartProductionLoopEffects_Params params;
	params.didStartProducing = didStartProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.StopProductionLoopEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          didStopProducing               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ManufacturerMk1_C::StopProductionLoopEffects(bool* didStopProducing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.StopProductionLoopEffects");

	ABuild_ManufacturerMk1_C_StopProductionLoopEffects_Params params;
	params.didStopProducing = didStopProducing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.ExecuteUbergraph_Build_ManufacturerMk1
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ManufacturerMk1_C::ExecuteUbergraph_Build_ManufacturerMk1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.ExecuteUbergraph_Build_ManufacturerMk1");

	ABuild_ManufacturerMk1_C_ExecuteUbergraph_Build_ManufacturerMk1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
