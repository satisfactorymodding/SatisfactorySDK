// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_LinearTimecode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDropTimecode*          Timecode                       (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           FrameNumber                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDropTimecode           OutTimecode                    (Parm, OutParm)

void ULinearTimecodeComponent::STATIC_SetDropTimecodeFrameNumber(struct FDropTimecode* Timecode, int* FrameNumber, struct FDropTimecode* OutTimecode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber");

	ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params params;
	params.Timecode = Timecode;
	params.FrameNumber = FrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTimecode != nullptr)
		*OutTimecode = params.OutTimecode;
}


// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDropTimecode*          Timecode                       (ConstParm, Parm, OutParm, ReferenceParm)
// int                            FrameNumber                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULinearTimecodeComponent::STATIC_GetDropTimeCodeFrameNumber(struct FDropTimecode* Timecode, int* FrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber");

	ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params params;
	params.Timecode = Timecode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FrameNumber != nullptr)
		*FrameNumber = params.FrameNumber;
}


// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULinearTimecodeComponent::GetDropFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber");

	ULinearTimecodeComponent_GetDropFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDropTimecode*          InTimecode                     (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDropTimecodeToStringConversion::STATIC_Conv_DropTimecodeToString(struct FDropTimecode* InTimecode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString");

	UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params params;
	params.InTimecode = InTimecode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
