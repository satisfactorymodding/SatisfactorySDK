// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Locomotive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Locomotive.BP_Locomotive_C.GetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABP_Locomotive_C::GetActorCompassViewDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorCompassViewDistance");

	ABP_Locomotive_C_GetActorCompassViewDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.SetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance*          compassViewDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABP_Locomotive_C::SetActorCompassViewDistance(ECompassViewDistance* compassViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.SetActorCompassViewDistance");

	ABP_Locomotive_C_SetActorCompassViewDistance_Params params;
	params.compassViewDistance = compassViewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.SetActorRepresentationText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  newText                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Locomotive_C::SetActorRepresentationText(struct FText* newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.SetActorRepresentationText");

	ABP_Locomotive_C_SetActorRepresentationText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.UpdateRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::UpdateRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.UpdateRepresentation");

	ABP_Locomotive_C_UpdateRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorFogOfWarRevealRadius
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Locomotive_C::GetActorFogOfWarRevealRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorFogOfWarRevealRadius");

	ABP_Locomotive_C_GetActorFogOfWarRevealRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorFogOfWarRevealType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFogOfWarRevealType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFogOfWarRevealType ABP_Locomotive_C::GetActorFogOfWarRevealType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorFogOfWarRevealType");

	ABP_Locomotive_C_GetActorFogOfWarRevealType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorRepresentationColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ABP_Locomotive_C::GetActorRepresentationColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorRepresentationColor");

	ABP_Locomotive_C_GetActorRepresentationColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorRepresentationText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_Locomotive_C::GetActorRepresentationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorRepresentationText");

	ABP_Locomotive_C_GetActorRepresentationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorRepresentationTexture
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABP_Locomotive_C::GetActorRepresentationTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorRepresentationTexture");

	ABP_Locomotive_C_GetActorRepresentationTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorRepresentationType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERepresentationType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERepresentationType ABP_Locomotive_C::GetActorRepresentationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorRepresentationType");

	ABP_Locomotive_C_GetActorRepresentationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowInCompass
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::GetActorShouldShowInCompass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowInCompass");

	ABP_Locomotive_C_GetActorShouldShowInCompass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.AddAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::AddAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.AddAsRepresentation");

	ABP_Locomotive_C_AddAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowOnMap
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::GetActorShouldShowOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetActorShouldShowOnMap");

	ABP_Locomotive_C_GetActorShouldShowOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetRealActorLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Locomotive_C::GetRealActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetRealActorLocation");

	ABP_Locomotive_C_GetRealActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.GetRealActorRotation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ABP_Locomotive_C::GetRealActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GetRealActorRotation");

	ABP_Locomotive_C_GetRealActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.IsActorStatic
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::IsActorStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.IsActorStatic");

	ABP_Locomotive_C_IsActorStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.RemoveAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Locomotive_C::RemoveAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.RemoveAsRepresentation");

	ABP_Locomotive_C_RemoveAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Use_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_Use_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Use_K2Node_InputActionEvent_4");

	ABP_Locomotive_C_InpActEvt_Use_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_Jump_Drift_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_3");

	ABP_Locomotive_C_InpActEvt_Jump_Drift_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_Jump_Drift_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_2");

	ABP_Locomotive_C_InpActEvt_Jump_Drift_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1");

	ABP_Locomotive_C_InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	ABP_Locomotive_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Locomotive_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	ABP_Locomotive_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.SetActorRepresentationColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::SetActorRepresentationColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.SetActorRepresentationColor");

	ABP_Locomotive_C_SetActorRepresentationColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ReceiveTick");

	ABP_Locomotive_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.UpdateCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.UpdateCamera");

	ABP_Locomotive_C_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Locomotive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ReceiveBeginPlay");

	ABP_Locomotive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Locomotive_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ReceiveDestroyed");

	ABP_Locomotive_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.Server_Leave
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::Server_Leave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.Server_Leave");

	ABP_Locomotive_C_Server_Leave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1");

	ABP_Locomotive_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2");

	ABP_Locomotive_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ReceiveUnpossessed");

	ABP_Locomotive_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ReceivePossessed");

	ABP_Locomotive_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.MultiCast_TrainHorn_01
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::MultiCast_TrainHorn_01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.MultiCast_TrainHorn_01");

	ABP_Locomotive_C_MultiCast_TrainHorn_01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.MultiCast_TrainHorn_01_Stop
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::MultiCast_TrainHorn_01_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.MultiCast_TrainHorn_01_Stop");

	ABP_Locomotive_C_MultiCast_TrainHorn_01_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.MultiCast_TrainHorn_02
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::MultiCast_TrainHorn_02()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.MultiCast_TrainHorn_02");

	ABP_Locomotive_C_MultiCast_TrainHorn_02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.MultiCast_TrainHorn_02_Stop
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::MultiCast_TrainHorn_02_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.MultiCast_TrainHorn_02_Stop");

	ABP_Locomotive_C_MultiCast_TrainHorn_02_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.Server_Horn_01
// (BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::Server_Horn_01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.Server_Horn_01");

	ABP_Locomotive_C_Server_Horn_01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.Server_Horn_01_Stop
// (BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::Server_Horn_01_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.Server_Horn_01_Stop");

	ABP_Locomotive_C_Server_Horn_01_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.Server_Horn_02
// (BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::Server_Horn_02()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.Server_Horn_02");

	ABP_Locomotive_C_Server_Horn_02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.Server_Horn_02_Stop
// (BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::Server_Horn_02_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.Server_Horn_02_Stop");

	ABP_Locomotive_C_Server_Horn_02_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.OnNameChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::OnNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.OnNameChanged");

	ABP_Locomotive_C_OnNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.UpdateTrainName
// (BlueprintCallable, BlueprintEvent)

void ABP_Locomotive_C::UpdateTrainName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.UpdateTrainName");

	ABP_Locomotive_C_UpdateTrainName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABP_Locomotive_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.GainedSignificance");

	ABP_Locomotive_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABP_Locomotive_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.LostSignificance");

	ABP_Locomotive_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Locomotive.BP_Locomotive_C.ExecuteUbergraph_BP_Locomotive
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Locomotive_C::ExecuteUbergraph_BP_Locomotive(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Locomotive.BP_Locomotive_C.ExecuteUbergraph_BP_Locomotive");

	ABP_Locomotive_C_ExecuteUbergraph_BP_Locomotive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
