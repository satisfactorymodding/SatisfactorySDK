#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Tractor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tractor.BP_Tractor_C
// 0x0041 (0x0971 - 0x0930)
class ABP_Tractor_C : public ABP_WheeledVehicle4W_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Workbench;                                                // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_WorkBenchComponent_C*                    BP_WorkBenchComponent;                                    // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mExhaustVfx;                                              // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mFlashlightOn;                                            // 0x0970(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tractor.BP_Tractor_C");
		return ptr;
	}


	void UpdateOutline(bool* aimingAtWorkbench);
	void StopDrivingEffects();
	void StartDrivingEffects();
	void OnRep_mFlashlightOn();
	void ToggleFlashlight();
	float GetEnemyTargetDesirability(class AFGEnemyController** forController);
	struct FVector GetAttackLocation();
	bool ShouldAutoregisterAsTargetable();
	void InpActEvt_Flashlight_K2Node_InputActionEvent_1(struct FKey* Key);
	void ToggleFreeCamera();
	void ReceiveOnVehicleStartup();
	void ReceiveOnVehicleShutDown();
	void ReceiveBeginPlay();
	void Server_SetFlashlightOn(bool* FlashlightOn);
	void GainedSignificance();
	void LostSignificance();
	void Multicast_CloseTrunk();
	void Multicast_OpenTrunk();
	void ExecuteUbergraph_BP_Tractor(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
