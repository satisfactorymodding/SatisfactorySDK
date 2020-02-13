#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Composure_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Composure.CompEditorImagePreviewInterface
// 0x0000 (0x0028 - 0x0028)
class UCompEditorImagePreviewInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompEditorImagePreviewInterface");
		return ptr;
	}

};


// Class Composure.CompImageColorPickerInterface
// 0x0000 (0x0028 - 0x0028)
class UCompImageColorPickerInterface : public UCompEditorImagePreviewInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompImageColorPickerInterface");
		return ptr;
	}

};


// Class Composure.CompositingPickerAsyncTask
// 0x0050 (0x0080 - 0x0030)
class UCompositingPickerAsyncTask : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPick;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancel;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAccept;                                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTextureRenderTarget2D*                      PickerTarget;                                             // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTexture*                                    PickerDisplayImage;                                       // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingPickerAsyncTask");
		return ptr;
	}


	class UCompositingPickerAsyncTask* STATIC_OpenCompositingPicker(class UTextureRenderTarget2D** PickerTarget, class UTexture** DisplayImage, struct FText* WindowTitle, bool* bAverageColorOnDrag, bool* bUseImplicitGamma);
};


// Class Composure.ComposurePipelineBaseActor
// 0x0018 (0x0348 - 0x0330)
class AComposurePipelineBaseActor : public AActor
{
public:
	bool                                               bAutoRun;                                                 // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0331(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposurePipelineBaseActor");
		return ptr;
	}


	void SetAutoRun(bool* bNewAutoRunVal);
	bool IsActivelyRunning();
	void EnqueueRendering(bool* bCameraCutThisFrame);
};


// Class Composure.CompositingElement
// 0x02D8 (0x0620 - 0x0348)
class ACompositingElement : public AComposurePipelineBaseActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET
	class UComposureCompositingTargetComponent*        CompositingTarget;                                        // 0x0350(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UComposurePostProcessingPassProxy*           PostProcessProxy;                                         // 0x0358(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UCompositingElementInput*>            Inputs;                                                   // 0x0360(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UCompositingElementTransform*>        TransformPasses;                                          // 0x0370(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UCompositingElementOutput*>           Outputs;                                                  // 0x0380(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	ESceneCameraLinkType                               CameraSource;                                             // 0x0390(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0390(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TLazyObjectPtr<class ACameraActor>                 TargetCameraActor;                                        // 0x0394(0x001C) (Edit, DisableEditOnTemplate, IsPlainOldData)
	EInheritedSourceType                               ResolutionSource;                                         // 0x03B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03B0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FIntPoint                                   RenderResolution;                                         // 0x03B4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureRenderTargetFormat>            RenderFormat;                                             // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSharedTargetPool;                                     // 0x03BD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x32];                                      // 0x03BE(0x0032) MISSED OFFSET
	int                                                FreezeFrameMask;                                          // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTransformPassRendered_BP;                               // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinalPassRendered_BP;                                   // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       CompShotIdName;                                           // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACompositingElement*                         Parent;                                                   // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class ACompositingElement*>                 ChildLayers;                                              // 0x0428(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0438(0x0004) MISSED OFFSET
	float                                              OutputOpacity;                                            // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<class UCompositingElementInput*, ECompPassConstructionType> UserConstructedInputs;                                    // 0x0440(0x0050) (ZeroConstructor)
	TMap<class UCompositingElementTransform*, ECompPassConstructionType> UserConstructedTransforms;                                // 0x0490(0x0050) (ZeroConstructor)
	TMap<class UCompositingElementOutput*, ECompPassConstructionType> UserConstructedOutputs;                                   // 0x04E0(0x0050) (ZeroConstructor)
	TArray<class UCompositingElementInput*>            InternalInputs;                                           // 0x0530(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UCompositingElementTransform*>        InternalTransformPasses;                                  // 0x0540(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UCompositingElementOutput*>           InternalOutputs;                                          // 0x0550(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	class UAlphaTransformPass*                         InternalAlphaPass;                                        // 0x0560(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0xB8];                                      // 0x0568(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingElement");
		return ptr;
	}


	void SetEditorColorPickingTarget(class UTextureRenderTarget2D** PickingTarget);
	void SetEditorColorPickerDisplayImage(class UTexture** PickerDisplayImage);
	class UTextureRenderTarget2D* RequestNamedRenderTarget(struct FName* ReferenceName, float* RenderPercentage, ETargetUsageFlags* UsageTag);
	class UTextureRenderTarget2D* RenderCompositingMaterialToTarget(class UTextureRenderTarget2D** RenderTarget, struct FName* ResultLookupName, struct FCompositingMaterial* CompMaterial);
	class UTexture* RenderCompositingMaterial(float* RenderScale, struct FName* ResultLookupName, ETargetUsageFlags* UsageTag, struct FCompositingMaterial* CompMaterial);
	class UTexture* RenderCompElement(bool* bCameraCutThisFrame);
	bool ReleaseOwnedTarget(class UTextureRenderTarget2D** OwnedTarget);
	void RegisterPassResult(struct FName* ReferenceName, class UTexture** PassResult, bool* bSetAsLatestRenderResult);
	TArray<class UCompositingElementTransform*> GetTransformsList();
	struct FIntPoint GetRenderResolution();
	TArray<class UCompositingElementOutput*> GetOutputsList();
	class UTexture* GetLatestRenderResult();
	TArray<class UCompositingElementInput*> GetInputsList();
	struct FName GetCompElementName();
	class UCompositingElementTransform* FindTransformPass(class UClass** TransformType, struct FName* OptionalPassName, class UTexture** PassResult);
	class ACameraActor* FindTargetCamera();
	class UCompositingElementOutput* FindOutputPass(class UClass** OutputType, struct FName* OptionalPassName);
	class UTexture* FindNamedRenderResult(struct FName* PassName, bool* bSearchSubElements);
	class UCompositingElementInput* FindInputPass(class UClass** InputType, struct FName* OptionalPassName, class UTexture** PassResult);
	class UCompositingElementTransform* AddNewTransformPass(struct FName* PassName, class UClass** TransformType);
	class UCompositingElementOutput* AddNewOutputPass(struct FName* PassName, class UClass** OutputType);
	class UCompositingElementInput* AddNewInputPass(struct FName* PassName, class UClass** InputType);
};


