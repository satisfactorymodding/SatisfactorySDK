#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Equip_Decoration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Equip_Decoration.Equip_Decoration_C
// 0x0020 (0x0408 - 0x03E8)
class AEquip_Decoration_C : public AFGEquipmentDecoration
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      mCachedDescriptorClass;                                   // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Equip_Decoration.Equip_Decoration_C");
		return ptr;
	}


	void CacheDescriptor();
	void WasEquipped();
	void SpawnDecoration();
	void ExecuteUbergraph_Equip_Decoration(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
