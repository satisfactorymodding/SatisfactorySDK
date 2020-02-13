// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_LerpingProgressBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.mSetPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceProgressBarWrap           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LerpingProgressBar_C::mSetPercent(float* Percent, bool* ForceProgressBarWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.mSetPercent");

	UBPW_LerpingProgressBar_C_mSetPercent_Params params;
	params.Percent = Percent;
	params.ForceProgressBarWrap = ForceProgressBarWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LerpingProgressBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.PreConstruct");

	UBPW_LerpingProgressBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.LerpBar
// (BlueprintCallable, BlueprintEvent)

void UBPW_LerpingProgressBar_C::LerpBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.LerpBar");

	UBPW_LerpingProgressBar_C_LerpBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_LerpingProgressBar_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.Destruct");

	UBPW_LerpingProgressBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.ExecuteUbergraph_BPW_LerpingProgressBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LerpingProgressBar_C::ExecuteUbergraph_BPW_LerpingProgressBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LerpingProgressBar.BPW_LerpingProgressBar_C.ExecuteUbergraph_BPW_LerpingProgressBar");

	UBPW_LerpingProgressBar_C_ExecuteUbergraph_BPW_LerpingProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
