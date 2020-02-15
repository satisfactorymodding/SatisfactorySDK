// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkCoupon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.InitInventorySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFGInventoryComponent**  inventoryComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_ResourceSinkCoupon_C::InitInventorySlot(class UFGInventoryComponent** inventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.InitInventorySlot");

	UBPW_ResourceSinkCoupon_C_InitInventorySlot_Params params;
	params.inventoryComponent = inventoryComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.PrintCoupon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkCoupon_C::PrintCoupon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.PrintCoupon");

	UBPW_ResourceSinkCoupon_C_PrintCoupon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.CurveLerp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCurveFloat**            Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPW_ResourceSinkCoupon_C::CurveLerp(class UCurveFloat** Curve, float* Start, float* End, float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.CurveLerp");

	UBPW_ResourceSinkCoupon_C_CurveLerp_Params params;
	params.Curve = Curve;
	params.Start = Start;
	params.End = End;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.Lerp
// (BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkCoupon_C::Lerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.Lerp");

	UBPW_ResourceSinkCoupon_C_Lerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSinkCoupon_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.Destruct");

	UBPW_ResourceSinkCoupon_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.ExecuteUbergraph_BPW_ResourceSinkCoupon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkCoupon_C::ExecuteUbergraph_BPW_ResourceSinkCoupon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.ExecuteUbergraph_BPW_ResourceSinkCoupon");

	UBPW_ResourceSinkCoupon_C_ExecuteUbergraph_BPW_ResourceSinkCoupon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintContinued__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkCoupon_C::OnPrintContinued__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintContinued__DelegateSignature");

	UBPW_ResourceSinkCoupon_C_OnPrintContinued__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintPaused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkCoupon_C::OnPrintPaused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintPaused__DelegateSignature");

	UBPW_ResourceSinkCoupon_C_OnPrintPaused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkCoupon_C::OnPrintCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintCompleted__DelegateSignature");

	UBPW_ResourceSinkCoupon_C_OnPrintCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
