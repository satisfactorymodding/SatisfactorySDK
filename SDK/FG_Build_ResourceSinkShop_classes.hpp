#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_ResourceSinkShop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_ResourceSinkShop.Build_ResourceSinkShop_C
// 0x0020 (0x0690 - 0x0670)
class ABuild_ResourceSinkShop_C : public AFGBuildableResourceSinkShop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Clearance;                                                // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryLegsComponent*                     FGFactoryLegs;                                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MainMesh;                                                 // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_ResourceSinkShop.Build_ResourceSinkShop_C");
		return ptr;
	}


	void LostSignificance();
	void GainedSignificance();
	void ExecuteUbergraph_Build_ResourceSinkShop(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
