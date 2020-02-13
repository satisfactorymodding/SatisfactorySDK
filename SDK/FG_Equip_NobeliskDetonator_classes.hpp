#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_NobeliskDetonator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_NobeliskDetonator.Equip_NobeliskDetonator_C
// 0x0018 (0x04B8 - 0x04A0)
class AEquip_NobeliskDetonator_C : public AFGNobeliskDetonator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      NobeliskDetonator_Skl_01;                                 // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_NobeliskDetonator.Equip_NobeliskDetonator_C");
		return ptr;
	}


	void PlayReloadEffects();
	void PlayFireEffect();
	void WasUnEquipped();
	void WasEquipped();
	void OnSecondaryFirePressed();
	void PlayFireReleasedEffects();
	void ExecuteUbergraph_Equip_NobeliskDetonator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
