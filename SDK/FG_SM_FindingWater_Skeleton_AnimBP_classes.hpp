#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_SM_FindingWater_Skeleton_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SM_FindingWater_Skeleton_AnimBP.SM_FindingWater_Skeleton_AnimBP_C
// 0x05BC (0x082C - 0x0270)
class USM_FindingWater_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E190AA3840ADF481CCA1249D06385632;      // 0x0278(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_96F201FD4CACA214C9C2E89138C9988A; // 0x02A0(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EA04CF8048C323BA5BFA1C8F6EBE1618;// 0x07F0(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_5AE76FD84798085A7B042DAD392705F0;// 0x0810(0x0010)
	struct FVector                                     mForce;                                                   // 0x0820(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SM_FindingWater_Skeleton_AnimBP.SM_FindingWater_Skeleton_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SM_FindingWater_Skeleton_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
