#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Machinegun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_Machinegun.Equip_Machinegun_C
// 0x003C (0x047C - 0x0440)
class AEquip_Machinegun_C : public AFGWeaponInstantFire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Machinegun_hands;                                         // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            mAmmo;                                                    // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Machinegun;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Fire;                                                     // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              mLockAngle;                                               // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Machinegun.Equip_Machinegun_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void PlayReloadEffects();
	void ReceiveTick(float* DeltaSeconds);
	void SwitchHUD(bool* ShowHUD);
	void WasUnEquipped();
	void WasEquipped();
	void PlayFireEffect();
	void ExecuteUbergraph_Equip_Machinegun(int* EntryPoint);
	void Fire__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
