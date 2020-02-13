// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Options_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Options.Widget_Options_C.UpdateDynamicSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::UpdateDynamicSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.UpdateDynamicSettings");

	UWidget_Options_C_UpdateDynamicSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SetupDynamicOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::SetupDynamicOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SetupDynamicOptions");

	UWidget_Options_C_SetupDynamicOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ApplyVideoSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ApplyVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ApplyVideoSettings");

	UWidget_Options_C_ApplyVideoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SetCurrentShowBreakNotifications
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::SetCurrentShowBreakNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SetCurrentShowBreakNotifications");

	UWidget_Options_C_SetCurrentShowBreakNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BindEventsForGameplayOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::BindEventsForGameplayOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BindEventsForGameplayOptions");

	UWidget_Options_C_BindEventsForGameplayOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ResetMouseSensitivity
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ResetMouseSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ResetMouseSensitivity");

	UWidget_Options_C_ResetMouseSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ResetAudioSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ResetAudioSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ResetAudioSettings");

	UWidget_Options_C_ResetAudioSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.UpdateGameplaySettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::UpdateGameplaySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.UpdateGameplaySettings");

	UWidget_Options_C_UpdateGameplaySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SetCurrentAnalyticsSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::SetCurrentAnalyticsSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SetCurrentAnalyticsSetting");

	UWidget_Options_C_SetCurrentAnalyticsSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SetCurrentHeadbobScale
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::SetCurrentHeadbobScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SetCurrentHeadbobScale");

	UWidget_Options_C_SetCurrentHeadbobScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.UpdatePostProcessValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::UpdatePostProcessValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.UpdatePostProcessValues");

	UWidget_Options_C_UpdatePostProcessValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SetupSubmenuOptionsForSpawnAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>     ActiveOptions                  (Parm, OutParm, ZeroConstructor)

void UWidget_Options_C::SetupSubmenuOptionsForSpawnAnim(TArray<class UUserWidget*>* ActiveOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SetupSubmenuOptionsForSpawnAnim");

	UWidget_Options_C_SetupSubmenuOptionsForSpawnAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveOptions != nullptr)
		*ActiveOptions = params.ActiveOptions;
}


