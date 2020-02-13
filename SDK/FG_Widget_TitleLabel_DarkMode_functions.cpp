// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TitleLabel_DarkMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TitleLabel_DarkMode.Widget_TitleLabel_DarkMode_C.SetFicsItDriverText
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWidget_TitleLabel_DarkMode_C::SetFicsItDriverText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TitleLabel_DarkMode.Widget_TitleLabel_DarkMode_C.SetFicsItDriverText");

	UWidget_TitleLabel_DarkMode_C_SetFicsItDriverText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TitleLabel_DarkMode.Widget_TitleLabel_DarkMode_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_TitleLabel_DarkMode_C::SetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TitleLabel_DarkMode.Widget_TitleLabel_DarkMode_C.SetTitle");

	UWidget_TitleLabel_DarkMode_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TitleLabel_DarkMode.Widget_TitleLabel_DarkMode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TitleLabel_DarkMode_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TitleLabel_DarkMode.Widget_TitleLabel_DarkMode_C.PreConstruct");

	UWidget_TitleLabel_DarkMode_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TitleLabel_DarkMode.Widget_TitleLabel_DarkMode_C.ExecuteUbergraph_Widget_TitleLabel_DarkMode
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TitleLabel_DarkMode_C::ExecuteUbergraph_Widget_TitleLabel_DarkMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TitleLabel_DarkMode.Widget_TitleLabel_DarkMode_C.ExecuteUbergraph_Widget_TitleLabel_DarkMode");

	UWidget_TitleLabel_DarkMode_C_ExecuteUbergraph_Widget_TitleLabel_DarkMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
