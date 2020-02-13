#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_FluidModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_FluidModule.BPW_FluidModule_C.SetFluidType
struct UBPW_FluidModule_C_SetFluidType_Params
{
	class UClass**                                     fluidDescriptor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidModule.BPW_FluidModule_C.UpdateValues
struct UBPW_FluidModule_C_UpdateValues_Params
{
	float*                                             MaxAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ConsumptionValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidModule.BPW_FluidModule_C.Construct
struct UBPW_FluidModule_C_Construct_Params
{
};

// Function BPW_FluidModule.BPW_FluidModule_C.PreConstruct
struct UBPW_FluidModule_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FluidModule.BPW_FluidModule_C.ExecuteUbergraph_BPW_FluidModule
struct UBPW_FluidModule_C_ExecuteUbergraph_BPW_FluidModule_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
