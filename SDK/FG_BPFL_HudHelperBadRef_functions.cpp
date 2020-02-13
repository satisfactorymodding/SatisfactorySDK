// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPFL_HudHelperBadRef_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPFL_HudHelperBadRef.BPFL_HudHelperBadRef_C.GetBPHUD
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_HUD_C*               outHUD                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_HudHelperBadRef_C::STATIC_GetBPHUD(class AController** Controller, class UObject** __WorldContext, class ABP_HUD_C** outHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_HudHelperBadRef.BPFL_HudHelperBadRef_C.GetBPHUD");

	UBPFL_HudHelperBadRef_C_GetBPHUD_Params params;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outHUD != nullptr)
		*outHUD = params.outHUD;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
