// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_SplineModeSelectWheel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_SplineModeSelectWheel.Widget_SplineModeSelectWheel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SplineModeSelectWheel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SplineModeSelectWheel.Widget_SplineModeSelectWheel_C.Construct");

	UWidget_SplineModeSelectWheel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SplineModeSelectWheel.Widget_SplineModeSelectWheel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SplineModeSelectWheel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SplineModeSelectWheel.Widget_SplineModeSelectWheel_C.Destruct");

	UWidget_SplineModeSelectWheel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SplineModeSelectWheel.Widget_SplineModeSelectWheel_C.ExecuteUbergraph_Widget_SplineModeSelectWheel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SplineModeSelectWheel_C::ExecuteUbergraph_Widget_SplineModeSelectWheel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SplineModeSelectWheel.Widget_SplineModeSelectWheel_C.ExecuteUbergraph_Widget_SplineModeSelectWheel");

	UWidget_SplineModeSelectWheel_C_ExecuteUbergraph_Widget_SplineModeSelectWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
