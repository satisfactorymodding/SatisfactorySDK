#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Hookshot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_Hookshot.Equip_Hookshot_C
// 0x0010 (0x0418 - 0x0408)
class AEquip_Hookshot_C : public AFGHookshot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        HookshotMesh;                                             // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Hookshot.Equip_Hookshot_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void OnFire(bool* attachedToSomething, struct FHitResult* HitResult);
	void OwnerLanded(struct FHitResult* Hit);
	void OnWireDetach();
	void DidNotAffordUse();
	void ExecuteUbergraph_Equip_Hookshot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
