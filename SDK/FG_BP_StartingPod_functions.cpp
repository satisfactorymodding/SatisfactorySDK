// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_StartingPod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StartingPod.BP_StartingPod_C.GatherDependencies
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         out_dependentObjects           (Parm, OutParm, ZeroConstructor)

void ABP_StartingPod_C::GatherDependencies(TArray<class UObject*>* out_dependentObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GatherDependencies");

	ABP_StartingPod_C_GatherDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_dependentObjects != nullptr)
		*out_dependentObjects = params.out_dependentObjects;
}


// Function BP_StartingPod.BP_StartingPod_C.NeedTransform
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StartingPod_C::NeedTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.NeedTransform");

	ABP_StartingPod_C_NeedTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.ShouldSave
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StartingPod_C::ShouldSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.ShouldSave");

	ABP_StartingPod_C_ShouldSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABP_StartingPod_C::GetActorCompassViewDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetActorCompassViewDistance");

	ABP_StartingPod_C_GetActorCompassViewDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.SetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance*          compassViewDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABP_StartingPod_C::SetActorCompassViewDistance(ECompassViewDistance* compassViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.SetActorCompassViewDistance");

	ABP_StartingPod_C_SetActorCompassViewDistance_Params params;
	params.compassViewDistance = compassViewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.SetActorRepresentationText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  newText                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_StartingPod_C::SetActorRepresentationText(struct FText* newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.SetActorRepresentationText");

	ABP_StartingPod_C_SetActorRepresentationText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.UpdateRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StartingPod_C::UpdateRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.UpdateRepresentation");

	ABP_StartingPod_C_UpdateRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetActorFogOfWarRevealRadius
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_StartingPod_C::GetActorFogOfWarRevealRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetActorFogOfWarRevealRadius");

	ABP_StartingPod_C_GetActorFogOfWarRevealRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetActorFogOfWarRevealType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFogOfWarRevealType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFogOfWarRevealType ABP_StartingPod_C::GetActorFogOfWarRevealType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetActorFogOfWarRevealType");

	ABP_StartingPod_C_GetActorFogOfWarRevealType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetActorRepresentationColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ABP_StartingPod_C::GetActorRepresentationColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetActorRepresentationColor");

	ABP_StartingPod_C_GetActorRepresentationColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetActorRepresentationText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_StartingPod_C::GetActorRepresentationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetActorRepresentationText");

	ABP_StartingPod_C_GetActorRepresentationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetActorRepresentationTexture
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABP_StartingPod_C::GetActorRepresentationTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetActorRepresentationTexture");

	ABP_StartingPod_C_GetActorRepresentationTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetActorRepresentationType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERepresentationType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERepresentationType ABP_StartingPod_C::GetActorRepresentationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetActorRepresentationType");

	ABP_StartingPod_C_GetActorRepresentationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetActorShouldShowInCompass
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StartingPod_C::GetActorShouldShowInCompass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetActorShouldShowInCompass");

	ABP_StartingPod_C_GetActorShouldShowInCompass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.AddAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StartingPod_C::AddAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.AddAsRepresentation");

	ABP_StartingPod_C_AddAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetActorShouldShowOnMap
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StartingPod_C::GetActorShouldShowOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetActorShouldShowOnMap");

	ABP_StartingPod_C_GetActorShouldShowOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetRealActorLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_StartingPod_C::GetRealActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetRealActorLocation");

	ABP_StartingPod_C_GetRealActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.GetRealActorRotation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ABP_StartingPod_C::GetRealActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.GetRealActorRotation");

	ABP_StartingPod_C_GetRealActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.IsActorStatic
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StartingPod_C::IsActorStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.IsActorStatic");

	ABP_StartingPod_C_IsActorStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.RemoveAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StartingPod_C::RemoveAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.RemoveAsRepresentation");

	ABP_StartingPod_C_RemoveAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StartingPod.BP_StartingPod_C.OnLoaded_8586F6D040F0FFE03962849F398DB59A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::OnLoaded_8586F6D040F0FFE03962849F398DB59A(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.OnLoaded_8586F6D040F0FFE03962849F398DB59A");

	ABP_StartingPod_C_OnLoaded_8586F6D040F0FFE03962849F398DB59A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.PostLoadGame
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           SaveVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           GameVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::PostLoadGame(int* SaveVersion, int* GameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.PostLoadGame");

	ABP_StartingPod_C_PostLoadGame_Params params;
	params.SaveVersion = SaveVersion;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.PostSaveGame
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           SaveVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           GameVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::PostSaveGame(int* SaveVersion, int* GameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.PostSaveGame");

	ABP_StartingPod_C_PostSaveGame_Params params;
	params.SaveVersion = SaveVersion;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.PreLoadGame
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           SaveVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           GameVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::PreLoadGame(int* SaveVersion, int* GameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.PreLoadGame");

	ABP_StartingPod_C_PreLoadGame_Params params;
	params.SaveVersion = SaveVersion;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.PreSaveGame
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           SaveVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           GameVersion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::PreSaveGame(int* SaveVersion, int* GameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.PreSaveGame");

	ABP_StartingPod_C_PreSaveGame_Params params;
	params.SaveVersion = SaveVersion;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.SetActorRepresentationColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::SetActorRepresentationColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.SetActorRepresentationColor");

	ABP_StartingPod_C_SetActorRepresentationColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.StartIsLookedAtForDismantle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::StartIsLookedAtForDismantle(class AFGCharacterPlayer** byCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.StartIsLookedAtForDismantle");

	ABP_StartingPod_C_StartIsLookedAtForDismantle_Params params;
	params.byCharacter = byCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.StopIsLookedAtForDismantle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::StopIsLookedAtForDismantle(class AFGCharacterPlayer** byCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.StopIsLookedAtForDismantle");

	ABP_StartingPod_C_StopIsLookedAtForDismantle_Params params;
	params.byCharacter = byCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.ReceiveTick");

	ABP_StartingPod_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.SetupPodForOwner
// (BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::SetupPodForOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.SetupPodForOwner");

	ABP_StartingPod_C_SetupPodForOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.SetupPodForObserver
// (BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::SetupPodForObserver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.SetupPodForObserver");

	ABP_StartingPod_C_SetupPodForObserver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.EndCinematic
// (BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::EndCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.EndCinematic");

	ABP_StartingPod_C_EndCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.StartMovie
// (BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::StartMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.StartMovie");

	ABP_StartingPod_C_StartMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.AK_StopDucking
// (BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::AK_StopDucking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.AK_StopDucking");

	ABP_StartingPod_C_AK_StopDucking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.AK_HalveDucking
// (BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::AK_HalveDucking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.AK_HalveDucking");

	ABP_StartingPod_C_AK_HalveDucking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_StartingPod_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.ReceiveDestroyed");

	ABP_StartingPod_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.StartCinematic
// (BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::StartCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.StartCinematic");

	ABP_StartingPod_C_StartCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.OnPlayerSkipIntroSequence
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::OnPlayerSkipIntroSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.OnPlayerSkipIntroSequence");

	ABP_StartingPod_C_OnPlayerSkipIntroSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.AllowSkipIntro
// (BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::AllowSkipIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.AllowSkipIntro");

	ABP_StartingPod_C_AllowSkipIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.BlockSkipIntro
// (BlueprintCallable, BlueprintEvent)

void ABP_StartingPod_C::BlockSkipIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.BlockSkipIntro");

	ABP_StartingPod_C_BlockSkipIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StartingPod_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.ReceiveBeginPlay");

	ABP_StartingPod_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StartingPod.BP_StartingPod_C.ExecuteUbergraph_BP_StartingPod
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StartingPod_C::ExecuteUbergraph_BP_StartingPod(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StartingPod.BP_StartingPod_C.ExecuteUbergraph_BP_StartingPod");

	ABP_StartingPod_C_ExecuteUbergraph_BP_StartingPod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
