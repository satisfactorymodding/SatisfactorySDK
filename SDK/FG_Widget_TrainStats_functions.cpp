// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TrainStats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TrainStats.Widget_TrainStats_C.UpdateDockingButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETrainDockingState*            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStats_C::UpdateDockingButton(ETrainDockingState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.UpdateDockingButton");

	UWidget_TrainStats_C_UpdateDockingButton_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mTrainName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_TrainStats_C::SetTitle(struct FText* mTrainName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.SetTitle");

	UWidget_TrainStats_C_SetTitle_Params params;
	params.mTrainName = mTrainName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.BndEvt__mTrainNameInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStats_C::BndEvt__mTrainNameInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.BndEvt__mTrainNameInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");

	UWidget_TrainStats_C_BndEvt__mTrainNameInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStats_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.PreConstruct");

	UWidget_TrainStats_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TrainStats_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.Destruct");

	UWidget_TrainStats_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SelfDrivingEnabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ETrainDockingState*            DockingState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStats_C::Init(bool* SelfDrivingEnabled, ETrainDockingState* DockingState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.Init");

	UWidget_TrainStats_C_Init_Params params;
	params.SelfDrivingEnabled = SelfDrivingEnabled;
	params.DockingState = DockingState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.BndEvt__Widget_StandardButton_Togglable_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsTrue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStats_C::BndEvt__Widget_StandardButton_Togglable_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(bool* IsTrue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.BndEvt__Widget_StandardButton_Togglable_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");

	UWidget_TrainStats_C_BndEvt__Widget_StandardButton_Togglable_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params params;
	params.IsTrue = IsTrue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWidget_TrainStats_C::BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWidget_TrainStats_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.ExecuteUbergraph_Widget_TrainStats
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStats_C::ExecuteUbergraph_Widget_TrainStats(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.ExecuteUbergraph_Widget_TrainStats");

	UWidget_TrainStats_C_ExecuteUbergraph_Widget_TrainStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.OnDockClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_TrainStats_C::OnDockClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.OnDockClicked__DelegateSignature");

	UWidget_TrainStats_C_OnDockClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.OnAutopilotChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SelfDrivingEnabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStats_C::OnAutopilotChanged__DelegateSignature(bool* SelfDrivingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.OnAutopilotChanged__DelegateSignature");

	UWidget_TrainStats_C_OnAutopilotChanged__DelegateSignature_Params params;
	params.SelfDrivingEnabled = SelfDrivingEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStats.Widget_TrainStats_C.OnNameChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mName                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_TrainStats_C::OnNameChanged__DelegateSignature(struct FText* mName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStats.Widget_TrainStats_C.OnNameChanged__DelegateSignature");

	UWidget_TrainStats_C_OnNameChanged__DelegateSignature_Params params;
	params.mName = mName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
