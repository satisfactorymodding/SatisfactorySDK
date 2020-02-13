// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_FluidTank_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_FluidTank.BPW_FluidTank_C.SetAliasingDensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidTank_C::SetAliasingDensity(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidTank.BPW_FluidTank_C.SetAliasingDensity");

	UBPW_FluidTank_C_SetAliasingDensity_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidTank.BPW_FluidTank_C.SetFluidFilledOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         mFluidFilledOffset             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidTank_C::SetFluidFilledOffset(float* mFluidFilledOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidTank.BPW_FluidTank_C.SetFluidFilledOffset");

	UBPW_FluidTank_C_SetFluidFilledOffset_Params params;
	params.mFluidFilledOffset = mFluidFilledOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidTank.BPW_FluidTank_C.UpdateTankValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidTank_C::UpdateTankValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidTank.BPW_FluidTank_C.UpdateTankValue");

	UBPW_FluidTank_C_UpdateTankValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidTank.BPW_FluidTank_C.SetTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidTank_C::SetTint(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidTank.BPW_FluidTank_C.SetTint");

	UBPW_FluidTank_C_SetTint_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidTank.BPW_FluidTank_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidTank_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidTank.BPW_FluidTank_C.PreConstruct");

	UBPW_FluidTank_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidTank.BPW_FluidTank_C.ExecuteUbergraph_BPW_FluidTank
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidTank_C::ExecuteUbergraph_BPW_FluidTank(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidTank.BPW_FluidTank_C.ExecuteUbergraph_BPW_FluidTank");

	UBPW_FluidTank_C_ExecuteUbergraph_BPW_FluidTank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
