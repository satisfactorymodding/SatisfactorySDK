#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Holo_PowerLine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Holo_PowerLine.Holo_PowerLine_C
// 0x0010 (0x0480 - 0x0470)
class AHolo_PowerLine_C : public AFGWireHologram
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ConnectionMesh;                                           // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Holo_PowerLine.Holo_PowerLine_C");
		return ptr;
	}


	void OnAutomaticPoleDisableToggle(bool* Disabled);
	void ExecuteUbergraph_Holo_PowerLine(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
