#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_BuildGunStateBuild_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BuildGunStateBuild.BP_BuildGunStateBuild_C
// 0x0020 (0x00F8 - 0x00D8)
class UBP_BuildGunStateBuild_C : public UFGBuildGunStateBuild
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkAudioEvent*                               mMultiStepConstructionSound;                              // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               mCancelHologramSound;                                     // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget_SplineModeSelectWheel_C*             mSplineModeSelectWheel;                                   // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildGunStateBuild.BP_BuildGunStateBuild_C");
		return ptr;
	}


	void SecondaryFire();
	void OnMultiStepPlacement(bool* isFinalStep);
	void OnResetHologram();
	void PrimaryFire();
	void EndState();
	void ShowSplineModeSelectUI();
	void CloseSplineModeSelectUI();
	void BeginState();
	void OpenBuildModeUI();
	void ExecuteUbergraph_BP_BuildGunStateBuild(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