// Class Composure.CompositingElementPass
// 0x0038 (0x0060 - 0x0028)
class UCompositingElementPass : public UObject
{
public:
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       PassName;                                                 // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0034(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingElementPass");
		return ptr;
	}


	void SetPassEnabled(bool* bEnabledIn);
	void Reset();
	class UTextureRenderTarget2D* RequestRenderTarget(struct FIntPoint* Dimensions, TEnumAsByte<ETextureRenderTargetFormat>* Format);
	class UTextureRenderTarget2D* RequestNativelyFormattedTarget(float* RenderScale);
	bool ReleaseRenderTarget(class UTextureRenderTarget2D** AssignedTarget);
	void OnFrameEnd();
	void OnFrameBegin(bool* bCameraCutThisFrame);
	void OnEnabled();
	void OnDisabled();
};


// Class Composure.CompositingElementInput
// 0x0008 (0x0068 - 0x0060)
class UCompositingElementInput : public UCompositingElementPass
{
public:
	bool                                               bIntermediate;                                            // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingElementInput");
		return ptr;
	}


	class UTexture* GenerateInput();
};


// Class Composure.CompositingMediaInput
// 0x0170 (0x01D8 - 0x0068)
class UCompositingMediaInput : public UCompositingElementInput
{
public:
	struct FCompositingMaterial                        MediaTransformMaterial;                                   // 0x0068(0x0158) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x01C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          DefaultTestPlateMaterial;                                 // 0x01C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FallbackMID;                                              // 0x01D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingMediaInput");
		return ptr;
	}

};


// Class Composure.MediaTextureCompositingInput
// 0x0008 (0x01E0 - 0x01D8)
class UMediaTextureCompositingInput : public UCompositingMediaInput
{
public:
	class UMediaTexture*                               MediaSource;                                              // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.MediaTextureCompositingInput");
		return ptr;
	}

};


