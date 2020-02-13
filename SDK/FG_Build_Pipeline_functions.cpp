// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_Pipeline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_Pipeline.Build_Pipeline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuild_Pipeline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_Pipeline.Build_Pipeline_C.UserConstructionScript");

	ABuild_Pipeline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
