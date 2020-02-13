// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_RadialMenuButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Hover Lerp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RadialMenuButton_C::Hover_Lerp(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Hover Lerp");

	UWidget_RadialMenuButton_C_Hover_Lerp_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Get Screen Position
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_RadialMenuButton_C::Get_Screen_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Get Screen Position");

	UWidget_RadialMenuButton_C_Get_Screen_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Set Angle
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_RadialMenuButton_C::Set_Angle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Set Angle");

	UWidget_RadialMenuButton_C_Set_Angle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_RadialMenuButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Construct");

	UWidget_RadialMenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Create Style
// (BlueprintCallable, BlueprintEvent)

void UWidget_RadialMenuButton_C::Create_Style()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Create Style");

	UWidget_RadialMenuButton_C_Create_Style_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Set Icon Position
// (BlueprintCallable, BlueprintEvent)

void UWidget_RadialMenuButton_C::Set_Icon_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Set Icon Position");

	UWidget_RadialMenuButton_C_Set_Icon_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RadialMenuButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.Tick");

	UWidget_RadialMenuButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.ExecuteUbergraph_Widget_RadialMenuButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RadialMenuButton_C::ExecuteUbergraph_Widget_RadialMenuButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RadialMenuButton.Widget_RadialMenuButton_C.ExecuteUbergraph_Widget_RadialMenuButton");

	UWidget_RadialMenuButton_C_ExecuteUbergraph_Widget_RadialMenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
