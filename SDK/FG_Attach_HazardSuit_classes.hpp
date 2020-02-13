#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_HazardSuit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Attach_HazardSuit.Attach_HazardSuit_C
// 0x0018 (0x0378 - 0x0360)
class AAttach_HazardSuit_C : public AFGGasMaskAttachment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Gasmask_skl;                                              // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attach_HazardSuit.Attach_HazardSuit_C");
		return ptr;
	}


	void PlayAttachEffects3P();
	void ExecuteUbergraph_Attach_HazardSuit(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