// Class Composure.CompositingInputInterface
// 0x0000 (0x0028 - 0x0028)
class UCompositingInputInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingInputInterface");
		return ptr;
	}


	void OnFrameEnd(class UCompositingInputInterfaceProxy** Proxy);
	void OnFrameBegin(class UCompositingInputInterfaceProxy** Proxy, bool* bCameraCutThisFrame);
	class UTexture* GenerateInput(class UCompositingInputInterfaceProxy** Proxy);
};


// Class Composure.CompositingInputInterfaceProxy
// 0x0010 (0x0078 - 0x0068)
class UCompositingInputInterfaceProxy : public UCompositingElementInput
{
public:
	TScriptInterface<class UCompositingInputInterface> CompositingInput;                                         // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingInputInterfaceProxy");
		return ptr;
	}

};


// Class Composure.CompositingElementOutput
// 0x0000 (0x0060 - 0x0060)
class UCompositingElementOutput : public UCompositingElementPass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingElementOutput");
		return ptr;
	}


	void RelayOutput(class UTexture** FinalResult, class UComposurePostProcessingPassProxy** PostProcessProxy);
};


// Class Composure.ColorConverterOutputPass
// 0x0018 (0x0078 - 0x0060)
class UColorConverterOutputPass : public UCompositingElementOutput
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	class UCompositingElementTransform*                ColorConverter;                                           // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DefaultConverterClass;                                    // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ColorConverterOutputPass");
		return ptr;
	}

};


// Class Composure.CompositingMediaCaptureOutput
// 0x0010 (0x0088 - 0x0078)
class UCompositingMediaCaptureOutput : public UColorConverterOutputPass
{
public:
	class UMediaOutput*                                CaptureOutput;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMediaCapture*                               ActiveCapture;                                            // 0x0080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingMediaCaptureOutput");
		return ptr;
	}

};


// Class Composure.RenderTargetCompositingOutput
// 0x0008 (0x0068 - 0x0060)
class URenderTargetCompositingOutput : public UCompositingElementOutput
{
public:
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.RenderTargetCompositingOutput");
		return ptr;
	}

};


// Class Composure.EXRFileCompositingOutput
// 0x0038 (0x0098 - 0x0060)
class UEXRFileCompositingOutput : public UCompositingElementOutput
{
public:
	struct FDirectoryPath                              OutputDirectiory;                                         // 0x0060(0x0010) (Edit)
	class FString                                      FilenameFormat;                                           // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FFrameRate                                  OutputFrameRate;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EExrCompressionOptions                             Compression;                                              // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0089(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.EXRFileCompositingOutput");
		return ptr;
	}

};


// Class Composure.CompositingElementTransform
// 0x0010 (0x0070 - 0x0060)
class UCompositingElementTransform : public UCompositingElementPass
{
public:
	bool                                               bIntermediate;                                            // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0061(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingElementTransform");
		return ptr;
	}


	class UTexture* FindNamedPrePassResult(struct FName* PassLookupName);
	class UTexture* ApplyTransform(class UTexture** Input, class UComposurePostProcessingPassProxy** PostProcessProxy, class ACameraActor** TargetCamera);
};


// Class Composure.CompositingPostProcessPass
// 0x0018 (0x0088 - 0x0070)
class UCompositingPostProcessPass : public UCompositingElementTransform
{
public:
	float                                              RenderScale;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<class UComposurePostProcessPassPolicy*>     PostProcessPasses;                                        // 0x0078(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingPostProcessPass");
		return ptr;
	}

};


// Class Composure.CompositingElementMaterialPass
// 0x0158 (0x01E0 - 0x0088)
class UCompositingElementMaterialPass : public UCompositingPostProcessPass
{
public:
	struct FCompositingMaterial                        Material;                                                 // 0x0088(0x0158) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingElementMaterialPass");
		return ptr;
	}


	void ApplyMaterialParams(class UMaterialInstanceDynamic** Mid);
};


