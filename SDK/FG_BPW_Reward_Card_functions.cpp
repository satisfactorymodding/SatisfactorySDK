// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_Reward_Card_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_Reward_Card.BPW_Reward_Card_C.SetAmountText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFUnlockDataStruct*     UnlockDataStruct               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_Reward_Card_C::SetAmountText(struct FFUnlockDataStruct* UnlockDataStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Reward_Card.BPW_Reward_Card_C.SetAmountText");

	UBPW_Reward_Card_C_SetAmountText_Params params;
	params.UnlockDataStruct = UnlockDataStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Reward_Card.BPW_Reward_Card_C.CreateTooltipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBPW_Reward_Card_C::CreateTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Reward_Card.BPW_Reward_Card_C.CreateTooltipWidget");

	UBPW_Reward_Card_C_CreateTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_Reward_Card.BPW_Reward_Card_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFUnlockDataStruct*     UnlockDataStruct               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_Reward_Card_C::SetName(struct FFUnlockDataStruct* UnlockDataStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Reward_Card.BPW_Reward_Card_C.SetName");

	UBPW_Reward_Card_C_SetName_Params params;
	params.UnlockDataStruct = UnlockDataStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Reward_Card.BPW_Reward_Card_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFUnlockDataStruct*     UnlockDataStruct               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_Reward_Card_C::SetIcon(struct FFUnlockDataStruct* UnlockDataStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Reward_Card.BPW_Reward_Card_C.SetIcon");

	UBPW_Reward_Card_C_SetIcon_Params params;
	params.UnlockDataStruct = UnlockDataStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Reward_Card.BPW_Reward_Card_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_Reward_Card_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Reward_Card.BPW_Reward_Card_C.PreConstruct");

	UBPW_Reward_Card_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Reward_Card.BPW_Reward_Card_C.ExecuteUbergraph_BPW_Reward_Card
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_Reward_Card_C::ExecuteUbergraph_BPW_Reward_Card(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Reward_Card.BPW_Reward_Card_C.ExecuteUbergraph_BPW_Reward_Card");

	UBPW_Reward_Card_C_ExecuteUbergraph_BPW_Reward_Card_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
