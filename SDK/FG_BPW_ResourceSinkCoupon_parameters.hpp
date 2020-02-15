#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkCoupon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.InitInventorySlot
struct UBPW_ResourceSinkCoupon_C_InitInventorySlot_Params
{
	class UFGInventoryComponent**                      inventoryComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.PrintCoupon
struct UBPW_ResourceSinkCoupon_C_PrintCoupon_Params
{
};

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.CurveLerp
struct UBPW_ResourceSinkCoupon_C_CurveLerp_Params
{
	class UCurveFloat**                                Curve;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.Lerp
struct UBPW_ResourceSinkCoupon_C_Lerp_Params
{
};

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.Destruct
struct UBPW_ResourceSinkCoupon_C_Destruct_Params
{
};

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.ExecuteUbergraph_BPW_ResourceSinkCoupon
struct UBPW_ResourceSinkCoupon_C_ExecuteUbergraph_BPW_ResourceSinkCoupon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintContinued__DelegateSignature
struct UBPW_ResourceSinkCoupon_C_OnPrintContinued__DelegateSignature_Params
{
};

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintPaused__DelegateSignature
struct UBPW_ResourceSinkCoupon_C_OnPrintPaused__DelegateSignature_Params
{
};

// Function BPW_ResourceSinkCoupon.BPW_ResourceSinkCoupon_C.OnPrintCompleted__DelegateSignature
struct UBPW_ResourceSinkCoupon_C_OnPrintCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
