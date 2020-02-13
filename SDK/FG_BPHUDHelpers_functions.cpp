// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPHUDHelpers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPHUDHelpers.BPHUDHelpers_C.GetDefaultRCO
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_RemoteCallObject_C*  RCO                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPHUDHelpers_C::STATIC_GetDefaultRCO(class APlayerController** Controller, class UObject** __WorldContext, class UBP_RemoteCallObject_C** RCO)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHUDHelpers.BPHUDHelpers_C.GetDefaultRCO");

	UBPHUDHelpers_C_GetDefaultRCO_Params params;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RCO != nullptr)
		*RCO = params.RCO;
}


// Function BPHUDHelpers.BPHUDHelpers_C.FindWidgetOfClass
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass**                 Windget                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGGameUI**              Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGInteractWidget*       Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPHUDHelpers_C::STATIC_FindWidgetOfClass(class UClass** Windget, class UFGGameUI** Target, class UObject** __WorldContext, class UFGInteractWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHUDHelpers.BPHUDHelpers_C.FindWidgetOfClass");

	UBPHUDHelpers_C_FindWidgetOfClass_Params params;
	params.Windget = Windget;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BPHUDHelpers.BPHUDHelpers_C.GetFGHud
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFGHUD*                  AsFGHUD                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPHUDHelpers_C::STATIC_GetFGHud(class AController** Controller, class UObject** __WorldContext, class AFGHUD** AsFGHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHUDHelpers.BPHUDHelpers_C.GetFGHud");

	UBPHUDHelpers_C_GetFGHud_Params params;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFGHUD != nullptr)
		*AsFGHUD = params.AsFGHUD;
}


// Function BPHUDHelpers.BPHUDHelpers_C.ShowHideHUD
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isMenuOpen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  OwningPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPHUDHelpers_C::STATIC_ShowHideHUD(bool* isMenuOpen, class APawn** OwningPawn, class AController** Controller, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHUDHelpers.BPHUDHelpers_C.ShowHideHUD");

	UBPHUDHelpers_C_ShowHideHUD_Params params;
	params.isMenuOpen = isMenuOpen;
	params.OwningPawn = OwningPawn;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPHUDHelpers.BPHUDHelpers_C.PopStackWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            instigatingController          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGInteractWidget**      Stack_Widget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPHUDHelpers_C::STATIC_PopStackWidget(class AController** instigatingController, class UFGInteractWidget** Stack_Widget, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHUDHelpers.BPHUDHelpers_C.PopStackWidget");

	UBPHUDHelpers_C_PopStackWidget_Params params;
	params.instigatingController = instigatingController;
	params.Stack_Widget = Stack_Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPHUDHelpers.BPHUDHelpers_C.PushStackWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            instigatingController          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFGInteractWidget**      stackWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPHUDHelpers_C::STATIC_PushStackWidget(class AController** instigatingController, class UFGInteractWidget** stackWidget, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHUDHelpers.BPHUDHelpers_C.PushStackWidget");

	UBPHUDHelpers_C_PushStackWidget_Params params;
	params.instigatingController = instigatingController;
	params.stackWidget = stackWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
