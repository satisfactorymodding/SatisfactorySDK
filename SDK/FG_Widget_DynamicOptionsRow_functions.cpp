// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_DynamicOptionsRow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.InitOptionRow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_DynamicOptionsRow_C::InitOptionRow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.InitOptionRow");

	UWidget_DynamicOptionsRow_C_InitOptionRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_DynamicOptionsRow_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnMouseEnter");

	UWidget_DynamicOptionsRow_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_DynamicOptionsRow_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnMouseLeave");

	UWidget_DynamicOptionsRow_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DynamicOptionsRow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.PreConstruct");

	UWidget_DynamicOptionsRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_DynamicOptionsRow_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWidget_DynamicOptionsRow_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_DynamicOptionsRow_C::BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_DynamicOptionsRow_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnOptionRowInit
// (Event, Protected, BlueprintEvent)

void UWidget_DynamicOptionsRow_C::OnOptionRowInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnOptionRowInit");

	UWidget_DynamicOptionsRow_C_OnOptionRowInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnOptionValueUpdated
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWidget_DynamicOptionsRow_C::OnOptionValueUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnOptionValueUpdated");

	UWidget_DynamicOptionsRow_C_OnOptionValueUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.ExecuteUbergraph_Widget_DynamicOptionsRow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DynamicOptionsRow_C::ExecuteUbergraph_Widget_DynamicOptionsRow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.ExecuteUbergraph_Widget_DynamicOptionsRow");

	UWidget_DynamicOptionsRow_C_ExecuteUbergraph_Widget_DynamicOptionsRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_DynamicOptionsRow_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DynamicOptionsRow.Widget_DynamicOptionsRow_C.OnClicked__DelegateSignature");

	UWidget_DynamicOptionsRow_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
