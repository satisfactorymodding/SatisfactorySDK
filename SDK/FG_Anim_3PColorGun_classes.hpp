#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_3PColorGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_3PColorGun.Anim_3PColorGun_C
// 0x0228 (0x0498 - 0x0270)
class UAnim_3PColorGun_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C04AFF824C2274357E73418EF766148E;      // 0x0278(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_791EC1B44098FA5D466EFA89ADD252B9;// 0x0298(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D2A21FB843ED1F7D9FA4729F4A5A811C;// 0x0310(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_ADA24DB44675385862759AA7E5C82EB7;// 0x0330(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_828011D64EB9833F4DBAFABAC9A342C5;// 0x0378(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D78CD3AC4ADE941B49ACE5A92702A99A;// 0x0398(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6A088DEC4FB9A9D1846BCFB693BB12EB;      // 0x0448(0x0048)
	bool                                               mIsEquipped;                                              // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsReloading;                                             // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mHasAmmunition;                                           // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0493(0x0001) MISSED OFFSET
	float                                              mSpeed;                                                   // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_3PColorGun.Anim_3PColorGun_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Anim_3PColorGun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
