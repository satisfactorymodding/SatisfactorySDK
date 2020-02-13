#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_InstancedSplines_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class InstancedSplines.FGInstancedSplineMeshComponent
// 0x0060 (0x0710 - 0x06B0)
class UFGInstancedSplineMeshComponent : public USplineMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06B0(0x0008) MISSED OFFSET
	int                                                InstancingRandomSeed;                                     // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InstanceStartCullDistance;                                // 0x06BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InstanceEndCullDistance;                                  // 0x06C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	TArray<int>                                        InstanceReorderTable;                                     // 0x06C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x38];                                      // 0x06D8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InstancedSplines.FGInstancedSplineMeshComponent");
		return ptr;
	}


	bool UpdateInstanceTransform(int* InstanceIndex, struct FVector* StartPos, struct FVector* StartTangent, struct FVector* EndPos, struct FVector* EndTangent, bool* bWorldSpace, bool* bMarkRenderStateDirty, bool* bTeleport);
	bool RemoveInstance(int* InstanceIndex);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstance(struct FVector* StartPos, struct FVector* StartTangent, struct FVector* EndPos, struct FVector* EndTangent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
