#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_FluidGauge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeName
struct UBPW_FluidGauge_C_SetGaugeName_Params
{
	struct FText*                                      mGaugeName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.SetDividerPosition
struct UBPW_FluidGauge_C_SetDividerPosition_Params
{
	float*                                             mDividerPosition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.SetupMeterTexture
struct UBPW_FluidGauge_C_SetupMeterTexture_Params
{
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.UpdateGaugeValue
struct UBPW_FluidGauge_C_UpdateGaugeValue_Params
{
	float*                                             mGaugeValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.SetMeterColor
struct UBPW_FluidGauge_C_SetMeterColor_Params
{
	struct FLinearColor*                               mMeterColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.SetBarColors
struct UBPW_FluidGauge_C_SetBarColors_Params
{
	struct FLinearColor*                               mPrimaryColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               mSecondaryColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.SetUseBarDivider
struct UBPW_FluidGauge_C_SetUseBarDivider_Params
{
	bool*                                              mUseBarDivider;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeBarPadding
struct UBPW_FluidGauge_C_SetGaugeBarPadding_Params
{
	float*                                             mGaugeBarPadding;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.PreConstruct
struct UBPW_FluidGauge_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.Construct
struct UBPW_FluidGauge_C_Construct_Params
{
};

// Function BPW_FluidGauge.BPW_FluidGauge_C.ExecuteUbergraph_BPW_FluidGauge
struct UBPW_FluidGauge_C_ExecuteUbergraph_BPW_FluidGauge_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
