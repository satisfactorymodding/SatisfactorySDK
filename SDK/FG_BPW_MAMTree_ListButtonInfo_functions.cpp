// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_MAMTree_ListButtonInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.StartProgressBarLerp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         EndValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAMTree_ListButtonInfo_C::StartProgressBarLerp(float* EndValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.StartProgressBarLerp");

	UBPW_MAMTree_ListButtonInfo_C_StartProgressBarLerp_Params params;
	params.EndValue = EndValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.SetContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 researchTree                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAMTree_ListButtonInfo_C::SetContent(class UClass** researchTree)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.SetContent");

	UBPW_MAMTree_ListButtonInfo_C_SetContent_Params params;
	params.researchTree = researchTree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_MAMTree_ListButtonInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.Construct");

	UBPW_MAMTree_ListButtonInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.LerpProgressBar
// (BlueprintCallable, BlueprintEvent)

void UBPW_MAMTree_ListButtonInfo_C::LerpProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.LerpProgressBar");

	UBPW_MAMTree_ListButtonInfo_C_LerpProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.ExecuteUbergraph_BPW_MAMTree_ListButtonInfo
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_MAMTree_ListButtonInfo_C::ExecuteUbergraph_BPW_MAMTree_ListButtonInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_MAMTree_ListButtonInfo.BPW_MAMTree_ListButtonInfo_C.ExecuteUbergraph_BPW_MAMTree_ListButtonInfo");

	UBPW_MAMTree_ListButtonInfo_C_ExecuteUbergraph_BPW_MAMTree_ListButtonInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
