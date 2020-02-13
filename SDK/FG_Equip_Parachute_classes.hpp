#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Parachute_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_Parachute.Equip_Parachute_C
// 0x0018 (0x0408 - 0x03F0)
class AEquip_Parachute_C : public AFGParachute
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ParachuteMesh;                                            // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Parachute.Equip_Parachute_C");
		return ptr;
	}


	void OnDeployed();
	void OnDeployStop();
	void ExecuteUbergraph_Equip_Parachute(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
