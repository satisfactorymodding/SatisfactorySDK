// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_TrainDockingStationLiquid_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_TrainDockingStationLiquid.Build_TrainDockingStationLiquid_C.IsMoving
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMoving                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuild_TrainDockingStationLiquid_C::IsMoving(class AActor** Actor, bool* IsMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_TrainDockingStationLiquid.Build_TrainDockingStationLiquid_C.IsMoving");

	ABuild_TrainDockingStationLiquid_C_IsMoving_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMoving != nullptr)
		*IsMoving = params.IsMoving;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
