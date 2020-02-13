#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_MediaIOCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaIOCore.MediaCapture
// 0x00D8 (0x0100 - 0x0028)
class UMediaCapture : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnStateChanged;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	class UMediaOutput*                                MediaOutput;                                              // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0058(0x0020) MISSED OFFSET
	class UTextureRenderTarget2D*                      CapturingRenderTarget;                                    // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0080(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaIOCore.MediaCapture");
		return ptr;
	}


	bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D** RenderTarget);
	void StopCapture(bool* bAllowPendingFrameToBeProcess);
	void SetMediaOutput(class UMediaOutput** InMediaOutput);
	EMediaCaptureState GetState();
	struct FIntPoint GetDesiredSize();
	TEnumAsByte<EPixelFormat> GetDesiredPixelFormat();
	bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D** RenderTarget, struct FMediaCaptureOptions* CaptureOptions);
	bool CaptureActiveSceneViewport(struct FMediaCaptureOptions* CaptureOptions);
};


// Class MediaIOCore.FileMediaCapture
// 0x0070 (0x0170 - 0x0100)
class UFileMediaCapture : public UMediaCapture
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaIOCore.FileMediaCapture");
		return ptr;
	}

};


// Class MediaIOCore.MediaOutput
// 0x0008 (0x0030 - 0x0028)
class UMediaOutput : public UObject
{
public:
	int                                                NumberOfTextureBuffers;                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaIOCore.MediaOutput");
		return ptr;
	}


	bool Validate(class FString* OutFailureReason);
	class UMediaCapture* CreateMediaCapture();
};


// Class MediaIOCore.FileMediaOutput
// 0x00A0 (0x00D0 - 0x0030)
class UFileMediaOutput : public UMediaOutput
{
public:
	struct FImageWriteOptions                          WriteOptions;                                             // 0x0030(0x0060) (Edit, BlueprintVisible)
	struct FDirectoryPath                              FilePath;                                                 // 0x0090(0x0010) (Edit, BlueprintVisible)
	class FString                                      BaseFileName;                                             // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bOverrideDesiredSize;                                     // 0x00B0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FIntPoint                                   DesiredSize;                                              // 0x00B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridePixelFormat;                                     // 0x00BC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	EFileMediaOutputPixelFormat                        DesiredPixelFormat;                                       // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData03[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaIOCore.FileMediaOutput");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
