// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_ProximitySubsystem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupMapAreaEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 newArea                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximitySubsystem_C::SetupMapAreaEffect(class UClass** newArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetupMapAreaEffect");

	ABP_ProximitySubsystem_C_SetupMapAreaEffect_Params params;
	params.newArea = newArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OcclusionInterpAlpha__FinishedFunc
// (BlueprintEvent)

void ABP_ProximitySubsystem_C::OcclusionInterpAlpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OcclusionInterpAlpha__FinishedFunc");

	ABP_ProximitySubsystem_C_OcclusionInterpAlpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OcclusionInterpAlpha__UpdateFunc
// (BlueprintEvent)

void ABP_ProximitySubsystem_C::OcclusionInterpAlpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OcclusionInterpAlpha__UpdateFunc");

	ABP_ProximitySubsystem_C_OcclusionInterpAlpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetWindSpeedEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximitySubsystem_C::SetWindSpeedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.SetWindSpeedEvent");

	ABP_ProximitySubsystem_C_SetWindSpeedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.VirtualWindSystemEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximitySubsystem_C::VirtualWindSystemEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.VirtualWindSystemEvent");

	ABP_ProximitySubsystem_C_VirtualWindSystemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.UpdateWindTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximitySubsystem_C::UpdateWindTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.UpdateWindTimer");

	ABP_ProximitySubsystem_C_UpdateWindTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.WindOcclusionEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximitySubsystem_C::WindOcclusionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.WindOcclusionEvent");

	ABP_ProximitySubsystem_C_WindOcclusionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.WindOcclusionTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximitySubsystem_C::WindOcclusionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.WindOcclusionTimer");

	ABP_ProximitySubsystem_C_WindOcclusionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Ambient
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximitySubsystem_C::Ambient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.Ambient");

	ABP_ProximitySubsystem_C_Ambient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProximitySubsystem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ReceiveBeginPlay");

	ABP_ProximitySubsystem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnEnteredMapArea
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 newArea                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximitySubsystem_C::OnEnteredMapArea(class UClass** newArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnEnteredMapArea");

	ABP_ProximitySubsystem_C_OnEnteredMapArea_Params params;
	params.newArea = newArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnPawnChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  newPawn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximitySubsystem_C::OnPawnChanged(class APawn** newPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.OnPawnChanged");

	ABP_ProximitySubsystem_C_OnPawnChanged_Params params;
	params.newPawn = newPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CalculateWindOcclusionEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximitySubsystem_C::CalculateWindOcclusionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.CalculateWindOcclusionEvent");

	ABP_ProximitySubsystem_C_CalculateWindOcclusionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ExecuteUbergraph_BP_ProximitySubsystem
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximitySubsystem_C::ExecuteUbergraph_BP_ProximitySubsystem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximitySubsystem.BP_ProximitySubsystem_C.ExecuteUbergraph_BP_ProximitySubsystem");

	ABP_ProximitySubsystem_C_ExecuteUbergraph_BP_ProximitySubsystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
