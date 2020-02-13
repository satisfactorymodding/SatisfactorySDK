// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_InstancedSplines_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InstancedSplines.FGInstancedSplineMeshComponent.UpdateInstanceTransform
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                StartPos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                StartTangent                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                EndPos                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                EndTangent                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFGInstancedSplineMeshComponent::UpdateInstanceTransform(int* InstanceIndex, struct FVector* StartPos, struct FVector* StartTangent, struct FVector* EndPos, struct FVector* EndTangent, bool* bWorldSpace, bool* bMarkRenderStateDirty, bool* bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstancedSplines.FGInstancedSplineMeshComponent.UpdateInstanceTransform");

	UFGInstancedSplineMeshComponent_UpdateInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.StartPos = StartPos;
	params.StartTangent = StartTangent;
	params.EndPos = EndPos;
	params.EndTangent = EndTangent;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InstancedSplines.FGInstancedSplineMeshComponent.RemoveInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFGInstancedSplineMeshComponent::RemoveInstance(int* InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstancedSplines.FGInstancedSplineMeshComponent.RemoveInstance");

	UFGInstancedSplineMeshComponent_RemoveInstance_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InstancedSplines.FGInstancedSplineMeshComponent.GetInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFGInstancedSplineMeshComponent::GetInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstancedSplines.FGInstancedSplineMeshComponent.GetInstanceCount");

	UFGInstancedSplineMeshComponent_GetInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InstancedSplines.FGInstancedSplineMeshComponent.ClearInstances
// (Native, Public, BlueprintCallable)

void UFGInstancedSplineMeshComponent::ClearInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstancedSplines.FGInstancedSplineMeshComponent.ClearInstances");

	UFGInstancedSplineMeshComponent_ClearInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InstancedSplines.FGInstancedSplineMeshComponent.AddInstance
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                StartPos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                StartTangent                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                EndPos                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                EndTangent                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFGInstancedSplineMeshComponent::AddInstance(struct FVector* StartPos, struct FVector* StartTangent, struct FVector* EndPos, struct FVector* EndTangent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstancedSplines.FGInstancedSplineMeshComponent.AddInstance");

	UFGInstancedSplineMeshComponent_AddInstance_Params params;
	params.StartPos = StartPos;
	params.StartTangent = StartTangent;
	params.EndPos = EndPos;
	params.EndTangent = EndTangent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
