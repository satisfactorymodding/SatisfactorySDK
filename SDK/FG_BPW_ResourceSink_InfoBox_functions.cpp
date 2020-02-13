// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_InfoBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.UpdateTooltipInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_InfoBox_C::UpdateTooltipInfo(class UClass** schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.UpdateTooltipInfo");

	UBPW_ResourceSink_InfoBox_C_UpdateTooltipInfo_Params params;
	params.schematic = schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_InfoBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.PreConstruct");

	UBPW_ResourceSink_InfoBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.ExecuteUbergraph_BPW_ResourceSink_InfoBox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_InfoBox_C::ExecuteUbergraph_BPW_ResourceSink_InfoBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_InfoBox.BPW_ResourceSink_InfoBox_C.ExecuteUbergraph_BPW_ResourceSink_InfoBox");

	UBPW_ResourceSink_InfoBox_C_ExecuteUbergraph_BPW_ResourceSink_InfoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
