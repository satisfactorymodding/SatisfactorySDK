#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_PipelineJunction_Cross_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C
// 0x0038 (0x0710 - 0x06D8)
class ABuild_PipelineJunction_Cross_C : public AFGBuildablePipelineJunction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Clearance;                                                // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPipeConnectionComponent*                  Connection0;                                              // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPipeConnectionComponent*                  Connection3;                                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPipeConnectionComponent*                  Connection2;                                              // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPipeConnectionComponent*                  Connection1;                                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGColoredInstanceMeshProxy*                 FGColoredInstanceMeshProxy;                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_PipelineJunction_Cross.Build_PipelineJunction_Cross_C");
		return ptr;
	}


	void PlayConstructSound_2();
	void ExecuteUbergraph_Build_PipelineJunction_Cross(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
