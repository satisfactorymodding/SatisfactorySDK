// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_LensDistortion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLensDistortionCameraModel* A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLensDistortionCameraModel* B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULensDistortionBlueprintLibrary::STATIC_NotEqual_CompareLensDistortionModels(struct FLensDistortionCameraModel* A, struct FLensDistortionCameraModel* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels");

	ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLensDistortionCameraModel* CameraModel                    (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         DistortedHorizontalFOV         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DistortedAspectRatio           (Parm, ZeroConstructor, IsPlainOldData)
// float                          UndistortOverscanFactor        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULensDistortionBlueprintLibrary::STATIC_GetUndistortOverscanFactor(struct FLensDistortionCameraModel* CameraModel, float* DistortedHorizontalFOV, float* DistortedAspectRatio, float* UndistortOverscanFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor");

	ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Params params;
	params.CameraModel = CameraModel;
	params.DistortedHorizontalFOV = DistortedHorizontalFOV;
	params.DistortedAspectRatio = DistortedAspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UndistortOverscanFactor != nullptr)
		*UndistortOverscanFactor = params.UndistortOverscanFactor;
}


// Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLensDistortionCameraModel* A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLensDistortionCameraModel* B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULensDistortionBlueprintLibrary::STATIC_EqualEqual_CompareLensDistortionModels(struct FLensDistortionCameraModel* A, struct FLensDistortionCameraModel* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels");

	ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLensDistortionCameraModel* CameraModel                    (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         DistortedHorizontalFOV         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DistortedAspectRatio           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         UndistortOverscanFactor        (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D** OutputRenderTarget             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OutputMultiply                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OutputAdd                      (Parm, ZeroConstructor, IsPlainOldData)

void ULensDistortionBlueprintLibrary::STATIC_DrawUVDisplacementToRenderTarget(class UObject** WorldContextObject, struct FLensDistortionCameraModel* CameraModel, float* DistortedHorizontalFOV, float* DistortedAspectRatio, float* UndistortOverscanFactor, class UTextureRenderTarget2D** OutputRenderTarget, float* OutputMultiply, float* OutputAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget");

	ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CameraModel = CameraModel;
	params.DistortedHorizontalFOV = DistortedHorizontalFOV;
	params.DistortedAspectRatio = DistortedAspectRatio;
	params.UndistortOverscanFactor = UndistortOverscanFactor;
	params.OutputRenderTarget = OutputRenderTarget;
	params.OutputMultiply = OutputMultiply;
	params.OutputAdd = OutputAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
