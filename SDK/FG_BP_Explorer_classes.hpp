#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Explorer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Explorer.BP_Explorer_C
// 0x0050 (0x0980 - 0x0930)
class ABP_Explorer_C : public ABP_WheeledVehicle4W_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Workbench;                                                // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_WorkBenchComponent_C*                    BP_WorkBenchComponent;                                    // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              throttleval;                                              // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mFlashlightOn;                                            // 0x096C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	float                                              mSuspensionLoadTimer;                                     // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSuspensionLoadTimerDefault;                              // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSuspensionTick;                                          // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSuspensionTickDefault;                                   // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Explorer.BP_Explorer_C");
		return ptr;
	}


	void UpdateOutline(bool* aimingAtWorkbench);
	struct FText GetActorRepresentationText();
	class UTexture2D* GetActorRepresentationTexture();
	void CheckSuspension(float* InDeltaTime);
	void OnRep_mFlashlightOn();
	struct FVector GetAttackLocation();
	float GetEnemyTargetDesirability(class AFGEnemyController** forController);
	bool ShouldAutoregisterAsTargetable();
	void InpActEvt_Flashlight_K2Node_InputActionEvent_1(struct FKey* Key);
	void ReceiveTick(float* DeltaSeconds);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float* AxisValue);
	void Server_SetFlashlightOn(bool* FlashlightOn);
	void GainedSignificance();
	void LostSignificance();
	void Multicast_OpenTrunk();
	void Multicast_CloseTrunk();
	void ExecuteUbergraph_BP_Explorer(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
