// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PowerPoleWallDouble_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_PowerPoleWallDouble.Build_PowerPoleWallDouble_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuild_PowerPoleWallDouble_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PowerPoleWallDouble.Build_PowerPoleWallDouble_C.ReceiveBeginPlay");

	ABuild_PowerPoleWallDouble_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_PowerPoleWallDouble.Build_PowerPoleWallDouble_C.ExecuteUbergraph_Build_PowerPoleWallDouble
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_PowerPoleWallDouble_C::ExecuteUbergraph_Build_PowerPoleWallDouble(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_PowerPoleWallDouble.Build_PowerPoleWallDouble_C.ExecuteUbergraph_Build_PowerPoleWallDouble");

	ABuild_PowerPoleWallDouble_C_ExecuteUbergraph_Build_PowerPoleWallDouble_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
