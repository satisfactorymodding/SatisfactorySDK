// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_LoadSession_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_LoadSession.Widget_LoadSession_C.OnSavesEnumerated
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSaveHeader>     saves                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWidget_LoadSession_C::OnSavesEnumerated(bool* success, TArray<struct FSaveHeader>* saves)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnSavesEnumerated");

	UWidget_LoadSession_C_OnSavesEnumerated_Params params;
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (saves != nullptr)
		*saves = params.saves;
}


// Function Widget_LoadSession.Widget_LoadSession_C.PopulateSavesFromSession
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSessionSaveStruct*     session                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_LoadSession_C::PopulateSavesFromSession(struct FSessionSaveStruct* session)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.PopulateSavesFromSession");

	UWidget_LoadSession_C_PopulateSavesFromSession_Params params;
	params.session = session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.ShowLoadButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_LoadSession_C::ShowLoadButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ShowLoadButtons");

	UWidget_LoadSession_C_ShowLoadButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_LoadSession.Widget_LoadSession_C.IsDeleteSessionButtonEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWidget_LoadSession_C::IsDeleteSessionButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.IsDeleteSessionButtonEnabled");

	UWidget_LoadSession_C_IsDeleteSessionButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSession
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::IsValidCurrentSession(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSession");

	UWidget_LoadSession_C_IsValidCurrentSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Widget_LoadSession.Widget_LoadSession_C.UpdateCurrentSession
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_LoadSession_C::UpdateCurrentSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.UpdateCurrentSession");

	UWidget_LoadSession_C_UpdateCurrentSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.ShouldShowSaveGames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWidget_LoadSession_C::ShouldShowSaveGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ShouldShowSaveGames");

	UWidget_LoadSession_C_ShouldShowSaveGames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::IsValidCurrentSave(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSave");

	UWidget_LoadSession_C_IsValidCurrentSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Widget_LoadSession.Widget_LoadSession_C.OnSaveClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveHeader*            SaveHeader                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_LoadSession_C::OnSaveClicked(struct FSaveHeader* SaveHeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnSaveClicked");

	UWidget_LoadSession_C_OnSaveClicked_Params params;
	params.SaveHeader = SaveHeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.PopulateSessionList
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_LoadSession_C::PopulateSessionList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.PopulateSessionList");

	UWidget_LoadSession_C_PopulateSessionList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__mDeleteSaveGameButton_K2Node_ComponentBoundEvent_115_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_LoadSession_C::BndEvt__mDeleteSaveGameButton_K2Node_ComponentBoundEvent_115_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__mDeleteSaveGameButton_K2Node_ComponentBoundEvent_115_OnClicked__DelegateSignature");

	UWidget_LoadSession_C_BndEvt__mDeleteSaveGameButton_K2Node_ComponentBoundEvent_115_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__button2save_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_LoadSession_C::BndEvt__button2save_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__button2save_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_LoadSession_C_BndEvt__button2save_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSessionPopUp
// (BlueprintCallable, BlueprintEvent)

void UWidget_LoadSession_C::ConfirmDeleteSessionPopUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSessionPopUp");

	UWidget_LoadSession_C_ConfirmDeleteSessionPopUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          confirm                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::EventDeleteSession(bool* confirm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSession");

	UWidget_LoadSession_C_EventDeleteSession_Params params;
	params.confirm = confirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          confirm                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::EventDeleteSave(bool* confirm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSave");

	UWidget_LoadSession_C_EventDeleteSave_Params params;
	params.confirm = confirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSavePopUp
// (BlueprintCallable, BlueprintEvent)

void UWidget_LoadSession_C::ConfirmDeleteSavePopUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSavePopUp");

	UWidget_LoadSession_C_ConfirmDeleteSavePopUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.OnEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_LoadSession_C::OnEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnEscape");

	UWidget_LoadSession_C_OnEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.SpawnAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PlayBackgroundAnim             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::SpawnAnim(bool* PlayBackgroundAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.SpawnAnim");

	UWidget_LoadSession_C_SpawnAnim_Params params;
	params.PlayBackgroundAnim = PlayBackgroundAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.LoadCurrentSave
// (BlueprintCallable, BlueprintEvent)

void UWidget_LoadSession_C::LoadCurrentSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.LoadCurrentSave");

	UWidget_LoadSession_C_LoadCurrentSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_LoadSession_C::BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_LoadSession_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.HideLoadAndDeleteButtons
// (BlueprintCallable, BlueprintEvent)

void UWidget_LoadSession_C::HideLoadAndDeleteButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.HideLoadAndDeleteButtons");

	UWidget_LoadSession_C_HideLoadAndDeleteButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_LoadSession_C::BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_LoadSession_C_BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.HideDeleteSessionButton
// (BlueprintCallable, BlueprintEvent)

void UWidget_LoadSession_C::HideDeleteSessionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.HideDeleteSessionButton");

	UWidget_LoadSession_C_HideDeleteSessionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_LoadSession_C::BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_LoadSession_C_BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.OnMenuEnter
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                prevMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_LoadSession_C::OnMenuEnter(class UWidget** prevMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnMenuEnter");

	UWidget_LoadSession_C_OnMenuEnter_Params params;
	params.prevMenu = prevMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.SaveDeleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::SaveDeleted(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.SaveDeleted");

	UWidget_LoadSession_C_SaveDeleted_Params params;
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.SessionDeleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::SessionDeleted(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.SessionDeleted");

	UWidget_LoadSession_C_SessionDeleted_Params params;
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.ClosedLoadPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ConfirmClicked                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::ClosedLoadPopup(bool* ConfirmClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ClosedLoadPopup");

	UWidget_LoadSession_C_ClosedLoadPopup_Params params;
	params.ConfirmClicked = ConfirmClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.ExecuteUbergraph_Widget_LoadSession
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::ExecuteUbergraph_Widget_LoadSession(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ExecuteUbergraph_Widget_LoadSession");

	UWidget_LoadSession_C_ExecuteUbergraph_Widget_LoadSession_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.OnLoadClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveHeader*            SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsPrivateGame                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_LoadSession_C::OnLoadClicked__DelegateSignature(struct FSaveHeader* SaveGame, bool* IsPrivateGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnLoadClicked__DelegateSignature");

	UWidget_LoadSession_C_OnLoadClicked__DelegateSignature_Params params;
	params.SaveGame = SaveGame;
	params.IsPrivateGame = IsPrivateGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_LoadSession.Widget_LoadSession_C.OnBackClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_LoadSession_C::OnBackClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnBackClicked__DelegateSignature");

	UWidget_LoadSession_C_OnBackClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
