// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_ItemPickedUpDependency_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ItemPickedUpDependency.BP_ItemPickedUpDependency_C.GetDependecyData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFAvailabilityDependencyData> DependecyData                  (Parm, OutParm, ZeroConstructor)

void UBP_ItemPickedUpDependency_C::GetDependecyData(TArray<struct FFAvailabilityDependencyData>* DependecyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemPickedUpDependency.BP_ItemPickedUpDependency_C.GetDependecyData");

	UBP_ItemPickedUpDependency_C_GetDependecyData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DependecyData != nullptr)
		*DependecyData = params.DependecyData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
