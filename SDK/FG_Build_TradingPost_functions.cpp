// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_TradingPost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_TradingPost.Build_TradingPost_C.GetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABuild_TradingPost_C::GetActorCompassViewDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetActorCompassViewDistance");

	ABuild_TradingPost_C_GetActorCompassViewDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.SetActorCompassViewDistance
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompassViewDistance*          compassViewDistance            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECompassViewDistance           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassViewDistance ABuild_TradingPost_C::SetActorCompassViewDistance(ECompassViewDistance* compassViewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.SetActorCompassViewDistance");

	ABuild_TradingPost_C_SetActorCompassViewDistance_Params params;
	params.compassViewDistance = compassViewDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.SetActorRepresentationText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  newText                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABuild_TradingPost_C::SetActorRepresentationText(struct FText* newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.SetActorRepresentationText");

	ABuild_TradingPost_C_SetActorRepresentationText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.UpdateRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TradingPost_C::UpdateRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.UpdateRepresentation");

	ABuild_TradingPost_C_UpdateRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetActorRepresentationColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor ABuild_TradingPost_C::GetActorRepresentationColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetActorRepresentationColor");

	ABuild_TradingPost_C_GetActorRepresentationColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetActorRepresentationText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABuild_TradingPost_C::GetActorRepresentationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetActorRepresentationText");

	ABuild_TradingPost_C_GetActorRepresentationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetActorRepresentationTexture
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ABuild_TradingPost_C::GetActorRepresentationTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetActorRepresentationTexture");

	ABuild_TradingPost_C_GetActorRepresentationTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetActorRepresentationType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERepresentationType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERepresentationType ABuild_TradingPost_C::GetActorRepresentationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetActorRepresentationType");

	ABuild_TradingPost_C_GetActorRepresentationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetActorShouldShowInCompass
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TradingPost_C::GetActorShouldShowInCompass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetActorShouldShowInCompass");

	ABuild_TradingPost_C_GetActorShouldShowInCompass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetActorFogOfWarRevealRadius
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuild_TradingPost_C::GetActorFogOfWarRevealRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetActorFogOfWarRevealRadius");

	ABuild_TradingPost_C_GetActorFogOfWarRevealRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetActorFogOfWarRevealType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFogOfWarRevealType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFogOfWarRevealType ABuild_TradingPost_C::GetActorFogOfWarRevealType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetActorFogOfWarRevealType");

	ABuild_TradingPost_C_GetActorFogOfWarRevealType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.RemoveAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TradingPost_C::RemoveAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.RemoveAsRepresentation");

	ABuild_TradingPost_C_RemoveAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetRealActorRotation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ABuild_TradingPost_C::GetRealActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetRealActorRotation");

	ABuild_TradingPost_C_GetRealActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetRealActorLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuild_TradingPost_C::GetRealActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetRealActorLocation");

	ABuild_TradingPost_C_GetRealActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.GetActorShouldShowOnMap
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TradingPost_C::GetActorShouldShowOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.GetActorShouldShowOnMap");

	ABuild_TradingPost_C_GetActorShouldShowOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.AddAsRepresentation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TradingPost_C::AddAsRepresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.AddAsRepresentation");

	ABuild_TradingPost_C_AddAsRepresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.IsActorStatic
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_TradingPost_C::IsActorStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.IsActorStatic");

	ABuild_TradingPost_C_IsActorStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_TradingPost.Build_TradingPost_C.UpdateTradingPostVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABuild_TradingPost_C::UpdateTradingPostVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.UpdateTradingPostVisibility");

	ABuild_TradingPost_C_UpdateTradingPostVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TradingPost.Build_TradingPost_C.UpdateMainMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABuild_TradingPost_C::UpdateMainMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.UpdateMainMesh");

	ABuild_TradingPost_C_UpdateMainMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TradingPost.Build_TradingPost_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABuild_TradingPost_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.ReceiveDestroyed");

	ABuild_TradingPost_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TradingPost.Build_TradingPost_C.SetActorRepresentationColor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_TradingPost_C::SetActorRepresentationColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.SetActorRepresentationColor");

	ABuild_TradingPost_C_SetActorRepresentationColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TradingPost.Build_TradingPost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuild_TradingPost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.ReceiveBeginPlay");

	ABuild_TradingPost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TradingPost.Build_TradingPost_C.OnTradingPostUpgraded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          suppressBuildEffects           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_TradingPost_C::OnTradingPostUpgraded(int* Level, bool* suppressBuildEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.OnTradingPostUpgraded");

	ABuild_TradingPost_C_OnTradingPostUpgraded_Params params;
	params.Level = Level;
	params.suppressBuildEffects = suppressBuildEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Build_TradingPost.Build_TradingPost_C.ExecuteUbergraph_Build_TradingPost
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABuild_TradingPost_C::ExecuteUbergraph_Build_TradingPost(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TradingPost.Build_TradingPost_C.ExecuteUbergraph_Build_TradingPost");

	ABuild_TradingPost_C_ExecuteUbergraph_Build_TradingPost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
