// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_DirectionalSubtitles_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ForceDestroySubtitle
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_DirectionalSubtitles_C::ForceDestroySubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ForceDestroySubtitle");

	UWidget_DirectionalSubtitles_C_ForceDestroySubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnAnimDestruct
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_DirectionalSubtitles_C::OnAnimDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnAnimDestruct");

	UWidget_DirectionalSubtitles_C_OnAnimDestruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetSubtitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mSubtitle                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_DirectionalSubtitles_C::SetSubtitleText(struct FText* mSubtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetSubtitleText");

	UWidget_DirectionalSubtitles_C_SetSubtitleText_Params params;
	params.mSubtitle = mSubtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.UpdateSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mSubtitle                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DirectionalSubtitles_C::UpdateSubtitle(struct FText* mSubtitle, float* Duration, bool* UseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.UpdateSubtitle");

	UWidget_DirectionalSubtitles_C_UpdateSubtitle_Params params;
	params.mSubtitle = mSubtitle;
	params.Duration = Duration;
	params.UseDuration = UseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetDirectionVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_DirectionalSubtitles_C::SetDirectionVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.SetDirectionVisibility");

	UWidget_DirectionalSubtitles_C_SetDirectionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.GetInstigatorAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWidget_DirectionalSubtitles_C::GetInstigatorAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.GetInstigatorAngle");

	UWidget_DirectionalSubtitles_C_GetInstigatorAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DirectionalSubtitles_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Construct");

	UWidget_DirectionalSubtitles_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Event UpdateDestructionTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DirectionalSubtitles_C::Event_UpdateDestructionTimer(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Event UpdateDestructionTimer");

	UWidget_DirectionalSubtitles_C_Event_UpdateDestructionTimer_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DirectionalSubtitles_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.Destruct");

	UWidget_DirectionalSubtitles_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.On Instigator End Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DirectionalSubtitles_C::On_Instigator_End_Play(class AActor** Actor, TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.On Instigator End Play");

	UWidget_DirectionalSubtitles_C_On_Instigator_End_Play_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ExecuteUbergraph_Widget_DirectionalSubtitles
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DirectionalSubtitles_C::ExecuteUbergraph_Widget_DirectionalSubtitles(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.ExecuteUbergraph_Widget_DirectionalSubtitles");

	UWidget_DirectionalSubtitles_C_ExecuteUbergraph_Widget_DirectionalSubtitles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnDestruct__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_DirectionalSubtitles_C** InstigatingSubtitle            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_DirectionalSubtitles_C::OnDestruct__DelegateSignature(class UWidget_DirectionalSubtitles_C** InstigatingSubtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitles.Widget_DirectionalSubtitles_C.OnDestruct__DelegateSignature");

	UWidget_DirectionalSubtitles_C_OnDestruct__DelegateSignature_Params params;
	params.InstigatingSubtitle = InstigatingSubtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
