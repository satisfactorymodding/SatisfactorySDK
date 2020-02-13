#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Golfcart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Golfcart.BP_Golfcart_C
// 0x0039 (0x0969 - 0x0930)
class ABP_Golfcart_C : public ABP_WheeledVehicle4W_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                Ak;                                                       // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               mIsHonking;                                               // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0959(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Particle_Honk;                                            // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mIsFoldAnimationDone;                                     // 0x0968(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Golfcart.BP_Golfcart_C");
		return ptr;
	}


	void GetDismantleRefund(TArray<struct FInventoryStack>* out_refund);
	void ReceiveBeginPlay();
	void ToggleFreeCamera();
	void Multicast_Honk();
	void DisablePhysics();
	void EnablePhysics();
	void DoFoldAnimation();
	void ExecuteUbergraph_BP_Golfcart(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
