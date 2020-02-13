#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_LensDistortion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LensDistortion.LensDistortionBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULensDistortionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LensDistortion.LensDistortionBlueprintLibrary");
		return ptr;
	}


	bool STATIC_NotEqual_CompareLensDistortionModels(struct FLensDistortionCameraModel* A, struct FLensDistortionCameraModel* B);
	void STATIC_GetUndistortOverscanFactor(struct FLensDistortionCameraModel* CameraModel, float* DistortedHorizontalFOV, float* DistortedAspectRatio, float* UndistortOverscanFactor);
	bool STATIC_EqualEqual_CompareLensDistortionModels(struct FLensDistortionCameraModel* A, struct FLensDistortionCameraModel* B);
	void STATIC_DrawUVDisplacementToRenderTarget(class UObject** WorldContextObject, struct FLensDistortionCameraModel* CameraModel, float* DistortedHorizontalFOV, float* DistortedAspectRatio, float* UndistortOverscanFactor, class UTextureRenderTarget2D** OutputRenderTarget, float* OutputMultiply, float* OutputAdd);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
