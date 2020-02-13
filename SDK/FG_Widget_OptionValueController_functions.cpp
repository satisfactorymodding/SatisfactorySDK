// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_OptionValueController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_OptionValueController.Widget_OptionValueController_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_OptionValueController_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionValueController.Widget_OptionValueController_C.Construct");

	UWidget_OptionValueController_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionValueController.Widget_OptionValueController_C.ExecuteUbergraph_Widget_OptionValueController
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_OptionValueController_C::ExecuteUbergraph_Widget_OptionValueController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionValueController.Widget_OptionValueController_C.ExecuteUbergraph_Widget_OptionValueController");

	UWidget_OptionValueController_C_ExecuteUbergraph_Widget_OptionValueController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
