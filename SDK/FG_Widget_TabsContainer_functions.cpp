// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TabsContainer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TabsContainer.Widget_TabsContainer_C.SetActiveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_SlidingTabs_Button_C** ActiveButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_TabsContainer_C::SetActiveButton(class UWidget_SlidingTabs_Button_C** ActiveButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.SetActiveButton");

	UWidget_TabsContainer_C_SetActiveButton_Params params;
	params.ActiveButton = ActiveButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.IfButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_SlidingTabs_Button_C** Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_TabsContainer_C::IfButtonClicked(class UWidget_SlidingTabs_Button_C** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.IfButtonClicked");

	UWidget_TabsContainer_C_IfButtonClicked_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.IfButtonUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_SlidingTabs_Button_C** Insitagor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_TabsContainer_C::IfButtonUnhovered(class UWidget_SlidingTabs_Button_C** Insitagor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.IfButtonUnhovered");

	UWidget_TabsContainer_C_IfButtonUnhovered_Params params;
	params.Insitagor = Insitagor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.IfButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_SlidingTabs_Button_C** Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_TabsContainer_C::IfButtonHovered(class UWidget_SlidingTabs_Button_C** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.IfButtonHovered");

	UWidget_TabsContainer_C_IfButtonHovered_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.GenerateButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_TabsContainer_C::GenerateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.GenerateButtons");

	UWidget_TabsContainer_C_GenerateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TabsContainer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.PreConstruct");

	UWidget_TabsContainer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.Init
// (BlueprintCallable, BlueprintEvent)

void UWidget_TabsContainer_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.Init");

	UWidget_TabsContainer_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TabsContainer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.Destruct");

	UWidget_TabsContainer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.ExecuteUbergraph_Widget_TabsContainer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TabsContainer_C::ExecuteUbergraph_Widget_TabsContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.ExecuteUbergraph_Widget_TabsContainer");

	UWidget_TabsContainer_C_ExecuteUbergraph_Widget_TabsContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.OnTabsGenerated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_TabsContainer_C::OnTabsGenerated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.OnTabsGenerated__DelegateSignature");

	UWidget_TabsContainer_C_OnTabsGenerated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.OnNoTabsGenerated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_TabsContainer_C::OnNoTabsGenerated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.OnNoTabsGenerated__DelegateSignature");

	UWidget_TabsContainer_C_OnNoTabsGenerated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TabsContainer_C::OnButtonClicked__DelegateSignature(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.OnButtonClicked__DelegateSignature");

	UWidget_TabsContainer_C_OnButtonClicked__DelegateSignature_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.OnButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActiveButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TabsContainer_C::OnButtonUnhovered__DelegateSignature(bool* IsActiveButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.OnButtonUnhovered__DelegateSignature");

	UWidget_TabsContainer_C_OnButtonUnhovered__DelegateSignature_Params params;
	params.IsActiveButton = IsActiveButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TabsContainer.Widget_TabsContainer_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActiveButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TabsContainer_C::OnButtonHovered__DelegateSignature(bool* IsActiveButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabsContainer.Widget_TabsContainer_C.OnButtonHovered__DelegateSignature");

	UWidget_TabsContainer_C_OnButtonHovered__DelegateSignature_Params params;
	params.IsActiveButton = IsActiveButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
