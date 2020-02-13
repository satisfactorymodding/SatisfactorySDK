// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Composure_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Composure.CompositingPickerAsyncTask.OpenCompositingPicker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D** PickerTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               DisplayImage                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  WindowTitle                    (Parm)
// bool*                          bAverageColorOnDrag            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseImplicitGamma              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCompositingPickerAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCompositingPickerAsyncTask* UCompositingPickerAsyncTask::STATIC_OpenCompositingPicker(class UTextureRenderTarget2D** PickerTarget, class UTexture** DisplayImage, struct FText* WindowTitle, bool* bAverageColorOnDrag, bool* bUseImplicitGamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingPickerAsyncTask.OpenCompositingPicker");

	UCompositingPickerAsyncTask_OpenCompositingPicker_Params params;
	params.PickerTarget = PickerTarget;
	params.DisplayImage = DisplayImage;
	params.WindowTitle = WindowTitle;
	params.bAverageColorOnDrag = bAverageColorOnDrag;
	params.bUseImplicitGamma = bUseImplicitGamma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.ComposurePipelineBaseActor.SetAutoRun
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewAutoRunVal                 (Parm, ZeroConstructor, IsPlainOldData)

void AComposurePipelineBaseActor::SetAutoRun(bool* bNewAutoRunVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePipelineBaseActor.SetAutoRun");

	AComposurePipelineBaseActor_SetAutoRun_Params params;
	params.bNewAutoRunVal = bNewAutoRunVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposurePipelineBaseActor.IsActivelyRunning
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AComposurePipelineBaseActor::IsActivelyRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePipelineBaseActor.IsActivelyRunning");

	AComposurePipelineBaseActor_IsActivelyRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.ComposurePipelineBaseActor.EnqueueRendering
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCameraCutThisFrame            (Parm, ZeroConstructor, IsPlainOldData)

void AComposurePipelineBaseActor::EnqueueRendering(bool* bCameraCutThisFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePipelineBaseActor.EnqueueRendering");

	AComposurePipelineBaseActor_EnqueueRendering_Params params;
	params.bCameraCutThisFrame = bCameraCutThisFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElement.SetEditorColorPickingTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D** PickingTarget                  (Parm, ZeroConstructor, IsPlainOldData)

void ACompositingElement::SetEditorColorPickingTarget(class UTextureRenderTarget2D** PickingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.SetEditorColorPickingTarget");

	ACompositingElement_SetEditorColorPickingTarget_Params params;
	params.PickingTarget = PickingTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElement.SetEditorColorPickerDisplayImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture**               PickerDisplayImage             (Parm, ZeroConstructor, IsPlainOldData)

void ACompositingElement::SetEditorColorPickerDisplayImage(class UTexture** PickerDisplayImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.SetEditorColorPickerDisplayImage");

	ACompositingElement_SetEditorColorPickerDisplayImage_Params params;
	params.PickerDisplayImage = PickerDisplayImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElement.RequestNamedRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ReferenceName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RenderPercentage               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ETargetUsageFlags*             UsageTag                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* ACompositingElement::RequestNamedRenderTarget(struct FName* ReferenceName, float* RenderPercentage, ETargetUsageFlags* UsageTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RequestNamedRenderTarget");

	ACompositingElement_RequestNamedRenderTarget_Params params;
	params.ReferenceName = ReferenceName;
	params.RenderPercentage = RenderPercentage;
	params.UsageTag = UsageTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.RenderCompositingMaterialToTarget
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCompositingMaterial    CompMaterial                   (Parm, OutParm, ReferenceParm)
// class UTextureRenderTarget2D** RenderTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ResultLookupName               (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* ACompositingElement::RenderCompositingMaterialToTarget(class UTextureRenderTarget2D** RenderTarget, struct FName* ResultLookupName, struct FCompositingMaterial* CompMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RenderCompositingMaterialToTarget");

	ACompositingElement_RenderCompositingMaterialToTarget_Params params;
	params.RenderTarget = RenderTarget;
	params.ResultLookupName = ResultLookupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CompMaterial != nullptr)
		*CompMaterial = params.CompMaterial;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.RenderCompositingMaterial
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCompositingMaterial    CompMaterial                   (Parm, OutParm, ReferenceParm)
// float*                         RenderScale                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ResultLookupName               (Parm, ZeroConstructor, IsPlainOldData)
// ETargetUsageFlags*             UsageTag                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* ACompositingElement::RenderCompositingMaterial(float* RenderScale, struct FName* ResultLookupName, ETargetUsageFlags* UsageTag, struct FCompositingMaterial* CompMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RenderCompositingMaterial");

	ACompositingElement_RenderCompositingMaterial_Params params;
	params.RenderScale = RenderScale;
	params.ResultLookupName = ResultLookupName;
	params.UsageTag = UsageTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CompMaterial != nullptr)
		*CompMaterial = params.CompMaterial;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.RenderCompElement
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCameraCutThisFrame            (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* ACompositingElement::RenderCompElement(bool* bCameraCutThisFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RenderCompElement");

	ACompositingElement_RenderCompElement_Params params;
	params.bCameraCutThisFrame = bCameraCutThisFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.ReleaseOwnedTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D** OwnedTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACompositingElement::ReleaseOwnedTarget(class UTextureRenderTarget2D** OwnedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.ReleaseOwnedTarget");

	ACompositingElement_ReleaseOwnedTarget_Params params;
	params.OwnedTarget = OwnedTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.RegisterPassResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ReferenceName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               PassResult                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetAsLatestRenderResult       (Parm, ZeroConstructor, IsPlainOldData)

void ACompositingElement::RegisterPassResult(struct FName* ReferenceName, class UTexture** PassResult, bool* bSetAsLatestRenderResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RegisterPassResult");

	ACompositingElement_RegisterPassResult_Params params;
	params.ReferenceName = ReferenceName;
	params.PassResult = PassResult;
	params.bSetAsLatestRenderResult = bSetAsLatestRenderResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElement.GetTransformsList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCompositingElementTransform*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UCompositingElementTransform*> ACompositingElement::GetTransformsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetTransformsList");

	ACompositingElement_GetTransformsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.GetRenderResolution
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntPoint ACompositingElement::GetRenderResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetRenderResolution");

	ACompositingElement_GetRenderResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.GetOutputsList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCompositingElementOutput*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UCompositingElementOutput*> ACompositingElement::GetOutputsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetOutputsList");

	ACompositingElement_GetOutputsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.GetLatestRenderResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* ACompositingElement::GetLatestRenderResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetLatestRenderResult");

	ACompositingElement_GetLatestRenderResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.GetInputsList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCompositingElementInput*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UCompositingElementInput*> ACompositingElement::GetInputsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetInputsList");

	ACompositingElement_GetInputsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.GetCompElementName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ACompositingElement::GetCompElementName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetCompElementName");

	ACompositingElement_GetCompElementName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.FindTransformPass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass**                 TransformType                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                PassResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalPassName               (Parm, ZeroConstructor, IsPlainOldData)
// class UCompositingElementTransform* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCompositingElementTransform* ACompositingElement::FindTransformPass(class UClass** TransformType, struct FName* OptionalPassName, class UTexture** PassResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindTransformPass");

	ACompositingElement_FindTransformPass_Params params;
	params.TransformType = TransformType;
	params.OptionalPassName = OptionalPassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassResult != nullptr)
		*PassResult = params.PassResult;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.FindTargetCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACameraActor*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACameraActor* ACompositingElement::FindTargetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindTargetCamera");

	ACompositingElement_FindTargetCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.FindOutputPass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 OutputType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalPassName               (Parm, ZeroConstructor, IsPlainOldData)
// class UCompositingElementOutput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCompositingElementOutput* ACompositingElement::FindOutputPass(class UClass** OutputType, struct FName* OptionalPassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindOutputPass");

	ACompositingElement_FindOutputPass_Params params;
	params.OutputType = OutputType;
	params.OptionalPassName = OptionalPassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.FindNamedRenderResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  PassName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSearchSubElements             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* ACompositingElement::FindNamedRenderResult(struct FName* PassName, bool* bSearchSubElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindNamedRenderResult");

	ACompositingElement_FindNamedRenderResult_Params params;
	params.PassName = PassName;
	params.bSearchSubElements = bSearchSubElements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.FindInputPass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass**                 InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                PassResult                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalPassName               (Parm, ZeroConstructor, IsPlainOldData)
// class UCompositingElementInput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCompositingElementInput* ACompositingElement::FindInputPass(class UClass** InputType, struct FName* OptionalPassName, class UTexture** PassResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindInputPass");

	ACompositingElement_FindInputPass_Params params;
	params.InputType = InputType;
	params.OptionalPassName = OptionalPassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassResult != nullptr)
		*PassResult = params.PassResult;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.AddNewTransformPass
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  PassName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TransformType                  (Parm, ZeroConstructor, IsPlainOldData)
// class UCompositingElementTransform* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCompositingElementTransform* ACompositingElement::AddNewTransformPass(struct FName* PassName, class UClass** TransformType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.AddNewTransformPass");

	ACompositingElement_AddNewTransformPass_Params params;
	params.PassName = PassName;
	params.TransformType = TransformType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.AddNewOutputPass
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  PassName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 OutputType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UCompositingElementOutput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCompositingElementOutput* ACompositingElement::AddNewOutputPass(struct FName* PassName, class UClass** OutputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.AddNewOutputPass");

	ACompositingElement_AddNewOutputPass_Params params;
	params.PassName = PassName;
	params.OutputType = OutputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElement.AddNewInputPass
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  PassName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCompositingElementInput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCompositingElementInput* ACompositingElement::AddNewInputPass(struct FName* PassName, class UClass** InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.AddNewInputPass");

	ACompositingElement_AddNewInputPass_Params params;
	params.PassName = PassName;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElementPass.SetPassEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabledIn                     (Parm, ZeroConstructor, IsPlainOldData)

void UCompositingElementPass::SetPassEnabled(bool* bEnabledIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.SetPassEnabled");

	UCompositingElementPass_SetPassEnabled_Params params;
	params.bEnabledIn = bEnabledIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElementPass.Reset
// (Native, Event, Public, BlueprintEvent)

void UCompositingElementPass::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.Reset");

	UCompositingElementPass_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElementPass.RequestRenderTarget
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntPoint*              Dimensions                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextureRenderTargetFormat>* Format                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* UCompositingElementPass::RequestRenderTarget(struct FIntPoint* Dimensions, TEnumAsByte<ETextureRenderTargetFormat>* Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.RequestRenderTarget");

	UCompositingElementPass_RequestRenderTarget_Params params;
	params.Dimensions = Dimensions;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElementPass.RequestNativelyFormattedTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float*                         RenderScale                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* UCompositingElementPass::RequestNativelyFormattedTarget(float* RenderScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.RequestNativelyFormattedTarget");

	UCompositingElementPass_RequestNativelyFormattedTarget_Params params;
	params.RenderScale = RenderScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElementPass.ReleaseRenderTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D** AssignedTarget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCompositingElementPass::ReleaseRenderTarget(class UTextureRenderTarget2D** AssignedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.ReleaseRenderTarget");

	UCompositingElementPass_ReleaseRenderTarget_Params params;
	params.AssignedTarget = AssignedTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElementPass.OnFrameEnd
// (Native, Event, Public, BlueprintEvent)

void UCompositingElementPass::OnFrameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.OnFrameEnd");

	UCompositingElementPass_OnFrameEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElementPass.OnFrameBegin
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCameraCutThisFrame            (Parm, ZeroConstructor, IsPlainOldData)

void UCompositingElementPass::OnFrameBegin(bool* bCameraCutThisFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.OnFrameBegin");

	UCompositingElementPass_OnFrameBegin_Params params;
	params.bCameraCutThisFrame = bCameraCutThisFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElementPass.OnEnabled
// (Native, Event, Protected, BlueprintEvent)

void UCompositingElementPass::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.OnEnabled");

	UCompositingElementPass_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElementPass.OnDisabled
// (Native, Event, Protected, BlueprintEvent)

void UCompositingElementPass::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.OnDisabled");

	UCompositingElementPass_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElementInput.GenerateInput
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UCompositingElementInput::GenerateInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementInput.GenerateInput");

	UCompositingElementInput_GenerateInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingInputInterface.OnFrameEnd
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCompositingInputInterfaceProxy** Proxy                          (Parm, ZeroConstructor, IsPlainOldData)

void UCompositingInputInterface::OnFrameEnd(class UCompositingInputInterfaceProxy** Proxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingInputInterface.OnFrameEnd");

	UCompositingInputInterface_OnFrameEnd_Params params;
	params.Proxy = Proxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingInputInterface.OnFrameBegin
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCompositingInputInterfaceProxy** Proxy                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCameraCutThisFrame            (Parm, ZeroConstructor, IsPlainOldData)

void UCompositingInputInterface::OnFrameBegin(class UCompositingInputInterfaceProxy** Proxy, bool* bCameraCutThisFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingInputInterface.OnFrameBegin");

	UCompositingInputInterface_OnFrameBegin_Params params;
	params.Proxy = Proxy;
	params.bCameraCutThisFrame = bCameraCutThisFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingInputInterface.GenerateInput
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCompositingInputInterfaceProxy** Proxy                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UCompositingInputInterface::GenerateInput(class UCompositingInputInterfaceProxy** Proxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingInputInterface.GenerateInput");

	UCompositingInputInterface_GenerateInput_Params params;
	params.Proxy = Proxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElementOutput.RelayOutput
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture**               FinalResult                    (Parm, ZeroConstructor, IsPlainOldData)
// class UComposurePostProcessingPassProxy** PostProcessProxy               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCompositingElementOutput::RelayOutput(class UTexture** FinalResult, class UComposurePostProcessingPassProxy** PostProcessProxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementOutput.RelayOutput");

	UCompositingElementOutput_RelayOutput_Params params;
	params.FinalResult = FinalResult;
	params.PostProcessProxy = PostProcessProxy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingElementTransform.FindNamedPrePassResult
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName*                  PassLookupName                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UCompositingElementTransform::FindNamedPrePassResult(struct FName* PassLookupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementTransform.FindNamedPrePassResult");

	UCompositingElementTransform_FindNamedPrePassResult_Params params;
	params.PassLookupName = PassLookupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElementTransform.ApplyTransform
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture**               Input                          (Parm, ZeroConstructor, IsPlainOldData)
// class UComposurePostProcessingPassProxy** PostProcessProxy               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ACameraActor**           TargetCamera                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UCompositingElementTransform::ApplyTransform(class UTexture** Input, class UComposurePostProcessingPassProxy** PostProcessProxy, class ACameraActor** TargetCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementTransform.ApplyTransform");

	UCompositingElementTransform_ApplyTransform_Params params;
	params.Input = Input;
	params.PostProcessProxy = PostProcessProxy;
	params.TargetCamera = TargetCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.CompositingElementMaterialPass.ApplyMaterialParams
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic** Mid                            (Parm, ZeroConstructor, IsPlainOldData)

void UCompositingElementMaterialPass::ApplyMaterialParams(class UMaterialInstanceDynamic** Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementMaterialPass.ApplyMaterialParams");

	UCompositingElementMaterialPass_ApplyMaterialParams_Params params;
	params.Mid = Mid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposureBlueprintLibrary.SetUVMapSettingsToMaterialParameters
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FComposureUVMapSettings* UVMapSettings                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic** Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UComposureBlueprintLibrary::STATIC_SetUVMapSettingsToMaterialParameters(struct FComposureUVMapSettings* UVMapSettings, class UMaterialInstanceDynamic** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.SetUVMapSettingsToMaterialParameters");

	UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Params params;
	params.UVMapSettings = UVMapSettings;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposureBlueprintLibrary.InvertUVDisplacementMapEncodingParameters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D*              In                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UComposureBlueprintLibrary::STATIC_InvertUVDisplacementMapEncodingParameters(struct FVector2D* In, struct FVector2D* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.InvertUVDisplacementMapEncodingParameters");

	UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Composure.ComposureBlueprintLibrary.GetRedGreenUVFactorsFromChromaticAberration
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         ChromaticAberrationAmount      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               RedGreenUVFactors              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UComposureBlueprintLibrary::STATIC_GetRedGreenUVFactorsFromChromaticAberration(float* ChromaticAberrationAmount, struct FVector2D* RedGreenUVFactors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.GetRedGreenUVFactorsFromChromaticAberration");

	UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Params params;
	params.ChromaticAberrationAmount = ChromaticAberrationAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RedGreenUVFactors != nullptr)
		*RedGreenUVFactors = params.RedGreenUVFactors;
}


// Function Composure.ComposureBlueprintLibrary.GetProjectionMatrixFromPostMoveSettings
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComposurePostMoveSettings* PostMoveSettings               (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         HorizontalFOVAngle             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AspectRatio                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FMatrix                 ProjectionMatrix               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UComposureBlueprintLibrary::STATIC_GetProjectionMatrixFromPostMoveSettings(struct FComposurePostMoveSettings* PostMoveSettings, float* HorizontalFOVAngle, float* AspectRatio, struct FMatrix* ProjectionMatrix)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.GetProjectionMatrixFromPostMoveSettings");

	UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Params params;
	params.PostMoveSettings = PostMoveSettings;
	params.HorizontalFOVAngle = HorizontalFOVAngle;
	params.AspectRatio = AspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectionMatrix != nullptr)
		*ProjectionMatrix = params.ProjectionMatrix;
}


// Function Composure.ComposureBlueprintLibrary.GetPlayerDisplayGamma
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerCameraManager**   PlayerCameraManager            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayGamma                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UComposureBlueprintLibrary::STATIC_GetPlayerDisplayGamma(class APlayerCameraManager** PlayerCameraManager, float* DisplayGamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.GetPlayerDisplayGamma");

	UComposureBlueprintLibrary_GetPlayerDisplayGamma_Params params;
	params.PlayerCameraManager = PlayerCameraManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayGamma != nullptr)
		*DisplayGamma = params.DisplayGamma;
}


// Function Composure.ComposureBlueprintLibrary.GetCroppingUVTransformationMatrixFromPostMoveSettings
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FComposurePostMoveSettings* PostMoveSettings               (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         AspectRatio                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FMatrix                 CropingUVTransformationMatrix  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMatrix                 UncropingUVTransformationMatrix (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UComposureBlueprintLibrary::STATIC_GetCroppingUVTransformationMatrixFromPostMoveSettings(struct FComposurePostMoveSettings* PostMoveSettings, float* AspectRatio, struct FMatrix* CropingUVTransformationMatrix, struct FMatrix* UncropingUVTransformationMatrix)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.GetCroppingUVTransformationMatrixFromPostMoveSettings");

	UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Params params;
	params.PostMoveSettings = PostMoveSettings;
	params.AspectRatio = AspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CropingUVTransformationMatrix != nullptr)
		*CropingUVTransformationMatrix = params.CropingUVTransformationMatrix;
	if (UncropingUVTransformationMatrix != nullptr)
		*UncropingUVTransformationMatrix = params.UncropingUVTransformationMatrix;
}


// Function Composure.ComposureBlueprintLibrary.CreatePlayerCompositingTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UComposurePlayerCompositingTarget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UComposurePlayerCompositingTarget* UComposureBlueprintLibrary::STATIC_CreatePlayerCompositingTarget(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.CreatePlayerCompositingTarget");

	UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.ComposureBlueprintLibrary.CopyCameraSettingsToSceneCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent**       SrcCamera                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneCaptureComponent2D** DstCaptureComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UComposureBlueprintLibrary::STATIC_CopyCameraSettingsToSceneCapture(class UCameraComponent** SrcCamera, class USceneCaptureComponent2D** DstCaptureComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.CopyCameraSettingsToSceneCapture");

	UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Params params;
	params.SrcCamera = SrcCamera;
	params.DstCaptureComponent = DstCaptureComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposurePostProcessPass.SetSetupMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UComposurePostProcessPass::SetSetupMaterial(class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPass.SetSetupMaterial");

	UComposurePostProcessPass_SetSetupMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposurePostProcessPass.SetOutputRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D** RenderTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void UComposurePostProcessPass::SetOutputRenderTarget(class UTextureRenderTarget2D** RenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPass.SetOutputRenderTarget");

	UComposurePostProcessPass_SetOutputRenderTarget_Params params;
	params.RenderTarget = RenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposurePostProcessPass.GetSetupMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UComposurePostProcessPass::GetSetupMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPass.GetSetupMaterial");

	UComposurePostProcessPass_GetSetupMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.ComposurePostProcessPass.GetOutputRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* UComposurePostProcessPass::GetOutputRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPass.GetOutputRenderTarget");

	UComposurePostProcessPass_GetOutputRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.ComposureLensBloomPass.SetTonemapperReplacingMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic** Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UComposureLensBloomPass::SetTonemapperReplacingMaterial(class UMaterialInstanceDynamic** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureLensBloomPass.SetTonemapperReplacingMaterial");

	UComposureLensBloomPass_SetTonemapperReplacingMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposureLensBloomPass.BloomToRenderTarget
// (Final, Native, Public, BlueprintCallable)

void UComposureLensBloomPass::BloomToRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureLensBloomPass.BloomToRenderTarget");

	UComposureLensBloomPass_BloomToRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposurePostProcessPassPolicy.SetupPostProcess
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneCaptureComponent2D** SceneCapture                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInterface*      TonemapperOverride             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UComposurePostProcessPassPolicy::SetupPostProcess(class USceneCaptureComponent2D** SceneCapture, class UMaterialInterface** TonemapperOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPassPolicy.SetupPostProcess");

	UComposurePostProcessPassPolicy_SetupPostProcess_Params params;
	params.SceneCapture = SceneCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TonemapperOverride != nullptr)
		*TonemapperOverride = params.TonemapperOverride;
}


// Function Composure.ComposurePlayerCompositingTarget.SetRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D** RenderTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void UComposurePlayerCompositingTarget::SetRenderTarget(class UTextureRenderTarget2D** RenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePlayerCompositingTarget.SetRenderTarget");

	UComposurePlayerCompositingTarget_SetRenderTarget_Params params;
	params.RenderTarget = RenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposurePlayerCompositingTarget.SetPlayerCameraManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerCameraManager**   PlayerCameraManager            (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerCameraManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerCameraManager* UComposurePlayerCompositingTarget::SetPlayerCameraManager(class APlayerCameraManager** PlayerCameraManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePlayerCompositingTarget.SetPlayerCameraManager");

	UComposurePlayerCompositingTarget_SetPlayerCameraManager_Params params;
	params.PlayerCameraManager = PlayerCameraManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.ComposurePlayerCompositingTarget.GetPlayerCameraManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerCameraManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerCameraManager* UComposurePlayerCompositingTarget::GetPlayerCameraManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePlayerCompositingTarget.GetPlayerCameraManager");

	UComposurePlayerCompositingTarget_GetPlayerCameraManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.ComposureCompositingTargetComponent.SetDisplayTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture**               DisplayTexture                 (Parm, ZeroConstructor, IsPlainOldData)

void UComposureCompositingTargetComponent::SetDisplayTexture(class UTexture** DisplayTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureCompositingTargetComponent.SetDisplayTexture");

	UComposureCompositingTargetComponent_SetDisplayTexture_Params params;
	params.DisplayTexture = DisplayTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposureCompositingTargetComponent.GetDisplayTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UComposureCompositingTargetComponent::GetDisplayTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureCompositingTargetComponent.GetDisplayTexture");

	UComposureCompositingTargetComponent_GetDisplayTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Composure.ComposurePostProcessingPassProxy.Execute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture**               PrePassInput                   (Parm, ZeroConstructor, IsPlainOldData)
// class UComposurePostProcessPassPolicy** PostProcessPass                (Parm, ZeroConstructor, IsPlainOldData)

void UComposurePostProcessingPassProxy::Execute(class UTexture** PrePassInput, class UComposurePostProcessPassPolicy** PostProcessPass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessingPassProxy.Execute");

	UComposurePostProcessingPassProxy_Execute_Params params;
	params.PrePassInput = PrePassInput;
	params.PostProcessPass = PostProcessPass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.ComposureTonemapperPass.TonemapToRenderTarget
// (Final, Native, Public, BlueprintCallable)

void UComposureTonemapperPass::TonemapToRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.ComposureTonemapperPass.TonemapToRenderTarget");

	UComposureTonemapperPass_TonemapToRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.CompositingTextureLookupTable.FindNamedPassResult
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  LookupName                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                OutTexture                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCompositingTextureLookupTable::FindNamedPassResult(struct FName* LookupName, class UTexture** OutTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.CompositingTextureLookupTable.FindNamedPassResult");

	UCompositingTextureLookupTable_FindNamedPassResult_Params params;
	params.LookupName = LookupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTexture != nullptr)
		*OutTexture = params.OutTexture;

	return params.ReturnValue;
}


// Function Composure.MovieSceneComposureExportClient.InitializeForExport
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMovieSceneComposureExportInitializer** ExportInitializer              (Parm, ZeroConstructor, IsPlainOldData)

void UMovieSceneComposureExportClient::InitializeForExport(class UMovieSceneComposureExportInitializer** ExportInitializer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.MovieSceneComposureExportClient.InitializeForExport");

	UMovieSceneComposureExportClient_InitializeForExport_Params params;
	params.ExportInitializer = ExportInitializer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Composure.MovieSceneComposureExportInitializer.ExportSceneCaptureBuffers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ACompositingElement**    CompShotElement                (Parm, ZeroConstructor, IsPlainOldData)
// class USceneCaptureComponent2D** SceneCapture                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class FString>*         BuffersToExport                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMovieSceneComposureExportInitializer::ExportSceneCaptureBuffers(class ACompositingElement** CompShotElement, class USceneCaptureComponent2D** SceneCapture, TArray<class FString>* BuffersToExport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Composure.MovieSceneComposureExportInitializer.ExportSceneCaptureBuffers");

	UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Params params;
	params.CompShotElement = CompShotElement;
	params.SceneCapture = SceneCapture;
	params.BuffersToExport = BuffersToExport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