// Class Composure.CompositingTonemapPass
// 0x0170 (0x01E0 - 0x0070)
class UCompositingTonemapPass : public UCompositingElementTransform
{
public:
	struct FColorGradingSettings                       ColorGradingSettings;                                     // 0x0070(0x0150) (Edit, BlueprintVisible)
	struct FFilmStockSettings                          FilmStockSettings;                                        // 0x01C0(0x0014) (Edit, BlueprintVisible)
	float                                              ChromaticAberration;                                      // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComposureTonemapperPassPolicy*              TonemapPolicy;                                            // 0x01D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingTonemapPass");
		return ptr;
	}

};


// Class Composure.MultiPassChromaKeyer
// 0x0170 (0x01E0 - 0x0070)
class UMultiPassChromaKeyer : public UCompositingElementTransform
{
public:
	TArray<struct FLinearColor>                        KeyColors;                                                // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FCompositingMaterial                        KeyerMaterial;                                            // 0x0080(0x0158) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture*                                    DefaultWhiteTexture;                                      // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.MultiPassChromaKeyer");
		return ptr;
	}

};


// Class Composure.MultiPassDespill
// 0x0170 (0x01E0 - 0x0070)
class UMultiPassDespill : public UCompositingElementTransform
{
public:
	TArray<struct FLinearColor>                        KeyColors;                                                // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FCompositingMaterial                        KeyerMaterial;                                            // 0x0080(0x0158) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture*                                    DefaultWhiteTexture;                                      // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.MultiPassDespill");
		return ptr;
	}

};


// Class Composure.AlphaTransformPass
// 0x0018 (0x0088 - 0x0070)
class UAlphaTransformPass : public UCompositingElementTransform
{
public:
	float                                              AlphaScale;                                               // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AlphaTransformMID;                                        // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.AlphaTransformPass");
		return ptr;
	}

};


// Class Composure.CompositingOpenColorIOPass
// 0x0058 (0x00C8 - 0x0070)
class UCompositingOpenColorIOPass : public UCompositingElementTransform
{
public:
	struct FOpenColorIOColorConversionSettings         ColorConversionSettings;                                  // 0x0070(0x0058) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingOpenColorIOPass");
		return ptr;
	}

};


// Class Composure.ComposureBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UComposureBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposureBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetUVMapSettingsToMaterialParameters(struct FComposureUVMapSettings* UVMapSettings, class UMaterialInstanceDynamic** Material);
	void STATIC_InvertUVDisplacementMapEncodingParameters(struct FVector2D* In, struct FVector2D* Out);
	void STATIC_GetRedGreenUVFactorsFromChromaticAberration(float* ChromaticAberrationAmount, struct FVector2D* RedGreenUVFactors);
	void STATIC_GetProjectionMatrixFromPostMoveSettings(struct FComposurePostMoveSettings* PostMoveSettings, float* HorizontalFOVAngle, float* AspectRatio, struct FMatrix* ProjectionMatrix);
	void STATIC_GetPlayerDisplayGamma(class APlayerCameraManager** PlayerCameraManager, float* DisplayGamma);
	void STATIC_GetCroppingUVTransformationMatrixFromPostMoveSettings(struct FComposurePostMoveSettings* PostMoveSettings, float* AspectRatio, struct FMatrix* CropingUVTransformationMatrix, struct FMatrix* UncropingUVTransformationMatrix);
	class UComposurePlayerCompositingTarget* STATIC_CreatePlayerCompositingTarget(class UObject** WorldContextObject);
	void STATIC_CopyCameraSettingsToSceneCapture(class UCameraComponent** SrcCamera, class USceneCaptureComponent2D** DstCaptureComponent);
};


// Class Composure.ComposureGameSettings
// 0x0040 (0x0068 - 0x0028)
class UComposureGameSettings : public UObject
{
public:
	struct FSoftObjectPath                             StaticVideoPlateDebugImage;                               // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	bool                                               bSceneCapWarnOfMissingCam;                                // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             FallbackCompositingTexture;                               // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	class UTexture*                                    FallbackCompositingTextureObj;                            // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposureGameSettings");
		return ptr;
	}

};


