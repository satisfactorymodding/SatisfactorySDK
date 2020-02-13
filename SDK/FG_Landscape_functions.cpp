// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Landscape_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(struct FName* ParameterName, struct FLinearColor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(struct FName* ParameterName, class UTexture** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(struct FName* ParameterName, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     NewLandscapeMaterial           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface** NewLandscapeMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	ALandscapeProxy_EditorSetLandscapeMaterial_Params params;
	params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent**       InSplineComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         StartWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartSideFalloff               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndSideFalloff                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartRoll                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndRoll                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumSubdivisions                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRaiseHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLowerHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// class ULandscapeLayerInfoObject** PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::EditorApplySpline(class USplineComponent** InSplineComponent, float* StartWidth, float* EndWidth, float* StartSideFalloff, float* EndSideFalloff, float* StartRoll, float* EndRoll, int* NumSubdivisions, bool* bRaiseHeights, bool* bLowerHeights, class ULandscapeLayerInfoObject** PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool* InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InUseTessellationComponentScreenSizeFalloff (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float* InUseTessellationComponentScreenSizeFalloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params params;
	params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InTessellationComponentScreenSize (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeTessellationComponentScreenSize(float* InTessellationComponentScreenSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	ALandscapeProxy_ChangeTessellationComponentScreenSize_Params params;
	params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InLODDistanceFactor            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeLODDistanceFactor(float* InLODDistanceFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float* InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeBlueprintCustomBrush.Render
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          InIsHeightmap                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D** InCombinedResult               (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* ALandscapeBlueprintCustomBrush::Render(bool* InIsHeightmap, class UTextureRenderTarget2D** InCombinedResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintCustomBrush.Render");

	ALandscapeBlueprintCustomBrush_Render_Params params;
	params.InIsHeightmap = InIsHeightmap;
	params.InCombinedResult = InCombinedResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeBlueprintCustomBrush.Initialize
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FIntPoint*              InLandscapeSize                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FIntPoint*              InLandscapeRenderTargetSize    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ALandscapeBlueprintCustomBrush::Initialize(struct FIntPoint* InLandscapeSize, struct FIntPoint* InLandscapeRenderTargetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintCustomBrush.Initialize");

	ALandscapeBlueprintCustomBrush_Initialize_Params params;
	params.InLandscapeSize = InLandscapeSize;
	params.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           InIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int* InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	ULandscapeComponent_GetMaterialInstanceDynamic_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class USplineMeshComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	ULandscapeSplinesComponent_GetSplineMeshComponents_Params params;

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
