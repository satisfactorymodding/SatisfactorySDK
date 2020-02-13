// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_MAM_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_MAM.BPW_MAM_C.WidgetFactory
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 PopupClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUserWidget*>     out_widgets                    (Parm, OutParm, ZeroConstructor)

void UBPW_MAM_C::WidgetFactory(class UClass** PopupClass, TArray<class UUserWidget*>* out_widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.WidgetFactory");

	UBPW_MAM_C_WidgetFactory_Params params;
	params.PopupClass = PopupClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_widgets != nullptr)
		*out_widgets = params.out_widgets;
}


// Function BPW_MAM.BPW_MAM_C.SchematicsPurchased
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAM_C::SchematicsPurchased(class UClass** schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.SchematicsPurchased");

	UBPW_MAM_C_SchematicsPurchased_Params params;
	params.schematic = schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.OnHarddriveButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_ListButton_C**   ListButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_MAM_C::OnHarddriveButtonClicked(int* Index, class UWidget_ListButton_C** ListButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.OnHarddriveButtonClicked");

	UBPW_MAM_C_OnHarddriveButtonClicked_Params params;
	params.Index = Index;
	params.ListButton = ListButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.OnPopupClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          confirm                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAM_C::OnPopupClosed(bool* confirm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.OnPopupClosed");

	UBPW_MAM_C_OnPopupClosed_Params params;
	params.confirm = confirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.HandleCompletedResearch
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAM_C::HandleCompletedResearch(class UClass** schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.HandleCompletedResearch");

	UBPW_MAM_C_HandleCompletedResearch_Params params;
	params.schematic = schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.OnResearchStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EResearchState*                researchState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAM_C::OnResearchStateChanged(EResearchState* researchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.OnResearchStateChanged");

	UBPW_MAM_C_OnResearchStateChanged_Params params;
	params.researchState = researchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.ConvertFloatTimeToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UBPW_MAM_C::ConvertFloatTimeToText(float* Seconds, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.ConvertFloatTimeToText");

	UBPW_MAM_C_ConvertFloatTimeToText_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPW_MAM.BPW_MAM_C.UpdateResearchTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_MAM_C::UpdateResearchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.UpdateResearchTimer");

	UBPW_MAM_C_UpdateResearchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.OnGetTreeInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBPW_MAM_C::OnGetTreeInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.OnGetTreeInfoWidget");

	UBPW_MAM_C_OnGetTreeInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_MAM.BPW_MAM_C.OnListButtonUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_ListButton_C**   ListButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_MAM_C::OnListButtonUnhovered(int* Index, class UWidget_ListButton_C** ListButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.OnListButtonUnhovered");

	UBPW_MAM_C_OnListButtonUnhovered_Params params;
	params.Index = Index;
	params.ListButton = ListButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.OnListButtonHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_ListButton_C**   ListButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_MAM_C::OnListButtonHovered(int* Index, class UWidget_ListButton_C** ListButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.OnListButtonHovered");

	UBPW_MAM_C_OnListButtonHovered_Params params;
	params.Index = Index;
	params.ListButton = ListButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.OnResearchStarted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAM_C::OnResearchStarted(class UClass** schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.OnResearchStarted");

	UBPW_MAM_C_OnResearchStarted_Params params;
	params.schematic = schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.InitResearchListButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_MAM_C::InitResearchListButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.InitResearchListButtons");

	UBPW_MAM_C_InitResearchListButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.DropInventorySlotStack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventorySlot_C** InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WasStackMoved                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_MAM_C::DropInventorySlotStack(class UWidget_InventorySlot_C** InventorySlot, bool* WasStackMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.DropInventorySlotStack");

	UBPW_MAM_C_DropInventorySlotStack_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStackMoved != nullptr)
		*WasStackMoved = params.WasStackMoved;
}


// Function BPW_MAM.BPW_MAM_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_MAM_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.Cleanup");

	UBPW_MAM_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_MAM_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.Destruct");

	UBPW_MAM_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.Init
// (Event, Public, BlueprintEvent)

void UBPW_MAM_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.Init");

	UBPW_MAM_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_MAM_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.Construct");

	UBPW_MAM_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.OnResearchListButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_ListButton_C**   ListButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_MAM_C::OnResearchListButtonClicked(int* Index, class UWidget_ListButton_C** ListButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.OnResearchListButtonClicked");

	UBPW_MAM_C_OnResearchListButtonClicked_Params params;
	params.Index = Index;
	params.ListButton = ListButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.BndEvt__BPW_MAMTree_Ingame_K2Node_ComponentBoundEvent_1_OnResearchSelectedSchematic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAM_C::BndEvt__BPW_MAMTree_Ingame_K2Node_ComponentBoundEvent_1_OnResearchSelectedSchematic__DelegateSignature(class UClass** schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.BndEvt__BPW_MAMTree_Ingame_K2Node_ComponentBoundEvent_1_OnResearchSelectedSchematic__DelegateSignature");

	UBPW_MAM_C_BndEvt__BPW_MAMTree_Ingame_K2Node_ComponentBoundEvent_1_OnResearchSelectedSchematic__DelegateSignature_Params params;
	params.schematic = schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.NotifyPopupClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 PopupClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           exitCode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAM_C::NotifyPopupClosed(class UClass** PopupClass, int* exitCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.NotifyPopupClosed");

	UBPW_MAM_C_NotifyPopupClosed_Params params;
	params.PopupClass = PopupClass;
	params.exitCode = exitCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.BndEvt__BPW_MAM_HardDriveScanner_K2Node_ComponentBoundEvent_2_OnScanStarted__DelegateSignature
// (BlueprintEvent)

void UBPW_MAM_C::BndEvt__BPW_MAM_HardDriveScanner_K2Node_ComponentBoundEvent_2_OnScanStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.BndEvt__BPW_MAM_HardDriveScanner_K2Node_ComponentBoundEvent_2_OnScanStarted__DelegateSignature");

	UBPW_MAM_C_BndEvt__BPW_MAM_HardDriveScanner_K2Node_ComponentBoundEvent_2_OnScanStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAM.BPW_MAM_C.ExecuteUbergraph_BPW_MAM
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAM_C::ExecuteUbergraph_BPW_MAM(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAM.BPW_MAM_C.ExecuteUbergraph_BPW_MAM");

	UBPW_MAM_C_ExecuteUbergraph_BPW_MAM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
