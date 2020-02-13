// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MAMTree_Node_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.Shine
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Node_C::Shine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.Shine");

	UWidget_MAMTree_Node_C_Shine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ShowHideKeyIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::ShowHideKeyIcon(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ShowHideKeyIcon");

	UWidget_MAMTree_Node_C_ShowHideKeyIcon_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ShowHideUnlockIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::ShowHideUnlockIcon(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ShowHideUnlockIcon");

	UWidget_MAMTree_Node_C_ShowHideUnlockIcon_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetButtonNormalColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::SetButtonNormalColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetButtonNormalColor");

	UWidget_MAMTree_Node_C_SetButtonNormalColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetNodeState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMamTree_NodeStates>* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::SetNodeState(TEnumAsByte<EMamTree_NodeStates>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetNodeState");

	UWidget_MAMTree_Node_C_SetNodeState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnMenuOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWidget_MAMTree_Node_C::OnMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnMenuOpen");

	UWidget_MAMTree_Node_C_OnMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          mIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::SetIsSelected(bool* mIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.SetIsSelected");

	UWidget_MAMTree_Node_C_SetIsSelected_Params params;
	params.mIsSelected = mIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.UpdateNodeIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMAMTree_NodeData_Struct* mNodeData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_MAMTree_Node_C::UpdateNodeIcon(struct FMAMTree_NodeData_Struct* mNodeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.UpdateNodeIcon");

	UWidget_MAMTree_Node_C_UpdateNodeIcon_Params params;
	params.mNodeData = mNodeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.PreConstruct");

	UWidget_MAMTree_Node_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_MAMTree_Node_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_MAMTree_Node_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_MAMTree_Node_C::BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_MAMTree_Node_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_MAMTree_Node_C::BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWidget_MAMTree_Node_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mHoverMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::BndEvt__mHoverMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature(bool* bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mHoverMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature");

	UWidget_MAMTree_Node_C_BndEvt__mHoverMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Node_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.CloseMenu");

	UWidget_MAMTree_Node_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnResearchButtonPressed
// (BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Node_C::OnResearchButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnResearchButtonPressed");

	UWidget_MAMTree_Node_C_OnResearchButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_MAMTree_Node_C::BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UWidget_MAMTree_Node_C_BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_MAMTree_Node_C::BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UWidget_MAMTree_Node_C_BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_MAMTree_Node_C::BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UWidget_MAMTree_Node_C_BndEvt__mResearchedButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ExecuteUbergraph_Widget_MAMTree_Node
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::ExecuteUbergraph_Widget_MAMTree_Node(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.ExecuteUbergraph_Widget_MAMTree_Node");

	UWidget_MAMTree_Node_C_ExecuteUbergraph_Widget_MAMTree_Node_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnResearchStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_MAMTree_Node_C::OnResearchStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnResearchStarted__DelegateSignature");

	UWidget_MAMTree_Node_C_OnResearchStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::OnUnhovered__DelegateSignature(struct FIntVector2D* Coordinates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnUnhovered__DelegateSignature");

	UWidget_MAMTree_Node_C_OnUnhovered__DelegateSignature_Params params;
	params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::OnHovered__DelegateSignature(struct FIntVector2D* Coordinates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnHovered__DelegateSignature");

	UWidget_MAMTree_Node_C_OnHovered__DelegateSignature_Params params;
	params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector2D*           Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MAMTree_Node_C::OnClicked__DelegateSignature(struct FIntVector2D* Coordinates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Node.Widget_MAMTree_Node_C.OnClicked__DelegateSignature");

	UWidget_MAMTree_Node_C_OnClicked__DelegateSignature_Params params;
	params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
