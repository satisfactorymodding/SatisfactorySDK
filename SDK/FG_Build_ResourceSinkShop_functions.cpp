// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_ResourceSinkShop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABuild_ResourceSinkShop_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.LostSignificance");

	ABuild_ResourceSinkShop_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABuild_ResourceSinkShop_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.GainedSignificance");

	ABuild_ResourceSinkShop_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.ExecuteUbergraph_Build_ResourceSinkShop
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_ResourceSinkShop_C::ExecuteUbergraph_Build_ResourceSinkShop(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_ResourceSinkShop.Build_ResourceSinkShop_C.ExecuteUbergraph_Build_ResourceSinkShop");

	ABuild_ResourceSinkShop_C_ExecuteUbergraph_Build_ResourceSinkShop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
