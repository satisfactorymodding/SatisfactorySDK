// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_PipeFlowIndicatorComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PipeFlowIndicatorComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.ReceiveTick");

	UBP_PipeFlowIndicatorComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PipeFlowIndicatorComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.ReceiveBeginPlay");

	UBP_PipeFlowIndicatorComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.OnFluidDescriptorSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 fluidDescriptor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PipeFlowIndicatorComponent_C::OnFluidDescriptorSet(class UClass** fluidDescriptor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.OnFluidDescriptorSet");

	UBP_PipeFlowIndicatorComponent_C_OnFluidDescriptorSet_Params params;
	params.fluidDescriptor = fluidDescriptor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.ExecuteUbergraph_BP_PipeFlowIndicatorComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PipeFlowIndicatorComponent_C::ExecuteUbergraph_BP_PipeFlowIndicatorComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeFlowIndicatorComponent.BP_PipeFlowIndicatorComponent_C.ExecuteUbergraph_BP_PipeFlowIndicatorComponent");

	UBP_PipeFlowIndicatorComponent_C_ExecuteUbergraph_BP_PipeFlowIndicatorComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
