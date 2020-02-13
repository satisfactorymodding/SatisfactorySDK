// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_RailroadSwitchControl_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_RailroadSwitchControl.Build_RailroadSwitchControl_C.UpdateSwitchPositionVisuals
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABuild_RailroadSwitchControl_C::UpdateSwitchPositionVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_RailroadSwitchControl.Build_RailroadSwitchControl_C.UpdateSwitchPositionVisuals");

	ABuild_RailroadSwitchControl_C_UpdateSwitchPositionVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_RailroadSwitchControl.Build_RailroadSwitchControl_C.ExecuteUbergraph_Build_RailroadSwitchControl
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_RailroadSwitchControl_C::ExecuteUbergraph_Build_RailroadSwitchControl(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_RailroadSwitchControl.Build_RailroadSwitchControl_C.ExecuteUbergraph_Build_RailroadSwitchControl");

	ABuild_RailroadSwitchControl_C_ExecuteUbergraph_Build_RailroadSwitchControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
