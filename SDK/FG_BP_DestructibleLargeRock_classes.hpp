#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_DestructibleLargeRock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DestructibleLargeRock.BP_DestructibleLargeRock_C
// 0x0008 (0x0380 - 0x0378)
class ABP_DestructibleLargeRock_C : public AFGDestructibleActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DestructibleLargeRock.BP_DestructibleLargeRock_C");
		return ptr;
	}


	void PlayDestructEffects();
	void ExecuteUbergraph_BP_DestructibleLargeRock(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
