// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_WheeledVehicle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABP_WheeledVehicle_C::GetActorCompassViewDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorCompassViewDistance");

	ABP_WheeledVehicle_C_GetActorCompassViewDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.SetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance*          compassViewDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABP_WheeledVehicle_C::SetActorCompassViewDistance(ECompassViewDistance* compassViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.SetActorCompassViewDistance");

	ABP_WheeledVehicle_C_SetActorCompassViewDistance_Params params;
	params.compassViewDistance = compassViewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.SetActorRepresentationText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  newText                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_WheeledVehicle_C::SetActorRepresentationText(struct FText* newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.SetActorRepresentationText");

	ABP_WheeledVehicle_C_SetActorRepresentationText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WheeledVehicle_C::UpdateRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateRepresentation");

	ABP_WheeledVehicle_C_UpdateRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorRepresentationColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ABP_WheeledVehicle_C::GetActorRepresentationColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorRepresentationColor");

	ABP_WheeledVehicle_C_GetActorRepresentationColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorRepresentationText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_WheeledVehicle_C::GetActorRepresentationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorRepresentationText");

	ABP_WheeledVehicle_C_GetActorRepresentationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorRepresentationTexture
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABP_WheeledVehicle_C::GetActorRepresentationTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorRepresentationTexture");

	ABP_WheeledVehicle_C_GetActorRepresentationTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorRepresentationType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERepresentationType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERepresentationType ABP_WheeledVehicle_C::GetActorRepresentationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorRepresentationType");

	ABP_WheeledVehicle_C_GetActorRepresentationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorShouldShowInCompass
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WheeledVehicle_C::GetActorShouldShowInCompass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorShouldShowInCompass");

	ABP_WheeledVehicle_C_GetActorShouldShowInCompass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorFogOfWarRevealRadius
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_WheeledVehicle_C::GetActorFogOfWarRevealRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorFogOfWarRevealRadius");

	ABP_WheeledVehicle_C_GetActorFogOfWarRevealRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorFogOfWarRevealType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFogOfWarRevealType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFogOfWarRevealType ABP_WheeledVehicle_C::GetActorFogOfWarRevealType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorFogOfWarRevealType");

	ABP_WheeledVehicle_C_GetActorFogOfWarRevealType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.RemoveAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WheeledVehicle_C::RemoveAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.RemoveAsRepresentation");

	ABP_WheeledVehicle_C_RemoveAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.AddAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WheeledVehicle_C::AddAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.AddAsRepresentation");

	ABP_WheeledVehicle_C_AddAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorShouldShowOnMap
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WheeledVehicle_C::GetActorShouldShowOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetActorShouldShowOnMap");

	ABP_WheeledVehicle_C_GetActorShouldShowOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetRealActorLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_WheeledVehicle_C::GetRealActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetRealActorLocation");

	ABP_WheeledVehicle_C_GetRealActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetRealActorRotation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ABP_WheeledVehicle_C::GetRealActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetRealActorRotation");

	ABP_WheeledVehicle_C_GetRealActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.IsActorStatic
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WheeledVehicle_C::IsActorStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.IsActorStatic");

	ABP_WheeledVehicle_C_IsActorStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateOutline
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool*                          aimingAtWorkbench              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::UpdateOutline(bool* aimingAtWorkbench)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateOutline");

	ABP_WheeledVehicle_C_UpdateOutline_Params params;
	params.aimingAtWorkbench = aimingAtWorkbench;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateTireSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::UpdateTireSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateTireSound");

	ABP_WheeledVehicle_C_UpdateTireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.BurnOutSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ForwardInputInput              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::BurnOutSound(float* ForwardInputInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.BurnOutSound");

	ABP_WheeledVehicle_C_BurnOutSound_Params params;
	params.ForwardInputInput = ForwardInputInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetDriftForceOffset
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_WheeledVehicle_C::GetDriftForceOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetDriftForceOffset");

	ABP_WheeledVehicle_C_GetDriftForceOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ShouldStopVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldStop                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::ShouldStopVehicle(bool* ShouldStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ShouldStopVehicle");

	ABP_WheeledVehicle_C_ShouldStopVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldStop != nullptr)
		*ShouldStop = params.ShouldStop;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.TurnOverVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::TurnOverVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.TurnOverVehicle");

	ABP_WheeledVehicle_C_TurnOverVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.AdjustThrottle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Throttle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          adjustedThrottle               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::AdjustThrottle(float* Throttle, float* adjustedThrottle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.AdjustThrottle");

	ABP_WheeledVehicle_C_AdjustThrottle_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (adjustedThrottle != nullptr)
		*adjustedThrottle = params.adjustedThrottle;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.TogglePathVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::TogglePathVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.TogglePathVisibility");

	ABP_WheeledVehicle_C_TogglePathVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ToggleAutoPilot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ToggleAutoPilot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ToggleAutoPilot");

	ABP_WheeledVehicle_C_ToggleAutoPilot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.TogglePauseRecording
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::TogglePauseRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.TogglePauseRecording");

	ABP_WheeledVehicle_C_TogglePauseRecording_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.TickSimulationMovement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::TickSimulationMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.TickSimulationMovement");

	ABP_WheeledVehicle_C_TickSimulationMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.CalculateReverseSteering
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::CalculateReverseSteering()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.CalculateReverseSteering");

	ABP_WheeledVehicle_C_CalculateReverseSteering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.StopVehicle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::StopVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.StopVehicle");

	ABP_WheeledVehicle_C_StopVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.CanMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanMove                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::CanMove(bool* CanMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.CanMove");

	ABP_WheeledVehicle_C_CanMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanMove != nullptr)
		*CanMove = params.CanMove;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateEngineLoadSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         dt                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::UpdateEngineLoadSound(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateEngineLoadSound");

	ABP_WheeledVehicle_C_UpdateEngineLoadSound_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateAccelerationSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::UpdateAccelerationSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateAccelerationSound");

	ABP_WheeledVehicle_C_UpdateAccelerationSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateThrottleState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::UpdateThrottleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateThrottleState");

	ABP_WheeledVehicle_C_UpdateThrottleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.DidGearDown
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::DidGearDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.DidGearDown");

	ABP_WheeledVehicle_C_DidGearDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.DidGearUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::DidGearUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.DidGearUp");

	ABP_WheeledVehicle_C_DidGearUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.CheckCurrentGear
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::CheckCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.CheckCurrentGear");

	ABP_WheeledVehicle_C_CheckCurrentGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.StopSoundLoops
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::StopSoundLoops()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.StopSoundLoops");

	ABP_WheeledVehicle_C_StopSoundLoops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.StartSoundLoops
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::StartSoundLoops()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.StartSoundLoops");

	ABP_WheeledVehicle_C_StartSoundLoops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ToggleFreeCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ToggleFreeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ToggleFreeCamera");

	ABP_WheeledVehicle_C_ToggleFreeCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetLookAtDecription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_WheeledVehicle_C::GetLookAtDecription(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetLookAtDecription");

	ABP_WheeledVehicle_C_GetLookAtDecription_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.OpenVehicleUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     inCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::OpenVehicleUI(class AFGCharacterPlayer** inCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.OpenVehicleUI");

	ABP_WheeledVehicle_C_OpenVehicleUI_Params params;
	params.inCharacter = inCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.PonderOpeningTrunk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     inCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::PonderOpeningTrunk(class AFGCharacterPlayer** inCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.PonderOpeningTrunk");

	ABP_WheeledVehicle_C_PonderOpeningTrunk_Params params;
	params.inCharacter = inCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateUseState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                atLocation                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent**    componentHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FUseState               out_useState                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WheeledVehicle_C::UpdateUseState(class AFGCharacterPlayer** byCharacter, struct FVector* atLocation, class UPrimitiveComponent** componentHit, struct FUseState* out_useState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateUseState");

	ABP_WheeledVehicle_C_UpdateUseState_Params params;
	params.byCharacter = byCharacter;
	params.atLocation = atLocation;
	params.componentHit = componentHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_useState != nullptr)
		*out_useState = params.out_useState;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnRep_mIsFollowingPath
// (BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::OnRep_mIsFollowingPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnRep_mIsFollowingPath");

	ABP_WheeledVehicle_C_OnRep_mIsFollowingPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateSpeedLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleTargetPoint_C** TargetPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::UpdateSpeedLimit(class ABP_VehicleTargetPoint_C** TargetPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateSpeedLimit");

	ABP_WheeledVehicle_C_UpdateSpeedLimit_Params params;
	params.TargetPoint = TargetPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.DoReverseToFreedom
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::DoReverseToFreedom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.DoReverseToFreedom");

	ABP_WheeledVehicle_C_DoReverseToFreedom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReverseToFreedom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ReverseToFreedom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReverseToFreedom");

	ABP_WheeledVehicle_C_ReverseToFreedom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.CacheSpeedInKMH
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::CacheSpeedInKMH()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.CacheSpeedInKMH");

	ABP_WheeledVehicle_C_CacheSpeedInKMH_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnRep_mIsRecording
// (BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::OnRep_mIsRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnRep_mIsRecording");

	ABP_WheeledVehicle_C_OnRep_mIsRecording_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.MoveToLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::MoveToLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.MoveToLocation");

	ABP_WheeledVehicle_C_MoveToLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.TickRecording
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         dt                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::TickRecording(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.TickRecording");

	ABP_WheeledVehicle_C_TickRecording_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateVehicleMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::UpdateVehicleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateVehicleMovement");

	ABP_WheeledVehicle_C_UpdateVehicleMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.StartRecording
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::StartRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.StartRecording");

	ABP_WheeledVehicle_C_StartRecording_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.StopRecording
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::StopRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.StopRecording");

	ABP_WheeledVehicle_C_StopRecording_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GatherData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::GatherData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GatherData");

	ABP_WheeledVehicle_C_GatherData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.RemoveOldTargets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::RemoveOldTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.RemoveOldTargets");

	ABP_WheeledVehicle_C_RemoveOldTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.PlaceTargetPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::PlaceTargetPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.PlaceTargetPoint");

	ABP_WheeledVehicle_C_PlaceTargetPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.TargetReached
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::TargetReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.TargetReached");

	ABP_WheeledVehicle_C_TargetReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.SetNewPath
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleTargetPoint_C* newTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::SetNewPath(class ABP_VehicleTargetPoint_C** newTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.SetNewPath");

	ABP_WheeledVehicle_C_SetNewPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newTarget != nullptr)
		*newTarget = params.newTarget;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetTargetDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::GetTargetDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.GetTargetDistance");

	ABP_WheeledVehicle_C_GetTargetDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateThrottle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::UpdateThrottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateThrottle");

	ABP_WheeledVehicle_C_UpdateThrottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateSteering
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::UpdateSteering()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateSteering");

	ABP_WheeledVehicle_C_UpdateSteering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_Use_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WheeledVehicle_C::InpActEvt_Use_K2Node_InputActionEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_Use_K2Node_InputActionEvent_7");

	ABP_WheeledVehicle_C_InpActEvt_Use_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_Reload_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WheeledVehicle_C::InpActEvt_Reload_K2Node_InputActionEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_Reload_K2Node_InputActionEvent_6");

	ABP_WheeledVehicle_C_InpActEvt_Reload_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WheeledVehicle_C::InpActEvt_Jump_Drift_K2Node_InputActionEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_5");

	ABP_WheeledVehicle_C_InpActEvt_Jump_Drift_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WheeledVehicle_C::InpActEvt_Jump_Drift_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_Jump_Drift_K2Node_InputActionEvent_4");

	ABP_WheeledVehicle_C_InpActEvt_Jump_Drift_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WheeledVehicle_C::InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_3");

	ABP_WheeledVehicle_C_InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WheeledVehicle_C::InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_2");

	ABP_WheeledVehicle_C_InpActEvt_ResourceScanner_ToggleVehicleRecording_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WheeledVehicle_C::InpActEvt_PrimaryFire_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_1");

	ABP_WheeledVehicle_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WheeledVehicle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveBeginPlay");

	ABP_WheeledVehicle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveTick");

	ABP_WheeledVehicle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.TickVehicleSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         dt                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::TickVehicleSound(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.TickVehicleSound");

	ABP_WheeledVehicle_C_TickVehicleSound_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerToggleRecording
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ServerToggleRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerToggleRecording");

	ABP_WheeledVehicle_C_ServerToggleRecording_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveUnpossessed");

	ABP_WheeledVehicle_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_WheeledVehicle_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveHit");

	ABP_WheeledVehicle_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_WheeledVehicle_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveDestroyed");

	ABP_WheeledVehicle_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ResetImpactSound
// (BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ResetImpactSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ResetImpactSound");

	ABP_WheeledVehicle_C_ResetImpactSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnUse
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WheeledVehicle_C::OnUse(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnUse");

	ABP_WheeledVehicle_C_OnUse_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.Multicast_OpenTrunk
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::Multicast_OpenTrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.Multicast_OpenTrunk");

	ABP_WheeledVehicle_C_Multicast_OpenTrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.Multicast_CloseTrunk
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::Multicast_CloseTrunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.Multicast_CloseTrunk");

	ABP_WheeledVehicle_C_Multicast_CloseTrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceivePossessed");

	ABP_WheeledVehicle_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ClientClearAIMovment
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ClientClearAIMovment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ClientClearAIMovment");

	ABP_WheeledVehicle_C_ClientClearAIMovment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.StartAccelerating
// (BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::StartAccelerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.StartAccelerating");

	ABP_WheeledVehicle_C_StartAccelerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.StopAccelerating
// (BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::StopAccelerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.StopAccelerating");

	ABP_WheeledVehicle_C_StopAccelerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::UpdateCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.UpdateCamera");

	ABP_WheeledVehicle_C_UpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.WasDocked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGBuildableDockingStation** atStation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::WasDocked(class AFGBuildableDockingStation** atStation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.WasDocked");

	ABP_WheeledVehicle_C_WasDocked_Params params;
	params.atStation = atStation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerSetMenuOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          menuOpen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::ServerSetMenuOpen(bool* menuOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerSetMenuOpen");

	ABP_WheeledVehicle_C_ServerSetMenuOpen_Params params;
	params.menuOpen = menuOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerClearPathRecording
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ServerClearPathRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerClearPathRecording");

	ABP_WheeledVehicle_C_ServerClearPathRecording_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.WasUndocked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::WasUndocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.WasUndocked");

	ABP_WheeledVehicle_C_WasUndocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerTogglePauseRecording
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ServerTogglePauseRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerTogglePauseRecording");

	ABP_WheeledVehicle_C_ServerTogglePauseRecording_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerToggleAutoPilot
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ServerToggleAutoPilot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerToggleAutoPilot");

	ABP_WheeledVehicle_C_ServerToggleAutoPilot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerTogglePathVisibility
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::ServerTogglePathVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ServerTogglePathVisibility");

	ABP_WheeledVehicle_C_ServerTogglePathVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.Server_Leave
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::Server_Leave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.Server_Leave");

	ABP_WheeledVehicle_C_Server_Leave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveOnVehicleStartup
// (Event, Protected, BlueprintEvent)

void ABP_WheeledVehicle_C::ReceiveOnVehicleStartup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveOnVehicleStartup");

	ABP_WheeledVehicle_C_ReceiveOnVehicleStartup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveOnVehicleShutDown
// (Event, Protected, BlueprintEvent)

void ABP_WheeledVehicle_C::ReceiveOnVehicleShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveOnVehicleShutDown");

	ABP_WheeledVehicle_C_ReceiveOnVehicleShutDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveOnDriverEnter
// (Event, Protected, BlueprintEvent)

void ABP_WheeledVehicle_C::ReceiveOnDriverEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveOnDriverEnter");

	ABP_WheeledVehicle_C_ReceiveOnDriverEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveOnDriverLeave
// (Event, Protected, BlueprintEvent)

void ABP_WheeledVehicle_C::ReceiveOnDriverLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ReceiveOnDriverLeave");

	ABP_WheeledVehicle_C_ReceiveOnDriverLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2");

	ABP_WheeledVehicle_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3");

	ABP_WheeledVehicle_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.Server_Honk
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::Server_Honk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.Server_Honk");

	ABP_WheeledVehicle_C_Server_Honk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.Multicast_Honk
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::Multicast_Honk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.Multicast_Honk");

	ABP_WheeledVehicle_C_Multicast_Honk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.Client_PlayFoliageDestroyedEffect
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UParticleSystem**        destroyEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          destroyAudioEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::Client_PlayFoliageDestroyedEffect(class UParticleSystem** destroyEffect, class UAkAudioEvent** destroyAudioEvent, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.Client_PlayFoliageDestroyedEffect");

	ABP_WheeledVehicle_C_Client_PlayFoliageDestroyedEffect_Params params;
	params.destroyEffect = destroyEffect;
	params.destroyAudioEvent = destroyAudioEvent;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.OpenVehicleTrunk
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::OpenVehicleTrunk(class AFGCharacterPlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.OpenVehicleTrunk");

	ABP_WheeledVehicle_C_OpenVehicleTrunk_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.CloseVehicleTrunk
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::CloseVehicleTrunk(class AFGCharacterPlayer** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.CloseVehicleTrunk");

	ABP_WheeledVehicle_C_CloseVehicleTrunk_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.SetActorRepresentationColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::SetActorRepresentationColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.SetActorRepresentationColor");

	ABP_WheeledVehicle_C_SetActorRepresentationColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.ExecuteUbergraph_BP_WheeledVehicle
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WheeledVehicle_C::ExecuteUbergraph_BP_WheeledVehicle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.ExecuteUbergraph_BP_WheeledVehicle");

	ABP_WheeledVehicle_C_ExecuteUbergraph_BP_WheeledVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnStartRecording__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::OnStartRecording__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnStartRecording__DelegateSignature");

	ABP_WheeledVehicle_C_OnStartRecording__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnStopRecording__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::OnStopRecording__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.OnStopRecording__DelegateSignature");

	ABP_WheeledVehicle_C_OnStopRecording__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WheeledVehicle.BP_WheeledVehicle_C.LocationReached__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WheeledVehicle_C::LocationReached__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WheeledVehicle.BP_WheeledVehicle_C.LocationReached__DelegateSignature");

	ABP_WheeledVehicle_C_LocationReached__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
