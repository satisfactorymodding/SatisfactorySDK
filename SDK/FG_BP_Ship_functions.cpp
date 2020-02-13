// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Ship_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ship.BP_Ship_C.GainedSignificance
// (Event, Public, BlueprintEvent)

void ABP_Ship_C::GainedSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship.BP_Ship_C.GainedSignificance");

	ABP_Ship_C_GainedSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship.BP_Ship_C.LostSignificance
// (Event, Public, BlueprintEvent)

void ABP_Ship_C::LostSignificance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship.BP_Ship_C.LostSignificance");

	ABP_Ship_C_LostSignificance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship.BP_Ship_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ship_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship.BP_Ship_C.ReceiveBeginPlay");

	ABP_Ship_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship.BP_Ship_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship.BP_Ship_C.ReceiveEndPlay");

	ABP_Ship_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship.BP_Ship_C.ExecuteUbergraph_BP_Ship
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_C::ExecuteUbergraph_BP_Ship(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship.BP_Ship_C.ExecuteUbergraph_BP_Ship");

	ABP_Ship_C_ExecuteUbergraph_BP_Ship_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
