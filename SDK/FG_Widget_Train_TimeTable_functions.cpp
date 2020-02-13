// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Train_TimeTable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.SetCurrentStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Train_TimeTable_Rule_C** RuleWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Train_TimeTable_C::SetCurrentStop(class UWidget_Train_TimeTable_Rule_C** RuleWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.SetCurrentStop");

	UWidget_Train_TimeTable_C_SetCurrentStop_Params params;
	params.RuleWidget = RuleWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.ShowApplyChangesPrompt
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Train_TimeTable_C::ShowApplyChangesPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.ShowApplyChangesPrompt");

	UWidget_Train_TimeTable_C_ShowApplyChangesPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.CloseAvailableStationsWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Train_TimeTable_C::CloseAvailableStationsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.CloseAvailableStationsWidget");

	UWidget_Train_TimeTable_C_CloseAvailableStationsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.MoveRule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Train_TimeTable_Rule_C** RuleWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          MoveDown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Train_TimeTable_C::MoveRule(class UWidget_Train_TimeTable_Rule_C** RuleWidget, bool* MoveDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.MoveRule");

	UWidget_Train_TimeTable_C_MoveRule_Params params;
	params.RuleWidget = RuleWidget;
	params.MoveDown = MoveDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.SetSelectedRule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Train_TimeTable_Rule_C** SelectedRule                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Train_TimeTable_C::SetSelectedRule(class UWidget_Train_TimeTable_Rule_C** SelectedRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.SetSelectedRule");

	UWidget_Train_TimeTable_C_SetSelectedRule_Params params;
	params.SelectedRule = SelectedRule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.AddRule
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTrainStationIdentifier** mStation                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWidget_Train_TimeTable_C::AddRule(class AFGTrainStationIdentifier** mStation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.AddRule");

	UWidget_Train_TimeTable_C_AddRule_Params params;
	params.mStation = mStation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.UpdateStopsOnServer
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Train_TimeTable_C::UpdateStopsOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.UpdateStopsOnServer");

	UWidget_Train_TimeTable_C_UpdateStopsOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.GenerateNewStopArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Train_TimeTable_C::GenerateNewStopArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.GenerateNewStopArray");

	UWidget_Train_TimeTable_C_GenerateNewStopArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.PopulateAvailableStations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Train_TimeTable_C::PopulateAvailableStations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.PopulateAvailableStations");

	UWidget_Train_TimeTable_C_PopulateAvailableStations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.PopulateTimeTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Train_TimeTable_C::PopulateTimeTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.PopulateTimeTable");

	UWidget_Train_TimeTable_C_PopulateTimeTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.UpdateTrainStations
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Train_TimeTable_C::UpdateTrainStations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.UpdateTrainStations");

	UWidget_Train_TimeTable_C_UpdateTrainStations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTrain**               Train                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Train_TimeTable_C::Init(class AFGTrain** Train)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.Init");

	UWidget_Train_TimeTable_C_Init_Params params;
	params.Train = Train;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.BndEvt__Widget_Splitter_OutputList_K2Node_ComponentBoundEvent_0_OnAddClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_Train_TimeTable_C::BndEvt__Widget_Splitter_OutputList_K2Node_ComponentBoundEvent_0_OnAddClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.BndEvt__Widget_Splitter_OutputList_K2Node_ComponentBoundEvent_0_OnAddClicked__DelegateSignature");

	UWidget_Train_TimeTable_C_BndEvt__Widget_Splitter_OutputList_K2Node_ComponentBoundEvent_0_OnAddClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.OnRuleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Train_TimeTable_Rule_C** RuleWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Train_TimeTable_C::OnRuleClicked(class UWidget_Train_TimeTable_Rule_C** RuleWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.OnRuleClicked");

	UWidget_Train_TimeTable_C_OnRuleClicked_Params params;
	params.RuleWidget = RuleWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.UpdateStation
// (BlueprintCallable, BlueprintEvent)

void UWidget_Train_TimeTable_C::UpdateStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.UpdateStation");

	UWidget_Train_TimeTable_C_UpdateStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.UpdateAvailableStationsSelectedIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget_ListButton_C**   ListButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Train_TimeTable_C::UpdateAvailableStationsSelectedIndex(int* Index, class UWidget_ListButton_C** ListButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.UpdateAvailableStationsSelectedIndex");

	UWidget_Train_TimeTable_C_UpdateAvailableStationsSelectedIndex_Params params;
	params.Index = Index;
	params.ListButton = ListButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.OnRuleDeleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Train_TimeTable_Rule_C** RuleWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Train_TimeTable_C::OnRuleDeleted(class UWidget_Train_TimeTable_Rule_C** RuleWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.OnRuleDeleted");

	UWidget_Train_TimeTable_C_OnRuleDeleted_Params params;
	params.RuleWidget = RuleWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Train_TimeTable_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.Destruct");

	UWidget_Train_TimeTable_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.OnRuleMoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Train_TimeTable_Rule_C** RuleWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Train_TimeTable_C::OnRuleMoveUp(class UWidget_Train_TimeTable_Rule_C** RuleWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.OnRuleMoveUp");

	UWidget_Train_TimeTable_C_OnRuleMoveUp_Params params;
	params.RuleWidget = RuleWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.OnRuleMoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Train_TimeTable_Rule_C** RuleWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_Train_TimeTable_C::OnRuleMoveDown(class UWidget_Train_TimeTable_Rule_C** RuleWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.OnRuleMoveDown");

	UWidget_Train_TimeTable_C_OnRuleMoveDown_Params params;
	params.RuleWidget = RuleWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.CheckCurrentStop
// (BlueprintCallable, BlueprintEvent)

void UWidget_Train_TimeTable_C::CheckCurrentStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.CheckCurrentStop");

	UWidget_Train_TimeTable_C_CheckCurrentStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.ExecuteUbergraph_Widget_Train_TimeTable
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Train_TimeTable_C::ExecuteUbergraph_Widget_Train_TimeTable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Train_TimeTable.Widget_Train_TimeTable_C.ExecuteUbergraph_Widget_Train_TimeTable");

	UWidget_Train_TimeTable_C_ExecuteUbergraph_Widget_Train_TimeTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
