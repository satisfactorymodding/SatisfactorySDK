// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_MAMTree_Ingame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_MAMTree_Ingame.BPW_MAMTree_Ingame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAMTree_Ingame_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_Ingame.BPW_MAMTree_Ingame_C.PreConstruct");

	UBPW_MAMTree_Ingame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAMTree_Ingame.BPW_MAMTree_Ingame_C.ExecuteUbergraph_BPW_MAMTree_Ingame
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAMTree_Ingame_C::ExecuteUbergraph_BPW_MAMTree_Ingame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_Ingame.BPW_MAMTree_Ingame_C.ExecuteUbergraph_BPW_MAMTree_Ingame");

	UBPW_MAMTree_Ingame_C_ExecuteUbergraph_BPW_MAMTree_Ingame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
