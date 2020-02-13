// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Controller_SpitterSmall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Controller_SpitterSmall.Controller_SpitterSmall_C.BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus*            Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AController_SpitterSmall_C::BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor** Actor, struct FAIStimulus* Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Controller_SpitterSmall.Controller_SpitterSmall_C.BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature");

	AController_SpitterSmall_C_BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Controller_SpitterSmall.Controller_SpitterSmall_C.ExecuteUbergraph_Controller_SpitterSmall
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AController_SpitterSmall_C::ExecuteUbergraph_Controller_SpitterSmall(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Controller_SpitterSmall.Controller_SpitterSmall_C.ExecuteUbergraph_Controller_SpitterSmall");

	AController_SpitterSmall_C_ExecuteUbergraph_Controller_SpitterSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
