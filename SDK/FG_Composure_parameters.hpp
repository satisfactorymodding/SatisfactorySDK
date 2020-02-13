#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Composure_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Composure.CompositingPickerAsyncTask.OpenCompositingPicker
struct UCompositingPickerAsyncTask_OpenCompositingPicker_Params
{
	class UTextureRenderTarget2D**                     PickerTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   DisplayImage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      WindowTitle;                                              // (Parm)
	bool*                                              bAverageColorOnDrag;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseImplicitGamma;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCompositingPickerAsyncTask*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.ComposurePipelineBaseActor.SetAutoRun
struct AComposurePipelineBaseActor_SetAutoRun_Params
{
	bool*                                              bNewAutoRunVal;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposurePipelineBaseActor.IsActivelyRunning
struct AComposurePipelineBaseActor_IsActivelyRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.ComposurePipelineBaseActor.EnqueueRendering
struct AComposurePipelineBaseActor_EnqueueRendering_Params
{
	bool*                                              bCameraCutThisFrame;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.CompositingElement.SetEditorColorPickingTarget
struct ACompositingElement_SetEditorColorPickingTarget_Params
{
	class UTextureRenderTarget2D**                     PickingTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.CompositingElement.SetEditorColorPickerDisplayImage
struct ACompositingElement_SetEditorColorPickerDisplayImage_Params
{
	class UTexture**                                   PickerDisplayImage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.CompositingElement.RequestNamedRenderTarget
struct ACompositingElement_RequestNamedRenderTarget_Params
{
	struct FName*                                      ReferenceName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RenderPercentage;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ETargetUsageFlags*                                 UsageTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.RenderCompositingMaterialToTarget
struct ACompositingElement_RenderCompositingMaterialToTarget_Params
{
	struct FCompositingMaterial                        CompMaterial;                                             // (Parm, OutParm, ReferenceParm)
	class UTextureRenderTarget2D**                     RenderTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ResultLookupName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.RenderCompositingMaterial
struct ACompositingElement_RenderCompositingMaterial_Params
{
	struct FCompositingMaterial                        CompMaterial;                                             // (Parm, OutParm, ReferenceParm)
	float*                                             RenderScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ResultLookupName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ETargetUsageFlags*                                 UsageTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.RenderCompElement
struct ACompositingElement_RenderCompElement_Params
{
	bool*                                              bCameraCutThisFrame;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.ReleaseOwnedTarget
struct ACompositingElement_ReleaseOwnedTarget_Params
{
	class UTextureRenderTarget2D**                     OwnedTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.RegisterPassResult
struct ACompositingElement_RegisterPassResult_Params
{
	struct FName*                                      ReferenceName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   PassResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetAsLatestRenderResult;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.CompositingElement.GetTransformsList
struct ACompositingElement_GetTransformsList_Params
{
	TArray<class UCompositingElementTransform*>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Composure.CompositingElement.GetRenderResolution
struct ACompositingElement_GetRenderResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.GetOutputsList
struct ACompositingElement_GetOutputsList_Params
{
	TArray<class UCompositingElementOutput*>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Composure.CompositingElement.GetLatestRenderResult
struct ACompositingElement_GetLatestRenderResult_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.GetInputsList
struct ACompositingElement_GetInputsList_Params
{
	TArray<class UCompositingElementInput*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Composure.CompositingElement.GetCompElementName
struct ACompositingElement_GetCompElementName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.FindTransformPass
struct ACompositingElement_FindTransformPass_Params
{
	class UClass**                                     TransformType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    PassResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OptionalPassName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UCompositingElementTransform*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.FindTargetCamera
struct ACompositingElement_FindTargetCamera_Params
{
	class ACameraActor*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.FindOutputPass
struct ACompositingElement_FindOutputPass_Params
{
	class UClass**                                     OutputType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OptionalPassName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UCompositingElementOutput*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.FindNamedRenderResult
struct ACompositingElement_FindNamedRenderResult_Params
{
	struct FName*                                      PassName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSearchSubElements;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.FindInputPass
struct ACompositingElement_FindInputPass_Params
{
	class UClass**                                     InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    PassResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OptionalPassName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UCompositingElementInput*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.AddNewTransformPass
struct ACompositingElement_AddNewTransformPass_Params
{
	struct FName*                                      PassName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TransformType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UCompositingElementTransform*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.AddNewOutputPass
struct ACompositingElement_AddNewOutputPass_Params
{
	struct FName*                                      PassName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     OutputType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCompositingElementOutput*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElement.AddNewInputPass
struct ACompositingElement_AddNewInputPass_Params
{
	struct FName*                                      PassName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCompositingElementInput*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElementPass.SetPassEnabled
struct UCompositingElementPass_SetPassEnabled_Params
{
	bool*                                              bEnabledIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.CompositingElementPass.Reset
struct UCompositingElementPass_Reset_Params
{
};

// Function Composure.CompositingElementPass.RequestRenderTarget
struct UCompositingElementPass_RequestRenderTarget_Params
{
	struct FIntPoint*                                  Dimensions;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>*           Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElementPass.RequestNativelyFormattedTarget
struct UCompositingElementPass_RequestNativelyFormattedTarget_Params
{
	float*                                             RenderScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElementPass.ReleaseRenderTarget
struct UCompositingElementPass_ReleaseRenderTarget_Params
{
	class UTextureRenderTarget2D**                     AssignedTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElementPass.OnFrameEnd
struct UCompositingElementPass_OnFrameEnd_Params
{
};

// Function Composure.CompositingElementPass.OnFrameBegin
struct UCompositingElementPass_OnFrameBegin_Params
{
	bool*                                              bCameraCutThisFrame;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.CompositingElementPass.OnEnabled
struct UCompositingElementPass_OnEnabled_Params
{
};

// Function Composure.CompositingElementPass.OnDisabled
struct UCompositingElementPass_OnDisabled_Params
{
};

// Function Composure.CompositingElementInput.GenerateInput
struct UCompositingElementInput_GenerateInput_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingInputInterface.OnFrameEnd
struct UCompositingInputInterface_OnFrameEnd_Params
{
	class UCompositingInputInterfaceProxy**            Proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.CompositingInputInterface.OnFrameBegin
struct UCompositingInputInterface_OnFrameBegin_Params
{
	class UCompositingInputInterfaceProxy**            Proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCameraCutThisFrame;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.CompositingInputInterface.GenerateInput
struct UCompositingInputInterface_GenerateInput_Params
{
	class UCompositingInputInterfaceProxy**            Proxy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElementOutput.RelayOutput
struct UCompositingElementOutput_RelayOutput_Params
{
	class UTexture**                                   FinalResult;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UComposurePostProcessingPassProxy**          PostProcessProxy;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Composure.CompositingElementTransform.FindNamedPrePassResult
struct UCompositingElementTransform_FindNamedPrePassResult_Params
{
	struct FName*                                      PassLookupName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElementTransform.ApplyTransform
struct UCompositingElementTransform_ApplyTransform_Params
{
	class UTexture**                                   Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UComposurePostProcessingPassProxy**          PostProcessProxy;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ACameraActor**                               TargetCamera;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.CompositingElementMaterialPass.ApplyMaterialParams
struct UCompositingElementMaterialPass_ApplyMaterialParams_Params
{
	class UMaterialInstanceDynamic**                   Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureBlueprintLibrary.SetUVMapSettingsToMaterialParameters
struct UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Params
{
	struct FComposureUVMapSettings*                    UVMapSettings;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic**                   Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureBlueprintLibrary.InvertUVDisplacementMapEncodingParameters
struct UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Params
{
	struct FVector2D*                                  In;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureBlueprintLibrary.GetRedGreenUVFactorsFromChromaticAberration
struct UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Params
{
	float*                                             ChromaticAberrationAmount;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RedGreenUVFactors;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureBlueprintLibrary.GetProjectionMatrixFromPostMoveSettings
struct UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Params
{
	struct FComposurePostMoveSettings*                 PostMoveSettings;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             HorizontalFOVAngle;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AspectRatio;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     ProjectionMatrix;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureBlueprintLibrary.GetPlayerDisplayGamma
struct UComposureBlueprintLibrary_GetPlayerDisplayGamma_Params
{
	class APlayerCameraManager**                       PlayerCameraManager;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayGamma;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureBlueprintLibrary.GetCroppingUVTransformationMatrixFromPostMoveSettings
struct UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Params
{
	struct FComposurePostMoveSettings*                 PostMoveSettings;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             AspectRatio;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     CropingUVTransformationMatrix;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMatrix                                     UncropingUVTransformationMatrix;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureBlueprintLibrary.CreatePlayerCompositingTarget
struct UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UComposurePlayerCompositingTarget*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.ComposureBlueprintLibrary.CopyCameraSettingsToSceneCapture
struct UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Params
{
	class UCameraComponent**                           SrcCamera;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D**                   DstCaptureComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Composure.ComposurePostProcessPass.SetSetupMaterial
struct UComposurePostProcessPass_SetSetupMaterial_Params
{
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposurePostProcessPass.SetOutputRenderTarget
struct UComposurePostProcessPass_SetOutputRenderTarget_Params
{
	class UTextureRenderTarget2D**                     RenderTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposurePostProcessPass.GetSetupMaterial
struct UComposurePostProcessPass_GetSetupMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.ComposurePostProcessPass.GetOutputRenderTarget
struct UComposurePostProcessPass_GetOutputRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.ComposureLensBloomPass.SetTonemapperReplacingMaterial
struct UComposureLensBloomPass_SetTonemapperReplacingMaterial_Params
{
	class UMaterialInstanceDynamic**                   Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureLensBloomPass.BloomToRenderTarget
struct UComposureLensBloomPass_BloomToRenderTarget_Params
{
};

// Function Composure.ComposurePostProcessPassPolicy.SetupPostProcess
struct UComposurePostProcessPassPolicy_SetupPostProcess_Params
{
	class USceneCaptureComponent2D**                   SceneCapture;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          TonemapperOverride;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposurePlayerCompositingTarget.SetRenderTarget
struct UComposurePlayerCompositingTarget_SetRenderTarget_Params
{
	class UTextureRenderTarget2D**                     RenderTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposurePlayerCompositingTarget.SetPlayerCameraManager
struct UComposurePlayerCompositingTarget_SetPlayerCameraManager_Params
{
	class APlayerCameraManager**                       PlayerCameraManager;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCameraManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.ComposurePlayerCompositingTarget.GetPlayerCameraManager
struct UComposurePlayerCompositingTarget_GetPlayerCameraManager_Params
{
	class APlayerCameraManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.ComposureCompositingTargetComponent.SetDisplayTexture
struct UComposureCompositingTargetComponent_SetDisplayTexture_Params
{
	class UTexture**                                   DisplayTexture;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureCompositingTargetComponent.GetDisplayTexture
struct UComposureCompositingTargetComponent_GetDisplayTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.ComposurePostProcessingPassProxy.Execute
struct UComposurePostProcessingPassProxy_Execute_Params
{
	class UTexture**                                   PrePassInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UComposurePostProcessPassPolicy**            PostProcessPass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.ComposureTonemapperPass.TonemapToRenderTarget
struct UComposureTonemapperPass_TonemapToRenderTarget_Params
{
};

// Function Composure.CompositingTextureLookupTable.FindNamedPassResult
struct UCompositingTextureLookupTable_FindNamedPassResult_Params
{
	struct FName*                                      LookupName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    OutTexture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Composure.MovieSceneComposureExportClient.InitializeForExport
struct UMovieSceneComposureExportClient_InitializeForExport_Params
{
	class UMovieSceneComposureExportInitializer**      ExportInitializer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Composure.MovieSceneComposureExportInitializer.ExportSceneCaptureBuffers
struct UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Params
{
	class ACompositingElement**                        CompShotElement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D**                   SceneCapture;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class FString>*                             BuffersToExport;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