// Function Widget_Options.Widget_Options_C.OnAudioValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::OnAudioValueChanged(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnAudioValueChanged");

	UWidget_Options_C_OnAudioValueChanged_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnResolutionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 selected_item                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      selection_type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::OnResolutionChanged(class FString* selected_item, TEnumAsByte<ESelectInfo>* selection_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnResolutionChanged");

	UWidget_Options_C_OnResolutionChanged_Params params;
	params.selected_item = selected_item;
	params.selection_type = selection_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnDefaultKeybindPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::OnDefaultKeybindPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnDefaultKeybindPressed");

	UWidget_Options_C_OnDefaultKeybindPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.UpdateControlSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::UpdateControlSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.UpdateControlSettings");

	UWidget_Options_C_UpdateControlSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SetCurrentArachnophobiaMode
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::SetCurrentArachnophobiaMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SetCurrentArachnophobiaMode");

	UWidget_Options_C_SetCurrentArachnophobiaMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SetCurrentLanguage
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::SetCurrentLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SetCurrentLanguage");

	UWidget_Options_C_SetCurrentLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ApplyControlsSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ApplyControlsSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ApplyControlsSettings");

	UWidget_Options_C_ApplyControlsSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ApplyAudioSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ApplyAudioSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ApplyAudioSettings");

	UWidget_Options_C_ApplyAudioSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ApplyGameplaySettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ApplyGameplaySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ApplyGameplaySettings");

	UWidget_Options_C_ApplyGameplaySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ApplyAudioSliders
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ApplyAudioSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ApplyAudioSliders");

	UWidget_Options_C_ApplyAudioSliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.CacheAudioSliders
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::CacheAudioSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.CacheAudioSliders");

	UWidget_Options_C_CacheAudioSliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.UpdateAudioSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::UpdateAudioSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.UpdateAudioSettings");

	UWidget_Options_C_UpdateAudioSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BindEventsForVolumeSliders
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::BindEventsForVolumeSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BindEventsForVolumeSliders");

	UWidget_Options_C_BindEventsForVolumeSliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ClampedNextIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           currentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           settingsArray                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            nextIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::ClampedNextIndex(int* currentIndex, TArray<struct FText>* settingsArray, int* nextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ClampedNextIndex");

	UWidget_Options_C_ClampedNextIndex_Params params;
	params.currentIndex = currentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (settingsArray != nullptr)
		*settingsArray = params.settingsArray;
	if (nextIndex != nullptr)
		*nextIndex = params.nextIndex;
}


// Function Widget_Options.Widget_Options_C.BindEventsToAllButtonsForVideoSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::BindEventsToAllButtonsForVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BindEventsToAllButtonsForVideoSettings");

	UWidget_Options_C_BindEventsToAllButtonsForVideoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.UpdateVideoSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::UpdateVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.UpdateVideoSettings");

	UWidget_Options_C_UpdateVideoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.PopulateLanguageBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::PopulateLanguageBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.PopulateLanguageBox");

	UWidget_Options_C_PopulateLanguageBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.PopulateResolutionBox
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::PopulateResolutionBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.PopulateResolutionBox");

	UWidget_Options_C_PopulateResolutionBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.PostProcessingNext
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::PostProcessingNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.PostProcessingNext");

	UWidget_Options_C_PostProcessingNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.PostProcessingPrevious
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::PostProcessingPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.PostProcessingPrevious");

	UWidget_Options_C_PostProcessingPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ShadowQualityNext
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ShadowQualityNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ShadowQualityNext");

	UWidget_Options_C_ShadowQualityNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ShadowQualityPrevious
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ShadowQualityPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ShadowQualityPrevious");

	UWidget_Options_C_ShadowQualityPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.FoliagePrevious
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::FoliagePrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.FoliagePrevious");

	UWidget_Options_C_FoliagePrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.TextureQualityNext
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::TextureQualityNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.TextureQualityNext");

	UWidget_Options_C_TextureQualityNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.TextureQualityPrevious
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::TextureQualityPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.TextureQualityPrevious");

	UWidget_Options_C_TextureQualityPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.FoliageNext
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::FoliageNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.FoliageNext");

	UWidget_Options_C_FoliageNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ViewDistanceNext
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ViewDistanceNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ViewDistanceNext");

	UWidget_Options_C_ViewDistanceNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ViewDistancePrevious
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ViewDistancePrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ViewDistancePrevious");

	UWidget_Options_C_ViewDistancePrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.VFXQualityNext
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::VFXQualityNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.VFXQualityNext");

	UWidget_Options_C_VFXQualityNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.VFXQualityPrevious
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::VFXQualityPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.VFXQualityPrevious");

	UWidget_Options_C_VFXQualityPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnVSyncChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::OnVSyncChecked(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnVSyncChecked");

	UWidget_Options_C_OnVSyncChecked_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnFullScreenChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::OnFullScreenChecked(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnFullScreenChecked");

	UWidget_Options_C_OnFullScreenChecked_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ResetVideoSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          confirm                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::ResetVideoSettings(bool* confirm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ResetVideoSettings");

	UWidget_Options_C_ResetVideoSettings_Params params;
	params.confirm = confirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::OnEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnEscape");

	UWidget_Options_C_OnEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SaveChanges
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          confirm                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::SaveChanges(bool* confirm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SaveChanges");

	UWidget_Options_C_SaveChanges_Params params;
	params.confirm = confirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.DoVolumeThings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         VolumeThingsValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::DoVolumeThings(float* VolumeThingsValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.DoVolumeThings");

	UWidget_Options_C_DoVolumeThings_Params params;
	params.VolumeThingsValue = VolumeThingsValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnFOVChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewFOV                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::OnFOVChanged(float* NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnFOVChanged");

	UWidget_Options_C_OnFOVChanged_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ShowConfirmResetPopup
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ShowConfirmResetPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ShowConfirmResetPopup");

	UWidget_Options_C_ShowConfirmResetPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_Options_C::BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWidget_Options_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_Options_C::BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWidget_Options_C_BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ShowConfirmChangesPopup
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ShowConfirmChangesPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ShowConfirmChangesPopup");

	UWidget_Options_C_ShowConfirmChangesPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_Options_C::BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWidget_Options_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.Init
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.Init");

	UWidget_Options_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnMotionBlurChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::OnMotionBlurChecked(bool* Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnMotionBlurChecked");

	UWidget_Options_C_OnMotionBlurChecked_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                oldWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                newWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Options_C::BndEvt__mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature(class UWidget** oldWidget, class UWidget** newWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature");

	UWidget_Options_C_BndEvt__mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature_Params params;
	params.oldWidget = oldWidget;
	params.newWidget = newWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.AntiAliasNext
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::AntiAliasNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.AntiAliasNext");

	UWidget_Options_C_AntiAliasNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.AntiAliasPrevious
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::AntiAliasPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.AntiAliasPrevious");

	UWidget_Options_C_AntiAliasPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.NetworkQualityPrevious
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::NetworkQualityPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.NetworkQualityPrevious");

	UWidget_Options_C_NetworkQualityPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.NetworkQualityNext
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::NetworkQualityNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.NetworkQualityNext");

	UWidget_Options_C_NetworkQualityNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SaveSettings
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SaveSettings");

	UWidget_Options_C_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnMenuExit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                prevMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          noAnimation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::OnMenuExit(class UWidget** prevMenu, bool* noAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnMenuExit");

	UWidget_Options_C_OnMenuExit_Params params;
	params.prevMenu = prevMenu;
	params.noAnimation = noAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.CheckResolutionChanges
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::CheckResolutionChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.CheckResolutionChanges");

	UWidget_Options_C_CheckResolutionChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ResolutionChangedAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          confirm                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::ResolutionChangedAccepted(bool* confirm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ResolutionChangedAccepted");

	UWidget_Options_C_ResolutionChangedAccepted_Params params;
	params.confirm = confirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OpenRequireRestartIfRequired
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::OpenRequireRestartIfRequired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OpenRequireRestartIfRequired");

	UWidget_Options_C_OpenRequireRestartIfRequired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.PreConstruct");

	UWidget_Options_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Options_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.Destruct");

	UWidget_Options_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.RevertUnsavedChanges
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::RevertUnsavedChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.RevertUnsavedChanges");

	UWidget_Options_C_RevertUnsavedChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Options_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.Construct");

	UWidget_Options_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ExecuteUbergraph_Widget_Options
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Options_C::ExecuteUbergraph_Widget_Options(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ExecuteUbergraph_Widget_Options");

	UWidget_Options_C_ExecuteUbergraph_Widget_Options_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnBackClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::OnBackClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnBackClicked__DelegateSignature");

	UWidget_Options_C_OnBackClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
