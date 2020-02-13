#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_ShockShank_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_ShockShank.Anim_ShockShank_C
// 0x00B8 (0x0328 - 0x0270)
class UAnim_ShockShank_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1EDC61494EA421D23288EA8843728A1E;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0C3946424C8F87A1D23B44860DFC1C55;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_42674141471884B6E6E5AEB7CB79E673;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_ShockShank.Anim_ShockShank_C");
		return ptr;
	}


	void AnimNotify_Notify_ShockShankAttack();
	void ExecuteUbergraph_Anim_ShockShank(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
