#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Sky_Sphere_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// 0x0130 (0x17F0 - 0x16C0)
class ABP_Sky_Sphere_C : public AFGSkySphere
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x16C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sky_Sphere_mesh;                                          // 0x16C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Base;                                                     // 0x16D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    mSkyMaterial;                                             // 0x16D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADirectionalLight*                           mSunLight;                                                // 0x16E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              mSunHeight;                                               // 0x16E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mHorizonFalloff;                                          // 0x16EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    mOriginSunRotation;                                       // 0x16F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    mSunRotationAxis;                                         // 0x16FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASkyLight*                                   mSkyLight;                                                // 0x1708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADirectionalLight*                           mMoonLight;                                               // 0x1710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FRotator                                    mOriginMoonRotation;                                      // 0x1718(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    mMoonRotationAxis;                                        // 0x1724(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mSunRadius;                                               // 0x1730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mMoonRadius;                                              // 0x1734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFBrightnessAdjustment                      mSunBrightnessAdjust;                                     // 0x1738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFBrightnessAdjustment                      mMoonBrightnessAdjust;                                    // 0x1740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           mDominantLight;                                           // 0x1748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              mDiscRadius;                                              // 0x1750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1754(0x0004) MISSED OFFSET
	class AAtmosphericFog*                             mAtmosphericFog;                                          // 0x1758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APostProcessVolume*                          mGlobalPostProcess;                                       // 0x1760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FRuntimeFloatCurve                          Cubemap_Curve;                                            // 0x1768(0x0088) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C");
		return ptr;
	}


	void SetLightAsDominant(class ADirectionalLight** Light, bool* newDominant);
	void NewDominantLight(class ADirectionalLight** oldDominantLight, class ADirectionalLight** NewDominantLight);
	void CalculateDominantLight();
	void CalculateDiscBrightness(class ALight** Light, struct FFBrightnessAdjustment* brightnessAdjustment, float* discBrightness);
	void CalculateBrightness(float* Brightness);
	void CalculateLightRotation(struct FRotator* OriginalRotation, struct FRotator* RotationAxis, struct FRuntimeFloatCurve* LightRotationCurve, struct FRotator* NewRotation);
	void UpdateGlobalParameters();
	void UpdateCurvesFromTime();
	void UpdateLightRotation();
	void UpdateMaterialParameters();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdatePreview();
	void ApplySkySphereSettings(struct FSkySphereSettings* Settings);
	void ExecuteUbergraph_BP_Sky_Sphere(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
