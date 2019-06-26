#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_ShockShank_structs.hpp"

namespace SDKEXP
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Attach_ShockShank.Attach_ShockShank_C
// 0x0018 (0x0378 - 0x0360)
class AAttach_ShockShank_C : public AFGEquipmentAttachment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attach_ShockShank.Attach_ShockShank_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayUseEffect(struct FVector* UseLocation);
	void PlayAttachEffects3P();
	void ExecuteUbergraph_Attach_ShockShank(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
