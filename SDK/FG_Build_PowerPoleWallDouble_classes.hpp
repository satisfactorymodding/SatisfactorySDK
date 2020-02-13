#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PowerPoleWallDouble_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_PowerPoleWallDouble.Build_PowerPoleWallDouble_C
// 0x0020 (0x0588 - 0x0568)
class ABuild_PowerPoleWallDouble_C : public AFGBuildable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFGPowerConnectionComponent*                 PowerConnection2;                                         // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerConnection1;                                         // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Pole;                                                     // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_PowerPoleWallDouble.Build_PowerPoleWallDouble_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Build_PowerPoleWallDouble(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
