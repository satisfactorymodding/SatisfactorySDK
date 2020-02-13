// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Map_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Map.Widget_Map_C.DiscardInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Map_C::DiscardInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.DiscardInput");

	UWidget_Map_C_DiscardInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.ListenForInputActions
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Map_C::ListenForInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.ListenForInputActions");

	UWidget_Map_C_ListenForInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.UpdateObjectOnMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::UpdateObjectOnMap(class UFGActorRepresentation** actorRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.UpdateObjectOnMap");

	UWidget_Map_C_UpdateObjectOnMap_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.CenterMapOnPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              normalizedWorldLocation        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::CenterMapOnPlayer(struct FVector2D* normalizedWorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.CenterMapOnPlayer");

	UWidget_Map_C_CenterMapOnPlayer_Params params;
	params.normalizedWorldLocation = normalizedWorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnIconUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_MapObject_C**    MapObject                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Map_C::OnIconUnhover(class UWidget_MapObject_C** MapObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnIconUnhover");

	UWidget_Map_C_OnIconUnhover_Params params;
	params.MapObject = MapObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnIconHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_MapObject_C**    MapObject                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Map_C::OnIconHover(class UWidget_MapObject_C** MapObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnIconHover");

	UWidget_Map_C_OnIconHover_Params params;
	params.MapObject = MapObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.AddObjectToMap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_MapObject_C*     WidgetMapObject                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Map_C::AddObjectToMap(class UFGActorRepresentation** actorRepresentation, class UWidget_MapObject_C** WidgetMapObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.AddObjectToMap");

	UWidget_Map_C_AddObjectToMap_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetMapObject != nullptr)
		*WidgetMapObject = params.WidgetMapObject;
}


// Function Widget_Map.Widget_Map_C.RemoveObjectFromMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** ActorRepresentationToRemove    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::RemoveObjectFromMap(class UFGActorRepresentation** ActorRepresentationToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.RemoveObjectFromMap");

	UWidget_Map_C_RemoveObjectFromMap_Params params;
	params.ActorRepresentationToRemove = ActorRepresentationToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.ClearScrollMap
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Map_C::ClearScrollMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.ClearScrollMap");

	UWidget_Map_C_ClearScrollMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_Map_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnMouseButtonUp");

	UWidget_Map_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Map.Widget_Map_C.ScrollMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              MouseOrigin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              MapOrigin                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::ScrollMap(struct FVector2D* MouseOrigin, struct FVector2D* MapOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.ScrollMap");

	UWidget_Map_C_ScrollMap_Params params;
	params.MouseOrigin = MouseOrigin;
	params.MapOrigin = MapOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_Map_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnMouseButtonDown");

	UWidget_Map_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Map.Widget_Map_C.ZoomMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ZoomValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::ZoomMap(struct FVector2D* ZoomValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.ZoomMap");

	UWidget_Map_C_ZoomMap_Params params;
	params.ZoomValue = ZoomValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWidget_Map_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnMouseWheel");

	UWidget_Map_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Map.Widget_Map_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_Map_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnMouseLeave");

	UWidget_Map_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Map_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.Construct");

	UWidget_Map_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Map_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnFocusLost");

	UWidget_Map_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.Tick");

	UWidget_Map_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnObjectAddedToMap
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::OnObjectAddedToMap(class UFGActorRepresentation** actorRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnObjectAddedToMap");

	UWidget_Map_C_OnObjectAddedToMap_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnObjectRemovedFromMap
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::OnObjectRemovedFromMap(class UFGActorRepresentation** actorRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnObjectRemovedFromMap");

	UWidget_Map_C_OnObjectRemovedFromMap_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Map_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.Destruct");

	UWidget_Map_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnObjectUpdatedOnMap
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::OnObjectUpdatedOnMap(class UFGActorRepresentation** actorRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnObjectUpdatedOnMap");

	UWidget_Map_C_OnObjectUpdatedOnMap_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnMapCentered
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D*              normalizedWorldLocation        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::OnMapCentered(struct FVector2D* normalizedWorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnMapCentered");

	UWidget_Map_C_OnMapCentered_Params params;
	params.normalizedWorldLocation = normalizedWorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.ExecuteUbergraph_Widget_Map
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::ExecuteUbergraph_Widget_Map(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.ExecuteUbergraph_Widget_Map");

	UWidget_Map_C_ExecuteUbergraph_Widget_Map_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnObjectRemovedFromMapDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** ActorRespresentation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::OnObjectRemovedFromMapDispatch__DelegateSignature(class UFGActorRepresentation** ActorRespresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnObjectRemovedFromMapDispatch__DelegateSignature");

	UWidget_Map_C_OnObjectRemovedFromMapDispatch__DelegateSignature_Params params;
	params.ActorRespresentation = ActorRespresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnObjectUpdatedOnMapDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Map_C::OnObjectUpdatedOnMapDispatch__DelegateSignature(class UFGActorRepresentation** actorRepresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnObjectUpdatedOnMapDispatch__DelegateSignature");

	UWidget_Map_C_OnObjectUpdatedOnMapDispatch__DelegateSignature_Params params;
	params.actorRepresentation = actorRepresentation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.OnObjectAddedToMapDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGActorRepresentation** actorRepresentation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_MapObject_C**    WidgetMapObject                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Map_C::OnObjectAddedToMapDispatch__DelegateSignature(class UFGActorRepresentation** actorRepresentation, class UWidget_MapObject_C** WidgetMapObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.OnObjectAddedToMapDispatch__DelegateSignature");

	UWidget_Map_C_OnObjectAddedToMapDispatch__DelegateSignature_Params params;
	params.actorRepresentation = actorRepresentation;
	params.WidgetMapObject = WidgetMapObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Map.Widget_Map_C.ZoomChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Map_C::ZoomChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Map.Widget_Map_C.ZoomChanged__DelegateSignature");

	UWidget_Map_C_ZoomChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
