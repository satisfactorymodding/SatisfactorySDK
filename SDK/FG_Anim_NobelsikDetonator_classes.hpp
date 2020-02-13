#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_NobelsikDetonator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_NobelsikDetonator.Anim_NobelsikDetonator_C
// 0x0748 (0x09B8 - 0x0270)
class UAnim_NobelsikDetonator_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E151FFCB4AD7C925323BE287D14BB42E;      // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D73F83944553DD3451F561841194EF8D;// 0x0298(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6602158148EA7E55497DC0BDCC03BA41;// 0x0310(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_24779D844C9E26ABCCC0C78106E26245;// 0x0330(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AACD15EC442275219A7B14AFB9D15598;// 0x03E0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E4800C1F4BF948714A385E8C47B42631;// 0x0400(0x0020)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_7F3325E54B943D8E934BCAB23C6541B1; // 0x0420(0x0550)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_618D3D534D0D427C1F2657900679C1F2;      // 0x0970(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_NobelsikDetonator.Anim_NobelsikDetonator_C");
		return ptr;
	}


	void AnimNotify_NobeliskDetonate();
	void AnimNotify_NobeliskThrowRelease();
	void ExecuteUbergraph_Anim_NobelsikDetonator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
