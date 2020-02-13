// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_TrainStation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_TrainStation.Build_TrainStation_C.GetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABuild_TrainStation_C::GetActorCompassViewDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetActorCompassViewDistance");

	ABuild_TrainStation_C_GetActorCompassViewDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.SetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance*          compassViewDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABuild_TrainStation_C::SetActorCompassViewDistance(ECompassViewDistance* compassViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.SetActorCompassViewDistance");

	ABuild_TrainStation_C_SetActorCompassViewDistance_Params params;
	params.compassViewDistance = compassViewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.AddAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TrainStation_C::AddAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.AddAsRepresentation");

	ABuild_TrainStation_C_AddAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetActorFogOfWarRevealRadius
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuild_TrainStation_C::GetActorFogOfWarRevealRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetActorFogOfWarRevealRadius");

	ABuild_TrainStation_C_GetActorFogOfWarRevealRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetActorFogOfWarRevealType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFogOfWarRevealType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFogOfWarRevealType ABuild_TrainStation_C::GetActorFogOfWarRevealType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetActorFogOfWarRevealType");

	ABuild_TrainStation_C_GetActorFogOfWarRevealType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetActorRepresentationColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ABuild_TrainStation_C::GetActorRepresentationColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetActorRepresentationColor");

	ABuild_TrainStation_C_GetActorRepresentationColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetActorRepresentationText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABuild_TrainStation_C::GetActorRepresentationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetActorRepresentationText");

	ABuild_TrainStation_C_GetActorRepresentationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetActorRepresentationTexture
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABuild_TrainStation_C::GetActorRepresentationTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetActorRepresentationTexture");

	ABuild_TrainStation_C_GetActorRepresentationTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetActorRepresentationType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERepresentationType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERepresentationType ABuild_TrainStation_C::GetActorRepresentationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetActorRepresentationType");

	ABuild_TrainStation_C_GetActorRepresentationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetActorShouldShowInCompass
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TrainStation_C::GetActorShouldShowInCompass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetActorShouldShowInCompass");

	ABuild_TrainStation_C_GetActorShouldShowInCompass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetActorShouldShowOnMap
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TrainStation_C::GetActorShouldShowOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetActorShouldShowOnMap");

	ABuild_TrainStation_C_GetActorShouldShowOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetRealActorLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuild_TrainStation_C::GetRealActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetRealActorLocation");

	ABuild_TrainStation_C_GetRealActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.GetRealActorRotation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ABuild_TrainStation_C::GetRealActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.GetRealActorRotation");

	ABuild_TrainStation_C_GetRealActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.IsActorStatic
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TrainStation_C::IsActorStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.IsActorStatic");

	ABuild_TrainStation_C_IsActorStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.RemoveAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TrainStation_C::RemoveAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.RemoveAsRepresentation");

	ABuild_TrainStation_C_RemoveAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.SetActorRepresentationText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  newText                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABuild_TrainStation_C::SetActorRepresentationText(struct FText* newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.SetActorRepresentationText");

	ABuild_TrainStation_C_SetActorRepresentationText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.UpdateRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TrainStation_C::UpdateRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.UpdateRepresentation");

	ABuild_TrainStation_C_UpdateRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TrainStation.Build_TrainStation_C.SetActorRepresentationColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_TrainStation_C::SetActorRepresentationColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.SetActorRepresentationColor");

	ABuild_TrainStation_C_SetActorRepresentationColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TrainStation.Build_TrainStation_C.OnNameChanged
// (Event, Public, BlueprintEvent)

void ABuild_TrainStation_C::OnNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.OnNameChanged");

	ABuild_TrainStation_C_OnNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TrainStation.Build_TrainStation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuild_TrainStation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.ReceiveBeginPlay");

	ABuild_TrainStation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TrainStation.Build_TrainStation_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_TrainStation_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.ReceiveEndPlay");

	ABuild_TrainStation_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TrainStation.Build_TrainStation_C.ExecuteUbergraph_Build_TrainStation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_TrainStation_C::ExecuteUbergraph_Build_TrainStation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainStation.Build_TrainStation_C.ExecuteUbergraph_Build_TrainStation");

	ABuild_TrainStation_C_ExecuteUbergraph_Build_TrainStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
