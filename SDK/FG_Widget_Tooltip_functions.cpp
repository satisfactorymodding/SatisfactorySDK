// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Tooltip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Tooltip.Widget_Tooltip_C.GetItemDescription
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Tooltip_C::GetItemDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tooltip.Widget_Tooltip_C.GetItemDescription");

	UWidget_Tooltip_C_GetItemDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Tooltip.Widget_Tooltip_C.GetItemName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Tooltip_C::GetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tooltip.Widget_Tooltip_C.GetItemName");

	UWidget_Tooltip_C_GetItemName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Tooltip.Widget_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Tooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tooltip.Widget_Tooltip_C.Construct");

	UWidget_Tooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Tooltip.Widget_Tooltip_C.ExecuteUbergraph_Widget_Tooltip
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Tooltip_C::ExecuteUbergraph_Widget_Tooltip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Tooltip.Widget_Tooltip_C.ExecuteUbergraph_Widget_Tooltip");

	UWidget_Tooltip_C_ExecuteUbergraph_Widget_Tooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
