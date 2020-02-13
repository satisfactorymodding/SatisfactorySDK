// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_MAMTreeInfoBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_MAMTreeInfoBox.BPW_MAMTreeInfoBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_MAMTreeInfoBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAMTreeInfoBox.BPW_MAMTreeInfoBox_C.Construct");

	UBPW_MAMTreeInfoBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAMTreeInfoBox.BPW_MAMTreeInfoBox_C.ExecuteUbergraph_BPW_MAMTreeInfoBox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAMTreeInfoBox_C::ExecuteUbergraph_BPW_MAMTreeInfoBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAMTreeInfoBox.BPW_MAMTreeInfoBox_C.ExecuteUbergraph_BPW_MAMTreeInfoBox");

	UBPW_MAMTreeInfoBox_C_ExecuteUbergraph_BPW_MAMTreeInfoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
