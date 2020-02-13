// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_MapCompass_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.UpdateRadarTowerTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_MapCompass_Icon_C::UpdateRadarTowerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.UpdateRadarTowerTime");

	UWidget_MapCompass_Icon_C_UpdateRadarTowerTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::SetScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetScale");

	UWidget_MapCompass_Icon_C_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.UpdateActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          mIsCompassObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::UpdateActor(class UFGActorRepresentation** actorRepresentation, bool* mIsCompassObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.UpdateActor");

	UWidget_MapCompass_Icon_C_UpdateActor_Params params;
	params.actorRepresentation = actorRepresentation;
	params.mIsCompassObject = mIsCompassObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERepresentationType*           mRepresentationType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::SetIconType(ERepresentationType* mRepresentationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetIconType");

	UWidget_MapCompass_Icon_C_SetIconType_Params params;
	params.mRepresentationType = mRepresentationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.TestFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERepresentationType*           mRepresentationType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::TestFunction(struct FLinearColor* Color, ERepresentationType* mRepresentationType, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.TestFunction");

	UWidget_MapCompass_Icon_C_TestFunction_Params params;
	params.Color = Color;
	params.mRepresentationType = mRepresentationType;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mDescriptionText               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_MapCompass_Icon_C::SetDescription(struct FText* mDescriptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetDescription");

	UWidget_MapCompass_Icon_C_SetDescription_Params params;
	params.mDescriptionText = mDescriptionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetRepresentatoinType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERepresentationType*           mRepresentationType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::SetRepresentatoinType(ERepresentationType* mRepresentationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetRepresentatoinType");

	UWidget_MapCompass_Icon_C_SetRepresentatoinType_Params params;
	params.mRepresentationType = mRepresentationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::SetRotation(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetRotation");

	UWidget_MapCompass_Icon_C_SetRotation_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::SetIcon(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetIcon");

	UWidget_MapCompass_Icon_C_SetIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::SetColor(struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.SetColor");

	UWidget_MapCompass_Icon_C_SetColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_MapCompass_Icon_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWidget_MapCompass_Icon_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.PreConstruct");

	UWidget_MapCompass_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.DynamicDescriptionUpdate
// (BlueprintCallable, BlueprintEvent)

void UWidget_MapCompass_Icon_C::DynamicDescriptionUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.DynamicDescriptionUpdate");

	UWidget_MapCompass_Icon_C_DynamicDescriptionUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_MapCompass_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.Construct");

	UWidget_MapCompass_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWidget_MapCompass_Icon_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWidget_MapCompass_Icon_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.ExecuteUbergraph_Widget_MapCompass_Icon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_MapCompass_Icon_C::ExecuteUbergraph_Widget_MapCompass_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.ExecuteUbergraph_Widget_MapCompass_Icon");

	UWidget_MapCompass_Icon_C_ExecuteUbergraph_Widget_MapCompass_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_MapCompass_Icon_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnUnhovered__DelegateSignature");

	UWidget_MapCompass_Icon_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_MapCompass_Icon_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MapCompass_Icon.Widget_MapCompass_Icon_C.OnHovered__DelegateSignature");

	UWidget_MapCompass_Icon_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
