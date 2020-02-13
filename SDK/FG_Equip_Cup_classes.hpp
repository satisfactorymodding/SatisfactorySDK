#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Cup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_Cup.Equip_Cup_C
// 0x0018 (0x03F8 - 0x03E0)
class AEquip_Cup_C : public AFGEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_CoffeeCup_Steam;                                        // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Coffeecup;                                             // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Cup.Equip_Cup_C");
		return ptr;
	}


	void WasEquipped();
	void DoDefaultPrimaryFireEffects();
	void ExecuteUbergraph_Equip_Cup(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
