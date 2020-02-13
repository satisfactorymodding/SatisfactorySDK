#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_GasPillar_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GasPillar_03.BP_GasPillar_03_C
// 0x0018 (0x0388 - 0x0370)
class ABP_GasPillar_03_C : public ABP_GasPillar_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    DroppingGas_02;                                           // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    GasPuff_03;                                               // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GasPillar_03.BP_GasPillar_03_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_GasPillar_03(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
