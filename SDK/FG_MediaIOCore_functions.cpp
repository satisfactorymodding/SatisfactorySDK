// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_MediaIOCore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D** RenderTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaCapture::UpdateTextureRenderTarget2D(class UTextureRenderTarget2D** RenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D");

	UMediaCapture_UpdateTextureRenderTarget2D_Params params;
	params.RenderTarget = RenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.StopCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bAllowPendingFrameToBeProcess  (Parm, ZeroConstructor, IsPlainOldData)

void UMediaCapture::StopCapture(bool* bAllowPendingFrameToBeProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.StopCapture");

	UMediaCapture_StopCapture_Params params;
	params.bAllowPendingFrameToBeProcess = bAllowPendingFrameToBeProcess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaIOCore.MediaCapture.SetMediaOutput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaOutput**           InMediaOutput                  (Parm, ZeroConstructor, IsPlainOldData)

void UMediaCapture::SetMediaOutput(class UMediaOutput** InMediaOutput)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.SetMediaOutput");

	UMediaCapture_SetMediaOutput_Params params;
	params.InMediaOutput = InMediaOutput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaIOCore.MediaCapture.GetState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMediaCaptureState             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMediaCaptureState UMediaCapture::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetState");

	UMediaCapture_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntPoint UMediaCapture::GetDesiredSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetDesiredSize");

	UMediaCapture_GetDesiredSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPixelFormat>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPixelFormat> UMediaCapture::GetDesiredPixelFormat()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetDesiredPixelFormat");

	UMediaCapture_GetDesiredPixelFormat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D** RenderTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FMediaCaptureOptions*   CaptureOptions                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaCapture::CaptureTextureRenderTarget2D(class UTextureRenderTarget2D** RenderTarget, struct FMediaCaptureOptions* CaptureOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D");

	UMediaCapture_CaptureTextureRenderTarget2D_Params params;
	params.RenderTarget = RenderTarget;
	params.CaptureOptions = CaptureOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMediaCaptureOptions*   CaptureOptions                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaCapture::CaptureActiveSceneViewport(struct FMediaCaptureOptions* CaptureOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport");

	UMediaCapture_CaptureActiveSceneViewport_Params params;
	params.CaptureOptions = CaptureOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MediaIOCore.MediaOutput.Validate
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  OutFailureReason               (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaOutput::Validate(class FString* OutFailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaOutput.Validate");

	UMediaOutput_Validate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFailureReason != nullptr)
		*OutFailureReason = params.OutFailureReason;

	return params.ReturnValue;
}


// Function MediaIOCore.MediaOutput.CreateMediaCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaCapture*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaCapture* UMediaOutput::CreateMediaCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaOutput.CreateMediaCapture");

	UMediaOutput_CreateMediaCapture_Params params;

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
