// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_HUDBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_HUDBox.Widget_HUDBox_C.SetIconVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_HUDBox_C::SetIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUDBox.Widget_HUDBox_C.SetIconVisibility");

	UWidget_HUDBox_C_SetIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUDBox.Widget_HUDBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_HUDBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUDBox.Widget_HUDBox_C.Construct");

	UWidget_HUDBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUDBox.Widget_HUDBox_C.RemoveHUDBox
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUDBox_C::RemoveHUDBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUDBox.Widget_HUDBox_C.RemoveHUDBox");

	UWidget_HUDBox_C_RemoveHUDBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUDBox.Widget_HUDBox_C.DestroySelf
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUDBox_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUDBox.Widget_HUDBox_C.DestroySelf");

	UWidget_HUDBox_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUDBox.Widget_HUDBox_C.StartWarningSign
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUDBox_C::StartWarningSign()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUDBox.Widget_HUDBox_C.StartWarningSign");

	UWidget_HUDBox_C_StartWarningSign_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUDBox.Widget_HUDBox_C.StopWarningSign
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUDBox_C::StopWarningSign()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUDBox.Widget_HUDBox_C.StopWarningSign");

	UWidget_HUDBox_C_StopWarningSign_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUDBox.Widget_HUDBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_HUDBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUDBox.Widget_HUDBox_C.PreConstruct");

	UWidget_HUDBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUDBox.Widget_HUDBox_C.ExecuteUbergraph_Widget_HUDBox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_HUDBox_C::ExecuteUbergraph_Widget_HUDBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUDBox.Widget_HUDBox_C.ExecuteUbergraph_Widget_HUDBox");

	UWidget_HUDBox_C_ExecuteUbergraph_Widget_HUDBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
