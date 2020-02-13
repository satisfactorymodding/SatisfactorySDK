#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_JumpingStilts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_JumpingStilts.Equip_JumpingStilts_C
// 0x0018 (0x0418 - 0x0400)
class AEquip_JumpingStilts_C : public AFGJumpingStilts
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        JumpingStiltLeft_01;                                      // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_JumpingStilts.Equip_JumpingStilts_C");
		return ptr;
	}


	void WasEquipped();
	void WasUnEquipped();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Equip_JumpingStilts(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
