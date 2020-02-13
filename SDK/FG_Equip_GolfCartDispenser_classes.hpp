#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_GolfCartDispenser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_GolfCartDispenser.Equip_GolfCartDispenser_C
// 0x0010 (0x0408 - 0x03F8)
class AEquip_GolfCartDispenser_C : public AFGGolfCartDispenser
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_GolfCartDispenser.Equip_GolfCartDispenser_C");
		return ptr;
	}


	void WasEquipped();
	void PlaySpawnEffects(class ABP_Golfcart_C** GolfCart);
	void WasUnEquipped();
	void SpawnGolfCart();
	void ExecuteUbergraph_Equip_GolfCartDispenser(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
