// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_ChatWindow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ChatWindow.Widget_ChatWindow_C.ExitChat
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ChatWindow_C::ExitChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.ExitChat");

	UWidget_ChatWindow_C_ExitChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.OnPlayerBeginTypeMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ChatWindow_C::OnPlayerBeginTypeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.OnPlayerBeginTypeMessage");

	UWidget_ChatWindow_C_OnPlayerBeginTypeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ChatWindow_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.UpdateVisibility");

	UWidget_ChatWindow_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.OnChatMessageReceived
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ChatWindow_C::OnChatMessageReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.OnChatMessageReceived");

	UWidget_ChatWindow_C_OnChatMessageReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.SetInputWindowVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ChatWindow_C::SetInputWindowVisibility(bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.SetInputWindowVisibility");

	UWidget_ChatWindow_C_SetInputWindowVisibility_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.GetInputWindowVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWidget_ChatWindow_C::GetInputWindowVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.GetInputWindowVisibility");

	UWidget_ChatWindow_C_GetInputWindowVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.CacheChatMessages
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ChatWindow_C::CacheChatMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.CacheChatMessages");

	UWidget_ChatWindow_C_CacheChatMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.IsLastMessageFresh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFresh                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_ChatWindow_C::IsLastMessageFresh(bool* IsFresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.IsLastMessageFresh");

	UWidget_ChatWindow_C_IsLastMessageFresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFresh != nullptr)
		*IsFresh = params.IsFresh;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.RemoveMessageWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ChatWindow_C::RemoveMessageWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.RemoveMessageWidget");

	UWidget_ChatWindow_C_RemoveMessageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.AddMessageWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ChatWindow_C::AddMessageWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.AddMessageWidget");

	UWidget_ChatWindow_C_AddMessageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.MatchWidgetsAndMessages
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ChatWindow_C::MatchWidgetsAndMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.MatchWidgetsAndMessages");

	UWidget_ChatWindow_C_MatchWidgetsAndMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ChatWindow_C::OnRemovedFromFocusPath(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.OnRemovedFromFocusPath");

	UWidget_ChatWindow_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_ChatWindow_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.OnMouseEnter");

	UWidget_ChatWindow_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_ChatWindow_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.OnMouseLeave");

	UWidget_ChatWindow_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ChatWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.Construct");

	UWidget_ChatWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ChatWindow.Widget_ChatWindow_C.ExecuteUbergraph_Widget_ChatWindow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ChatWindow_C::ExecuteUbergraph_Widget_ChatWindow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ChatWindow.Widget_ChatWindow_C.ExecuteUbergraph_Widget_ChatWindow");

	UWidget_ChatWindow_C_ExecuteUbergraph_Widget_ChatWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
