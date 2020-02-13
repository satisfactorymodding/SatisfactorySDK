#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_FluidTank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_FluidTank.BPW_FluidTank_C.SetAliasingDensity
struct UBPW_FluidTank_C_SetAliasingDensity_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidTank.BPW_FluidTank_C.SetFluidFilledOffset
struct UBPW_FluidTank_C_SetFluidFilledOffset_Params
{
	float*                                             mFluidFilledOffset;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidTank.BPW_FluidTank_C.UpdateTankValue
struct UBPW_FluidTank_C_UpdateTankValue_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidTank.BPW_FluidTank_C.SetTint
struct UBPW_FluidTank_C_SetTint_Params
{
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidTank.BPW_FluidTank_C.PreConstruct
struct UBPW_FluidTank_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidTank.BPW_FluidTank_C.ExecuteUbergraph_BPW_FluidTank
struct UBPW_FluidTank_C_ExecuteUbergraph_BPW_FluidTank_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
