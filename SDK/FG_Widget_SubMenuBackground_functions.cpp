// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_SubMenuBackground_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnSpawnAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           OverwritePanelWIdget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_SubMenuBackground_C::OnSpawnAnim(class UPanelWidget** OverwritePanelWIdget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnSpawnAnim");

	UWidget_SubMenuBackground_C_OnSpawnAnim_Params params;
	params.OverwritePanelWIdget = OverwritePanelWIdget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SubMenuBackground_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.Construct");

	UWidget_SubMenuBackground_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayListSpawnAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           OverwritePanelWIdget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_SubMenuBackground_C::PlayListSpawnAnim(class UPanelWidget** OverwritePanelWIdget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayListSpawnAnim");

	UWidget_SubMenuBackground_C_PlayListSpawnAnim_Params params;
	params.OverwritePanelWIdget = OverwritePanelWIdget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SubMenuBackground_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PreConstruct");

	UWidget_SubMenuBackground_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnListSpawnAnim
// (BlueprintCallable, BlueprintEvent)

void UWidget_SubMenuBackground_C::OnListSpawnAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.OnListSpawnAnim");

	UWidget_SubMenuBackground_C_OnListSpawnAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayBackgroundSpawnAnim
// (BlueprintCallable, BlueprintEvent)

void UWidget_SubMenuBackground_C::PlayBackgroundSpawnAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.PlayBackgroundSpawnAnim");

	UWidget_SubMenuBackground_C_PlayBackgroundSpawnAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.ExecuteUbergraph_Widget_SubMenuBackground
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SubMenuBackground_C::ExecuteUbergraph_Widget_SubMenuBackground(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SubMenuBackground.Widget_SubMenuBackground_C.ExecuteUbergraph_Widget_SubMenuBackground");

	UWidget_SubMenuBackground_C_ExecuteUbergraph_Widget_SubMenuBackground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
