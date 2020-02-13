// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_GasPillar_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GasPillar_01.BP_GasPillar_01_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_GasPillar_01_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasPillar_01.BP_GasPillar_01_C.ReceiveDestroyed");

	ABP_GasPillar_01_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GasPillar_01.BP_GasPillar_01_C.ExecuteUbergraph_BP_GasPillar_01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GasPillar_01_C::ExecuteUbergraph_BP_GasPillar_01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasPillar_01.BP_GasPillar_01_C.ExecuteUbergraph_BP_GasPillar_01");

	ABP_GasPillar_01_C_ExecuteUbergraph_BP_GasPillar_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
