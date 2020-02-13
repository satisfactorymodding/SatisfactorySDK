// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Controller_SpaceGiraffe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AController_SpaceGiraffe_C::ReceivePossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.ReceivePossess");

	AController_SpaceGiraffe_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AController_SpaceGiraffe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.ReceiveBeginPlay");

	AController_SpaceGiraffe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.StartPanic
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AController_SpaceGiraffe_C::StartPanic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.StartPanic");

	AController_SpaceGiraffe_C_StartPanic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.StopPanic
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AController_SpaceGiraffe_C::StopPanic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.StopPanic");

	AController_SpaceGiraffe_C_StopPanic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus*            Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AController_SpaceGiraffe_C::BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor** Actor, struct FAIStimulus* Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature");

	AController_SpaceGiraffe_C_BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.ExecuteUbergraph_Controller_SpaceGiraffe
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AController_SpaceGiraffe_C::ExecuteUbergraph_Controller_SpaceGiraffe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Controller_SpaceGiraffe.Controller_SpaceGiraffe_C.ExecuteUbergraph_Controller_SpaceGiraffe");

	AController_SpaceGiraffe_C_ExecuteUbergraph_Controller_SpaceGiraffe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
