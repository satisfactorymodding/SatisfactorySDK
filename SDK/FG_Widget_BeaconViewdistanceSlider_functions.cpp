// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_BeaconViewdistanceSlider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.GetTextFromIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              Text                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::GetTextFromIndex(int* Index, class UTextBlock** Text, bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.GetTextFromIndex");

	UWidget_BeaconViewdistanceSlider_C_GetTextFromIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (success != nullptr)
		*success = params.success;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_BeaconViewdistanceSlider_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnMouseMove");

	UWidget_BeaconViewdistanceSlider_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.GetButtonFromIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton*                 Button                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::GetButtonFromIndex(int* Index, class UButton** Button, bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.GetButtonFromIndex");

	UWidget_BeaconViewdistanceSlider_C_GetButtonFromIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
	if (success != nullptr)
		*success = params.success;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.SetButtonStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton**                Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::SetButtonStyle(class UButton** Button, bool* Selected, bool* Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.SetButtonStyle");

	UWidget_BeaconViewdistanceSlider_C_SetButtonStyle_Params params;
	params.Button = Button;
	params.Selected = Selected;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_BeaconViewdistanceSlider_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnMouseLeave");

	UWidget_BeaconViewdistanceSlider_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_BeaconViewdistanceSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.Construct");

	UWidget_BeaconViewdistanceSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UWidget_BeaconViewdistanceSlider_C::OnButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnButtonClicked");

	UWidget_BeaconViewdistanceSlider_C_OnButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.MyMemesWillGoOn
// (BlueprintCallable, BlueprintEvent)

void UWidget_BeaconViewdistanceSlider_C::MyMemesWillGoOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.MyMemesWillGoOn");

	UWidget_BeaconViewdistanceSlider_C_MyMemesWillGoOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.PreConstruct");

	UWidget_BeaconViewdistanceSlider_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.UpdateSelectedLevel
// (BlueprintCallable, BlueprintEvent)

void UWidget_BeaconViewdistanceSlider_C::UpdateSelectedLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.UpdateSelectedLevel");

	UWidget_BeaconViewdistanceSlider_C_UpdateSelectedLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (BlueprintEvent)

void UWidget_BeaconViewdistanceSlider_C::BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");

	UWidget_BeaconViewdistanceSlider_C_BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
// (BlueprintEvent)

void UWidget_BeaconViewdistanceSlider_C::BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature");

	UWidget_BeaconViewdistanceSlider_C_BndEvt__Widget_FilterButton_Row_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.ExecuteUbergraph_Widget_BeaconViewdistanceSlider
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::ExecuteUbergraph_Widget_BeaconViewdistanceSlider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.ExecuteUbergraph_Widget_BeaconViewdistanceSlider");

	UWidget_BeaconViewdistanceSlider_C_ExecuteUbergraph_Widget_BeaconViewdistanceSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnViewDistanceUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_BeaconViewdistanceSlider_C** Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::OnViewDistanceUnhovered__DelegateSignature(class UWidget_BeaconViewdistanceSlider_C** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnViewDistanceUnhovered__DelegateSignature");

	UWidget_BeaconViewdistanceSlider_C_OnViewDistanceUnhovered__DelegateSignature_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnViewDistanceHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_BeaconViewdistanceSlider_C** Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ECompassViewDistance*          viewDistance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::OnViewDistanceHovered__DelegateSignature(class UWidget_BeaconViewdistanceSlider_C** Instigator, ECompassViewDistance* viewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnViewDistanceHovered__DelegateSignature");

	UWidget_BeaconViewdistanceSlider_C_OnViewDistanceHovered__DelegateSignature_Params params;
	params.Instigator = Instigator;
	params.viewDistance = viewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_BeaconViewdistanceSlider_C** Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::OnUnhovered__DelegateSignature(class UWidget_BeaconViewdistanceSlider_C** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnUnhovered__DelegateSignature");

	UWidget_BeaconViewdistanceSlider_C_OnUnhovered__DelegateSignature_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_BeaconViewdistanceSlider_C** Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::OnHovered__DelegateSignature(class UWidget_BeaconViewdistanceSlider_C** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnHovered__DelegateSignature");

	UWidget_BeaconViewdistanceSlider_C_OnHovered__DelegateSignature_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnViewDistanceChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_BeaconViewdistanceSlider_C** Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ECompassViewDistance*          NewViewDistance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_BeaconViewdistanceSlider_C::OnViewDistanceChanged__DelegateSignature(class UWidget_BeaconViewdistanceSlider_C** Instigator, ECompassViewDistance* NewViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BeaconViewdistanceSlider.Widget_BeaconViewdistanceSlider_C.OnViewDistanceChanged__DelegateSignature");

	UWidget_BeaconViewdistanceSlider_C_OnViewDistanceChanged__DelegateSignature_Params params;
	params.Instigator = Instigator;
	params.NewViewDistance = NewViewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