// Class Composure.ComposurePostProcessPass
// 0x0020 (0x0280 - 0x0260)
class UComposurePostProcessPass : public USceneComponent
{
public:
	class UComposurePostProcessBlendable*              BlendableInterface;                                       // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          SetupMaterial;                                            // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          TonemapperReplacement;                                    // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposurePostProcessPass");
		return ptr;
	}


	void SetSetupMaterial(class UMaterialInterface** Material);
	void SetOutputRenderTarget(class UTextureRenderTarget2D** RenderTarget);
	class UMaterialInterface* GetSetupMaterial();
	class UTextureRenderTarget2D* GetOutputRenderTarget();
};


// Class Composure.ComposureLensBloomPass
// 0x00C0 (0x0340 - 0x0280)
class UComposureLensBloomPass : public UComposurePostProcessPass
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0280(0x00B0) MISSED OFFSET
	class UMaterialInstanceDynamic*                    TonemapperReplacingMID;                                   // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposureLensBloomPass");
		return ptr;
	}


	void SetTonemapperReplacingMaterial(class UMaterialInstanceDynamic** Material);
	void BloomToRenderTarget();
};


// Class Composure.ComposurePostProcessPassPolicy
// 0x0000 (0x0028 - 0x0028)
class UComposurePostProcessPassPolicy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposurePostProcessPassPolicy");
		return ptr;
	}


	void SetupPostProcess(class USceneCaptureComponent2D** SceneCapture, class UMaterialInterface** TonemapperOverride);
};


// Class Composure.ComposureLensBloomPassPolicy
// 0x00D0 (0x00F8 - 0x0028)
class UComposureLensBloomPassPolicy : public UComposurePostProcessPassPolicy
{
public:
	struct FLensBloomSettings                          Settings;                                                 // 0x0028(0x00B8) (Edit, BlueprintVisible)
	class UMaterialInterface*                          ReplacementMaterial;                                      // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BloomIntensityParamName;                                  // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TonemapperReplacmentMID;                                  // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposureLensBloomPassPolicy");
		return ptr;
	}

};


// Class Composure.ComposurePlayerCompositingCameraModifier
// 0x0018 (0x0060 - 0x0048)
class UComposurePlayerCompositingCameraModifier : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	TScriptInterface<class UComposurePlayerCompositingInterface> Target;                                                   // 0x0050(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposurePlayerCompositingCameraModifier");
		return ptr;
	}

};


// Class Composure.ComposurePlayerCompositingInterface
// 0x0000 (0x0028 - 0x0028)
class UComposurePlayerCompositingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposurePlayerCompositingInterface");
		return ptr;
	}

};


// Class Composure.ComposurePlayerCompositingTarget
// 0x0028 (0x0050 - 0x0028)
class UComposurePlayerCompositingTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class APlayerCameraManager*                        PlayerCameraManager;                                      // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UComposurePlayerCompositingCameraModifier*   PlayerCameraModifier;                                     // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReplaceTonemapperMID;                                     // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposurePlayerCompositingTarget");
		return ptr;
	}


	void SetRenderTarget(class UTextureRenderTarget2D** RenderTarget);
	class APlayerCameraManager* SetPlayerCameraManager(class APlayerCameraManager** PlayerCameraManager);
	class APlayerCameraManager* GetPlayerCameraManager();
};


// Class Composure.ComposureCompositingTargetComponent
// 0x0010 (0x0108 - 0x00F8)
class UComposureCompositingTargetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	class UTexture*                                    DisplayTexture;                                           // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposureCompositingTargetComponent");
		return ptr;
	}


	void SetDisplayTexture(class UTexture** DisplayTexture);
	class UTexture* GetDisplayTexture();
};


// Class Composure.ComposurePostProcessBlendable
// 0x0010 (0x0038 - 0x0028)
class UComposurePostProcessBlendable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UComposurePostProcessPass*                   Target;                                                   // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposurePostProcessBlendable");
		return ptr;
	}

};


// Class Composure.ComposurePostProcessingPassProxy
// 0x0000 (0x0280 - 0x0280)
class UComposurePostProcessingPassProxy : public UComposurePostProcessPass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposurePostProcessingPassProxy");
		return ptr;
	}


	void Execute(class UTexture** PrePassInput, class UComposurePostProcessPassPolicy** PostProcessPass);
};


