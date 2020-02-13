// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkDigit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.SwitchText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkDigit_C::SwitchText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.SwitchText");

	UBPW_ResourceSinkDigit_C_SwitchText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mText                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_ResourceSinkDigit_C::SetText(struct FText* mText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.SetText");

	UBPW_ResourceSinkDigit_C_SetText_Params params;
	params.mText = mText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSinkDigit_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.Construct");

	UBPW_ResourceSinkDigit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.LerpDigit
// (BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkDigit_C::LerpDigit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.LerpDigit");

	UBPW_ResourceSinkDigit_C_LerpDigit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSinkDigit_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.Destruct");

	UBPW_ResourceSinkDigit_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkDigit_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.PreConstruct");

	UBPW_ResourceSinkDigit_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.ExecuteUbergraph_BPW_ResourceSinkDigit
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkDigit_C::ExecuteUbergraph_BPW_ResourceSinkDigit(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkDigit.BPW_ResourceSinkDigit_C.ExecuteUbergraph_BPW_ResourceSinkDigit");

	UBPW_ResourceSinkDigit_C_ExecuteUbergraph_BPW_ResourceSinkDigit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
