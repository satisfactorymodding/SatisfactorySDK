#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_Edible_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Edible.BP_Edible_C
// 0x0014 (0x03F0 - 0x03DC)
class ABP_Edible_C : public ABP_Pickup_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BushMesh;                                                 // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Edible.BP_Edible_C");
		return ptr;
	}


	void UpdateVisiblityState();
	void PlayPickupEffect();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Edible(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
