#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_MinerMk2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_MinerMk2.Anim_MinerMk2_C
// 0x0708 (0x1078 - 0x0970)
class UAnim_MinerMk2_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_81C3C5F74D26DD736D7792B7EFBA6754;      // 0x0978(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0F3C50AC4B8DD1532E2A3A92E011F1CA;// 0x0998(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62EED5B54FC0F87599A08AB91C8878BD;// 0x09C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5383FC6245FC913C36B979AFDF90F8D1;// 0x09E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F0A569A406F08FF75E608AFD729E238;// 0x0A10(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02F856D34995AB49820562ABDEBD78D2;// 0x0A38(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8DEDDF3146A164524A62C68151A3552D;// 0x0AB0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F117BD1D4D20650BB5393196D8873552;// 0x0AD0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9A02610D4B59053BDA804A8CE879B376;// 0x0B48(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE2C9852433CE4B3BC09FF9D31E07E21;// 0x0B68(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C092B6EC459FE957662F1492C8B21B01;// 0x0BE0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_245FE19C4AC0BB624424D6B28FE89931;// 0x0C00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_ECAFA84240D5F417322800A53AF7A0F5;// 0x0C78(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CD4FADD0493E28A01DAC4A8CF62B4B05;// 0x0C98(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_078CEEDA487886164A9BCABDE7130358;// 0x0CE0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_724C3F5B4D87CF7EE386E3B480B64016;// 0x0D00(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B09E37534533D87488634D8AF48FB0A5;// 0x0DB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E21833947DC6F75C2A178A42402E782;// 0x0DD8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8D7504034F34EC75CAA42780F8F66C9C;// 0x0E00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_402A801B4AD097693C918C922D695D21;// 0x0E78(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_DA7564D24D8FACBBF974FBA77187A10C;// 0x0E98(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FD9A72744A0CAB08FF3321B7BFB7BB48;// 0x0EE0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_678C460C489306B0EFFE359612FFBCAE;// 0x0F00(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1713A38D4E35639077B899BC029A55FA;// 0x0FB0(0x00B8)
	struct FTimerHandle                                mTimer;                                                   // 0x1068(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               mReadyForReload;                                          // 0x1070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1071(0x0003) MISSED OFFSET
	float                                              mReloadTimer;                                             // 0x1074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_MinerMk2.Anim_MinerMk2_C");
		return ptr;
	}


	void SetupReloadTimer();
	void ReloadTimer();
	void AnimNotify_MinerEnteredReloadState();
	void AnimNotify_StartDrillVFX();
	void BlueprintInitializeAnimation();
	void AnimNotify_OnResumeProducing();
	void AnimNotify_OnStopProducing();
	void AnimNotify_StartEngineLoop();
	void ExecuteUbergraph_Anim_MinerMk2(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