// Class Composure.ComposureTonemapperPass
// 0x0170 (0x03F0 - 0x0280)
class UComposureTonemapperPass : public UComposurePostProcessPass
{
public:
	struct FColorGradingSettings                       ColorGradingSettings;                                     // 0x0280(0x0150) (Edit, BlueprintVisible)
	struct FFilmStockSettings                          FilmStockSettings;                                        // 0x03D0(0x0014) (Edit, BlueprintVisible)
	float                                              ChromaticAberration;                                      // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposureTonemapperPass");
		return ptr;
	}


	void TonemapToRenderTarget();
};


// Class Composure.ComposureTonemapperPassPolicy
// 0x0178 (0x01A0 - 0x0028)
class UComposureTonemapperPassPolicy : public UComposurePostProcessPassPolicy
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FColorGradingSettings                       ColorGradingSettings;                                     // 0x0030(0x0150) (Edit, BlueprintVisible)
	struct FFilmStockSettings                          FilmStockSettings;                                        // 0x0180(0x0014) (Edit, BlueprintVisible)
	float                                              ChromaticAberration;                                      // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.ComposureTonemapperPassPolicy");
		return ptr;
	}

};


// Class Composure.CompositingTextureLookupTable
// 0x0000 (0x0028 - 0x0028)
class UCompositingTextureLookupTable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.CompositingTextureLookupTable");
		return ptr;
	}


	bool FindNamedPassResult(struct FName* LookupName, class UTexture** OutTexture);
};


// Class Composure.MovieSceneComposureExportClient
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneComposureExportClient : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.MovieSceneComposureExportClient");
		return ptr;
	}


	void InitializeForExport(class UMovieSceneComposureExportInitializer** ExportInitializer);
};


// Class Composure.MovieSceneComposureExportInitializer
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneComposureExportInitializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.MovieSceneComposureExportInitializer");
		return ptr;
	}


	void ExportSceneCaptureBuffers(class ACompositingElement** CompShotElement, class USceneCaptureComponent2D** SceneCapture, TArray<class FString>* BuffersToExport);
};


// Class Composure.MovieSceneComposureExportTrack
// 0x0028 (0x0080 - 0x0058)
class UMovieSceneComposureExportTrack : public UMovieSceneTrack
{
public:
	struct FMovieSceneComposureExportPass              Pass;                                                     // 0x0058(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0070(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.MovieSceneComposureExportTrack");
		return ptr;
	}

};


// Class Composure.MovieSceneComposureExportSection
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneComposureExportSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.MovieSceneComposureExportSection");
		return ptr;
	}

};


// Class Composure.MovieSceneComposurePostMoveSettingsSection
// 0x03C0 (0x04A0 - 0x00E0)
class UMovieSceneComposurePostMoveSettingsSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     Pivot[0x2];                                               // 0x00E0(0x00A0)
	struct FMovieSceneFloatChannel                     Translation[0x2];                                         // 0x0220(0x00A0)
	struct FMovieSceneFloatChannel                     RotationAngle;                                            // 0x0360(0x00A0)
	struct FMovieSceneFloatChannel                     Scale;                                                    // 0x0400(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.MovieSceneComposurePostMoveSettingsSection");
		return ptr;
	}

};


// Class Composure.MovieSceneComposurePostMoveSettingsTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneComposurePostMoveSettingsTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.MovieSceneComposurePostMoveSettingsTrack");
		return ptr;
	}

};


// Class Composure.PlayerViewportCompositingOutput
// 0x0038 (0x00B0 - 0x0078)
class UPlayerViewportCompositingOutput : public UColorConverterOutputPass
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	int                                                PlayerIndex;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UPlayerCompOutputCameraModifier*             ActiveCamModifier;                                        // 0x0088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          TonemapperBaseMat;                                        // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          PreTonemapBaseMat;                                        // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ViewportOverrideMID;                                      // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.PlayerViewportCompositingOutput");
		return ptr;
	}

};


// Class Composure.PlayerCompOutputCameraModifier
// 0x0008 (0x0050 - 0x0048)
class UPlayerCompOutputCameraModifier : public UCameraModifier
{
public:
	class UPlayerViewportCompositingOutput*            Owner;                                                    // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Composure.PlayerCompOutputCameraModifier");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
