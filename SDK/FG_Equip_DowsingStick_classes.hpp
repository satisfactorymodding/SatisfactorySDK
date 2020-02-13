#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_DowsingStick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_DowsingStick.Equip_DowsingStick_C
// 0x0018 (0x0428 - 0x0410)
class AEquip_DowsingStick_C : public AFGDowsingStick
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_DowsingStick.Equip_DowsingStick_C");
		return ptr;
	}


	void CustomEvent_1();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Equip_DowsingStick(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
