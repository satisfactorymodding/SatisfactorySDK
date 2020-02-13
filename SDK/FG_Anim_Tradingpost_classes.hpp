#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_Tradingpost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_Tradingpost.Anim_Tradingpost_C
// 0x051E (0x078E - 0x0270)
class UAnim_Tradingpost_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E6FA5F88439461085529819F37FF46C6;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2F2E4B041DCD40120F55BBFCC8E0A46;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4FFA5BDF419A6592ECFC4895165E9632;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22EEA86B4A2F634DDF22FCA3B594EEF4;// 0x02E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CC829CE4586B65F8147D08B90CCF1F3;// 0x0310(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_467B016A4BF40A327C9E67850E6AE5E6;// 0x0338(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9F3C24B049153AF832369FB52F2FF818;// 0x0360(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF370BFA480AA3B189DF88B06C5F713C;// 0x0388(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C0084E6E438FADC804188CAF4245D5A1;// 0x03B0(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_78EB79994BEB8FB414798CABC2E8D221;// 0x03D8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4739C0A3493FA5F8A36448A4A171C9C7;// 0x03F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6769937E4FE8FD4D86EB3E9F94AA7A43;// 0x0470(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2150D3DF45259F649E5EBFA7624E020C;// 0x0490(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B940068247DCB45AA48C9B98D781E53F;// 0x04D8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E881C74542F16E90729064BEC92BDAB7;// 0x04F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18B02AD84B7D29697AFF5E874E01CC92;// 0x0570(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9828C9E14D54BB0DE472FF910989FA06;// 0x0590(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1BB3825848F63D01EB0EC79B6A442960;// 0x0608(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A267E94A4F7EAA0C8347189A3E90F537;// 0x0628(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DAA3863E4EBD4B0AF5C9D4AAECB4967C;// 0x0670(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3061A99447B4EAB1865684B42121B5E2;// 0x0690(0x00B0)
	bool                                               mShipAtTradingPost;                                       // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mShipReturn;                                              // 0x0741(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0742(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    mExhaustVfx_01;                                           // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mExhaustVfx_02;                                           // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mExhaustVfx_03;                                           // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mExhaustVfx_04;                                           // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mThrustVfx_01;                                            // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mThrustVfx_02;                                            // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mThrustVfx_03;                                            // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mThrustVfx_04;                                            // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mHasInitialTradingPostLandingAnimPlayed;                  // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mHasBegunPlay;                                            // 0x0789(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mEverythingIsReplicatedToClient;                          // 0x078A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_DecidestateToIdle;                                    // 0x078B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_DecidestateToLand;                                    // 0x078C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_AwayToLand;                                           // 0x078D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_Tradingpost.Anim_Tradingpost_C");
		return ptr;
	}


	void CalculateValues();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Tradingpost_AnimGraphNode_TransitionResult_22EEA86B4A2F634DDF22FCA3B594EEF4();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_SpawnExhaustVfx_01();
	void AnimNotify_SpawnExhaustVfx_02();
	void AnimNotify_SpawnExhaustVfx_03();
	void AnimNotify_SpawnExhaustVfx_04();
	void AnimNotify_SpawnThrustVfx_01();
	void AnimNotify_SpawnThrustVfx_02();
	void AnimNotify_ShipLeftTakeoffNotify();
	void AnimNotify_StopThrustVfx_01();
	void AnimNotify_StopThrustVfx_02();
	void AnimNotify_StopThrustVfx_04();
	void AnimNotify_StopThrustVfx_03();
	void AnimNotify_StopExhaustVfx_01();
	void AnimNotify_StopExhaustVfx_02();
	void AnimNotify_StopExhaustVfx_03();
	void AnimNotify_StopExhaustVfx_04();
	void BlueprintInitializeAnimation();
	void AnimNotify_OnInitialLand();
	void ExecuteUbergraph_Anim_Tradingpost(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
