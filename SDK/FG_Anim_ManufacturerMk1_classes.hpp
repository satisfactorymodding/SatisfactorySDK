#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_ManufacturerMk1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_ManufacturerMk1.Anim_ManufacturerMk1_C
// 0x05F8 (0x0FA8 - 0x09B0)
class UAnim_ManufacturerMk1_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E866FDE24797CD5F69EB46AEC57C529B;      // 0x09B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA726F7444281E7281A8ECBC930CFD58;// 0x09F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F6C2EB1457A8837BCEF2FB321C95FE7;// 0x0A40(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6792BB424B071CD96567C7AD7663E0B1;// 0x0A88(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_457C1B174B16BE0CF73C23982F383B06;// 0x0AD0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DD95CA145CE257DB557138EBF6CCD3C;// 0x0B18(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1FC8F7124976038CA71E9389D1D72354;// 0x0BB8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A6041BE0497DB1695E1092A3B6E7B225;// 0x0BF8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0907B90C4FD0805CDF3D50991784DF2A;// 0x0C98(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CB944E444C6800E012C59F818598A7A8;// 0x0CD8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_299B8E554500A3EF90C450B2F95E5B60;// 0x0D78(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11C755314269FFBA4D01E68E81C6CEDE;// 0x0DB8(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_84EBFD6D4CF390E0CCC84AB78247D0F3;// 0x0E98(0x00D8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3CF960704FFDD2F6265A7EA8470F2BB2;// 0x0F70(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_ManufacturerMk1.Anim_ManufacturerMk1_C");
		return ptr;
	}


	void AnimNotify_ConstructorComplexEnteredProducing();
	void AnimNotify_ConstructorComplexLeftProducing();
	void AnimNotify_ConstructorComplexLeftOffline();
	void AnimNotify_ConstructorAdvEnteredOffline();
	void ExecuteUbergraph_Anim_ManufacturerMk1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
