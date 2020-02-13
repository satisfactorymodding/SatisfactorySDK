// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BPW_ResourceSinkShop_Banner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.UpdateBannerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ResourceSinkShop_Banner_C::UpdateBannerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.UpdateBannerData");

	UBPW_ResourceSinkShop_Banner_C_UpdateBannerData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.SetBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResourceSinkShop_Banner_Struct* mBannerStruct                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_ResourceSinkShop_Banner_C::SetBanner(struct FResourceSinkShop_Banner_Struct* mBannerStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.SetBanner");

	UBPW_ResourceSinkShop_Banner_C_SetBanner_Params params;
	params.mBannerStruct = mBannerStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_Banner_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.PreConstruct");

	UBPW_ResourceSinkShop_Banner_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ResourceSinkShop_Banner_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.Construct");

	UBPW_ResourceSinkShop_Banner_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.ExecuteUbergraph_BPW_ResourceSinkShop_Banner
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ResourceSinkShop_Banner_C::ExecuteUbergraph_BPW_ResourceSinkShop_Banner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.ExecuteUbergraph_BPW_ResourceSinkShop_Banner");

	UBPW_ResourceSinkShop_Banner_C_ExecuteUbergraph_BPW_ResourceSinkShop_Banner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
