// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PowerLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_PowerLine.Build_PowerLine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuild_PowerLine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PowerLine.Build_PowerLine_C.ReceiveBeginPlay");

	ABuild_PowerLine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PowerLine.Build_PowerLine_C.ExecuteUbergraph_Build_PowerLine
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PowerLine_C::ExecuteUbergraph_Build_PowerLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PowerLine.Build_PowerLine_C.ExecuteUbergraph_Build_PowerLine");

	ABuild_PowerLine_C_ExecuteUbergraph_Build_PowerLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
