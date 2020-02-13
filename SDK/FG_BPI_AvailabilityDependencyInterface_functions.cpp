// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPI_AvailabilityDependencyInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_AvailabilityDependencyInterface.BPI_AvailabilityDependencyInterface_C.GetDependecyData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFAvailabilityDependencyData> DependecyData                  (Parm, OutParm, ZeroConstructor)

void UBPI_AvailabilityDependencyInterface_C::GetDependecyData(TArray<struct FFAvailabilityDependencyData>* DependecyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AvailabilityDependencyInterface.BPI_AvailabilityDependencyInterface_C.GetDependecyData");

	UBPI_AvailabilityDependencyInterface_C_GetDependecyData_Params params;

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
