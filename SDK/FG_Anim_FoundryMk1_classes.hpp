#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_FoundryMk1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_FoundryMk1.Anim_FoundryMk1_C
// 0x0878 (0x11E8 - 0x0970)
class UAnim_FoundryMk1_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_34D3965F4DF4CFE697730C889C9AF15C;// 0x0978(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D53331A14D82704146FF47BA5971092D;// 0x0A30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_250E7CB949C86C034EBAA98E3DB7BF38;// 0x0A58(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A558F6B40F0ABBCD81B04B0D0A18299;// 0x0A80(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E7B20B247A5AE6DE15E2BA7C8C417CF;// 0x0AA8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FFED1120460C2DF91247928A8358EB26;// 0x0AD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3B08B1FF44EF23D88F3F1490F7446BBC;// 0x0B48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B5C2E72F498DC4EE16577A97413B0785;// 0x0B68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C8DE08BB404A155BAB386F9E37E9047A;// 0x0BE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8AA751E3476D5396B5C83FA328AAB20F;// 0x0C00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4F4F290B45597FA849C78888D2B2BD94;// 0x0C78(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0C8DA5BF41ACCA8D316DC1BFE3B52B51;// 0x0C98(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8C4F07A4424DDC9755E63385C95A68B6;// 0x0CE0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_14E005FB425FBF340713F3BC04705672;// 0x0D00(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_44C858B042BDD0D2EEF2E5B63FA661E1;// 0x0DB0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ACBCC9E34E93FDE7EAA351A582C5DB5A;// 0x0E68(0x0028)
	struct FAnimNode_Root                              AnimGraphNode_Root_A7BAFDA645E3DA25F43D30A117A112A7;      // 0x0E90(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82F9EFE444AF4500E522FEB1918EDC3E;// 0x0EB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_876F9B534B833CD716FA7F8814C9D609;// 0x0ED8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E0973BE4289C059C8FF2CABCF32BB11;// 0x0F00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_478A0DF447B868D2D5D7B8B1BCBFEA0B;// 0x0F28(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D76E953F4ECE2FB3E148CAB4DF336CD9;// 0x0F50(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BBC47A4F466526E43889C0A6475681BB;// 0x0FC8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC84A083460E556F599A68B6C142D420;// 0x0FE8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DBAC720A4092F75BBF06D8BE10140648;// 0x1060(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45FEB52E45768294FDA1B09B58E87AC5;// 0x1080(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CE184AA34D8BBEB63F91239AAC1B14EF;// 0x10F8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1284D67B43DE052D6BB35EB3CE77B919;// 0x1118(0x00B0)
	class UParticleSystemComponent*                    mBurnerParticle;                                          // 0x11C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mHeatParticle_01;                                         // 0x11D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mHeatParticle_02;                                         // 0x11D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mPressParticle;                                           // 0x11E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_FoundryMk1.Anim_FoundryMk1_C");
		return ptr;
	}


	void AnimNotify_SmelterEnteredProducingState();
	void AnimNotify_SmelterEnteredOfflineState();
	void AnimNotify_SmelterLeftProducingState();
	void AnimNotify_SmelterLeftOfflineState();
	void ExecuteUbergraph_Anim_FoundryMk1(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
