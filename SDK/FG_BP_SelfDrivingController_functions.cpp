// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SelfDrivingController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SelfDrivingController.BP_SelfDrivingController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SelfDrivingController_C::ReceivePossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfDrivingController.BP_SelfDrivingController_C.ReceivePossess");

	ABP_SelfDrivingController_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SelfDrivingController.BP_SelfDrivingController_C.ReceiveUnPossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn**                  UnpossessedPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SelfDrivingController_C::ReceiveUnPossess(class APawn** UnpossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfDrivingController.BP_SelfDrivingController_C.ReceiveUnPossess");

	ABP_SelfDrivingController_C_ReceiveUnPossess_Params params;
	params.UnpossessedPawn = UnpossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SelfDrivingController.BP_SelfDrivingController_C.ExecuteUbergraph_BP_SelfDrivingController
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SelfDrivingController_C::ExecuteUbergraph_BP_SelfDrivingController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SelfDrivingController.BP_SelfDrivingController_C.ExecuteUbergraph_BP_SelfDrivingController");

	ABP_SelfDrivingController_C_ExecuteUbergraph_BP_SelfDrivingController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
