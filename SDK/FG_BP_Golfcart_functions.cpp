// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Golfcart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Golfcart.BP_Golfcart_C.GetDismantleRefund
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FInventoryStack> out_refund                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Golfcart_C::GetDismantleRefund(TArray<struct FInventoryStack>* out_refund)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Golfcart.BP_Golfcart_C.GetDismantleRefund");

	ABP_Golfcart_C_GetDismantleRefund_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_refund != nullptr)
		*out_refund = params.out_refund;
}


// Function BP_Golfcart.BP_Golfcart_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Golfcart_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Golfcart.BP_Golfcart_C.ReceiveBeginPlay");

	ABP_Golfcart_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Golfcart.BP_Golfcart_C.ToggleFreeCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Golfcart_C::ToggleFreeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Golfcart.BP_Golfcart_C.ToggleFreeCamera");

	ABP_Golfcart_C_ToggleFreeCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Golfcart.BP_Golfcart_C.Multicast_Honk
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Golfcart_C::Multicast_Honk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Golfcart.BP_Golfcart_C.Multicast_Honk");

	ABP_Golfcart_C_Multicast_Honk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Golfcart.BP_Golfcart_C.DisablePhysics
// (BlueprintCallable, BlueprintEvent)

void ABP_Golfcart_C::DisablePhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Golfcart.BP_Golfcart_C.DisablePhysics");

	ABP_Golfcart_C_DisablePhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Golfcart.BP_Golfcart_C.EnablePhysics
// (BlueprintCallable, BlueprintEvent)

void ABP_Golfcart_C::EnablePhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Golfcart.BP_Golfcart_C.EnablePhysics");

	ABP_Golfcart_C_EnablePhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Golfcart.BP_Golfcart_C.DoFoldAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_Golfcart_C::DoFoldAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Golfcart.BP_Golfcart_C.DoFoldAnimation");

	ABP_Golfcart_C_DoFoldAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Golfcart.BP_Golfcart_C.ExecuteUbergraph_BP_Golfcart
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Golfcart_C::ExecuteUbergraph_BP_Golfcart(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Golfcart.BP_Golfcart_C.ExecuteUbergraph_BP_Golfcart");

	ABP_Golfcart_C_ExecuteUbergraph_BP_Golfcart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
