// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TrainStationNew_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TrainStationNew.Widget_TrainStationNew_C.CheckStationNameLengthAndValidity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StationNameIsValid             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStationNew_C::CheckStationNameLengthAndValidity(bool* StationNameIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.CheckStationNameLengthAndValidity");

	UWidget_TrainStationNew_C_CheckStationNameLengthAndValidity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StationNameIsValid != nullptr)
		*StationNameIsValid = params.StationNameIsValid;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetRandomInfoMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TrainStationNew_C::SetRandomInfoMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetRandomInfoMessage");

	UWidget_TrainStationNew_C_SetRandomInfoMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.UpdatePowerStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TrainStationNew_C::UpdatePowerStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.UpdatePowerStatus");

	UWidget_TrainStationNew_C_UpdatePowerStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.ShowLocomotiveMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGTrain**               mTrain                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStationNew_C::ShowLocomotiveMenu(class AFGTrain** mTrain)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.ShowLocomotiveMenu");

	UWidget_TrainStationNew_C_ShowLocomotiveMenu_Params params;
	params.mTrain = mTrain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.GenerateTrainList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_TrainStationNew_C::GenerateTrainList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.GenerateTrainList");

	UWidget_TrainStationNew_C_GenerateTrainList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.GetStationName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)

void UWidget_TrainStationNew_C::GetStationName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.GetStationName");

	UWidget_TrainStationNew_C_GetStationName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetStationName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_TrainStationNew_C::SetStationName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.SetStationName");

	UWidget_TrainStationNew_C_SetStationName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnGetPowerCircuit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGPowerCircuit*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFGPowerCircuit* UWidget_TrainStationNew_C::OnGetPowerCircuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnGetPowerCircuit");

	UWidget_TrainStationNew_C_OnGetPowerCircuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStationNew_C::BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");

	UWidget_TrainStationNew_C_BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_TrainButton_C**  Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_TrainStationNew_C::OnTrainButtonClicked(class UWidget_TrainButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainButtonClicked");

	UWidget_TrainStationNew_C_OnTrainButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnLocomotiveMenuClosed
// (BlueprintCallable, BlueprintEvent)

void UWidget_TrainStationNew_C::OnLocomotiveMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnLocomotiveMenuClosed");

	UWidget_TrainStationNew_C_OnLocomotiveMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainNameChanged
// (BlueprintCallable, BlueprintEvent)

void UWidget_TrainStationNew_C::OnTrainNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnTrainNameChanged");

	UWidget_TrainStationNew_C_OnTrainNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnPowerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStationNew_C::OnPowerChanged(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.OnPowerChanged");

	UWidget_TrainStationNew_C_OnPowerChanged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWidget_TrainStationNew_C::BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	UWidget_TrainStationNew_C_BndEvt__mStationNameInput_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.AutoScrollInfoMessage
// (BlueprintCallable, BlueprintEvent)

void UWidget_TrainStationNew_C::AutoScrollInfoMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.AutoScrollInfoMessage");

	UWidget_TrainStationNew_C_AutoScrollInfoMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TrainStationNew_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.Construct");

	UWidget_TrainStationNew_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TrainStationNew.Widget_TrainStationNew_C.ExecuteUbergraph_Widget_TrainStationNew
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_TrainStationNew_C::ExecuteUbergraph_Widget_TrainStationNew(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TrainStationNew.Widget_TrainStationNew_C.ExecuteUbergraph_Widget_TrainStationNew");

	UWidget_TrainStationNew_C_ExecuteUbergraph_Widget_TrainStationNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
