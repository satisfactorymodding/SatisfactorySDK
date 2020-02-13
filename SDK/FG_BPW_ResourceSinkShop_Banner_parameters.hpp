#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkShop_Banner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.UpdateBannerData
struct UBPW_ResourceSinkShop_Banner_C_UpdateBannerData_Params
{
};

// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.SetBanner
struct UBPW_ResourceSinkShop_Banner_C_SetBanner_Params
{
	struct FResourceSinkShop_Banner_Struct*            mBannerStruct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.PreConstruct
struct UBPW_ResourceSinkShop_Banner_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.Construct
struct UBPW_ResourceSinkShop_Banner_C_Construct_Params
{
};

// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.ExecuteUbergraph_BPW_ResourceSinkShop_Banner
struct UBPW_ResourceSinkShop_Banner_C_ExecuteUbergraph_BPW_ResourceSinkShop_Banner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
