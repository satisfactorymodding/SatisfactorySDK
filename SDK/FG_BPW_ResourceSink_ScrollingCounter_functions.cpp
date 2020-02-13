// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSink_ScrollingCounter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.UpdateCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewNumber                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_ScrollingCounter_C::UpdateCounter(int* NewNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.UpdateCounter");

	UBPW_ResourceSink_ScrollingCounter_C_UpdateCounter_Params params;
	params.NewNumber = NewNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_ScrollingCounter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.PreConstruct");

	UBPW_ResourceSink_ScrollingCounter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.AnimateDigits
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 TextToAnimate                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_ResourceSink_ScrollingCounter_C::AnimateDigits(class FString* TextToAnimate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.AnimateDigits");

	UBPW_ResourceSink_ScrollingCounter_C_AnimateDigits_Params params;
	params.TextToAnimate = TextToAnimate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSink_ScrollingCounter_C::ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_ScrollingCounter.BPW_ResourceSink_ScrollingCounter_C.ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter");

	UBPW_ResourceSink_ScrollingCounter_C_ExecuteUbergraph_BPW_ResourceSink_ScrollingCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
