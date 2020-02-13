// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Beacon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Beacon.Widget_Beacon_C.SetBeaconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Beacon_C::SetBeaconColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.SetBeaconColor");

	UWidget_Beacon_C_SetBeaconColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Beacon.Widget_Beacon_C.SetBeaconText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Beacon_C::SetBeaconText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.SetBeaconText");

	UWidget_Beacon_C_SetBeaconText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Beacon.Widget_Beacon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Beacon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.Construct");

	UWidget_Beacon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Beacon.Widget_Beacon_C.BndEvt__mColorButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_Beacon_C::BndEvt__mColorButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.BndEvt__mColorButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature");

	UWidget_Beacon_C_BndEvt__mColorButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Beacon.Widget_Beacon_C.OnColorPicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Beacon_C::OnColorPicked(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.OnColorPicked");

	UWidget_Beacon_C_OnColorPicked_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Beacon.Widget_Beacon_C.BndEvt__Widget_Window_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
// (BlueprintEvent)

void UWidget_Beacon_C::BndEvt__Widget_Window_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.BndEvt__Widget_Window_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");

	UWidget_Beacon_C_BndEvt__Widget_Window_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Beacon.Widget_Beacon_C.OnPickup
// (BlueprintCallable, BlueprintEvent)

void UWidget_Beacon_C::OnPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.OnPickup");

	UWidget_Beacon_C_OnPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Beacon.Widget_Beacon_C.BndEvt__mTowerName_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Beacon_C::BndEvt__mTowerName_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.BndEvt__mTowerName_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");

	UWidget_Beacon_C_BndEvt__mTowerName_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Beacon.Widget_Beacon_C.UpdateColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           New_Color                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Beacon_C::UpdateColor(struct FLinearColor* New_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.UpdateColor");

	UWidget_Beacon_C_UpdateColor_Params params;
	params.New_Color = New_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Beacon.Widget_Beacon_C.ExecuteUbergraph_Widget_Beacon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Beacon_C::ExecuteUbergraph_Widget_Beacon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Beacon.Widget_Beacon_C.ExecuteUbergraph_Widget_Beacon");

	UWidget_Beacon_C_ExecuteUbergraph_Widget_Beacon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
