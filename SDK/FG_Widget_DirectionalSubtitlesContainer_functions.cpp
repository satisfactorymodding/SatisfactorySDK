// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_DirectionalSubtitlesContainer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.StopSubtitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWidget_DirectionalSubtitlesContainer_C::StopSubtitle(class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.StopSubtitle");

	UWidget_DirectionalSubtitlesContainer_C_StopSubtitle_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.GetFurthestActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_DirectionalSubtitlesContainer_C::GetFurthestActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.GetFurthestActor");

	UWidget_DirectionalSubtitlesContainer_C_GetFurthestActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.OnSubtitleDestruct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_DirectionalSubtitles_C** InstigatingSubtitle            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_DirectionalSubtitlesContainer_C::OnSubtitleDestruct(class UWidget_DirectionalSubtitles_C** InstigatingSubtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.OnSubtitleDestruct");

	UWidget_DirectionalSubtitlesContainer_C_OnSubtitleDestruct_Params params;
	params.InstigatingSubtitle = InstigatingSubtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.CreateSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DirectionalSubtitlesContainer_C::CreateSubtitle(struct FText* Subtitle, class AActor** Instigator, float* Duration, bool* UseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.CreateSubtitle");

	UWidget_DirectionalSubtitlesContainer_C_CreateSubtitle_Params params;
	params.Subtitle = Subtitle;
	params.Instigator = Instigator;
	params.Duration = Duration;
	params.UseDuration = UseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
