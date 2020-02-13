// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Spline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Spline.BP_Spline_C.GetNextSplineIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           currentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            nextIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Spline_C::GetNextSplineIndex(int* currentIndex, int* nextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spline.BP_Spline_C.GetNextSplineIndex");

	ABP_Spline_C_GetNextSplineIndex_Params params;
	params.currentIndex = currentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (nextIndex != nullptr)
		*nextIndex = params.nextIndex;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
