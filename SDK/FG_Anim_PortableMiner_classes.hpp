#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_PortableMiner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_PortableMiner.Anim_PortableMiner_C
// 0x0340 (0x05B0 - 0x0270)
class UAnim_PortableMiner_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FDAA8F604D5A55636FA727B6EC4F5CDF;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9F22980F4C75DDCB8844E7AD5E61A50E;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73CC830A4A7FA7DBD81A0A8D8F99E468;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15450DBB48F88D37E85553A4CB1AD445;// 0x02E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91E544B14F208DE687641AB79478B8F4;// 0x0310(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4E642C81463E6E18D0566FB644878F2D;// 0x0388(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70241D21426D7B3B7D1B42B9CB547268;// 0x03A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F815005A48FF76184D1FFEB6D958DEB2;// 0x0420(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D860C157427174236E3FFF90CD772B2E;// 0x0440(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A521B85A4F7CF61DCF31AE8A23AAA2A4;// 0x04B8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FD868D13496EF025C4805E9C44CF7EF5;// 0x04D8(0x00B0)
	bool                                               mIsProducing;                                             // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0589(0x0003) MISSED OFFSET
	float                                              mAnimPlayRate;                                            // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mDeltaTime;                                               // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRampItUpTime;                                            // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mRampDownTime;                                            // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    mBurnerVfx;                                               // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mMineVfx;                                                 // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_PortableMiner.Anim_PortableMiner_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_PortableMiner_AnimGraphNode_TransitionResult_15450DBB48F88D37E85553A4CB1AD445();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_StartMiningVfxNotify();
	void AnimNotify_PortableMinerEnteredOfflineState();
	void AnimNotify_PortableMinerLeftOfflineState();
	void AnimNotify_StartBurnerVfxNotify();
	void ExecuteUbergraph_Anim_PortableMiner(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
