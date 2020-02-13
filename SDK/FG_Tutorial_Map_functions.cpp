// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Tutorial_Map_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Map.Tutorial_Map_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorial_Map_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Map.Tutorial_Map_C.Construct");

	UTutorial_Map_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Map.Tutorial_Map_C.ExecuteUbergraph_Tutorial_Map
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Map_C::ExecuteUbergraph_Tutorial_Map(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Map.Tutorial_Map_C.ExecuteUbergraph_Tutorial_Map");

	UTutorial_Map_C_ExecuteUbergraph_Tutorial_Map_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
