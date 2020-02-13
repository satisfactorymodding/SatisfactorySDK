#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipeHyperSupport_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_PipeHyperSupport.Build_PipeHyperSupport_C
// 0x0020 (0x05C8 - 0x05A8)
class ABuild_PipeHyperSupport_C : public AFGBuildablePipelineSupport
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFGPipeConnectionComponentHyper_C*           PipeHyperSupportSnap;                                     // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGColoredInstanceMeshProxy*                 FGColoredInstanceMeshProxy;                               // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_PipeHyperSupport.Build_PipeHyperSupport_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayConstructSound_2();
	void ExecuteUbergraph_Build_PipeHyperSupport(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
