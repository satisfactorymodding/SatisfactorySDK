#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Truck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Truck.BP_Truck_C
// 0x0049 (0x0979 - 0x0930)
class ABP_Truck_C : public ABP_WheeledVehicle6W_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight1;                                               // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_WorkBenchComponent_C*                    BP_WorkBenchComponent1;                                   // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Workbench;                                                // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_WorkBenchComponent_C*                    BP_WorkBenchComponent;                                    // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               mFlashlightOn;                                            // 0x0978(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Truck.BP_Truck_C");
		return ptr;
	}


	void UpdateOutline(bool* aimingAtWorkbench);
	class UTexture2D* GetActorRepresentationTexture();
	void OnRep_mFlashlightOn();
	struct FVector GetAttackLocation();
	float GetEnemyTargetDesirability(class AFGEnemyController** forController);
	bool ShouldAutoregisterAsTargetable();
	void InpActEvt_Flashlight_K2Node_InputActionEvent_1(struct FKey* Key);
	void Server_SetFlashlightOn(bool* FlashlightOn);
	void GainedSignificance();
	void LostSignificance();
	void Multicast_OpenTrunk();
	void Multicast_CloseTrunk();
	void ExecuteUbergraph_BP_Truck(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
