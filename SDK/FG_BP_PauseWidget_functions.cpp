// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_PauseWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PauseWidget.BP_PauseWidget_C.CanDoServerAdministration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           canAdminister                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PauseWidget_C::CanDoServerAdministration(bool* canAdminister)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.CanDoServerAdministration");

	UBP_PauseWidget_C_CanDoServerAdministration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canAdminister != nullptr)
		*canAdminister = params.canAdminister;
}


// Function BP_PauseWidget.BP_PauseWidget_C.IsIntroSequenceDone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PauseWidget_C::IsIntroSequenceDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.IsIntroSequenceDone");

	UBP_PauseWidget_C_IsIntroSequenceDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PauseWidget.BP_PauseWidget_C.UpdateMenuItemVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PauseWidget_C::UpdateMenuItemVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.UpdateMenuItemVisibility");

	UBP_PauseWidget_C_UpdateMenuItemVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.UpdateHostNATText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PauseWidget_C::UpdateHostNATText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.UpdateHostNATText");

	UBP_PauseWidget_C_UpdateHostNATText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.GetPlayDurationText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_PauseWidget_C::GetPlayDurationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.GetPlayDurationText");

	UBP_PauseWidget_C_GetPlayDurationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PauseWidget.BP_PauseWidget_C.GetSessionNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_PauseWidget_C::GetSessionNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.GetSessionNameText");

	UBP_PauseWidget_C_GetSessionNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PauseWidget.BP_PauseWidget_C.DoResume
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PauseWidget_C::DoResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.DoResume");

	UBP_PauseWidget_C_DoResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.OnEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PauseWidget_C::OnEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.OnEscape");

	UBP_PauseWidget_C_OnEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bResume_K2Node_ComponentBoundEvent_152_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PauseWidget_C::BndEvt__bResume_K2Node_ComponentBoundEvent_152_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bResume_K2Node_ComponentBoundEvent_152_OnClicked__DelegateSignature");

	UBP_PauseWidget_C_BndEvt__bResume_K2Node_ComponentBoundEvent_152_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bLoadGame_K2Node_ComponentBoundEvent_166_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PauseWidget_C::BndEvt__bLoadGame_K2Node_ComponentBoundEvent_166_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bLoadGame_K2Node_ComponentBoundEvent_166_OnClicked__DelegateSignature");

	UBP_PauseWidget_C_BndEvt__bLoadGame_K2Node_ComponentBoundEvent_166_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bRespawn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PauseWidget_C::BndEvt__bRespawn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bRespawn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UBP_PauseWidget_C_BndEvt__bRespawn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bSaveGame_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PauseWidget_C::BndEvt__bSaveGame_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bSaveGame_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UBP_PauseWidget_C_BndEvt__bSaveGame_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PauseWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.Construct");

	UBP_PauseWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bFeedback_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PauseWidget_C::BndEvt__bFeedback_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bFeedback_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature");

	UBP_PauseWidget_C_BndEvt__bFeedback_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.Event ExitToMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          confirm                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PauseWidget_C::Event_ExitToMainMenu(bool* confirm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.Event ExitToMainMenu");

	UBP_PauseWidget_C_Event_ExitToMainMenu_Params params;
	params.confirm = confirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.Event ExitToDesktop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          confirm                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PauseWidget_C::Event_ExitToDesktop(bool* confirm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.Event ExitToDesktop");

	UBP_PauseWidget_C_Event_ExitToDesktop_Params params;
	params.confirm = confirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bExitMainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PauseWidget_C::BndEvt__bExitMainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bExitMainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UBP_PauseWidget_C_BndEvt__bExitMainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bExitDesktop_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PauseWidget_C::BndEvt__bExitDesktop_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bExitDesktop_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UBP_PauseWidget_C_BndEvt__bExitDesktop_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__mOptions_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PauseWidget_C::BndEvt__mOptions_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__mOptions_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UBP_PauseWidget_C_BndEvt__mOptions_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bSkipIntro_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_PauseWidget_C::BndEvt__bSkipIntro_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bSkipIntro_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UBP_PauseWidget_C_BndEvt__bSkipIntro_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PauseWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.Destruct");

	UBP_PauseWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.ExecuteUbergraph_BP_PauseWidget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PauseWidget_C::ExecuteUbergraph_BP_PauseWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.ExecuteUbergraph_BP_PauseWidget");

	UBP_PauseWidget_C_ExecuteUbergraph_BP_PauseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.OnBackClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PauseWidget_C::OnBackClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.OnBackClicked__DelegateSignature");

	UBP_PauseWidget_C_OnBackClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.OnManagePlayersClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PauseWidget_C::OnManagePlayersClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.OnManagePlayersClicked__DelegateSignature");

	UBP_PauseWidget_C_OnManagePlayersClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.OnOptionsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PauseWidget_C::OnOptionsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.OnOptionsClicked__DelegateSignature");

	UBP_PauseWidget_C_OnOptionsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.OnLoadClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PauseWidget_C::OnLoadClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.OnLoadClicked__DelegateSignature");

	UBP_PauseWidget_C_OnLoadClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidget.BP_PauseWidget_C.OnSaveClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PauseWidget_C::OnSaveClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidget.BP_PauseWidget_C.OnSaveClicked__DelegateSignature");

	UBP_PauseWidget_C_OnSaveClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
