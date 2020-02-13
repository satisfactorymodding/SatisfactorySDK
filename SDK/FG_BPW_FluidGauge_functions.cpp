// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_FluidGauge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  mGaugeName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_FluidGauge_C::SetGaugeName(struct FText* mGaugeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeName");

	UBPW_FluidGauge_C_SetGaugeName_Params params;
	params.mGaugeName = mGaugeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.SetDividerPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         mDividerPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidGauge_C::SetDividerPosition(float* mDividerPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetDividerPosition");

	UBPW_FluidGauge_C_SetDividerPosition_Params params;
	params.mDividerPosition = mDividerPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.SetupMeterTexture
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_FluidGauge_C::SetupMeterTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetupMeterTexture");

	UBPW_FluidGauge_C_SetupMeterTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.UpdateGaugeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         mGaugeValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidGauge_C::UpdateGaugeValue(float* mGaugeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.UpdateGaugeValue");

	UBPW_FluidGauge_C_UpdateGaugeValue_Params params;
	params.mGaugeValue = mGaugeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.SetMeterColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           mMeterColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidGauge_C::SetMeterColor(struct FLinearColor* mMeterColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetMeterColor");

	UBPW_FluidGauge_C_SetMeterColor_Params params;
	params.mMeterColor = mMeterColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.SetBarColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           mPrimaryColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           mSecondaryColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidGauge_C::SetBarColors(struct FLinearColor* mPrimaryColor, struct FLinearColor* mSecondaryColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetBarColors");

	UBPW_FluidGauge_C_SetBarColors_Params params;
	params.mPrimaryColor = mPrimaryColor;
	params.mSecondaryColor = mSecondaryColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.SetUseBarDivider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          mUseBarDivider                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidGauge_C::SetUseBarDivider(bool* mUseBarDivider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetUseBarDivider");

	UBPW_FluidGauge_C_SetUseBarDivider_Params params;
	params.mUseBarDivider = mUseBarDivider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeBarPadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         mGaugeBarPadding               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidGauge_C::SetGaugeBarPadding(float* mGaugeBarPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeBarPadding");

	UBPW_FluidGauge_C_SetGaugeBarPadding_Params params;
	params.mGaugeBarPadding = mGaugeBarPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidGauge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.PreConstruct");

	UBPW_FluidGauge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_FluidGauge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.Construct");

	UBPW_FluidGauge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FluidGauge.BPW_FluidGauge_C.ExecuteUbergraph_BPW_FluidGauge
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FluidGauge_C::ExecuteUbergraph_BPW_FluidGauge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.ExecuteUbergraph_BPW_FluidGauge");

	UBPW_FluidGauge_C_ExecuteUbergraph_BPW_FluidGauge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
